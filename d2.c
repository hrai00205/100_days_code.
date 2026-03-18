
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* swapPairwise(struct Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    struct Node* curr = head;
    struct Node* nextNode = head->next;

    curr->next = nextNode->next;
    nextNode->next = curr;
    
    struct Node* newHead = nextNode; 
    struct Node* prev = curr;       
    curr = curr->next;              

    while (curr != NULL && curr->next != NULL) {
        nextNode = curr->next;

        curr->next = nextNode->next;
        nextNode->next = curr;

        prev->next = nextNode;

        prev = curr;
        curr = curr->next;
    }

    return newHead;
}

struct Node* createNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    head = swapPairwise(head);
    printList(head);

    return 0;
}
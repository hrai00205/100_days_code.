#include <stdio.h>
int main () {
    int size , element , position , i ;

    if (size < 0 || size == 1){
        printf("invild size ");
    }else {
        printf("Enter the size of an array");
    scanf ("%d" , &size );

    }
    int array[size+1];

    printf("Enter %d element " , size);

    for ( i = 0 ; i < size ; i++){
        printf("Enter element %d " , i+1);
        scanf("%d" , &array[i]);
    }

    printf("Enter the element to be insert in this array ");
    scanf("%d" , &element );

    printf("Enter position to insert this element ");
    scanf("%d" , &position);


    if  (position < 1 || position > size +1){
        printf("invild positon to enter a element ");
    }

    for ( i = size ; i >= position ; i--){
        array[i+1] = array[i];
    }
    array[position] = element ;

    size ++;

    printf("after insertion ");

    for ( i = 0 ; i < size ; i++){
        printf("%d" , array[i]);
    }
    return 0 ;


}
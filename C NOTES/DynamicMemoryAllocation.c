#include<stdio.h>
#include<stdlib.h>  //required for DMA

void main(){

    ////sizeoff function (returns the size of the data type)
    // printf("%d\n", sizeof(int));
    // printf("%d\n", sizeof(float));
    // printf("%d\n", sizeof(char));

    ////malloc (to be used when size is know only while program runs or when we need memory whose size can change)
    // int *ptr;
    // ptr = (int*)malloc(5 * sizeof(int));

    // ptr[0] = 1;
    // ptr[1] = 2;
    // ptr[2] = 3;
    // ptr[3] = 4;
    // ptr[4] = 5;

    // for(int i=0;i<5;i++){
    //     printf("%d\n", ptr[i]);
    // }

    //Q) write a program to store 5 prices

    // int *ptr;
    // ptr = (int*)malloc(5 * sizeof(int));
    // for(int i=0;i<5;i++){
    //     printf("Enter price of %d item: ", i+1);
    //     scanf("%d", &ptr[i]);
    // }

    ////calloc (basically its just malloc() + initialization at 0)
    // int *ptr;
    // ptr = (int*)calloc(5, sizeof(int));

    // for(int i=0;i<5;i++){
    //     printf("%d\n", ptr[i]);
    // }

    //Q) write a program to allocate memory of size n, where n is entered by user
    // int *ptr;
    // int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);

    // ptr = (int*)calloc(n, sizeof(int));
    // for(int i=0;i<n;i++){
    //     printf("%d\n", ptr[i]);
    // }

    ////free (used to free up the allocated memory to malloc and calloc)
    // int *ptr;
    // int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);

    // ptr = (int*)calloc(n, sizeof(int));
    // for(int i=0;i<n;i++){
    //     printf("%d\n", ptr[i]);
    // }

    // free(ptr);      //free() function
    // ptr = NULL;

    // ptr = (int*)calloc(2, sizeof(int));
    // for(int i=0;i<2;i++){
    //     printf("%d\n", ptr[i]);
    // }    

    ////realloc (used to increase or decrease memory allocated by malloc or calloc using the same pointer and size)

    //Q)allocate memory to 5 numbers. then dynamically increase it to 8 numbers
    // int *ptr;
    // ptr = calloc(5, sizeof(int));
    // for(int i=0;i<5;i++){
    //     printf("%d\n", ptr[i]);
    // } 

    // printf("this is just to distinguish between the two.\n");

    // ptr = realloc(ptr, 8 * sizeof(int));
    // for(int i=5;i<8;i++){
    //     ptr[i] = 0;
    // }
    // for(int i=0;i<8;i++){
    //     printf("%d\n", ptr[i]);
    // } 
    // free(ptr);
    // ptr = NULL;

    //Q)create an array of size 5(using calloc) and enter its values from the user
    // int *ptr;
    // ptr = calloc(5, sizeof(int));
    // for(int i=0;i<5;i++){
    //     printf("Enter element %d of array: ", i+1);
    //     scanf("%d", &ptr[i]);
    // }
    // for(int i=0;i<5;i++){
    //     printf("%d\t", ptr[i]);
    // }
    // free(ptr);
    // ptr = NULL;

    //Q)allocate memory to store first 5 odd numbers, then reallocate it to store first 6 even numbers
    int *ptr;
    ptr = calloc(5, sizeof(int));
    for(int i=0;i<10;i++){
        if(i%2 != 0){
            printf("%d\n", i);
        }
    }
    printf("\n");
    ptr = realloc(ptr, 6 * sizeof(int));
    for(int i=1;i<13;i++){
        if(i%2 == 0){
            printf("%d\n", i);
        }
    }
    free(ptr);
    ptr = NULL;
}
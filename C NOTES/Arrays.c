#include <stdio.h>

//printing numbers function in array
// void printNumber(int arr[], int n);
// void printNumber(int arr[], int n){
//     for(int i=0;i<n;i++){
//         printf("%d \t", arr[i]);
// 	}
// }
//printing odd numbers function in array
// int countOdd(int arr[], int n);
// int countOdd(int arr[], int n){
//     int count = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i] % 2 != 0){
//             count++;
//         }
//     }
//     return count; // I forgot this
// }

//printing reverse array
void rev(int arr[], int n);
void rev(int arr[], int n) {
	for(int i=0; i<n/2; i++) {
		int firstValue = arr[i];
		int secondValue = arr[n-i-1];
		arr[i] = secondValue;
		arr[n-i-1] = firstValue;
	}
}
void printArr(int arr[], int n);
void printArr(int arr[], int n) {
	for(int i=0; i<n; i++) {
		printf("%d \t", arr[i]);
	}
}
void main()
{
	int arr[] = {1,2,3,4,5};
	rev(arr, 5);
	printArr(arr, 5);

	// 	int arr[] = {1,2,3,4,5,6};
	// 	printf("Odd numbers are: %d", countOdd(arr, 6));

	// 	write program to enter price of 3 items and calculate total price with gst
	// 	float cost[3];
	// 	printf("Enter cost of item 1: ");
	// 	scanf("%f", &cost[0]);
	// 	printf("Enter cost of item 2: ");
	// 	scanf("%f", &cost[1]);
	// 	printf("Enter cost of item 3: ");
	// 	scanf("%f", &cost[2]);
	// 	printf("Final cost is: %f", (cost[0]+cost[1]+cost[2])*0.18 + (cost[0]+cost[1]+cost[2]));

	// 	int age = 20;
	// 	int *ptr = &age;
	// 	printf("%u\n", ptr);
	// 	ptr--;
	// 	printf("%u\n", ptr);
	// 	ptr++;
	// 	printf("%u", ptr);

	// 	pointer increment/decrement
	// 	char hi = 'a';
	// 	char *ptr = &hi;
	// 	printf("%u\n", ptr);
	// 	ptr++;
	// 	printf("%u\n", ptr);
	// 	ptr--;
	// 	printf("%u\n", ptr);

	// 	pointer subtraction
	// 	int mark = 90;
	// 	int marks = 95;
	// 	int *ptr = &mark;
	// 	int *ptrs = &marks;
	// 	printf("%u\n", ptr);
	// 	printf("%u", ptrs);
	// 	printf(" Minus is: %u", ptr - ptrs);

	// 	int mark[2][3];
	// 	mark[0][0] = 90;
	// 	mark[0][1] = 95;
	// 	mark[0][2] = 97;

	// 	mark[1][0] = 91;
	// 	mark[1][1] = 92;
	// 	mark[1][2] = 93;
	// 	printf("marks is %d", mark[1][2]);

	//Q) create 2-D array, for tables of 2 and 3

	// int table[2][10];

	// for(int i=0; i<10; i++){
	//     table[0][i] = 2*(i+1);
	//     table[1][i] = 3*(i+1);
	// }

	// printf("Table of 2 is: ");
	// for(int i=0; i<10;i++){
	//     printf("%d \t", table[0][i]);
	// }

	// printf("\nTable of 3 is: ");
	// for(int i=0; i<10;i++){
	//     printf("%d \t", table[1][i]);
	// }










}
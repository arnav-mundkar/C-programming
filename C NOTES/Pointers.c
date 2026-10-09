#include<stdio.h>

// void main(){
//     int mark = 96;
//     int *ptr = &mark;
//     printf("%p\n",&mark);
//     printf("%u\n",&mark);
// }

// see output
// void main(){
//     int x;
//     int *ptr;
//     ptr = &x;
//     *ptr = 0;

//     printf("x is %d\n", x);
//     printf("*ptr is %d\n", *ptr);

//     *ptr += 5;
//     printf("x is %d\n", x);
//     printf("*ptr is %d\n", *ptr);

//     (*ptr)++;
//     printf("x is %d\n", x);
//     printf("*ptr is %d\n", *ptr);
// }

//Q) print value of 'i' from its pointer to pointer
// void main(){
//     int i = 5;\
//     int *ptr = &i;
//     int **pptr = &ptr;

//     printf("value of i = %d\n", **pptr);
// }

//Q) swap two numbers a and b
//call by value (normal)
// void swap(int a, int b);
// void swap(int a, int b){
//     int t = a;
//     a = b;
//     b = t;
//     printf("a = %d and b = %d\n", a,b);
// }
// void main(){
//     int x = 3, y = 5;
//     swap(x, y);
//     printf("x = %d and y = %d", x,y);
// }

//call by reference (pointer)
// void _swap(int *a, int *b);
// void _swap(int *a, int *b){
//     int t = *a;
//     *a = *b;
//     *b = t;
// }

// void main(){
//     int x = 3, y = 5;
//     _swap(&x, &y);
//     printf("x = %d and y = %d", x,y);
// }

//Q) write function to calculate sum, average and product of 2 numbers. print all these in main function also
int func(int a, int b, int *sum, int *prod, int *avg);
int func(int a, int b, int *sum, int *prod, int *avg) {
	*sum = a+b;
	*avg = (a+b)/2;
	*prod = a*b;
}

void main() {
	int a = 2, b = 3;
	int sum, avg, prod;
	func(a, b, &sum, &prod, &avg);
	printf("Sum is %d, Product is %d, Average is %d", sum, prod,avg);
}
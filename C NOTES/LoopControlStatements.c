#include <stdio.h>

// FOR LOOP

//Q) print numbers from 0 to 10
// void main(){
//     for(int i=0; i<=10; i=i+1){
//         printf("%d \n", i);
//     }
// }

// void main(){
//     for(char alph='A'; alph<='Z'; alph=alph+1){
//         printf("%c \n", alph);
//     }
// }

// WHILE LOOP

// void main(){
//     int i=1;
//     while(i<=5){
//         printf("%d \n", i);
//         i++;
//     }
// }

//Q) print squares from 0 to n, n is given by user
// void main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int i=1;
//     while(i<=n){
//         printf("%d \n", i*i);
//         i++;
//     }
// }

//Q) print table of number entered by user
// void main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     int i=1;
//     while(i<=10){
//         printf("%d \n", i*n);
//         i++;
//     }
// }

//Q) keep taking numbers as input from user until user enters odd number
// void main(){
//     int n;
//     for(int i=0; 1;i++){
//         printf("Enter a number: ");
//         scanf("%d", &n);
//         printf("%d \n", n);
//         if(n % 2 != 0){
//             printf("Thank You!");
//             break;
//         }
//     }
// }

//Q) print all odd numbers from 5 to 50
// void main(){
//     for(int i=5; i<=50; i++){
//         if(i % 2 != 0){
//             printf("%d \n", i);
//         }
//     }
// }

//Q) print the factorial of a number n
// void main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     int fact = 1;
//     for(int i = 1; i<=n; i++){
//         fact = fact*i;
//     }
//     printf("Factorial is %d", fact);
// }

//Q) print sum of all numbers between 5 and 50, including both 5 and 50
// void main(){
//     int sum=0;
//     for(int i=5; i<=50; i++){
//         sum = sum+i;
//     }
//     printf("Required sum is %d", sum);
// }

//Q) print staircase pattern
// void main(){
//     int j;
//     for(int i = 1; i<=4; i++){
//         for(j = i; j>=1; j--){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

//Q) program to check if a number is prime or not
void main() {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	int is_prime = 1;
	if(n <= 1) {
		is_prime = 0;
	}
	else {
		for(int i = 2; i*i<=n; i++) {
			if(n % i == 0) {
				is_prime = 0;
				break;
			}
		}
	}
	if(is_prime == 1) {
		printf("%d is prime.", n);
	}
	else {
		printf("%d is not prime.", n);
	}
}
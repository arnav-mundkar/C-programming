#include<stdio.h>

// void pHW(int n);
// void pHW(int n){
//     if(n == 0){
//         return;
//     }
//     printf("Hello World\n");
//     pHW(n-1);
// }
// void main(){
//     pHW(5);
// }

//Q) find sum of first n natural numbers
// int sum(int n);
// int sum(int n){
//     if (n == 1){
//         return 1;
//     }
//     int sum1 = sum(n-1);
//     int sumT = sum1 + n;
//     return sumT;
// }
// void main(){
//     printf("The sum is: %d", sum(5));
// }

//Q) factorial of n
// int fac(int n);
// int fac(int n){
//     if (n == 1){
//         return 1;
//     }
//     int fac1 = fac(n-1);
//     int facT = fac1 * n;
//     return facT;
// }
// void main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printf("The factorial is: %d", fac(n));
// }

//Q) convert celcius to fahrenheit
// float temp(float cel);
// float temp(float cel){
//     float far = (cel * 1.8) + 32;
//     return far;
// }
// void main(){
//     float n;
//     printf("Enter temperature :");
//     scanf("%f", &n);
//     float far = temp(n);
//     printf("temperature in fahrenheit is: %f", far);
// }

//Q) calculate percentage
float perc(float mark);
float perc(float mark)
{
	float percT = (mark/300.0)*100.0;
	return percT;
}
void main()
{
	float sa, ma, sc;
	printf("Enter marks in Sanskrit:");
	scanf("%f", &sa);
	printf("Enter marks in Math:");
	scanf("%f", &ma);
	printf("Enter marks in Science:");
	scanf("%f", &sc);
	float n = sa + ma + sc;
	float percT = perc(n);
	printf("Percentage is: %f", percT);
}
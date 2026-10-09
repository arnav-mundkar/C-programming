#include<stdio.h>

// void main(){
//     int age;
//     printf("Enter your age: ");
//     scanf("%d", &age);

//     if (age>=18)
//     {
//         printf("You are an adult.");
//     }
//     else if (age > 13 && age <= 18)
//     {
//         printf("You are a teenager.");
//     }
//     else{
//         printf("You are a kid.");
//     }

//    // age >= 18 ? printf("Adult") : printf("Not Adult"); Ternary operator
// }

// void main(){
//     int days;
//     printf("Enter a number from 1-7: ");
//     scanf("%d", &days);

//     switch(days){
//         case 1 : printf("Monday");
//         break;
//         case 2 : printf("Tuesday");
//         break;
//         case 3 : printf("Wednesday");
//         break;
//         case 4 : printf("Thursday");
//         break;
//         case 5 : printf("Friday");
//         break;
//         case 6 : printf("Saturday");
//         break;
//         case 7 : printf("Sunday");
//         break;
//         default : printf("Please enter correct number.");
//     }
// }

//Q) write program to check if student passed or failed
// void main(){
//     int marks;
//     printf("Enter marks: ");
//     scanf("%d", &marks);

//     if(marks > 30 && marks <= 100){
//         printf("Pass");
//     }
//     else if(marks >= 0 && marks <= 30){
//         printf("Fail");
//     }
//     else{
//         printf("Enter valid marks!");
//     }
// }

//Q) write program to allocate grades
void main() {
	int marks;
	printf("Enter your marks: ");
	scanf("%d", &marks);

	if(0 <= marks && marks < 30) {
		printf("C");
	}
	else if(30 <= marks && marks < 70) {
		printf("B");
	}
	else if(70 <= marks && marks < 90) {
		printf("A");
	}
	else if(90 <= marks && marks <= 100) {
		printf("A+");
	}
	else {
		printf("Enter valid marks!");
	}
}
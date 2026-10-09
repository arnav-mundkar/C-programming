#include<stdio.h>
#include<math.h>

//Q)Write two separate functions to print hello and goodbye

// void Hello();
// void Hello(){
//     printf("Hello!\n");
// }

// void Gbye();
// void Gbye(){
//     printf("Good-Bye!");
// }

// void main(){
//     Hello();
//     Gbye();
// }

//Q) write a function to print Namaste if user is Indian or Bonjour if user is French
// void printNamaste();
// void printNamaste(){
//     printf("Namaste!");
// }

// void printBonjour();
// void printBonjour(){
//     printf("Bonjour!");
// }

// void main(){
//     int a;
//     printf("Press 1 if you are Indian, Press 2 if you are French: ");
//     scanf("%d", &a);

//     if(a == 1){
//         printNamaste();
//     }
//     else if(a == 2){
//         printBonjour();
//     }
//     else{
//         printf("Please enter valid value!");
//     }
// }

//Print Table
// void printTable(int n);

// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     printTable(n);
// }

// void printTable(int n){
//     for(int i=1; i<=10; i++){
//         printf("%d \n", (i*n));
//     }
// }

//Q) calculate square of user given number by pow function
// void main(){
//     float n;
//     printf("Enter a number: ");
//     scanf("%f", &n);
//     printf("The square of given number is %f", pow(n, 2));
// }

//Q) write functions to calculate area of square, circle and rectangle
void Asquare(int side);
void Acircle(float rad);
int Arec(int a, int b);

void main() {
	char s,c,r;
	char d;
	printf("Please enter s,c,r for respective areas of square, circle or rectangle.");
	scanf("%c", &d);

	if(d == 's') {
		int side;
		printf("Enter side: ");
		scanf("%d", &side);
		Asquare(side);
	}
	else if(d == 'c') {
		float rad;
		printf("Enter radius: ");
		scanf("%f", &rad);
		Acircle(rad);
	}
	else if(d == 'r') {
		int a,b;
		printf("Enter length: ");
		scanf("%d", &a);
		printf("Enter breadth: ");
		scanf("%d", &b);
		Arec(a,b);
	}
	else {
		printf("Please enter valid characters!");
	}
}


void Asquare(int side) {
	side = side*side;
	printf("area of square is: %d", side);
}
void Acircle(float rad) {
	rad = 3.14*rad*rad;
	printf("area of circle is: %f", rad);
}
int Arec(int a, int b) {
	printf("area of rectangle is: %d", a*b);
	return a*b;
}
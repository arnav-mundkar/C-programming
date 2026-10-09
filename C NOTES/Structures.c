#include<stdio.h>
#include<string.h>

// structure is user-defined data type
// struct student {
    // char name[50];
    // int roll;
    // float cgpa;
// };

//Structures in functions
// void printInfo(struct student s1);
// void printInfo(struct student s1){
//     printf("Student\n");
//     printf("Name: %s\n", s1.name);
//     printf("Roll number: %d\n", s1.roll);
//     printf("CGPA: %f\n", s1.cgpa);
// }

// typedef keyword      (used to create nickname type thing for structures(or any other data type, but mostly structure))
// typedef struct ComputerScienceEngineeringStudent{
//     char name[50];
//     int roll;
//     float cgpa;
// } cse;
// void main(){

//     cse s1 = {"Arnav", 11, 9.0};
//     printf("Name is %s, roll number is %d and CGPA is %f", s1.name,s1.roll,s1.cgpa);

    //for function/structure example
    // struct student s1 = {"Arnav", 11, 9.5};
    // printInfo(s1);

    //Q) store details of 3 students using structures
    // struct student s[3];
    // for(int i=0;i<3;i++){
    //     printf("Enter name: ");
    //     scanf("%s", &s[i].name);
    //     printf("Enter roll number: ");
    //     scanf("%d", &s[i].roll);
    //     printf("Enter CGPA: ");
    //     scanf("%f", &s[i].cgpa);
    // }
    // for(int i=0; i<3;i++){
        // printf("\nStudent %d\n", i+1);
        // printf("Name: %s\n", s[i].name);
        // printf("Roll number: %d\n", s[i].roll);
        // printf("CGPA: %f\n", s[i].cgpa);
    // }

    //Structure initializations 
    // struct student s1 = {"Arnav", 11, 9.5};
    // printf("Name is %s, roll number is %d and CGPA is %f", s1.name,s1.roll,s1.cgpa);

    //Pointers to Structures
    // struct student s1 = {"Arnav", 11, 9.5};
    // printf("Roll number is %d\n",s1.roll);

    // struct student *ptr = &s1;
    // printf("Roll number is %d",ptr->roll);  //or (*ptr).roll, though arrow is mostly preffered
// }    

//Q)enter address(house no, block, city,state) of 5 people
// typedef struct address{
//     int houseNo;
//     int block;
//     char city[50];
//     char state[50];
// } add;

// void main(){
//     add addresses[5];
//     for(int i=0;i<5;i++){
//         printf("Person %d\n", i+1);
//         printf("Enter house no.: ");
//         scanf("%d", &addresses[i].houseNo);
//         printf("Enter block: ");
//         scanf("%d", &addresses[i].block);
//         printf("Enter city: ");
//         scanf("%s", &addresses[i].city);
//         printf("Enter state: ");
//         scanf("%s", &addresses[i].state);
//     }
//     for(int i=0;i<5;i++){
//         printf("\nPerson %d\n", i+1);
//         printf("House no is %d, Block is %d, City is %s and State is %s", addresses[i].houseNo, addresses[i].block, addresses[i].city, addresses[i].state);
//     }
// }

//Q)create structure to store 2 vectors and then calculate their sum
// struct Vector{
//     int x;
//     int y;
// } ;
// struct Vector sum(struct Vector v1, struct Vector v2);
// struct Vector sum(struct Vector v1, struct Vector v2){
//     struct Vector result;
//     result.x = v1.x + v2.x;
//     result.y = v1.y + v2.y;
//     return result;
// }
// void main(){
//     struct Vector v1,v2,result;

//     printf("Enter x and y for v1: ");
//     scanf("%d %d", &v1.x, &v1.y);

//     printf("Enter x and y for v2: ");
//     scanf("%d %d", &v2.x, &v2.y);

//     result = sum(v1,v2);
//     printf("Sum of vectors: (%d,%d)", result.x, result.y);
// }

//Q)create a structure to store a complex number
struct complex{
    int real;
    int imaginary;
};

void main(){
    struct complex number;
    struct complex *num = &number;
    printf("Enter real part: ");
    scanf("%d", &num->real);
    printf("Enter imaginary part: ");
    scanf("%d", &num->imaginary);
    
    printf("Complex number is %d + %di", num->real, num->imaginary);
}
#include<stdio.h>

void main(){
    FILE *fptr;

    //Read mode
    // fptr = fopen("FIO1.txt","r");       //opens the file
    // char ch;
    // fscanf(fptr, "%c", &ch);
    // printf("Word in file is: %c\n", ch);        //this will print only one element from that file, for subsequent elements you need to copy/paste these two steps again and again until your work is done)
    // fscanf(fptr, "%c", &ch);
    // printf("Word in file is: %c\n", ch); 
    // fscanf(fptr, "%c", &ch);
    // printf("Word in file is: %c\n", ch); 
    // fscanf(fptr, "%c", &ch);
    // printf("Word in file is: %c\n", ch); 
    // fscanf(fptr, "%c", &ch);
    // printf("Word in file is: %c\n", ch); 

    //Write mode
    // fptr = fopen("FIO1.txt", "w");
    // fprintf(fptr, "%c", 'B');
    // fprintf(fptr, "%c", 'y');
    // fprintf(fptr, "%c", 'e');

    //Append mode
    // fptr = fopen("FIO1.txt", "a");
    // fprintf(fptr, "%c", ' ');
    // fprintf(fptr, "%c", 'B');
    // fprintf(fptr, "%c", 'y');
    // fprintf(fptr, "%c", 'e');

    //fgetc(to read)
    // fptr = fopen("FIO1.txt", "r");
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));

    //fputc(to write)
    // fptr = fopen("FIO1.txt", "w");
    // fputc('B', fptr);
    // fputc('y', fptr);
    // fputc('e', fptr);

    //reading whole file
    // fptr = fopen("FIO1.txt", "r");
    // char ch;
    // ch = fgetc(fptr);
    // while(ch != EOF){
    //     printf("%c", ch);
    //     ch = fgetc(fptr);
    // }

    //Q) read 5 integers from a file.
    // fptr = fopen("FIO1.txt", "r");
    // int n;
    // fscanf(fptr, "%d", &n);
    // printf("Number: %d\n", n);
    // fscanf(fptr, "%d", &n);
    // printf("Number: %d\n", n);
    // fscanf(fptr, "%d", &n);
    // printf("Number: %d\n", n);
    // fscanf(fptr, "%d", &n);
    // printf("Number: %d\n", n);
    // fscanf(fptr, "%d", &n);
    // printf("Number: %d\n", n);    

    //Q) take input of information of student and print it in another file
    // fptr = fopen("FIO1.txt", "w");
    // char name[50];
    // int age;
    // float cgpa;
    // printf("Enter your name: ");
    // scanf("%s", name);
    // printf("Enter your age: ");
    // scanf("%d", &age);
    // printf("Enter your cgpa: ");
    // scanf("%f", &cgpa);
    
    // fprintf(fptr, "Student name: %s\n", name);
    // fprintf(fptr, "Student age: %d\n", age);
    // fprintf(fptr, "Student CGPA: %f\n", cgpa);

    //Q)write a program to print all odd numbers from 1 to n in a separate file
    // fptr = fopen("FIO1.txt", "w");
    // int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // for(int i=1; i<=n;i++){
    //     if(i%2 != 0){
    //         fprintf(fptr, "%d\n", i);
    //     }
    // }

    //Q) two numbers a and b are written in a file. write program to replace them with their sum

    // first put 2 numbers in the text file, then it will work
    fptr = fopen("FIO1.txt", "r");
    int a,b;
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);
    fclose(fptr); 

    fptr = fopen("FIO1.txt", "w");
    int sum = a+b;
    fprintf(fptr, "%d", sum);

    fclose(fptr);                  //closes the file
}
//10:04:55 video
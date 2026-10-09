#include<stdio.h>
#include<string.h>
#include<ctype.h>

// function to calculate string length
// int countLength(char arr[]);
// int countLength(char arr[]){
//     int count = 0;
//     for(int i=0; arr[i] != '\0'; i++){
//         count++;
//     }
//     return count-1; //value of count increases as i increases, and i includes \0 also, so do count-1
// }

//Q) write a function to count occurence of vowels in a string
// int countVowel(char str[]);
// int countVowel(char str[]){
//     int count = 0;
//     for(int i=0; str[i] != '\0'; i++){
//         if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
//             count++;
//         }
//     }
//     return count;
// }

//Q) check if a certain character is present in an input string or not
// int checkChar(char str[]);
// int checkChar(char str[]){
//     int found = 0;
//     for(int i=0; str[i] != '\0'; i++){
//         if(str[i] == 'H'){
//             found = 1;
//         }
//     }                       //trick is to assume value of new variable initially as 0; then assign it as 1, if
//                             //condition is true, no if value does not change
//     if(found == 1){
//         printf("Yes");
//     }
//     else{
//         printf("No");
//     }
// }

void main() {
	// checkChar question body
	// char arr[50];
	// printf("Enter a word: ");
	// fgets(arr, 50, stdin);
	// printf("Character 'H' is present in input word: ");
	// checkChar(arr);

	//vowel question body
	// char word[50];
	// printf("Enter a word: ");
	// fgets(word, 50, stdin);
	// printf("Vowels are: %d", countVowel(word));

	//simple string example
	// char name[40];
	// printf("Enter a name: ");
	// scanf("%s", name);
	// printf("My name is %s", name);

	// use this to input strings with spaces
	// char str[10];
	// fgets(str, 10, stdin); //ALWAYS use fgets over gets
	// puts(str);

	//Q) make program to input user name and tell its size
	// char name[100];
	// printf("Enter your name: ");
	// fgets(name, 100, stdin);
	// printf("Length of string is %d", countLength(name));

	//library function strlen   //calculates length of string
	// char class[] = "singh";
	// printf("length is %d", strlen(class));

	//library function strcpy   //replaces content of first string with second string
	// char oldstr[] = "old";
	// char newstr[] = "new";
	// strcpy(newstr, oldstr);
	// puts(newstr);

	//library function strcat   // concatenation means to join two strings
	// char firststr[] = "Arnav ";
	// char secondstr[] = "Mundkar";
	// strcat(firststr, secondstr);
	// puts(firststr);

	//library function strcmp   //compares 2 strings(based on ASCII characters of each individual letter)
	// char str1[] = "Tea";                  //string 1 = string 2 --> gives 0
	// char str2[] = "Coffee";                  //string 1 > string 2 --> positive
	// printf("%d", strcmp(str1, str2));       //string 1 < string 2 --> negative

	//Q) find salted form of a password entered by user if the salt is '123' and added at the end
	// char pass[50];
	// char salt[] = "123";
	// printf("Enter your password: ");
	// scanf("%s", pass);
	// strcat(pass, salt);
	// puts(pass);

	//Q) write a program to remove blank spaces in a string
	// char str[50];
	// int i, j = 0;
	// printf("Enter a string: ");
	// fgets(str, 50, stdin);\

	// for(i=0;str[i] != '\0';i++){
	//     if(str[i] != ' '){
	//         str[j] = str[i];
	//         j++;
	//     }
	// }
	// str[j] = '\0';
	// printf("String after removing spaces is: %s", str);
	// return 0;

	//Q) convert uppercase letters to lowercase and vice versa for an input string
	// char str[50];
	// printf("Enter a string to convert: ");
	// fgets(str, 50, stdin);                  //using the ctype.h library(useful for questions like this)

	// for(int i=0; str[i] !='\0';i++){
	//     if(islower(str[i])){                //islower checks if character is lowercase
	//         str[i] = toupper(str[i]);       //toupper converts lowercase to uppercase
	//     }
	//     else if(isupper(str[i])){           //isupper checks if character is uppercase
	//         str[i] = tolower(str[i]);       //tolower converts uppercase to lowercase
	//     }
	// }
	// printf("The modified string is: %s", str);
}
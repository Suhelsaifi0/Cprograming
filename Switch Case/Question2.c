#include<stdio.h>
int main(){

    char ch;
    printf("ENTER CHARACTER : ");
    scanf("%c", &ch);

    switch(ch){
       
       case 'a':
       printf("a is Vowel");
       break;

       case 'e':
       printf("e is Vowel");
       break;

       case 'i':
       printf("i is Vowel");
       break;

       case 'o':
       printf("o is Vowel");
       break;

       case 'u':
       printf("u is Vowel");
       break;

       case 'A':
       printf("a is Vowel");
       break;

       case 'E':
       printf("e is Vowel");
       break;

       case 'I':
       printf("i is Vowel");
       break;

       case 'O':
       printf("o is Vowel");
       break;

       case 'U':
       printf("u is Vowel");
       break;

       default:
       printf("IT IS A CONSONENT");
    }

    return 0;
}
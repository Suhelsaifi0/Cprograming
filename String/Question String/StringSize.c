#include<stdio.h>
#include<string.h>

int main(){

    char str[40];
    printf("Enter String Here : \n");
    scanf("%[^\n]s", str);
    printf("The Size of String is : "); 
    // Size
    int size = 0;
    int i = 0;
    while(str[i] != '\0'){
        size++;
        i++;
    }

    printf("%d", size);
    

    return 0;
}
#include<stdio.h>
#include<string.h>

int main(){
    
    char str[40];
    puts("Enter input :");
    // scanf("%s", str); // We Take Input as String
    scanf("%[^\n]s", str); 
    // gets(str);
    printf("You Write : %s", str);

    return 0;
}
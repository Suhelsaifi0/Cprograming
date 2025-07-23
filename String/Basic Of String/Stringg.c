#include<stdio.h>
#include<string.h>
int main(){
    
    // char arr1[10] = "Suhel Saifi";
    char arr[10];
    // int i=0; 
    // while(arr[i] != '\0'){
    //     printf("%c", arr[i]);
    //     i++;
    // } 
    
    // Haam Isse Bhi Print Kar Saakte Hai Use Karna hai %s With String Library
    scanf("%[^\n]s", arr);
    printf("%s", arr);


    return 0;
}
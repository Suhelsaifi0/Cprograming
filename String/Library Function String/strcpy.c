#include<stdio.h>
#include<string.h>

int main(){

    char str1[] = "Suhel Saifi";
    char str2[12];

    strcpy(str2, str1);
    str2[2] = 'M';
    printf("%s", str2);

    return 0;
}
#include<Stdio.h>
#include<string.h>
int main(){

    char str1[] = "Suhel Saifi";
    char* str2 = str1;
    str1[0] = 'M';
    printf("%s", str2);

    return 0;
}
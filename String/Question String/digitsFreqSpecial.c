#include<stdio.h>
int main()
{
    // 65-90  97-122 48-57
    char str[100];
    int i,a=0,d=0,s=0;
    printf("\nEnter The String : ");
    scanf("%[^\n]s",&str);
    for(i=0; str[i]!='\0'; i++)
    {
        if((str[i]>=65&&str[i]<=90) || (str[i]>=97&&str[i]<=122))
            a++;
        else if (str[i]>=48&&str[i]<=57)
            d++;
        else
            s++;
    }
    printf("\nTotal Alphabets    : %d",a);
    printf("\nTotal Digits       : %d",d);
    printf("\nTotal Special      : %d",s);
    return 0;
}
 
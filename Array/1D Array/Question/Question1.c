#include<stdio.h>

int main(){

    int n;
    printf("ENTER THE NUMBER OF STUDENT : \n");
    scanf("%d ", &n);

    int marks[n];
    printf("ENTER MARKS OF THE STUDENT : \n");
    for(int i=0; i<n; i++){
        scanf("%d", &marks[i]);
         
         if(marks[i] < 35){
            printf("Index %d has less than 35 ", i);
         }
    }

    return 0;
}


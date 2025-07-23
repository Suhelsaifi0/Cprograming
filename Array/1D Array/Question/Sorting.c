#include <stdio.h>
int main()
{

    int i,j,n;
    printf("ENTER NUMBER HERE : ");
    scanf("%d",&n);
    
    printf("ENTER ARRAY HERE : ");
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   
    printf("PRINTNG ARRAY : ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    //  printf("\n");
    // sorting in accending order

    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(a[i]>a[j]){
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nsorting in accending order\n");
     for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    // sorting in decending order

for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]>a[j]){
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nsorting in decending order\n");
     for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
        
}
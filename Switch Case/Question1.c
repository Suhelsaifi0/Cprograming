#include<stdio.h>
int main(){

    int week;
    printf("ENTER WEEK : ");
    scanf("%d", &week);

    switch(week){
        
        case 0:
        printf("Sunday");
        break;

        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("Wednesday");
        break;

        case 4:
        printf("Thrusday");
        break;

        case 5:
        printf("Friday");
        break;

        case 6:
        printf("Saturady");
        break;        

        default:
        printf("WEEK DAY IS NOT MORE THAN 7 DAY");

    };

    return 0;
}
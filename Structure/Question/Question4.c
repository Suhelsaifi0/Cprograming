#include<stdio.h>
#include<string.h>

  typedef struct collage{
    char name[10];
    int rollNo;
    char departmentName[30];
    char course[10];
    int yearOfJoining;
  }collage;

  void check(collage a, collage b){
    if(strcmp(a.departmentName,b.departmentName) == 0){
        printf("Same Department");
    }
    else{
        printf("Not a Same Department");
    }
  }

int main(){
 
   collage a,b;
   strcpy(a.departmentName, "KIET");
   strcpy(b.departmentName, "KIET");
   check(a,b);
   
    return 0;
}
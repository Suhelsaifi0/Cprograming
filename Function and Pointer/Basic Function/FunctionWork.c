#include<stdio.h>

  void pakistan(){
    printf("You are in Pakistan\n");
    return;
  }

  void australia(){
    printf("You are in Australia\n");
    pakistan();  // Function Calling
    return;
  }

  void england(){
    printf("You are in england\n");
    australia();  // Function Calling
    return;
  }

  void london(){
    printf("You are in london\n");
    england();  // Function Calling
    return;
  }

 void india(){
    printf("You are in India\n");
    london();
    return;
 }  

int main(){

   india();

    return 0;
}
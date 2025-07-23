#include<stdio.h>

  void decresing(int n){
      // BASE CASE
      if(n==0) return;
      // 1 Case me Solve karunga Baaki recursion Sambal le ga    
      printf("%d ", n);
      decresing(n-1);
      return;
  }

int main(){
    
    int n;
    printf("ENTER NUMBER : \n");
    scanf("%d,", &n);

    decresing(n);
   
    return 0;
}
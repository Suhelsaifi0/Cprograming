#include<stdio.h>

  void incresing(int x, int n){
      // BASE CASE
      if(x>n) return;
      // 1 Case me Solve karunga Baaki recursion Sambal le ga    
      printf("%d ", x);
      incresing(x+1,n);
      return;
  }

int main(){
    
    int n;
    printf("ENTER NUMBER : \n");
    scanf("%d,", &n);

    incresing(1,n);
   
    return 0;
}
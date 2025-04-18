#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main() {
 
int n;
scanf("%d",&n);
    
int a[n];
 for(int i = 0; i < n; i++){
      scanf("%d",&a[i]);
 }
    
 int target;
  scanf("%d",&target); 
    
int min = INT_MAX;
    int a1 = 0 ,b = 0;
    
for(int i = 0; i < n-1; i++){
   for(int j = i+1; j < n; j++){
       int sum = a[i] + a[j];
       int diff = abs(sum - target);
     if(diff < min){
         min = diff;
         a1 = a[i];
         b = a[j];
     }
   }   
  } 
    printf("%d %d",a1,b);
    return 0;
}
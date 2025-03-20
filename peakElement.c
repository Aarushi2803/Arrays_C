// peak ele... means if adjacent element are less than a number that number is peak element

#include <stdio.h>
int main(){
    
    int a;
    scanf("%d",&a);
int array[a];
int size = sizeof array / sizeof array[0];
  for(int i=0 ; i<size ; i++){
    scanf("%d",&array[i]);
  }
  
  if(array[0] >array[1]) printf("%d",array[0]);
     if(array[size-1] > array[size-2]) printf("%d",array[size-1]);

for(int i=1;i<size-2;i++){
    if(array[i] > array[i+1] && array[i]>array[i-1]){  
        printf("%d",array[i]);  
    }
   
}
  return 0;
}
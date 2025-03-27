//reversing an array
#include <stdio.h>
int main(){
    
    int a;
    scanf("%d",&a);
int array[a];
int size = sizeof array / sizeof array[0];
  for(int i=0 ; i<size ; i++){
    scanf("%d",&array[i]);
  }
  
 int b[size];
 for(int i=0;i<=size/2;i++){
    int temp = array[i];
    array[i] =  array[size-i-1];
    array[size-i-1] = temp; 
    
 }  
 for(int i=0;i<size;i++){
    printf("%d ",array[i]); 
 } 
  return 0;
}
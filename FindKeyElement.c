#include <stdio.h>
int main(){
    
    int a;
    scanf("%d",&a);
int array[a];
int size = sizeof array / sizeof array[0];
  for(int i=0 ; i<size ; i++){
    scanf("%d",&array[i]);
  }
  int key,index,i; 
  scanf("%d",&key);
  
 for( i=0;i<size;i++){
    if(array[i] == key){
        index = i; 
     break; 
    } 
 }
 if(i==size) printf("not found");
 else printf("found at index %d",index);
  return 0;
}
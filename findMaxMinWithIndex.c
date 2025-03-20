#include <stdio.h>
int main(){
    
    int a;
    scanf("%d",&a);
    
int array[a];

int size = sizeof array / sizeof array[0];
 
  for(int i=0 ; i<size ; i++){
    scanf("%d",&array[i]);
  }
  
  int min = array[0];
  int max = array[0];
  
 int index_max = 0,index_min = 0; 
 
for(int i=1;i<size;i++){
    if(min > array[i]){  
        min = array[i];
        index_min = i; 
    }
    else if(max < array[i]){
         max = array[i];
         index_max = i; 
    } 
}
printf("Max at index %d : %d \n,Min at index %d : %d",index_max,max,index_min,min);
}
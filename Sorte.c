#include <stdio.h>
int main(){
    
    int a;
    scanf("%d",&a);

int array[a];
int size = sizeof array / sizeof array[0];
  for(int i=0 ; i<size ; i++){
    scanf("%d",&array[i]);
  }

int isAscending = 1;
int isDecending = 1;
 int i;
for(i=1;i<size-1;i++){
    if(array[i] > array[i+1]){  
        isAscending = 0;
    }
    else if(array[i] < array[i+1]){
        isDecending = 0;
    }
}
if(isAscending) { 
    printf("sorted in isAscending");
}
else if(isDecending){
    printf("sorted in isDecending");
}
else{
    printf("UNsorted");
}
  return 0;
}


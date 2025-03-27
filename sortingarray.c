#include <stdio.h>
int main(){
    
int a;
scanf("%d",&a);
int array[a];
int size = sizeof array / sizeof array[0];
  for(int i=0 ; i<size ; i++){
    scanf("%d",&array[i]);
  }
for(int i=0;i<size;i++){ 
    int flag = 1;
    for(int j=0;j<size-i-1;j++){
        if(array[j] > array[j+1]){
            int temp =array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        flag = 0;
        }
    }
    if(flag) break;
}

for(int i=0;i<size;i++){
    printf("%d ",array[i]);
}
 
  return 0;
}



#include <stdio.h>
int main(){

int n;
scanf("%d",&n);

int array[n];

for(int i=0;i<n;i++){
    scanf("%d",&array[i]);
} 
   
int target;
scanf("\n%d",&target);

int count = 0;

for(int i=0;i<n;i++){ 
    if(array[i] == target){
        count++;
    }
}
printf("%d",count);
return 0;
    
}
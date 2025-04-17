#include <stdio.h>
int main() {
    
int n,targetSum;
scanf("%d",&n);
  
int array[n];       
for(int i=0;i<n;i++){
  scanf("%d",&array[i]);    
}
scanf("%d",&targetSum);    
for(int i=0;i<n-1;i++){
 for(int j=i+1;j<n;j++){
    if(array[i] + array[j] == targetSum){
       printf("%d %d",array[i],array[j]);
      return 0; 
    }  
}
}
    printf("-1");
return 0;

}
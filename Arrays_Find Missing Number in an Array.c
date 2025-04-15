#include <stdio.h>
int main(){
   int n;
   scanf("%d",&n);
int arr[n-1];   
    for(int i=0;i<n-1;++i) {
        scanf("%d", &arr[i]);
    }
int sum = 0;  
    for(int j=0;j<n-1;j++){ 
         sum = sum + arr[j];
    }
  int total = (n*(n+1))/2;
 printf("%d",total - sum);

    return 0;
}
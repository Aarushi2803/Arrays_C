#include <stdio.h>
#include <limits.h>

int kthSmallest(int a[], int n, int k){
    
int current = 0;
int prev = INT_MIN;
    
for(int i=0;i<k;i++){
    current = INT_MAX;
  for(int j=0;j<n;j++){ 
    if(a[j] < current && a[j] >  prev){
        current =a[j];
    }
} 
  prev = current;  
   
    
}
     return current;
}

int main() {
  int n, k;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &k);
  printf("%d\n", kthSmallest(arr, n, k));

  return 0;
}
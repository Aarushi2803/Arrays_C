#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    for(int i=0;i<n;i++){
    int min = i;
    for(int j=i+1;j<n;j++){
        if( arr[j] < arr[min]){
            min = j; 
        }    
    }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    } 
 for(int i=n-1;i>0;i--) {
     if(arr[i] > arr[i-1]){ 
         return arr[i-1];
     }
 }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findSecondLargest(arr, n));
    return 0;
}
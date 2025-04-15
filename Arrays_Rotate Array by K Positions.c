#include <stdio.h>

// Function to rotate the array
void rotateArray(int arr[], int n, int k) {
     k = k%n;
    int temp[k];
  for(int i=0;i<k;i++){
      temp[i] = arr[i];
  }
    for(int i=0;i<n-k;i++){
        arr[i] = arr[i+k];
    }
    for(int i= 0 ; i< k;i++){
        arr[n-k+i] = temp[i]; 
    }
    
    
    
}



int main() {
    int n, k;
    // Reading input
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    // Call the function to rotate the array
    rotateArray(arr, n, k);
    
    // Print the rotated array
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}

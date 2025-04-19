#include <stdio.h>
#include <stdlib.h>

void sortArray(int arr[], int n) {
    int count_Seven = 0;
    int count_Eight = 0;
    int count_Nine= 0;
    for(int i=0;i<n;i++){
        if(arr[i]==7){
            count_Seven++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==8){
            count_Eight++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==9){
            count_Nine++;
        }
    }
    
    for(int i = 0;i<n;i++){
        if(i<count_Seven){
            printf("7 ");
        }
        else if(i<count_Seven+count_Eight){
            printf("8 ");
        }
        else{
            printf("9 ");
        }
        
    }
    
}

int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    sortArray(arr, n);
    // for (int i = 0; i < n; i++)
    //     printf("%d ", arr[i]);
    // free(arr);
    return 0;
}
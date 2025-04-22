#include <stdio.h>

void selectionSorting(int arr[],int n){ 
     
    int i, j, minIdx, temp;

    for (i = 0; i < n - 1; i++) {
        minIdx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}
int main(){
    
int a;
scanf("%d",&a);
    
int arr1[a];
int arr2[a];
 for(int i=0;i<a;i++){
     scanf("%d",&arr1[i]);
 } 
for(int i=0;i<a;i++){
     scanf("%d",&arr2[i]);
 } 
    selectionSorting(arr1,a);
    selectionSorting(arr2,a);
    
    
int count = 0;
for(int i=0;i<a;i++){
    if(arr1[i]%arr2[i]==0){
        count++;
    } 
   
}
    
printf(count==a?"True":"False");
    return 0;
}
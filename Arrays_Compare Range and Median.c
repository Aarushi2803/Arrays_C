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
    
  int t;
  scanf("%d",&t);
    
int arr[t];
for(int i=0;i<t;i++){
    scanf("%d",&arr[i]);
} 
    selectionSorting(arr,t);
    
int range = arr[t-1] - arr[0];
float meadian;
if(t%2 != 0){ 
   meadian = arr[t/2]; 
}
else{
    meadian = (arr[(t/2)-1] + arr[t/2] )/ 2.0;
} 
printf("%s",range > meadian ?"True":"False");
    return 0;
}
#include <stdio.h>
int main() {
    
int a;
scanf("%d",&a);

int arr[a];
 for(int i=0;i<a;i++){
     scanf("%d",&arr[i]);
 }
     // int n = sizeof(arr)/sizeof(arr[0]);
    int i, j, minIdx, temp;

    for (i = 0; i < a - 1; i++) {
        minIdx = i;
        for (j = i + 1; j < a; j++) {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        
        temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }

    if ((arr[a-2] * arr[0]) > (arr[1] + arr[a-1])){
    printf("True");
}
else {
    printf("False");
}
return 0;
}
        
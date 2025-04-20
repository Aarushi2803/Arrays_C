#include <stdio.h>
int main() {
    
int n1;
scanf("%d",&n1); 
    
int a[n1];
    for(int i=0;i<n1;i++){
        scanf("%d",&a[i]);    
    }
  
int n2;
scanf("%d",&n2);
    
int b[n2];    
    for(int i=0;i<n2;i++){
        scanf("%d",&b[i]);    
    } 
    
int mergedSize = n1+n2;
int c[mergedSize];
    
int i=0,j=0,k=0;
while(i<n1 && j<n2){
   if(a[i] <= b[j]){
        c[k++] = a[i++];
      } 
    else{
       c[k++] = b[j++];
     }
}
while(i<n1){
   c[k++] = a[i++]; 
} 
while(j<n2){
   c[k++] = b[j++]; 
}
    
for(int m=0;m<mergedSize;m++){
    printf("%d ",c[m]);
}
      
}
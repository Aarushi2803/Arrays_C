#include <stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);
    
int a[n];
int freq[n];
for(int i=0;i<n;i++){
   scanf("%d",&a[i]);  
    freq[i] =0;
} 
 int max =0 ;
 for(int i=0;i<n;i++){
     if(freq[i] != -1){
         int count = 1;   
for(int j=i+1;j<n;j++){
    if(a[i] == a[j]){
       freq[j] = -1;
         count++;
}          
    }
   freq[i] = count;
   if(freq[i] > freq[max]){
    max = i; 
   } 
} 

}
    printf("%d",a[max]);
     return 0;
}
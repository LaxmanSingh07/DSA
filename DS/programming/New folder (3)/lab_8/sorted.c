#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n],arr1[m];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d",&arr1[i]);
    }
 int k=n+m;

 int y=0;
 int z=0,j=0;
 int arr3[k];
 while (z<n&&j<m)
 {
     
    // if(i>n-1){
    //     continue;
    
     if(arr[z]<arr1[j]){
         arr3[y++]=arr[z++];
         
     }
     

     
     else{
     
     arr3[y++]=arr[j++];
    
     }
     while (z<n1)
     {
         arr3[]
     }
     

    


 }
 for(int i=0;i<k;i++){
     printf("%d",arr3[i]);
 }
 



    
}
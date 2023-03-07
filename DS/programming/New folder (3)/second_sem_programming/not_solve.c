#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int arr[n];

for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int check[10];

    for(int k=0;k<10;k++){
int count=0;
for(int i=0;i<n;i++){
        if(arr[i]==k){
            check[k]=count++;
        }
    }
        
}

for(int i=0;i<10;i++){
    printf(" %d",check[i]);
}
        return 0;
    }

#include<stdio.h>
void pointer(int *ptr,int n){
    for(int i=n-1;i>=0;i--){
        printf("%d ",*ptr--);
    }

}
int main(){

int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
pointer(&arr[n-1],n);

    return 0;
}
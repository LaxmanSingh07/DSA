#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
    for(int j=0;i<n;j++){
    scanf("%d",&arr[i][j]);
    }
    }


    for(int j=0;j<n;j++){
        if (j&1)
        {
            //odd index --> Botton to top

            for(int i=n-1;i>=0;i--)

            {
                printf("%d",arr[i][j]);
            }
        } 
        else{
            // 00 or even index --> top to bottom

            for(int i=0;i<n;i++){
                printf("%d",arr[i][j]);
                
            }
        }
        printf("\n");
        
    }
    return 0;
}
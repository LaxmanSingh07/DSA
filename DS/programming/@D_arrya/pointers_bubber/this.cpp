#include<stdio.h>
#include<limits.h>


int main(){
	
	int n,m;
	scanf("%d %d",&n,&m);
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	int min_row=INT_MAX;
	int max=INT_MIN;
	for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++){
		min_row=((arr[i][j]<min_row)?arr[i][j]:min_row);
	}
			printf("%d",min_row);
		}
	return 0;
}

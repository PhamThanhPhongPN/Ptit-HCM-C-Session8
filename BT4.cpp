#include <stdio.h>

int main(){
	int n,max;
	printf("Nhap vao mot so nguyen n : ");
	scanf("%d",&n);
	int array[n][n];
	max = array[0][0];
	for (int i = 0; i<n;i++){
		for (int j = 0; j<n; j++){
			printf("Nhap array[%d][%d] : ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	printf("Matran cua ban la : \n");
	for (int i = 0; i<n;i++){
		for (int j = 0; j<n; j++){
			printf("%d ",array[i][j]);
			if (array[i][j]> max){
				max = array[i][j];
			}
		}
		printf("\n");
	}
	printf("Gia tri phan tu lon nhat trong mang la : %d",max);	
	return 0;
}
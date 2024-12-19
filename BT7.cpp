#include <stdio.h>

int main(){
	int n,sum;
	printf("Nhap vao mot so nguyen n : ");
	scanf("%d",&n);
	int array[n][n];
	
	for (int i = 0; i<n;i++){
		for (int j = 0; j<n; j++){
			printf("Nhap array[%d][%d] : ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	printf("Cac phan tu tren duong cheo chinh cua matran la : \n");
	for (int i = 0; i<n;i++){
		for (int j = 0; j<n; j++){
			if (i <= j){
				printf("%d ",array[i][j]);
				sum = sum + array[i][j];
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}	
	printf("Tong cac phan tu tren duong cheo chinh la : %d",sum);
	return 0;
}

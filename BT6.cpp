#include <stdio.h>

int main(){
	int n,sumcheo = 0;
	printf("Nhap vao mot so nguyen n : ");
	scanf("%d",&n);
	int array[n][n];
	
	for (int i = 0; i<n;i++){
		for (int j = 0; j<n; j++){
			printf("Nhap array[%d][%d] : ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	printf("Duong cheo chinh cua matran la : \n");
	for (int i = 0; i<n;i++){
		for (int j = 0; j<n; j++){
			if (i == j){
				printf("%d ",array[i][j]);
				sumcheo = sumcheo + array[i][j];
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}	
	printf("Tong cac gia tri tren duong cheo chinh la : %d",sumcheo);
	return 0;
}

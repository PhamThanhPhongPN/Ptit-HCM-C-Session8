#include <stdio.h>

int main(){
	int n,sumbien = 0;
	printf("Nhap vao mot so nguyen n : ");
	scanf("%d",&n);
	int array[n][n];
	
	for (int i = 0; i<n;i++){
		for (int j = 0; j<n; j++){
			printf("Nhap array[%d][%d] : ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	printf("Matran cua ban la : \n");
	for (int i = 0; i<n;i++){
		for (int j = 0; j<n; j++){
			if (i == 0 || i == (n-1) || j == 0 || j == (n-1)){
				sumbien = sumbien + array[i][j];
			}
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}	
	printf("Tong cac phan tu o duong bien ma tran la : %d",sumbien);
	return 0;
}

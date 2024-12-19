#include <stdio.h>

int main(){
	int n;
	printf("Nhap vao mot so nguyen n : ");
	scanf("%d",&n);
	int array[n];
	for (int i = 0; i <n;i++){
	printf("Hay nhap phan tu la so nguyen vao mang : ");
	scanf("%d",&array[i]);	
	}
	printf("Phan tu cua mang ma in tu cuoi ve dau :\n");
	for (int j = (n-1);j>=0;j--){
		printf("%d ",array[j]);
	}
	return 0;
}

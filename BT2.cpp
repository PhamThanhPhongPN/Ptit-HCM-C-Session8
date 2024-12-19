#include <stdio.h>

int main(){
	int array[10] = {2, 3, 5, 7, 11, 543, 32, 54, 65, 33};
	int guess,check=0;
	while (check == 0){
	printf("Nhap mot phan tu de doan : ");
	scanf("%d",&guess);
		for (int i = 0;i<10;i++){
			if (guess == array[i]){
				printf("Co phan tu.\n");
				printf("Vi tri phan tu trong mang la array[%d]",i);
				check++;
				break;
			} else if (i == 9){
				printf("Khong co phan tu nay trong mang.\n");
				printf("Try again!\n");
				break;	
			}
			}
		}
return 0;
}


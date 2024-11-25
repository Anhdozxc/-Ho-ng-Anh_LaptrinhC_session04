#include <stdio.h>
 int main(){
	int num1, num2, num3;
	printf("So nguyen thu nhat:");
	scanf("%d", &num1);
	printf("So nguyen thu hai:");
	scanf("%d", &num2);
	printf("So nguyen thu ba:");
	scanf("%d", &num3);
	if(num1 < num3 && num3 < num2 || num1 > num3 && num3 > num2){
		printf("So thu ba nam trong khoang giua so thu hai va so thu nhat");
	}else{
		printf("So thu ba khong nam trong khoang giua so thu hai va so thu nhat");
	}
	return 0;
}


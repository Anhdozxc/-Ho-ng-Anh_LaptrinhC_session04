#include<stdio.h>
 int main(){
	int numb1, numb2, numb3 ;
	printf("Moi ban nhap canh thu nhat");
	scanf("%d",&numb1);
	printf("Moi ban nhap canh thu hai");
	scanf("%d",&numb2);
	printf("Moi ban nhap canh thu ba");
	scanf("%d",&numb3);
	if (numb1<numb2+numb3 && numb2<numb1+numb3 && numb3<numb1+numb2 )
	printf("Day la ba canh cua tam giac");
	else printf("Day khong phai la ba canh cua tam giac");
	return 0 ;
}



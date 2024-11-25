#include<stdio.h>

 int main() {
    int numb;
    printf("Nhap mot so bat ki: ");
    scanf("%d", &numb);

    if (numb % 2 == 0) 
        printf("Day la so nguyen chan\n");
    else 
        printf("Day la so nguyen le\n");

    return 0;
}


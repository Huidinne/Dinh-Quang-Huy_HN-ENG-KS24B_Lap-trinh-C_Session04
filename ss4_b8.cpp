#include<stdio.h>
int main(){
    float a, b, c;
    printf("Nhap 3 canh cua tam giac: ");
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)){
        printf("La 3 canh tam giac");
    }else{
        printf("Khong phai 3 canh tam giac");
    }
}


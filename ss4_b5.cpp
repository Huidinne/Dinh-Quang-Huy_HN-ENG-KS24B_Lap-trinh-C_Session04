#include <stdio.h>
int main(){
    int a,b,c;
    printf("Nhap 3 so nguyen a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if ((b >a  && b < c) || (a > b && c < b)) {
        printf("%d nam trong khoang giua %d va %d.\n", b, a, c);
    } else {
        printf("%d khong nam trong khoang giua %d va %d.\n", b, a, c);
    }
}


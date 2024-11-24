#include<stdio.h>
int main(){
    int old_index, new_index, electricity_consumption;
    double cost;
    printf("Nhap chi so cu: ");
    scanf("%d", &old_index);
    printf("Nhap chi so moi: ");
    scanf("%d", &new_index);

    electricity_consumption = new_index - old_index;

    if(electricity_consumption < 50){
        cost = electricity_consumption * 10000;
        
    } else if (electricity_consumption < 100){
        cost =electricity_consumption * 15000;
        
    } else if (electricity_consumption < 150){
        cost =electricity_consumption * 20000;
        
    } else if (electricity_consumption < 200){
        cost =electricity_consumption * 25000;
        
    } else {
        cost =electricity_consumption * 30000;
    }
    printf("Tong tien dien: %.0f VND", cost);
}


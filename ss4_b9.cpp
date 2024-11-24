#include<stdio.h>
int main(){
    int day, month, year;
    int valid = 1;
 
    printf("Nhap vao ngay: ");
    scanf("%d", &day);
    printf("Nhap vao thang: ");
    scanf("%d", &month);
    printf("Nhap vao nam: ");
    scanf("%d", &year);

    if(month < 1 || month > 12){
        valid = 0;
    }

    if(year < 1){
        valid = 0;
    }

    int days_in_month;
    if(valid == 1){
        switch (month){
            case 4: case 6: case 9: case 11:
                days_in_month = 30;
                break;
            case 2:
                if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
                    days_in_month = 29;
                }else{
                    days_in_month = 28;
                }
                break;
            default:
            	days_in_month = 31;
        }
        
        if(day < 1 || day > days_in_month){
            valid = 0;
        }
    }

    if(valid == 1){
        printf("Ngay thang nam hop le");
    }else{
        printf("Ngay thang nam khong hop le");
    }
}


#include<stdio.h>

int main(){
    unsigned int choice;
    double A; double B;
    printf("CACULATOR\n\n\n");
    printf("1.Tong 2 so\n2.Hieu 2 so\n3.Tich 2 so\n4.Thuong 2 so\n5.Thoat\nLua chon cua ban: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    
        scanf("%lf", &A);
        scanf("%lf", &B);
        double sum = A + B;
        printf("ket qua la: %2.lf", sum);
        break;
    case 2:
        
        scanf("%lf", &A);
        scanf("%lf", &B);
        double dif = A - B;
        printf("ket qua la: %2.lf", dif);
        break;
    case 3:
        
        scanf("%lf", &A);
        scanf("%lf", &B);
        double mul = A * B;
        printf("ket qua la: %2.lf", mul);
        break;
    case 4:
        
        scanf("%lf", &A);
        scanf("%lf", &B);
        double qout = A / B;
        printf("ket qua la: %2.lf", qout);
        break;    
    default:
        return 0;
        break;
    }
}
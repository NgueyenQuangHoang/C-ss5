#include <stdio.h>

int main() {
    int num1, num2, a, b, temp;

    
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &num1, &num2);

    
    a = num1;
    b = num2;

    
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    
    printf("UCLN cua %d va %d la: %d\n", num1, num2, a);

    return 0;
}

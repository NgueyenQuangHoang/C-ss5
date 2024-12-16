#include<stdio.h>

int main(){
    unsigned int num;
    do{
        printf("?: ");
        scanf("%d", &num);
    }while( num<1 || num >10); 
    for (int i = 1; i <= 10; i++)
    {
        int mul = num * i;
        printf("%d ", mul);
    }
    return 0;
}
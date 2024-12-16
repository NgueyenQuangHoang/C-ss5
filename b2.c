#include<stdio.h>

int main(){
    int hind = 10;
    int num;
    do{
        printf("guest your num: ");
        scanf("%d", &num);
        if(num==hind) printf("yes");
    }while( num != hind);
return 0;
}
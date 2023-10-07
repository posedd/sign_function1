#include <stdio.h>

int main() {
    int number;
    printf("Enter the number:\n ");
    scanf("%d",&number);
    if(number==0){
        printf("0");
    }

    else if(number>0){
        printf("1");
    }


    else{
        printf("-1");
    }
}

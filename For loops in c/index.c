#include <stdio.h>

void numtoword(long num){
    if(num == 1){
        printf("one \n");
    }
    else if(num == 2){
        printf("two \n");
    }
    else if(num == 3){
        printf("three \n");
    }
    else if(num == 4){
        printf("four \n");
    }
    else if(num == 5){
        printf("five \n");
    }
    else if(num == 6){
        printf("six \n");
    }
    else if(num == 7){
        printf("seven \n");
    }
    else if(num == 8){
        printf("eight \n");
    }
    else if(num == 9){
        printf("nine \n");
    }else if(num > 9 && num%2 == 0){
        printf("even \n");
    }else if(num>9 && num%2 != 0){
        printf("odd \n");
    }
}

int main(){

    int a,b,i;
    scanf("%d %d", &a, &b);

    for(i=a; i<=b; i++){
        numtoword(i);
    }

}
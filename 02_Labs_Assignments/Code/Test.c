#include <stdio.h>
void main(){
    int x , y , z;
    scanf("%d %d %d", &x, &y, &z);

    if (z == 1){
        int result = x + y;
        printf("%d\n", result);
    }
    else if (z == 2){
        int result = x - y;
        printf("%d\n", result);
    }
    else if (z == 3){
        int result = x * y;
        printf("%d\n", result);
    }
    else if (z == 4){
            if (y == 0) {
                printf("Division by zero is not allowed\n");
            } else {
                int result = x / y;
                printf("%d\n", result);
            }     
    }
    else if (z == 5){
        if (y == 0) {
            printf("Division by zero is not allowed\n");
        } else {
            int result = x % y;
            printf("%d\n", result);
        }
    }else {
        printf("Invalid operation\n");
    }
}

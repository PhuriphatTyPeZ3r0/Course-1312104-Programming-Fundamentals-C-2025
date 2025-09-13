#include <stdio.h>
void main(){
    int number[8];
    printf("Enter 8 integers:\n");

    for (int i = 0; i < 8; i++){
        scanf("%d", &number[i]);
    }
    int max = -1;
    int min = 1e9; 

    for (int i = 0; i < 8; i++) {
        if (number[i] > 0) {  
            if (number[i] > max) {
                max = number[i];
            }
            if (number[i] < min) {
                min = number[i];
            }
        }
    }
    printf("Maximum positive: %d\n", max);
    printf("Minimum positive: %d\n", min);
}
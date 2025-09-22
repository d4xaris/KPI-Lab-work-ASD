#include <stdio.h>

int main() {
    char Bad []= "The function does not exist for such x";

    int x, y;
    printf("x: ");
    scanf("%d", &x);

    if (x >= -49) {
        if (x < -10) {
            y = 10*x*x*x + (7*x)/5 + 2;
            printf("y = %d\n", y);
        } else {
            if (x > 0) {
                if (x <= 10) {
                    y = 10*x*x*x + (7*x)/5 + 2;
                    printf("y = %d\n", y);
                } else {
                    if (x > 20) {
                        y = -x + 9;
                        printf("y = %d\n", y);
                    } else {
                        printf(Bad);
                    }
                }
            } else {
                printf(Bad);
            }
        }
    } else {
        printf(Bad); }

    return 0;
}
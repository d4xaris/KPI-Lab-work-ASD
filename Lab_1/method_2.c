#include <stdio.h>

int main() {
    char Bad []= "The function does not exist for such x";

    int x, y;
    printf("x: ");
    scanf("%d", &x);

    if ((-49 <= x && x < -10) || (0 < x && x <= 10)) {
        y = 10*x*x*x + (7*x)/5 + 2;
        printf("y = %d\n", y);
    } else if (x > 20) {
        y = -x + 9;
        printf("y = %d\n", y);
    } else {
        printf("The function does not exist for such x/n");
    }

    return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    printf("give an integer : \t");
    scanf("%d", &x);

    if (x <= 10) {
        y = x + 8;
    } else if (x > 10 && x < 100) {
        y = (x * x) + x + 10;
    } else {
        y = 0;
    }

    printf("y = %d\n", y);
    return 0;
}

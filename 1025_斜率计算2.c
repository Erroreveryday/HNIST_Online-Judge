#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    if (x1 == x2) {
        printf("-1\n");
    } else {
        int dy = y2 - y1;
        int dx = x2 - x1;
        int g = gcd(dy, dx);
        if (g!= 0) {
            dy /= g;
            dx /= g;
        }
        if (dx < 0) {
            dy = -dy;
            dx = -dx;
        }
        if (dy == 0) {
            printf("0\n");
        } else if (dx == 1) {
            printf("%d\n", dy);
        } else {
            printf("%d/%d\n", dy, dx);
        }
    }
    return 0;
}
#include <stdio.h>

int main() {
    int num, a, b, c, d, tmp, count = 0;
    scanf("%d", &num);
    tmp = num;
    while(1) {
        a = num / 10;
        b = num% 10;
        c = (a + b) % 10;
        d = b * 10 + c;
        num = d;
        count++;
        if (d == tmp) break;
    }
    printf("%d", count);
    return 0;
}
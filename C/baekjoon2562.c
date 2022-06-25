#include <stdio.h>

int main () {
	int num, max = 0, count = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &num);
		if (num > max) {
			max = num;
			count = i;
		}   
	}
	printf("%d\n%d", max, count + 1);
	return 0;
}
#include <stdio.h>

int main() {
	int h, m, add;
	scanf("%d %d", &h, &m);
	scanf("%d", &add);

	h += add / 60;
	m += add % 60;
	if (m >= 60) {
		h += (m / 60);
		m %= 60;
	}

	if (h >= 24) {
		h %= 24;
	}
	printf("%d %d", h, m);
	return 0;
}
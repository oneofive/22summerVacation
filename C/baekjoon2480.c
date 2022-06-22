#include <stdio.h>
int main() {
	int a, b, c, max;
	scanf("%d %d %d", &a, &b, &c);
	max = a;
	if (max < b) {
		max = b;
	}

	if (max < c) {
		max = c;
	}

	if (a == b && b == c && c == a) {
		printf("%d", 10000 + a * 1000);
	}
	//셋 다 같음
	if (a != b && b != c && c != a) {
		printf("%d", max * 100);
	}
	//셋 다 다름
	if (a == b && b != c && c != a) {
		printf("%d", 1000 + a * 100);
	}
	//a == b
	if (b == c && c != a && a != b) {
		printf("%d", 1000 + b * 100);
	}
	//b == c
	if (a == c && a != b && b != c) {
		printf("%d", 1000 + c * 100);
	}
	//c == a
	return 0;
}

/////////////////////////////////////////////////////////////

#include <stdio.h>
 
int main(void){
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
 
    if(A==B && B==C)
        printf("%d\n", 10000+A*1000);
    else if(A==B)   //else if -> B==C는 아님
        printf("%d\n", 1000+A*100);
    else if(B==C)   //else if -> A==B는 아님
        printf("%d\n", 1000+B*100);
    else if(C==A)   //else if -> A==B, B==C는 아님
        printf("%d\n", 1000+C*100);
    else if(A>B && A>C) //A가 가장 큼
        printf("%d\n", A*100);
    else if(B>C)    //A가 가장 크지 않고, B>C -> B가 가장 큼
        printf("%d\n", B*100);
    else
        printf("%d\n", C*100);
}
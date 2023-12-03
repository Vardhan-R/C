#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

void bigAdd(char[], char[], char[]);
int charToInt (char);
char intToChar (int);

int main() {
	char a[MAX_SIZE + 2], b[MAX_SIZE + 2], op, c[MAX_SIZE + 3], temp_sign;
	int sign_a, sign_b, sign_c;

	scanf("%c", &temp_sign);
	if (temp_sign == '-') {
		sign_a = 1;
		scanf("%s\n", a);
	} else {
		sign_a = 0;
		a[0] = temp_sign;
		scanf("%s\n", &a[1]);
	}

	scanf("%c\n", &op);

	scanf("%c", &temp_sign);
	if (temp_sign == '-') {
		sign_b = 1;
		scanf("%s", b);
	} else {
		sign_b = 0;
		b[0] = temp_sign;
		scanf("%s", &b[1]);
	}

	printf("sign_a = %d\n", sign_a);
	printf("a = ");
	puts(a);
	printf("strlen(a) = %d\n", strlen(a));
	printf("sign_b = %d\n", sign_b);
	printf("b = ");
	puts(b);
	printf("strlen(b) = %d\n\n", strlen(b));

	bigAdd(a, b, c);
	printf("c = ");
	puts(c);

	return 0;
}

void bigAdd(char a[], char b[], char c[]) {
	int pos = 0;
	int temp_sum[MAX_SIZE + 2] = {0};
	strrev(a);
	strrev(b);
	while (pos < strlen(a) && pos < strlen(b)) {
		temp_sum[pos] += charToInt(a[pos]) + charToInt(b[pos]);
		temp_sum[pos + 1] += temp_sum[pos] / 10;
		temp_sum[pos] %= 10;
		c[pos] = intToChar(temp_sum[pos]);
		pos++;
	}
	c[pos] = temp_sum[pos] + (strlen(a) > strlen(b) ? a[pos++] : b[pos++]);
	if (strlen(a) > strlen(b)) {
		c[pos]++;
		while (pos < strlen(a)) {
			c[pos] = a[pos++];
		}
	} else {
		while (pos < strlen(b)) {
			c[pos] = b[pos++];
		}
	}

	c[pos] = '\0';
	strrev(a);
	strrev(b);
	strrev(c);
}

int charToInt (char c) {
	return (int) c - 48;
}

char intToChar (int i) {
	return (char) i + 48;
}
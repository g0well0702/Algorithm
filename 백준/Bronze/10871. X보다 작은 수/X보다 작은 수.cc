#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[10000];
	int n = 0;
	int x = 0;
	scanf("%d", &n);
	scanf("%d", &x);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] < x) printf("%d ", arr[i]);
	}
}
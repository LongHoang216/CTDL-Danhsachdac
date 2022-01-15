#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Nhapmang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void Xuatmang(int a[], int n) {
	printf("Gia tri cua mang la: ");
	for (int i = 0; i < n; i++) {
		printf(" %d", a[i]);
	}
}
int TimvitriDau(int a[], int n, int gt) {
	int vt = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] == gt) {
			vt = i;
			break;
		}
	}
	return vt;
}
int TimvitriCuoi(int a[], int n, int gt) {
	int vt = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] == gt) {
			vt = i;
		}
	}
	return vt;
}
void Themphantu(int a[], int &n, int gt, int vitri) {
	for (int i = n; i > vitri; i--) {
		a[i] = a[i - 1];
	}
	a[vitri] = gt;
	n++;
}
void Xoaphantu(int a[], int& n, int gt, int vitri) {
	if (a[vitri] != gt) {
		printf("KHONG THE XOA!!\n");
	}
	else
	{
		a[vitri] = '0';
		for (int i = vitri; i < n; i++) {
			a[i] = a[i + 1];
		}
		n--;
	}
}
int main() {
	int a[100];
	int n;
	printf("Nhap vao so luong phan tu n: ");
	scanf("%d", &n);
	Nhapmang(a, n);
	Xoaphantu(a, n, 5, 3);
	Xuatmang(a, n);
	return 0;
}
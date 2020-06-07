#include<iostream>
#include<cmath>
using namespace std;
void Doi_co_so(int a,int n) {
	int A[100],dem=0;
	while (a != 0) {
		A[dem]= a % 2;
		dem++;
		a /= 2;
	}
	for (int i = 0; i < n-dem; i++) {
		cout << "0 ";
	}
	for (int j = dem - 1; j >= 0; j--) {
		cout << A[j] << " ";
	}
}
int main() {
	int n;
	cout << "Nhap n bit: ";
	cin >> n;
	int A[100];
	A[0] = 0;
	A[1] = 1;
	int p = 1;
	int m = 2;
	for (int i = 2; i <= n; i++) {
		p = p * 2;
		int u = 2 * m - 1;
		for (int j = m; j <= u; j++) {
			A[j] = A[u - j] + p;
		}
		m= m * 2;
	}
	for (int i = 0; i < pow(2, n); i++) {
		Doi_co_so(A[i],n);
		cout << endl;
	}
	return 0;
}

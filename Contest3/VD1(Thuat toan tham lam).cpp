#include<iostream>
#include<string>
using namespace std;
int n, Finish[100], Start[100];
bool XOPT[100];
void Init() {//Nhap thong tin
	cout << "Nhap so luong hanh dong:\n";
	cin >> n;
	cout << "Nhap mang thoi gian bat dau:\n";
	for (int i = 1; i <= n; i++) {
		cin >> Start[i];
	}
	cout << "Nhap mang thoi gian ket thuc\n";
	for (int i = 1; i <= n; i++) {
		cin >> Finish[i];
	}
}
void Buble_Sort() {//Sap xep mang thoi gian tang dan
	for (int i = 1; i <= n - 1; i++) {
		for (int j = i + 1; j <= n; j++) {
			if (Finish[i] > Finish[j]) {
				int t = Finish[i];
				Finish[i] = Finish[j];
				Finish[j] = t;
				int t1 = Start[i];
				Start[i] = Start[j];
				Start[j] = t1;
			}
		}
	}
}
void Result() {
	cout << "Phuong an: ";
	for (int i = 1; i <= n; i++) {
		if (XOPT[i]) {
			cout << i << " ";
		}
	}
	cout << endl;
}
void Greedy_Algorithm() {
	Init();
	int i = 1,dem=1;
	Buble_Sort();
	XOPT[i] = true;
	for (int j = 2; j <= n; j++) {
		if (Start[j] >= Finish[i]) {
			dem++;
			i = j;
			XOPT[i] = true;
		}
	}
	Result();
}
int main() {
	Greedy_Algorithm();
	system("pause");
	return 0;
}

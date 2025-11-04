#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b) {
	return a - b;
}
int tich(int a, int b);
int tong(int a, int b){
	return a + b;
};
int hieu(int a, int b);
int tich(int a, int b){
	return a*b;
}
float thuong(int a, int b);

int tinhLuyThua(int a, int n) {
	int kq = a;
	if (n == 0) kq = 1; 
	for(int i = 1; i < n; i++) {
		kq *= a;
	}
	return kq;
 };

int main()
{	
	
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Tong =";
	cout<<"Hieu =" << hieu(3,2);
	cout<<"Tich = " << tich(2*3);
	cout<<"Tong = "tong(2,3);
	system("pause");
	return 0;
}
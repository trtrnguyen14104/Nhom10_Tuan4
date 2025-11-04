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
void betapdem(){
	for(int i = 0 ; i < 10 ; i++ ) {
		cout<< i+1 << '\t';
	}
}
void betapdi() {
	cout << "Dang di...";
}
float thuong(int a, int b);
int main()
{	
	
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Tong =";
	cout<<"Hieu =" << hieu(3,2);
	cout<<"Tich = " << tich(2*3);
	cout<<"Tong = "tong(2,3);
	betapdem();
	betapdi();
	system("pause");
	return 0;
}
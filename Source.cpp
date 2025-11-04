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


bool ktsnt(int n){
	if (n <= 1){
		return false;
	}
	if (n == 2){
		return true;
	}
	if(n % 2 == 0){
		return false;
	}
	for (int i = 3; i <= std::sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;  
        }
    }
};
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
	if(ktsnt(5))
		cout << "Day la so nguyen to";
	else
		cout << "Khong phai so nguyen to";
	betapdem();
	betapdi();
	system("pause");
	return 0;
}
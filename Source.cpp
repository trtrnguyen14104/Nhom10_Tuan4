#include <iostream>

using namespace std;
int tong(int a, int b){
	return a + b;
};
int hieu(int a, int b);
int tich(int a, int b){
	return a*b;
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
int main()
{	
	
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Tong =";
	cout<<"Tich = " << tich(2*3);
	cout<<"Tong = "tong(2,3);
	if(ktsnt(5))
		cout << "Day la so nguyen to";
	else
		cout << "Khong phai so nguyen to";
	system("pause");
	return 0;
}
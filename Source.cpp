#include <iostream>
#include <cmath>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);

bool ktSNT(int n);

bool ktSNT(int n) {
    if (n <= 1) {
        return false;
    }

    int limit = sqrt(n);
    
    for (int i = 2; i <= limit; ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int tong(int a, int b){
	return a + b
}


int tich (int a, int b)
{
	return a * b;
}

int hieu(int a, int b)
{
    return a - b;

}

int main()
{
	int a,b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	
	cout << "Nhap so a: "; 
	cin >> a;
	cout << "\nNhap so b: "; 
	cin >> b;
	
	cout << "\nTong cua " << a << " va " << b << " la: " << tong(a, b) <<endl;

	cout << "\nTich cua " << a << " va " << b << " la: " << tich(a, b) <<endl;

	cout << "\nHieu cua " << a << " va " << b << " la: " << hieu(a, b) <<endl;

	system("pause");
	return 0;
}
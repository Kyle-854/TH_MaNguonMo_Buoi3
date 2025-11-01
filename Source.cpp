#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
bool chinhphuong (int n);
void ssCP(int a, int b);

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

bool chinhphuong(int n)
{
	if (n < 0)
		return false;
	if can = sqrt(n);
	return can*can == n;
}

void ssCP(int a, int b)
{
	bool A = laCP(a);
	bool B = laCP(b);
	if ( A && b)
		cout<<"\nCa 2 la SNT";
	else if (A)
		cout<<"\nA la SNT";
	else if (B)
		cout<<"\nB la SNT";
	else
		cout<<"\na va b khong phai SNT";
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
	ssCP(a, b);

	system("pause");
	return 0;
}
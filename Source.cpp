#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
void soSanhAB(int a, int b);

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

void soSanhAB(int a, int b){
	if (a > b) cout << a <<" lon hon "<<b<<endl;
	else if (b > a) cout << b <<" lon hon "<< a <<endl;
	else cout << a <<" bang "<<b<<endl;
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
	
	cout << "So sanh "<<a<<" va "<<b<<": "<< soSanhAB(a, b) <<end;
	
	

	system("pause");
	return 0;
}
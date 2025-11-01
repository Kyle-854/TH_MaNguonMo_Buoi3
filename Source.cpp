#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);

int hieu(int a, int b)
{
    return a - b;
}

int tong(int a, int b){
	return a + b
}

int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"\nTong cua 10 va 5: "<< tong(10, 5)<<endl;
	cout << "\nHieu cua 10 va 5" << hieu(10, 5) << endl;
	system("pause");
	return 0;
}
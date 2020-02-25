#include <iostream>
using namespace std;


int main(){
	//Write your code here.
	int a = 5;
	char b ='A';
	char &c = b;
	int *x;
	x = &a;
	char *y;
	y = &b;
	int *z;
	z = x;
	cout << a << " " << b << " " << c << " " << x << (int*)y << " " << z << endl;
	cout << &a << " " << (int*)b << " " << (int*)c << " " << (int*)x << " " << z << endl;
	c = 'F';
	cout << a << " " << b << " " << c << " " << x << (int*)y << " " << z << endl;
	*y = 'B';
	cout << a << " " << b << " " << c << " " << x << (int*)y << " " << z << endl;
	*x = 6;
	cout << a << " " << b << " " << c << " " << x << (int*)y << " " << z << endl;
	*z = 7;
	cout << a << " " << b << " " << c << " " << x << (int*)y << " " << z << endl;
	
	
	
	return 0;
}

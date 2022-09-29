#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	int x,y,z,a1,a2,a3;
	cout << "input x"<< endl;
	cin >> x;
	cout << "input y" << endl;
	cin >> y;
	cout << "input z" << endl;
	cin >> z;
	a1 = x + y - z;
	a2 = x / z - y;
	a3 = x * y + z;
		cout<< "x + y - z =" << a1 << endl;
		cout << "x / z - y =" << a2 << endl;
		cout << "x * y + z =" << a3 << endl;


	cout << "Press any key"<< endl;

	
	
	_getch();
}
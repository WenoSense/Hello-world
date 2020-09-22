
#include <iostream>

using namespace std;
int main()
{
	int a, b;
	cout << "Enter a: " << endl;
	cin >> a;
	cout << "Enter b: " << endl;
	cin >> b;

	__asm
	{
		mov eax, a
		mov ebx, b
		xchg eax, ebx
		mov a, eax
		mov b, ebx
	}

	cout <<"a = " << a << endl;
	cout <<"b = " << b << endl;

}


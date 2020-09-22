#include <iostream>

using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter a: " << endl;
	cin >> a;
	cout << "Enter b: " << endl;
	cin >> b;

	__asm
	{
		mov eax, a
		add eax, b
		mov c, eax

		mov ebx, c
		sub ebx, b
		mov b, ebx

		mov ecx, c
		sub ecx, a
		mov a, ecx
	}

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

}
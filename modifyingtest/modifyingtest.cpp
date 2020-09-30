#include <iostream>
using namespace std; 
#include <Windows.h>
#include <tchar.h>
#include<TlHelp32.h>
#include <WinUser.h>
void aless(int& a) {
	a--;
}
void amore(int& a) {
	a++;
}
int main()
{
	SetConsoleTitle(_T("Tacobell"));
	int a = 0; 
	bool again = true;
	int* ap = &a;
	do{
		char op; 
		cout << "Value of a: " << a << endl;
		cout << "Address of a: " << ap << endl;
		cout << "remove or add to value to a " << endl;
		cout << "- to remove" << endl; 
		cout << "+ to add" << endl;
		cin >> op;
		cin.ignore(1000, 10);
		cout << a << "=> "; 
		op == '+' ? amore(a) : aless(a);
		cout << a << endl << endl; 
	} while (again == true);
}

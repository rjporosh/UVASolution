#include<iostream>
using namespace std;

int main()
{
	char name[80];
	cout << "Name: ";
	cin.getline( name, 80, '\n' );
	cout << "Echo: " << name << endl;
}

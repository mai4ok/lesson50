#include<iostream>
#include"test.h"

using namespace std;

int main() {
	int a, b, c;

	cout << "inpute a and b and c:" << endl;
	cin >> a >> b >> c;

	cout << "a - b - c =" << sub(a, b, c) << endl;
	cout << "a + b + c =" << sum(a, b, c) << endl;

	return 0;
}
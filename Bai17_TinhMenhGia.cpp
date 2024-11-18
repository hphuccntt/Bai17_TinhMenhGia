#include <iostream>
using namespace std;
int main()
{
	int sotien, to500, to200, to100, to50, to20, to10, to5, to1;
	cout << " Tinh Menh Gia:\n ";
	cin >> sotien; cout << endl;
	to500 = sotien / 500;
	sotien = sotien % 500;
	cout << "so to 500:\n" << to500 << endl;
	to200 = sotien / 200;
	sotien = sotien % 200;
	cout << "so to 200:\n" << to200 << endl;
	to100 = sotien / 100;
	sotien = sotien % 100;
	cout << "so to 100:\n" << to100 << endl;
	to50 = sotien / 50;
	sotien = sotien % 50;
	cout << "so to 50:\n" << to50 << endl;
	to20 = sotien / 20;
	sotien = sotien % 20;
	cout << "so to 20:\n" << to20 << endl;
	to10 = sotien / 10;
	sotien = sotien % 10;
	cout << "so to 10:\n" << to10 << endl;
	to5 = sotien / 5;
	sotien = sotien % 5;
	cout << "so to 5:\n" << to5 << endl;
	to1 = sotien / 1;
	sotien = sotien % 1;
	cout << "so to 1:\n" << to1 << endl;
	
	
	return 0;
}






	
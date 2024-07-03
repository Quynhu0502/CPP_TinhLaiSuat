// CPP_TinhLaiSuat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int sotien;
	int sonam;
	int laisuat;
	cout << "Nhap so tien: ";
	cin >> sotien;
	cout << "Nhap so nam: ";
	cin >> sonam;

	laisuat= sotien * 8/100 * sonam  ;
	cout << "lai suat la: " << laisuat << endl;
	return 0;
}


int main()
{
	/*int sotien;
	int sonam;
	int laisuat;
	cout << "Nhap so tien: ";
	cin >> sotien;
	cout << "Nhap so nam: ";
	cin >> sonam;

	laisuat= sotien * 8/100 * sonam  ;
	cout << "lai suat la: " << laisuat << endl;
	return 0;*/
	double sotien, lai, laisuat = 0.08;
	cout << "Nhap so tien: ";
	cin >> sotien;
	for (int i = 1; i <=10 ; i++)
	{
		lai = sotien * laisuat;
		cout << "nam " << i << " von: " << sotien << " lai: " << lai << endl;
		sotien = sotien + lai;

	}
	return 0;
}

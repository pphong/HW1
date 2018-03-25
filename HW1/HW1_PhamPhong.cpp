#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct SV
{
	string MSV;
	string Name;
	int Yob;
	float AVG;
};

void Inputfk(SV dssv, int &n)
{

	cout << "Nhap so luong sv : " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin.getline(dssv.MSV);

	}
}

void main()
{
	SV dssv;int n = 0;
	Inputfk(dssv,n);
}
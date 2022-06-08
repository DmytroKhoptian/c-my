#include <iostream>
#include <fstream>
#include <cstdlib> // ��� ������������� ������� exit()

using namespace std;

int main()
{
	// ����� ofstream ������������ ��� ������ ������ � ����.
	// ������� ���� SomeText.txt
	ofstream outf("2.txt");

	// ���� �� �� ����� ������� ���� ���� ��� ������ ������,
	if (!outf)
	{
		// �� ������� ��������� �� ������ � ��������� ������� exit()
		cerr << "Uh oh, SomeText.txt could not be opened for writing!" << endl;
		exit(1);
	}

	// ���������� � ���� ��������� ��� ������
	outf << "See line #1!" << endl;
	outf << "See line #2!" << endl;

	return 0;

	// ����� outf ������ �� ������� ���������, �� ���������� ������ ofstream ������������� ������� ��� ����
}
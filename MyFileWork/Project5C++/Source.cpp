#include <iostream>
#include <string>
#include <fstream>

using namespace std;
//ifstream(�������� �������� ������ istream);
//ofstream(�������� �������� ������ ostream);
//fstream(�������� �������� ������ iostream).

void main()
{
	setlocale(LC_ALL, "Russian");
	
	ofstream fout; //������ ������
	fout.open("txt.txt", ofstream::app);

	if (!fout)
	{
		cout << "error";
	}
	else
	{
		fout << "Ukraine";
	}
	fout.close();
}
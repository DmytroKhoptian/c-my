#include <iostream>
#include <string>
#include <fstream>

using namespace std;
//ifstream(является дочерним классу istream);
//ofstream(является дочерним классу ostream);
//fstream(является дочерним классу iostream).

void main()
{
	setlocale(LC_ALL, "Russian");
	
	ofstream fout; //обьект класса
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
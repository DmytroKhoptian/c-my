#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	//запись
	ifstream fin; //обьект класса
	fin.open("5.txt");

	if (!fin.is_open())
	{
		cout << "error";
	}
	else
	{
		cout << "open"<<endl;
		string str="";
		while (!fin.eof())
		{	
			getline(fin, str);
			cout << str;
		}
	}

	fin.close();
}
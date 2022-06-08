#include <iostream>
#include <string>
#include <iomanip> //setw

#include <fstream> //1
#include <iostream> //1

using namespace std;

string str;
int year;
float nums[3];

int  main()
{
	ifstream fileIn; //read
	string filename = "E:\\MEGA\\Основы С++\\17Файлы\\MyFileWork\\ProjectRead\\123.txt";
	fileIn.open(filename);

	if (fileIn.fail()) 
	{
		cout << "Error opening file!" << endl;
		return 0;
	}

	//fileIn >> str >> year;
	while (true)
	{
	    	if (fileIn.eof()) break;

		    fileIn >> nums[0] >> nums[1] >> nums[2];
			setw(5);
			for (size_t i = 0; i < 3; i++)
			{
				
				cout << left << setw(8) << nums[i] ;
			}
			cout << endl;			
	}
	 
	fileIn.close();

	

	//cout << str << endl;
	//cout << year << endl;

	return 0;
}
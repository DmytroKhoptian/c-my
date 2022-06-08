#include <iostream>
#include <string>
#include <iomanip> //setw

#include <fstream> //1
#include <iostream> //1

using namespace std;
 
float nums[3][3];

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

	while (true)
	{
		if (fileIn.eof()) break;
		int i = 0;
		
		while (fileIn >> nums[i][0] >> nums[i][1] >> nums[i][2])
			i++;
	}

	fileIn.close();

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{

			cout << left << setw(8) << nums[i][j];
		}
		cout << endl;
	}

	return 0;
}
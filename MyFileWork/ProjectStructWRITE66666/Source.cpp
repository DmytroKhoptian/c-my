#include <iostream>
#include <string>
#include <iomanip> //setw

#include <fstream> //1
#include <iostream> //1

#define READ
 
using namespace std;


struct Student 
{
	char name[20];
	int age;
};


int main()
{
	Student student1 = { "Vova", 28 };
	Student student2 = { "Vasia", 1221 };

	string filename = "E:\\MEGA\\Основы С++\\17Файлы\\MyFileWork\\ProjectStructWRITE66666\\struct.txt";

#ifdef WRITE
	//class ofstream - to work with file
	ofstream fileOut; //write	
	fileOut.open(filename, ofstream::app);
	if (fileOut.fail())
	{
		cout << "Error opening file!" << endl;
		return 1;
	}
	fileOut.write((char*)&student1, sizeof(Student)); //запись в байтах, размер в байтах
	fileOut.write((char*)&student2, sizeof(Student)); //запись в байтах, размер в байта
	fileOut.close();
#endif


#ifdef READ
	ifstream fileIn; //read
	fileIn.open(filename, ofstream::app);

	if (fileIn.fail())
	{
		cout << "Error opening file!" << endl;
		return 1;
	}

	Student studentTemp;
	//fileIn.read((char*)&studentTemp, sizeof(Student)); //чтение в байтах, размер в байтах
	//cout << studentTemp.name << "   " << studentTemp.age;

	while (fileIn.read((char*)&studentTemp, sizeof(Student))) 
	{
		cout << studentTemp.name << "   " << studentTemp.age << endl;
	}

	fileIn.close();
#endif // READ

	return 0;
}
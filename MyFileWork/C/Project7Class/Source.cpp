#include <iostream>
#include <string>
#include <fstream>
#define READ
using namespace std;
struct Vector3 {
	float x;
	float y;
	float z;
};

void main()
{
	string path = "v3.txt";

#ifdef WRITE

	ofstream fout; //обьект класса
	fout.open(path, ofstream::app);
	Vector3 vec1 = { 1, 1, 1 };
	Vector3 vec2 = { 2, 2, 2 };
	if (!fout)
	{
		cout << "error";
	}
	else
	{
		cout << "open";
		fout.write((char*)&vec1, sizeof(Vector3));//запись потока байт
		fout.write((char*)&vec2, sizeof(Vector3));//запись потока байт
	}
	fout.close();
#endif  

#ifdef READ
	ifstream fin; //обьект класса
	fin.open(path, ofstream::app);
 
	if (!fin)
	{
		cout << "error";
	}
	else
	{
		cout << "open";
		Vector3 vec1;
		while (fin.read((char*)&vec1, sizeof(Vector3)))
		{
			cout << vec1.x;
		}	
	}
	fin.close();
#endif  
}
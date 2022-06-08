#include <iostream>
#include <fstream> //1

using namespace std;

void main()
{
	//class ofstream - to work with file
	ofstream fileOut; //write
	string filename = "text.txt";

	fileOut.open(filename);

	fileOut << "Write in file" <<endl;
	fileOut << "2022" << endl;

	fileOut.close();


 


}
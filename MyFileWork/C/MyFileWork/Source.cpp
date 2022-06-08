#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	FILE* myFile; 
	const char* path = "text.txt";

	if ((myFile = fopen(path, "r")) != NULL)
	{
		//fopen("D:\\examples\\outfile.txt", "w")
		cout << "The file was found!";
		fclose(myFile);
	}
	else
		cout << "No file!";

	

	return 0;
}
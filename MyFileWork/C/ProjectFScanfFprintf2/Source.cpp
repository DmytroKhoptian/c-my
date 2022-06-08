#define _CRT_SECURE_NO_WARNINGS
#define N 255
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;
 

void ReadStringsFromFile( string &str)
{
	FILE* fp = fopen("1.txt", "r");
	char arr[N];
	if (fp != NULL) 
	{
		while (fgets(arr, N, fp) != NULL)
		{
			str += arr;
		}
		fclose(fp);
	}
	else
	{
		cout << "error" << endl;
	}
	
}

void WriteStringsToFile(string str)
{
	FILE* fp = fopen("1.txt", "w");
	char arr[];
	if (fp != NULL)
	{
		int i = 0;
		fputs(arr, fp);
		do {
			arr[i] += str[i];
			i++;
			cout << arr[i];
			if (str[i] == '\n')
			{
				fputs(arr, fp);
				fputs("\n", fp);
			}
		} while (str[i] != '\0');
	}
	else
	{
		cout << "error" << endl;
	}
	
	fclose(fp);
}

void main()
{
	/*string fileData = "";
	ReadStringsFromFile(fileData);
	cout << fileData<< endl;*/

	string fileData1 = "aaaaa\nbbbbbb\n12345";
	WriteStringsToFile(fileData1);
}
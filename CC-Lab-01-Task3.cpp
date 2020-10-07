/*Task 3: Write a program to convert a string from file to uppercase and store it in file.*/

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{

	string string, s, sup; char c;
	cout << "Enter the String: "; cin >> string;
	fstream file;
	file.open("File.txt", fstream::out);
	file << string;
	file.close();
	file.open("file.txt", fstream::in);
	if (file.is_open())
	{
		while (!file.eof())
		{
			file.get(c);
			if (!file.fail())
				s += c;
		}
	}
	file.close();

	file.open("file.txt", fstream::out);
	for (int i = 0; i < s.length(); i++)
		sup += toupper(s[i]);
	cout << "The string Written is: " << sup << endl;
	file << sup;
	file.close();
	file.open("file.txt", fstream::in);
	if (file.is_open())
	{
		while (!file.eof())
		{
			file.get(c);
			if (!file.fail())
				s += c;
			cout << c;
		}
	}
	file.close();
	return 0;
}

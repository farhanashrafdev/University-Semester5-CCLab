/*Task 4: Write a program to print string from text file in forward and reverse order.*/
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	string string,s,sup; char c;
	cout << "Enter the String: "; cin >> string;
	fstream file;
	file.open("File.txt", fstream::out);
	file << string;
	file.close();
	file.open("file.txt",fstream::in);
	if (file.is_open())
	{
		while (!file.eof())
		{
			file.get(c);
			if (!file.fail())
			s += c;
		}
	}
	cout << "The string in Forward Order: " << string << endl;
	cout << "The String in Reverse Order: ";
	for (int i = s.length()-1; i >-1; i--) {
		cout << s[i];
	}

	return 0;

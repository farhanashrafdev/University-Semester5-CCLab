#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	
	string palindrome,s; char c;
	cout << "Enter the String: "; cin >> palindrome;
	fstream file;
	file.open("File.txt", fstream::out);
	file << palindrome;
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
	for (int i = 0,j = (s.length() - 1); i!=j && j>0; i++, j--)
	{
		if(s[i]!=s[j])
		{
			cout << "The string is not Palindrome " << endl;
			exit(1);
		}
	}
	cout << "The string is Palindrome.";
	return 0;
}

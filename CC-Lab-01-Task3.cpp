#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main() {
	string s, s2, cs, cs2; char c;
	cout << "Enter the first string: "; cin >> s;
	cout << "Enter the second String: "; cin >> s2;
	fstream obj, obj2;
	obj.open("file.txt", fstream::out);
	obj << s;
	obj.close();
	obj2.open("file2.txt", fstream::out);
	obj2 << s2;
	obj2.close();
	obj.open("file.txt");
	if (obj.is_open())
	{
		int i = 0;
		while (!obj.eof())
		{
			obj.get(c);
			cs = cs + c;
		}
	}
	obj.close();

	obj2.open("file2.txt");
	c = '\0';
	if (obj2.is_open())
	{
		int i = 0;
		while (!obj2.eof())
		{
			obj2.get(c);
			cs2 = cs2 + c;
		}
	}
	if (cs == cs2) {
		cout << "Both strings are same" << endl;
	}
	else cout << "Both are not" << endl;

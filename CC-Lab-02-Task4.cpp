/*Task 4: Write a program to print string from text file in forward and reverse order.
*/

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
string init();
void recognizeDigits(string s);
int main() {
	string file; char c;
	file = init();
	recognizeDigits(file);


}
string init() {
		string s1 = "/0";
		fstream file; string s;
		file.open("file.txt");
	while (getline(file, s))
	{
		if (s1 == "/0")
			s1 = s + '\n';
		else
			s1 += s + '\n';
	}
	return s1;
	}
void recognizeDigits(string s1) {
	

	cout << "Digits are followings: " << endl;
			for (int i = 0; i < s1.length(); i++)
			{
				if (isdigit(s1[i]))
				{
					cout << s1[i] << " " << endl;
				}
			}
				
	}

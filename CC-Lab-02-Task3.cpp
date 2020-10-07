/*Task 3: Write a program to convert a string from file to uppercase and store it in file.
*/

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main() {
	string file; char c;
	file = init();
	recognizeOp(file);


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
void recognizeOp(string s1) {
		string operators = "";
		int i = 0;
		int j = s1.length();
	while(i<j){
		if (s1[i] == '+') {
			if (s1[i + 1] == '+')
			{
				operators += "++,"; i += 2;
			}
			else {
				operators += "+,"; i++;
			}//plus
		}//check if + or ++ exists;
		else if (s1[i] == '-') {
			if (s1[i + 1] == '-')
			{
				operators += "--,"; i += 2;
			}
			else {
				operators += "-,"; i++;
			}//minus
		}//check if - or -- exists;
		else if (s1[i] == '%' || s1[i] == '%')
		{
			operators += s1[i] + ","; i++;
		}
		else if (s1[i] == '/' && s1[i + 1] != '/' && s1[i - 1] != '/')
		{
			operators += "/,"; i++;
		}
		else if (s1[i] == '*' && s1[i + 1] != '*' && s1[i - 1] != '*') {
			operators += "*," ; i++;
		}
		else i++;
		
	}//while
	
	cout << "Operators are followings: " << operators << endl;
	}

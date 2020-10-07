/* Task 2: Detect comma, semicolon, parenthesis, brackets return corresponding Tokens */
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
string init();
void recognize(string s);
int main() {
	string file; char c;
	file = init();
	recognize(file);
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
void recognize(string s1) {
	//comma, semicolon, parenthesis, brackets 
	// ,		;		()			[{}]
		string comma = "\0";
		string Semicolon = "";
		string Parenthesis = "";
		string Brackets = "";
		int i = 0;
		int j = s1.length();
	while(i<j){
		if (s1[i] == ',') {
			if (comma == "\0")
			{
				comma = s1[i]; i++;
			}
			else
			{
				comma += s1[i] + " "; i++;
			}
		}
		else if (s1[i] == ';') {
			if (Semicolon=="\0")
			{
				Semicolon = s1[i]; i++;
			}
			else {
				Semicolon += "; \n"; i++;
			}
		}
		else if (s1[i] == '(' || s1[i] == ')')
		{
			if(s1[i]=='(')
			{
				Parenthesis += "( \n"; i++;
			}
			else {
				Parenthesis += ") \n"; i++;
			}
		}
		else if (s1[i] == '[' | s1[i] == ']' | s1[i] == '{' | s1[i] == '}')
		{
			Brackets += s1[i]; i++;
		}
		else i++;
		
	}//while
	
	cout << "Commas are followings: " << comma << endl;
	cout << "Semi Colon are followings: " << Semicolon << endl;
	cout << "Paranthesis are followings: " << Parenthesis << endl;
	cout << "Brackets are followings: " << Brackets << endl;
	}

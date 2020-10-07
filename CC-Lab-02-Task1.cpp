/*Task 1: Detect the space, tab, newline and return corresponding Tokens.*/

#include<iostream>
#include<string>
using namespace std;
void main()
{
	string s, temp;
	s = "Hello world/t how are you /n END";
	cout << "The string is Following:" << endl<< s << endl;
	cout << "Tokens are as follow: " << endl;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != 32 && s[i] != '/') {
			temp += s[i];

		}
		else if (s[i] == 32) {
			cout << temp << endl;
			cout << "its a white space." << endl;
			temp = "";
		}
		else if (s[i + 1] == 'n') {
			cout << temp << endl;
			cout << "its a new line." << endl;
			i++;
			temp = "";
		}
		else if (s[i + 1] == 't') {
			cout << temp << endl;
			cout << "Its a tab." << endl;
			temp = ""; i++;
		}
}
	if (temp != "") cout << temp;
	system("pause");
}

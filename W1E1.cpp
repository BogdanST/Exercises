#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Concatenation {
	/* the purpose of this class is for unit testing*/
public:
	string Concatenate(string,string);
}newString;

string Concatenation::Concatenate(string s1, string s2) {
	/* this program concatenates two strings in one by taking elements from each string one by one*/
	unsigned int i;
	string output;
	if (s1.length() >= s2.length())
	{
		for (i = 0; i<s2.length(); i++)
		{
			output = output + s1.substr(i, 1) + s2.substr(i, 1);
		}

		output = output + s1.substr(i, s1.length() - s2.length());

	}

	if (s1.length() <= s2.length())
	{
		for (i = 0; i<s1.length(); i++)
		{
			output = output + s1.substr(i, 1) + s2.substr(i, 1);
		}

		output = output + s2.substr(i, s2.length() - s1.length());

	}

	return output;
}

int main(int argc, char* argv[]) {
	Concatenation newString;
	string s1, s2;
	cout << "Input String 1: "; cin >> s1;
	cout << "Input String 2: "; cin >> s2;
	cout << "Output: " << newString.Concatenate(s1, s2); 
	return 0;
}


/* rasing some issues when s2.length() was > than s1.Length();
for (i = 0; s1.length() + s2.length() != output.length(); i++) {
if ((i + 1) >= s2.length() || (i + 1) <= s1.length()) {
output = output + s1.substr(i, 1);
output = output + s2.substr(i, 1);
}
}	*/

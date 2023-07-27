// Assignment 1: C++ program to generate all passwords for given characters
#include <iostream>
using namespace std;

void generate(char* arr, int i, string s, int len)
{
	
	if (i == 0) // when len has been reached
	{
		// print it out
		cout << s << "\n";
		return;
	}

	// iterate through the array
	for (int j = 0; j < len; j++) {
		// Create new string with next character
		string appended = s + arr[j];
		generate(arr, i - 1, appended, len);
	}

	return;
}

// function to generate all possible passwords
void crack(char* arr, int len)
{
	// call for all required lengths
	for (int i = 1; i <= len; i++) {
		generate(arr, i, "", len);
	}
}

int main()
{
	char arr[] = { 'a', 'b', 'c' ,'f','s'};
	int len = sizeof(arr) / sizeof(arr[0]);
	crack(arr, len);
	return 0;
}

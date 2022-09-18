#pragma once
#include<vector>
#include<string>
using namespace std;

string stringCompression(string str)
{
	int size = str.length();
	string compressedString = "";
	int i{ 0 }, count{ 1 };


	while (i < size)
	{
		if (str[i] == str[i + 1])
		{
			count++;
			i++;
		}
		else
		{
			compressedString += str[i];
			compressedString += to_string(count);
			count = 1;
			i++;
		}
	} 
	int size_compressed = compressedString.length();

	if (size_compressed >= size) return str;

	return compressedString;
}

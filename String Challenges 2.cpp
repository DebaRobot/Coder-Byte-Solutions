#include <iostream>
#include <string>
using namespace std;

/*
check that the size is correct
check that only 1-9 are included
add the first 3 digits
add the second set 
check the last digit of each set
*/

string SerialNumber(string str) 
{
	int first, second;

	if (str.size() < 11)
	{
		return "false";
	}

	for (int x = 0; x < str.size(); x++)
	{
		if (str[x] == '0')
		{
			return "false";
		}
	}

	first = int(str[0]) + int(str[1]) + int(str[2]);
	second = int(str[4]) + int(str[5]) + int(str[6]);

	if (first % 2 != 0 || second % 2 == 0)
	{
		return "false";
	}

	if (str[2] < str[1] || str[2] < str[0] || str[6] < str[5] || str[6] < str[4] || str[10] < str[8] || str[10] < str[9])
	{
		return "false";
	}
	else
	{
		return "true";
	}
}

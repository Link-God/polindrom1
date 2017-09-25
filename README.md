#include "stdafx.h"
#include <string> 
#include <iostream>
using namespace std;

int main()
{
	string str1, str2 ;
	int k ,i;
	k = 0;
	cin >> str1;
	str2 = str1;
i = size(str1);
//cout << i;
	for (i = i-1 ; i >= 0 ; i--, k++)
	{
		//cout << "666";
		str2.at(k) = str1.at(i);
		//cout << str2.at(k) << endl;

	}
	if (str2  == str1)
	{ 
		cout << "1"<<endl;
	}

	else
	{ 
		cout << "0" << endl;
	}
	system("pause");
    return 0;
}

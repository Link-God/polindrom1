
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
	for (i = i-1 ; i >= 0 ; i--, k++)
	{
		str2.at(k) = str1.at(i);
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


#pragma once
#include <iostream>
using namespace std;
class Request
{
public:
	string text;
	string inputRequest()
	{
		cout << "Введите запрос" << endl;
		cin >> text;
		return text;
	}
};


// Kursayin.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <cstring>

#include "MyString.h"
#include "Lecturer.h"
#include "SQL.h"

using namespace std;

int main()
{
	char str[200];

	cout << "Please type query: ";
	cin.getline(str, 200, '\n');

	SQL sql;
	MyString query = str;

	bool result = sql.query(query);

	if (!result)
	{
		cout << "Invalid query\n";
	}

	return 0; 
}
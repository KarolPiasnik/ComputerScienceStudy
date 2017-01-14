// BasicConversions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int atoi(char *str)
{
	int result = 0;
	int i = 0;
	int sign = 1;

	if (str[i] == '-')
	{
		sign = -1;
		++i;
	}

	for (; str[i] != '\0'; ++i)
	{
		result = result * 10 + (str[i] - '0');
	}

	result *= sign;
	return result;
}

int ptr_atoi(char *str)
{
	int result = 0;
	int sign = 1;

	if (*str == '-')
	{
		sign = -1;
		++str;
	}

	for (; *str != '\0'; ++str)
	{
		result = result * 10 + (*str - '0');
	}

	result *= sign;
	return result;
}

double atof(char *str)
{
	double result = 0;
	int i = 0;
	int sign = 1;
	int pointPosition = -1;

	if (str[i] == '-')
	{
		sign = -1;
		++i;
	}

	for (; str[i] != '\0'; ++i)
	{
		if (str[i] == '.')
			pointPosition = i; 
		else
			result = result * 10 + (str[i] - '0');
	}

	if (pointPosition == -1)
		pointPosition = i;

	for (int j = 0; j < i - pointPosition - 1; ++j)
		result /= 10;

	result *= sign;
	return result;
}

double ptr_atof(char *str)
{
	char* tmp = str;
	double result = 0;
	int sign = 1;
	int pointPosition = -1;

	if (*str == '-')
	{
		sign = -1;
		++str;
	}

	for (; *str != '\0'; ++str)
	{
		if (*str == '.')
			pointPosition = str-tmp;
		else
			result = result * 10 + (*str - '0');
	}

	if (pointPosition == -1)
		pointPosition = str-tmp;

	for (int j = 0; j < str - tmp - pointPosition - 1; ++j)
		result /= 10;

	result *= sign;
	return result;
}
// NOT WORKING YET
// NOT WORKING YET
// NOT WORKING YET
// NOT WORKING YET
char* ptr_itoa(int number)
{
	char* tmp = "";
	char* result = tmp;

	if (number < 0)
	{
		*result = '-';
		++result;
	}
	while (number != 0)
	{
		*result = ((number % 10) + '0');
		number /= 10;
		++result;
	}

	result = '\0';
	result = tmp;
	return result;
}

int ftoa(char *str)
{
	int result = 0;

	for (int i = 0; str[i] != '\0'; ++i)
	{
		result = result * 10 + (str[i] - '0');
	}
	return result;
}

int main()
{
	std::cout << ptr_itoa(1888) << std::endl;
    return 0;
}


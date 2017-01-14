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
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + (str[i] - '0');
	}

	result *= sign;
	return result;
}

int ptr_atoi(char *str)
{
	char* tmp = str;
	int result = 0;
	int sign = 1;

	if (*tmp == '-')
	{
		sign = -1;
		++tmp;
	}

	for (; *tmp != '\0'; ++tmp)
	{
		if (*tmp >= '0' && *tmp <= '9')
			result = result * 10 + (*tmp - '0');
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
		else if(str[i] >= '0' && str[i] <= '9')
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

	if (*tmp == '-')
	{
		sign = -1;
		++tmp;
	}

	for (; *tmp != '\0'; ++tmp)
	{
		if (*tmp == '.')
			pointPosition = tmp-str;
		else if (*tmp >= '0' && *tmp <= '9')
			result = result * 10 + (*tmp - '0');
	}

	if (pointPosition == -1)
		pointPosition = tmp-str;

	for (int j = 0; j < tmp - str - pointPosition - 1; ++j)
		result /= 10;

	result *= sign;
	return result;
}

int strlen(char*s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		++i;
	}
	return i;
}

int ptr_strlen(char*s)
{
	char* tmp = s;
	while (*tmp != '\0')
	{
		++tmp;
	}
	return tmp - s;
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

void x(char* a, char* b)
{
	while (*a++ = *b++  && *a < 200);
}

int main()
{
	char*a = "2";
	char*b = "33";
	std::cout << ptr_atof("1888.4") << std::endl;

    return 0;
}


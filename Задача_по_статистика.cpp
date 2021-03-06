// Задача_по_статистика.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

void InputNumbers(int length, int Array[])
{
	cout << "Input 10 numbers[1-20](at least one number must repeat itself): ";
	for (int i = 0; i < length; i++)
	{
		cin >> Array[i];
	}
}

void OutputNumbers(int length, int Array[])
{
	for (int i = 0; i < length; i++)
	{
		cout << Array[i];
		if (i < length - 1)
		{
			cout << " ; ";
		}
	}
	cout << endl;
}

void Sort(int length, int Array[])
{
	for (int i = 0; i < length-1; i++)
	{
		for (int k = 0; k < length-1; k++)
		{
			if (Array[k] > Array[k + 1])
			{
				int temp = Array[k];
				Array[k] = Array[k + 1];
				Array[k + 1] = temp;
			}
		}
	}
}

void Most_repetitive_element(int length, int Array[])
{
	int count1 = 1, count2 = 0;
	int number1 = Array[0], number2;
	for (int i = 1; i < length; i++)
	{
		if (Array[i] != number1)
		{
			number2 = Array[i];
			break;
		}
	}
	for (int i = 1; i < length; i++)
	{
		if (Array[i] == number1)
		{
			count1++;
		}
		else if(Array[i] == number2)
		{
			count2++;
		}
		else if (Array[i] != number2)
		{
			if (count1 >= count2)
			{
				number2 = Array[i];
				count2 = 1;
			}
			else if (count1 < count2)
			{
				number1 = number2;
				count1 = count2;
				number2 = Array[i];
				count2 = 1;
			}
		}
	}
	if (count1 > count2)
	{
		cout << number1 << " -> " << count1 << " times";
	}
	else if (count1 < count2)
	{
		cout << number2 << " -> " << count2 << " times";
	}
	else
	{
		cout << number1 << " -> " << count1 << " times" << " ; " << number2 << " -> " << count2 << " times";
	}
}

void Frequency_chart(int length, int Numbers[], int limits, int Frequency[])
{
	int k = 0;
	for (int i = 0; i<limits; i++)
	{
		Frequency[i] = 0;
	}
	for (int i = 0; i < length; i++)
	{
		if (Numbers[i] >= 1 && Numbers[i] <= 5)
		{
			Frequency[k]++;
		}
		else if (Numbers[i] >= 6 && Numbers[i] <= 10)
		{
			k = 1;
			Frequency[k]++;
		}
		else if (Numbers[i] >= 11 && Numbers[i] <= 15)
		{
			k = 2;
			Frequency[k]++;
		}
		else if (Numbers[i] >= 16 && Numbers[i] <= 20)
		{
			k = 3;
			Frequency[k]++;
		}
	}
	for (int i = 0; i < limits; i++)
	{
		cout << Frequency[i];
		if (i < limits - 3)
		{
			cout << "   ;   ";
		}
		else if (i < limits - 1)
		{
			cout << "    ;    ";
		}
	}
	cout << endl;
}

void MaxSumInterval(int length, int Array[])
{
	int sum1 = Array[0], sum2 = 0;
	string Interval1 = "{1-5}", Interval2 = "{6-10}";
	int x=1, y=5, a=5;
	for (int i = 1; i < length; i++)
	{
		if (Array[i]>=x && Array[i]<=y)
		{
			sum1+=Array[i];
		}
		else if (Array[i]>=x+a && Array[i]<=y+a)
		{
			sum2+=Array[i];
		}
		else if (Array[i]>=11 && Array[i]<=15)
		{
			if (sum1 >= sum2)
			{
				Interval2 = "{11-15}";
				a = 10;
				sum2 = Array[i];
			}
			else if (sum1 < sum2)
			{
				Interval1 = "{6-10}";
				sum1 = sum2;
				Interval2 = "{11-15}";
				a = 10;
				sum2 = Array[i];
			}
		}
		else if (Array[i] >= 16 && Array[i] <= 20)
		{
			if (sum1 > sum2)
			{
				Interval2 = "{16-20}";
				a = 15;
				sum2 = Array[i];
			}
			else if (sum1 < sum2)
			{
				Interval1 = "{11-15}";
				sum1 = sum2;
				Interval2 = "{16-20}";
				a = 15;
				sum2 = Array[i];
			}
		}
	}
	if (sum1 > sum2)
	{
		cout << Interval1 << " -> " << sum1;
	}
	else if (sum1 < sum2)
	{
		cout << Interval2 << " -> " << sum2;
	}
	else
	{
		cout << Interval1 << " -> " << sum1 << " ; " << Interval2 << " -> " << sum2;
	}
}

int main()
{
	int const SIZE_OF_ARRAY = 10;
	int Numbers[SIZE_OF_ARRAY];
	int const FREQUENCY_LIMITS = 4;
	int Frequency[FREQUENCY_LIMITS];
	int command;
	while (true)
	{
		cout << "-----------------------------------------" << endl;
		cout << "1-Input numbers; 2-Sort; 3-Most repetitive element; 4-Frequency chart; 5-MaxSumInterval; 6-exit" << endl;
		cout << "Input command: ";
		cin >> command;
		if (command == 1)
		{
			InputNumbers(SIZE_OF_ARRAY, Numbers);
		}
		else if (command == 2)
		{
			Sort(SIZE_OF_ARRAY, Numbers);
			cout << "Sorted array: ";
			OutputNumbers(SIZE_OF_ARRAY, Numbers);
		}
		else if (command == 3)
		{
			cout << "Most repetitive element: ";
			Most_repetitive_element(SIZE_OF_ARRAY, Numbers);
			cout << endl;
		}
		else if (command == 4)
		{
			cout << "Numbers: {1-5} ; {6-10} ; {11-15} ; {16-20}" << endl;
			cout << "Frequency: ";
			Frequency_chart(SIZE_OF_ARRAY, Numbers, FREQUENCY_LIMITS, Frequency);
		}
		else if (command == 5)
		{
			MaxSumInterval(SIZE_OF_ARRAY, Numbers);
			cout << endl;
		}
		else
		{
			break;
		}
	}
    return 0;
}


// ivan 9.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//4. Дано целое число в диапазоне 100–999. Вывести строку-описание данного числа, 
//например: 256 — «двести пятьдесят шесть», 814 — «восемьсот четырнадцать».

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	cout << "число" << endl;
	cin >> x;
	while ((x < 100) || (x > 999))
	{
		cout << "число (100 - 999)" << endl;
		cin >> x;
	}

	switch (x / 100)
	{
	case 1: cout << "сто ";
		break;
	case 2: cout << "двести ";
		break;
	case 3: cout << "триста ";
		break;
	case 4: cout << "четыреста ";
		break;
	case 5: cout << "пятьсот  ";
		break;
	case 6: cout << "шестьсот ";
		break;
	case 7: cout << "семьсот ";
		break;
	case 8: cout << "восемьсот ";
		break;
	case 9: cout << "девятьсот ";
		break;

	}
	if (((x / 10) % 10) == 1)
	{
		switch (x % 100)
		{
		case 10: cout << "десять ";
			break;
		case 11: cout << "одинадцать ";
			break;
		case 12: cout << "двенадцать";
			break;
		case 13: cout << "тринадцать";
			break;
		case 14: cout << "четырнадцать";
			break;
		case 15: cout << "пятнадцать";
			break;
		case 16: cout << "шестнадцать";
			break;
		case 17: cout << "семнадцать";
			break;
		case 18: cout << "восемнадцать";
			break;
		case 19: cout << "девятнадцать";
			break;

		}
	}
	else
	{

		switch ((x / 10) % 10)
		{
		case 2: cout << "двадцать ";
			break;
		case 3: cout << "тридцать ";
			break;
		case 4: cout << "сорок ";
			break;
		case 5: cout << "пятьдесят  ";
			break;
		case 6: cout << "шестьдесят ";
			break;
		case 7: cout << "семьдесят ";
			break;
		case 8: cout << "восемьдесят ";
			break;
		case 9: cout << "девяносто ";
			break;

		}

		switch (x % 10)
		{
		case 1: cout << "один";
			break;
		case 2: cout << "двф ";
			break;
		case 3: cout << "три ";
			break;
		case 4: cout << "четыре ";
			break;
		case 5: cout << "пять  ";
			break;
		case 6: cout << "шесть ";
			break;
		case 7: cout << "семь ";
			break;
		case 8: cout << "восемь";
			break;
		case 9: cout << "девять";
			break;

		}
	}
	return 0;
}
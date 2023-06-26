/*Урок 36 Прототипы функций*/

#include<iostream>

using namespace std;

int a = 1; // глобальная область видимость на весь файл



void main() {
	int b = 2; // доступна только в функции main

	for (int i = 0; i < 10; i++) // i доступна только в цикле for
	{
		// тут доступна a b i
	}
}
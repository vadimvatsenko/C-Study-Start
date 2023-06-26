//Урок 19. Ключевое слово continue в с++. Оператор continue
#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 5; i++)
	{
		if (i == 2)
		{
			continue;
		}
		cout << "variable i = " << i << endl;
	}


}

/*�������� �������
��������� ������� ���������� ��������� ����� � ��������� ����� ���������� ������� ������
�� 10 ���������, �������� �� 0 �� 20��. �������� ������ ���� �����������*/
#include<iostream>
#include<ctime>

using namespace std;

int main() {

	srand(time(NULL));

	int const SIZE = 10;

	int arr[SIZE];


	bool alreadyInArr;

	for (int i = 0; i < SIZE; ) // ������� i++
	{
		alreadyInArr = false; 
		int random = rand() % 20;// ������������ 10 ������ ��������
		
		for (int j = 0; j < i; j++)// 
		{
			if (arr[j] == random) {
				alreadyInArr = true;
				break;
			}
			 
		}
		if (!alreadyInArr) {
			arr[i] = random;
			i++; // ������ ���� i++
		}
	}



	for (int i = 0; i < SIZE; i++)
	{

		cout << arr[i] << endl;

	}


}


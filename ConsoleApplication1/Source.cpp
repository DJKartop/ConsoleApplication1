#include<iostream>
#include<locale>
#include<Windows.h>
using namespace std;
void main()
{
	/*15.	Введите массив символов из 20 элементов, состоящий из строчных букв и пробелов.
		Определить слово, которое начинается и заканчивается на одну и ту же букву.*/

	system("chcp 1251");
	system("cls");
	int start = 0;
	int end = 0;
	int slova = 0;
	char mas[40] = "Введите массив символов из 20 элементов";
	for (int i = 0;i < strlen(mas)+1;i++)
	{
		if (mas[i] ==' ' || mas[i]=='\0')
		{
			end = i - 1;
			
		}
			if (mas[start] == mas[end]){
				slova++;
				start = i + 1;
			}
	}
	cout << "Количество слов равняется = " << slova << endl;
	system("pause");
}
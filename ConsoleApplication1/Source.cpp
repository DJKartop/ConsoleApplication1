#include<iostream>
#include<locale>
#include<Windows.h>
using namespace std;
void main()
{
	/*15.	������� ������ �������� �� 20 ���������, ��������� �� �������� ���� � ��������.
		���������� �����, ������� ���������� � ������������� �� ���� � �� �� �����.*/

	system("chcp 1251");
	system("cls");
	int start = 0;
	int end = 0;
	int slova = 0;
	char mas[40] = "������� ������ �������� �� 20 ���������";
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
	cout << "���������� ���� ��������� = " << slova << endl;
	system("pause");
}
#include<locale.h>
#include<iostream>
#include<stdio.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	cout << "\t� ������ ����� ���������������� ������ ��������?" << endl;
	cout << "--------------------------------------------------------------------------------" << endl;
	int N;
	cout << "����� �� ������ ������� ���������������? " << endl;
	cout << "1)��� ����� \n2)����������\n3)������������\n4)���������\n5)������������\n6)������� �������� �� ����" << endl;
	cin >> N;
	if (N == 1)
	{
		cout << "������� �� Scrarch,����� PYTHON" << endl;
	}
	else if (N == 2)
	{
		cout << "1)����� ������\n2)� ���� ���� ���� ��� ��������!" << endl;
		cin >> N;
		if (N == 1)
		{
			cout << "����� ���������/�����?" << endl;
			cout << "1)� ���� �������� � ������� IT-�������\n2)� ������ ����$$$\n3)���\n4)����.����.\n5)���������\n6)3D/����" << endl;
			cin >> N;
			if (N == 1)
			{
				cout << "1)Facebook\n2)Google\n3)aple\n4)Microsoft" << endl;
				cin >> N;
				if (N == 1)
				{
					cout << "���� ��������������� phython" << endl;
				}
				else if (N == 2)
				{
					cout << "���� ��������������� phython" << endl;
				}
				else if (N == 3)
				{
					cout << "���� ��������������� OBECTIVE-C" << endl;
				}
				else if (N == 4)
				{
					cout << "���� ��������������� C#" << endl;
				}
			}
			else if (N == 2)
			{
				cout << "���� ��������������� JAVA" << endl;
			}
			else if (N == 3)
			{
				cout << "1)������(���-���������)\n2)������(�� ��� �� ��� ������)" << endl;
				cin >> N;
				if (N == 1)
				{
					cout << "���� ��������������� JAVASCRIPT" << endl;
				}
				else if (N == 2)
				{
					cout << "���� �������� ��..." << endl;
					cout << "1)����������\n2)�������" << endl;
					cin >> N;
					if (N == 1)
					{
					chtoskazhite:
						cout << "��� ������� � Microsoft?" << endl;
						cout << "1)����� ���:)\n2)�������:|\n3)����:(" << endl;
						cin >> N;
						if (N == 1)
						{
							cout << "���� ��������������� C#" << endl;
						}
						else if (N == 2)
						{
							cout << "���� ��������������� JAVA" << endl;
						}
						else if (N == 3)
						{
							cout << "���� ��������������� JAVA" << endl;
						}
					}
					else if (N == 2)
					{
					hotite:
						cout << "������ ����������� ���-�� �����,�� �� ����� ����������?" << endl;
						cout << "1)��\n2)���\n3)������" << endl;
						cin >> N;
						if (N == 1)
						{
							cout << "���� ��������������� JAVASCRIPT" << endl;
						}
						else if ((N == 2) || (N == 3))
						{
							cout << "����� � ��� ������� �������?" << endl;
							cout << "1)Lego\n2)���������\n3)����������,�� ������� �����" << endl;
							cin >> N;
							if (N == 1)
							{
								cout << "���� ��������������� PYTHON" << endl;
							}
							else if (N == 2)
							{
								cout << "���� ��������������� RUBY" << endl;
							}
							else if (N == 3)
							{
								cout << "���� ��������������� PHP" << endl;
							}
						}

					}
				}
			}
			else if (N == 4)
			{
			korpsof:
				goto chtoskazhite;
			}
			else if (N == 5)
			{
			mobilnaya:
				cout << "����� ��?" << endl;
				cout << "1)IOS\n2)Android" << endl;
				cin >> N;
				if (N == 1)
				{
					cout << "���� ��������������� OBJECTIVE-C" << endl;
				}
				else if (N == 2)
				{
					cout << "���� ��������������� JAVA" << endl;
				}
			}
			else if (N == 6)
			{
			D3:
				cout << "���� ��������������� C#" << endl;
			}
		}
		else if (N == 2)
		{
		kakayasfera:
			cout << "����� ���������/�����?" << endl;
			cout << "1)3d/����\n2)���������\n3)���" << endl;
			cin >> N;
			if (N == 1)
			{
				goto D3;
			}
			else if (N == 2)
			{
				goto mobilnaya;
			}
			else if (N == 3)
			{
				cout << "��� ������ ����� �������� � �������� �������, ��� twitter?" << endl;
				cout << "1)��\n2)���" << endl;
				cin >> N;
				if (N == 1)
				{
					cout << "���� ��������������� JAVASCRIPT" << endl;
				}
				if (N == 2)
				{
					goto hotite;
				}
			}
		}

	}
	else if ((N == 3) || (N == 4) || (N == 5))
	{
		cout << "� ��� ���� ���� �� �������" << endl;
		cout << "1)��\n2)���,������ ���� �������" << endl;
		cin >> N;
		if (N == 1)
		{
			goto kakayasfera;
		}
		else if (N == 2)
		{
			cout << "����������� ������" << endl;
			cout << "1)������� ��������\n2)������ ��������\n3)����������� ��������\n4)����� ������� ����(�� ����� ����� �����)" << endl;
			cin >> N;
			if ((N == 1) || (N == 2))
			{
				cout << "���� ��������������� PHYTHON" << endl;
			}
			else if (N == 3)
			{
				cout << "����� ������� �������" << endl;
				cout << "1)�������\n2)������" << endl;
				cin >> N;
				if (N == 1)
				{
					cout << "���� ��������������� JAVA" << endl;
				}
				else if (N == 2)
				{
					cout << "���� ��������������� C" << endl;
				}
			}
			else if (N == 4)
			{
				cout << "���� ��������������� C++" << endl;
			}
		}
	}
	else if (N == 6)
	{
		cout << "���� ��������������� PHYTHON" << endl;
	}
}
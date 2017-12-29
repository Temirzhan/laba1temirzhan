#include<locale.h>
#include<iostream>
#include<stdio.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	cout << "\tС какого языка программирования начать обучение?" << endl;
	cout << "--------------------------------------------------------------------------------" << endl;
	int N;
	cout << "Зачем вы хотите изучить програмирование? " << endl;
	cout << "1)Для детей \n2)Заработать\n3)Саморазвитие\n4)Интересно\n5)Поразвлечься\n6)Янезнаю выберите за меня" << endl;
	cin >> N;
	if (N == 1)
	{
		cout << "Начните со Scrarch,затем PYTHON" << endl;
	}
	else if (N == 2)
	{
		cout << "1)Найти работу\n2)У меня есть идея для стартапа!" << endl;
		cin >> N;
		if (N == 1)
		{
			cout << "Какая платформа/сфера?" << endl;
			cout << "1)Я хочу работать в крупной IT-комании\n2)Я просто хочу$$$\n3)Веб\n4)Корп.софт.\n5)Мобильная\n6)3D/игры" << endl;
			cin >> N;
			if (N == 1)
			{
				cout << "1)Facebook\n2)Google\n3)aple\n4)Microsoft" << endl;
				cin >> N;
				if (N == 1)
				{
					cout << "Язык програмирования phython" << endl;
				}
				else if (N == 2)
				{
					cout << "Язык програмирования phython" << endl;
				}
				else if (N == 3)
				{
					cout << "Язык програмирования OBECTIVE-C" << endl;
				}
				else if (N == 4)
				{
					cout << "Язык програмирования C#" << endl;
				}
			}
			else if (N == 2)
			{
				cout << "Язык програмирования JAVA" << endl;
			}
			else if (N == 3)
			{
				cout << "1)Фронэд(Веб-интерфейс)\n2)Бэкенд(то что за веб сайтом)" << endl;
				cin >> N;
				if (N == 1)
				{
					cout << "Язык програмирования JAVASCRIPT" << endl;
				}
				else if (N == 2)
				{
					cout << "Хочу работать на..." << endl;
					cout << "1)Корпарацию\n2)стартап" << endl;
					cin >> N;
					if (N == 1)
					{
					chtoskazhite:
						cout << "Что скажите о Microsoft?" << endl;
						cout << "1)Люблю его:)\n2)Неплохо:|\n3)Фууу:(" << endl;
						cin >> N;
						if (N == 1)
						{
							cout << "Язык програмирования C#" << endl;
						}
						else if (N == 2)
						{
							cout << "Язык програмирования JAVA" << endl;
						}
						else if (N == 3)
						{
							cout << "Язык програмирования JAVA" << endl;
						}
					}
					else if (N == 2)
					{
					hotite:
						cout << "Хотите попробывать что-то новое,но не очень трудоемкое?" << endl;
						cout << "1)да\n2)нет\n3)незнаю" << endl;
						cin >> N;
						if (N == 1)
						{
							cout << "Язык програмирования JAVASCRIPT" << endl;
						}
						else if ((N == 2) || (N == 3))
						{
							cout << "Какая у вас любимая игрушка?" << endl;
							cout << "1)Lego\n2)Пластилин\n3)Старенький,но любимый мишка" << endl;
							cin >> N;
							if (N == 1)
							{
								cout << "Язык програмирования PYTHON" << endl;
							}
							else if (N == 2)
							{
								cout << "Язык програмирования RUBY" << endl;
							}
							else if (N == 3)
							{
								cout << "Язык програмирования PHP" << endl;
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
				cout << "какая ОС?" << endl;
				cout << "1)IOS\n2)Android" << endl;
				cin >> N;
				if (N == 1)
				{
					cout << "Язык програмирования OBJECTIVE-C" << endl;
				}
				else if (N == 2)
				{
					cout << "Язык програмирования JAVA" << endl;
				}
			}
			else if (N == 6)
			{
			D3:
				cout << "Язык програмирования C#" << endl;
			}
		}
		else if (N == 2)
		{
		kakayasfera:
			cout << "Какая платформа/сфера?" << endl;
			cout << "1)3d/игры\n2)Мобильная\n3)Веб" << endl;
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
				cout << "Ваш сервис будет работать в реальном времени, как twitter?" << endl;
				cout << "1)Да\n2)Нет" << endl;
				cin >> N;
				if (N == 1)
				{
					cout << "Язык програмирования JAVASCRIPT" << endl;
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
		cout << "У вас есть идея на миллион" << endl;
		cout << "1)Да\n2)Нет,Просто хочу изучать" << endl;
		cin >> N;
		if (N == 1)
		{
			goto kakayasfera;
		}
		else if (N == 2)
		{
			cout << "Мненравится учится" << endl;
			cout << "1)Простым способом\n2)Лучшим способом\n3)Трудненьким способом\n4)Очень сложный путь(но потом будет легче)" << endl;
			cin >> N;
			if ((N == 1) || (N == 2))
			{
				cout << "Язык програмирования PHYTHON" << endl;
			}
			else if (N == 3)
			{
				cout << "Какая каробка передач" << endl;
				cout << "1)Автомат\n2)Ручная" << endl;
				cin >> N;
				if (N == 1)
				{
					cout << "Язык програмирования JAVA" << endl;
				}
				else if (N == 2)
				{
					cout << "Язык програмирования C" << endl;
				}
			}
			else if (N == 4)
			{
				cout << "Язык програмирования C++" << endl;
			}
		}
	}
	else if (N == 6)
	{
		cout << "Язык програмирования PHYTHON" << endl;
	}
}
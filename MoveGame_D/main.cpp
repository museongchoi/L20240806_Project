#include <iostream>
#include <conio.h>
using namespace std;

// ������ �迭 int Map[10][10][10]; : 3������ �޸� ���� ����.
int Map[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1}
};

int PlayerX = 1;
int PlayerY = 1;
char Key;
bool bIsRunning = true;


void Rander()
{
	system("cls"); // �۾��� ��������.

	for (int y = 0; y < 10; ++y)
	{
		for (int x = 0; x < 10; ++x)
		{
			if (x == PlayerX && y == PlayerY)
			{
				cout << "P";
			}
			else if (Map[y][x] == 1)
			{
				cout << "#";
			}
			else if (Map[y][x] == 0)
			{
				cout << " ";
			}
			//cout << Map[y][x];
		}
		cout << endl; // �� : #, �ٴ� : " "
	}
}

void Process()
{
	if (Key == 'w')
	{
		PlayerY--;
	}
	if (Key == 's')
	{
		PlayerY++;
	}
	if (Key == 'a')
	{
		PlayerX--;
	}
	if (Key == 'd')
	{
		PlayerX++;
	}
	if (Key == 'q')
	{
		bIsRunning = false;
	}
}

void Input()
{
	//cin >> Key;
	Key = _getch();
}

// �����������α׷��� - �������� ������. �ش� ������ ���� ��� ���� �ʾ� ������ �����, ���� �ľ��� ��ƴ�.
// ->
// ��ü�������α׷��� - 
int main()
{
	// Engine, Game Loop
	//for(;;)
	while (bIsRunning)
	{
		Input();

		Process();

		Rander();
	}

	

	return 0;
}


//#include <iostream>
//#include <conio.h>
//
//using namespace std;
//
////[][][][][][][][][][]
////[][][][][][][][][][]
////[][][][][][][][][][]
////[][][][][][][][][][]
////[][][][][][][][][][]
////[][][][][][][][][][]
////[][][][][][][][][][]
////[][][][][][][][][][]
////[][][][][][][][][][]
////[][][][][][][][][][]
////[][][][][][][][][][]
//
//int Map[10][10] = {
//	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
//	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
//};
//
//int PlayerX = 1;
//int PlayerY = 1;
//char Key;
//bool bIsRunning = true;
//
//
//
//
//void Render()
//{
//	system("cls");
//
//	for (int Y = 0; Y < 10; ++Y)
//	{
//		for (int X = 0; X < 10; ++X)
//		{
//			if (X == PlayerX && Y == PlayerY)
//			{
//				cout << "P";
//			}
//			else if (Map[Y][X] == 1)
//			{
//				cout << "#";
//			}
//			else if (Map[Y][X] == 0)
//			{
//				cout << " ";
//			}
//		}
//		cout << endl; //#, " "
//	}
//}
//
//void Input()
//{
//	Key = _getch();
//}
//
//void Process()
//{
//	if (Key == 'w')
//	{
//		PlayerY--;
//	}
//	if (Key == 's')
//	{
//		PlayerY++;
//	}
//	if (Key == 'a')
//	{
//		PlayerX--;
//	}
//	if (Key == 'd')
//	{
//		PlayerX++;
//	}
//	if (Key == 'q')
//	{
//		bIsRunning = false;
//	}
//}
//
//
//int main()
//{
//	while (bIsRunning)
//	{
//		Input();
//
//		Process();
//
//		Render();
//	}
//
//	return 0;
//}

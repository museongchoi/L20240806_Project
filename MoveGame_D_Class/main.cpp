#include <iostream> // include : �ش� ������ ���� ���̱�
#include "Player.h"
#include "Engine.h"

int main()
{
	UEngine* MyEngine = new UEngine;

	MyEngine->OpenLevel();

	delete MyEngine;

	return 0;
}



//{
//	APlayer Player1
//}
//Player1; //  ���� �߻�

//APlayer Player; // ������ �Ҷ����� �޸𸮰� ������ ����.
//APlayer* PPlayer; // �÷��̾ ��������� �޸𸮰� ������.
//APlayer* PPlayer = new APlayer; // ������ �ð��� �� �� ���� �����ͳ� ��ü�� ������ �� �����ϴ�.
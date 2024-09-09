#pragma once
#include <vector>
//#include "Player.h"
class APlayer; // �ʿ��Ҷ� �ش� class�� ã�Ƽ� ��� | ������ �����Ҷ����� ������ �ִ� �ٴ� ���̹Ƿ� �����ϴ�.
class AMonster;
class AGoal;
class AFloor;
class AWall;

class UWorld
{
public:
	// ������ ������ ������ ȣ��
	UWorld(); // ������
	~UWorld(); // ������


	//APlayer Player; // "Player.h ������� ���� �� ������ ������ ��� : �������ڸ��� �޸𸮰� ������.
	APlayer* Player;
	AMonster* Monster;
	std::vector<AFloor*> Floors; // �ٴ�
	std::vector<AWall*> Walls; // ��

	AGoal* Goal; // ������

};


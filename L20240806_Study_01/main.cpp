#include <iostream>
#include "Player.h"
#include "Monster.h"
#include "Boar.h"
#include "Goblin.h"

using namespace std;


// ȥ�� �������� �ʴ´�. ���� ������ �ȵȴ�.
int main()
{
	APlayer* Player = new APlayer();
	cout << Player->GetHP() << endl;

	delete Player;

	return 0;
}

// ����
//APlayer Player; // ������ �ܰ迡�� ���ǰ� �ȴ�.
//APlayer* Player; // ������ �ƴ� �÷��̾ ����Ű�� 8����Ʈ ȭ��ǥ
//new APlayer; // 
//APlayer* Player = new APlayer; // new �����ڸ� ����� �����ڸ� ����. | ���Ҷ� ���� ���Ҷ� �Ҹ�

//Player->Move();
//AMonster* Monster = new AMonster;
//
//Monster->Move();

//delete Player;
//delete Monster;
//ABoar* Boar = new ABoar; // ����� ���� Ŭ������ �θ���� �޸𸮰� ������ ����
//
//Boar->Move();
//
//delete Boar;
//
//AGoblin* Goblin = new AGoblin;
//
//Goblin->Move();
//
//delete Goblin;



//AActor* Actor = new AActor;
////Actor->HP = 0; // AActor Ŭ���� �ȿ� private�� HP�� �������� ������ ��������. ��, ������ ���� �ʱ� ������ �ٸ� �����ڰ� ������ �ϴ� �һ�� �߻�.
//
//delete Actor;
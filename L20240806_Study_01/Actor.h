#pragma once
class AActor
{
public: // interface | ���� ����ϴ�
	AActor();
	~AActor();

	void Move();


	// ������ �ϰų� ������ �� �� �ְ� �ϴ� ��.
	int GetHP() { return HP; }
	void SetHP(int NewHP) 
	{
		if (NewHP >= 0)
		{
			HP = NewHP;
		}
	}

private:
	//int HP;

protected:
	int HP;

};

//                         ����
//public                   �ƹ��볪 ����
//protected                ����
//private                  ����


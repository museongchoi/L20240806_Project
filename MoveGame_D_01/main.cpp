#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

class Image
{
public:
	int Idx;
	int X;
	int Y;
	int R;
	int G;
	int B;

};

class State
{
public:
	State() {}
	State(int newID, string newStateName)
	{
		ID = newID;
		StateName = newStateName;
	}
	int ID;
	string StateName;

};

class Transition
{
public:
	Transition() {}
	Transition(int newCurrentstatus, string newCindition, int newnextState)
	{
		currentstatus = newCurrentstatus;
		condition = newCindition;
		nextState = newnextState;
	}
	int currentstatus;
	string condition;
	int nextState;

};

int main()
{
	
	//Image* Images = new Image[100];
	vector<Image> Images;
	map<int, State> States;
	States[1] = State(1, "��ȸ");
	States[2] = State(1, "�߰�");
	States[3] = State(1, "����");
	States[4] = State(1, "����");

	map<string, Transition> Transitions;
	Transitions["���߰�"] = Transition(1, "���߰�", 2);
	Transitions["����ħ"] = Transition(2,"����ħ", 1);
	Transitions["�����Ÿ�����"] = Transition(2,"�����Ÿ�����", 3);
	Transitions["�����Ÿ���Ż"] = Transition(3,"�����Ÿ���Ż", 2);
	Transitions["HP����"] = Transition(1,"HP����", 2);

	int CurrentState = 1;
	Transition FindTransitions = Transitions["���߰�"];
	int NextState = FindTransitions.nextState;


	//delete[] Images;

	return 0;
}
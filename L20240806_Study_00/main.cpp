#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// �����Ϳ� ����������.
	int a = 10;

	int* ptr = &a;

	cout << ptr;

	// int �ʹ� ������� �����ϴ°� �ܿ�� ����.
	int* P = new int;

	cout << sizeof(P) << endl;
	cout << new int << endl; // �޸� ��ġ�� | ���� �Ҵ��� �޸� ��ġ

	delete P;

	cout << "--------------" << endl;

	// �ܼ� ����
	int Korean1 = 89;
	int Korean2 = 89;
	int Korean3 = 89;
	int Korean4 = 89;
	int Korean5 = 89;

	// ��ǥ������ ���� �ּҸ� �˷��ش�.
	//int Korean[10] = { 0, }; // {} : �ʱ�ȭ
	int Korean[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	cout << Korean << endl; // �迭 �̸��� ��ġ��
	cout << Korean[0] << endl;
	cout << &Korean[0] << endl;
	cout << &Korean[1] << endl;

	cout << *Korean << endl;
	// ������ ����� �迭�� ���� ���
	// �迭�� ���� : ������ ���ϰ� ����ϱ� ����
	cout << *(Korean + 0 * sizeof(int)) << endl;
	cout << *(Korean + 1) << endl;
	cout << (int long)(Korean + 1) << endl;

	// �迭�� ������ �ݺ��ϱ� ���� ������ ���������
	cout << Korean[0] << endl;
	cout << Korean[1] << endl;

	// ������� ���� �� : �迭�� �����ϱ� ���� ������� ����
	for (int i = 0; i < 10; ++i)
	{
		cout << Korean[i] << endl;
	}

	return 0;
}
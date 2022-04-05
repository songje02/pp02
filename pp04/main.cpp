#include <iostream>
using namespace std;

class A
{
public:
	virtual void dynamic_print()
	{
		cout << "�θ� ���� �Ҵ�\n";
	}

	void static_print()
	{
		cout << "�ǰ��ؿ�..\n";
	}
};

class B : public A
{
public:
	void dynamic_print()
	{
		cout << "�ڽ� ���� �Ҵ�\n";
	}

	void static_print()
	{
		cout << "����\n";
	}
};

void main() 
{
	//A temp; //����
	//temp.print();
	//A* temp = new A(); //����
	//temp->print();

	A* tempA;
	B* tempB = new B();
	tempA = tempB; //������ A*�� ���� �Ǿ� �ֱ� ������ 
	tempA->static_print(); //A print()�Լ��� �����
	tempB->static_print();

	tempA->dynamic_print();
	tempB->dynamic_print();
}
#include <iostream>

using namespace std;

class Car 
{
public : 
	Car()
	{
		cout << "Car�� �����˴ϴ�\n";
	}
	~Car()
	{
		cout << "Car�� �Ҹ�˴ϴ�\n";
	}

	virtual void OpenWindow()
	{
		cout << "â���� ���ϴ�\n";
	}

	virtual void ChangeGear()
	{
		cout << "�� �����մϴ�\n";
	}
};

class Spark : public Car
{
public:
	Spark()
	{
		cout << "Spark�� �����˴ϴ�\n";
	}
	~Spark()
	{
		cout << "Spark�� �Ҹ�˴ϴ�\n";
	}

	void OpenWindow()
	{
		cout << "�������� â���� ���ϴ�\n";
	}

	void ChangeGear()
	{
		cout << "�������� �� �ٲߴϴ�\n";
	}
};

class Escalade : public Car
{
public:
	Escalade()
	{
		cout << "Escalade�� �����˴ϴ�\n";
	}
	~Escalade()
	{
		cout << "Escalade�� �Ҹ�˴ϴ�\n";
	}

	void OpenWindow()
	{
		cout << "�ڵ����� â���� ���ϴ�\n";
	}

	void ChangeGear()
	{
		cout << "�ڵ����� �� �ٲߴϴ�\n";
	}
};

//������ �Լ�
void main()
{
	Car* c[2]; 
	c[0] = new Spark(); //���� �Ҵ�
	c[1] = new Escalade();

	for (size_t i = 0; i < 2; i++)
	{
		c[i]->OpenWindow();
		c[i]->ChangeGear();
		delete(c[i]);
	}
}
#include <iostream>
using namespace std;

class A
{
public:
	virtual void dynamic_print()
	{
		cout << "부모 동적 할당\n";
	}

	void static_print()
	{
		cout << "피곤해요..\n";
	}
};

class B : public A
{
public:
	void dynamic_print()
	{
		cout << "자식 동적 할당\n";
	}

	void static_print()
	{
		cout << "졸려\n";
	}
};

void main() 
{
	//A temp; //정적
	//temp.print();
	//A* temp = new A(); //동적
	//temp->print();

	A* tempA;
	B* tempB = new B();
	tempA = tempB; //위에서 A*로 선언 되어 있기 때문에 
	tempA->static_print(); //A print()함수가 실행됨
	tempB->static_print();

	tempA->dynamic_print();
	tempB->dynamic_print();
}
//#include <iostream>
//#include <string>
//
//using namespace std;
//bool is_game_running = false;
//
//
//class GameObject
//{
//public:
//	GameObject()
//	{
//		cout << "���� ������Ʈ ����!\n";
//	}
//	virtual ~GameObject()
//	{
//		cout << "���� ������Ʈ �Ҹ�!\n";
//	}
//
//	virtual void Start()
//	{
//		cout << "���� ������Ʈ ��ŸƮ!\n";
//	}
//	virtual void Update()
//	{
//		cout << "���� ������Ʈ ������Ʈ!\n";
//	}
//};
//
//class Player : public GameObject //player�ڽ� gameobject �θ�, �θ� ���� ������
//{
//public:
//	int HP = 100;
//
//	Player()
//	{
//		cout << "������ ����!!\n";
//	}
//	~Player()
//	{
//		cout << "������ �Ҹ�!!\n";
//	}
//
//	void Start()
//	{
//		cout << "�������� HP��" << HP << "�Դϴ�!\n";
//	}
//	 void Update()
//	{
//		cout << "������ ������Ʈ!!\n";
//	}
//};
//
//class Enemy : public GameObject
//{
//public:
//	int HP = 100;
//
//	Enemy() 
//	{
//		cout << "�ڷγ� ���̷��� ����!\n!";
//	}
//	~Enemy()
//	{
//		cout << "�ڷγ� ���̷��� �Ҹ�!!\n";
//	}
//
//	void Start()
//	{
//		cout << "�ڷγ� ���̷����� HP��" << HP << "�Դϴ�!\n";
//	}
//	void Update()
//	{
//		cout << "�ڷγ� ���̷��� ������Ʈ!!\n";
//	}
//};
//
//
//int main() 
//{
//	is_game_running = true;
//
//	GameObject *p = new Player();
//	GameObject *e = new Enemy();
//
//	p->Start();
//	e->Start();
//
//	while (is_game_running)
//	{
//		p->Update();
//		e->Update();
//
//		cout << "�Է����ּ���(1:���� ����, 2:���� ���): ";
//
//		int input;
//		cin >> input; //cin���ٰ� ���� ���ڸ� input ������ ����
//		if (input == 1)
//		{
//			is_game_running = false; //�Ҹ��� 
//		}
//		delete(p);
//		delete(e);
//	};
//	return 0;
//}


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
//		cout << "게임 오브젝트 생성!\n";
//	}
//	virtual ~GameObject()
//	{
//		cout << "게임 오브젝트 소멸!\n";
//	}
//
//	virtual void Start()
//	{
//		cout << "게임 오브젝트 스타트!\n";
//	}
//	virtual void Update()
//	{
//		cout << "게임 오브젝트 업데이트!\n";
//	}
//};
//
//class Player : public GameObject //player자식 gameobject 부모, 부모가 먼저 생성됨
//{
//public:
//	int HP = 100;
//
//	Player()
//	{
//		cout << "송지은 생성!!\n";
//	}
//	~Player()
//	{
//		cout << "송지은 소멸!!\n";
//	}
//
//	void Start()
//	{
//		cout << "송지은의 HP는" << HP << "입니다!\n";
//	}
//	 void Update()
//	{
//		cout << "송지은 업데이트!!\n";
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
//		cout << "코로나 바이러스 생성!\n!";
//	}
//	~Enemy()
//	{
//		cout << "코로나 바이러스 소멸!!\n";
//	}
//
//	void Start()
//	{
//		cout << "코로나 바이러스의 HP는" << HP << "입니다!\n";
//	}
//	void Update()
//	{
//		cout << "코로나 바이러스 업데이트!!\n";
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
//		cout << "입력해주세요(1:게임 종료, 2:게임 계속): ";
//
//		int input;
//		cin >> input; //cin에다가 적은 숫자를 input 변수에 저장
//		if (input == 1)
//		{
//			is_game_running = false; //소멸자 
//		}
//		delete(p);
//		delete(e);
//	};
//	return 0;
//}


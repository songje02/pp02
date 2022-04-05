#pragma once

using namespace std;

namespace Musoeun
{
	MCommand* Key[5];

	void initialize()
	{
		Key[0] = new LeftCommand();
		Key[1] = new RightCommand();
		Key[2] = new RunCommand();
		Key[3] = new DownCommand();
		Key[4] = new JumpCommand();
		//cout << "초기화 중...\n";
	}

	void input()
	{
		int input;
		cin >> input;

		Key[input]->Execute();

		//int a;
		//cout << "입력 중...\n";
		//cin >> a; //scanf와 같음
	}

	void Update()
	{
		//cout << "Update 중...\n";
	}

	void Render()
	{
		//cout << "Renderring 중...\n";
	}

	void Realease()
	{
		for (size_t i = 0; i < 5; i++)
		{
			delete(Key[i]);
		}

		//cout << "삭제 중...\n";
	}

	class MGameLoop
	{
	public : 
		bool isGameRunning = false;

		MGameLoop() 
		{}
		~MGameLoop()
		{}

		void Run()
		{
			isGameRunning = true;

			initialize();

			while (isGameRunning)
			{
				input();
				Update();
				Render();
			}
			Realease();
		}
	};
}
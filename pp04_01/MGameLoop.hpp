//#pragma once
//#include <iostream>
//#include <chrono> //시간 라이브러리
//#include <thread>
//#include <Windows.h>
//
//using namespace std;
//
//namespace MuSeoun_Engine 
//{
//	class MGameLoop
//	{ 
//	private :
//		bool _isGameRunning;
//
//	public:
//		MGameLoop() 
//		{
//			_isGameRunning = false;
//		}
//		~MGameLoop() {}
//
//		void Run()
//		{
//			_isGameRunning = true;
//
//			initialize();
//
//			while (_isGameRunning)
//			{
//				input();
//				Update();
//				Render();
//			}
//			Realease();
//		}
//
//		void Stop()
//		{
//			_isGameRunning = false;
//		}
//
//	private:
//		void initialize()
//		{
//			SetCursorState(false);
//		}
//
//		void input()
//		{
//			if (GetAsyncKeyState(VK_SPACE) == -0X800 || GetAsyncKeyState(VK_SPACE) == -0X801)
//			{
//				
//			}
//			else
//			{
//				
//			}
//		}
//		void Update()
//		{
//			
//		}
//		void Render() //화면에 그리는 것
//		{
//			chrono::system_clock::time_point startRenderTimePoint = chrono::system_clock::now();
//			//system("cls");
//			cout << "Rendering...";
//
//			chrono::duration<double> renderDuration = chrono::system_clock::now() - startRenderTimePoint;
//			cout << "Rendering speed : " << renderDuration.count() << "sec" << endl;
//
//			int remainingFrameTime = 100 - (int)(renderDuration.count() * 1000.0);
//
//			if (remainingFrameTime > 0)
//				this_thread::sleep_for(chrono::milliseconds(remainingFrameTime));
//		}
//
//		void Realease(){}
//
//	private: //게임 사용 함수
//		void MoveCursor(short x, short y)
//		{
//			COORD playerPosition = { x, y };
//			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), playerPosition);
//		}
//
//		void SetCursorState(bool visible)
//		{
//			HANDLE hConsole;
//			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//
//			CONSOLE_CURSOR_INFO consoleCursorInfo;
//			consoleCursorInfo.bVisible = visible;
//			consoleCursorInfo.dwSize = 1;
//
//			SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &consoleCursorInfo);
//		}
//	};
//}

#pragma once
#include <chrono> //시간 라이브러리
#include <thread>
#include "MConsolUtil.hpp"

using namespace std;

namespace MuSeoun_Engine
{
	
	class MGameLoop
	{
	private:
		bool _isGameRunning;
		MConsolRederer cRenderer;

	public:
		MGameLoop()
		{
			_isGameRunning = false;
		}
		~MGameLoop() {}

		void Run()
		{
			_isGameRunning = true;

			initialize();

			while (_isGameRunning)
			{
				input();
				Update();
				Render();
			}
			Realease();
		}

		void Stop()
		{
			_isGameRunning = false;
		}

	private:
		void initialize()
		{
			
		}
		void Realease()
		{
			
		}

		void input()
		{
			chrono::system_clock::time_point startInput = chrono::system_clock::now();
		}
		void Update()
		{

		}
		void Render() //화면에 그리는 것
		{
			chrono::system_clock::time_point startRenderTimePoint = chrono::system_clock::now();
			cRenderer.Clear();
			cRenderer.MoveCursor(10, 20);

			chrono::duration<double> renderDuration = chrono::system_clock::now() - startRenderTimePoint;
			//chrono::duration<double> _fps = 

			string fps = "FPS(milliseconds)" + to_string(renderDuration.count());
			cRenderer.DrawString(fps);

			//cout << "Rendering speed : " << renderDuration.count() << "sec" << endl;

			/*int remainingFrameTime = 100 - (int)(renderDuration.count() * 1000.0);
			if (remainingFrameTime > 0)
				this_thread::sleep_for(chrono::milliseconds(remainingFrameTime));*/
		}
	};
}
#include "MGameLoop.hpp"

int main()
{
	MuSeoun_Engine::MGameLoop gLoop;
	//MuSeoun_Engine::MGameLoop* gLoop = new MuSeoun_Engine::MGameLoop();
	gLoop.Run();
	//gLoop->Run();
	//delete(gLoop);

	//new를 사용하면 메모리가 커짐 동적보다 정적이 더 빠름
	return 0;
}
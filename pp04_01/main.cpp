#include "MGameLoop.hpp"

int main()
{
	MuSeoun_Engine::MGameLoop gLoop;
	//MuSeoun_Engine::MGameLoop* gLoop = new MuSeoun_Engine::MGameLoop();
	gLoop.Run();
	//gLoop->Run();
	//delete(gLoop);

	//new�� ����ϸ� �޸𸮰� Ŀ�� �������� ������ �� ����
	return 0;
}
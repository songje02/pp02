#pragma once

namespace Musoeun
{
	class MCommand
	{
	public:
		MCommand() {}
		virtual ~MCommand() {} //vitual �� ������� �ʾƵ� ��

		virtual void Execute() {}
	};
}


//overload 
//override 
//virtual 
//binding -> �����Ϸ��� �ּ� ���� ����


#pragma once

namespace Musoeun
{
	class MCommand
	{
	public:
		MCommand() {}
		virtual ~MCommand() {} //vitual 꼭 사용하지 않아도 됨

		virtual void Execute() {}
	};
}


//overload 
//override 
//virtual 
//binding -> 실행하려는 주소 값을 참조


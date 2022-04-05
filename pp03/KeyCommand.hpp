#pragma once
#include "MCommand.hpp"

class JumpCommand : public Musoeun::MCommand
{
public:
	void Execute()
	{
		std::cout << "점프!!";
	}
};

class RunCommand : public Musoeun::MCommand
{
public:
	void Execute()
	{
		std::cout << "달리기!!";
	}
};

class LeftCommand : public Musoeun::MCommand
{
public:
	void Execute()
	{
		std::cout << "왼쪽!!";
	}
};

class RightCommand : public Musoeun::MCommand
{
public:
	void Execute()
	{
		std::cout << "오른쪽!!";
	}
};

class DownCommand : public Musoeun::MCommand
{
public:
	void Execute()
	{
		std::cout << "움츠리기!!";
	}
};
#pragma once
#include "MCommand.hpp"

class JumpCommand : public Musoeun::MCommand
{
public:
	void Execute()
	{
		std::cout << "����!!";
	}
};

class RunCommand : public Musoeun::MCommand
{
public:
	void Execute()
	{
		std::cout << "�޸���!!";
	}
};

class LeftCommand : public Musoeun::MCommand
{
public:
	void Execute()
	{
		std::cout << "����!!";
	}
};

class RightCommand : public Musoeun::MCommand
{
public:
	void Execute()
	{
		std::cout << "������!!";
	}
};

class DownCommand : public Musoeun::MCommand
{
public:
	void Execute()
	{
		std::cout << "��������!!";
	}
};
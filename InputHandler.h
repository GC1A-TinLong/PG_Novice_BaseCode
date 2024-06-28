#pragma once
#include "Command.h"
#include "Novice.h"

class InputHandler
{
public:
	ICommand* HandleInput();

	void AssignMoveLeftCommand2PressKeyA();
	void AssignMoveRightCommand2PressKeyD();

private:
	ICommand* pressKeyA_;
	ICommand* pressKeyD_;
};


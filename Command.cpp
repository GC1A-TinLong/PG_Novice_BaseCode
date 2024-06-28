#include "Command.h"

ICommand::~ICommand()
{
}

void MoveLeftCommand::Execute(Player& player)
{
	player.MoveLeft();
}

void MoveRightCommand::Execute(Player& player)
{
	player.MoveRight();
}

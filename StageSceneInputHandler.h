#pragma once
#include "IStageSceneCommand.h"
#include "Selector.h"

class StageSceneInputHandler
{
private:
	char keys[255] = { 0 };
	char preKeys[255] = { 0 };

	Selector* selector_;
	Unit* selectedUnit_;

public:
	StageSceneInputHandler();

	void UpdateKeyState();

	IStageSceneCommand* SelectorHandleInput(Selector* selector);
	IStageSceneCommand* UnitHandleInput(Unit* unit);

	bool CheckUndoStatus();
};


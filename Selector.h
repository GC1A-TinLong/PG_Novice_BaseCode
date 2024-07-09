#pragma once
#include "Unit.h"

class Selector
{
private:
	int mapX_;
	int mapY_;
	int mapSize_;

	int selectMode_;

	Unit* unit_;
	Unit* selectedUnit_;

public:
	Selector();

	void Initialize();
	void Update();
	void Draw();

	void Move(int x, int y);
	void SelectUnit();
};


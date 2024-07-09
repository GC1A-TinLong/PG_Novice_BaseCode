#pragma once
#include "Selector.h"

class Unit
{
private:
	int mapX_ = 0;
	int mapY_ = 0;
	int mapSize_ = 32;
	int id = 0;
	bool isSelected_ = false;

public:
	Unit() = default;
	void Initialize(int idref);
	void Update();
	void Draw();

	void Move(int x, int y);
	void MoveEnd(Selector* selector);
};


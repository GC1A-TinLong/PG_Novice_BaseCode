#pragma once
#include "Vector2.h"
#include "Input.h"
#include "Novice.h"

class Player
{
private:
	static inline const float kWidth = 20.0f;
	static inline const float kHeight = 20.0f;

	Vector2 pos_;
	float speed_;

public:
	Player(Vector2 pos, float speed);

	void Initialize(Vector2 pos, float speed);
	void Update();
	void Draw();

	void MoveLeft();
	void MoveRight();
};


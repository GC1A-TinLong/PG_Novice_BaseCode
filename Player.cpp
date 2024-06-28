#include "Player.h"

Player::Player(Vector2 pos, float speed)
{
	pos_ = pos;
	speed_ = speed;
}

void Player::Initialize(Vector2 pos, float speed)
{
	pos_ = pos;
	speed_ = speed;
}

void Player::Update()
{
	if (Input::GetInstance()->PushKey(DIK_A)) {
		MoveLeft();
	}
	else if (Input::GetInstance()->PushKey(DIK_D)) {
		MoveRight();
	}
}

void Player::Draw()
{
	Novice::DrawBox(int(pos_.x - kWidth / 2.0f), int(pos_.y - kHeight / 2.0f), int(kWidth), int(kHeight), 0, WHITE, kFillModeSolid);
}

void Player::MoveLeft()
{
	this->pos_.x -= this->speed_;
}

void Player::MoveRight()
{
	this->pos_.x += this->speed_;
}

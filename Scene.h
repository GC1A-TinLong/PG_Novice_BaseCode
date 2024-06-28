#pragma once
#include "IScene.h"
#include "InputHandler.h"
#include "Command.h"
#include "Player.h"

class StageScene :public IScene
{
private:
	InputHandler* inputHandler_ = nullptr;
	ICommand* iCommand_ = nullptr;
	Player* player_ = nullptr;

public:
	StageScene();
	~StageScene();

	void Initialize()override;
	void Update()override;
	void Draw()override;

};


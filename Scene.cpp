#include "Scene.h"

StageScene::StageScene()
{
	inputHandler_ = new InputHandler();
	player_ = new Player({ 640.0f,360.0f }, 8.0f);
}

StageScene::~StageScene()
{
	delete inputHandler_;
	delete player_;
}

void StageScene::Initialize()
{
	player_->Initialize({ 640.0f,360.0f }, 8.0f);

	inputHandler_->AssignMoveLeftCommand2PressKeyA();
	inputHandler_->AssignMoveRightCommand2PressKeyD();
}

void StageScene::Update()
{
	// get input
	iCommand_ = inputHandler_->HandleInput();
	// set command
	if (iCommand_) {
		iCommand_->Execute(*player_);
	}

	player_->Update();
}

void StageScene::Draw()
{
	player_->Draw();
}

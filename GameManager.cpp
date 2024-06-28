#include "GameManager.h"

GameManager::GameManager()
{
	scene_ = std::make_unique<StageScene>();
}

GameManager::~GameManager()
{
}

int GameManager::Run()
{
	while (Novice::ProcessMessage() == 0) {
		Novice::BeginFrame();

		scene_->Update();

		scene_->Draw();

		Novice::EndFrame();

		if (Input::GetInstance()->TriggerKey(DIK_ESCAPE)) {
			break;
		}
	}
	return 0;
}

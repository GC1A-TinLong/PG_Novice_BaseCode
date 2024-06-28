#pragma once
#include <memory>
#include "IScene.h"
#include "Scene.h"
#include "Novice.h"
#include "Input.h"

class GameManager
{
private:
	// for maintaining the scene
	std::unique_ptr<IScene>scene_;

public:
	GameManager();
	~GameManager();

	int Run();
};


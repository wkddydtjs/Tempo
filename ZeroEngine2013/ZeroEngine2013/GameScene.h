#pragma once
#include "C:\Users\Sunrin\Desktop\ZeroEngine\ZeroEngine-BuildVer\ZeroEngine2013\ZeroEngine2013\include\ZeroIScene.h"
#include "ZeroSprite.h"
#include "ZeroInputManager.h"
#include"ZeroCameraManager.h"
class GameScene : public ZeroIScene
{
public:
	bool isRender;
	GameScene();
	~GameScene();
	void Update(float eTime);
	void Render();
	ZeroSprite *player;
	ZeroSprite *backGround;
};


#include "stdafx.h"
#include "GameScene.h"


GameScene::GameScene()
{
	ZeroCameraMgr->SetCameraOn();
	ZeroCameraMgr->SetSpeed(0);
	ZeroCameraMgr->SetPos(0, 0);
	player = new ZeroSprite("Resource/img/Enemy.png");
	backGround = new ZeroSprite("Resource/BackGround/BP");
	isRender = true;
}


GameScene::~GameScene()
{

}

void GameScene::Update(float eTime)
{
	ZeroIScene::Update(eTime);
	if (ZeroInputMgr->GetKey(VK_RIGHT) == INPUTMGR_KEYON)
	{
		ZeroCameraMgr->SetPos(ZeroCameraMgr->Pos().x + 200 * eTime, ZeroCameraMgr->Pos().y);
	}
	if (ZeroInputMgr->GetKey(VK_LEFT) == INPUTMGR_KEYON)
	{
		ZeroCameraMgr->SetPos(ZeroCameraMgr->Pos().x - 200 * eTime, ZeroCameraMgr->Pos().y);
	}
	if (ZeroInputMgr->GetKey(VK_UP) == INPUTMGR_KEYON)
	{
		ZeroCameraMgr->SetPos(ZeroCameraMgr->Pos().x, ZeroCameraMgr->Pos().y - 200 * eTime);
	}
	if (ZeroInputMgr->GetKey(VK_DOWN) == INPUTMGR_KEYON)
	{
		ZeroCameraMgr->SetPos(ZeroCameraMgr->Pos().x, ZeroCameraMgr->Pos().y + 200 * eTime);
	}
	if (ZeroInputMgr->GetKey(' ') == INPUTMGR_KEYDOWN)
	{
		ZeroCameraMgr->SetPos(ZeroCameraMgr->Pos().x + 200 * eTime, ZeroCameraMgr->Pos().y);
	}
}

void GameScene::Render()
{
	ZeroIScene::Render();
	backGround-> Render();
	if (isRender)
	{
		player->Render();
	}
}
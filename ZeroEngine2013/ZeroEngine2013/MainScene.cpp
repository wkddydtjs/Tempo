#include "stdafx.h"
#include "MainScene.h"
#include"iostream"

MainScene::MainScene()
{
	enemy = new ZeroSprite("Resource/img/red.png");
	enemy->SetPos(1, 2);
	button = new ZeroSprite("Resource/img/GameStart.png");
	button->SetPos(200, 300);
}


MainScene::~MainScene()
{
}

void MainScene::Update(float eTime){
	ZeroIScene::Update(eTime);
	/*enemy->AddPos(10*eTime, 10*eTime);
	enemy->AddScale(0.5);
	enemy->AddRot(10);*/
	if (ZeroInputMgr->GetKey(VK_LBUTTON) == INPUTMGR_KEYDOWN)
	{
		if (button->IsOverlapped(ZeroInputMgr->GetClientPoint()))
		{
			ZeroSceneMgr->ChangeScene(new GameScene());
			return;
		}
	}
}

void MainScene::Render(){
	ZeroIScene::Render();
	enemy->Render();
	button->Render();
}
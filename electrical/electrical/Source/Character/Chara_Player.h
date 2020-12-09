#pragma once

#include "CharaBase.h"

class Chara_Player:public CharaBase
{
private:
	// 移動
	void Move();

public:
	Chara_Player(int x, int y, int speed,
					int radius, int graphHandle);
	~Chara_Player();

	// 初期化処理
	void Initialize();

	// 更新処理
	void Update();

	// 描画処理
	void Draw();
};
#pragma once

#include "Chara_EnemyBase.h"

class Chara_EnemyAbsorption:public CharaEnemyBase
{
private:
	// 移動
	void Move();

public:
	Chara_EnemyAbsorption(int x, int y, int speed,
						  int radius, int graphHandle);
	~Chara_EnemyAbsorption();

	// 初期化処理
	void Initialize();

	// 更新処理
	void Update();

	// 描画処理
	void Draw();
};
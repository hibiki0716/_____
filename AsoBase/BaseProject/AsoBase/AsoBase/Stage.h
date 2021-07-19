#pragma once
#include"GameCommon.h"
#include"Vector2.h"

class GameScene;

class Stage
{
public:

	Stage(GameScene* scene);
	void Init(int StageNo);
	void Update(void);
	void Draw(void);
	void Release(void);

	bool IsCollositiom(Vector2 mapPos);

private:

	enum class IMG_TYPE {
		IN_WALL,
		IN_FLOOR,
		OUT_WALL,
		OUT_FLOOR,
	};

	GameScene* mGameScene;

	int mImage[4];
	// 芝生
	int mImageOutFloor;
	// 床
	int mImageInFloor;
	// 内壁
	int mImageInWall;
	// 外壁
	int mImageOutWall;

	// 定着ブロックを定義、2次元配列(0,1,9)
	int mMap[MAP_SIZE_Y][MAP_SIZE_X] = {
		{0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0},
		
		{0,0,0,0,0,0,0,0,0,9, 9,9,9,9,9,9,9,9,9,9, 9,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,9, 1,1,1,1,1,1,1,1,1,1, 9,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,9, 1,1,1,1,1,1,1,1,1,1, 9,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,9, 1,1,1,1,1,1,1,1,1,1, 9,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,9, 1,1,1,1,9,1,1,1,1,1, 9,0,0,0,0,0,0,0,0,0},

		{0,0,0,0,0,0,0,0,0,9, 1,1,1,9,9,9,1,1,1,1, 9,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,9, 1,1,1,9,1,1,1,1,1,1, 9,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,9, 1,1,1,9,1,1,1,1,1,1, 9,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,9, 1,1,1,1,1,1,1,1,1,1, 9,0,0,0,0,0,0,0,0,0},
		
		{0,0,0,0,0,0,0,0,0,9, 9,9,9,9,9,9,9,9,9,9, 9,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0},
	};

	// コードで設定
	void SetStage(int StageNo);

	// 外部ファイル(csv)を使用してステージ設定
	void LoadData(int StageNo);

};


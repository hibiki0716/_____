#include<DxLib.h>
#include"TestPlayer.h"

void TestPlayer::Update(void){
	
	switch (mState)
	{
	/*case TestPlayer::STATE::NONE:
		break;*/
	case TestPlayer::STATE::IDLE:
		// 待機状態
		break;
	case TestPlayer::STATE::WALK:
		// 歩き状態
		break;
	case TestPlayer::STATE::RUN:
		// 走り状態
		break;
	case TestPlayer::STATE::ATTACK:
		// 攻撃状態
		break;
	case TestPlayer::STATE::DEAD:
		// 死亡状態
		break;
	default:
		break;
	}
}

// 状態遷移
void TestPlayer::ChangeState(STATE state){
	// 状態を変更
	mState = state;

	// 状態ごとの初期処理をおこなう
	switch (mState)
	{
	case TestPlayer::STATE::NONE:
		break;
	case TestPlayer::STATE::IDLE:
		break;
	case TestPlayer::STATE::WALK:
		break;
	case TestPlayer::STATE::RUN:
		break;
	case TestPlayer::STATE::ATTACK:
		break;
	case TestPlayer::STATE::DEAD:
		break;
	default:
		break;
	}
}

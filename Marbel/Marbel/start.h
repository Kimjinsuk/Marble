#pragma once

#include "Draw.h"

void StartGame();	//게임시작
void initLocal();	//지역초기화
void initPlayerCoord();	//플레이어초기화
void movePlayer(int i, int turn);	//플레이어 이동
void playerTurn();	//플레이어 순서 정하기

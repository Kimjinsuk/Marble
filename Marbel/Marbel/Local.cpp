#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Local.h"

char *localName[boardNum] = {
	"시작",
	"방콕","보너스겜","베이징",
	"독도","타이페이","두바이","카이로",
	"무인도","발리",
	"도쿄","시드니",
	"포츈카드",
	"퀘백","하와이","상파울로",
	"올림픽","프라하","푸켓","베를린",
	"포츈카드","모스크바","제네바","로마",
	"세계여행","타히티","런던","파리",
	"포츈카드","뉴욕","국세청","서울"
};

int localPrice[boardNum][4] = {	//0호텔건설가격 1랜드마크건설비용 2호텔통행료 3랜드마크통행료	//인수비용=호텔건설비용
	{ 0,0,0,0 },						//랜드마크통행료 = 호텔통행료*1.8을 내림 //매각가:호텔가/2
	{ 27,12,54,97 },{ 0,0,0,0 },{ 29,12,58,104 },
	{ 11,0,20,0 },{ 57,25,114,200 },{ 57,25,114,200 },{ 58,25,116,200 },
	{ 0,0,0,0 },{ 11,0,20,0 },
	{ 85,37,170,230 },{ 85,37,170,230 },
	{ 0,0,0,0 },
	{ 113,50,226,260 },{ 11,0,20,0 },{ 115,50,230,270 },
	{ 0,0,0,0 },{ 142,62,284,330 },{ 11,0,20,0 },{ 143,62,286,340 },
	{ 0,0,0,0 },{ 170,75,340,380 },{ 171,75,342,400 },{ 171,75,342,400 },
	{ 0,0,0,0 },{ 11,0,20,0 },{ 198,87,396,450 },{ 200,87,400,450 },
	{ 0,0,0,0 },{ 228,100,456,500 },{ 0,0,0,0 },{ 230,100,460,570 }
};

int localX[boardNum] = {
	21,21,21,21,21,21,21,21,21,
	31,41,51,61,71,81,91,101,
	101,101,101,101,101,101,101,101,
	91,81,71,61,51,41,31
};

int localY[boardNum] = {
	45,40,35,30,25,20,15,10,5,
	5,5,5,5,5,5,5,5,
	10,15,20,25,30,35,40,45,
	45,45,45,45,45,45,45
};

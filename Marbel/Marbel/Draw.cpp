#include "Start.h"
#include "Player.h"
#include <stdlib.h>


extern Player player[2];

//嶸釭 輿餌嬪
Dice GameDice(int i) {

	Dice d;
	gotoxy(48, 22);
	printf("                                     ");
	gotoxytext(48, 20, "輿餌嬪蒂 給溥輿撮蹂  Ｃ Enter Ｂ");
	srand(time(NULL));
	while (1) {
		Sleep(100);
		//輿餌嬪 1睡攪 6梱雖 楠渾
		d.dice1 = rand() % 6 + 1;
		d.dice2 = rand() % 6 + 1;
		d.sum = d.dice1 + d.dice2;
		DiceShape(d.dice1);
		DiceShape2(d.dice2);
		// 輿餌嬪 賅曄檜 給嬴陛朝等 酈蒂 援腦賊 誇辭
		if (kbhit()) {
			getch();
			sndPlaySoundA("..\\sound\\DiceItem00000_Swing.wav", SND_ASYNC | SND_NODEFAULT);
			break;
		}
	}
	if(d.dice1==d.dice2)
		sndPlaySoundA("..\\sound\\Double_A01.wav", SND_ASYNC | SND_NODEFAULT);
	gotoxy(48, 22);
	printf("輿餌嬪曖 高擎 %d 殮棲棻", d.sum);
	Sleep(500);
	gotoxy(48, 20);
	printf("                                     ");
	return d;
}

//嶸釭
//輿餌嬪 渦綰
void DoubleDice() {
	gotoxy(48, 24);
	printf("渦綰殮棲棻 и廓 渦 給溥輿撮蹂!");
	Sleep(500);
	gotoxy(48, 24);
	printf("                                  ");
}

//嶸釭
//輿餌嬪 蛤濠檣
void DiceShape(int dice) {

	if (dice == 1) {
		gotoxy(45, 12); printf("  旨收收收收收旬");
		gotoxy(45, 13); printf("  早          早");
		gotoxy(45, 14); printf("  早          早");
		gotoxy(45, 15); printf("  早    ≒    早");
		gotoxy(45, 16); printf("  早          早");
		gotoxy(45, 17); printf("  早          早");
		gotoxy(45, 18); printf("  曲收收收收收旭");
	}
	if (dice == 2) {
		gotoxy(45, 12); printf("  旨收收收收收旬");
		gotoxy(45, 13); printf("  早          早");
		gotoxy(45, 14); printf("  早    ≒    早");
		gotoxy(45, 15); printf("  早          早");
		gotoxy(45, 16); printf("  早    ≒    早");
		gotoxy(45, 17); printf("  早          早");
		gotoxy(45, 18); printf("  曲收收收收收旭");
	}
	if (dice == 3) {
		gotoxy(45, 12); printf("  旨收收收收收旬");
		gotoxy(45, 13); printf("  早          早");
		gotoxy(45, 14); printf("  早    ≒    早");
		gotoxy(45, 15); printf("  早          早");
		gotoxy(45, 16); printf("  早 ≒    ≒ 早");
		gotoxy(45, 17); printf("  早          早");
		gotoxy(45, 18); printf("  曲收收收收收旭");
	}
	if (dice == 4) {
		gotoxy(45, 12); printf("  旨收收收收收旬");
		gotoxy(45, 13); printf("  早          早");
		gotoxy(45, 14); printf("  早 ≒    ≒ 早");
		gotoxy(45, 15); printf("  早          早");
		gotoxy(45, 16); printf("  早 ≒    ≒ 早");
		gotoxy(45, 17); printf("  早          早");
		gotoxy(45, 18); printf("  曲收收收收收旭");
	}
	if (dice == 5) {
		gotoxy(45, 12); printf("  旨收收收收收旬");
		gotoxy(45, 13); printf("  早          早");
		gotoxy(45, 14); printf("  早 ≒    ≒ 早");
		gotoxy(45, 15); printf("  早    ≒    早");
		gotoxy(45, 16); printf("  早 ≒    ≒ 早");
		gotoxy(45, 17); printf("  早          早");
		gotoxy(45, 18); printf("  曲收收收收收旭");
	}
	if (dice == 6) {
		gotoxy(45, 12); printf("  旨收收收收收旬");
		gotoxy(45, 13); printf("  早          早");
		gotoxy(45, 14); printf("  早 ≒    ≒ 早");
		gotoxy(45, 15); printf("  早 ≒    ≒ 早");
		gotoxy(45, 16); printf("  早 ≒    ≒ 早");
		gotoxy(45, 17); printf("  早          早");
		gotoxy(45, 18); printf("  曲收收收收收旭");
	}
}

void DiceShape2(int dice2) {

	if (dice2 == 1) {
		gotoxy(65, 12); printf("  旨收收收收收旬");
		gotoxy(65, 13); printf("  早          早");
		gotoxy(65, 14); printf("  早          早");
		gotoxy(65, 15); printf("  早    ≒    早");
		gotoxy(65, 16); printf("  早          早");
		gotoxy(65, 17); printf("  早          早");
		gotoxy(65, 18); printf("  曲收收收收收旭");
	}
	if (dice2 == 2) {
		gotoxy(65, 12); printf("  旨收收收收收旬");
		gotoxy(65, 13); printf("  早          早");
		gotoxy(65, 14); printf("  早    ≒    早");
		gotoxy(65, 15); printf("  早          早");
		gotoxy(65, 16); printf("  早    ≒    早");
		gotoxy(65, 17); printf("  早          早");
		gotoxy(65, 18); printf("  曲收收收收收旭");
	}
	if (dice2 == 3) {
		gotoxy(65, 12); printf("  旨收收收收收旬");
		gotoxy(65, 13); printf("  早          早");
		gotoxy(65, 14); printf("  早    ≒    早");
		gotoxy(65, 15); printf("  早          早");
		gotoxy(65, 16); printf("  早 ≒    ≒ 早");
		gotoxy(65, 17); printf("  早          早");
		gotoxy(65, 18); printf("  曲收收收收收旭");
	}
	if (dice2 == 4) {
		gotoxy(65, 12); printf("  旨收收收收收旬");
		gotoxy(65, 13); printf("  早          早");
		gotoxy(65, 14); printf("  早 ≒    ≒ 早");
		gotoxy(65, 15); printf("  早          早");
		gotoxy(65, 16); printf("  早 ≒    ≒ 早");
		gotoxy(65, 17); printf("  早          早");
		gotoxy(65, 18); printf("  曲收收收收收旭");
	}
	if (dice2 == 5) {
		gotoxy(65, 12); printf("  旨收收收收收旬");
		gotoxy(65, 13); printf("  早          早");
		gotoxy(65, 14); printf("  早 ≒    ≒ 早");
		gotoxy(65, 15); printf("  早    ≒    早");
		gotoxy(65, 16); printf("  早 ≒    ≒ 早");
		gotoxy(65, 17); printf("  早          早");
		gotoxy(65, 18); printf("  曲收收收收收旭");
	}
	if (dice2 == 6) {
		gotoxy(65, 12); printf("  旨收收收收收旬");
		gotoxy(65, 13); printf("  早          早");
		gotoxy(65, 14); printf("  早 ≒    ≒ 早");
		gotoxy(65, 15); printf("  早 ≒    ≒ 早");
		gotoxy(65, 16); printf("  早 ≒    ≒ 早");
		gotoxy(65, 17); printf("  早          早");
		gotoxy(65, 18); printf("  曲收收收收收旭");
	}
}

/*啪歜っ 斜溥邀*/
void GameBoard() {

	//諼睡 纔舒葬
	gotoxytext(17, 1, "旨收收收收有收收收收有收收收收有收收收收有收收收收有收收收收有收收收收有收收收收有收收收收旬");
	for (int i = 2; i < 46; i++) {
		if (i % 5 == 1) {
			gotoxytext(17, i, "曳");
			gotoxytext(107, i, "朽");
		}
		else {
			gotoxytext(17, i, "早");
			gotoxytext(107, i, "早");
		}
	}
	gotoxytext(17, 46, "曲收收收收朴收收收收朴收收收收朴收收收收朴收收收收朴收收收收朴收收收收朴收收收收朴收收收收旭");

	//頂睡 纔舒葬
	gotoxytext(27, 6, "朱收收收收朴收收收收朴收收收收朴收收收收朴收收收收朴收收收收朴收收收收朱");
	for (int i = 7; i < 41; i++) {
		if (i % 5 == 1) {
			gotoxytext(27, i, "朽");
			gotoxytext(97, i, "曳");
		}
		else {
			gotoxytext(27, i, "早");
			gotoxytext(97, i, "早");
		}
	}
	gotoxytext(27, 41, "朱收收收收有收收收收有收收收收有收收收收有收收收收有收收收收有收收收收朱");

	//嶺薹 撮煎摹
	for (int i = 27; i < 107; i += 10) {
		for (int j = 2; j < 6; j++) {
			gotoxytext(i, j, "早");
		}
	}

	//嬴概薹 撮煎摹
	for (int i = 27; i < 107; i += 10) {
		for (int j = 42; j < 46; j++) {
			gotoxytext(i, j, "早");
		}
	}

	//豭薹 陛煎摹
	for (int j = 6; j < 46; j += 5) {
		for (int i = 19; i < 26; i += 2) {
			gotoxytext(i, j, "收");
		}
	}

	//螃艇薹 陛煎摹
	for (int j = 6; j < 46; j += 5) {
		for (int i = 99; i < 106; i += 2) {
			gotoxytext(i, j, "收");
		}
	}


	//嶸釭 - 啪歜っ縑 雖羲檜葷 轎溘, 儀 雖薑
	int i = 0;

	//豭薹 撮煎還
	for (int j = 42; j > 5; j -= 5) {
		gotoxy(19, j); printf("%8s", localName[i]);
		if (i == 0 || i == 2) {
			settextcolor(0, 10);
		}
		else if (i == 1) {
			settextcolor(0x0007, 007700);
		}
		else if (i == 3) {
			settextcolor(0, 3);
		}
		else if (i == 4 || i == 5 || i == 6) {
			settextcolor(0, 2);
		}
		i++;
	}
	settextcolor(0x0007, 007700);
	//嬪薹 陛煎還
	for (int j = 19; j < 105; j += 10) {
		gotoxy(j, 2); printf("%8s", localName[i]);
		if (i == 8) {
			settextcolor(0, 3);
		}
		else if (i == 9 || i == 10) {
			settextcolor(0, 9);
		}
		else if (i == 11) {
			settextcolor(0x0007, 007700);
		}
		else if (i == 12 || i == 14) {
			settextcolor(0, 1);
		}
		else if (i == 13) {
			settextcolor(0, 3);
		}
		else if (i == 15) {
			settextcolor(0x0007, 007700);
		}
		else if (i == 16) {
			settextcolor(0, 13);
		}
		i++;
	}
	//螃艇薹 撮煎還
	for (int j = 7; j < 47; j += 5) {
		gotoxy(99, j); printf("%8s", localName[i]);
		if (i == 17) {
			settextcolor(0, 3);
		}
		else if (i == 18) {
			settextcolor(0, 13);
		}
		else if (i == 19) {
			settextcolor(0x0007, 007700);
		}
		else if (i == 20 || i == 21 || i == 22) {
			settextcolor(0, 5);
		}
		else if (i == 23) {
			settextcolor(0x0007, 007700);
		}
		i++;
	}
	settextcolor(0x0007, 007700);
	//嬴楚薹 陛煎還
	for (int j = 89; j > 22; j -= 10) {
		if (i == 25) {
			settextcolor(0, 3);
		}
		else if (i == 26 || i == 27) {
			settextcolor(0, 12);
		}
		else if (i == 28) {
			settextcolor(0x0007, 007700);
		}
		else if (i == 29) {
			settextcolor(0, 4);
		}
		else if (i == 30) {
			settextcolor(0x0007, 007700);
		}
		else if (i == 31) {
			settextcolor(0, 4);
		}
		gotoxy(j, 42); printf("%8s", localName[i]);
		settextcolor(0x0007, 007700);
		i++;
	}

	//嶸釭
	//臢蝶お 璽
	gotoxytext(32, 24, "旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬");
	for (int i = 25; i<35; i++) {
		gotoxytext(32, i, "早");
		gotoxytext(92, i, "早");
	}
	gotoxytext(32, 35, "曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");


}


/*Ы溯檜橫薑爾っ 斜溥邀*/
void DrawPlayer() {

	gotoxytext(29, 7, "旨收收收收收收收收收收收收旬");
	gotoxytext(29, 8, "早                        早");
	gotoxytext(29, 9, "早                        早");
	gotoxytext(29, 10, "早                        早");
	gotoxytext(29, 11, "曲收收收收收收收收收收收收旭");

	gotoxytext(31, 10, "爾嶸葆綰: ");

	gotoxytext(69, 36, "旨收收收收收收收收收收收收旬");
	gotoxytext(69, 37, "早                        早");
	gotoxytext(69, 38, "早                        早");
	gotoxytext(69, 39, "早                        早");
	gotoxytext(69, 40, "曲收收收收收收收收收收收收旭");

	gotoxytext(71, 39, "爾嶸葆綰: ");
}

//嶸釭
//啪歜 衛濛й陽 煎註�飛�
void Loading() {

	system("mode con:cols=130 lines=48"); //夔樂璽 觼晦
	gotoxy(25, 10); DARK_SKY_BLUE printf("旨收收收收收旬");
	gotoxy(25, 11); printf("早 旨收收旬 早");
	gotoxy(25, 12); printf("早 早    早 早");
	gotoxy(25, 13); printf("早 曲收收旭 早");
	gotoxy(25, 14); printf("曲收旬  旨收旭");
	gotoxy(25, 15); printf("    早  早  ");
	gotoxy(25, 16); printf("    早  早  ");
	gotoxy(25, 17); printf("旨收旭  曲收旬");
	gotoxy(25, 18); printf("早          早");
	gotoxy(25, 19); printf("曲收收收收收旭");

	gotoxy(39, 11); printf("旨收收收收收旬");
	gotoxy(39, 12); printf("早  旨收收收旭");
	gotoxy(39, 13); printf("早  早      ");
	gotoxy(39, 14); printf("早  曲收收收旬");
	gotoxy(39, 15); printf("曲收收收收收旭");
	gotoxy(39, 16); printf("旨收收收收收旬");
	gotoxy(39, 17); printf("早          早");
	gotoxy(39, 18); printf("曲收旬  旨收旭");
	gotoxy(39, 19); printf("    早  早  ");
	gotoxy(39, 20); printf("    早  早  ");
	gotoxy(39, 21); printf("    曲收旭");

	gotoxy(53, 12); printf("  收收收  旨旬");
	gotoxy(53, 13); printf("早旨收旬早早早");
	gotoxy(53, 14); printf("早曲收旭早早早");
	gotoxy(53, 15); printf("  收收收  早早");
	gotoxy(53, 16); printf("旨收收收旬早早");
	gotoxy(53, 17); printf("曲收收收旭曲旭");

	gotoxy(67, 10); printf("            旨旬");
	gotoxy(67, 11); printf("旨收收收收旬早早");
	gotoxy(67, 12); printf("早        早早早");
	gotoxy(67, 13); printf("早旨收收旬早早早");
	gotoxy(67, 14); printf("早早    早早早曲旬");
	gotoxy(67, 15); printf("早早    早早早旨旭");
	gotoxy(67, 16); printf("早早    早早早早");
	gotoxy(67, 17); printf("早曲收收旭早早早");
	gotoxy(67, 18); printf("早        早早早");
	gotoxy(67, 19); printf("曲收收收收旭早早");
	gotoxy(67, 20); printf("            曲旭");

	gotoxy(85, 10); printf("旨收旬    旨收旬");;
	gotoxy(85, 11); printf("早  曲收收旭  早");
	gotoxy(85, 12); printf("早  旨收收旬  早");
	gotoxy(85, 13); printf("早  曲收收旭  早");
	gotoxy(85, 14); printf("曲收收收收收收旭");
	gotoxy(85, 15); printf("旨收收收收收收旬");
	gotoxy(85, 16); printf("曲收收收收收收旭");
	gotoxy(85, 17); printf("旨收收收收收收旬");
	gotoxy(85, 18); printf("曲收收收收收旬早");
	gotoxy(85, 19); printf("旨收收收收收旭早");
	gotoxy(85, 20); printf("早旨收收收收收旭");
	gotoxy(85, 21); printf("早曲收收收收收旬");
	gotoxy(85, 22); printf("曲收收收收收收旭");;


	gotoxy(45, 30); printf("L");
	Sleep(200);
	gotoxy(50, 30); printf("O");
	Sleep(200);
	gotoxy(55, 30); printf("A");
	Sleep(200);
	gotoxy(60, 30); printf("D");
	Sleep(200);
	gotoxy(65, 30); printf("I");
	Sleep(200);
	gotoxy(70, 30); printf("N");
	Sleep(200);
	gotoxy(75, 30); printf("G");
	Sleep(200);
	gotoxy(45, 32); printf("Ⅱ");
	Sleep(200);
	gotoxy(50, 32); printf("Ⅱ");
	Sleep(200);
	gotoxy(55, 32); printf("Ⅱ");
	Sleep(200);
	gotoxy(60, 32); printf("Ⅱ");
	Sleep(200);
	gotoxy(65, 32); printf("Ⅱ");
	Sleep(200);
	gotoxy(70, 32); printf("Ⅱ");
	Sleep(200);
	gotoxy(75, 32); printf("Ⅱ");
	Sleep(200);
	GRAY

}

//嶸釭
//啪歜 詭景
void Menu() {

	clrText();

	settextcolor(0x0007, 000000);
	gotoxytext(50, 28, "Ｃ");

	settextcolor(0, 3);
	gotoxytext(55, 28, "[1] 啪歜 衛濛");
	settextcolor(0x0007, 000000);
	gotoxytext(55, 30, "[2] 啪歜 撲貲");

}

//嶸釭
//啪歜 撲貲 璽
void Explain() {

	int select;
	gotoxy(20, 5); DARK_SKY_BLUE
		printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收有收收有收收有收收旬");
	for (int i = 6; i<42; i++) {
		gotoxytext(20, i, "早");
		gotoxytext(106, i, "早");
	}
	gotoxy(25, 7); printf("啪歜 衛濛擎 Enter蒂 揚楝輿撮蹂!");
	gotoxy(91, 7); printf("收"); gotoxy(96, 6); printf("旨旬"); gotoxy(96, 7); printf("曲旭"); gotoxy(103, 7); printf("旦");
	gotoxy(88, 6); printf("早"); gotoxy(94, 6); printf("早"); gotoxy(100, 6); printf("早");
	gotoxy(88, 7); printf("早"); gotoxy(94, 7); printf("早"); gotoxy(100, 7); printf("早");
	gotoxy(20, 8); printf("曳收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收朴收收朴收收朴收收朽");
	gotoxy(20, 42); printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");
	GRAY
		gotoxy(25, 11); printf("[1] 啪歜 衛濛ж晦蒂 摹鷗ж賊 啪歜檜 衛濛");
	gotoxy(25, 13); printf("[2] Ы溯檜橫朝 2貲戲煎 薯и, 蘋萄摹鷗戲煎 牖憮蒂 唸薑");
	gotoxy(25, 15); printf("[3] 輿餌嬪蒂 掉溥 釭螞 虜躑 瞪霞, 紫雜и 紫衛縑 ��蘿 雖擊 熱 氈擠");
	gotoxy(25, 16); printf("[4] ��蘿擊 雖擎 濠褐曖 雖羲縑 紫雜 衛 楠萄 葆觼 勒撲");
	gotoxy(27, 17); printf("  傳朝 轎嫦雖薄戲煎 陛賊 濠褐曖 雖羲 и 夠縑 勒僭 勒撲 陛棟");
	gotoxy(25, 20); printf("[5] 棻艇 Ы溯檜橫曖 雖羲縑 紫雜ц擊 衛 鱔ч猿 雖碳婁 雖羲 & 勒僭 檣熱 陛棟");
	gotoxy(27, 21); printf("   Ｃ 欽, 楠萄 葆觼釭 婦惜雖朝 檣熱 碳陛棟");
	gotoxy(25, 23); printf("[6] ч遴 蘋萄縑 紫雜 衛, 釭螃朝 蘋萄 頂辨擊 熱ч");
	gotoxy(25, 25); printf("[7] 撮啗罹ч縑 紫雜 衛, 綠辨擊 雖碳ж堅 棻擠 欐縑 錳ж朝 雖羲戲煎 檜翕 陛棟");
	gotoxy(25, 26); printf("[8] 鼠檣紫縑 紫雜 衛, 輿餌嬪 渦綰檜 釭螃剪釭, 絲擊 雖碳п撿 驍轎 陛棟!");
	gotoxy(27, 27); printf("  驍轎擊 跤ц擊 唳辦 鼻渠寞戲煎 欐檜 剩橫 馬. 譆渠 3��!");
	gotoxy(25, 30); printf("[9] 螢葡а縑 紫雜 衛, 濠褐曖 階 и夠曖 鱔ч猿蒂 2寡煎 鼻蝓");
	gotoxy(25, 32); printf("[10] 蝓葬 褻勒 : 塭檣絮薄, お葬Ы 絮薄, 婦惜雖 絮薄, 鼻渠寞 だ骯");
	gotoxy(25, 34); printf("    Ｃ 塭檣 絮薄 式 и 還縑 氈朝 雖羲擊 賅舒 離雖");
	gotoxy(25, 35); printf("    Ｃ お葬Ы 絮薄 式 3陛雖 鏽楝曖 賅萇 雖羲擊 離雖");
	gotoxy(25, 36); printf("    Ｃ 婦惜雖 絮薄 式 5偃曖 婦惜雖蒂 賅舒 離雖");
	gotoxy(25, 37); printf("    Ｃ だ骯 式 鼻渠寞曖 爾嶸葆綰 睡褶");

	if (select = _getch()) { //酈蒂 援腦賊 啪歜衛濛
		system("cls");
		StartGame();
	}

}

/*Ы溯檜橫曖 葆綰鼻鷓蒂 斜溥邀*/
void PlayerState() {
	gotoxy(42, 10); printf("             ");
	gotoxy(82, 39); printf("             ");
	gotoxy(42, 10); printf("%d", player[0].marble);
	gotoxy(82, 39); printf("%d", player[1].marble);
}

/*臢蝶お�飛� 雖辦晦*/
void clrText() {
	for (int i = 25; i < 35; i++) {
		gotoxytext(34, i, "                                                         ");
	}
}

/*爾嶸葬蝶お 雖辦晦*/
void clrList() {
	for (int i = 0; i < 40; i++) {
		gotoxytext(110, i, "                       ");
	}

}

/*蘋萄 雖辦晦*/
void clrCard() {

	for (int i = 16; i < 26; i++) {
		gotoxy(112, i); printf("                ");
	}

}

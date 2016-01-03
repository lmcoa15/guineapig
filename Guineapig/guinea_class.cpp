#include "guineapig.h"

guineapig::guineapig() // 디폴트 생성자 
{
	name = "다마고치";
	sex = "수컷";
	age = 0;
	bltype = "A";
	health = 9;
	toilet = 5;
	hungry = 5;
	sleep = 7;
	funny = 3;
	intel = 0;
}


guineapig::~guineapig(){

}
void guineapig::gotoxy(int x, int y)
{
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
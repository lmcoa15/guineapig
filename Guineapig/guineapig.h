#include<iostream>
using namespace std;
#include<string>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define _CRT_SECURE_NO_WARNINGS

class guineapig{
public:
	static void gotoxy(int x, int y);
	string name; // 다마고치 이름
	string sex; // 성별
	string bltype; // 혈액형

	guineapig(); // 생성자 
	~guineapig(); // 소멸자


	int age; // 나이 (1,2,3,4,5)

	int health; // 건강정도
	int toilet; // 용변정도
	int hungry; // 허기
	int sleep; // 수면도
	int funny; // 재미정도
	int intel; // 지능
	string stat; // 상태
};

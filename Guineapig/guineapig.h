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
	string name; // �ٸ���ġ �̸�
	string sex; // ����
	string bltype; // ������

	guineapig(); // ������ 
	~guineapig(); // �Ҹ���


	int age; // ���� (1,2,3,4,5)

	int health; // �ǰ�����
	int toilet; // �뺯����
	int hungry; // ���
	int sleep; // ���鵵
	int funny; // �������
	int intel; // ����
	string stat; // ����
};

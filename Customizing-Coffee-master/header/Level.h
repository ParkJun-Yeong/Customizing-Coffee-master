#pragma once
#include "Cafe.h"

class Level
	:public Cafe
{
protected:
	int coupon =0;		//������ ������ ��
	string level = "FRIEND";		//����� ���
public:
	Level();
	void set_coupon();		//���� ���� �Լ�
	void set_level();		//���� ���� �Լ�
	void print_Level();	//���� ���� ������ ������ִ� �Լ�
	~Level();
};


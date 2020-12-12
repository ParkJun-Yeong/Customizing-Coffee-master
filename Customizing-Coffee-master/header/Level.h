#pragma once
#include "Cafe.h"

class Level
	:public Cafe
{
protected:
	int coupon =0;		//보유한 쿠폰의 수
	string level = "FRIEND";		//사용자 등급
public:
	Level();
	void set_coupon();		//쿠폰 지급 함수
	void set_level();		//레벨 변경 함수
	void print_Level();	//쿠폰 수와 레벨을 출력해주는 함수
	~Level();
};


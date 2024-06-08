#pragma once

#include <iostream>

class Player
{
private:
	float hp;
	int level;
	int atk;

public:
	int apple = 1;

public:
	float GetHp() { return hp; };
	void Move();

public:
	Player(); //持失切
	~Player(); //社瑚切
};


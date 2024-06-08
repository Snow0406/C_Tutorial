//day07

#include "Player.h"

//자료형 클래스이름::함수이름
void Player::Move()
{
	std::cout << "move" << std::endl;
}

Player::Player()
{
	hp = 100;
	level = 1;
	atk = 1;
	std::cout << "add Player" << std::endl;
}

Player::~Player()
{
	std::cout << "remove Player" << std::endl;
}

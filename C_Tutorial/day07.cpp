//#include <iostream>
//
////struct Player 
////{
//	//public ���� ���� �մ�.
////};
//
//class Entity {
//	//protected: ����� Ŭ�������� ����� �� �־��
//protected:
//	int id;
//};
//
//class Player : public Entity {
//	//private: public�� �ݴ�, �� Ŭ���� �ȿ����� ��� ����
//private:
//	float level;
//	float hp;
//
//public:
//	float GetHp() { return hp; }
//	float LevelUp() {
//		//todo
//	}
//
//
//};

#include "Player.h"

int main() {
	Player user;
	
	using namespace std;

	cout << user.GetHp() << endl;
	user.Move();
	
}
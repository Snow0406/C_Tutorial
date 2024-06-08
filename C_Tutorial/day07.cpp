//#include <iostream>
//
////struct Player 
////{
//	//public 맘껏 쓸수 잇다.
////};
//
//class Entity {
//	//protected: 연결된 클래스끼리 사용할 수 있어요
//protected:
//	int id;
//};
//
//class Player : public Entity {
//	//private: public과 반대, 이 클래스 안에서만 사용 가능
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
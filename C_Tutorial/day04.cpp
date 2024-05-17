//#include <stdio.h> //C 언어에서 쓰는 입출력 코드

//#include <iostream> //C++ 언어에서 쓰는 입출력 코드
//#include <string> //string 관련된 코드 가져오기 - C++

//int main() {

	//int x;
	//int y;
	//int z;

	//10, 5, 2
	//int x, y, z;

	//scanf_s("%d", &x);
	//scanf_s("%d", &y);
	//scanf_s("%d", &z);

	//scanf_s("%d\n%d\n%d", &x, &y, &z);

	//scanf_s("%d %d %d", &x, &y, &z);

	//if (x > y) {
	//	if (x > z) {
	//		printf("%d", x);
	//	}
	//	else {
	//		printf("%d", z);
	//	}
	//}
	//else {
	//	if (y > z) {
	//		printf("%d", y);
	//	}
	//	else {
	//		printf("%d", z);
	//	}
	//}

	//string : 문자열 (자료형)
	//std::string name = "스노우";

	//std::cout << name << std::endl;

	//namespace : 네임스페이스는 내부 식별자(형식, 함수, 변수 등의 이름)에 범위를 제공하는 선언적 영역입니다.
		 //ㄴ-> 그룹(std) 에 있는 코드를 가져오는거예요

	//using namespace std;
	//string name = "스노우";

	//printf("%s", name.c_str());
	//cout << name << endl;

	//printf("이름 : %s 입니다.", name.c_str());

	//cout << "이름 : " << name << " 입니다." << endl;

	//cout << "안녕하세요\n스노우입니다" << endl;

	//cout << "안녕하세요" << endl << "스노우입니다" << endl;

	//printf("안녕하세요\n스노우입니다.");
	//cout << "안녕하세요" << endl << "스노우입니다" << endl;

	//switch

	//int level = 10;

	//using namespace std;

	//if (level == 1) {
	//	cout << "1 Lv" << endl;
	//}
	//else if (level == 5) {
	//	cout << "5 Lv" << endl;
	//}
	//else if (level == 10) {
	//	cout << "10 Lv" << endl;
	//}
	//else {
	//	cout << "no" << endl;
	//}

	//int a = 10;

	//switch (level) {
	//case 1:
	//	cout << "1 Lv" << endl;
	//	break;
	//case 5:
	//	cout << "5 Lv" << endl;
	//	break;
	//case 10:
	//	cout << "10 Lv" << endl;
	//	break;
	//default:
	//	cout << "no" << endl;
	//	break;
	//}

	//for 반복
	//for (변수지정; 조건문; 변수계산)

	//i(0); i(0) < 5 (true) output : 0 i++(1)
	//i(1); i(1) < 5 (true) output : 1 i++(2)
	//i(2); i(2) < 5 (true) output : 2 i++(3)
	//i(3); i(3) < 5 (true) output : 3 i++(4)
	//i(4); i(4) < 5 (true) output : 4 i++(5)
	//i(5); i(5) < 5 (false) i++(5) //실행안됨
	//for (int i = 0; i < 5; i++) {
	//	cout << i << endl;
	//}

	//for (int i = 0; i < 5; i++) cout << i << endl;

	//int i;
	//for (i = 0; i < 5; i++);
	//cout << i << endl;

	//while 반복

	//while (조건문)
	//int i = 0;

	//while (i < 10) {
	//	cout << i << endl;
	//	i++;
	//}

	//for (int i = 0; i < 10; i++) {
	//	cout << i << endl;
	//}

	//bool status = true;

	//while (status) {
		//todo

		//status = false;
	//}


	//자료형 함수이름(자료형 변수이름 ...) 
	//{
	//   // todo
	//	
	//}

//int add(int a, int b) {
//	int result = a + b;
//	return result;
//	}

	//return 0;
//}
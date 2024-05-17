////계산기 기능 + - * /
//#include <iostream>
//
////함수 (값을 넣으면) return 계산값
//
///// <summary>
///// 더하기 함수입니다 num1 + num2
///// </summary>
///// <param name="num1"></param>
///// <param name="num2"></param>
///// <returns></returns>
//int add(int num1, int num2) { //더하기 함수
//	int result = num1 + num2;
//	return result;
// }
//
//int sub(int num1, int num2) { //빼기 함수
//	return num1 - num2;
//}
//
//int mul(int num1, int num2) { //곱하기 함수
//	return num1 * num2;
//}
//
//int divide(int num1, int num2) { //나누기 함수
//	return num1 / num2;
//}
//
//using namespace std;
//
//bool status = true;
//
//int main() {
//
//	while (status) {
//		cout << "1: 더하기, 2: 빼기, 3: 곱하기, 4: 나누기, 0: 종료" << endl;
//
//		int value;
//		scanf_s("%d", &value);
//
//		if (value == 0) return status = false;
//
//		int num1 = 0;
//		int num2 = 0;
//		scanf_s("%d %d", &num1, &num2);
//
//		switch (value)
//		{
//		case 1:
//			cout << add(num1, num2) << endl;
//			break;
//		case 2:
//			cout << sub(num1, num2) << endl;
//			break;
//		case 3:
//			cout << mul(num1, num2) << endl;
//			break;
//		case 4:
//			cout << divide(num1, num2) << endl;
//			break;
//		case 0:
//			cout << "종료" << endl;
//			status = false;
//			break;
//		default:
//			cout << "다시 입력해줘" << endl;
//			break;
//		}
//	}
//	return 0;
//}

//using namespace std;

//int main() {
	//int a = 1;
	//int a[4] = { 1, 2, 3, 4 };

	//a[0]

	//베열 자료형 이름[빈칸 갯수] = {}

	//int ab[5] = {}; //{} == 0으로 자도ㅓㅇ으로 초기화

	//int map[4][4] = {
	//	{1,1,1,1},
	//	{1,1,0,1},
	//	{1,0,0,1},
	//	{1,1,1,1},
	//};

	//int ta[10] = {1,1,1,1,1,11,11,1,1,1}

	//map[2] -> {1,0,0,1}
	//map[2][3] -> 1


	//for (int i = 0; i < 5; i++)
	//{
	//	cout << ab[i] << endl;
	//}

//	int drawMap[10][10] = {
//		{0,0,0,0,0,0,0,0,0,0},
//		{0,0,1,0,0,0,1,0,0,0},
//		{0,0,0,1,0,1,0,0,0,0},
//		{0,0,1,1,1,1,1,0,0,0},
//		{0,0,0,1,1,1,0,0,0,0},
//		{0,0,1,0,1,0,1,0,0,0},
//		{0,0,0,0,1,0,0,0,0,0},
//		{0,0,0,0,1,0,0,0,0,0},
//		{2,2,2,2,2,2,2,2,2,2},
//		{2,2,2,2,2,2,2,2,2,2},
//	}; //1: 꽃, 2: 흙, 0: 공기
//
//	for (int x = 0; x < 10; x++)
//	{
//		for (int y = 0; y < 10; y++)
//		{
//			switch (drawMap[x][y])
//			{
//			case 0: 
//				printf("□");
//				break;
//			case 1: 
//				printf("■");
//				break;
//			case 2: 
//				printf("▤");
//				break;
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
////���� ��� + - * /
//#include <iostream>
//
////�Լ� (���� ������) return ��갪
//
///// <summary>
///// ���ϱ� �Լ��Դϴ� num1 + num2
///// </summary>
///// <param name="num1"></param>
///// <param name="num2"></param>
///// <returns></returns>
//int add(int num1, int num2) { //���ϱ� �Լ�
//	int result = num1 + num2;
//	return result;
// }
//
//int sub(int num1, int num2) { //���� �Լ�
//	return num1 - num2;
//}
//
//int mul(int num1, int num2) { //���ϱ� �Լ�
//	return num1 * num2;
//}
//
//int divide(int num1, int num2) { //������ �Լ�
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
//		cout << "1: ���ϱ�, 2: ����, 3: ���ϱ�, 4: ������, 0: ����" << endl;
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
//			cout << "����" << endl;
//			status = false;
//			break;
//		default:
//			cout << "�ٽ� �Է�����" << endl;
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

	//���� �ڷ��� �̸�[��ĭ ����] = {}

	//int ab[5] = {}; //{} == 0���� �ڵ��ä����� �ʱ�ȭ

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
//	}; //1: ��, 2: ��, 0: ����
//
//	for (int x = 0; x < 10; x++)
//	{
//		for (int y = 0; y < 10; y++)
//		{
//			switch (drawMap[x][y])
//			{
//			case 0: 
//				printf("��");
//				break;
//			case 1: 
//				printf("��");
//				break;
//			case 2: 
//				printf("��");
//				break;
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
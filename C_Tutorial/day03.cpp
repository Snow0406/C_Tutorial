#include <stdio.h>
#include <string>//string ���õ� �ڵ� ��������

//define : �����ϴ�, PI�� 3.14�� �����ϴ°ſ���
#define PI 3.14
#define HelloWorld printf("Hello World !");

int main() {
	//HelloWorld
	//printf("Hello World !");

	//int a = 10;
	//int b = 5;
	//int c = 5;

	//if (a < b) { // > �̸� �ʰ�
	//	printf("a�� �� Ŀ");
	//}

	//if (a <= b) { // >=     =< (x) => (x)  �̻� ����
	//	printf("a�� �� Ŀ");
	//}

	// AND (�׸���) : &&
	// AND�� ��� ������ ��(true)�� �Ǿ� �մϴ�.
	//if (a != b && b != c) { //if (�� && ����)
	//	printf("AND");
	//}

	// OR (�Ǵ�) : ||
	// OR�� �Ѱ� ���� �̻��� ��(true)�� �Ǿ� �մϴ�.
	//if (a != b || b != c) { //if (�� || ����)
	//	printf("OR");
	//}

	// ! (����) : bool�� �ݴ� (true -> false, false -> true)

	//if (!(a == b)) { //a(10) == b(5) -> false
	//	printf("��");
	//}

	//�ڷ��� : bool
	//boolean : �Ҹ���(boolean)�� ���п��� ��(true)�� ����(false)�� ��Ÿ���� �� ���˴ϴ�.
	//bool : true, false

	//bool status = true;

	//if (status) { //if�� ������ ���϶��� �۵��ϴϱ�
	//	printf("ON");
	//}

	//if (status == true) { //if�� ������ ���϶��� �۵��ϴϱ�
	//	printf("ON");
	//}

	//bool status = false;
	//if (!status) { //if�� ������ ���϶��� �۵��ϴϱ�
	//	printf("OFF");
	//}

	//if (a == b)
	//{
		//todo
	//}

	//if (a == b) {
		//todo
	//}

	//if (a == b) //todo

	//bool status = false;

	//if (status) {
	//	printf("ON");
	//}
	//if (!status) {
	//	printf("OFF");
	//}

	//else : ���� �ƴ϶��

	//if (status) {
	//	printf("ON");
	//} else {
	//	printf("OFF");
	//}

	//int a = 3;

	//if (a == 1) {
	//	printf("1�̴�");
	//}
	//if (a == 2) {
	//	printf("2�̴�");
	//}
	//if (a == 3) {
	//	printf("3�̴�");
	//}

	//else if : ���� ������ �ƴ϶�� ����

	//if (a == 1) {
	//	printf("1�̴�");
	//}
	//else if (a == 2) {
	//	printf("2�̴�");
	//}
	//else if (a == 3) {
	//	printf("3�̴�");
	//}

	//if (a == 1) {
	//	printf("1�̴�");
	//}
	//else {
	//	if (a == 2) {
	//		printf("2�̴�");
	//	} else {
	//		if (a == 3) {
	//			printf("3�̴�");
	//		}
	//	}
	//}

	//if (a == 1) {
	//	printf("1�̴�");
	//}
	//else if (a == 2) {
	//	printf("2�̴�");
	//}
	//else {
	//	printf("3�̴�");
	//}

	//if (a == 1) printf("1�̴�");
	//else if (a == 2) printf("2�̴�");
	//else printf("3�̴�");

	//���ڸ� �ް� 2�� ������� Ȯ���ϴ� ���α׷� + (1 ~ 100)

int input;
scanf_s("%d", &input);

// 1 �� input �� 100
if (input >= 1 && input <= 100) {

	if (input % 2 == 0) {
		printf("%d�� 2�� ����Դϴ�.", input);
	}
	else {
		printf("%d�� 2�� ����� �ƴմϴ�.", input);
	}

}
else {
	printf("1 ~ 100���� �ؤ��ּļ� !");
}

	return 0;
}
#include <stdio.h>
#include <string>//string 관련된 코드 가져오기

//define : 정의하다, PI는 3.14로 정의하는거예요
#define PI 3.14
#define HelloWorld printf("Hello World !");

int main() {
	//HelloWorld
	//printf("Hello World !");

	//int a = 10;
	//int b = 5;
	//int c = 5;

	//if (a < b) { // > 미만 초과
	//	printf("a가 더 커");
	//}

	//if (a <= b) { // >=     =< (x) => (x)  이상 이하
	//	printf("a가 더 커");
	//}

	// AND (그리고) : &&
	// AND는 모든 조건이 참(true)가 되야 합니다.
	//if (a != b && b != c) { //if (참 && 거짓)
	//	printf("AND");
	//}

	// OR (또는) : ||
	// OR는 한개 조건 이상이 참(true)가 되야 합니다.
	//if (a != b || b != c) { //if (참 || 거짓)
	//	printf("OR");
	//}

	// ! (부정) : bool의 반대 (true -> false, false -> true)

	//if (!(a == b)) { //a(10) == b(5) -> false
	//	printf("네");
	//}

	//자료형 : bool
	//boolean : 불리언(boolean)은 논리학에서 참(true)과 거짓(false)을 나타내는 데 사용됩니다.
	//bool : true, false

	//bool status = true;

	//if (status) { //if는 조건이 참일때만 작동하니깐
	//	printf("ON");
	//}

	//if (status == true) { //if는 조건이 참일때만 작동하니깐
	//	printf("ON");
	//}

	//bool status = false;
	//if (!status) { //if는 조건이 참일때만 작동하니깐
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

	//else : 만약 아니라면

	//if (status) {
	//	printf("ON");
	//} else {
	//	printf("OFF");
	//}

	//int a = 3;

	//if (a == 1) {
	//	printf("1이다");
	//}
	//if (a == 2) {
	//	printf("2이다");
	//}
	//if (a == 3) {
	//	printf("3이다");
	//}

	//else if : 만약 뭐뭐가 아니라면 만약

	//if (a == 1) {
	//	printf("1이다");
	//}
	//else if (a == 2) {
	//	printf("2이다");
	//}
	//else if (a == 3) {
	//	printf("3이다");
	//}

	//if (a == 1) {
	//	printf("1이다");
	//}
	//else {
	//	if (a == 2) {
	//		printf("2이다");
	//	} else {
	//		if (a == 3) {
	//			printf("3이다");
	//		}
	//	}
	//}

	//if (a == 1) {
	//	printf("1이다");
	//}
	//else if (a == 2) {
	//	printf("2이다");
	//}
	//else {
	//	printf("3이다");
	//}

	//if (a == 1) printf("1이다");
	//else if (a == 2) printf("2이다");
	//else printf("3이다");

	//숫자를 받고 2의 배수인지 확인하는 프로그램 + (1 ~ 100)

int input;
scanf_s("%d", &input);

// 1 ≤ input ≤ 100
if (input >= 1 && input <= 100) {

	if (input % 2 == 0) {
		printf("%d는 2의 배수입니다.", input);
	}
	else {
		printf("%d는 2의 배수가 아닙니다.", input);
	}

}
else {
	printf("1 ~ 100으로 해ㅔ주셍쇼 !");
}

	return 0;
}
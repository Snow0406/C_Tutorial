#include <stdio.h> //include : 포함하다 (stdio.h를 들고 오는거예요 - 그 파일에 있는 코드를 쓸꺼예요)

//변수 : 수학시간떄 x, y
//자료형 : 정수인지 문자열인지 주소인지 등등 문자인지 소수안지 등등 클래스 등등 void
// // /* */ : 주석, 컴퓨터가 무시함

//x : 변수 이름
//int는 자료형이면서, 정수일때 사용을 해요.

int x = 5; 

//y : 변수 이름
//char는 자료형이면서, 문자일때 사용을 해요. 
//이거는 문자열은 사용 못함 (ex char y = '사로로인싸')

char y = 'c';

//z : 변수 이름, 
//float은 자료형이면서, 
//소수일때 사용을 해요.

float z = 3.14f;

int main() { //함수

	//출력문
	//%d - int
	printf("%d", x);
	
	//%c - char
	printf("%c", y);

	//%f - float
	printf("%f", z);

	//printf("x : %d", x);

	//printf("x : %d, y : %c, z : %f", x, y, z);

	//printf("x : %d, y : %c, z : %f", x, y, z);

	return 0;
}
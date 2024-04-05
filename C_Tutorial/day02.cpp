//#include <stdio.h> 

//int main() {

	// \n : 줄바꿈
	//printf("안녕하세요.\n저는 스노우 입니다");

	//float pi = 3.14f;
	//printf("pi : %0.2f", pi);

	//int x = 5;

	//int y;
	//y = 5;

	//x = 6;
	//printf("%d", x);

	//int index;
	//scanf_s("%d", &index);

	//printf("출력 : %d", index);

	/* ========= 대입 연산자 (a = 2) ========= */

	//수학은 a는 5다. 코딩에서는 a에다가 5를 넣는거예요.
	//int a;
	//a = 5;

	/* ======== 산술 연산자[+-*(x), ÷(/ ), % (나머지)] ========== */
	//int x = 10;
	//int y = 3;

	//int result;

	//printf("%d + %d = %d", x, y, x + y);

	//result = x + y;
	//printf("%d + %d = %d", x, y, result);

	//printf("%d - %d = %d", x, y, x - y);
	//printf("%d x %d = %d", x, y, x * y);
	//printf("%d ÷ %d = %d", x, y, x / y);

	//%를 출력할때는 %% 2개 적어야 함, ex: % 2개 출력하고 싶으면 %%%%
	//printf("%d %% %d = %d", x, y, x % y);

	/* ========= 증감 연산자 (++, --) ========== */
	//int num = 1;

	//num에다가 num(1) + 1을 해줘 ---> num(2)
	//num = num + 1;
	//num++; //1 더하기

	//num에다가 num(1) - 1을 해줘 ---> num(0)
	//num = num - 1;
	//num--; //1 빼기

	//printf("%d", num);

	/* ========= 할당 연산자 (+=, -=, *= /=, %=) ========== */
	//int num = 7;

	//num = num + 2;
	//num += 2;

	//num -= 3; //(num = num - 3)

	//num *= 3; //(num = num * 3)

	//num /= 3; //(num = num / 3)

	//num %= 3; //(num = num % 3)

	//printf("%d", num);

	/* ========= 관계 연산자 (==, !=, >, <) ========== */

	//if - 만약 (ex : 만약 안녕이라고 하면 안녕하세요라고 말하기)

	//int num = 18;

	//if (num == 18) { //if (조건문 - num이 18이라면) { // == : 같을때
	//	printf("num은 18이야"); //출력
	//}

	//if (num != 17) { //if (조건문 - num이 18이 아니라면) { // != : 다를때
	//	printf("num은 18이 아니야"); //출력
	//}


	//Good : if (num == 18) printf("num은 18이야"); 
	//Bad : if (num == 18) { printf("num은 18이야"); printf("num은 18이야");printf("num은 18이야");printf("num은 18이야");printf("num은 18이야"); }

	//if (true) {
	//	printf("num은 18이야");
	//	printf("num은 18이야");
	//	printf("num은 18이야");
	//	printf("num은 18이야");
	//}

	//return 0;
//}
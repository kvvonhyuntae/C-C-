#include <stdio.h>
int main() {
	int a;
	a = 2;

	printf("%p \n", &a); // &a의 값을 &p(a의 주소값)로 출력, 
	//

	int* p; //포인터의 시작
	int a1;
	p = &a1;

	printf("포인터 p에 들어 있는 값 : %p \n", p);
	printf("int 변수 a1가 저장된 주소 : %p \n", &a1);
	//

	int* p1; // 연산자의 이용
	int a2;

	p1 = &a2;
	a2 = 2;

	printf("a2 의 값 : %d \n", a2);
	printf("*p1 의 값 : %d \n", *p1);
	//

	int* p2; //연산자
	int a3;

	p2 = &a3;
	*p2 = 3;

	printf("a3의 값 : %d \n", a3);
	printf("p2의 값 : %d \n", *p2);
	//

	int a4; // 상수포인터
	int b;
	int* const pa = &a4;

	*pa = 3; //올바른문장
	//pa = &b; // 올바르지 않은 문장
	printf("%d", *pa);
	//

	int a5;  //포인터 덧셈
	int* pa1;
	pa1 = &a5;

	printf("pa1의 값 : %p \n", pa1);
	printf("(pa1 + 1)의 값 : %p \n", pa1 + 1);
	//포인터에 1을 더하면 주소값이 형의 크기 단위로 계산된다.
	//

	int a6;	//포인터의 덧셈, 다른변수의 경우
	char b2;
	double c;

	int* pa2 = &a6;
	char* pb = &b2;
	double* pc = &c;

	printf("pa2의 값 : %p \n", pa2);
	printf("(pa2 + 1)의 값 : %p\n", pa2 + 1);
	printf("pb의 값 :%p \n", pb);
	printf("(pb + 1)의 값 : %p\n", pb + 1);
	printf("pc의 값 : %p \n", pc + 1);
	printf("(pc + 1)의 값 : %p\n", pc + 1);
	//

	int a7;	// 포인터의 대입
	int* pa3 = &a7;
	int* pb1;

	*pa3 = 3;
	pb1 = pa3;

	printf("pa3가 가르키고 있는것 : %d \n", *pa3);
	printf("pb1가 가르키고 있는것 : %d \n", *pb1);
	// pa에 저장되어있는값을 pb에 저장하면 pb 역시 pa와 같은 주소값을 가지게 된다.



	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };	//배열과 포인터
	int* parr;
	int i;
	parr = &arr[0]; //arr이라는 int 변수를 의미

	for (i = 0; i < 10; i++) {
		printf("arr[%d]의 주소값 : %p", i, &arr[i]);
		printf("(parr + %d)의 값 : %p", i, (parr + i));

		if (&arr[i] == (parr + i)) {
			/* 만일 (parr + i) 가 성공적으로 arr[i] 를 가리킨다면 */
			printf("--> 일치 \n");
		}
		else {
			printf("--> 불일치\n");
		}
	}
	//

	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* parr1;

	parr1 = &arr1[0];

	printf("arr[3] = %d , *(parr1 + 3) = %d \n", arr[3], *(parr1 + 3));
	//

	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* parr2;

	parr2 = &arr2[0];

	printf("arr[3] = %d, *(parr + 3) = %d /n", arr2[3], *(parr2 + 3));
	//

	int arr3[3] = { 1,2,3 };

	printf("arr3의 정체 : %p \n", arr3);
	printf("arr3[0]의 주소값 : %p \n", &arr3[0]);
	//

	int arr4[6] = { 1,2,3,4,5,6 }; // arr크기 출력
	int* parr4 = arr4;

	printf("sizeof(arr4) : % d \n", sizeof(arr4));
	printf("sizeof(parr4) : %d \n", sizeof(parr4));
	//sizeof에 그대로 입력할경우 배열의 실체크기가 출력
	//sizeof에 parr을 입력할경우 포인터의 크기를 출력
	//즉, 배열의 이름과 첫번째 원소의 주소값은 다르다.

	int arr5[5] = { 1,2,3,4,5 };

	printf("a[3] : % d\n", arr5[3]);
	printf("*(a + 3) :%d\n", *(arr5 + 3));
	//"[ ]"연산자를 통해 arr[3]가 포인터 *(arr  + 3)로 자동 변환 된다.
	//그리고 이것은 배열의 arr + n번째를 의미한다.

	int arr8[5] = { 1,2,3,4,5 };

	printf("3[arr8] : %d \n", 3[arr8]);
	printf("*(3 + a8) :%d \n", *(arr8 + 3));
	//

	int arr9[3] = { 1.2,3 };
	int* parr5;

	parr5 = arr9; // parr = &arr[0];과 동일하다.

	printf("arr9[1] : %d \n", arr9[1]);
	printf("parr5[1] : %d \n", parr5[1]);
	//

	//포인터 이용하기
	int arr10[10] = { 100, 98, 97, 95, 89, 76, 72, 96, 100, 99 };

	int* parr6 = arr10;
	int sum = 0;

	while (parr6 - arr10 <= 9) {
		sum += (*parr6);
		parr6++;
	}
	printf("내 시험 점수 평균 : %d \n", sum / 10);
	//int **p; //더블 포인터 정의하는법
	//

	//더블 포인터1
	int a11;
	int* pa4;
	int** ppa;

	pa4 = &a11;
	ppa = &pa4;	//ppa에는 pa의 주소 값이 들어간다.

	a11 = 3;

	printf("a : %d // *pa : %d // **ppa :%d \n", a11, *pa4, **ppa);
	printf("&a : %p // pa : %p // ppa : %p\n", &a11, pa4, *ppa);
	printf("&pa : %p // ppa :%p \n", &pa4, ppa);

	//배열의 주소값1
	int arr11[3] = { 1,2,3 };
	int(*parr7)[3] = &arr11;

	printf("arr11[1] : %d \n", arr1[1]);
	printf("parr7[1] : %d \n", (*parr7)[1]);
	// &arr = 크기가 n인 배열을 가르키는 포인터
	//int (*parr)[n] = &arr; <-- 위를 정의하는 벙식
	//parr을 정의할때는 괄호()를 사용해야한다.
	//괄호를 사용하지 않으면 int *원소 n개를 정의한것으로 이해한다.

	int arr12[3] = { 1,2,3 };
	int(*parr8)[3] = &arr12;

	printf("arr : %p \n", arr12);
	printf("parr : %p \n", parr8);
	//

	//2차원 배열 포인터
	int arr13[2][3];

	printf("arr[0] : %p \n", arr13[0]);
	printf("&arr[0][0] : %p \n", &arr13[0][0]);

	printf("arr[1] : %p \n", arr[1]);
	printf("&arr[1][0] : %p \n", &arr13[1][0]);
	//arr[0] 주소값 = arr[0][0] 주소값
	//arr[1] 주소값 = arr[1][0] 주소값
	//즉 sizeof나 주소값 연산자와 같이 사용하지 않을경우
	// arr[0]은 arr[0][0]을 가리키는 포인터로 변환되고
	// arr[1]은 arr[1][0]을 가리키는 포인터로 타입변환된다.
	//다만 int arr[][] 에서 arr[0]과 &arr[0][0]은 완전히 다름
	//타입변환시에만 같은것으로 취급할 뿐이다. 주의

	//2차원 배열 sizeof
	int arr14[2][3] = { { 1,2,3 }, {4,5,6 } };
	printf("전체 크기 : %d \n", sizeof(arr14));
	printf("총 열의 개수 : %d \n", sizeof(arr14[0]) / sizeof(arr14[0][0]));
	printf("총 행의 개수  : %d \n", sizeof(arr14) / sizeof(arr14[0]));
	// sizeof 연산자의 경우 포인터로 타입변환을 하지않음
	//따라서 sizeof(arr[0])은 sizeof에 1차원 배열을 전달한것과 같다
	//sizeof(arr[0][0])을 하게되면 int의 크기인 4를 리턴하게 돠어 총 열의 개수를 알게된다.
	// 전체크기를 열의 크기로 나눈값이 총 행의 개수가 된다.


	//포인터의 type을 결정짓는 요소

	/*  실행안됨
	int arr15[2][3] = {{1,2,3}, {4,5,6}};
	int **parr9;

	parr9 = arr15;

	printf("arr[1][1] : %d \n", arr15[1][1]);
	printf("parr[1][1]: %d \n", parr9[1][1]);
	*/

	//2차원배열을 가리키는 포인터를 통해서 원소에 정확히 접근하기 위해서는
	//1. 가리키는 원소의 크기(여기서  int의 경우는 4)
	//2. b의값

	//배열의 포인터 = 배열을 가르키는 포인터
	int arr16[2][3] = { {1,2,3}, {4,5,6} };
	int(*parr10)[3];	//2차원배열의 열 개수(b의 값)

	parr10 = arr16;

	printf("parr10[1][2]: %d\n, arr[1][2] : %d \n", parr10[1][2], arr16[1][2]);
	
	// /* (배열의 형) */ (*/* (포인터 이름) */)[/* 2 차원 배열의 열 개수 */];
	// 예를 들어서
	// int(*parr)[3];

	/* 배열 포인터  */
	int arr17[2][3];
	int brr[10][3];
	int crr[2][5];

	int(*parr11)[3];

	parr11 = arr17;	//ok
	parr11 = brr;	//ok
	//parr11 = crr;	//오류
	//여기서 parr은 배열이 3인 포인터를 의미한다.
	//하지만 crr은 배열이 5인 포인터이기 때문에 오류가 발생한다.

	//배열포인터2

	/*int arr18[2][3] = {{1,2,3}, {4,5,6}};
	int **parr12;

	parr12 = arr18;

	printf("parr[1][1] : %d \n", parr[1][1]); */
	/*위 코드에서는 parr[1][1] = *(parr + 1) +1을 의미한다
	 int = 4 bite, *(parr + 1) = 3
	 *(*(parr +1 ) +1) = int*, int = 4 bite
	 즉 *(*(parr +1 ) +1) = 7
	 행렬의 주소값 7의 위치한 값을 불러와야하기 때문에 오류가 발생*/

	//포인터 배열
	int *arr19[3]; // = int* arr19[3]
	//각각의 원소를 int를 가르키는 포인터형으로 선언
	int a12 = 1, b3 = 2, c1 = 3;
	arr19[0] = &a12;
	arr19[1] = &b3;
	arr19[2] = &c1;
	//각각의 원소를 포인터로 취급

	printf("a : %d, *arr[0] : %d \n", a12, *arr19[0]);
	printf("b : %d, *arr[1] : %d \n", b3, *arr19[1]);
	printf("c : %d, *arr[2] : %d \n", c1, *arr19[2]);

	printf("a : %p, arr[0] : %p \n", &a12, arr19[0]);



	return 0;
	}
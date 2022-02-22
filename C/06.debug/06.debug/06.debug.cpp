// 06.debug.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

//#디버깅
//디버그란?
//컴퓨터에 발생한 기술적인 문제(bug)를 바로잡는 행위

//#include <stdio.h>
//int main() {
//	char a, b, c;
//	a = 100;
//	b = 300;
//	c = a + b;
//
//	printf("%d + %d = %d \n", a, b, c);
//	return 0;
//}

//디버깅을 진행할때는 키보드의 F10을 눌러 창에 출력되는 조건식을 확인하며 진행한다 

//#include <stdio.h>
//
//int main() {
//	int arr[10];
//	int i;
//
//	for (i = 0; i < 10; i++) {
//		scanf_s("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d \n", arr[i]);
//	}
//	return 0;
//}

//코드 오류 수정하기, 두번째 for문 (for (i = 0; i =< 10; i++) {)에서 i = < 10을 i < 10으로 수정
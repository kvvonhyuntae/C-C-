#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int print_hello() {
	printf("Hello! \n");
	return 0;
	//Hello를 출력하고 0을 반환하는 함수
}

int main() {
	printf("함수를 불러보자 :");
	print_hello();

	printf(" 또 불러 볼까? : ");
	print_hello();
	return 0;
}

//- 보통 좋은 함수의 이름은  그 함수가 무엇을 하는지 명확히 나타내 주는것.
//- 함수의 정의 : ```int print_hello()``` 부분을 함수의 정의라고 한다.
//- 출력을 함수에서는 반환(return)이라고 이야기한다.
//- 함수의 이름끝에는 괄호()가 붙는데 이 괄후는 이것이 함수라는것을 의미한다.
//- 만약 괄호를 명시하지 않을 경우 함수가 아니라 콜롬(;)을 붙이지 않은 변수로서 인식해 오류를 출력한다.
//- 함수는 0을 반환(return)했을 경우와 해당 함수가 끝까지 실행되었을경우 실행을 멈추고 종료된다.
//- return을 사용하여 종료할경우 함수는 무조건 종료되어 함수를 호출했던 부분으로 돌아간다
//- 함수는 반환을 하여 종료한는것이 안전하다.

//함수의 리턴
#include <stdio.h>
int return_func() {		//함수가 int type을 리턴한다는 의미

	printf("실행 \n");
	return 0;
	printf("오류 \n");	//0을 반환했기 때문에 실행안됨 
}
int main() {
	return_func();
	return 0;
}

//반환값
#include <stdio.h>
int ret() { return 1000; } // ret라는 이름의 함수를 int로 반환하고 호출시 1000을 반환한다.
int main() {
	int a = ret(); //a라는 변수에 함수 ret()를 대입
	printf("ret()함수의 반환값 : %d \n", a); // a실행시 ret함수의 반환값인 1000이 들어간다.

	return 0; //0을 반환
}

//main
//``` int main() ```  main이라는 함수를 정의한다는뜻
//main을 정의하는 이유
//- 프로그램을 실행하게 되면 main함수를 호출하는것으로 시작한다.
//- 만약 main을 정의하지 않을경우 어디부터 실행해야할지 몰라 오류가 발생한다.
//- main함수를 반환할 경우 운영체제(windows, linux)가 그 데이터를 받는다.
//- 보통 메인함수는 정상적으로 종료하면 0을 반환하고 비정상적으로 종료되면 1을 반환한다
//- 고 알려져있으나 사실 1을 반환한다고 해도 큰 문제는 없다. 이것을 활용하는 경우는 매우 드물다

//마술상자 - 실행안되는 코드
//#include <stdio.h>
//int magicbox() {
//	i += 4; //i 선언안됨
//	return 0;
//}
//int main() {
//	int i;
//	printf("마술 상자에 집어 넣을값 : ");
//	scanf("%d", &i);
//
//	magicbox();
//	printf("마술 상자를 지나면 : %d \n", i);
//	return 0;
//}
//- 함수를 호출할때 함수는 어떠한 코드에서 호출했는지 전혀 알수 없다.

//함수의 인자
#include <stdio.h>
int slave(int master_money) {
	master_money += 10000; //master_money의 1000을 더한후 
	return master_money;	//그 값을 반환한다.
}
int main() {
	int my_money = 100000;
	printf("2009.12.12 재산 : %d \n", slave(my_money)); // %d에 들어갈값으로 slave(my_money)가 반환하는 값을 입력, 함수 호출

	return 0;
}

//- ```int slave(int master money)``` = slave를 호출하는 코드로부터 어떠힌 깂을 master_money라는 int형 변수에 인자(혹은 매게변수)로 부터 받아들이겠다뜻
//- main과 slave는 별개의 함수이기 때문에 slave는 main의 변수를 사용할 수 없다.
//- slave 역시 main함수의 변수가 무엇들이 있는지 알지 못한다.
//- 하지만 인자(agument) 혹은 매게변수(parameter)를 이용하면 가능하다.
//- 인자는 함수 안에 선언이 되어있는 변수이고 이때 인자는 함수를 정의할때 소괄호 안에 나타나게 된다.
//- 함수에 인자를 변수로 설정한에 함수를 호출할때 인자에는 그에 맞는 값을 넣어주어야한다.
//
//
//- ex) slave(500); //slave함수를 호출할때 slave 함수 안에서 정의된 변수에 500이라는 값을 전달하겠다는 의미
//- ex) slave("변수"); // slave 함수를 호출할때 slave함수 안에서 정의된 변수의 값을 전달하겠다.
//- 함수의 인자는 함수를 호출한 것과 함수를 서로 연결해주는 통신수단이다. = 매게변수

////함수의 인자2
#include <stdio.h>
int slave(int my_money) {
	my_money += 1000;
	return my_money;
}

int main() {
	int my_money = 10000;
	printf("2009.12.12 현재 재산 : %d \n", slave(my_money));
	printf("my_money : %d", my_money);

	return 0;
}

//함수의 값 i, 1 / 변경안됨
#include <stdio.h>
int change_val(int i) {
	i = 3;
	return 0;
}
int main() {
	int i = 0;

	printf("호출 이전 i의 값 : %d \n", i);
	change_val(i);
	printf("호출 이후 i의 값 : %d \n", i);

	return 0;
}

//함수의 값 i, 2 / 포인터
#include <stdio.h>
int change_val(int *pi) {	//pi라는 이름의 포인터로 인자를 받음
	printf("----- change_val 함수 안에서 -----\n");
	printf("pi의 값 :%p \n", pi);
	printf("pi가 가르키는 것의 값 : %d \n", *pi);

	*pi = 3; // pi가 가리키고 있던 변수의 값을 3으로 변경

	printf("----- change_val 함수 끝 -----\n");
	return 0;
}
int main() {
	int i = 0;

	printf("i 변수의 주소값 : %p \n", &i);
	printf("호출 이전 i의 값 : %d \n", i);
	change_val(&i);	//change_val함수를 호출했을때 pi애는 i의 주소값이 들어가고 pi는 i를 가리키게 된다.
	printf("호출 이후 i의 값: %d \n", i);

	return 0;
}

//swap -  두 변수의 값을 교한하는 함수
#include <stdio.h>
int swap(int a, int b) {
	int temp = a;

	a = b;
	b = temp;

	return 0;
}
int main() {
	int i, j;

	i = 3;
	j = 5;

	printf("swap 이전: i : %d, j : %d \n", i, j);

	swap(i, j); // swap 함수 호출

	printf("swap 이후 : i: %d, j :%d \n", i, j);

	return 0;
}

//- 출력시 변화 없음
//
//- swap 함수는 두 변수의 값을 교환해주느 함수이다.
//- swap 함수는 인자가 2개의 인자를 전달해주어야한다.
//- 만약 인자가 늘어난다면 반점을 이용해 늘려가면 된다.
//- int 변수 a의 값을 temp라는 변수에 저장하고  a의 값에 b의 값을 넣는다.
//- a에는 b값이 이미 들어가 있으므로 temp의 값을 b에 입력한다.
//
//- 위 코드에서는 a /b와 i / j는 초기값이 동일하다는것 외에는 아무런 이해 관계가 없다.
//- 따라서 swap이 진행될 수 없다. swap이 진행되기 위해서 포인터를 사용한다.

//// 올바른 swap 함수
#include <stdio.h>
int swap(int *a, int *b) {
	int temp = *a;

	*a = *b;
	*b = temp;

	return 0;
}
int main() {
	int i, j;
	i = 3;
	j = 5;

	printf("swap 이전: i : %d, j : %d \n", i, j);	
	swap(&i, &j); // swap 함수 호출	
	printf("swap 이후 : i: %d, j :%d \n", i, j);

	return 0;
}
//- 함수가 특정한 타입의 변수 / 배열의 값을 바꾸려면 함수의 인자는 반드시 그 타입을 가리키는 포인터를 아용해야한다.

//- 함수의 원형
//- 여기까지 배운 함수는 모두 main홤수 위에서 정의 되고 있다
//- 함수의 정의를 main함수 아래애서 진행한다면
#include <stdio.h>
int swap(int* a, int* b); //함수의 원형 prototype
int main() {
	int i, j;
	i = 3;
	j = 5;
	printf("SWAP 이전 : i : %d, j : %d \n", i, j);
	swap(&i, &j);
	printf("SWAP 이후 : i : %d, j : %d \n", i, j);

	return 0;
}
int swap(int* a, int* b) {
	int temp = *a;

	*a = *b;
	*b = temp;

	return 0;
}
//- ```int swap(int* a, int* b);``` 이것을 함수의 원형, prototype이라고 한다.
//- 함수를 main함수 뒤에 정의할경우 코드 윗부분에 함수의 정의 부분을 한번 더 입력한다.
//- 이부분은 소스코드에게 해당 함수가 있으니 찾아서 실행하고 전달하는 역할을 한다.
//- 함수의 정의와는 달리 뒤에 콜롬( ; )을 붙인다.
//- 메인함 뒤에 함수를 정의하고 원형을 앞에 추가하는것을 선호한다.

//배열을 함수의 인자로 받기
# include <stdio.h>

int add_number(int *parr);
int main() {
	int arr[3];	//숫자 3개 1차원 배열 생성
	int i;

	for (i = 0; i < 3; i++) {	
		scanf("%d", &arr[i]);	//사용자로 부터 3개의 원소를 입력받는다.
	}
	add_number(arr);

	printf("배열의 각 원소 :  %d, %d, %d", arr[0], arr[1],arr[2]);
	return 0;
}
int add_number(int *parr) {	 //arr = &arr[0] (주소의 시작값을 가지고 있음), parr은 배열 arr을 가르킨다/.
	int i;
	for (i = 0; i < 3; i++) {
		parr[i]++;	//parr[i]를 통해 원소에 접근 가능 ++로 원소의 크기를 1 증가
	}
	return 0;
}

// 입력받은 배열의 10개의 원소중 최대값 출력
#include <stdio.h>
int max_number(int *parr);	
int main() {
	int arr[10];	//숫자 10개로 이루어진 1차원 배열 생성
	int i;

	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]); //원소 입력
	}

	printf("입력한 배열 중 가장 큰 수 : %d \n", max_number(arr));	//arr = &arr[0]
	return 0;
}
int max_number(int *parr) {	//함수정의
	int i;
	int max = parr[0];	//parr이 가리키는 배열의 첫번째 원소

	for (i = 1; i < 10; i++) {
		if (parr[i] > max); {	//parr[i] 보다 max의 값이 크다면 max의 값을 parr[i]로 대체
			max = parr[i];
		}
	}
	return max;

}
//- max_number : 인자로 전달받은 크기 10인 배열로부터 최대값을 구하는 함수

//함수 사용 연습하기
//함수를 이용하지 않은 버전
#include <stdio.h>
int main() {
	char input;

	scanf("%c", &input);

	if (48 <= input && input <= 57) {
		printf("%c는 숫자입니다 \n", input);
	}
	else {
		printf("%c는 숫자가 아닙니다 \n", input);
	}
	return 0;
}
//- 코드가 짧은 대신 이해하기 어렵다, input이 숫자인지 아닌지 구분하기 쉽지않음
//함수를 이용한 버전
#include <stdio.h>
int isidigit(char c); //c가 숫자인지 아닌지 판별하는 함수
int main() {
	char input;

	scanf("%c", &input);

	if (isidigit(input)) {
	printf("%c는 숫자입니다 \n", input);
	}
	else {
	printf("%c는 숫자가 아닙니다 \n", input);
	}
	return 0;
}
int isidigit(char c) {
	if (48 <= c && c <= 57) {
		return 1;
	}
	else
		return 0;
}
//- isidigit : 숫자인지 아닌지 판별하는 함수
//- 함수를 쓰면 여러모로 편리하다

//// 포인터가 가리키는 변수를 서로 바꾼다.
#include <stdio.h>

int pswap(int **pa, int **pb);	//함수 소환
int main() {					//메인함수 정의
	int a, b;					//int 변수 a, b
	int *pa, *pb;				//포인터 변수 pa, pb 정의

	pa = &a;					//포인터 pa
	pb = &b;					//포인터 pb

	printf("pa가 가기키는 변수의 주소값 : %p \n", pa);	//원래 pa의 주소값 출력
	printf("pa의 주소값 : %p \n \n", &pa);				//a의 주소값 출력
	printf("pb가 가리키는 변수의 주소값 : %p \n", pb);	//원래 pb의 주소값 출력
	printf("pb의 주소값 : %p \n", &pb);					//b의 값은 출력
				
	printf(" ------------swap start-------------- \n");
	pswap(&pa, &pb);	//a와 b의 값을 바꿈
	printf(" -------------swap end------------ \n");

	printf("pa가 가리키는 변수의 주소값 : %p \n", pa); //변경된 pa의 주소값
	printf("pa의 주소값 : %p \n \n", &pa);			//변경된 a의 주소값
	printf("pb가 가리키는 변수의 주소값 : %p \n", pb); //변경된 pb의 주소값
	printf("pb의 주소값 : %p \n \n", &pb);			//변경된 b의 주소값
	return 0;
}
int pswap(int **ppa, int **ppb) {
	int* temp = *ppa;	//temp에 *ppa의 값을 저장, *paa = pa의 값

	printf("ppa가 가리키는 주소값 : %p \n", ppa); //pa의 주소값 출력
	printf("ppb가 가리키는 주소값 : %p \n", ppb); //pb의 주소값 출력

	*ppa = *ppb;	//ppa에 ppb의 값을 입력
	*ppb = temp;	//ppb에 temp에 저장된 ppa의 값을 입력

	return 0;	//0을 반환
}

////2차원 배열의 각 원소를 1씩 증가시키는 함수
#include <stdio.h>
int addl_element(int(*arr)[2], int row);	//함수 소환
int main(){		//메인 함수 정의
	int arr[3][2];		//3 x 2 배열 생성
	int i, j;		//변수 i,j 생성

	for (i = 0; i < 3; i++) {		//i는 0이고 i가 3보다 작을때 1는 증가한다.
		for (j = 0; j < 2;j++) {	//j는 0이고 j가 2보다 작을때 j는 증가한다
			scanf("%d", &arr[i][j]);	//배열 i x j를 사용자로부터 정수로 입력받는다.
		}
	}
	addl_element(arr, 3); //addl_element 함수 사용

	for (i = 0; i < 3; i++) {		//i는 0이고 i는 3보다 적을때 i는 증가한다.
		for (j = 0; j < 2; j++) {	//j는 0이고 j는 2보다 적을때 j는 증가한다.
			printf("arr[%d][%d] : %d \n", i, j, arr[i][j]); //i, j, i x j 배열을 정수로 출력한다
		}
	}
	return 0; //0을 반환
}

int addl_element(int (* arr)[2], int row) {		//함수 add_element 정의, row를 통해 2차원배열 행의 개수를 알수있다.
	int i, j;		//int 변수 i, j 생성
	for (i = 0; i < row; i++) {		//i는 0이고 i가 row보다 작을때 i는 증가한다
		for (j = 0; j < 2; j++) {	//j는 0이고 j는 2보다 적을때 j는 증가한다.
			arr[i][j]++;	 //i x j배열 증가
		}
	}
	return 0; //0을 반환
}

//상수를 인자로 받아들이기
#include <stdio.h>
int read_val(const int  val);
int main() {
	int a;
	scanf("% d", &a);
	read_val(a);
	return 0;
}

int read_val(const int val) {
	val = 5; //허용 X
	return 0;
}
//val(상수)을 const int로 선언하였기 때문에 함수를 호출할때 val의 값은 전달된 인자의 값으로 초기화되고 변하지 않는다.
//상수로 인자를 받아들이는 경우는 대부부 함수를 호출해도 그 인자의 값이 바뀌지 않는 경우에 사용된다.

//함수 포인터
#include <stdio.h>
int max(int a, int b); //함수 소환
int main() {	//main함수 정의	
	int a, b;	//변수 a,b 생성
	int (*pmax)(int, int);	//pmax의 정의
	pmax = max;	//max 함수의 시작 주소값을 pmax에 대입, pmax = &max는 틀린형식이다.

	scanf("%d %d", &a, &b); //a, b를 정수로 입력받음
	printf("max(a,b) : %d \n", max(a, b)); //a, b중 최대값을 정수로 출력
	printf("pmax(a,b) :%d \n", pmax(a, b));	 //포인트 a, 포인트 b중 최대값을 정수로 

	return 0;		//0을 반환
}
int max(int a, int b) {	//int a, int b를 인자로 받는 함수 max 생성
	if (a > b)	//a가 b보다 크다면
		return a;	//a를 반환한다.
	else	//그게 아니라면
		return b;	//b를 반환한다.

	return 0;		//0을 반환
}

//함수 포인터의 정의 ```(함수의 리턴형) (*포인터 이름)(첫번째 인자 타입, 두번째 인자 타입,....)```
//만약 인자가 없다면 괄호를 비워놓으면 된다. ex) int (*a), ()

//함수 포인터
#include <stdio.h>

int max(int a, int b); //함수 max 소환
int donothing(int c, int k);	//donothing 함수 소환
int main() {		//main 함수 정의
	int a, b;	//int 변수 a, b 생성
	int (*pfunc)(int, int);		//int type의 pfunc 포인터 생성
	pfunc = max;	//pfunc에 max 함수 대입

	scanf("%d %d", &a, &b);	//a,b를 가리키는 변수 2개를 정수로 입력받는다
	printf("max(a, b) : % d \n", max(a, b));	//함수 max를 사용해 a와 b중 최대값을 출력
	printf("pfunc(a,b) : %d \n", pfunc(a, b));	//pfunc가 가리키는 함수 max를 사용해 a와 b중 최대값을 출력

	pfunc = donothing;	//pfunc에 함수 donothing을 대입

	printf("donothing(1,1) : %d \n", donothing(1, 1));
	printf("pfunc(1,1) : %d \n", pfunc(1, 1));
	return 0;
}
int max(int a, int b) {	//int type의 변수 a, b를 인자로 받음
	if (a > b)	//만약 a가 b보다 클경우
		return a;	//a를 반환하고
	else	//아닐경우
		return b;	//b를 반환한다.

	return 0;	//0을 반환한다.
}
int donothing(int c, int k) { return 1; } //1을 반환한다.
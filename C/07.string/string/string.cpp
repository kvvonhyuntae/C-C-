#define _CRT_SECURE_NO_WARNINGS

//null 종료 문자열
//null : 값이 아무것도 없는 상태를 의미한다. 0은 0이라는 값이 존재하기 때문에 null = 0또한 성립하지 않는다.
//
//문자열은 char에 저장한다.null은 문자열이 종료될때 여기까지가 문자열이였다고  알려주는 역할을 한다.

//null-1
//#include <stdio.h>
//
int main() {
	char null_1 = '\0'; //이 3개는 모두 동일한다
	char null_2 = 0;
	char null_3 = (char)NULL; //모두 대문자 써야한다.

	char not_null = '0';

	printf("Null의 정수(아스키)값: %d, %d, %d \n", null_1, null_2, null_3);
	printf("'0'의 정수(아스키)값 : %d \n", not_null);

	return 0;
}
//
//- \0의 아스키 값은 0이다. 문자 0의 경우 아스키 값이 48이다. 따라서 null값을 표시할때는 \0으로 표기한다.
//- 문자열의 마지막에는 NULL 혹은 문자 0이 아닌 0이란 값 자체를 사용할 수 있다.

//문자열의 시작
#include <stdio.h>
int main() {
	char sentence_1[4] = { 'P', 's', 'i', '\0' };	// \0은 아스키 값으 0인문자 종료문자이다. 완벽한 null 종료문자열이다.
	char sentence_2[4] = { 'P', 's', 'i', 0 };
	char sentence_3[4] = { 'P', 's', 'i', (char)NULL };
	char sentence_4[4]{ "Psi" }; 

	printf("sentence_1 : %s \n", sentence_1); //%s를 통해 문자열을 출력한다.
	printf("sentence_2 : %s \n", sentence_2);
	printf("sentence_3 : %s \n", sentence_3);
	printf("sentence_4 : %s \n", sentence_4);

	
	return 0;
}
//
//- 각각 문자를 '작은따옴표'로 문자열을 하나하나 엮어주면 번거롭기 때문에 c언어에서는 "큰따옴표로" 한번에 묶어주면 자동으로 각각의 문자로 넣어준다. 이때 Null값은 자동으로 추가되기 때문에 추가할 필요가 없다.
//- 문자열에 끝에는 NULL값이 들어가야 하기때문에 배열의 크기는 항상 +1을 해줘야 한다, (만약 Null값을 안주게되면 허용되지 않는 메모리 범위를 읽게되는 문제가 발생)
//- %c를 사용한다면 한문자만을 출력한다. %s를 이용한다면 sentence_4에서부터 널이 나올때까지 문자를 계속 출력하게된다.
//
//큰따옴표와 작은 따옴표의 차이
//큰따옴표
//문자열(한개 이상의 문자)을 지정할때 사용
//작은 따옴표
//한개의 문자를 지정할때 사용

//포인터 간단 복습
//#include <stdio.h>
//int main() {
//	char word[30] = { "long sentence" };
//	char *str = word;
//
//	printf("%s \n", str);
//
//	return 0;
//}
//*str이라는 포인터가 word를 가리킴
//즉 str이 가리키는것을 문자열로 출력

//문자열 바꾸기
#include <stdio.h>
int main() {
	char word[] = { "long sentence" };	//char 배열 생성

	printf("조작 이전 : %s \n", word); //long sentence 출력

	word[0] = 'a';	//원소 1의 값 변경
	word[1] = 'b';	//원소 2의 값 변경
	word[2] = 'c';	//원소 3의 값 변경
	word[3] = 'd';	//원소 4의 값 변경

	printf("조작 이후 : %s \n", word);	//abcd sentence 출력

	return 0;	//0을 반환
}
//- 배열을 생성할때 [ 대괄호 ]안을 빈칸으로 두었다는것은 컴파일러가 알아서 원소의 수를 세어서 빈칸을 채워넣을라는 의미.

//문자수 카운트
#include <stdio.h>
int str_length(char* str);	//함수 소환
int main() {
	char str[] = { "What is your nane?"};	//char 배열 생성
	printf("이 문자열의 길이 : %d \n", str_length(str));
	return 0;
}
int str_length(char *str) {	//함수 정의(char 타입의 str 포인터)
	int i = 0;	
	while (str[i]) {
		i++; //와일문 사용, str[i]가 0(null)이 될때 증가를 멈추겠다는뜻
	}
	return i;
}

//문자열 입력
#include <stdio.h>
int main() {
	char words[30];	//char type의 30자 배열 생성

	printf("30자 이내의 문자열을 입력해주세요! : ");
	scanf("%s", words); //%s 문자열 입력
	printf("문자열 : %s \n", words); //%s로 문자열 출력

	return 0;	//0을 반환
}

//Buffer, stdin
//이상한 scanf1
#include <stdio.h>
int main() {		//main 함수 정의
	int num;	//int 변수 num 생성
	char c;		//char 변수 c 생성

	printf("숫자를 입력하세요 : ");	
	scanf("%d", &num);	//'입력한 숫자 \n'이 stdin에 저장이 된다.

	printf("문자를입력하세요 : ");
	scanf("%c",&c);	//stdin에 \n을남겨놓았기 때문에 문자열을 입력하기전에 남아있는 \n을 우선 입력해서 종료가 된다.
	return 0;	//0을 반환
}
//- 키보드의 입력을 처리하는 버퍼는 입력 버퍼 혹은 stdin(입력 스트림)
//- 키보드로 입력하는 모든 정보는 일시적으로 stdin에 저장되었다가 나중에 입력이 종료되면 한번에 처리를 한다.
//- pc는 \n 혹은 개행문자를 입력하면 입력을 종료한다고 받아들임

//이상한 scanf2
#include <stdio.h>
int main() {
	char str[30];	//char type 배열 생성
	int i;	//변수 i 생성

	scanf("%d", &i);	//변수 i를 정수로 입력받음
	scanf("%s", str);	//char 타입의 배열 str을 문자열로 입력받음
	printf("str : %s", str);	//입력받은 str을 문자열로 출력

	return 0;	//0을 반환
}
//- 1번 코드와는 달리 % d나 % s를 사용할때는 실질적인데이터가 입력되기 전까지 버퍼에 남아있던 공백 문자들은 무시하고 그 다음부터 등장하는 공백문자에서 종료한다.
//- % c를 이용할때는 버퍼에 무엇이 남아있는지 생각해야한다.

//마지막 stdin 예제
#include <stdio.h>
int main() {	//main 함수 정의
	char str1[10], str2[10];	//char 타입 str1, str2 배열 생성

	printf("문자열을 입력하세요 : ");
	scanf("%s", str1);	//str1 배열을 문자열로 입력받음
	printf("입력한 문자열 :%s \n", str1); //str1의 배열을 문자열로 출력

	printf("문자열을 입력하세요 : ");
	scanf("%s", str2);	//str2 배열을 문자열로 입력받음, str1에서 입력받은 문자열이 2가지일경우 해당 코드 스킵
	printf("입력한 문자열: %s \n", str2);	//str2 배열을 문자열로 출력

	return 0;	//0을 반환
}

//버퍼 비우기
//- 해당코드는 반드시 ms계열의 컴파일러(비쥬얼 스튜디오)로 컴파일을 진행해야한다.
//- gcc에서는 정상적으로 작동이 되지 않음
#include <stdio.h>
int main() {
	int num;
	char c;

	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);

	fflush(stdin);	//stdin을 비워주라는 코드, 해당코드를 입력하면 stdin속 모든 데이터를 날려버린다.

	printf("문자를 입력하세요 : ");
	scanf("%c", &c);
	return 0;
}
//
//- Visual Studio 2015 부터는 표준을 따라서 fflush 가 위와 같이 작동하지 않음

//getchar 함수 이용
#include <stdio.h>
int main() {	//메인 함수 정의
	int num;	//int type의 num 변수 생성
	char c;		//char type의 c변수 생성

	printf(" 숫자를 입력하세요 : ");
	scanf("%d", &num);	//정수로 된 숫자 입력

	getchar();	//stdin에서 한 문자를 읽어와서 그 값을 리턴한다.

	printf("문자를 입력하세요 : ");	
	scanf("%c", &c);	//문자 입력

	return 0;	//0을 반환
}
//getchar : stdin에서 한 문자를 읽어와서 그 값을 리턴한다. 한 문자를 읽어오면 읽어온 문자는 stdin에서 사라지고 getchar를 호출함으로써 \n은지워지게 된다.

//getchar 2
#include <stdio.h>
int main() {	//main 함수 정의
	int num;	//int type의 변수 num 생성
	char c;		//char type의 변수 c 생성

	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);	//사용자로부터 숫자를 정수로 입력받음

	getchar();	//getchar 함수 호출

	printf("문자를 입력하세요 : ");
	scanf("%c", &c);	//사용자로부터 문자를 입력받음

	printf("입력한 문자 : %c", c);	//입력받은 문자를 출력
	return 0;	//0을 호출
}
//- 입력한 123abc에서 123을 출력하고 getchar() 함수 호출, abc에서 한 문자 a를 읽어오고 사라짐, 이후 버퍼에서 한문자를 읽어오고 c자리에 b가 들어가 b가 출력된다. 마지막으로  c를 호출하면 \n이 출력
//- 되도록이면 scanf를 사용할때는 %c를 가급적이면 피하도록 하자, 문자대신 문자열을 입력받도록 할것

//문자열1
#include <stdio.h>
int main() {
	char str[] = "sentence";	//str이라는 배열에 sentence 문자열 입력
	const char *pstr = "sentence";	//포인터 pstr 생성, sentence를 주소값으로 취급

	printf("str : %s \n", str);		//str을 출력
	printf("pstr : %s \n", pstr);	//포인터 pstr을 출력
	printf("%d \n", "sentence");
	return 0;	//0을 반환
}
//- 여기서 sentence = str에 들어있는 sentence에 들어있는 시작 주소값으로 취급

//문자열 2, 실행안되는 코드
#include<stdio.h>
int main(){
	char str[] = "hello";
	const char *pstr = "goodbye";

	str[1] = 'a';	//리터럴의 값을 수정하려고 시도, 프로그램은 강제로 종료된다
	pstr[1] = 'a';

	return 0;
}
//리터럴 : 소스코드상에서 고장된 값을 가지는것. 주로 큰따옴포(" ")로 묶여있는 것들을 문자열 리터럴(string literal)이라 부름
// - 리터럴이 보관되는 곳은 오직 읽기만 가능한 곳이고 이곳을 함부로 수정하려고 시도한다면 프로그램이 강제 종료된다.
//vs 2017이상에서는 리터럴을 char*이 가르킬수 없다. 반드시 const char*이 가리켜야함.
//
//int i, j = 0;
//i = j + 3; //int 형에서는 값을 더하는것이 가능
//
//char str1[] = { "abc" };
//char str2[] = { "def" };
//str1 = str1 + str2; // 두개 이상의 문자열을 합쳐서 하나의 문자열로 만드는것은 배열의 주소값을 더하는것이기때문에 불가능하다. --> 오류
//
//if (str1 == str2) 역시 주소값을 비교하라는 의미이기때문에 불가능하다.
//if (str1 == "abc")  abc가 리터럴이기 때문에 이런 방식의 비교 역시 불가능하다.
//str1 = str2; 문자열끼리의 대입도 불가능하다.
//이러한 문제는 함수를 사용하면 해결가능하다.
//
//우선 함수를 만들기 위해서는 
//1. 함수가 가지는 작업에 대해 // 자세하게 적을수록 좋음
//2. 함수의 리턴형이 무엇인가
//3. 함수의 인자는 무엇으로 받는가

//copy_str 사용예제
#include <stdio.h>
int copy_str(char* dtr, char* dest);	//함수 호출
int main() {	//메인함수 정의
	char str1[] = "hello";	//char type str1 변수 생성
	char str2[] = "hi";		//char type str2 변수 생성

	printf("복사 이전 : %s \n", str1);	//str1 출력

	copy_str(str1, str2);	//함수 사용, str2의 값을 str1에 복사
	printf("복사 이후 : %s \n", str1);	//변경된 str1 다시 출력
		
	return 0;	//0을 반환
}
//문자열의 값을 복사한다.
int copy_str(char *dest, char *src) {	//char *dest와 char *src를 인자로 사용하는 함수 생성
	while (*src) {	//와일문 사용
		*dest = *src; //*dest에 *src 대입
		src++; //src 증가 //포인터의 연산, 1씩 증가할때마다 포인터가 가리키는 타입의 크기를 곱한만큼 증가한다. 그 다음 원소를 가리킴
		dest++;//dest 증가
}
	*dest = '\0';	//dest에 null 값을 입력
	return 1;	//1을 반환
}
//해당함수는 dest의 크기가 src의 크기보다 큰지 작은지 검사하지 않기 때문에 만약 dest의 크기가 src의 크기보다 작다면 메모리상에서 문제가 생길수있으니 주의할것.
// 
//함수를 만들지 않고 문자열을 복사하기 
//char str[100];
//str = "abdefg"; //실행 안됨, 문자열 리터럴 "abcdefg"가 위치한 주소값을 넣으라는의미 
//
//char str[100] = "abcdefg";	//실행됨, 오직 배열을 정의할때만 사용할수 있는 방법, str 각각의 원소에 a - g까지 저장된다.

//문자열을 합치는 함수
#include <stdio.h>
int stradd(char* dest, char* src);		//함수 호출
int main() {	//메인 함수 생성
	char str1[100] = "hello my name is ";	//char type의 변수 str1 생성
	char str2[] = "kvvonhyuntae";		//char type의 변수 str2 생성

	printf("합치기 이전 : %s \n", str1);	//str1 출력
	stradd(str1, str2);	//변수 사용 str1과 str2 합치기
	printf("합치기 이후 : % s \n", str1);	//str2 출력
	return 0;	//0을 반환
}
int stradd(char* dest, char* src) {	//char *dest, char *src를 인자로 쓰는 함수 정의 
	while (*dest) {	//while문 사용
		dest++;	//dest값을 증가시켜 마지막원소를 확인한다.
	}
	while (*src) {	//while문 사용
		*dest = *src;	//dest에 src 대입하여 첫번째 while문에서 확인한 dest의 마지막 원소부터 값을 복사한다.
		*src++;		//str 증가, 포인터에 덧셈을 하면 포인터의 타입의 크기만큼 
		*dest++;	//dest 증가
	}
	*dest = '\0';	//dest 마지막에 null 값 부여 필수

	return 1; //1을 반환 
}
//- 해당 함수에서 첫번째 while문을 지나게되면 dest는 dest 문자열의 null문자를 가리키게된다.
//- 이후 src의 문자열 들을 dest의 null 문자가 있는곳부터 복사해넣는다.
//- src에서 null이 추가되지 않았기때문에 두번째 while문 이후에 dest에 null을 추가해준다.
//
//문자열을 복사하는 함수
//문자열을 비교하는 함수는 아래와 같은 작업을 하는 함수를 의미한다.
if (compare(str1, str2)) {
	  만일 str1 과 str2 가 같다면 이 부분이 실행되고 아니면 skip
}
#include <stdio.h>
int compare(char* str1, char* str2);	//함수 호출
int main() {	//메인 함수 정의
	char str[20] = "hello every1";		//char type의 str변수 생성
	char str2[20] = "hello everyone";	//char type의 str2변수 생성
	char str3[20] = "hello every1_hi";	//char type의 str3변수 생성
	char str4[20] = "hello every1";		//char type의 str4변수 생성
	if (compare(str, str2)) { //if문에 함수 사용
		printf("%s 와 %s 는 같다 \n", str, str2);	//str과 str2 비교(같다)
	}   else {	
		printf("%s 와 %s 는 다르다 \n", str, str2);	//str과 str2 비교(다르다)
	}
	if (compare(str, str3)) {	//if문에 함수 사용
		printf("%s 와 %s 는 같다 \n", str, str3);//str과 str3 비교(같다)
	}	else {
		printf("%s 와 %s 는 다르다 \n", str, str3);	//str과 str3 비교(다르다)
	}
	if (compare(str, str4)) {	//if문에 함수 사용
		printf("%s 와 %s 는 같다 \n", str, str4);	//str과 str4 비교(같다)
	}	else {
		printf("%s 와 %s 는 다르다 \n", str, str4);	//str과 str4 비교(다르다)
	}
	return 0;	//0을 반환
}
int compare(char* str1, char* str2) {	//char *str1, char *str2함수 정의
	while (*str1) {		//while에서 각 문자가 끝날때까지 비교
		if (*str1 != *str2) {	//if문 str1과 str2비교
			return 0; //0을 반환 //한문자라도 다르면 0을 반환하고 종료된다.
		}

		str1++;	//str1을 증가시켜 원소에 접근
		str2++;	//str2를 증가시켜 원소에 접근
	}
	if (*str2 == '\0') return 1;	//str2가 끝났는지 확인

	return 1;	//1을 반환
}
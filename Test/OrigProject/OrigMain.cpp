#include <stdlib.h>
#include "ChildC.h"

void main()
{
	std::cout << "\n\nparent와 child의 객체를 각각 생성" << std::endl;
	ParentC* parent_test = new ParentC();
	ChildC* child_test = new ChildC();

	std::cout << "\n\nparent와 child의 객체를 매개변수를 주고 각각 생성" << std::endl;
	ParentC* parent_new_name = new ParentC("test parent");
	ChildC* child_new_name = new ChildC("test parent", "test child");

	getchar();
	std::cout << "\n\nparent 객체의 public 변수, 함수, 재정의 함수 실행 결과" << std::endl;

	std::cout << "ParentC는 외부에서 ParentC 객체를 통해 ParentC의 public parent id만 접근 가능 :"
		<< parent_test->public_parent_id_ 
		<< std::endl;
	parent_test->PublicParentFunc();
	parent_test->InheritanceFunc(1);

	getchar();
	std::cout << "\n\nchild 객체의 public 변수, 함수, 재정의 함수 실행 결과" << std::endl;

	std::cout << "ChildC는 외부에서 ChildC 객체를 통해 ChildC의 public child id에 접근 가능 :"
		<< child_test->public_child_id_ 
		<< std::endl;
	std::cout << "ChildC는 외부에서 ChildC 객체를 통해 ChildC가 상속한 ParentC의 public parent id에 접근 가능 :"
		<< child_test->public_parent_id_
		<< std::endl;
	child_test->PublicParentFunc();
	child_test->PublicChildFunc();
	child_test->InheritanceFunc(1);

	getchar();
	std::cout << "\n\nPrivate 값에 대한 접근 제어" << std::endl;

	std::cout << "Child의 Private 값은 Setter를 통해 변경 가능하고 Getter로 접근 가능" << std::endl;
	child_test->SetChildName("new child");
	std::cout << child_test->GetChildName() << std::endl;

	std::cout << "Parent의 Private 값은 Setter를 통해 변경 가능하고 Getter로 접근 가능" << std::endl;
	parent_test->SetParentName("new parent");
	std::cout << parent_test->GetParentName() << std::endl;

	getchar();
	std::cout << "\n\n상속 객체간 형 변환" << std::endl;
	std::cout << "ChildC는 ParentC의 자료형으로 생성 가능. 함수 및 변수는 ParentC의 것만 사용 가능" << std::endl;
	std::cout << "ChildC는 ParentC의 정보를 알지만, ParentC는 ChildC의 정보를 모르기 때문에 역은 불가능" << std::endl;
	ParentC* child_of_parent_datatype = new ChildC();
	//ChildC* parent_of_child_datatype = new ParentC();
	std::cout << "ParentC로 생성 된 ChildC의 상속 함수 실행 시" << std::endl;
	child_of_parent_datatype->InheritanceFunc(1);

	getchar();
	std::cout << "\n\n기존에 생성 된 객체에 대해서도 ChildC는 ParentC가 될 수 있지만, 역은 불가능" << std::endl;
	//ChildC* parent_to_child = parent_test;
	ParentC* child_to_parent = child_test;
	std::cout << "ParentC로 범위가 축소 된 ChildC의 상속 함수 실행 시" << std::endl;
	child_to_parent->InheritanceFunc(1);

	std::cout << "\n\n사용 가능한 함수, 변수만 ParentC의 범위이고 재정의 된 함수는 ChildC의 것을 사용" << std::endl;

}
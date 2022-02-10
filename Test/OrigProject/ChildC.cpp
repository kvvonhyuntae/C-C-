#include "ChildC.h"

ChildC::ChildC(): ParentC()
{
	printf("ChildC의 디폴트 생성자\n");
	child_name_ = "Default Child Name";
	private_child_id_ = 1;
	protect_child_id_ = 10;
	public_child_id_ = 100;
}

ChildC::ChildC(std::string parent_name)
	: ParentC(parent_name)
	, child_name_("Default Child Name")
	, private_child_id_(1)
	, protect_child_id_(10)
	, public_child_id_(100)
{
	printf("ChildC의 매개변수 1개 생성자\n");
}

ChildC::ChildC(std::string parent_name, std::string child_name)
	: ParentC(parent_name)
	, child_name_(child_name)
	, private_child_id_(1)
	, protect_child_id_(10)
	, public_child_id_(100)
{
	printf("ChildC의 매개변수 2개 생성자\n");
}

ChildC::~ChildC()
{
	printf("ChildC의 소멸자\n");
}

void ChildC::PrivateChildFunc()
{
	printf("ChildC의 Private 함수\n");
}

void ChildC::PublicChildFunc()
{
	printf("ChildC의 Public 함수\n");
}

void ChildC::InheritanceFunc(int val1)
{
	printf("ChildC의 상속 구현 함수\n");
	std::cout << "ChildC 클래스 내부에서는 아래의 변수들에 접근 가능함\n"
		<< "protected_parent_id_ :" << protect_parent_id_ << "\n"
		<< "public_parent_id_ :" << public_parent_id_ << "\n"
		<< "private_child_id_ :" << private_child_id_ << "\n"
		<< "protect_child_id_ :" << protect_child_id_ << "\n"
		<< "public_child_id_ :" << public_child_id_ << std::endl;
}
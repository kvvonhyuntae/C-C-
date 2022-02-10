#include "ParentC.h"

ParentC::ParentC()
{
	printf("ParentC의 디폴트 생성자\n");
	parent_name_ = "Default Parent Name";
	private_parent_id_ = -1;
	protect_parent_id_ = -10;
	public_parent_id_ = -100;
}

ParentC::ParentC(std::string parent_name)
	: parent_name_(parent_name)
	, private_parent_id_(-1)
	, protect_parent_id_(-10)
	, public_parent_id_(-100)
{
	printf("ParentC의 매개변수 생성자\n");
}

ParentC::~ParentC()
{
	printf("ParentC의 소멸자\n");
}

void ParentC::PrivateParentFunc()
{
	printf("ParentC의 Private 함수\n");
}

void ParentC::PublicParentFunc()
{
	printf("ParentC의 Public 함수\n");
}

void ParentC::InheritanceFunc(int val1)
{
	printf("ParentC의 상속 구현 함수\n");
	std::cout << "ParentC 클래스 내부에서는 아래의 변수들에 접근 가능함\n"
		<< "private_parent_id_ :" << private_parent_id_ << "\n"
		<< "protected_parent_id_ :" << protect_parent_id_ << "\n"
		<< "public_parent_id_ :" << public_parent_id_ << std::endl;
}
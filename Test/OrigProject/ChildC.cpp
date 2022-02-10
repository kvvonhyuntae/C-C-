#include "ChildC.h"

ChildC::ChildC(): ParentC()
{
	printf("ChildC�� ����Ʈ ������\n");
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
	printf("ChildC�� �Ű����� 1�� ������\n");
}

ChildC::ChildC(std::string parent_name, std::string child_name)
	: ParentC(parent_name)
	, child_name_(child_name)
	, private_child_id_(1)
	, protect_child_id_(10)
	, public_child_id_(100)
{
	printf("ChildC�� �Ű����� 2�� ������\n");
}

ChildC::~ChildC()
{
	printf("ChildC�� �Ҹ���\n");
}

void ChildC::PrivateChildFunc()
{
	printf("ChildC�� Private �Լ�\n");
}

void ChildC::PublicChildFunc()
{
	printf("ChildC�� Public �Լ�\n");
}

void ChildC::InheritanceFunc(int val1)
{
	printf("ChildC�� ��� ���� �Լ�\n");
	std::cout << "ChildC Ŭ���� ���ο����� �Ʒ��� �����鿡 ���� ������\n"
		<< "protected_parent_id_ :" << protect_parent_id_ << "\n"
		<< "public_parent_id_ :" << public_parent_id_ << "\n"
		<< "private_child_id_ :" << private_child_id_ << "\n"
		<< "protect_child_id_ :" << protect_child_id_ << "\n"
		<< "public_child_id_ :" << public_child_id_ << std::endl;
}
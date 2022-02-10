#include "ParentC.h"

ParentC::ParentC()
{
	printf("ParentC�� ����Ʈ ������\n");
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
	printf("ParentC�� �Ű����� ������\n");
}

ParentC::~ParentC()
{
	printf("ParentC�� �Ҹ���\n");
}

void ParentC::PrivateParentFunc()
{
	printf("ParentC�� Private �Լ�\n");
}

void ParentC::PublicParentFunc()
{
	printf("ParentC�� Public �Լ�\n");
}

void ParentC::InheritanceFunc(int val1)
{
	printf("ParentC�� ��� ���� �Լ�\n");
	std::cout << "ParentC Ŭ���� ���ο����� �Ʒ��� �����鿡 ���� ������\n"
		<< "private_parent_id_ :" << private_parent_id_ << "\n"
		<< "protected_parent_id_ :" << protect_parent_id_ << "\n"
		<< "public_parent_id_ :" << public_parent_id_ << std::endl;
}
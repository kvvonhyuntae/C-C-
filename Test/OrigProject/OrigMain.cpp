#include <stdlib.h>
#include "ChildC.h"

void main()
{
	std::cout << "\n\nparent�� child�� ��ü�� ���� ����" << std::endl;
	ParentC* parent_test = new ParentC();
	ChildC* child_test = new ChildC();

	std::cout << "\n\nparent�� child�� ��ü�� �Ű������� �ְ� ���� ����" << std::endl;
	ParentC* parent_new_name = new ParentC("test parent");
	ChildC* child_new_name = new ChildC("test parent", "test child");

	getchar();
	std::cout << "\n\nparent ��ü�� public ����, �Լ�, ������ �Լ� ���� ���" << std::endl;

	std::cout << "ParentC�� �ܺο��� ParentC ��ü�� ���� ParentC�� public parent id�� ���� ���� :"
		<< parent_test->public_parent_id_ 
		<< std::endl;
	parent_test->PublicParentFunc();
	parent_test->InheritanceFunc(1);

	getchar();
	std::cout << "\n\nchild ��ü�� public ����, �Լ�, ������ �Լ� ���� ���" << std::endl;

	std::cout << "ChildC�� �ܺο��� ChildC ��ü�� ���� ChildC�� public child id�� ���� ���� :"
		<< child_test->public_child_id_ 
		<< std::endl;
	std::cout << "ChildC�� �ܺο��� ChildC ��ü�� ���� ChildC�� ����� ParentC�� public parent id�� ���� ���� :"
		<< child_test->public_parent_id_
		<< std::endl;
	child_test->PublicParentFunc();
	child_test->PublicChildFunc();
	child_test->InheritanceFunc(1);

	getchar();
	std::cout << "\n\nPrivate ���� ���� ���� ����" << std::endl;

	std::cout << "Child�� Private ���� Setter�� ���� ���� �����ϰ� Getter�� ���� ����" << std::endl;
	child_test->SetChildName("new child");
	std::cout << child_test->GetChildName() << std::endl;

	std::cout << "Parent�� Private ���� Setter�� ���� ���� �����ϰ� Getter�� ���� ����" << std::endl;
	parent_test->SetParentName("new parent");
	std::cout << parent_test->GetParentName() << std::endl;

	getchar();
	std::cout << "\n\n��� ��ü�� �� ��ȯ" << std::endl;
	std::cout << "ChildC�� ParentC�� �ڷ������� ���� ����. �Լ� �� ������ ParentC�� �͸� ��� ����" << std::endl;
	std::cout << "ChildC�� ParentC�� ������ ������, ParentC�� ChildC�� ������ �𸣱� ������ ���� �Ұ���" << std::endl;
	ParentC* child_of_parent_datatype = new ChildC();
	//ChildC* parent_of_child_datatype = new ParentC();
	std::cout << "ParentC�� ���� �� ChildC�� ��� �Լ� ���� ��" << std::endl;
	child_of_parent_datatype->InheritanceFunc(1);

	getchar();
	std::cout << "\n\n������ ���� �� ��ü�� ���ؼ��� ChildC�� ParentC�� �� �� ������, ���� �Ұ���" << std::endl;
	//ChildC* parent_to_child = parent_test;
	ParentC* child_to_parent = child_test;
	std::cout << "ParentC�� ������ ��� �� ChildC�� ��� �Լ� ���� ��" << std::endl;
	child_to_parent->InheritanceFunc(1);

	std::cout << "\n\n��� ������ �Լ�, ������ ParentC�� �����̰� ������ �� �Լ��� ChildC�� ���� ���" << std::endl;

}
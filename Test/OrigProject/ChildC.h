#pragma once
#include "ParentC.h"

class ChildC : public ParentC
{
private:
	std::string child_name_;
	int private_child_id_;

protected:
	int protect_child_id_;

public:
	int public_child_id_;

	ChildC();
	ChildC(std::string parent_name);
	ChildC(std::string parent_name, std::string child_name);
	virtual ~ChildC();

private:
	void PrivateChildFunc();

public:
	void PublicChildFunc();
	void InheritanceFunc(int val1) override;
	//void InheritanceFunc(std::string val1) override;

	void SetChildName(std::string new_child_name) { child_name_ = new_child_name; }
	std::string GetChildName() { return child_name_; }
};
#pragma once
#include <string>
#include <iostream>

class ParentC
{
private:
	std::string parent_name_;
	int private_parent_id_;

protected:
	int protect_parent_id_;

public:
	int public_parent_id_;

	ParentC();
	ParentC(std::string parent_name);
	virtual ~ParentC();

private:
	void PrivateParentFunc();

public:
	void PublicParentFunc();
	virtual void InheritanceFunc(int val1);

	void SetParentName(std::string new_parent_name) { parent_name_ = new_parent_name; }
	std::string GetParentName() { return parent_name_; }
};
#pragma once
#include <iostream>
#include <string>
class treeNode
{
public:
	void setData(std::string);
	void setLeft(int);
	void setRight(int);
	std::string getData();
	int getLeft();
	int getRight();
	~treeNode();
protected:
	std::string data = "";
	int left = NULL;
	int right = NULL;
};


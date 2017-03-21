#include "stdafx.h"
#include "treeNode.h"


void treeNode::setData(std::string value)
{
	data = value;
}
void treeNode::setLeft(int left_)
{
	left = left_;
}
void treeNode::setRight(int right_)
{
	right = right_;
}
std::string treeNode::getData()
{
	return data;
}
int treeNode::getLeft()
{
	return left;
}
int treeNode::getRight()
{
	return right;
}
treeNode::~treeNode()
{
}

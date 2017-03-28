// Quiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>

struct node {
	char data;
	bool invisible = false;
};

int main()
{
	node allNodes[10];
	enum {
		postOrder,
		preOrder,
		inOrder
	};
	srand(time(NULL));
	//randomise the traversal type
	int traversalType = rand() % 3 + 0;
	if(traversalType == postOrder)
	{
		std::cout << "The traversal type is post-order" << std::endl;
	}
	else if (traversalType == preOrder)
	{
		std::cout << "The traversal type is pre-order" << std::endl;
	}
	else if (traversalType == inOrder)
	{
		std::cout << "The traversal type is in-order" << std::endl;
	}
	//Chooses either the alphabet or numbers
	enum {
		alphabet,
		numbers
	};
	std::string values;
	int maxChars;
	int characterSet = rand() % 2 + 0;
	if (characterSet == alphabet)
	{
		values = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		maxChars = 26;
	}
	else if (characterSet == numbers)
	{
		values = "0123456789";
		maxChars = 10;
	}
	int invisibleCount;
	//set difficulty
	enum {
		easy,
		medium,
		hard
	};
	int difficulty = rand() % 3 + 0;
	if (difficulty == easy)
	{
		std::cout << "Difficulty is set to easy" << std::endl;
		invisibleCount = 2;
	}
	else if (difficulty == medium)
	{
		std::cout << "Difficulty is set to medium" << std::endl;
		invisibleCount = 4;
	}
	else if (difficulty == hard)
	{
		std::cout << "Difficulty is set to hard" << std::endl;
		invisibleCount = 6;
	}
	int randomLetter;
	int visibility;
	//set visibility
	enum {
		invisible,
		visible
	};
	//put the random characters into an array of nodes
	for (int i = 0; i < 10; i++)
	{
		int randomChar = rand() % maxChars + 0;
		allNodes[i].data = values[randomChar];
	}
	//set some of the nodes invisible
	while (invisibleCount != 0)
	{
		int i = rand() % 10 + 0;
		if (allNodes[i].invisible == false)
		{
			allNodes[i].invisible = true;
			invisibleCount--;
		}
	}
	//cout the data if it's visible
	for (int i = 0; i < 10; i++)
	{
		if (allNodes[i].invisible == false)
		{
			std::cout << allNodes[i].data << std::endl;
		}
		else
		{
			std::cout << "Invisible Node" << std::endl;
		}
	}
	while (true)
	{

	}
    return 0;
}


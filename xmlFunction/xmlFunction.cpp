// xmlFunction.cpp : XML Function.
//
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <iterator>

int main()
{
	//declaring the type and node values
	std::string type;
	std::vector <int> nodeValuesVector;
	int nodeValues = 0;

	//Getting the user input for traversal type
	std::cout << "Enter a traversal type: ";
	std::cin >> type;

	//Getting the user input for the node values and storing them into a vector
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Enter node values: ";
		std::cin >> nodeValues;

		nodeValuesVector.push_back(nodeValues);
	}

	//Converting the node values vector to a string to be able to store in the xml file
	std::stringstream vectorString;
	copy(nodeValuesVector.begin(), nodeValuesVector.end(), std::ostream_iterator<int>(vectorString, " "));
	std::string nodeValuesString = vectorString.str();

	//Strings to write to the xml file
	std::string xmlTittle = "<?xml version=\"1.0\" encoding=\"UTF - 8\"?>\n";
	std::string xmlString =
		" <TRAVERSALTREE type=\"" + type + "\"> \n"
		"	<NODEVALUES>" + nodeValuesString + "</NODEVALUES>\n"
		"</TRAVERSALTREE>";

	//Writting strings to the traversal xml file
	std::ofstream file("traversal.xml");
	file << xmlTittle << std::endl;
	file << xmlString;
	file.close();

	return 0;
}


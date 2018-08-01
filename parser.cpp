#include "stdafx.h"
#include <iostream>
#include "../core/pre.h"
#include <vector>
#include <string>
#include <fstream>
#include <iostream>

void parseFile(const std::string& filenames)
{
	std::ifstream sceneFile;
	sceneFile.open(filenames);
	std::string contents;
	std::string line;
	int index;

	if (filenames == "-")
	{
		std::cerr << "Error in filename. Please check and try again.";
		exit(1);
	}

	else
	{
		while (std::getline(sceneFile, line))
		{
			std::cout << line << std::endl;
		}
	}

	std::cout << "parsing!!" << std::endl;
}
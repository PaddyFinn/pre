#include "stdafx.h"
#include <iostream>
#include "../core/pre.h"
#include <vector>
#include <string>

void pbrtInit(struct Options& opt)
{
	std::cout << "Initialised" << std::endl;
	std::cout << opt.s_imagefile << std::endl;
	std::string filenames = opt.s_imagefile;
	if (filenames.length() == 0)
	{
		std::cout << "no file specified. I'll deal with this later." << std::endl;
	}

	else
	{
		parseFile(filenames);
	}
}

void pbrtCleanup()
{
	std::cout << "Cleaned Up." << std::endl;
}
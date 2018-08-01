#include <vector>
#include <string>
#ifndef OPTIONS
#define OPTIONS


struct Options
{
	int s_nThreads = 0;
	bool s_quickRender = false;
	bool s_quiet = false;
	bool s_cat = false; 
	bool s_toPly = false;
	std::string s_imagefile = "";
}; 

#endif // !OPTIONS

void pbrtInit(struct Options& opt);	
void pbrtCleanup();
void parseFile(const std::string& filenames);

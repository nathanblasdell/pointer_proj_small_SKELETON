//============================================================================
// Name        : pointer_proj_small.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
using namespace std;
#include "../includes/constants.h"
#include "../includes/stringmanip.h"
#include "../includes/fileio.h"

using namespace KP;

int main(int argc, char *argv[]) {	
	if (argc == 1 && *(argv[1]) == HELP_CHAR) {
		cout << HELP_STRING1 << endl;
		cout << HELP_STRING2 << endl;
		return SUCCESS;
	}
	if (argc != EXPECTED_NUMBER_ARGUMENTS) {
		cout << HELP_STRING2 << endl;
		return FAIL_WRONG_NUMBER_ARGS;
	}
	string infile = argv[1];
	string outfile = argv[2];
	string tag = argv[3];
	string replacement = argv[4];
	string string1 = "";
	readFile(infile, string1);
	int len_src = strlen(string1.c_str());
	int len_tag = strlen(tag.c_str());
	int len_tag_r = strlen(replacement.c_str());
	int numTags = findNumbOccurrences(string1.c_str(), tag.c_str());
	int memory = amountOfMemoryToAllocateForNewString(len_src, numTags, len_tag, len_tag_r);
	char *placeholder = new char[memory];
	replace(string1.c_str(), placeholder, tag.c_str(), replacement.c_str());
	writeFile(outfile, placeholder);
	delete [] placeholder;
	return 0;
}

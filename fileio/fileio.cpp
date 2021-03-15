/*
 * fileio.cpp
 *
 *  Created on: Mar 15, 2021
 *      Author: Nathan
 */
#include "../includes/fileio.h"
#include "../includes/constants.h"
#include <fstream>
#include <iostream>

using namespace std;
/**
 * write data in contents to filename
 *
 * \param filename: where data will go, overwrite if already there
 * \param contents: data to write to filename
 *        hint:  you can get a const char * by calling the method .c_str() on a std::string
 * \return
 *        INVALID_NULL_PTR_DETECTED if contents ==NULL
 *        SUCCESS otherwise
 */
int writeFile(std::string &filename,char *contents) {
	ofstream myFile;
	myFile.open(filename.c_str());

	if (contents == NULL) {
		return INVALID_NULL_PTR_DETECTED;
	}
	else {
		myFile << contents << endl;
		myFile.close();
		return SUCCESS;
	}
}

/**
 * Reads info from filename into contents
 *
 * \param filename where data is
 * \param contents data to write to file
 * \return
 *        CANNOT_OPEN_FILE  if filename cannot be opened
 *        SUCCESS
 */
int readFile(std::string &filename,std::string &contents) {
	fstream myFile;
	myFile.open(filename.c_str(), ios::in);
	if (!myFile.is_open()) {
		return FAIL_CANNOT_OPEN_FILE;
	}
	else {
		while (!myFile.eof()) {
			getline(myFile, contents);
			cout << contents << endl;
		}
		myFile.close();
		return SUCCESS;
	}
}

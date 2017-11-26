#ifndef WORDLOADER_H
#define WORDLOADER_H

#include <string>
#include <fstream>
#include <vector>
#include <iostream>
using namespace std;

class Wordloader {
private:
	vector<string> words;
public:
	Wordloader(string filename);
	void spellcheck(string misspelled_input);
};

#endif


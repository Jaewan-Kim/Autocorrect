#include "wordloader.h"

Wordloader::Wordloader(string filename) {
	ifstream inFile;
	string word;
	inFile.open(filename);
	
	while (!inFile.is_open()) {
		string newfilename;
		cout << "The file directory doesn't exist! Please enter a new one: ";
		cin >> newfilename;
		inFile.open(newfilename);
	}

	while (inFile >> word) {
		words.push_back(word);
	}
	cout << "Word loading completed!" << endl;
}

void Wordloader::spellcheck(string misspelled_input) {
	string closest_word=misspelled_input;
	int same_characters=0;
	int current;
	for (string word : words) {
		if (word[0] == misspelled_input[0]&& abs((word.size()-misspelled_input.size())<3)) {
			current = 0;
			// i need to fix a case when the words contains the same letters and current gets counted more than once 
			for (char c : misspelled_input) {
				for (char x : word) {
					if (c == x) {
						current++;
					}
				}
			}
			if (current > same_characters) {
				closest_word = word;
				same_characters = current;
			}
		}
	}
	cout << "The closest word is " << closest_word << endl;
}
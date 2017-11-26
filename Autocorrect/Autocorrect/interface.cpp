#include "interface.h"

Interface::Interface() {
	string filename;
	cout << "Where do you want to load the library? ";
	cin >> filename;
	Wordloader loader(filename);
	int input = 0;
	while (input != 1) {
		string misspelled_word;
		cout << "Please enter a misspelled word! ";
		cin >> misspelled_word;

		loader.spellcheck(misspelled_word);
		cout << "Press 1 if you'd like to exit, any other character if you want to continue " ;
		cin >> input;

	}

}
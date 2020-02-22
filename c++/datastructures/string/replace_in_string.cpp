#include <string>
#include <iostream>
using namespace std;

int main() {
	string sentence = "CS106B sucks.";
	cout << sentence << endl;
	// Insert "kind of" at position 8 in sentence
	sentence.insert(7, "kind of ");
	cout << sentence << endl;
	// Replace the 10 characters "kind of su"
	// with the string "ro" in sentence
	sentence.replace(7, 10, "ro");
	cout << sentence << endl;
	return 0;
}

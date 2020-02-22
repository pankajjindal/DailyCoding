#include <string>
#include <iostream>
using namespace std;

int main() {
	string appleFruit = "apples";
	string orangeFruit = "ORANGES";
	cout << "Do " << appleFruit << " come before " << orangeFruit << "? ";
	cout << (appleFruit < orangeFruit ? "Yes!" : "Nope....") << endl;
	string lowerOrangeFruit = toLowerCase(orangeFruit);
	cout << "Do " << appleFruit << " come before " << lowerOrangeFruit << "? ";
	cout << (appleFruit < lowerOrangeFruit ? "Yes!" : "Nope....") << endl;
	return 0;
}

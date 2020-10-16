#include <iostream>
#include <string.h>
using namespace std;

class Exception_Handling {
	std::string errorString;
public:
	Exception_Handling() {}
	Exception_Handling(const std::string& errorString) : errorString(errorString) {}
	std::string out_of_range(const char* message) {
		return message;
	}
};

int main() {
	int c;
	Exception_Handling e;
	cin >> c;

	try {
		if (c >= 10) throw e;
	}
	catch (Exception_Handling e) {
		cout << e.out_of_range("Invaild Input!!!");
	}

	return 0;
}
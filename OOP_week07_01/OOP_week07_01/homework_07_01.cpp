#include <fstream>
#include <iostream>
using namespace std;

class AnyString {
	std::string anyString;

public:
	AnyString(const std::string& anyString) : anyString(anyString) {}
	std::string getAnyString() {
		return "Stored String :: " + anyString;
	}
	friend ostream& operator<<(ostream& os, const AnyString& a);
};

ostream& operator<<(ostream& os, AnyString& a) {
	cout << a.getAnyString();
	return os;
}

int main() {
	std::ofstream out("testOveroding.txt");
	AnyString a("Hello, this is operator overloading test!!!");
	out << a << std::endl;

	return 0;
}
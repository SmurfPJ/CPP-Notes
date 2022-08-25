#include <iostream>
#include <string>

using std::cout;
using std::string;


class Internet {
public:
	string opinion() {
		return "Oshawott is the best Unova starter";
	}
};

class Conor: public Internet {
public:
	string opinion() {
		return "Tepig is the best starter";
	}
};

int main() {
	Conor correctOpinion;
	cout << correctOpinion.opinion();
}
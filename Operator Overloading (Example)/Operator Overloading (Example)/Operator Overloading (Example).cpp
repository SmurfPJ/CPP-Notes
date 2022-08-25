#include <iostream>
#include <string>

using std::cout;
using std::string;


class Smort {
private:
	int firstNum = 10;
	int answer;
	
public:
	Smort() {}
	Smort(int i) {
		firstNum = i;
	}

	Smort operator+ (Smort secondNum) {
		Smort num;
		num.answer = firstNum + secondNum.firstNum; // Need firstNum here because answer has no data
		num.answer = num.answer + 2;
		return num;
	}
	void print() {
		//int answer = firstNum + 9;

		cout << "\n9 + 10 = " << answer;
	}
};

int main() {
	Smort smort;
	Smort other(9);
	other = smort + other;


	other.print();
}

//Complex operator + (Complex const& obj) //Follow structure of:  ClassName operator op (operator is the function name)
//											//Takes a paramater of object address
//{
//	Complex res; //Create new instance of className
//	res.real = real + obj.real;	//Assign member variable "real" to variable + object reference variable (Passed via the '+' call)
//	res.imagine = imagine + obj.imagine;	//Assign member variable "imagine" to variable + object reference variable (Passed via the '+' call)
//	return res;	//Return the resulting class to the assigned object
//}
//
//void print() { std::cout << real << " + i" << imagine << '\n'; }	//Output the sum of values real and imagine from two Complex objects
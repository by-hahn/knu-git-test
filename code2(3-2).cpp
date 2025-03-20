#include <iostream>
using namespace std;

class Regtangle {
public:
	int width;
	int height;
	int getArea();
};


int Regtangle::getArea() {
	return width * height;
}

int main() {
	Regtangle rect;
	rect.width = 3;
	rect.height = 5;
	int area = rect.getArea();
	cout << "사각형의 면적은" << area << endl;
}

#include <iostream>
using namespace std;

class Rectangel { //클래스는 소문자로 통일.
    public: //접근지정자 뒤엔 콜론
    int wight;
    int height;
    int getArea();
};// 클래스 선언부에서는 새미콜론 붙임

int Rectangel::getArea() { // 리턴타입은 클래스와 동일하게 한다.
    return wight*height;
}

int main() {
    Rectangel rect;
    rect.wight = 3;
    rect.height = 5;
    cout << "사각형의 면적은" << rect.getArea() << endl;
}
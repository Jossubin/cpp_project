#include <iostream>
using namespace std;

class ConverSecond {
    private:
    int hour;
    int minute;
    int second;
    public:
    ConverSecond();
    int getResult();
    void setData();
};

ConverSecond::ConverSecond() {
    hour = 0; minute = 0; second = 0;
}

void ConverSecond::setData() {
    cout << "시(hour) 입력: ";
    cin >> hour;
    cout << "분(minute) 입력: ";
    cin >> minute;
    cout << "초(second) 입력: ";
    cin >> second;
}

int ConverSecond::getResult(){
    return hour*3600 + minute*60 + second;
}
int main() {
    
    ConverSecond a;
    a.setData();
    cout << "입력하신 시간은 총" << a.getResult() << "초 입니다."<<endl;
    
    ConverSecond b;
    cout << "기본 시간은 총" << b.getResult() << "초 입니다." <<endl;
}
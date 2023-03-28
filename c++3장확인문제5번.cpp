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
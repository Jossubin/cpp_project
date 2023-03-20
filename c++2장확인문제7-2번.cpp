#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, pass, re_pass;
    cout << "이름입력 :";
    getline(cin, name);
    cout << "암호입력 :";
    getline(cin, pass);
    cout << "다시입력 :";
    getline(cin, re_pass);
    
    if (pass == re_pass){
        cout << name << "님께서 로그인하셨습니다.";
    }
    else{
        cout << name << "님, 다시 입력하세요.";
    }
    return 0;
}
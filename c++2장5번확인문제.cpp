#include <iostream>

using namespace std;

int main()
{
    int kor, eng, mat, sum = 0;
    float avg = 0.0;
    
    cout << "국영수 점수 입력: ";
    cin >> kor >> eng >> mat;
    
    sum = kor + eng + mat;
    avg = sum / 3.;
    
    cout << "합계 : " << sum << endl;
    cout << "평균 : " << avg << endl;
    
    

    return 0;
}
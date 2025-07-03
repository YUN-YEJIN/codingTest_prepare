#include <iostream>
using namespace std;

int main()
{
    int N;
    string numbers;   //왜 numbers는 초기화 안해? 입력 받을거니까!

    while (true) {

        cin >> N;
        cin >> numbers;

        if (N == numbers.length()) {   //두번째 과제
            break;
        }
        else { cout << "N개의 숫자를 다시 작성하시오: "; }
    }

    int sum = 0;       //sum은 0으로 초기화를 해야 올바른 계산이 가능
    for (int i = 0; i < numbers.length(); i++)
    {
        sum = sum +( numbers[i] - '0' ); //string형(ASKII code)을 int형으로 변환
    }
    cout << sum << "\n";
}
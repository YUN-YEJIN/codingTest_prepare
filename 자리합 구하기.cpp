#include <iostream>
using namespace std;

int main()
{
    int N;
    string numbers;   //�� numbers�� �ʱ�ȭ ����? �Է� �����Ŵϱ�!

    while (true) {

        cin >> N;
        cin >> numbers;

        if (N == numbers.length()) {   //�ι�° ����
            break;
        }
        else { cout << "N���� ���ڸ� �ٽ� �ۼ��Ͻÿ�: "; }
    }

    int sum = 0;       //sum�� 0���� �ʱ�ȭ�� �ؾ� �ùٸ� ����� ����
    for (int i = 0; i < numbers.length(); i++)
    {
        sum = sum +( numbers[i] - '0' ); //string��(ASKII code)�� int������ ��ȯ
    }
    cout << sum << "\n";
}
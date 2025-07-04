// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;   //자연수가 주어짐

    int count = 1; //(=우리가 원하는 결과) 본인 자신을 미리 카운트

    //start_idx랑 end_idx가 오른쪽으로만 한번 움직이니까 O(n)이 나온다.
    int start_idx = 1;
    int end_idx = 1;
    int sum = 1;

    while (end_idx < N) {

        if (sum < N) {
            end_idx= end_idx + 1;
            sum = sum + end_idx;
        }
        else if (sum == N) {
            count += 1;

            end_idx = end_idx + 1;
            sum = sum + end_idx;
            
        }
        else {
            sum = sum - start_idx;      // if의 경우와 순서가 "의도적"으로 다른것. 유의.
            start_idx = start_idx + 1;
        }

    }
    cout << count << "\n";

    return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

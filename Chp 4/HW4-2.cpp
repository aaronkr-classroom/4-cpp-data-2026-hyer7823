#include <iostream>   // 입출력을 위한 헤더 (cout, endl 등)
#include <iomanip>    // setw 함수 사용을 위한 헤더

using namespace std;

int main() {

    // ====== 제목(헤더) 출력 ======
    // setw(10): 출력할 내용을 10칸 너비로 맞춤 (오른쪽 정렬)
    // setw(15): 출력할 내용을 15칸 너비로 맞춤
    cout << setw(10) << "Value"   // 첫 번째 열 제목
        << setw(15) << "Square"  // 두 번째 열 제목
        << endl;

    // 구분선 출력
    cout << "---------------------------" << endl;

    // ====== 1부터 100까지 반복 ======
    for (int i = 1; i <= 100; i++) {

        // i 값과 i의 제곱(i*i)을 각각 출력
        // setw를 사용하여 열을 맞춰 정렬
        cout << setw(10) << i        // 첫 번째 열: 숫자 i
            << setw(15) << i * i   // 두 번째 열: i의 제곱
            << endl;
    }

    // 프로그램 정상 종료
    return 0;
}

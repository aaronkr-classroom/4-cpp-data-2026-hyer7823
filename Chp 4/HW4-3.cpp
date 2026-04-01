#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int max = 1000;  // 출력할 최대 값

    // ====== 자리수 계산 ======
    int valueWidth = 0;   // 값(i)의 자리수
    int squareWidth = 0;  // 제곱값(i*i)의 자리수

    int temp;

    // 값(max)의 자리수 계산
    temp = max;
    while (temp > 0) {
        valueWidth++;
        temp /= 10;
    }

    // 제곱값(max*max)의 자리수 계산
    temp = max * max;
    while (temp > 0) {
        squareWidth++;
        temp /= 10;
    }

    // 보기 좋게 여유 공간 추가
    valueWidth += 2;
    squareWidth += 2;

    // ====== 헤더 출력 ======
    cout << setw(valueWidth) << "Value"
        << setw(squareWidth) << "Square"
        << endl;

    cout << "----------------------------------------" << endl;

    // ====== 1부터 max까지 출력 ======
    for (int i = 1; i <= max; i++) {

        cout << setw(valueWidth) << i        // 값 출력
            << setw(squareWidth) << i * i  // 제곱 출력
            << endl;
    }

    return 0;
}

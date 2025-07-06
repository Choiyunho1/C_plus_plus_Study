#include <iostream>
#include <string>

int main() {
    std::string str = "Old stirng";  // 오타도 유지

    str[15] = 'A';  // 잘못된 인덱스 접근 — 런타임 에러 가능

    str += "& New String";

    std::cout << str << std::endl;

    return 0;
}

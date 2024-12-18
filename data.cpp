#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

int main() {
    // second
    // 初始化随机数生成器

    // freopen("in10.in", "w", stdout);

    // ne[n - 1] = 0;
    // int n = 26;
    // std::cout << n << '\n';
    // for (int i = 0; i < 26; i++) {
    //     std::cout << (char)('a' + i);
    // }

    // ne[n - 1] = n - 2;
    // int n = 5000;
    // std::cout << n << '\n';
    // for (int i = 0; i < n; i++) std::cout << 'a';

    // int n = 1600 * 3;
    // std::cout << n << '\n';
    // for (int i = 0; i < 1600; i++) std::cout << "lzy";

    std::srand(std::time(nullptr));

    // 生成一个1到1000的随机整数
    int n = std::rand() % 2000 + 400;
    std::cout << n * 2 << std::endl;

    // 生成一个长度为n的随机字符串
    std::string str(n, ' ');
    for (int i = 0; i < n; ++i) {
        char ch = 'a' + std::rand() % 26;  // 随机生成a到z之间的字符
        str[i] = (ch);
    }
    str = str + str;
    std::cout << str << std::endl;

    return 0;
}

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

int main() {
    // second
    // ��ʼ�������������

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

    // ����һ��1��1000���������
    int n = std::rand() % 2000 + 400;
    std::cout << n * 2 << std::endl;

    // ����һ������Ϊn������ַ���
    std::string str(n, ' ');
    for (int i = 0; i < n; ++i) {
        char ch = 'a' + std::rand() % 26;  // �������a��z֮����ַ�
        str[i] = (ch);
    }
    str = str + str;
    std::cout << str << std::endl;

    return 0;
}

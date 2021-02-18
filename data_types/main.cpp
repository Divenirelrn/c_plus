#include <iostream>
using namespace std;

/*
 * 整型：
 *    short
 *    int
 *    long
 *    long long
 *
 * sizeof:
 *    sizeof(int)
 *
 * 实型：
 *    float
 *      float f1 = 3.14f;
 *    double
 *
 * 字符型：
 *    char ch = 'a';
 *    字符型变量是将ASCII码放入存储单元
 *
 * 转义字符：
 *    \n
 *    \t
 *    \\
 *
 * 字符串型：
 *    char a[] = "nihao, liruonan!";
 *    #include <string>
 *    string a = "nihao, liruonan!";
 *
 * 布尔类型：
 *   bool flag = true;
 *
 * 输入：
 *   cin >> a;
 */

int main() {
    int a;
    cout << "Please input:" << endl;
    cin >> a;
    cout << a << endl;
    return 0;
}

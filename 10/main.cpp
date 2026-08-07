#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    #endif
    string str;
    
    cout << "请输入一个字符串或数字：";
    cin >> str;
    
    // 双指针法：一个从前往后，一个从后往前
    int left = 0;
    int right = str.length() - 1;
    bool isPalindrome = true;
    
    while (left < right) {
        if (str[left] != str[right]) {
            isPalindrome = false;
            break;  // 发现不同立即退出
        }
        left++;   // 左指针向右移动
        right--;  // 右指针向左移动
    }
    
    // 输出结果
    if (isPalindrome) {
        cout << "\"" << str << "\" 是回文！" << endl;
    } else {
        cout << "\"" << str << "\" 不是回文" << endl;
    }
    
    system("pause");
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int count = 0,a;
    
    cout << "请输入字符串: ";
    getline(cin, str);
    
    // 遍历每个字符，统计元音
    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);  // 转小写方便比较
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    
    cout << "元音字母数量: " << count << endl;
    cout << "按任意键返回" << endl;
    cin >> a;
    return 0;
}

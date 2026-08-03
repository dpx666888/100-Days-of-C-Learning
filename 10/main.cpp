#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "���ļ������������ָ�����ͷ�������ͬ���ַ���" << endl;
    cout << "������һ���ַ��������֣�";
    cin >> str;
    
    // ˫ָ�뷨��һ����ǰ����һ���Ӻ���ǰ
    int left = 0;
    int right = str.length() - 1;
    bool isPalindrome = true;
    
    while (left < right) {
        if (str[left] != str[right]) {
            isPalindrome = false;
            break;  // ���ֲ�ͬ�����˳�
        }
        left++;   // ��ָ�������ƶ�
        right--;  // ��ָ�������ƶ�
    }
    
    // ������
    if (isPalindrome) {
        cout << "\"" << str << "\" �ǻ��ģ�" << endl;
    } else {
        cout << "\"" << str << "\" ���ǻ���" << endl;
    }
    
    system("pause");
    return 0;
}
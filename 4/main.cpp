#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int year,a;
    char choice;
    
    do {
        // 清屏（可选，Windows用cls，Linux/Mac用clear）
        // system("clear");
        
        cout << "\n========================================" << endl;
        cout << "       闰年判断程序" << endl;
        cout << "========================================" << endl;
        
        // 输入年份并做验证
        cout << "请输入年份（1-9999）: ";
        cin >> year;
        
        // 输入验证
        while (cin.fail() || year < 1 || year > 9999) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "输入无效！请输入1-9999之间的整数: ";
            cin >> year;
        }
        
        // 多重判断逻辑
        bool isLeap = false;
        string reason;
        
        if (year % 400 == 0) {
            isLeap = true;
            reason = "能被400整除";
        } else if (year % 100 == 0) {
            isLeap = false;
            reason = "能被100整除但不能被400整除";
        } else if (year % 4 == 0) {
            isLeap = true;
            reason = "能被4整除但不能被100整除";
        } else {
            isLeap = false;
            reason = "不能被4整除";
        }
        
        // 输出详细结果
        cout << "\n----------------------------------------" << endl;
        cout << "年份: " << year << endl;
        cout << "判断依据: " << reason << endl;
        cout << "----------------------------------------" << endl;
        
        // 美化输出
        cout << "\n【结果】" << endl;
        if (isLeap) {
            cout << "? " << year << " 是闰年！" << endl;
            cout << "  → 该年有 366 天，2月有 29 天" << endl;
        } else {
            cout << "? " << year << " 不是闰年" << endl;
            cout << "  → 该年有 365 天，2月有 28 天" << endl;
        }
        
        // 额外信息：显示最近几个闰年
        cout << "\n----------------------------------------" << endl;
        cout << "【附近闰年参考】" << endl;
        int nearbyYears[] = {year - 4, year - 1, year + 1, year + 4};
        for (int i = 0; i < 4; i++) {
            int y = nearbyYears[i];
            if (y >= 1 && y <= 9999) {
                bool isLeapNear = (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
                cout << "  " << y << ": " << (isLeapNear ? "闰年" : "平年") << endl;
            }
        }
        
        // 询问是否继续
        cout << "\n----------------------------------------" << endl;
        cout << "是否继续判断？(y/n): ";
        cin >> choice;
        
        // 处理输入
        while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
            cout << "请输入 y 或 n: ";
            cin >> choice;
        }
        
    } while (choice == 'y' || choice == 'Y');
    
    cout << "\n感谢使用闰年判断程序！再见！" << endl;
    cout << "========================================" << endl;
        cout << "请按任意键结束...";
        cin >> a;  // 等待用户输入以结束程序
    
    return 0;
}
#include <iostream>
using namespace std;

int get_month(char a[10]);
int get_day(char b[10]);

int main() {

    char date[5];
    int month, day;
    while (cin >> date)
    {
        month = get_month(date);
        // cout << month << endl;
        day = get_day(date);
        // cout << day << endl;
        cout << month << "/" << day << endl;

        // month, day 都是 int, 接下來只剩判斷星座了
        
    }
    
 return 0;
}

int get_month(char a[10]){
    int count = 0;
    int temp_1, temp_2;
    char result[2];
    int f_result;
    while (1)
    {
        if (a[count] != '/')
        {
            result[count] = a[count];
        }
        else
        {
            break;
        }
        count += 1;
    }
    count = 0;
    while (1)
    {
        if (result[count] != '\0')
        {
            count += 1;
        }
        else
        {
            break;
        }
    }
    if (count == 1)
    {
        return result[0]-'0';
    }
    else
    {
        temp_1 = result[0]-'0';
        temp_2 = result[1]-'0';
        f_result = temp_1 + temp_2;
        if (f_result == 1)
        {
            return 10;
        }
        else if (f_result == 2)
        {
            return 11;
        }
        else
        {
            return 12;
        }
    }
}

int get_day(char b[10]){
    int count_1 = 0;
    int count_2 = 0;
    char result[2];
    int f_result;
    int key = 0;
    int temp_1, temp_2;
    while (b[count_1] != '\0')
    {
        if (b[count_1] == '/')
        {
            key = 1;
        }
        if (key)
        {
            result[count_2] = b[count_1 + 1];
            count_2 += 1;
        }
        count_1 += 1;
    }
    temp_1 = (result[0]-'0')*10;
    temp_2 = (result[1]-'0')*1;
    f_result = temp_1 + temp_2;
    return f_result;
}

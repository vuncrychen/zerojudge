#include <iostream>
using namespace std;

int get_month(char a[10]);
int get_day(int, char b[10]);
int print_result(int, int);

int main() {

    char date[5];
    int month, day;
    while (cin >> date)
    {
        month = get_month(date);
        // cout << month << endl;
        day = get_day(month, date);
        // cout << day << endl;
        print_result(month, day);
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

int get_day(int month, char b[10]){
    int count = 0;
    while (b[count] != '\0')
    {
        count += 1;
    }
    if ((month >= 10 && count == 5) || (month < 10 && count == 4))
    {
        return (b[count-2]-'0')*10+(b[count-1]-'0')*1;
    }
    if ((month >= 10 && count == 4) || (month < 10 && count == 3))
    {
        return (b[count -1]-'0');
    }
}

int print_result(int m, int d){
        switch (m)
        {
        case 1:
            if (d>0&&d<=20)
            {
                cout << "摩羯座" << endl;
            }
            else
            {
                cout << "水瓶座" << endl;
            }
            break;
        case 2:
            if (d>0&&d<=19)
            {
                cout << "水瓶座" << endl;
            }
            else
            {
                cout << "雙魚座" << endl;
            }
            break;
        case 3:
            if (d>0&&d<=20)
            {
                cout << "雙魚座" << endl;
            }
            else
            {
                cout << "牡羊座" << endl;
            }
            break;
        case 4:
            if (d>0&&d<=20)
            {
                cout << "牡羊座" << endl;
            }
            else
            {
                cout << "金牛座" << endl;
            }
            break;
        case 5:
            if (d>0&&d<=21)
            {
                cout << "金牛座" << endl;
            }
            else
            {
                cout << "雙子座" << endl;
            }
            break;
        case 6:
            if (d>0&&d<=21)
            {
                cout << "雙子座" << endl;
            }
            else
            {
                cout << "巨蟹座" << endl;
            }
            break;
        case 7:
            if (d>0&&d<=22)
            {
                cout << "巨蟹座" << endl;
            }
            else
            {
                cout << "獅子座" << endl;
            }
            break;
        case 8:
            if (d>0&&d<=21)
            {
                cout << "獅子座" << endl;
            }
            else
            {
                cout << "處女座" << endl;
            }
            break;
        case 9:
            if (d>0&&d<=23)
            {
                cout << "處女座" << endl;
            }
            else
            {
                cout << "天秤座" << endl;
            }
            break;
        case 10:
            if (d>0&&d<=23)
            {
                cout << "天秤座" << endl;
            }
            else
            {
                cout << "天蠍座" << endl;
            }
            break;
        case 11:
            if (d>0&&d<=22)
            {
                cout << "天蠍座" << endl;
            }
            else
            {
                cout << "射手座" << endl;
            }
            break;
        case 12:
            if (d>0&&d<=22)
            {
                cout << "射手座" << endl;
            }
            else
            {
                cout << "摩羯座" << endl;
            }
            break;
        default:
            break;
        }
}
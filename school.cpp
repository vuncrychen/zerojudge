#include <iostream>
using namespace std;

int main() {

    int month, day;

    cout << "請輸入出生月: ";
    cin >> month;
    cout << "請輸入出生日: ";
    cin >> day;

    if ((month<1||month>12)||(day<1||day>31)||(month==2&&day>29)
    ||(month==4&&day>30)||(month==6&&day>30)||(month==9&&day>30)
    ||(month==11&&day>30))
    {
        cout << "生日錯誤!" << endl;
        return 0;
    }
    switch (month)
    {
    case 1:
        if (day<=20)
        {
            cout << "摩羯座" << endl;
        }
        else
        {
            cout << "水瓶座" << endl;
        }
        break;
    case 2:
        if (day<=19)
        {
            cout << "水瓶座" << endl;
        }
        else
        {
            cout << "雙魚座" << endl;
        }
        break;
    case 3:
        if (day<=20)
        {
            cout << "雙魚座" << endl;
        }
        else
        {
            cout << "牡羊座" << endl;
        }
        break;
    case 4:
        if (day<=20)
        {
            cout << "牡羊座" << endl;
        }
        else
        {
            cout << "金牛座" << endl;
        }
        break;
    case 5:
        if (day<=21)
        {
            cout << "金牛座" << endl;
        }
        else
        {
            cout << "雙子座" << endl;
        }
        break;
    case 6:
        if (day<=21)
        {
            cout << "雙子座" << endl;
        }
        else
        {
            cout << "巨蟹座" << endl;
        }
        break;
    case 7:
        if (day<=22)
        {
            cout << "巨蟹座" << endl;
        }
        else
        {
            cout << "獅子座" << endl;
        }
        break;
    case 8:
        if (day<=21)
        {
            cout << "獅子座" << endl;
        }
        else
        {
            cout << "處女座" << endl;
        }
        break;
    case 9:
        if (day<=23)
        {
            cout << "處女座" << endl;
        }
        else
        {
            cout << "天秤座" << endl;
        }
        break;
    case 10:
        if (day<=23)
        {
            cout << "天秤座" << endl;
        }
        else
        {
            cout << "天蠍座" << endl;
        }
        break;
    case 11:
        if (day<=22)
        {
            cout << "天蠍座" << endl;
        }
        else
        {
            cout << "射手座" << endl;
        }
        break;
    case 12:
        if (day<=22)
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

 return 0;
}
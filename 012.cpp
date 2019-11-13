#include <iostream>
using namespace std;

int step_1(char);
int step_2(int);
int step_3(char, char, char, char, char, char, char, char);
int step_4(int, int, int);
int step_5(int);

int main() {

    char ID[10];

    int r1;
    int r2;
    int r3;
    int r4;
    int r5;

    while (cin >> ID)
    {
        r1 = step_1(ID[0]);
        // cout << r1 << endl;
        r2 = step_2(r1);
        // cout << r2 << endl;
        r3 = step_3(ID[1], ID[2], ID[3], ID[4], ID[5], ID[6], ID[7], ID[8]);
        // cout << r3 << endl;
        r4 = step_4(r2, r3, ID[9]);
        // cout << r4 << endl;
        r5 = step_5(r4);
    }
    
 return 0;
}

int step_1(char a){

    // int A=10; 
    // int B=11; 
    // int C=12; 
    // int D=13; 
    // int E=14; 
    // int F=15; 
    // int G=16; 
    // int H=17;

    for (int i = 65; i <= 72; i++)
    {
        if ((int)a == i)
        {
            return (int)a-55;
        }
    }

    // int I=34;

    if ((int)a == 73)
    {
        return 34;
    }

    // int J=18;
    // int K=19;
    // int L=20;
    // int M=21;
    // int N=22;

    for (int j = 74; j <= 78; j++)
    {
        if ((int)a == j)
        {
            return (int)a-56;
        }
    }

    // int O=35;

    if ((int)a == 79)
    {
        return 35;
    }
    
    // int P=23;
    // int Q=24;
    // int R=25;
    // int S=26;
    // int T=27;
    // int U=28;
    // int V=29;

    for (int k = 80; k <= 86; k++)
    {
        if ((int)a == k)
        {
            return (int)a-57;
        }
    }

    // int W=32;

    if ((int)a == 87)
    {
        return 32;
    }

    // int X=30;
    // int Y=31;

    if ((int)a == 88)
    {
        return 30;
    }
    else if ((int)a == 89)
    {
        return 31;
    }
    
    // int Z=33;

    if ((int)a == 90)
    {
        return 33;
    }

}

int step_2(int a){

    int count = 1;
    int temp;
    for (int i = 10; i <= 30; i+=10)
    {
        if (a - i < 10)
        {
            temp = a-i;
            break;
        }
        count += 1;
    }
    return temp*9+count;

}

int step_3(char a, char b, char c, char d, char e, char f, char g, char h){

    return 
    (a-'0')*8+
    (b-'0')*7+
    (c-'0')*6+
    (d-'0')*5+
    (e-'0')*4+
    (f-'0')*3+
    (g-'0')*2+
    (h-'0')*1;

}

int step_4(int a, int b, int c){

    return a+b+c;

}

int step_5(int a){

    if (a % 10 == 0)
    {
        cout << "real";
    }
    if (a % 10 != 0)
    {
        cout << "fake";
    }
    
}
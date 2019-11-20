#include <iostream>
using namespace std;

int is_even(int);
int judge(int, int);

int main() {

  int a, b;
  while(cin >> a >> b){
    switch(judge(a, b))
    {
      case 1:
        cout << (b-a)/2 << endl;
        break;
      case 2:
        cout << ((b+1)-a)/2 << endl;
        break;
      case 3:
        cout << (b-(a+1))/2+1 << endl;
        break;
      case 4:
        cout << (((b+1)-(a+1))/2)+1 << endl;
      default:
        break;
    }
  }
  return 0;

}

int is_even(int a){
  if(a%2==0)
  {
    return 1;
  }
  return 0;
}

int judge(int a, int b){
  if(is_even(a)==0&&is_even(b)==0)
  {
    return 1;
  }
  if(is_even(a)==0&&is_even(b))
  {
    return 2;
  }
  if(is_even(a)&&is_even(b)==0)
  {
    return 3;
  }
  if(is_even(a)&&is_even(b))
  {
    return 4;
  }
}

#include <iostream>
using namespace std;

int main() { 
  int n= 50;
  int sum = 0;

  for(int i=1; i<=n; i++) {
   sum += i;
   if(i == 5) {
      break;
   }


  }
cout << "sum = " << sum << endl;

return 0;
}

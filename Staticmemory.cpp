#include <iostream>

using namespace std;

void static_example() {
   static int count = 0;
   count++;
   cout << "Count is: " << count << endl;
}

int main() {
   for(int i = 0; i < 5; i++) {
      static_example();
   }
   return 0;
}

#include <iostream>
#include <string>
using namespace std;

/*원하는 커피의 종류와 개수를 입력받고 최종금액을 출력함.
원하는 목표 금액 입력받은 후 달성했을시 판매를 종료함*/
int main() {
   string menu;
   int cnt, total=0, goal, money;

   cout << "Enter goal amount today: ";
   cin >> goal;
   
   while (total <= goal) {
      cout << "Menu: Espresso: 4000, Americano: 4500, Cafuccino: 5000" << endl;

      cout << "What item? >>";
      cin >> menu;

      cout << "How many?";
      cin >> cnt;

      if (menu == "Espresso" || menu == "espresso") {
         money = 4000 * cnt;
         total += money;
         cout << "Pay for" << money <<"\n" << endl;
      }
      if (menu == "Americano" || menu == "americano") {
         money = 4500 * cnt;
         total += money;
         cout << "Pay for" << money << "\n" << endl;
      }
      if (menu == "Cafuccino" || menu == "cafuccino") {
         money = 5000 * cnt;
         total += money;
         cout << "Pay for " << money << "\n" << endl;
      }
   } 

   cout << "Great Job! You earned" << total << endl;
      
   return 0;
}
#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
      int number;
      number = rand() % 1000 + 1;

      int guess;

      do {

            cout << "Enter a number you want to guess between 1 & 1000 "<<endl;
            cin >> guess;

            if (guess < number)

                  cout << "Your estimate is less, than the random number" << endl;

            else if (guess > number)

                  cout << "Your estimate is more, than the random number" << endl;

            else

                  cout << "Your guess is right!" << endl;

      } while (guess != number);
      
      return 0;

}
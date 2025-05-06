#include <iostream>
#include <vector>
using namespace std;
int main() {
  char input;
  int randomNumber = 0;
  int choice;
  int count;
  do {
    srand(time(NULL));
    randomNumber = rand() % 100 + 1;
    cout << randomNumber << endl;
    do {
      cout << "Enter a number from 1-100:" << endl;
      cin >> choice;
      count--;
      if (choice > randomNumber) {
        cout << "Try again - make it lower!!!" << endl;
      } else if (choice < randomNumber) {
        cout << "Try again - make it higher!!!" << endl;
      } else {
       cout << "Congrats!!!" << endl;
      }
    } while (choice != randomNumber);
    if (choice != randomNumber) {
      cout << " Sorry you have run out of guess!!!!" << endl;
    }
    cout << " would You like to play again? Y/N: ";
    cin >> input;
  } while (input == 'Y');
}

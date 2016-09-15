//ZhangRichard Guessing Game
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>                               
//includes act similar to imports from Java
using namespace std;

int main()
{
  srand((int)time(NULL)); //set the random seed first
  int initialGuess = rand() % 101; //creates the actual random number between 0 and 100
  int guess; //user's guess
  int counter = 0; //counts the number of terms t
  char input[5];
  bool stillPlaying = true;
  
  while (stillPlaying == true) {
    initialGuess = rand() % 101;
    while (initialGuess != guess) {
    cout << "Please enter a number between 0 and 100" << endl;
    cin >> guess;
      if (guess < 0 || guess > 100) {
        cout << "Please enter a number between 0 and 100" << endl;
        counter++;
      }
      else if(guess < initialGuess) {
        cout << "Number entered is too low" << endl;
        counter++;
      } 
      else if (guess > initialGuess) {
        cout << "Number entered is too high" << endl;
        counter++;
      }
      if (guess == initialGuess) {
        cout << "Number is correct!" << endl;
        counter++;
        cout << "Number of Tries:" << counter << endl;
        cout << "Do you want to play again? Y/N" << endl;
        cin >> input;
        if (input[0] == 'Y') {
          stillPlaying = true;
          guess = -1;
        }
        else {
          stillPlaying = false;
        }
      }
    }
  }
}

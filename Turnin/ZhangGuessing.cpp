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
  bool stillPlaying = true; //sets the boolean variable to be true
  
  //while playing is true
  while (stillPlaying == true) {
    initialGuess = rand() % 101; //creates a random guess in between 0 and 100
    while (initialGuess != guess) { //if the created guess was not equal
    cout << "Please enter a number between 0 and 100" << endl;
    cin >> guess; //takes in user input and registers as guess
      if (guess < 0 || guess > 100) { //if the guess is less than 0 or greater than 100
        cout << "Please enter a number between 0 and 100" << endl;
        counter++; //adds guess to counter
      }
      else if(guess < initialGuess) { //if guess was less than random number
        cout << "Number entered is too low" << endl;
        counter++;
      } 
      else if (guess > initialGuess) { //if guess was greater than random number
        cout << "Number entered is too high" << endl;
        counter++;
      }
      if (guess == initialGuess) { //if guess was equal to guess
        cout << "Number is correct!" << endl;
        counter++;
        cout << "Number of Tries:" << counter << endl;
        cout << "Do you want to play again? Y/N" << endl;
        cin >> input;
        if (input[0] == 'Y') {
          stillPlaying = true;
          guess = -1; //changes guess value, reintializes the game
        }
        else {
          stillPlaying = false; //if false, exit game
        }
      }
    }
  }
}

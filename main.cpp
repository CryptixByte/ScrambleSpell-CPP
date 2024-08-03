#include <iostream>
#include <string>

using namespace std;

int main()
{
  /*This are the variables you want to modify if you want to change the input of the program make sure
  that the constant integer value size is the same as the size of the array or errors will occur*/
  const int size = 8;
  const string input[size] = {"F", "i", "r", "e", "b", "o", "l", "t"};
  string inputCopyA[size] = {"F", "i", "r", "e", "b", "o", "l", "t"};
  string inputCopyB[size] = {"F", "i", "r", "e", "b", "o", "l", "t"};

  /*This basically just welcomes the user running the program 
  and lists the outputs from the following I've designed below*/
  cout << "  Welcome To ScrambleSpell" << endl;
  cout << "Created By MS Aka CryptixByte" << endl;
  cout << "~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~" << endl;
  cout << "Original: ";
  for (int i = 0; i < size; i++) {
    cout << input[i];
  }
  cout << endl;

//This reverses the order of the array
  string reverseOutput[size];
  int reverseIndex = size - 1;
  cout << "Simple Reverse Output: ";
  for (int i = 0; i < size; i++) {
    reverseOutput[reverseIndex] = input[i];
    reverseIndex--;
  } for (int i = 0; i < size; i++) {
    cout << reverseOutput[i];
  }
  cout << endl;

//This pushes forward the chars listed in the array including pushing the last char to the front;
  string forwardPush[size];
  int forwardPushIndex = size + 1;
  cout << "Forward Push Output: ";
  for (int i = 0; i < size; i++) {
    forwardPush[forwardPushIndex % size] = input[i];
    forwardPushIndex++;
  } for (int i = 0; i < size; i++) {
    cout << forwardPush[i];
  }
  cout << endl;

//This reverses and swaps the first and last chars listed within the array
  string swapReverse[size];
  string firstCharA = inputCopyA[0];
  int swapReverseIndex = size - 1;
  cout << "Swap & Reverse Output: ";
  inputCopyA[0] = inputCopyA[swapReverseIndex];
  inputCopyA[swapReverseIndex] = firstCharA;
  for (int i = 0; i < size; i++) {
    swapReverse[swapReverseIndex] = inputCopyA[i];
    swapReverseIndex--;
  } for (int i = 0; i < size; i++) {
    cout << swapReverse[i];
  }
  cout << endl;

//This pushes forward the chars listed in the array including swapping the first and last chars of the array
  string pushForwardSwap[size];
  string firstCharB = inputCopyB[0];
  int pushFwdSwapIndex = size + 1;
  cout << "Forward Push & Swap Output: ";
  inputCopyB[0] = inputCopyB[size - 1];
  inputCopyB[size - 1] = firstCharB;
  for (int i = 0; i < size; i++) {
    pushForwardSwap[pushFwdSwapIndex % size] = inputCopyB[i];
    pushFwdSwapIndex++;
  } for (int i = 0; i < size; i++) {
    cout << pushForwardSwap[i];
  }
  cout << endl;

}


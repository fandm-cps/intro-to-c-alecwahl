#include <stdio.h> //These are C libraries
//#include <cstdio> //Can use this also
#include <stdlib.h>
#include <iostream>

int main(int argc, char* argv[])
{
  int guess = 0;
  int num = 12;
  while(guess != num){
    puts("Enter a number between 1 and 20 t0 guess!");
    std::cin >> guess;

    if(guess < num){
      puts("Your guess was too small");
    }else{
      puts("Your guess was too big!");
    }

  }
  
  puts("You got it great job!");
  return 0;
}

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{

    srand(time(0));

    int randomNumber = rand() % 100 + 1;
  
    int guess;
    int attempts = 0;

    cout<<"Welcome to the Number Guessing Game! "<<endl;
    cout<<endl;

    do{
        cout<<"Enter Your guess (between 1 and 100): ";
        cout<<endl;
        cin>>guess;

        if(guess > randomNumber){
            cout<<"Too high! Try again: "<<endl;
        }
        else if(guess < randomNumber){
            cout<<"Too low! Try again: "<<endl;
        }

        attempts++;

    }
    while(guess != randomNumber);

    cout<<"Congratulations! You guessed the number in "<<attempts<<" attempts:"<<endl;
    cout<<endl;

    return 0;
}
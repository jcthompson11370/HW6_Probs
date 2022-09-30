//Programer: John Thompson
//Description: HW6_P1_RockPaperScissors
//Date: 09/27/2022

/******************************************************************************
Description: Rock, Paper, Scissors, Lizard, Spock Game
             This game is unfinished. Follow along with CSCI130_RockPaperScissors2.pdf
             to complete the game.
Last Modified by: Dr. M
Last Modified on: 9/2020
*******************************************************************************/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

//////////////////// Prototype Functions /////////////////////////////////////
void TranslatePick(int flag_who, char selection);
char ComputerSelectRPSLK();
void DetermineWinner(char uP, char cP);
void GiveFeedback(char uP, char cP);
//////////////////// MAIN ////////////////////////////////////////////////////
int main()
{
    // declare vars
    char userPick;                  // user's selection for game
    bool valid_pick = false;        // flag controlled while loop for obtaining user input
    char computerPick;              // randomly selected computer selection for game
    
    
    
    // Display rules of the game.
    cout << "It's time to play Rock, Paper, Scissors, Lizard, Spock!" << endl;
    cout << "Use R (for Rock), P (for Paper), S (for Scissors), ";
    cout << "L (for Lizard), and K (for Spock)." << endl;
    
    // Obtain userPick. Prompt until a valid selection is made.
    while (valid_pick == false)
    {
        cout << "You pick: ";
        cin >> userPick;
        
        if ( (userPick == 'R') || (userPick == 'P') || (userPick == 'S' ) ||
            (userPick == 'L') || (userPick == 'K') )
        {
            valid_pick = true;
        }
        else
            cout << "Invalid Selection. Try again. " << endl;
     
    }
    
    // Repeat selection back to user.
    TranslatePick(0, userPick);
    
    // Obtain computer selection.
    computerPick = ComputerSelectRPSLK();
    TranslatePick(1, computerPick); // Inform user of computer selection
    
    // HANDOUT (PART A): Determine the winner of the game.
  DetermineWinner(userPick, computerPick);
    // HANDOUT (PART B): Inform the user who won.    
    // HANDOUT (PART C): Randomly display celebratory messages if user won.
  GiveFeedback(userPick, computerPick);
  return 0;
}

void DetermineWinner(char uP, char cP)
{  
  if (uP == 'R')
    {
      if (cP == 'R')      
        cout << "Tie. " << endl;
      else if ((cP == 'K')||(cP == 'P'))
        cout << "You lose. " << endl;
      else
        cout << "You Win! " << endl;     
    }
    if (uP == 'P')
    {
      if (cP == 'P')      
        cout << "Tie. " << endl;
      else if ((cP == 'S')||(cP == 'L'))
        cout << "You lose. " << endl;
      else
        cout << "You Win!" << endl;     
    }
    if (uP == 'S')
    {
      if (cP == 'S')      
        cout << "Tie. " << endl;
      else if ((cP == 'K')||(cP == 'R'))
        cout << "You lose. " << endl;
      else
        cout << "You Win!" << endl;     
    }
    if (uP == 'L')
    {
      if (cP == 'L')      
        cout << "Tie. " << endl;
      else if ((cP == 'S')||(cP == 'R'))
        cout << "You lose. " << endl;
      else
        cout << "You Win!" << endl;     
    }
    if (uP == 'K')
    {
      if (cP == 'K')      
        cout << "Tie. " << endl;
      else if ((cP == 'L')||(cP == 'P'))
        cout << "You lose. " << endl;
      else
        cout << "You Win!" << endl;     
    }
  return;
}

/////////////// User-Created Functions ////////////////////////////////////////

/* Descprition: This function is used to translate the character selection to a 
        statement which is displayed to the user.
   Parameters:  flag_who is an integer which is used to indicate if the computer
                         or the user made the choice.
                selection is one of the 5 valid character selections  */
void TranslatePick(int flag_who, char selection)
{
    // declare local function variables
    string who_text;
    
    // identify which statements to insert into the output below
    if (flag_who == 0)
        who_text = "You";
    else
        who_text = "The Computer";
    
    // display output where the char selection is translated into words
    if (selection == 'R')
        cout << who_text <<" selected Rock." << endl;
    else if (selection == 'P')
        cout << who_text <<" selected Paper." << endl;
    else if (selection == 'S')
        cout << who_text <<" selected Scissors." << endl;
    else if (selection == 'L')
        cout << who_text <<" selected Lizard." << endl;
    else if (selection == 'K')
        cout << who_text <<" selected Spock." << endl;
    else // something is wrong
        cout << "Check code for errors. Message from TranslatePick fcn." << endl;
        
    return;
        
}

/* Descprition: This function is used to make a random character selection in the 
        game Rock, Paper, Scissors, Lizard, Spock
   Parameters:  there are no inputs */
char ComputerSelectRPSLK()
{
    // declare local function variables
    char randPickChar;
    int randPick;
    
    // pick a random number from 0 to 4
    srand (time(NULL)); // initialize random seed.
    randPick = rand() % 5; // gives us 0 to 4
    //cout << randPick; // uncomment to debug
    
    // assign random number to letter
    switch (randPick)
    {
        case 0: 
            randPickChar = 'R';
            break;
        case 1: 
            randPickChar = 'P';
            break;
        case 2: 
            randPickChar = 'S';
            break;
        case 3: 
            randPickChar = 'L';
            break;
        case 4: 
            randPickChar = 'K';
            break;
        default:
            cout << "Error in the function ComputerSelectRPSLK. " << endl;
    }
    
    return randPickChar;
}
void GiveFeedback(char uP, char cP)
{
int MessagePick;
string RandMessage;
srand(time(NULL));
if (uP == 'R')
    {
      if (cP == 'R')      
        cout << "" << endl;
      else if ((cP == 'K')||(cP == 'P'))
        cout << "" << endl;
      else{
        MessagePick = rand() % 2;
        switch (MessagePick){
        case 0:
        RandMessage = "Good Job!!";
        cout << RandMessage << endl;
        break;
        case 1:
        RandMessage = "You beat the computer!";
        cout << RandMessage << endl;
        break;}
       }
      }             
    if (uP == 'P')
    {
      if (cP == 'P')      
        cout << "" << endl;
      else if ((cP == 'S')||(cP == 'L'))
        cout << "You lose. " << endl;
      else{
        MessagePick = rand() % 2;
        switch (MessagePick){
        case 0:
        RandMessage = "Have a soda pop";
        cout << RandMessage << endl;
        break;
        case 1:
        RandMessage = "Computer was no match...";
        cout << RandMessage << endl;
        break;}
      }
             
    }
    if (uP == 'S')
    {
      if (cP == 'S')      
        cout << "" << endl;
      else if ((cP == 'K')||(cP == 'R'))
        cout << "" << endl;
      else{
        MessagePick = rand() % 2;
        switch (MessagePick){
        case 0:
        RandMessage = "Go get a lottery ticket!";
        cout << RandMessage << endl;
        break;
        case 1:
        RandMessage = "You're a skilled individual!";
        cout << RandMessage << endl;
        break;}
      }
          
    }
    if (uP == 'L')
    {
      if (cP == 'L')      
        cout << "" << endl;
      else if ((cP == 'S')||(cP == 'R'))
        cout << "" << endl;
      else{
        MessagePick = rand() % 2;
        switch (MessagePick){
        case 0:
        RandMessage = "*computer* you beat me now, but I'LL BE BACK...";
        cout << RandMessage << endl;
        break;
        case 1:
        RandMessage = "Awesome!";
        cout << RandMessage << endl;
        break; }
        }
    }
    if (uP == 'K')
    {
      if (cP == 'K')      
        cout << "" << endl;
      else if ((cP == 'L')||(cP == 'P'))
        cout << "" << endl;
      else{
        MessagePick = rand() % 2;
        switch (MessagePick){
        case 0:
        RandMessage = "Fantastic.";
        cout << RandMessage << endl;
        break;
        case 1:
        RandMessage = "You're too good.";
        cout << RandMessage << endl;
        break;
      }
             
    }
}
}

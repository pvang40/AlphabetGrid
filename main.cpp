//Author: Pachia Vang 
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int letters;
  vector <vector <char> > alphabet; 

  do
  {
    cout<<"How many letters should there be per line? ";
    cin>>letters;
    
    if( letters < 1 || letters > 26 )
    {
      cout<<"\nPlease enter a number between 1-26.\n";
    }
  }while( letters < 1 || letters > 26 );
  
  int row ;
  if (26%letters == 0) 
  { 
    row = 26/letters;
  } 
  else 
  { 
    row = 26/letters + 1; 
  } 
 
  //resize alphabet to have _letter_ # of rows, and _columns_ # of columns 
  alphabet.resize ( row ); 
  
  for( int r = 0; r < alphabet.size(); r++)
  {
    alphabet[r].resize( letters ); 
  } 
  
  char currentLetter = 'A'; 
  //tranverse through grid and assign values
  for (int r = 0; r< alphabet.size(); r++)
  { 
    for (int c = 0; c < alphabet[r].size(); c++) 
    {
      alphabet[r][c] = currentLetter; 
      currentLetter++; // increment to next letter in ASCII table 
      if (currentLetter > 'Z' ) 
      { 
        currentLetter = 'Z';
      }
    } 
  }

  for (int r = 0; r < alphabet.size(); r++)
  { 
    for (int c=0; c < alphabet[r].size(); c++) 
    { 
     cout<< alphabet[r][c]; 
    }
    cout<< endl;
  }

  return 0;

}

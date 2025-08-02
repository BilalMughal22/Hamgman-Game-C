#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include <windows.h>
HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
using namespace std;

string Random_word(vector<string>& words);
void play();
vector<string> Words = {"a", "b", "c"};
vector<string> easyWords = {"programming", "hangman", "games"};
vector<string> mediumWords = {"demonstration", "inappropriate", "consciousness"};
vector<string> hardWords = {"cappuccino", "reconnaissance", "stymie"};


string hangman_ascii_art[7] = {
    "\t\t\t\t     +---+\n"
    "\t\t\t\t     |   |\n"
    "\t\t\t\t     |\n"
    "\t\t\t\t     |\n"
    "\t\t\t\t     |\n"
    "\t\t\t\t     |\n"
    "\t\t\t==============================\n",
    
    "\t\t\t\t     +---+\n"
    "\t\t\t\t     |   |\n"
    "\t\t\t\t     |   O\n"
    "\t\t\t\t     |    \n"
    "\t\t\t\t     |    \n"
    "\t\t\t\t     |    \n"
    "\t\t\t==============================\n",
    
    "\t\t\t\t     +---+\n"
    "\t\t\t\t     |   |\n"
    "\t\t\t\t     |   O\n"
    "\t\t\t\t     |   |\n"
    "\t\t\t\t     |    \n"
    "\t\t\t\t     |    \n"
    "\t\t\t==============================\n",
    
    "\t\t\t\t     +---+\n"
    "\t\t\t\t     |   |\n"
    "\t\t\t\t     |   O\n"
    "\t\t\t\t     |  /|\n"
    "\t\t\t\t     |    \n"
    "\t\t\t\t     |    \n"
    "\t\t\t==============================\n",
    
    "\t\t\t\t     +---+\n"
    "\t\t\t\t     |   |\n"
    "\t\t\t\t     |   O\n"
    "\t\t\t\t     |  /|\\ \n"
    "\t\t\t\t     |    \n"
    "\t\t\t\t     |    \n"
    "\t\t\t==============================\n",
    
	"\t\t\t\t     +---+\n"
    "\t\t\t\t     |   |\n"
    "\t\t\t\t     |   O\n"
    "\t\t\t\t     |  /|\\ \n"
    "\t\t\t\t     |  / \n"
    "\t\t\t\t     |    \n"
    "\t\t\t==============================\n",
    
	"\t\t\t\t     +---+\n"
    "\t\t\t\t     |   |\n"
    "\t\t\t\t     |   O\n"
    "\t\t\t\t     |  /|\\ \n"
    "\t\t\t\t     |  / \\ \n"
    "\t\t\t\t     |    \n"
    "\t\t\t\t=============================="
};

int main()
{
    int level;
    SetConsoleTextAttribute(h,3);
    cout << "\t\t _________ " << endl;
    cout << "\t\t |     |" <<"\t\t|   |"<<"  /\\"<<"  |\\"<<"  |"<<" ---" <<" |\\"<<"  /|"<<"  /\\"<<"  |\\"<<"  |"<< endl;
    cout << "\t\t |     " <<"O" <<"\t\t|---|"<<" /--\\" <<" | \\"<<" |"<<"|  -"<<" | \\"<<"/ |"<<" /--\\" <<" | \\"<<" |"<< endl;
    cout << "\t\t |    " << "/" << "|\\"<<"\t\t|   |"<<"/    \\" <<"|  \\"<<"|"<<" ---"<<" |"<<"\t  |" <<"/    \\"<<"|  \\"<<"|"<< endl;
    cout << "\t\t |    " << "/" << " \\" << endl;
    //cout << "\t\t |             " << endl;
    cout << "\t\t_|_______" << endl<<endl;
    SetConsoleTextAttribute(h,15);
    cout<<"====================================================================================================\n";
	srand(time(0));
	SetConsoleTextAttribute(h,10); //10= Green
    cout << "\t\t\tWelcome to Hangman!\n";
    SetConsoleTextAttribute(h,2); //6= Yellow
    cout<<"\t\t\tStart Game  ???";
	SetConsoleTextAttribute(h,8); //dark pink type 
	cout<<" Y/N \n";
	SetConsoleTextAttribute(h,15); //Bright White 
    cout<<"\t\t\tAbout Game \tEnter (A) \n";
	char temp;
    cout<<"\t\t\t\t\t";
    cin>>temp;
    if(temp=='A'||temp=='a')
    	{
		SetConsoleTextAttribute(h,3);
    	cout<<"\t\t\t The Hangman game is a classic word-guessing game where the player tries\n";
		cout<<"\t\t\t to discover a secret word by suggesting letters. With each incorrect guess,\n";
		cout<<"\t\t\t the person gets closer to death.\n\n\n";
    	cout<<"\t\t\tCreated By Bilal Mughal Student of First Semester In BsSE At SukkurIBA\n";  
}

	else if(temp=='Y'||temp=='y'){
		SetConsoleTextAttribute(h,10);
    	cout<<"\t\t\tEntering Game.....\n";
    	SetConsoleTextAttribute(h,6);
    	cout<<"\t\t\tWhich Level Do u Wanna Play???\n";
    	SetConsoleTextAttribute(h,10);
    	cout<<"\t\t\t1.Easy\n";
    	SetConsoleTextAttribute(h,11);
    	cout<<"\t\t\t2.Medium\n";
    	SetConsoleTextAttribute(h,4);
		cout<<"\t\t\t3.Hard\n";
		cout<<"\t\t\t\t\t";
		cin>>level;	
			switch(level)
				{
				case 1 : SetConsoleTextAttribute(h,10); 
					cout<<"\t\t\tYou Have Selected Easy Mode  \n";
						SetConsoleTextAttribute(h,15);
						cout<<"\t\t\tGood Luck\n "; 
							SetConsoleTextAttribute(h,10);
						Words = easyWords; play(); break;
				case 2 :	SetConsoleTextAttribute(h,11); 
					cout<<"\t\t\tYou Have Selected Medium Mode  \n";
						SetConsoleTextAttribute(h,15);
					cout<<"\t\t\tAll the Best \n ";
						SetConsoleTextAttribute(h,11);
					Words = mediumWords; play(); break;
					
				case 3 :	SetConsoleTextAttribute(h,4);
				 cout<<"\t\t\tYou Have Selected Hard Mode  \n";
				       SetConsoleTextAttribute(h,15);
					cout<<"\t\t\t I Like ur Confidence  :) \n ";
					SetConsoleTextAttribute(h,4);
					Words = hardWords; play(); break;
				
				SetConsoleTextAttribute(h,12);
				default : cout<<"\t\t\tSelect Correctly !" ; break ;
			}

			}
    		else if(temp=='N'||temp=='n'){
    			SetConsoleTextAttribute(h,12);
    			cout<<"\t\t\tNot a Problem Anytime u Want :) ";}
    				else cout<<"\t\t\tPlz Answer Correctly ";
    
    //play();
HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    return 0;
}

void play()
{
    string secret_word = Random_word(Words);
    string guess_word = secret_word;
    
    for (int i = 0; i < secret_word.length(); ++i)
    {
        guess_word[i] = '_';
    }
    int try_no = 0;
    char guess;

    while (true)
    {
        cout << hangman_ascii_art[try_no] << "\n";
        cout <<"\t\t\t\t"<<guess_word << "\n";
        cout << "\t\t\tEnter your guess:";
       // cout<<"\t\t\t\t";
        cin >> guess;

        if (secret_word.find(guess) != string::npos)
            {   
                for (int i = 0; i < guess_word.length(); ++i)
                {
                    if (secret_word[i] == guess)
                    {
                        guess_word[i] = guess;
                    }
                }
            if (secret_word == guess_word)
            {
                cout << hangman_ascii_art[try_no] << "\n";
                cout <<"\t\t\t"<<guess_word << "\n";
                cout <<"\t\t\t"<< "You win! The word was " << secret_word << "\n";
                break;
            }
        } else {
            ++try_no;
        }
        if (try_no >= 6)
        {
            cout << hangman_ascii_art[try_no] << "\n";
            cout <<"\t\t\t\t"<< guess_word << "\n";
            SetConsoleTextAttribute(h,4);
            cout<< "\n\t\t\t\tYou Died! \n\n";
            SetConsoleTextAttribute(h,15);
			cout<<"\t\t\t\t The word was " << secret_word << "\n";
            break;
        }
    }
}

string Random_word(vector<string>& words)
{
    return words[rand() % words.size()];
}

#include<iostream>
#include<cstdlib>
#include<cstring>
#include<windows.h>
#include<conio.h> 
#include <fstream>
#include<MMsystem.h>
using namespace std;

//Gloable variable
char Name[255];
int level;
int score;

//prototype functions
void display();
void mainmenu();
void instructions();
void play();
int easy();
int normal();
int hard();
int playSound_1();
int playSound_2();
int playSound_3();
int playSound_4();
int playSound_5();

//main function
int main(){	
system("color 6");
cout<<endl;
cout<<"	     ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦"<<endl;
cout<<"	     ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦"<<endl;
cout<<"	     ¦¦¦¦¦¦          ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦          ¦¦¦¦¦¦          ¦¦¦¦¦     "<<endl;
cout<<"	     ¦¦¦¦¦¦          ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦"<<endl;
cout<<"	     ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦"<<endl;
cout<<"	     ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦                   ¦¦¦¦¦           ¦¦¦¦¦ "<<endl;
cout<<"	     ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦"<<endl;
cout<<"	     ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦"<<endl<<endl;

cout<<"		          ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦      "<<endl;
cout<<"		          ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦   "<<endl;
cout<<"		              ¦¦¦¦¦¦      ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦   "<<endl;
cout<<"		              ¦¦¦¦¦¦      ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦"<<endl;
cout<<"		              ¦¦¦¦¦¦      ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦   "<<endl;
cout<<"		              ¦¦¦¦¦¦      ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦   "<<endl;
cout<<"		              ¦¦¦¦¦¦      ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦"<<endl;
cout<<"		              ¦¦¦¦¦¦      ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦   "<<endl<<endl;

cout<<"		     ¦¦¦¦¦¦          ¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦    ¦¦¦¦¦¦¦¦¦¦¦¦             "<<endl;              
cout<<"		     ¦¦¦¦¦¦          ¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦    ¦¦¦¦¦¦¦¦¦¦¦¦¦¦"<<endl;
cout<<"		     ¦¦¦¦¦¦          ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦    ¦¦¦¦¦¦    ¦¦¦¦¦¦  ¦¦¦¦¦¦"<<endl;
cout<<"		     ¦¦¦¦¦¦          ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦    ¦¦¦¦¦¦    ¦¦¦¦¦¦  ¦¦¦¦¦¦"<<endl;
cout<<"		     ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦    ¦¦¦¦¦¦  ¦¦¦¦¦¦"<<endl;
cout<<"		     ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦    ¦¦¦¦¦¦  ¦¦¦¦¦¦"<<endl;
cout<<"		     ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦    ¦¦¦¦¦¦  ¦¦¦¦¦¦"<<endl;
cout<<"		     ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦    ¦¦¦¦¦¦    ¦¦¦¦¦¦  ¦¦¦¦¦¦"<<endl;
cout<<"		     ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦    ¦¦¦¦¦¦    ¦¦¦¦¦¦  ¦¦¦¦¦¦"<<endl;
cout<<"		     ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦"<<endl;
playSound_1();
getch();
system("cls");

     char a;
     char Name;
     bool loop=1;
     mainmenu();
	 char choice;
     int score;
     while(loop){
     	system("cls");
     	display(); 	
     	switch(level){
     		case 1:
     			score+=easy();
     			break;
     		case 2:
     			score+=normal();
     			break;
     		case 3:
     			score+=hard();
     			break;
     		default:
     			cout<<"Invalid Input"<<endl;
		}
        cout<<"Do you want to play again ?\n If you want then press [ y ] \n If you do not want then press [ n ]        :   ";
        cin>>choice;
        cout<<endl;
        if(choice=='n'){
        	loop=0;
		}else if(choice=='y'){
			loop=1;
			
		}else{
			cout<<"Invalid input"<<endl;
		}
    }
    
     system("cls");
     system("color E4");
     cout<<Name<<"  "<<endl;
cout<<"		              $$$$$$$"<<endl;
cout<<"		             $$$$$$$$$"<<endl;
cout<<"		            $$$$$$$$$$$"<<endl;
cout<<"		            $$$$$$$$$$$"<<endl;
cout<<"		             $$$$$$$$$"<<endl;
cout<<"		     $$$$$$     $$$$$$$$$$"<<endl;
cout<<"		    $$$$$$$$  $$$$$$     $$$                       your score is   :   "<<score<<endl;
cout<<"		   $$$$$$$$$$$$$$$$     $$$_$"<<endl;
cout<<"		   $$$$$$$$$$$          $$$_$     $$"<<endl;
cout<<"		   $$$$$$$$$            $$_$$$$_$$$$               Try again !!!!"<<endl;
cout<<"		     $$$__$$__$$$              $$$$"<<endl;
cout<<"		           $$____$              _$"<<endl;
cout<<"		            $$____$              $"<<endl;
cout<<"		             $$___$$$          $$"<<endl;
cout<<"		              _$$$_$$$$$$_$$$$$"<<endl;
cout<<"		               _$$____$$_$$$$$"<<endl;
cout<<"		               $$$$$___$$$$$$$$$$"<<endl;
cout<<"		               $$_$$$$$$$$$$$$$$__$$"<<endl;
cout<<"		              $$$$$        $$$$_$_$"<<endl;
cout<<"		               $$$$          $$$__$$"<<endl;
cout<<"		     $$$$         $               _$"<<endl;
cout<<"		   $$$___$$      $$$             $$"<<endl;
cout<<"		  $___$$__$$     $__$$$     $$__$$"<<endl;
cout<<"		 $$____$___$      $$$$$$$$$$$$$"<<endl;
cout<<"		 $$_____$___$    $$$$$_$$___$$$"<<endl;
cout<<"		  $$_____$___$_$$_____$__$__$$$$$$$$$$$"<<endl;
cout<<"		   $_____$$__$_$_____$_$$$__$$__$      $$$"<<endl;
cout<<"		    $$_________$___$$_$___$$__$$        $"<<endl;
cout<<"		       $____$__$       $$              $$"<<endl;
cout<<"		          $$$                 $$$$$''''     "<<endl;

playSound_1();

}



//with this we can set text color and background color
void setcolorandbackground(int textc,int backg){
    WORD color = ((backg & 0x0F)<<4) + (textc & 0x0F);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}


//play background sound
int playSound_1(){
	PlaySound(TEXT("begin.wav"),NULL,SND_SYNC);
	return 0;
}
int playSound_2(){
	PlaySound(TEXT("transfer.wav"),NULL,SND_SYNC);
	return 0;
}
int playSound_3(){
	PlaySound(TEXT("loosing.wav"),NULL,SND_SYNC);
	return 0;
}
int playSound_4(){
	PlaySound(TEXT("winning.wav"),NULL,SND_SYNC);
	return 0;
}
int playSound_5(){
	PlaySound(TEXT("into.wav"),NULL,SND_SYNC);
	return 0;
}


//Function for printing Main menu options
void mainmenu(){
	system("cls");
 	cout<<"			*************WELCOME TO THE WORD GUSSING GAME ********************\n\n"<<endl;
	int option;
	system("color 4E");
    cout << "\n\n\t\t";
    cout << "		    		MAIN MENU"<<endl<<endl;
	cout<<"					1. Start Game"<<endl<<endl;
	cout<<"					2. Instructions"<<endl;	 
	playSound_2();
	cout<<endl<<"Select option: ";
	cin>>option;
	
	switch(option){
		case 1:
			play();
			break;
		case 2:
			instructions();
			break;
		default:
			cout<<"Invalid Input"<<endl;
	}
}


//instructions about the game
void instructions() {
	system("cls");
	system("color DF")	 ;
	cout<<"Instructions";
	cout<<"\n----------------";
	cout<<"\n1. Enter your name";
	cout<<"\n2. Choose game level that you want to play ";
	cout<<"\n3. If you want any help you can get a hint";
	cout<<"\n4. Guess the word";
	cout<<"\n\nPress any key to go back to menu";
	playSound_2();
	getch();
	mainmenu();
	
}


//Getting user name and the level that player wants to play
void play() {
	system("cls");
	system("color B0")	 ;
	char Name[255];
    cout<<"Enter Username  :       ";
    cin>>Name;
    cout<<endl<<"  Hi  "<<Name<<"..........."<<endl;
    cout<<"                                   WHELCOME TO THE WORD GUSSING GAME"<<endl;
	cout<<"                            ************************************************"<<endl<<endl;
    
    cout<<"			                 1.Easy   -  press NUMBER 1\n \n\n";
    cout<<"			                 2.Medium -  press NUMBER 2\n \n\n";
    cout<<"			                 3.Hard   -  press NUMBER 3\n \n\n \n";
      cout<<"				 Choose a level  : "   ;
    cin>>level;
    playSound_2();
    cout<<endl<<"Press any key to continue  "<<endl;
    getch();
}


void display(){
	cout<<"\t				****************Word Gussing Game********************\n\n"<<endl;
    cout<<"		You have to guess the word in this puzzle"<<endl<<endl;
    cout<<"		For example word in this puzzle can be (world,Efficient,probability etc )"<<endl<<endl;
    cout<<"		You can also take help for hint from the system"<<endl<<endl;
    
}



//Easy level
int easy(){
	int hint;
    string output;
    
    string a[10]={"cat","learning","world",
					"hello","name","apple","share","simple"
							,"month","comment"};
    char arr[10][10];
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            char c;
            int r;
            r= rand() % 26;   // generate a random number
            c= 'a' + r;      // Convert to a character from a-z
            arr[i][j]=c;
        }
    }//generate a random word from the array
    int index=rand()%10;
    output=a[index];
    
    if(a[index].length()%2==0)
    {
        // for even string length case
            int row=rand()%10;
            int col=rand()%3;
            for(int i=0;a[index][i]!='\0';i++,col++)
            {
                arr[row][col]=a[index][i];
            }   
    }
    else{
        // for odd string length case
        // for even string length case
            int row=rand()%3;
            int col=rand()%10;
            for(int i=0;a[index][i]!='\0';i++,row++)
            {
                arr[row][col]=a[index][i];
            }
    }//set green as background colour for the puzzle
	setcolorandbackground(80,90);
     for(int i=0;i<10;i++){
        for(int j=0;j<10;j++)
        {
          cout<<"   "<<arr[i][j];
          Sleep(90);
        }
        cout<<endl;
    }
    
    
        
    // LIGHTCYAN		11    
    setcolorandbackground(0,11);
    string guess;
	cout<<endl<<"Press 1 for Guess number	"<<endl;
	cout<<"Press 2 for see Hint and then guess number	"<<endl;
	playSound_5();
	label1:
	cout<<"Enter input NO 1 or 2		:	";
	cin>>hint;
	cout<<endl;
	if(hint==1){
		// do nothing
		//This part will be empty because in this part i have to ask user input for guess variable
		//But this part was common in if and else if also.So, i just write cin>>guess part outside if/elseif
		//You can also write that part here but then you have to write it in else if also but if you do this then you 
		//cannot write this thing after ifelseif .Because it will ask input again 2 times then .
	}
    else if(hint==2){
       cout<<"Guessed the word in puzzle size is  :       ";
       cout<<output.size();
       cout<<endl;
       }
    else{
    	cout<<"Invalid input	";
    	goto label1;
	}
	
    cout<<"Enter the word you guess         :       ";
    cin>>guess;
    cout<<endl;
    if(guess==a[index]){
        cout<<"Congratulations ! You have guessed correct word  "<<endl;
        playSound_4();
        return 1;
    }
    else{
        cout<<"Sorry ! Your guessed the word is incorrect.Try again "<<endl;
        playSound_3();
        return 0;
    
}
}



//Normal level
int normal(){
	   int hint;
	   string output;
    
    string a[10]={"envirnment","november","index",
					"science","profit","centre","total","complete"
							,"price","comment"};
    char arr[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            char c;
            int r;
            r= rand() % 26;   // generate a random number
            c= 'a' + r;      // Convert to a character from a-z
            arr[i][j]=c;
        }
    }//generate a random word from the list
    int index=rand()%10;
    output=a[index];
    
    if(a[index].length()%2==0){
        // for even string length case
            int row=rand()%10;
            int col=rand()%3;
            for(int i=0;a[index][i]!='\0';i++,col++){
                arr[row][col]=a[index][i];
            }   
    }
    else{
        // for odd string length case
        // for even string length case
            int row=rand()%3;
            int col=rand()%10;
            for(int i=0;a[index][i]!='\0';i++,row++)
            {
                arr[row][col]=a[index][i];
            }
    }//set green as the colour for the puzzle
    setcolorandbackground(80,90);
     for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
          cout<<"   "<<arr[i][j];
          Sleep(90);
        }
        cout<<endl;
    }
    
    // LIGHTCYAN		11    
    setcolorandbackground(0,11);
    string guess;
	cout<<endl<<"Press 1 for Guess number	"<<endl;
	cout<<"Press 2 for see Hint and then guess number	"<<endl;
	playSound_5();
	label1:
	cout<<"Enter input NO 1 or 2		:	";
	cin>>hint;
	cout<<endl;
	if(hint==1){
		// do nothing
	}
    else if(hint==2){
       cout<<"Guessed the word in puzzle size is  :       ";
       cout<<output.size();
       cout<<endl;
       }
    else{
    	cout<<"Invalid input	";
    	goto label1;
	}
	
    cout<<"Enter the word you guess         :       ";
    cin>>guess;
    cout<<endl;
    if(guess==a[index]){
        cout<<"Congratulations ! You have guessed correct word  "<<endl;
        playSound_4();
        return 1;
    }
    else{
        cout<<"Sorry ! Your guessed the word is incorrect.Try again "<<endl;
        playSound_3();
        return 0;
    }
}



//Hard level
int hard(){
	int hint;
    string output;
    string a[10]={"efficient","importent","maximum",
					"average","revenue","quantity","marginal","cost"
							,"discrete","probability"};
    char arr[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            char c;
            int r;
            r= rand() % 26;   // generate a random number
            c= 'a' + r;      // Convert to a character from a-z
            arr[i][j]=c;
        }
    }
    int index=rand()%10;
    output=a[index];
    
    if(a[index].length()%2==0)
    {
        // for even string length case
            int row=rand()%10;
            int col=rand()%3;
            for(int i=0;a[index][i]!='\0';i++,col++){
                arr[row][col]=a[index][i];
            }   
    }
    else{
        // for odd string length case
        // for even string length case
            int row=rand()%3;
            int col=rand()%10;
            for(int i=0;a[index][i]!='\0';i++,row++){
                arr[row][col]=a[index][i];
            }
    }
    setcolorandbackground(80,90);
     for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
          cout<<"    "<<arr[i][j];
          Sleep(90);
        }
        cout<<endl;
    }
    
    // LIGHTCYAN		11    
    setcolorandbackground(0,11);
    string guess;
	cout<<endl<<"Press 1 for Guess number	"<<endl;
	cout<<"Press 2 for see Hint and then guess number	"<<endl;
	playSound_5();
	label1:
	cout<<"Enter input NO 1 or 2		:	";
	cin>>hint;
	cout<<endl;
	if(hint==1){
		// do nothing
	}
    else if(hint==2){
       cout<<"Guessed the word in puzzle size is  :       ";
       cout<<output.size();
       cout<<endl;
       }
    else{
    	cout<<"Invalid input	";
    	goto label1;
	}
	
    cout<<"Enter the word you guess         :       ";
    cin>>guess;
    cout<<endl;
    if(guess==a[index]){
        cout<<"Congratulations ! You have guessed correct word  "<<endl;
        playSound_4();
        return 1;
    }
    else{
        cout<<"Sorry ! Your guessed the word is incorrect.Try again "<<endl;
        playSound_3();
        return 0;
    }
}


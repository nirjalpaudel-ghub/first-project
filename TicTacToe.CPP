// TIC TAC TOE GAME
#include <iostream>
using namespace std;
char square[10]={'0','1','2','3','4','5','6','7','8','9'};
char Resetsquare[10]={'0','1','2','3','4','5','6','7','8','9'};
int checkGameStatus()
{
    if(square[1]==square[2]&&square[2]==square[3])
    {
        return 1;
    }
    else if(square[4]==square[5]&&square[5]==square[6])
    {
        return 1;
    }
    else if(square[7]==square[8]&&square[8]==square[9])
    {
        return 1;
    }
    else if(square[1]==square[5]&&square[5]==square[9])
    {
        return 1;
    }
    else if(square[3]==square[5]&&square[5]==square[7])
    {
        return 1;
    }
    else if(square[1]==square[4]&&square[4]==square[7])
    {
        return 1;
    }
    else if(square[2]==square[5]&&square[5]==square[8])
    {
        return 1;
    }
    else if(square[3]==square[6]&&square[6]==square[9])
    {
        return 1;
    }
    else if(square[1]!='1'&&square[2]!='2'&&square[3]!='3'&&square[4]!='4'&&square[5]!='5'&&square[6]!='6'&&square[7]!='7'&&square[8]!='8'&&square[9]!='9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
int board()
{
    system("cls");
    cout<<"\n\n\tTic Tac Toe Game"<<endl<<endl;
    cout<<"\t\tPlayer 1(O)-\tPlayer 2(X)"<<endl;
    cout << "\t" << "  | " << "  | " << "  " << endl;
    cout << "\t" << " " << square[1] << "| " << " " << square[2] << "|  " << square[3] << endl;

    cout << "\t" << "__|_" << "__|_" << "__" << endl;
    cout << "\t" << "  | " << "  | " << "  " << endl;
    cout << "\t" << " " << square[4] << "| " << " " << square[5] << "|  " << square[6] << endl;

    cout << "\t" << "__|_" << "__|_" << "__" << endl;
    cout << "\t" << "  | " << "  | " << "  " << endl;
    cout << "\t" << " " << square[7] << "| " << " " << square[8] << "|  " << square[9] << endl;
    cout << "\t" << "  | " << "  | " << "  " << endl;
    return 0;
}
void boardMark(const char mark,int choice,int player)
{
    if (choice==1&&square[1]=='1')
    square[1]=mark;
    else if (choice==2&&square[2]=='2')
    square[2]=mark;
    else if (choice==3&&square[3]=='3')
    square[3]=mark;
    else if (choice==4&&square[4]=='4')
    square[4]=mark;
    else if (choice==5&&square[5]=='5')
    square[5]=mark;
    else if (choice==6&&square[6]=='6')
    square[6]=mark;
    else if (choice==7&&square[7]=='7')
    square[7]=mark;
    else if (choice==8&&square[8]=='8')
    square[8]=mark;
    else if (choice==9&&square[9]=='9')
    square[9]=mark;
    else
    {
        cout<<"invalid mark"<<endl;
        player--;
        cin.ignore();
        cin.get();
    }
}
void resetBoard()
{
    for(int i=0;i<10;i++)
    {
        square[i]=Resetsquare[i];
    }
}
int main()
{
    abc:
    int player=1,i,choice;
    char mark;
    do
    {
        
        board();
        player=(player%2)?1:2;

        cout<<"\t\t"<<player<<" Enter your choice!!"<<endl;

        cin>>choice;
        mark=(player==1)?'X':'O';
        boardMark(mark,choice,player);
        i=checkGameStatus();
        player++;
        
    }while (i==-1);
    board();
    if(i==1)
    {
        cout<<"CONGRATULATIONSS!!! PLAYER"<<--player<<" YOU WIN"<<endl;
    }
    else{
        cout<<"GAME IS A DRAW"<<endl;
    }
    // cin.ignore();
    // cin.get();
    cout<<"\t\tCHOICE:"<<endl;
    cout<<"\t\t1. RESET GAME"<<endl;
    cout<<"\t\t2. EXIT"<<endl;
    int gameChoice;
    cin>>gameChoice;
   
    if(gameChoice==1)
    {
        resetBoard();
        goto abc;
    }
    else if(gameChoice==2)
    {
        return 0;
    }
   else
    {
        cout<<"\t\tInvalid Choice"<<endl;
        cin.ignore();
        cin.get();
    }
    
    return 0;
}

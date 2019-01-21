#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
using namespace std;
char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
char player='X';
int n;
int t;
int z;
void display()
{
    system("cls");
    cout<<"Tic_Tac_Toe!  v1.0 (Beta)"<<endl;
    cout<<endl;
    cout<<"Developer: Unnikrishnan Menon"<<endl;
    cout<<endl;
    cout<<"Game: "<<n<<endl;
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
void input()
{
    int a;
    cout<<endl;
    cout<<"It's "<<player<<" turn..."<<endl;
    cout<<"Press the Index Number of the Matrix: ";
    cin>>a;
    if(a==1)
    {
        if(matrix[0][0]=='1')
        matrix[0][0]=player;
        else
        {
            cout<<"Index is already in use! Try Again"<<endl;
            input();
        }
    }
    else if(a==2)
    {
        if(matrix[0][1]=='2')
        matrix[0][1]=player;
        else
        {
            cout<<"Index is already in use! Try Again"<<endl;
            input();
        }
    }
    else if(a==3)
    {
        if(matrix[0][2]=='3')
        matrix[0][2]=player;
        else
        {
            cout<<"Index is already in use! Try Again"<<endl;
            input();
        }
    }
    else if(a==4)
    {
        if(matrix[1][0]=='4')
        matrix[1][0]=player;
        else
        {
            cout<<"Index is already in use! Try Again"<<endl;
            input();
        }
    }
    else if(a==5)
    {
        if(matrix[1][1]=='5')
        matrix[1][1]=player;
        else
        {
            cout<<"Index is already in use! Try Again"<<endl;
            input();
        }
    }
    else if(a==6)
    {
        if(matrix[1][2]=='6')
        matrix[1][2]=player;
        else
        {
            cout<<"Index is already in use! Try Again"<<endl;
            input();
        }
    }
    else if(a==7)
    {
        if(matrix[2][0]=='7')
        matrix[2][0]=player;
        else
        {
            cout<<"Index is already in use! Try Again"<<endl;
            input();
        }
    }
    else if(a==8)
    {
        if(matrix[2][1]=='8')
        matrix[2][1]=player;
        else
        {
            cout<<"Index is already in use! Try Again"<<endl;
            input();
        }
    }
    else if(a==9)
    {
        if(matrix[2][2]=='9')
        matrix[2][2]=player;
        else
        {
            cout<<"Index is already in use! Try Again"<<endl;
            input();
        }
    }
}

void toggleplayer()
{
    if(player=='X')
    {
        player='O';
    }
    else
    {
        player='X';
    }
}

char winner()
{
            if(matrix[0][0]=='X' && matrix[1][1]=='X' && matrix[2][2]=='X')
            {
                return 'X';
            }
            else if(matrix[0][0]=='O' && matrix[1][1]=='O' && matrix[2][2]=='O')
            {
                return 'O';
            }
            else if(matrix[0][2]=='X' && matrix[1][1]=='X' && matrix[2][0]=='X')
            {
                return 'X';
            }
            else if(matrix[0][2]=='O' && matrix[1][1]=='O' && matrix[2][0]=='O')
            {
                return 'O';
            }


            else if(matrix[0][0]=='X' && matrix[0][1]=='X' && matrix[0][2]=='X')
            {
                return 'X';
            }
            else if(matrix[1][0]=='X' && matrix[1][1]=='X' && matrix[1][2]=='X')
            {
                return 'X';
            }
            else if(matrix[2][0]=='X' && matrix[2][1]=='X' && matrix[2][2]=='X')
            {
                return 'X';
            }
            else if(matrix[0][0]=='O' && matrix[0][1]=='O' && matrix[0][2]=='O')
            {
                return 'O';
            }
            else if(matrix[1][0]=='O' && matrix[1][1]=='O' && matrix[1][2]=='O')
            {
                return 'O';
            }
            else if(matrix[2][0]=='O' && matrix[2][1]=='O' && matrix[2][2]=='O')
            {
                return 'O';
            }


            else if(matrix[0][0]=='X' && matrix[1][0]=='X' && matrix[2][0]=='X')
            {
                return 'X';
            }
            else if(matrix[0][1]=='X' && matrix[1][1]=='X' && matrix[2][1]=='X')
            {
                return 'X';
            }
            else if(matrix[0][2]=='X' && matrix[1][2]=='X' && matrix[2][2]=='X')
            {
                return 'X';
            }
             else if(matrix[0][0]=='O' && matrix[1][0]=='O' && matrix[2][0]=='O')
            {
                return 'O';
            }
            else if(matrix[0][1]=='O' && matrix[1][1]=='O' && matrix[2][1]=='O')
            {
                return 'O';
            }
            else if(matrix[0][2]=='O' && matrix[1][2]=='O' && matrix[2][2]=='O')
            {
                return 'O';
            }
   return 'N';
}

void switchmatix()
{
   char matrix2[3][3]={'1','2','3','4','5','6','7','8','9'};
  for(int i=0;i<3;i++)
  {
      for(int j=0;j<3;j++)
      {
          matrix[i][j]=matrix2[i][j];
      }
  }
}

class person
{
    string name;
    int score=0;
public:
    void enter()
    {
       cin>>name;
    }
    string output()
    {
        return name;
    }
    void displayoutput()
    {
        cout<<endl;
        cout<<"Player Name : "<<name<<endl;
        cout<<"Matches Played : "<<z<<endl;
        cout<<"No. of Games Won : "<<score<<endl;
        cout<<endl;
    }
    void increment()
    {
        score++;
    }
    int returnscore()
    {
        return score;
    }
};


int main()
{
    person p1,p2;
    cout<<"How many matches do you want to play?"<<endl;
    cin>>t;
    z=t;
    cout<<"Enter name of Player(X): "<<endl;
    p1.enter();
    cout<<"Enter name of Player(O): "<<endl;
    p2.enter();
    n=0;
    while(t--)
    {
    int turns=1;
    n++;
    display();
    while(1)
    {
    input();
    display();
    toggleplayer();
      if(winner()=='X')
      {
       cout<<"Winner is "<< p1.output() <<"(X)!"<<endl;
       p1.increment();
       system("pause");
       switchmatix();
       break;
      }
      else if(winner()=='O')
      {
       cout<<"Winner is "<< p2.output() <<"(O)!"<<endl;
       p2.increment();
       system("pause");
       switchmatix();
       break;
      }
      else if(winner()=='N' && turns==9)
      {
       cout<<"It's a Draw!"<<endl;
       system("pause");
       switchmatix();
       break;
      }
      turns++;
    }
    }
    cout<<endl;
    system("cls");
    cout<<"Here are the Results from the Game's Binary File "<<endl;
    ofstream ofile("Game_data.dat",ios::binary|ios::out);
    ofile.write((char*)&p1,sizeof(p1));
    ofile.write((char*)&p2,sizeof(p2));
    ofile.close();
    person a;
    ifstream ifile("Game_data.dat",ios::binary|ios::in);
    int w=0;
    while(!ifile.eof())
    {
    w++;
    ifile.read((char*)&a,sizeof(a));
    a.displayoutput();
    if(w==2)
    {
        break;
    }
    }
return 0;
}

#include <iostream>

using namespace std;

int main ()
{
 char plansza [5][5] = {
  {'.','.','.','.','*'},
  {'.','*','.','.','*'},
  {'.','.','P','.','.'},
  {'.','.','.','*','.'},
  {'*','.','.','.','.'},
  };

  int x=2;
  int y=2;
  int punkty=0;
  char ruch;

  plansza[x][y] = 'P';

  while(punkty<5){
    system("cls");

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout << plansza [i][j] << " ";
        }
        cout <<endl;
    }
    cout << "PUNKTY: " << punkty <<endl;
    cout << "RUCH (w-gora, s-dol, a-lewo, d-prawo:)";
    cin >> ruch;//getch rozwazyc
    int stare_x=x;
    int stare_y=y;
    if(ruch=='w' && x>0) x--;
    if(ruch=='s' && x<4) x++;
    if(ruch=='a' && y>0) y--;
    if(ruch=='d' && y<4) y++;
    plansza[stare_x][stare_y]='.';
    plansza[x][y]='P';
    if(plansza[x][y]=='*'){
        punkty++;
    }

    }
    //plansza[y][x]='P';
 system ("cls");
  cout << "BRAWO! Zebrales wszystkie przedmioty :D" <<endl;
  return 0;
}

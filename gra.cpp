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

  int x=2,y=2;
  int punkty=0;
  char ruch;
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
    cin >>ruch;
    plansza [y][x]=='.';

    if(ruch=='w' && y>0) y--;
    if(ruch=='s' && y<4) y++;
    if(ruch=='a' && y>0) x--;
    if(ruch=='d' && y<4) x++;

            if(plansza[y][x]=='*'){
            punkty++;
    plansza[y][x]='P';
  }
  }
  cout << "BRAWO! Zebrales wszystkie przedmioty :D" <<endl;
  return 0;
}


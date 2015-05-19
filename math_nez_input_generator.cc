#include<bits/stdc++.h>

#define REP(i,s,n) for(int i=s;i<n;i++)
#define rep(i,n) REP(i,0,n)

using namespace std;

// 注意 : SIZE は演算子の数
const int SIZE = 10;

const bool use_mod = false;
const int MOD  = 100;

int main(){
  srand((unsigned int)time(NULL));
  string text;
  if( use_mod ) text = to_string(rand()%MOD);
  else          text = to_string(rand());
  int parenthesis = 0;
  rep(_,SIZE){
    int opr = rand() % 4;
    if( opr == 0 ) text += "+";
    else if( opr == 1 ) text += "-";
    else if( opr == 2 ) text += "*";
    else if( opr == 3 ) text += "/";
    
    if( rand() % 7 == 3 ) {
      ++parenthesis;
      text += "(";
    }

    if( use_mod ) text += to_string((opr==3)?max(1,rand()%MOD):rand()%MOD);
    else          text += to_string((opr==3)?max(1,rand()):rand());

    if( parenthesis && rand() % 5 == 0 ) {
      --parenthesis;
      assert( parenthesis >= 0 );
      text += ")";
    }
  }
  rep(_,parenthesis) text += ")";
  cout << text << endl;
  return 0;
}

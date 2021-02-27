#include <cstdio>
#include <vector>

using namespace std;

bool success = false;

bool check(int sudo[][9], int y, int x){
   for(int i=0; i<9; i++){
      if(i!=x && sudo[y][i]==sudo[y][x]){
         return false;
      }
      if(i!=y && sudo[i][x]==sudo[y][x]){
         return false;
      }
   }
   for(int i=(y/3)*3; i<(y/3)*3+3; i++){
      for(int j=(x/3)*3; j<(x/3)*3+3; j++){
         if((i!=y || j!=x) && sudo[i][j]==sudo[y][x])
            return false;
      }
   }
   return true;
}
void func(int sudo[][9], vector <pair <int, int>> v){

    if(v.empty() && !success){
      success = true;
      for(int i=0; i<9; i++){
         for(int j=0; j<9; j++){
            printf("%d ",sudo[i][j]);
         }
         printf("\n");
      }
   }
   else if(!success){
      int y = v.front().first;
      int x = v.front().second;
      v.erase(v.begin());
      for(int i=1; i<=9; i++){
         sudo[y][x] = i;
         if(check(sudo, y, x)){
            func(sudo, v);
         }
         sudo[y][x] = 0;
      }
   }
}
int main(void){
   int sudo[9][9];
   vector <pair <int, int>> v;
   
   for(int i=0; i<9; i++){
      for(int j=0; j<9; j++){
         scanf(" %d", &sudo[i][j]);
         if(sudo[i][j]==0){
            v.push_back({i, j});
         }
      }
   }
   func(sudo, v);
}

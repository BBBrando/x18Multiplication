// Brendon Brandolino
#include <vector>
#include <iostream>
using namespace std;

int main() {
vector<vector< int> > timesTable;
int num;
int setNum;
int lines;
lines = 0;
num = 0;

timesTable.resize(13);
for(int a=0; a < timesTable.size(); a++)
{
  timesTable[a].resize(13);
  timesTable[a][0] = num;
  num++;
  timesTable[0][num] = num;// set numbers in first vert and horizontal row
}

for(int a = 1; a < timesTable.size() ;a++)
{
      for(int b = 1; b < timesTable[a].size() ;b++)
      {
        timesTable[a][b] = timesTable[a][0]*timesTable[0][b]; //
      }
}


for(int a = 0; a < timesTable.size() ;a++)
{
    for(int b = 0; b < timesTable[a].size() ;b++)
    {
        cout<<timesTable[a][b];
        if (timesTable[a][b] < 100) { // spacing
          cout<<" ";
        }
        cout<<"|";
          if (timesTable[a][b] < 10) { // spacing
            cout<<" ";
          }
        lines++;
          if (lines == 13) {
          cout<<endl;
          lines = 0;
        }
    }
}









  return 0;
}

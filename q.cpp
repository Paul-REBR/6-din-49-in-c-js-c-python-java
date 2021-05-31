 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    cout <<"Numerele random sunt: ";
    srand(time(NULL));
    for (int i = 0; i < 6; i++)
    {
    int x=rand()%49;
  
        cout<<x<<" ";
        
    }
    return 0;
}

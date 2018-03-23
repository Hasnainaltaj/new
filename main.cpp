#include <iostream>

using namespace std;

int main()
{
 int rows;
 cin>>rows;
 for (int i=1;i<=rows;i++
 ){
 for(int x=0;x< rows-i;x++)
  cout<<" ";
 for(int a=0;a < i*2-1;a++)
    cout<<"*";
 cout<<endl;
 }
/*
 for (int i=1;i<=rows;i++){

  for(int j=1;j<=2;j++)
  cout<<" ";
  for(int j=1;j<=4;j++)
  cout<<"*";
  cout<<endl;
 }
*/
int c,k;
 if (rows % 2 == 0 && rows > 2)
    {
        for (k = 1; k<=rows; k++)
        {
            for (c = 0; c<=((((rows*2)-1)-rows)/2)-1; c++)
                cout<<" ";
            for (c = 0; c<=rows; c++)
                cout<<"*";

            cout<<"\n";
        }
    }
    else if(rows ==2)
    {
        for (k = 1; k<=rows; k++)
        {
            for (c = 0; c<=0; c++)
                cout<<" ";
            for (c = 0; c<=rows-2; c++)
                cout<<"*";

            cout<<"\n";
        }
    }
    else
    {
        for (k = 1; k<=rows; k++)
        {
            for (c = 0; c<=((((rows*2)-1)-rows)/2)-1; c++)
                cout<<" ";
            for (c = 0; c<=rows-1; c++)
                cout<<"*";

            cout<<"\n";
        }
    }


 for (int i=rows;i>=1;i--
 ){
 for(int x=0;x< rows-i;x++)
  cout<<" ";
 for(int a=0;a < i*2-1;a++)
    cout<<"*";
 cout<<endl;}
}


#include <iostream>

using namespace std;

int main()
{
 int brabo[2][3];
 int brabot[3][2];
        
          for(int i=0; i<2; i++){
         for(int j=0; j<3; j++){
           
          cin>>brabo[i][j];

   
             }
               }
        
      for(int i=0; i<3; i++){
         for(int j=0; j<2; j++){
           
          brabot[i][j]=brabo[j][i];

   
             }
               }
        cout<<"Matriz inteira \n";
        for(int i=0; i<2; i++){
         for(int j=0; j<3; j++){
            cout<<brabo[i][j]<<"\t";
         }
            cout<<"\n";
        }
         
           cout<<"Matriz transposta\n";
        for(int i=0; i<3; i++){
         for(int j=0; j<2; j++){
            cout<<brabot[i][j]<<"\t";
         }
            cout<<"\n";
        }
 

    return 0;
}

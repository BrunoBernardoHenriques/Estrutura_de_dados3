
#include <iostream>

using namespace std;

int main()
{
    int brabo[4][4];
     int soma=0;
    for(int i=0; i<4; i++){
         for(int j=0; j<4; j++){
           
          cin>>brabo[i][j];
   
    }
        
    }
     cout<<"Matriz inteira \n";
        for(int i=0; i<4; i++){
         for(int j=0; j<4; j++){
            cout<<brabo[i][j]<<"\t";
         }
            cout<<"\n";
        }
        for(int i=0; i<4; i++){
            soma=soma+brabo[i][i];
        }
    
    
    cout<<"Soma da diagonal: "<<soma;
    
    


    return 0;
}

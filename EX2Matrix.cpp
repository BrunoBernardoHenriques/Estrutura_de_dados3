#include <iostream>

using namespace std;

int main()
{
    int brabo[3][5];
    int vetor[3];
    
     for(int i=0; i<3; i++){
         for(int j=0; j<5; j++){
           
          cin>>brabo[i][j];
          vetor[i]= vetor[i]+brabo[i][j];
   
    }
        
    }
    cout<<"Matriz inteira \n";
        for(int i=0; i<3; i++){
         for(int j=0; j<5; j++){
            cout<<brabo[i][j]<<"\t";
         }
            cout<<"\n";
        }
    
 
    
    for(int i=0; i<3; i++){
        cout<<"Linha "<<i+1<<" "<<vetor[i];
        cout<<"\n";
    }
 
    return 0;
}

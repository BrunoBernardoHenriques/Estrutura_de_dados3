#include <iostream>

using namespace std;

int main()
{
    
 int brabo[5][5];

    for(int i=0; i<5; i++){
         for(int j=0; j<5; j++){
           
          cin>>brabo[i][j];
   
    }
        
    }
    cout<<"Matriz inteira \n";
        for(int i=0; i<5; i++){
         for(int j=0; j<5; j++){
            cout<<brabo[i][j]<<"\t";
         }
            cout<<"\n";
        }
        
    cout<<"Matriz estranha \n";
        for(int i=0; i<5; i++){
         for(int j=0; j<5; j++){
             int soma=i+j;
             if(soma%2!=0){
             cout<<brabo[i][j]<<"\t";
             }
             if(soma%2==0){
             cout<<"  \t";
             }
         }
            cout<<"\n";
        }
    
    

    return 0;
}

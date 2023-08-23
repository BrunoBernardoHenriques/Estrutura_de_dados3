
#include <iostream>

using namespace std;

int main()
{
 int brabo[6][6];
 int soma=0;
    for(int i=0; i<6; i++){
         for(int j=0; j<6; j++){
           
   int random = 1+ (rand() % 100);
   brabo[i][j]=random;
    }
       
    }
 cout<<"Matriz inteira \n";
        for(int i=0; i<6; i++){
         for(int j=0; j<6; j++){
            cout<<brabo[i][j]<<"\t";
         }
            cout<<"\n";
        }

  for(int i=1; i<5; i++){
         for(int j=0; j<i; j++){

   soma=soma+brabo[i][j];
}
}
cout<<"Soma da diagonal = "<<soma;
    return 0;
}

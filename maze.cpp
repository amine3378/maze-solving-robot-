#include <iostream>
#include <string.h>

using namespace std;

int main(){
    //i used numbers bcs strings are annoying 1=S , 3=B , 4=L , 2=R

    //also had l'algo fih ghir ta3 left hand rule mathode rana habin wahd yoptimise both
    int path[] = {4,3,4,3,4,1,4,1,3,4,4,3,4 };
    int new_path[20];
    new_path[0]= path[0];
    int j=1;

    for(int i=1; i< 13 ; i++)
    {
        if (path[i-1]==1 && path[i]==3 && path[i+1]==4)
        {
            new_path[j-1]=2;
            i+=2;
        }
        else if (path[i-1]==4 && path[i]==3 && path[i+1]==4)
        {
            new_path[j-1]=1;
            i+=2;
        }
        else if (path[i-1]==4 && path[i]==3 && path[i+1]==1)
        {
            new_path[j-1]=2;
            i+=2;
        }
        else{
            new_path[j-1]=path[i-1];
        }
        j++;

        
    }
    for(int n=0 ; n<5 ; n++){
        cout <<new_path[n]<<"\n";
        }
    //le code raho ymchi f had l case mais mchi dymen 



}
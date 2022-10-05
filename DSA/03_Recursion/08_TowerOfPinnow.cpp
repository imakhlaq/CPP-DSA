#include<bits/stdc++.h>
using namespace std;


            //problem based on temple of bramha in hanoi their are three pillers and one has 64 rings and when they are sifted to the last pillar world is going to end

        void towerOfPennoi(int n, char src,char temp,char desti){

            if(n==0){
                return;
            }
                //removing all rings from the source(tower) excep last one(and putting them in temp(tower) using destination(tower) ring so only last ring is in first tower 
                
            towerOfPennoi(n-1,src,desti,temp);

              // displaying movement of last ring
            cout<<n<<":"<<src<<" "<<desti<<endl;

            //and after moving nth ring. moving rest of the ring that is in temp(tower) . temp(tower) to destination(tower) using source(tower)
            towerOfPennoi(n-1,temp,src,desti);
        }
    

int main(){


         int n;
         cin>>n;
         char src=  'A';
         char temp= 'B';
         char desti='C';

         towerOfPennoi(n,src,temp,desti);


        return 0;
    }
#include<bits/stdc++.h>
using namespace std;




int main(){


        vector <int> num;  //vector declaration


        /*
                their is no inital size so you cant acces the elements by num[0].... when you enter the values then you can add  more. other wise you will get segmentation fault.

        */
        cout<<"Totals Elements: ";
        int n;
        cin>>n;
        int input;

        for(int i=0;i<n;i++){
            cout<<"Elements " <<i+1<<" : ";
            cin>>input;
            
            num.push_back(input);  //pushing value in vector
        }

         num.push_back(1);

        for(int x:num){
            cout<<x<<" ";   //u can also access the elements of vector like normal arrays arr[0],arr[1]....
        }

        cout<<endl<<num.size(); //to get the size of the vector




        //if you to tell the size of vector(you can still add more elements)

            vector <int> vec(10);//you are creating vector of 10 size inisially and you can add more 

            cout<<vec[5];// you cant do this with undefinde size vector you can do this after inisilizing the values other wise you will get segmentation fault



         // to return a vector from function vector<int> leftrotate(vector<int>,in k);


        return 0;
    } 
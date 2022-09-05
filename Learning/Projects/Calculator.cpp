#include<bits/stdc++.h>
using namespace std;




const int ZEN_MODE=1;
const int MORMAL_MODE=0;
const int EXIT_MODE=2;




    int factorial(int num1){
        int fac=1;
       for(int i=1;i<=num1;i++){
        fac=fac*i;
       }

       return fac;
       
}
int zenMode(){
  do{

  
  
  string s;
  cin>>s;
  if(s=="normal"){
    return MORMAL_MODE;
  }
  if(s=="exit"){
    return EXIT_MODE;
  }

  int num1;
  num1=stoi(s);

  
   string operation;
   cin>>operation;
   if(operation=="+"||operation=="-"|| operation=="*"|| operation=="/"){
   int num2;
   cin>>num2;
   if(operation=="+"){
    cout<<num1+num2<<endl;
   }
   if(operation=="-"){
    cout<<num1-num2<<endl;
   }
   if(operation=="*"){
    cout<<num1*num2<<endl;
   }
   if(operation=="/"){
    cout<<num1/num2<<endl;
   }
   }
   else{
    if(operation=="!"){
      cout<<factorial(num1);
      
    
   }
   if(operation=="!!"){
     
        
        
      int zeros=0;
      while(num1>0){
        zeros=zeros+num1/5;
        num1=num1/5;
      }

      cout<<zeros<<endl;
    
   }
   }
   }while(true);
  
   





}

int normalMode(){

   
     cout<<"\t1. Add two number " << endl;
     cout<<"\t2. Substract two number " << endl;
     cout<<"\t3. Multiply two number " << endl;
     cout<<"\t4. Divide two number " << endl;
     cout<<"\t5. factorial of number " << endl;
     cout<<"\t6. number of zeros number " << endl;
     cout<<"\t7. Enter Zen mode " << endl;
     cout<<"\t   Anything else to exit " << endl;
      int choice;
    cout<<"Enter the choice : "<<endl;
    cin>>choice;


    if(choice == 1 ||choice == 2 ||choice == 3 ||choice == 4 ||choice == 5 ||choice == 6 ||choice == 7 ){


      int num,num1,num2;


      if(choice == 1 ||choice == 2 ||choice == 3 ||choice == 4){
        cout<<"Enter Two Number : ";
        
        cin>>num1>>num2;
      }
     



      if(choice==1){
        

        cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
      }
      else if(choice==2){
        
        cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
      }
       else if(choice==3){
        
        cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
      }
       else if(choice==4){
       
        cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;      
        }
       else if(choice==5){

        int num;
        cout<<"Enter A Number : ";
        cin>>num;
        
       int fac=factorial(num);
       cout<<num<<" != "<<fac<<endl;
            
        }

      else if(choice==6){
        int num;
        cout<<"Enter A Number : ";
        cin>>num;
        int tem=num;
        //to get the zeros at the end of a factorial at the end of the number
        // every 5 number a zero is added (5*2) till n , every 25 number one more exta 5 is added till n and every 125 number one more 5 is added till n and sooo on

        //formula zeros=zeros+n/5; n=n/5; in while (n>0)
      int zeros=0;
      while(num>0){
        zeros=zeros+num/5;
        num=num/5;
      }

      cout<<tem<<" != "<<zeros<<endl;
      }
      else if(choice==7){
        
       return ZEN_MODE;


      }
      return MORMAL_MODE;
        
    }
   
    else{
      
      cout<< "========Exit======="<< endl;
      return EXIT_MODE;
      

      }
      

}


int main(){

  int mode=0;
  

   do{
      if(mode==MORMAL_MODE){
        mode=normalMode();
      }
      
      else if (mode==ZEN_MODE){
        mode=zenMode();
      }
      
      
    }while(mode !=EXIT_MODE);
  


        return 0;
    }
#include<iostream>

// students Application 
using namespace std;
int main(){
int n, sum=0;
cout<<"Number of Students : "<<endl;
cin>>n;
int students[n];

//input 
for (int i = 0; i <n; i++)
{

    cout<<"Students marks"<<i+1<<"="<<endl;
    cin>>students[i];
     sum= sum+students[i];
}







    cout<<"total  marks :"<<sum<<endl;

    float avg=(float) sum/n;
    cout<<"Average marks :"<<avg<<endl;
    // max and minimum
    int max=students[0];
    int min = students[0];
    
    for (int i = 1; i < n; i++)

    {

    


       if (max <students[i])
       {
        max=students[i];
       }
        if (min> students[i])
        {
          min= students[i];
        }
       
        
    
    




}

 cout<<"Max mark :"<<max<<endl;
                cout<<"Min mark :"<<min<<endl;

}
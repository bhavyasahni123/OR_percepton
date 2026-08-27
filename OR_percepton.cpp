#include <iostream>
#include <vector>
using namespace std;
int activation(double z){
    /*unit step function*/
    if(z>=0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    vector<vector<int>> input ={{0,0},{0,1},{1,0},{1,1}};   
    vector<int> target ={0,1,1,1};
    double w1=0;
    double w2=0;
    double b=0;
    double n=0.1;
    
    for (int epoch=0;epoch<=5;epoch++){
        for(int i=0;i<=3;i++){;
            double z=(w1*input[i][0])+(w2*input[i][1])+b;
            int y=activation(z);
            int error=target[i]-y;
            
            cout<<"epoch:"<<epoch<<"\n";
            cout<<"error:"<<error<<"\n";
            cout<<"\n";


            w1=w1+(n*error*input[i][0]);
            w2=w2+(n*error*input[i][1]);
            b=b+(n*error);

        }
    }
}

#include<iostream>
#include<array>
#include<cctype>
#include<cfloat>

using namespace std;

bool isdigit(double i){
    if (i <= DBL_MAX && i>= DBL_MIN)
        return true;
    else
        return false;
}

int main(){
    array<double,10> donation;
    int i=0;
    double total=0.0;
    while(i<10){
        cin >> donation[i];
        if(isdigit(donation[i])==false){
            --i;
            break;
        }
        total+=donation[i];
        ++i;
    }
    double average=total/(i+1);
    int c=0;
    cout<<"数字的平均值为"<<average<<endl;
    for(int j=0;j<i+1;j++){
        if(donation[j]>average)
            c++;
    }
    cout<<c<<"个数大于平均值";

}

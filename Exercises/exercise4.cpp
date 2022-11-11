#include<iostream>
#include<cmath>

using namespace std;
    bool checker;
    int i,j;
int isSquare(int num1,int num2){
    int sq1 = pow(num1,2);
    int sq2 = pow(num2,2);
    double sqtf = sqrt(sq1+sq2);
    int sqti = sqrt(sq1+sq2);


    if(sqti == sqtf){
        checker = true;
    }else{
        checker = false;
    }
if(checker){
    cout<<"("<<num1<<","<<num2<<")"<<endl;
    return sqti;
}
   else{

return 0;
   }
}
int main(){
    int collection[100]{};

    for(i=1;i<100;i++){
        for(j=1;j<100;j++){

            collection[j] = isSquare(i,j);
            
        }
            cout<<sizeof(collection[i])<<endl;
    }
    int arrLen = sizeof(collection)/sizeof(collection[j]);

}


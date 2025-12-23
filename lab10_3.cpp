//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include <fstream> 
#include <iostream>
#include <iomanip>
#include <cmath> 
using namespace std;

int main(){
    double sum = 0;
    double i = 0;
    double dev ; 
    double othersum; 
    string textline ; 
    ifstream source;
    source.open("score.txt");
    while (getline(source , textline)){
        i ++ ;  
        sum += stod(textline) ; 
        othersum += pow(stod(textline), 2 ) ; 
    }



 
    dev = sqrt((othersum/i)-(pow(sum/i, 2)));
    cout << "Number of data = " << i << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum/i << endl;
    cout << "Standard deviation = " << dev << endl ;
    //cout << "sum" << sum << endl; 
}

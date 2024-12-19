#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    int count = 0;
    float sum = 0;
    float sum_two = 0;
    float mean ;
    string num;
    ifstream source;
    source.open("score.txt") ;
    while(getline(source,num)){
        sum += atof(num.c_str());
        sum_two += pow(atof(num.c_str()),2);
        count++; 
    }
    cout << "Number of data = "<< count <<endl;
    cout << setprecision(3);
    mean = sum/count;
    cout << "Mean = "<< mean << endl;
    cout << "Standard deviation = " << sqrt((sum_two/count)-(pow(mean,2)));
}
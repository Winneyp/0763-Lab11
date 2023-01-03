
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
    int count = 0;
    double xi=0,xiMiw=0,miw, stde, dmean, dmean2;
    string mean, mean2;
    ifstream source("score.txt");
    while (getline(source,mean))
    {
        dmean = atof(mean.c_str());
        xi += dmean;
        count++;
    }
    source.close();
    source.open("score.txt");
    miw = (1.0/count)*xi;
    while (getline(source,mean2))
    {
        dmean2 = atof(mean2.c_str());
        xiMiw += pow((dmean2-miw),2.0);
    }
    stde = sqrt((1.0/count)*xiMiw);

    cout << "Number of data = "<<count<<endl;
    cout << setprecision(3);
    cout << "Mean = "<<miw<<endl;
    cout << "Standard deviation = "<<stde;
}
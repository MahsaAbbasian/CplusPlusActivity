#include <iostream>
#include <vector>
using namespace std;

float avrageValidNumber(const vector<int>& readings){

    int sum=0;
    int count=0;

    for(int value:readings){
        if (value != -1000) {
                sum += value;
                count++;
            
        }
    }
    if(count == 0)
    return 0;

    return static_cast<float>(sum)/count;

} 
int main() {
    vector<int> data = {22, -1000, 25, 24, -1000, 23};

    float avg = avrageValidNumber(data);
    cout << "Average of valid readings: " << avg << endl;

    return 0;
}
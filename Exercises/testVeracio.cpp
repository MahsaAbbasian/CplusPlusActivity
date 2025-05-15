// Online C++ compiler to run C++ program online
#include <iostream>

#include <vector>
 
using namespace std;
 
vector<int> sortVector(vector<int> vec) {
    int size = vec.size();
    for(int i=0; i<size-1; i++){
        for(int j=0;j<size-1; j++){
            if(vec[j] > vec[j + 1]) {
            int temp=vec[j];
            vec[j]=vec[j+1];
            vec[j+1] = temp;
        }
    }
}
	return vec; // TODO


}
int main() {

	vector<int> numbers = {12, 36, 23, 34, 46, 323, 123, 12, 3456, 6, 23, 234, 23, 45, 1, 12, 6};

    vector<int> sortedNumbers = sortVector(numbers); 
    
    cout<< "value is: {";
    for(int i=0; i<sortedNumbers.size()-1; i++){
        
        cout<< sortedNumbers[i]<< " , ";
    }
    cout<<" }";

	return 0;

}
 
#include <iostream>

using namespace std;

int main(){
    int valueOne,valueTwo;
    int largerValue;

    cout << "Please write down two numbers:" << endl;
    cin >> valueOne >> valueTwo;
    // if(valueOne > valueTwo){
    //     largerValue = valueOne;
    // }else{
    //     largerValue = valueTwo;
    // }

    largerValue = (valueOne > valueTwo) ? valueOne : valueTwo;
    
    cout << "the larger value was " << largerValue;
    return 0;
}
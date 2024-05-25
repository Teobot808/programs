// C++ Program to split a string by a delimiter 
#include <iostream> 
#include <sstream> 
#include <vector> 
#include <unordered_map> 
#include <map> 


using namespace std; 

int main() 
{ 


    //DATA POSITIONS !!!!
////////////////////////
int posVolt = 0;                   
int posTemp = 1;
int posAMP = 2;
int posRPM = 3;
////////////////////////


unordered_map<int, string> myMap = { { posVolt, "Volt" }, { posTemp, "Temp" },{ posAMP, "Amp" },{ posRPM, "RPM" }  };  

    string inputString = "12%50%17"; 

    stringstream ss(inputString); 
    string token; 
    vector<string> data; 
    
    char delimiter = '%';       //delimiter

    while (getline(ss, token, delimiter)) { 
        data.push_back(token); 
    } 



    // Output the string after splitting 
    cout << "String after splitting: " << endl; 
    for(int i=0;i < data.size();i++){
    
        cout <<myMap[i]<<"  =  "<<data[i]<<endl;
    }

    return 0; 
}
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1 = {1,2,3,4};
    // cout << v1[1] << endl;
    
    v1.push_back(1); //append element at the back
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(1);

    //the capacity of a vector will be doubled anytime new space needs to be allocated 
    cout <<v1.size()<<endl; //shows the actual size of the vector
    cout <<v1.capacity()<<endl; //shows the capacity of the vector

    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();

    //the capacity of a vector will grow by itself when needed BUT WILL NOT SHRINK BY ITSELF
    cout <<v1.size()<<endl;
    cout <<v1.capacity()<<endl;

    v1.shrink_to_fit();
    cout <<v1.size()<<endl;
    cout <<v1.capacity()<<endl;
    


    //iterating through a  vector
    vector<int> v2 = {41,40,27,45};
    for (int i=0;i<v2.size();++i){
        cout<<v2[i]<<'\t';
    };
    cout<<"\n"<<*v2.begin()<<'\t'<<v2.back()<<endl;


    //based on pointer where itr points initially to the first element of the vector
    for (auto itr = v2.begin(); itr!=v2.end(); ++itr ){
        cout<< *itr <<endl;
    };
}
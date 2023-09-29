#include<iostream>
using namespace std;

int main(){

    int num{10};
    cout <<"Value of num is: "<<num << endl;
    cout <<"sizeof num is: "<<sizeof num << endl;
    cout <<"Address of num is: "<<&num << endl;

//     Value of num is: 10
// sizeof num is: 4
// Address of num is: 0x61ff0c

    cout <<endl << endl << endl<< endl;

    int *p;
    cout <<"\nValue of p is: " << p << endl; //garbage danger 💀💀💀⚡⚡
    cout <<"Address of p is: " <<&p <<endl; //it print the address where the variable store p;
    cout <<"sizeof p is: " <<sizeof p <<endl; 

 //     Value of p is: 0x61ff54
 // Address of p is: 0x61ff08
 // sizeof p is: 4

    cout <<endl << endl << endl<< endl;

    p = nullptr;
    cout <<"\nValue of p is "<< p << endl;
    //Value of p is 0

    cout <<endl << endl << endl<< endl;

    int score{10};
    double high_temp{100.7};

    int *score_ptr{nullptr};

    score_ptr = &score;
    cout <<"Value of score is: " << score << endl;
    cout <<"Address of score_ptr is: "<<&score <<endl;
    cout <<"Value of score_ptr is: "<<score_ptr << endl;

// Value of score is: 10
// Address of score_ptr is: 0x61fef8
// Value of score_ptr is: 0x61fef8

    cout <<endl << endl << endl<< endl;


    int  score1{10};
    double high_temp1{100.7};

    int *score_ptr1{nullptr};
    score_ptr1 = &score1;
    cout <<"Value of score is :"<<score1 << endl;
    cout <<"Address of score is :" <<&score1 << endl;
    cout <<"Value of score_ptr is: "<<score_ptr1 <<endl;
    
    //score_ptr = &high_temp;//compiler error
    //'double*' to 'int*' in assignment how chutiyo ho kya 🤦‍♀️🤦‍♀️



    cout <<endl <<endl << endl<<endl << endl <<endl;
    double high_temp2 {100.7};
    double low_temp{37.2};

    double *temp_ptr;

    temp_ptr = &high_temp2; //points to the high_temp
    temp_ptr = &low_temp; //now points to low_temp
    
    temp_ptr = nullptr;

    cout <<"Value of  is :temp_ptr"<<temp_ptr << endl;
    cout <<"Address of temp_ptr is :" <<&temp_ptr << endl;
    cout <<"Value of low_temp is: "<<&low_temp <<endl;


    cout << endl;

}
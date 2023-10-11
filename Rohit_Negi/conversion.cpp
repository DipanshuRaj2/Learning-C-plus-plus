/*#include<iostream>
using namespace std;
int reverseDigit(int num){
    int rem = 0 , ans = 0 , mul = 1;
    while(num>0){
        rem = num % 10;

        num = num /10;

        ans = ans * mul + rem;

        mul = mul *10;
        
    }

    return ans;
}
int main(){
    int num;
    cin >> num;

    cout<<"reverse Digit: " <<reverseDigit(num);
}*/

//convert Decimal to Binary 
// naive solution
/*
#include<iostream>
using namespace std;

int DecimaltoBinary(int num){
    int rem = 0 , ans = 0 , mul = 1;
    while(num > 0){

        rem = num % 2; // rem = num & 1; 

        num = num / 2; // num = num >>1; right shift

        ans = rem * mul + ans;

        mul = mul * 10;
        
    }
    return ans;
    
}

int main(){
    int num;

    cin >> num;

    cout <<"Decimal to Binary: "<<DecimaltoBinary(num);
}
*/
/*
#include<iostream>
using namespace std;

int binarytoDecimal(int num){
    int mul = 1 ,ans = 0, rem = 0;
    while (num > 0)
    {   
        rem = num % 10 ;

        num =num/10;

        ans = rem * mul + ans;

        mul = mul*2;
    }
    return ans;
    
}

int main(){
    int num;

    cin >> num;

    cout <<"Binary to Decimal "<<binarytoDecimal(num);
}
*/

//Decimal to Binary
#include<iostream>
using namespace std;
int DecimaltoOctal(int num){
    
    int rem = 0 , mul = 1 , ans = 0;
    while(num > 0){

        rem  = num % 8;

        num = num / 8;

        ans = rem * mul + ans;

        mul = mul * 10;
 
    }
    return ans;
}
int main(){

    int num;

    cin >> num;

    cout <<"Decimal to Octal: "<<DecimaltoOctal(num);
}
#include<iostream>
using namespace std;
int power(int m ,int n ){
    if ( n == 0)
    {
        return 1;
    }
    if( m == 0){
        return 0;


    }
  return  m *power(m , n -1);
    
}
int main(){
    int m , n;
    cin >> m >> n;
    cout <<power(m , n);
}
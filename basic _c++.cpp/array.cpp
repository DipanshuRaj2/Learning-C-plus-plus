/*
basic operation of array:-

1. searching

#include<iostream>
using namespace std;
int search(int arr[], int n , int x)
{
    for(int i = 0; i < n; i++){
        if(arr[i] == x)
            return i;
    }
    return -1;
    
}
int main(){
    int n;
    cout << "Enter the size of the array ";
    cin >> n;
    int arr[n] , x ,i;
    

    for(i = 0; i< n; i++){
        cin >> arr[i];
    }

    cout <<"Enter the element you want to search ";

    cin >> x;


    if (search(arr , n , x)!=-1)
      cout <<x<<" element is found at index ";

    else
     cout <<"element is not found";
}

2. inserting


#include<iostream>
using namespace std;

int inserting(int arr[] , int n, int pos, int cap, int x, int i){
    if(n == cap)
       return n;

    int idx = pos - 1;
    for(i = n-1; i >=idx; i--)
        arr[i+1] = arr[i];
    
      arr[idx] = x;

   return (n+1);

}
int main(){
    int n;

    cout <<"enter the size of the array ";

    cin >> n;
    int arr[n] , cap , pos, x, i;

    cout <<"Enter the element in the array " ;
    for(i = 0; i < n; i++)
        cin >> arr[i];
    


    cout <<"Enter the position you want to insert "<<endl;

    if (n == pos)
        return n;

    cin >> pos;

    cout << "Enter the element to insert "<<endl;

    cin >> x;

    n = inserting(arr , n, pos, cap,x, i);

    for(int i = 0; i< n; i++){
        cout << arr[i]<<" ";
    }
}
*/

// #include<iostream>
// using namespace std;

// int deletion(int n , int x , int arr[])
// {
//     int i;
//     for(i = 0; i < n; i++)
//         if(arr[i] == x)
//             break;

//     if(n == i)
//         return n;
    
//     for(int j = i; j < n-1; j++)
//         arr[j]=arr[j+1];

//     return(n-1);
//     }

// int main(){
//     int n;
//     cin>>n;
//     for(int i)
// }

// using static array
// insertion 
/*
#include<iostream>
using namespace std;

int insertion(int arr[] , int n , int cap , int x, int pos){
    int i;

    if(n == cap)
        return cap;

    int idx = pos -1;

    for(int i = n-1 ; i >=idx; i--){
        arr[i+1] = arr[i];
    }
    arr[idx] = x;

    return n+1;
}

int main(){
    int arr[100] ={1 , 23 , 12 , 24 , 25};

    int n = 5;
    int cap = 20;
    int x  = 100;
    int pos = 3;

    n = insertion(arr , n , cap, x,pos);


    for(int i = 0; i < n; i++){
        cout << arr[i]<<"   ";
    }
}
*/

#include<iostream>
using namespace std;
int deletion(int arr[], int n, int x){
    int i;
    for(i = 0; i < n; i++)
        if(arr[i] == x)
            break;

    if(n == i){

        return n;
    }

        

    for(int j = i; j < n-1; j++){
        arr[j] = arr[j+1];
    }
    return n-1;
        
}
int main(){
    int arr[10]={10, 29 , 3 , 32 , 43,};
    int n = 5;
    
    int x ;
    cout <<"Enter the element you want to delete ";
    cin >> x;

    n = deletion(arr , n ,x);
    
    cout << "After Deletion ";
    for(int i = 0 ; i < n; i++){
        cout << arr [i] <<" ";
    }
}
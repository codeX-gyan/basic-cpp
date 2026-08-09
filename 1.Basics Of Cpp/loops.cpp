// //NUMPER PRINTING
// #include<iostream>
// using namespace std;
// int main() {
//     int n ;
//     cout<<"enter n : ";
//     cin>>n;

//     for (int i=0 ; i<=n; i++) {
//         cout<<i<<endl;
//     }
// }



//ODD NUMBERS PRINTING

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i=1 ; i<=100 ; i=i+2) {
//         cout<<i<<endl;
//     }
// }



//EEVEN NUMBER PRINTING

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i=2 ; i<=100 ; i=i+2) {
//         cout<<i<<endl;
//     }
// }



//TABLE PRINTING

// #include<iostream>
// using namespace std;
// int main() {
//     int n ;
//     cout<<"enter n : ";
//     cin>>n;

//     for (int i=1 ; i<=10 ; i++) {
//         cout<<i*n<<endl;
//     }
// }



//DISPLAY THE AP

// #include<iostream>
// using namespace std;
// int main() {
//     int n  ;
//     cout<<"enter n : ";
//     cin>>n;

//     for (int i=4 ; i<=3*n+1; i+=2) {
//         cout<<i<<endl;
//     }
// }



//DISPLAYING GP

// #include<iostream>
// using namespace std;
// int main() {
//     int n , a=1 , r=2 ;
//     cout<<"enter n : ";
//     cin>>n;

//     for (int i=1 ; i<=n; i++) {
//         cout<<a<<endl;
//         a = a*r;
//     }
// }


//FINDING FACTOR OF A NUMBER 

// #include<iostream>
// using namespace std;
// int main() {
//     int n ;
//     cout<<"enter n : ";
//     cin>>n;

//     //int f=1;
//     for (int i=1 ; i<=n ; i++) {
//         if(n%i==0) cout<<i<<" " ;
//     }
// }

 //       -----USING break STATEMENT-----


// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<" enter n : " ;
//     cin>>n;

//     for ( int i = n/2; i>=1 ;i--){
//         if(n%i == 0 ) {
//             cout<<i<<endl;
//             break;
//         }
//     }    
// }
   


//FINDING 2ND LARGEST FACTOR OF ANY NUMBER 

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     int count = 0;                      //avi tk hume ek bhi factor nhi mila hai

//     for (int i = n / 2; i >= 1; i--) {

//         if (n % i == 0) {
//             count++;                    //ek factor mil chuka hai still we are continue

//             if (count == 2) {           // count==2 ka mtlb hum 2nd factor dhundh rhe h milte hi print krr denge 
//                 cout << "2nd largest factor = " << i << endl;
//                 break;
//             }
//         }
//     }
// }



//COMPOSITE NUMBER 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//      cout << "Enter n: ";
//      cin >> n;

//      for ( int i = 2 ; i<=n-1 ; i++){
//         if (n%i ==0) cout<<i<<" ";
//      }

// }


//     -------CONTINUE STATEMENTS------
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     for (int i = 1; i <= 5; i++) {

//         if(i==3 || i==2) {
//             continue;
//         }

//         cout << i << endl;
//     }
// }



// PRIME NUMBER PRINTING USING CONTINUE 

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {

//         if(i%2==0) {
//             continue;
//         }

//         cout << i << endl;
//     }
// }


//    -----FACTORIALS------
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int product = 1;

    for (int x = 1; x <= n; x++) {
        product *= x;
    }

    cout << product;
}

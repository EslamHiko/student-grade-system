#include <iostream>

using namespace std;
typedef struct Student {
    char name[30];
    int arb, eng, math, com, total = 0;
} S ;
int main()
{
    int x;
    cout << "How Many Students Do You Want To Enter : " ;
    cin >> x;
    S a[x];
    for(int i = 0; i < x; i++){
        cout << "Enter Student(" << i + 1 << ") Name : ";
        cin >> a[i].name ;
        cout << "Enter ARB : " ;
        cin >> a[i].arb ;
        cout << "Enter Eng : " ;
        cin >> a[i].eng ;
        cout << "Enter MATH : " ;
        cin >> a[i].math ;
        cout << "Enter COM : " ;
        cin >> a[i].com ;
        a[i].total = a[i].arb + a[i].eng + a[i].math + a[i].com ;
    }
    S temp;
    for(int j = 0; j < x; j++){
        for(int k = j + 1; k < x; k++){
        if (a[j].total < a[k].total){
            temp = a[j] ;
            a[j] = a[k] ;
            a[k] = temp ;
        }
        }
    }
    cout << "==================================================" << endl;
    cout << "Rank \t Name \t ARB \t Eng \t Math \t Com \t Total " << endl;
    for (int h = 0; h < x; h++){
        cout << h + 1 << " \t " << a[h].name << " \t " << a[h].arb << " \t " << a[h].eng ;
        cout << " \t " << a[h].math << " \t " << a[h].com << " \t " << a[h].total << endl;
    }
    //E.H

}

#include <iostream>
using namespace std;
void min_max(int* arr, int size, int* min, int* max)
{
    if (size <= 0) {
        *min = *max = 0;
        return;
    }
    *min = *max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < *min) *min = arr[i];
        if (arr[i] > *max) *max = arr[i];
    }
    cout<<min<<" "<<max;
}
int main(){
    int tab[5]={1,2,3,4,5};
    int tab2[6]={9,8,7,6,5,4};
    int min=0;
    int max=0;
    min_max(tab,5,&min,&max); 
    cout<<"min:"<<min<<" max:"<<max<<endl; 
    min_max(tab2,6,&min,&max);
    cout<<"min:"<<min<<" max:"<<max<<endl;
    return 0;
}
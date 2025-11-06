#include <iostream>
using namespace std;

int sum_array(int*a,int size){
    int suma=0;
    for(int *i=a;i<a+size; i++){
    suma+=*i;
    return suma;
}
int main(){

}
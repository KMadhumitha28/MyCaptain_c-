#include <canio.h>
#include <cstdio>
#include <stdlib>
#include <iostream>
#include <string.h>

using namespace std;

static int p{0};

class b{
    char bus_no[5], driver[20], arrival[5], departure[5], from[10], to[10], seat[8][4][10];
    public:
    void install();
    void allortment();
    void empty();
    void show();
    void avail();
    void position(int n);
}
bus[10];

void vline(char ch){
    for(int i=80; i>0;i--){
        cout<<ch;
    }
}

void a::install(){
    cout<<"Enter the bus number: "
}

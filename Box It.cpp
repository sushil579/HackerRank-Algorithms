#include<bits/stdc++.h>

using namespace std;


class Box { 
public:

int l,b,h;

    Box(){
        l =0;
        b=0;
        h=0;
    }
    Box(int l,int h,int b)  {
        l =l;
        b=b;
        h=h;
    }  

    Box(Box &B){
        l=B.l;
        b=B.b;
        h=B.h;
    }
//do this
    
    using namespace std;


class Box { 
public:

int l,b,h;

    Box(){
        l =0;
        b=0;
        h=0;
    }
    Box(int l,int h,int b)  {
        l =l;
        b=b;
        h=h;
    }  

    Box(Box &B){
        l=B.l;
        b=B.b;
        h=B.h;
    }


int getLength(){ return l;} // Return box's length
int getBreadth(){ return b;} // Return box's breadth
int getHeight(){ return h; } //Return box's height


long long CalculateVolume() {
    // Return the volume of the box
    return l*b*h;
}

//Overload operator < as specified
bool operator<(Box& B){
      if(this->l<B.l)
        return true;
      else if(this->b<B.b){
        if(this->l ==B.l)
        return true;
      }
      else if(this->h<B.h){
        if(this->l ==B.l && this->b == B.b)
        return true;
      }
    return false;
}

//Overload operator << as specified
friend ostream& operator <<(ostream& out, const Box& b){
    out << b.l << " " << b.b << " " << b.h;
    return out;
}

int getLength(){ return l;} // Return box's length
int getBreadth(){ return b;} // Return box's breadth
int getHeight(){ return h; } //Return box's height


long long CalculateVolume() {
    // Return the volume of the box
    return l*b*h;
}

//Overload operator < as specified
bool operator<(Box& B){
      if(l<B.l)
        return true;
      else if(b<B.b){
        if(l ==B.l)
        return true;
      }
      else if(h<B.h){
        if(l ==B.l && b == B.b)
        return true;
      }

}

//Overload operator << as specified
ostream &operator<<(ostream &out, Box &B){
    out << B.getLength() << " " << B.getBreadth() << " " B.getHeight();
}


};


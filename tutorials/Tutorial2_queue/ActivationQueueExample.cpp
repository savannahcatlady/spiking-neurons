// Compile the code with the following shell command: 
// g++ -std=c++14 ActivationQueueDemo.cpp -o ActivationQueueDemo
// Mac-users will need Xcode command line tools to compile this. Additionally Xcode project can be used if someone prefers. 
// This code does not do anything yet, but just is an empty skeleton.
// Example code by Karoliina Salminen

#include <queue>
#include <iostream>
#include <tuple>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <map>


class Point3
{
    public:
    Point3():x(0),y(0),z(0){

    }
    Point3(int xx, int yy, int zz):x(xx),y(yy),z(zz) {
        
    }
    Point3(std::tuple<int,int,int> p){
        x = std::get<0>(p); 
        y = std::get<1>(p);
        z = std::get<2>(p);
    }

    int x=0;
    int y=0;
    int z=0;
};

class ActivationQueue
{
    public: 
    void push(std::pair<Point3,float> address){
        q.push(address);
    }

    std::pair<Point3,float> pop(){
        std::pair<Point3,float> p;
        if(!q.empty()){
            p = q.front();
            q.pop();
        }
        return p;
    }

    std::queue<std::pair<Point3,float>> q;

};

// Global declaration of the queue

ActivationQueue activationQueue;

int main (){
    std::cout << "Activation queue demonstrator\n";
    std::pair<Point3,float> activation = std::make_pair<Point3,float>(Point3(-25,196,248),0.4);
    activationQueue.push(activation);
    std::pair<Point3,float> poppedActivation = activationQueue.pop();
    return 0;
}

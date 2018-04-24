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

class Point3
{
    public:

    std::tuple<int,int,int> p;

};

class ActivationQueue
{
    public: 

    std::queue<std::pair<Point3,float>> q;

};

// Global declaration of the queue

ActivationQueue activationQueue;

int main (){
    std::cout << "Activation queue demonstrator\n";
    return 0;
}

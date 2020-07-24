/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Simple_Vector_Augmentation.cpp
 * Author: Gabrielle
 *
 * Created on July 23, 2020, 8:24 PM
 */

// SplVctr class template
#include <iostream>  // Needed for output of exceptions
#include <new>       // Needed for bad_alloc exception
#include <cstdlib>   // Needed for the exit function
using namespace std;

/*
 * The following stubs for the Simple Vector have been added to the class and 
 * are awaiting implementation.
 * The Vector needs the ability to add and delete from the front and the back of 
 * the Array.
 * Your job is to implement the following behaviors/functions.
 *        //Assignment - Adding and subtracting from the Vector
 *        void pshFrnt(T);//Push from the Front
 *        void pshBck(T); //Push from the Back
 *        T    popFrnt(); //Pop from the Front
 *        T    popBck();  //Pop from the Back
 */

template <class T>
class SplVctr{
    private:
       T *aptr;          // To point to the allocated array
       int arySize;      // Number of elements in the array
       void memErr();    // Handles memory allocation errors
       void subErr();    // Handles subscripts out of range
    public:
       // Default constructor
       SplVctr(){ aptr = 0; arySize = 0;}
       // Constructor declaration
       SplVctr(int);
       // Copy constructor declaration
       SplVctr(const SplVctr &);
       // Destructor declaration
       ~SplVctr();
       // Accessor to return the array size
       int size() const { return arySize; }
       // Accessor to return a specific element
       T gtElmAt(int position);
       // Overloaded [] operator declaration
       T &operator[](const int &);
       //Assignment - Adding and subtracting from the Vector
       void pshFrnt(T);//Push from the Front
       void pshBck(T); //Push from the Back
       T    popFrnt(); //Pop from the Front
       T    popBck();  //Pop from the Back
};

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// Stubs for the Assignment
// Add 1 or Delete 1 front or back for SplVctr class.
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
template <class T>
void SplVctr<T>::pshFrnt(T val){
    T *taptr = new T [arySize+1];
    if (taptr==0) memErr();
    //copy & augment
    for (int count = 1; count <=arySize;count++)
        *(taptr+count) = *(aptr+count-1);
    arySize+=1;
    *taptr=val;
    delete []aptr;
    aptr=taptr;
}

template <class T>
void SplVctr<T>::pshBck(T val){
    T *taptr = new T [arySize+1];
    if (taptr==0) memErr();
    //copy 
    for (int count = 0; count <arySize;count++)
        *(taptr+count) = *(aptr+count);
    //assign to last element
    *(taptr+arySize) = val;
    arySize+=1;
    delete []aptr;
    aptr=taptr;
}

template <class T>
T SplVctr<T>::popFrnt(){
    T *taptr = new T [arySize-1];
    if (taptr==0) memErr();
    //copy & augment
    for (int count = 0; count <arySize-1;count++)
        *(taptr+count) = *(aptr+count+1);
    arySize-=1;
    delete []aptr;
    aptr=taptr;
}

template <class T>
T SplVctr<T>::popBck(){
    T *taptr = new T [arySize-1];
    if (taptr==0) memErr();
    //copy & augment
    for (int count = 0; count <arySize-1;count++)
        *(taptr+count) = *(aptr+count);
    arySize-=1;
    delete []aptr;
    aptr=taptr; 
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

//******************************************************************************
// Constructor for SplVctr class. Sets the size of the
// array and allocates memory for it.                     
//******************************************************************************
template <class T>
SplVctr<T>::SplVctr(int s){
   arySize = s;
   // Allocate memory for the array.
   try{
      aptr = new T [s];
   }catch (bad_alloc){
      memErr();
   }
   // Initialize the array.
   for (int count = 0; count < arySize; count++)
      *(aptr + count) = 0;
}
//******************************************************************************
// Copy Constructor for SplVctr class.
//******************************************************************************
template <class T>
SplVctr<T>::SplVctr(const SplVctr &obj){
   // Copy the array size.
   arySize = obj.arySize;
   // Allocate memory for the array.
   aptr = new T [arySize];
   if (aptr == 0)
      memErr();
   // Copy the elements of obj's array.
   for(int count = 0; count < arySize; count++)
      *(aptr + count) = *(obj.aptr + count);
}
//******************************************************************************
// Destructor for SplVctr class.
//******************************************************************************
template <class T>
SplVctr<T>::~SplVctr(){
   if (arySize > 0)
      delete [] aptr;
}
//******************************************************************************
// memErr function. Displays an error message and     
// terminates the program when memory allocation fails. 
//******************************************************************************
template <class T>
void SplVctr<T>::memErr(){
   cout << "ERROR:Cannot allocate memory.\n";
   exit(EXIT_FAILURE);
}
//******************************************************************************
// subErr function. Displays an error message and         
// terminates the program when a subscript is out of range. 
//******************************************************************************
template <class T>
void SplVctr<T>::subErr(){
   cout << "ERROR: Subscript out of range.\n";
   exit(EXIT_FAILURE);
}
//******************************************************************************
// gtElmAt function. The argument is a subscript.  
// This function returns the value stored at the sub-
// script in the array.                                  
//******************************************************************************
template <class T>
T SplVctr<T>::gtElmAt(int sub){
   if (sub < 0 || sub >= arySize)
      subErr();
   return aptr[sub];
}
//******************************************************************************
// Overloaded [] operator. The argument is a subscript. 
// This function returns a reference to the element     
// in the array indexed by the subscript.               
//******************************************************************************
template <class T>
T &SplVctr<T>::operator[](const int &sub){
   if (sub < 0 || sub >= arySize)
      subErr();
   return aptr[sub];
}




//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillVec(SplVctr<int> &);      //Fill the Vector
void addVec(SplVctr<int> &);       //Add to the Vector
void delVec(SplVctr<int> &);       //Delete from the Vector
void prntVec(SplVctr<int> &,int);  //Print the Vector

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int size;
    
    //Read in the size
    cout<<"What size vector to test?"<<endl;
    cin>>size;
    SplVctr<int> sv(size);
 
    //Initialize or input i.e. set variable values
    fillVec(sv);
    
    //Display the outputs
    prntVec(sv,10);
    
    //Add and subtract from the vector
    addVec(sv);
    
    //Display the outputs
    prntVec(sv,10);
    
    //Add and subtract from the vector
    delVec(sv);
    
    //Display the outputs
    prntVec(sv,10);

    //Exit stage right or left!
    return 0;
}

void addVec(SplVctr<int> &sv){
    int add=sv.size()*0.1;
    for(int i=1;i<=add;i++){
        sv.pshFrnt(add-i+1);
        sv.pshBck(i);
    }
}

void delVec(SplVctr<int> &sv){
    int del=sv.size()*0.2;
    for(int i=1;i<=del;i++){
        sv.popFrnt();
        sv.popBck();
    }
}

void fillVec(SplVctr<int> &sv){
    for(int i=0;i<sv.size();i++){
        sv[i]=i%10;
    }
}
void prntVec(SplVctr<int> &sv,int n){
    cout<<endl;
    for(int i=0;i<sv.size();i++){
        cout<<sv[i]<<" ";
        if(i%n==(n-1))cout<<endl;
    }
    cout<<endl;
}


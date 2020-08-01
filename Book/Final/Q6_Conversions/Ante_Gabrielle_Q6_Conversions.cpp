/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Q6_Conversions.cpp
 * Author: Gabrielle
 *
 * Created on July 27, 2020, 7:16 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * Given the following base 10 decimals
 * a)3.75
 * b)0.3
 * c)89.7
 * 1) Convert to binary, octal and hex, then 
 * 2) Convert to NASA Hex float with first 24 bits representing the
 * signed fraction and the last 8 bits representing the
 * signed exponent. Scaled as 0.FRACTION x 2^EXPONENT
 * 3) convert a) to scaled integer binary 1 unsinged byte maxium bits,
 *    convert b) to scaled integer binary 2 unsinged byte maxium bits,
 *    convert c) to scaled integer binary 3 unsinged byte maxium bits,
 * 4) multiply 3) by 1 byte value 7 then shift back to integer and output the result
 * 5) Then convert 2) using IEEE 754 format
 */
int main(int argc, char** argv) {

    int s = 11, a = 21; //for Q1;
    int b = 8;//for Q2 and 5
    int c = 10; // for Q3
    cout << left << setw(s+3)<< " 1) " << left << setw(a) << "BINARY" <<left << setw(a) << "OCTAL" << left << setw(a) << "HEX" << endl;
    cout << right << setw(s)<< "3.75" << ":  "<< left << setw(a) << "11.11" <<left << setw(a) << "3.6" << left << setw(a) << "3.C" <<endl; 
    cout << right << setw(s)<< "0.3 " << ":  "<< left << setw(a) << "0.01001100_._." <<left << setw(a) << "0.2314631_._." << left << setw(a) << "0.4C_" << endl; 
    cout << right << setw(s)<< "89.7 "<< ":  " << left << setw(a) << "1011001.10110011_._." <<left << setw(a) << "131.54631_._." << left << setw(a) << "59.B3_"<< endl << endl; 
    cout << left << setw(s+3)<< " 2) " << "NASA Hex Float" << endl;
    cout << right << setw(s)<< "3.75" << ":  "<< left << setw(b) << "78000002" << endl; 
    cout << right << setw(s)<< "0.3 " << ":  "<< left << setw(b) << "4CCCCCFF" << endl; 
    cout << right << setw(s)<< "89.7 "<< ":  "<< left << setw(b) << "59B33307" << endl << endl; 
    
    unsigned char a3=0x3C;
    unsigned short b3=0x4CCD;
    unsigned int c3=0x59B333, p1=7*a3, p2=7*b3,p3=7*c3;
    cout << left << setw(s+3)<< " 3) " <<"Scaled   => as Integer" << endl;
    cout << right << setw(s)<< "3.75" << ":  "<< left << setw(c)<< "0x3C" << " = " << (int)a3 <<endl; 
    cout << right << setw(s)<< "0.3 " << ":  "<< left << setw(c)<< "0x4CCD" << " = "<<(int)b3 << endl; 
    cout << right << setw(s)<< "89.7 "<< ":  "<< left << setw(c)<< "0x59B333" << " = " << (int)c3 <<endl << endl; 
           
    cout << left << setw(s+3)<< " 4) "<< "Byte Rep from 3  Product"<< endl;
    cout << right << setw(s)<< "3.75" << ":  "<< left << setw(c)<< "0x3C" << " x 7 = "<< left << setw(c) << p1; 
    p1>>=4;
    cout << " + 4 shifts = " << p1 << endl; 
    cout << right << setw(s)<< "0.3 " << ":  "<< left << setw(c)<< "0x3C" << " x 7 = "<< left << setw(c) << p2;
    p2>>=16;
    cout << " +16 shifts = " << p2 << endl; 
    cout << right << setw(s)<< "89.7 "<< ":  "<< left << setw(c)<< "0x3C" << " x 7 = "<< left << setw(c) << p3;
    p3>>=16;
    cout << " +16 shifts = " << p3 << endl << endl; 
    cout << left << setw(s+3)<< " 5) " << left << setw(b) << "NASA Hex Float" << " to " << left << setw(b) << "IEEE 754" << endl;
    cout << right << setw(s)<< "3.75" << ":  "<< left << setw(b) << "78000002" << "  = " <<  left << setw(b) << "40700000" << endl; 
    cout << right << setw(s)<< "0.3 " << ":  "<< left << setw(b) << "4CCCCCFF" << "  = " <<  left << setw(b) << "3E99999A" << endl; 
    cout << right << setw(s)<< "89.7 "<< ":  "<< left << setw(b) << "59B33307" << "  = " <<  left << setw(b) << "42B36666" << endl << endl; 
    
    cout << "_ means last 1 repeating" << endl;
    cout << "_. means last 2 repeating" << endl;
    cout << "_._ means last 3 repeating" << endl;
    cout << "_._. means last 4 repeating" << endl;
    return 0;
}


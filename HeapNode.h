#pragma once
#include<iostream>
#include<sstream>
#include<string>
using namespace std;

class HeapNode {
public:
    int data;
    HeapNode* left;
    HeapNode* right;
    HeapNode* parent;
    HeapNode(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
        parent = NULL;
    }
};
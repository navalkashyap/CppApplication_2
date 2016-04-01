/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: naval
 *
 * Created on April 1, 2016, 1:29 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
struct node {
  int x;
  node *next;
};

int main()
{
  node *root;      // This will be the unchanging first node

  root = new node; // Now root points to a node struct
  root->next = 0;  // The node root points to has its next pointer
                   //  set equal to a null pointer
  root->x = 5;     // By using the -> operator, you can modify the node
                   //  a pointer (root in this case) points to.
  cout<< root->x<<endl;
}

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data % 10;
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends

// User function template for C++

/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
  Node* rev(Node* curr,Node* prev){
      if(curr==NULL){
          return prev;
      }
      
      Node* fut = curr->next;
      curr->next = prev ; 
      
      return rev(fut , curr);
    }
    
    
    Node* addOne(Node* head) {
        
        head = rev(head,NULL);
        Node* curr = head;
        int carry =1;
        while (curr) {
        int sum = curr->data + carry;
        curr->data = sum % 10;
        carry = sum / 10;
        
        // Move to next node
        if (curr->next == NULL && carry) {
            curr->next = new Node(carry);
            carry = 0; // No more carry left
        }
        curr = curr->next;
    }
        return rev(head,NULL);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
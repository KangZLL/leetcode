#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

int main(){
    int i=2;
    unordered_map<ListNode*,ListNode*> er;
    ListNode s(0);
    ListNode* head;
    ListNode* test;
    er[test] = &s;
    test->next=head;

    while(--i){
        cout<<i<<" ";
    }

    return 0;
}
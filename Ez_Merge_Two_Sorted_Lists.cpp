/*
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: list1 = [], list2 = []
Output: []
Example 3:

Input: list1 = [], list2 = [0]
Output: [0]
*/

#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// Định nghĩa một nút trong danh sách liên kết đơn
struct ListNode {
    int val ;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Hàm để in ra một danh sách liên kết
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) {
            cout << " -> ";
        }
        head = head->next;
    }
    cout << endl;
}
// 1 2 3
// 1 4 5
// cur
// class hợp nhất hai danh sách 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    		
    	if (list1 == nullptr) return list2;
        if(list2 == nullptr) return list1;

        // Sắp xếp 
        ListNode *cur = new ListNode(0);
        ListNode *tmp = cur;

        // So sánh từng phần tử của hai danh sách nếu nhỏ hơn cho vào danh sách trước
        while(list1 && list2)
        {
            if (list1->val <= list2->val)
            {
                cur->next = list1;
                list1 = list1->next;
                cur = cur->next;
            }
            else
            {
                cur ->next = list2;
                list2 = list2->next;
                cur = cur->next;
            }
        }
        
        // Xem phần tử còn lại nếu còn trỏ tiếp để add vào danh sách
        if(list1) 
        {
            cur->next = list1;
            list1 = list1->next;
            cur = cur->next;
        }
        else if(list2) 
        {
            cur->next = list2;
            list2 = list2->next;
            cur = cur->next;
        } 
        else cur->next = nullptr;

    // Trả về danh sách sau khi liên kết 
       return tmp->next;
    }
};

int main()
{
    Solution solution;

    // Tạo danh sách liên kết đầu tiên:
    ListNode* list1 = new ListNode(3);
    list1->next = new ListNode(4);
    list1->next->next = new ListNode(5);

    // Tạo danh sách liên kết thứ hai:
    ListNode* list2 = new ListNode(4);
    list2->next = new ListNode(5);
    list2->next->next = new ListNode(10);

    // Nối hai danh sách
    ListNode* mergedList = solution.mergeTwoLists(list1, list2);

    // In ra danh sách đã nối
    cout << "Danh sach da noi: ";
    printList(mergedList);
	cout<<endl;
	return 0;
}   
//Input: head = [1,1,2]
// Output: [1,2]
#include <iostream>

using namespace std;

// Định nghĩa node
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Hàm để in ra một danh sách liên kết
void printList(ListNode* head) {
    while (head != nullptr) {
        cout<< head->val;
        if (head->next != nullptr) {
            cout << " -> ";
        }
        head = head->next;
    }
    cout<<endl;
}

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *cur = head;
    	if(cur == nullptr || cur->next == nullptr) return head;

       	while(cur && cur->next)
        {
        	if(cur->val == cur->next->val){
        		ListNode* tmp1 =  cur->next;
        		cur->next = cur->next->next;
        		delete tmp1;
        	}else{
        		cur = cur->next;
        	}
        }

        return head;

    }
};

int main(){
	Solution v;

	// Khởi tạo các node
	ListNode* list1 = new ListNode(3);
    list1->next = new ListNode(5);
    list1->next->next = new ListNode(5);
    list1->next->next->next = new ListNode(8);

    // Xoá phần tử trùng lặp
    ListNode* mergedList = v.deleteDuplicates(list1);

     // In ra danh sách đã xoá
    cout << "Danh sach da noi: ";
    printList(mergedList);



	cout<<endl;
	return 0;
}
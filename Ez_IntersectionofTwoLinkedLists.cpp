#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    int getSize(ListNode* head) {
        int size = 0;
        ListNode* current = head;
        while (current) {
            size++;
            current = current->next;
        }
        return size;
    }

    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        if (!headA || !headB) return nullptr;

        int sizeA = getSize(headA);
        int sizeB = getSize(headB);

        // Căn chỉnh danh sách
        while (sizeA > sizeB) {
            headA = headA->next;
            sizeA--;
        }
        while (sizeA < sizeB) {
            headB = headB->next;
            sizeB--;
        }

        // Tìm giao điểm
        while (headA && headB) {
            if (headA == headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }

        return nullptr;
    }
};

// Hàm tạo danh sách liên kết từ vector
ListNode* createList(const vector<int>& values) {
    if (values.empty()) return nullptr;
    ListNode* head = new ListNode(values[0]);
    ListNode* current = head;
    for (size_t i = 1; i < values.size(); ++i) {
        current->next = new ListNode(values[i]);
        current = current->next;
    }
    return head;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int intersectVal, skipA, skipB;
    vector<int> listA, listB;

    // Nhập giá trị intersectVal, skipA, skipB
    cin >> intersectVal >> skipA >> skipB;

    // Nhập số lượng phần tử trong listA
    int nA;
    cin >> nA;
    listA.resize(nA);
    for (int i = 0; i < nA; ++i) {
        cin >> listA[i];
    }

    // Nhập số lượng phần tử trong listB
    int nB;
    cin >> nB;
    listB.resize(nB);
    for (int i = 0; i < nB; ++i) {
        cin >> listB[i];
    }

    ListNode* headA = createList(listA);
    ListNode* headB = createList(listB);

    ListNode* intersect = new ListNode(intersectVal);

    ListNode* tempA = headA;    
    for (int i = 0; i < skipA; ++i) tempA = tempA->next;
    tempA->next = intersect;

    ListNode* tempB = headB;
    for (int i = 0; i < skipB; ++i) tempB = tempB->next;
    tempB->next = intersect;

    Solution solution;
    ListNode* result = solution.getIntersectionNode(headA, headB);

    if (result) {
        cout << result->val << endl;
    } else {
        cout << "0" << endl;  // Nếu không có giao điểm, in 0
    }
    return 0;
}


/*
Đầu vào: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3
 Đầu ra: Giao nhau tại '8'
 Giải thích: Giá trị của nút giao nhau là 8 
 (lưu ý rằng giá trị này không được bằng 0 nếu hai danh sách giao nhau).
Từ đầu A, nó đọc là [4,1,8,4,5]. Từ đầu B, nó đọc là [5,6,1,8,4,5]. 
Có 2 nút trước nút giao nhau trong A; Có 3 nút trước nút giao nhau trong B.
- Lưu ý rằng giá trị của nút giao nhau không phải là 1 vì các nút có giá trị 1 trong A và B 
( nút thứ 2 trong A và nút thứ 3 trong B) là các tham chiếu nút khác nhau. Nói cách khác, 
chúng trỏ đến hai vị trí khác nhau trong bộ nhớ, trong khi các nút có giá trị 8 trong A và B 
( nút thứ 3 trong A và nút thứ 4 trong B) trỏ đến cùng một vị trí trong bộ nhớ.

input
4 3 4
4 1 8 4 5 -1
5 6 1 8 4 5 -1

*/
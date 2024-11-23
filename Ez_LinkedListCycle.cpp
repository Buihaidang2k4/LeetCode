#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (!head || !head->next) return false;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;           // Di chuyển chậm 1 bước
            fast = fast->next->next;     // Di chuyển nhanh 2 bước

            if (slow == fast) {
                return true;  // Phát hiện chu trình
            }
        }
        return false;  // Không có chu trình
    }

    void display(ListNode* head) {
        unordered_set<ListNode*> visited; // Tập hợp để lưu các nút đã duyệt qua
        ListNode* current = head;

        while (current != nullptr) {
            // Kiểm tra nếu đã duyệt qua nút này (có chu trình)
            if (visited.find(current) != visited.end()) {
                cout << current->val << "\n";
                break;
            }

            // In giá trị của nút hiện tại
            cout << current->val << " -> ";

            // Thêm nút hiện tại vào tập hợp và chuyển sang nút tiếp theo
            visited.insert(current);
            current = current->next;
        }

        if (current == nullptr) {
            cout << "nullptr"; // Danh sách kết thúc nếu không có chu trình
        }

        cout << endl;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution s;
    int n, pos;
    cin >> n >> pos;

    ListNode* head = nullptr;
    ListNode* tmp = nullptr;

    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;

        if (!head) {
            head = new ListNode(val);
            tmp = head;
        } else {
            tmp->next = new ListNode(val);
            tmp = tmp->next;
        }
    }

    // Tạo chu trình nếu cần
    if (pos >= 0) {
        ListNode* cycleStart = head;
        for (int i = 0; i < pos; ++i) {
            cycleStart = cycleStart->next;
        }
        tmp->next = cycleStart; // Tạo chu trình tại vị trí pos
    }

    // Kiểm tra chu trình
    cout << (s.hasCycle(head) ? "true" : "false") << endl;

    // Hiển thị danh sách
    s.display(head);

    return 0;
}

/*
Sample:
Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, 
where the tail connects to the 1st node (0-indexed).
*/
#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy = new ListNode();
        ListNode* current = dummy;
        ListNode* temp = head->next;

        while (temp != nullptr) {
            int sum = 0;

            while (temp->val != 0) {
                sum += temp->val;
                temp = temp->next;
            }

            current->next = new ListNode(sum);
            current = current->next;
            temp = temp->next;
        }

        return dummy->next;
    }

    void impresion(ListNode* head) {
        while (head != nullptr) {
            std::cout << head->val << ' ';
            head = head->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    // Crear la lista [0, 1, 4, 3, 0, 9, 8, 0]
    ListNode* head = new ListNode(0);
    head->next = new ListNode(1);
    head->next->next = new ListNode(4);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(0);
    head->next->next->next->next->next = new ListNode(9);
    head->next->next->next->next->next->next = new ListNode(8);
    head->next->next->next->next->next->next->next = new ListNode(0);

    Solution solution;
    ListNode* result = solution.mergeNodes(head);
    solution.impresion(result);

    return 0;
}
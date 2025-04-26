#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {

        int toPass = 0, auxSum = 0;
        ListNode *headList = nullptr;

        while (l1 || l2)
        {
            if (l2)
                auxSum += l2->val;
            if (l1)
                auxSum += l1->val;

            auxSum += toPass;

            if (auxSum > 9)
            {
                auxSum = auxSum % 10;
                toPass = 1;
            }
            else
            {
                auxSum = auxSum;
                toPass = 0;
            }

            ListNode *auxList = new ListNode(auxSum, headList);
            headList = auxList;

            if (l2)
                l2 = l2->next;
            if (l1)
                l1 = l1->next;

            auxSum = 0;
        }

        if (toPass)
        {
            ListNode *auxList = new ListNode(toPass, headList);
            headList = auxList;
        }

        ListNode *headListReversed = nullptr;

        while (headList)
        {
            ListNode *auxList = new ListNode(headList->val, headListReversed);
            headListReversed = auxList;

            headList = headList->next;
        }

        return headListReversed;
    }
};


ListNode* createList(vector<int> nums) {
    if (nums.empty()) return nullptr;
    
    ListNode* head = new ListNode(nums[0]);
    ListNode* current = head;
    
    for (int i = 1; i < nums.size(); i++) {
        current->next = new ListNode(nums[i]);
        current = current->next;
    }
    
    return head;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Solution solution;

    // Exemplo: l1 = [2,4,3], l2 = [5,6,4]
    vector<int> l1_nums = {2, 4, 3};
    vector<int> l2_nums = {5, 6, 4};

    ListNode* l1 = createList(l1_nums);
    ListNode* l2 = createList(l2_nums);

    ListNode* result = solution.addTwoNumbers(l1, l2);

    cout << "Resultado: ";
    printList(result);

    return 0;
}

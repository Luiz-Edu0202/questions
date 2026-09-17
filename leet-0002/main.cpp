#include <iostream>

using namespace std;

struct ListNode
{
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void printList(ListNode* head)
{
    while (head != nullptr)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

ListNode* invertListNode(ListNode* ln)
{
    ListNode* invertedListHead = nullptr;
    ListNode* reader = ln;
    ListNode* aux;
    while (reader != nullptr)
    {
        aux = invertedListHead;
        invertedListHead = new ListNode(reader->val);
        invertedListHead->next = aux;
        reader = reader->next;
    }
    return  invertedListHead;
}


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
    ListNode* result = nullptr;
    ListNode* aux = nullptr;
    ListNode* l1_aux = l1;
    ListNode* l2_aux = l2;

    int soma = 0, somar_dez = 0;
    while ((l1_aux != nullptr) || (l2_aux != nullptr) || (somar_dez != 0))
    {
        soma = 0;
        if (l1_aux == nullptr && l2_aux != nullptr)
        {
            soma = l2_aux->val + somar_dez;
            somar_dez = 0;
            if (soma >= 10)
            {
                somar_dez = 1;
                soma -= 10;
            }
            l2_aux = l2_aux->next;
        }
        else if (l2_aux == nullptr && l1_aux != nullptr)
        {
            soma = l1_aux->val + somar_dez;
            somar_dez = 0;
            if (soma >= 10)
            {
                somar_dez = 1;
                soma -= 10;
            }
            l1_aux = l1_aux->next;
        }
        else if ((l1_aux == nullptr) && (l2_aux == nullptr) && (somar_dez != 0))
        {
            soma = somar_dez;
            somar_dez = 0;
        }
        else
        {
            soma = l1_aux->val + l2_aux->val + somar_dez;
            somar_dez = 0;
            if (soma >= 10)
            {
                somar_dez = 1;
                soma -= 10;
            }
            l1_aux = l1_aux->next;
            l2_aux = l2_aux->next;
        }
        aux = result;
        result = new ListNode(soma);
        result->next = aux;
    }
    return invertListNode(result);
}

int main()
{
    ListNode* node3 = new ListNode(3);
    ListNode* node2 = new ListNode(4, node3);
    ListNode* node1 = new ListNode(2, node2);


    ListNode* head = new ListNode(5);
    head->next = new ListNode(6);
    head->next->next = new ListNode(4);

    cout << "Caso 1:" << endl;
    printList(addTwoNumbers(node1,head));

    ListNode* caso2_node9 = new ListNode(9);
    ListNode* caso2_node8 = new ListNode(9, caso2_node9);
    ListNode* caso2_node7 = new ListNode(9, caso2_node8);
    ListNode* caso2_node6 = new ListNode(9, caso2_node7);
    ListNode* caso2_node5 = new ListNode(9, caso2_node6);
    ListNode* caso2_node4 = new ListNode(9, caso2_node5);
    ListNode* caso2_node3 = new ListNode(9, caso2_node4);
    ListNode* caso2_node2 = new ListNode(9, caso2_node3);
    ListNode* caso2_node1 = new ListNode(9, caso2_node2);

    ListNode* head2 = new ListNode(9);
    head2->next = new ListNode(9);
    head2->next->next = new ListNode(9);
    head2->next->next->next = new ListNode(9);

    cout << "Caso 2:" << endl;
    printList(addTwoNumbers(caso2_node1,head2));

    return 0;
}

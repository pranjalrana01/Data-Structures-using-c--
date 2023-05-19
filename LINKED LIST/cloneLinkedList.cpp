// class Solution{
//     private:
//     void insertAtTail(Node* &head, Node* &tail, inr d){
//         Node* newNode = new Node(d);
//         if(head == NULL){
//             head = newNode;
//             tail = newNode;
//             return;
//         }
//         else{
//             tail -> next = newNode;
//             tail = newNode;
//         }
//     }
    
//     public:
//     Node *copyList(Node *head){

//         //step 1 : copy linked list in new list

//         Node* cloneHead = NULL;
//         Node* cloneTail = NULL;

//         Node* temp = head;
//         while(temp != NULL){
//             insertAtTail(cloneHead , cloneTail , temp->data);
//             temp = temp->next;
//         }
//         //step 2: create a map data structure
//         unordered_map<Node* , Node*>oldToNewNode;

//         Node* originalNode = head;
//         Node* cloneNode = cloneHead;
//         while(originalNode != NULL && cloneNode != NULL){
//             oldToNewNode[originalNode] = cloneNode;
//             originalNode = originalNode -> next;
//             cloneNode = cloneNode -> next;
//         }
//         originalNode = head;
//         cloneNode = cloneHead;

//         while(originalNode != NULL){
//             cloneNode -> random = oldToNewNode[originalNode -> random];
//             originalNode = originalNode -> next;
//             cloneNode = cloneNode -> next;
//         }
//             return cloneHead;
//     }
// };

// solution no 3 according to me

class Solution{
    private:
        void insertAtTail(Node* &head, Node* &tail,int data){
            Node* newNode = new Node(data);

            if(head == NULL){
                head = newNode;
                tail = newNode;
            }
            else{
                tail -> next = newNode;
                tail = newNode;
            }
        }

 public:
     Node *copyList(Node *head){
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;

        Node* temp = head;
        while(temp != NULL){
            insertAtTail(cloneHead , CloneTail, temp->data);
            temp = temp->next;
        }

        //step 2 : cloneNodes add in between originalList

        Node* originalNode = head;
        Node* cloneNode = cloneHead;

        while(originalNode !=NULL && cloneNode != NULL){
            Node* next = originalNode -> next;
            originalNode -> next = cloneNode;
            originalNode = next;

            next = cloneNode -> next;
            cloneNode -> next = originalNode;
            cloneNode = next;
        }

        //step 3: random pointers copy karo

        temp = head;
        while(temp != NULL){
            if(temp -> next != NULL){
                temp -> next -> random = temp -> random ? temp -> random->next : temp -> next = temp -> random;
            }
            temp = temp -> next -> next;
        }
        //step 4 : revert changes done in step 2
        originalNode =  head;
        cloneNode = cloneHead;
        while(originalNode != NULL && cloneNode != NULL){
            originalNode -> next = cloneNode -> next;
            originalNode = originalNode -> next;

            if(originalNode != NULL){
            cloneNode -> next = originalNode -> next;
            }
            cloneNode = cloneNode -> next;
        }

        // step 5 : return ans;

        return cloneHead;
    }
};
//reverse linked list in group of k nodes

//solution

Node* kReverse(Node* head,int k){
    if(head == NULL){
        return NULL;
    }
    
    //STEP 1 : REVERSE FIRST K NODES
    Node* next = NULL;
    Node* prev = NULL;
    Node* curr = head;
    int count = 0;

    while(count!=NULL && count < k){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr -> next;
        count++;
    }
    //STEP 2 : RECURSION DEKHLEGA aage ka
    if(next!=NULL){
        head -> next = kReverse(next,k);
    }

    return prev;
}
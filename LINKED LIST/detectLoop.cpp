bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }

    map<Node* , bool>visited;
    Node* temp = head;
    while(temp != NULL){
        if(visited[temp] == true){
            return true;
            cout<<"loop is present at node "<<temp->data;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;

}
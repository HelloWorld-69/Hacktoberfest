/**
 * 
 * Linked List Header File for use
 * 
 */
//  Node class
 class Node{
     public:
     int val;
     Node* next;
     Node(){};
     Node(int data){
         val = data;
         next = NULL;
     }
 };
//  Node Insert Function
void insert(Node* &head, int data){
    if(head == NULL){
        std::cout<<"ATTENTION: Please Create Head Node First:\n";
    }else{
        Node* ptr = head;
        Node* newNode = new Node(data);
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = newNode;
        // std::cout<<"Inserted Succesfully!\n";
    }
}
// Display Function
void display(Node* head){
    Node* ptr = head;
    while(ptr->next){
        std::cout<<ptr->val<<" ---> ";
        ptr = ptr->next;
    }
    std::cout<<ptr->val<<std::endl;
}

int pop(Node* &head){
    if(head == NULL){
        // If there is no linked list found then it will -1 with Error LLI404 --> LinkedListInt 404(Not Found)
        std::cout<<"No Linked List Found!\n Pop Function Terminated with error LLI404\n";
        return -1;
    }else if(head->next == NULL){
        std::cout<<"Oops this linked list would be deleted!";
        return -1;
    }
    
    
    Node* ptr = head;
    while(ptr->next->next){
        ptr = ptr->next;
    }
    int getNum = ptr->next->val;
    Node* tmp = ptr->next;
    ptr->next = NULL;
    delete tmp;
    return getNum;
}

// Reverse Function For Linked list
Node* reverse(Node* &head){
    if(head == NULL) return NULL;
        Node* newHead = head;
        Node* dummy = NULL;
        Node* newNext = head->next;
    
        
        while(newNext !=NULL){
           newHead->next = dummy;
           dummy = newHead;
            newHead = newNext;
            newNext = newNext->next;
            
            
        }
        newHead->next = dummy;
        head = newHead;
        return head;
}

// Sorting Function for Linked List
// in ASCENDING ORDER
Node *merge(Node *head1 , Node *head2)
{

    if(head1 == NULL)
    {
        return head2;
    }
    if(head2 == NULL)
    {
        return head1;
    }
    
    if(head1->val < head2->val)
    {
        head1->next = merge(head1->next,head2);
        return head1;
    }
    
    head2->next = merge(head2->next,head1);
    return head2;
}

Node* sort(Node* head) {
    
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    
    Node *slow = head;
    Node *fast = head->next;
    
    while(fast!=NULL && fast->next!= NULL)
    {
        slow=slow->next;
        fast = fast->next->next;
    }
    
    Node *newnode = slow->next;
    slow->next = NULL;
    
    return merge(sort(head),sort(newnode));
}



// Binary Search Function to 
// Search for a key in Linked List
Node* search(Node* head, int key){
    Node* ptr = head;
    while(ptr){
        if(ptr->val == key){
            return ptr;
        }
        ptr = ptr->next;
    }
    std::cout<<"---- Key Not Found ----\n";
    return NULL;
}

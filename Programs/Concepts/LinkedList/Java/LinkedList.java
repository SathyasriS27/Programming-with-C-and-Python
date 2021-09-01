package Concepts.LinkedList.Java;

public class LinkedList {

    private Node head;
    
    public LinkedList() {
        this.head = null;
    }

    public Node insertAtHead(int data) {

        if (head == null) {
            head = new Node(data);
        } else {
            Node temp = new Node(data);
            temp.next = head;
            head = temp;
        }
        
        return head;
    }

}

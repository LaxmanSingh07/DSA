package recap.TREE;
import java.util.LinkedList;
import java.util.Queue;


public class pr_01_BinaryTreeB {
    static class Node {
        int data;
        Node left;
        Node right;

        Node(int data) {
            this.data = data;
            this.left = this.right = null;
        }

    }

    static class BinaryTree {
        static int indx = -1;

        public static Node buildTree(int nodes[]) {
            indx++;
            if (nodes[indx] == -1) {
                return null;
            }
            Node newNode = new Node(nodes[indx]);
            newNode.left = buildTree(nodes);
            newNode.right = buildTree(nodes);
            return newNode;
        }
    }

public static void find_leve(Node head){
    if(head==null){
        return ;
    }
    Queue<Node> q=new LinkedList<>();
    q.add(head);
    q.add(null);
    while(!q.isEmpty()){
        Node currNode=q.remove();
        if(currNode==null){
            System.out.println();
            if(q.isEmpty()){
                break;
            }
            else{
                q.add(null);
            }
        }
        else{
            System.out.print(currNode.data+" ");
            if(currNode.left!=null){
                q.add(currNode.left);
            }
            if(currNode.right!=null){
                q.add(currNode.right);
            }
        }
    }
    
}
    public static void find_pre(Node head) {
        if (head == null) {
            System.out.print("-1" + " ");
            return;
        }
        System.out.print(head.data + " ");
        find_pre(head.left);
        find_pre(head.right);
    }

    public static void find_in(Node head) {
        if (head == null) {
            System.out.print("-1" + " ");
            return;
        }
        find_in(head.left);
        System.out.print(head.data + " ");
        find_in(head.right);
    }

    public static void find_post(Node head) {
        if (head == null) {
            System.out.print("-1" + " ");
            return;
        }
        find_post(head.left);
        find_post(head.right);
        System.out.print(head.data + " ");
    }

    public static void main(String args[]) {
        int nodes[] = { 1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1 };
        BinaryTree tree = new BinaryTree();
        Node root = tree.buildTree(nodes);
        // System.out.println(root.data);
        find_pre(root);
        System.out.println();
        find_in(root);
        System.out.println();
        find_post(root);
        System.out.println();
        find_leve(root);
    }

}
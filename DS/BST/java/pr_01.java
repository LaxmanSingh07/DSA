
// package BST.java;
import java.util.*;
import javax.sound.sampled.SourceDataLine;

public class pr_01 {
    static class Node {
        int data;
        Node left;
        Node right;

        Node(int data) {
            this.data = data;
            this.left = null;
            this.right = null;
        }
    }

    public static Node insert(Node root, int val) {
        if (root == null) {
            root = new Node(val);
            return root;
        }
        if (root.data > val) {
            // left subtreee;
            root.left = insert(root.left, val);
        } else {
            root.right = insert(root.right, val);
        }
        return root;
    }

    public static void inorder(Node root) {
        if (root == null) {
            return;
        }
        inorder(root.left);
        System.out.print(root.data + " ");
        inorder(root.right);
    }

    public static void PrintInRange(Node root, int k1, int k2) {
        if (root.data >= k1 && root.data <= k2) {
            PrintInRange(root.left, k1, k2);
            System.out.print(root.data + " ");
            PrintInRange(root.right, k1, k2);
        } else if (root.data < k1) {
            PrintInRange(root.left, k1, k2);
        } else {
            PrintInRange(root.right, k1, k2);
        }
    }

    public static Node delete(Node root, int val) {
        if (root.data < val) {
            root.right = delete(root.right, val);
        } else if (root.data > val) {
            root.left = delete(root.left, val);
        } else {
            // case 1:// 1--> 1 leaf node
            if (root.left == null && root.right == null) {
                return null;
            }

            // cases 2. single child

            if (root.left == null) {
                return root.right;
            } else if (root.right == null) {
                return root.left;
            }

            Node Is = findInorderSucessor(root.right);
            root.data = Is.data;

            root.right = delete(root.right, root.data);
        }
        return root;

    }

    public static Node findInorderSucessor(Node root) {
        while (root.left != null) {
            root = root.left;

        }
        return root;
    }

    public static void printPath(ArrayList<Integer> path) {
        for (int i = 0; i < path.size(); i++) {
            System.out.print(path.get(i) + "->");
        }
        System.out.println("NULL");

    }

    public static void printRoot2Leaf(Node root, ArrayList<Integer> path) {
        if (root == null) {
            return;
        }
        path.add(root.data);
        if (root.left == null && root.right == null) {
            printPath(path);
        }
        printRoot2Leaf(root.left, path);
        printRoot2Leaf(root.right, path);
        path.remove(path.size() - 1);
        return;

    }

    public static void main(String args[]) {
        int values[] = { 5, 1, 3, 4, 2, 7 };
        Node root = null;
        for (int i = 0; i < values.length; i++) {
            root = insert(root, values[i]);
        }
        System.out.println("Before delete");
        inorder(root);
        delete(root, 5);
        System.out.println("\nAfter delete");
        inorder(root);
        System.out.println();
        // PrintInRange(root, 5, 11);
        printRoot2Leaf(root, new ArrayList<>());

    }

}

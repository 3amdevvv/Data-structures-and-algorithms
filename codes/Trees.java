import java.util.Scanner;

class Trees {
    // BST node
    static class Node {
        String title;
        String author;
        Node left;
        Node right;
    }

    // Utility function to create a new Node
    static Node newNode(String title, String author) {
        Node node = new Node();
        node.title = title;
        node.author = author;
        node.left = null;
        node.right = null;
        return node;
    }

    // Function to perform inorder traversal
    static void inorder(Node root) {
        if (root == null)
            return;

        inorder(root.left);
        System.out.println(root.title + " by " + root.author);
        inorder(root.right);
    }

    // Function to check if two BSTs are identical
    static boolean isIdentical(Node root1, Node root2) {
        // Check if both the trees are empty
        if (root1 == null && root2 == null)
            return true;

        // If any one of the tree is non-empty and other is empty, return false
        else if (root1 != null && root2 == null)
            return false;
        else if (root1 == null && root2 != null)
            return false;
        else {
            // Check if current data of both trees equal and recursively check for left and right subtrees
            return root1.title.equals(root2.title) &&
                    root1.author.equals(root2.author) &&
                    isIdentical(root1.left, root2.left) &&
                    isIdentical(root1.right, root2.right);
        }
    }

    // Driver code
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input for the first BST
        System.out.println("Enter details for the nodes of the first BST (-1 to stop):");
        Node root1 = buildBST(scanner);

        // Input for the second BST
        System.out.println("Enter details for the nodes of the second BST (-1 to stop):");
        Node root2 = buildBST(scanner);

        // Check if BSTs are identical
        if (isIdentical(root1, root2))
            System.out.print("Both BSTs are identical");
        else
            System.out.print("BSTs are not identical");
    }

    // Function to build a binary search tree from user input
    static Node buildBST(Scanner scanner) {
        System.out.println("Enter book title (-1 to stop):");
        String title = scanner.nextLine();
        if (title.equals("-1")) // Input -1 to represent NULL node
            return null;

        System.out.println("Enter book author:");
        String author = scanner.nextLine();

        Node root = newNode(title, author);
        System.out.println("Enter left child of " + title + " (-1 for NULL):");
        root.left = buildBST(scanner);
        System.out.println("Enter right child of " + title + " (-1 for NULL):");
        root.right = buildBST(scanner);
        return root;
    }
}

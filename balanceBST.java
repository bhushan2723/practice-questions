/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {

    public void inorder(TreeNode root, ArrayList<Integer> List)
    {
        if(root == null)
        {
            return;
        }

        inorder(root.left,List);
        List.add(root.val);
        inorder(root.right,List);
    }

    public TreeNode balanceBST(TreeNode root) {

        ArrayList<Integer> List = new ArrayList<>();

        inorder(root,List);

        return  BSTMaker(List,0,List.size()-1);
    }

    public TreeNode BSTMaker( ArrayList<Integer> List,int start,int end)

    {
        if(start > end)
        {
            return null;
        }

        int mid = (start+end)/2 ;

        TreeNode root = new TreeNode(List.get(mid));

        root.left = BSTMaker(List,start,mid-1);
        root.right = BSTMaker(List,mid+1,end);


        return root;
    }
}

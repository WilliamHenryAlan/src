## 二叉树
![二叉树结构框图](https://code-thinking-1253855093.file.myqcloud.com/pics/20210219190809451.png)

二叉树的两种主要形式：满二叉树和完全二叉树

#### 满二叉树：
如果一棵二叉树只有**度为0的结点和度为2的结点**，并且度为0的结点在同一层上，则这棵二叉树为满二叉树。
#### 完全二叉树的定义如下：
在完全二叉树中，除了最底层节点可能没填满外，其余每层节点数都达到最大值，并且最下面一层的节点都集中在该层最左边的若干位置。若最底层为第 h 层（h从1开始），则该层包含 1~ 2^(h-1) 个节点。
![满二叉树](https://code-thinking-1253855093.file.myqcloud.com/pics/20200920221638903.png)

上节的优先队列就是堆 堆就是满二叉树 [跳转到优先队列](#优先队列)

#### 二叉搜索树
前面介绍的树，都没有数值的，而二叉搜索树是有数值的了，二叉搜索树是一个有序树。
    若它的左子树不空，则左子树上所有结点的值均小于它的根结点的值；
    若它的右子树不空，则右子树上所有结点的值均大于它的根结点的值；
    它的左、右子树也分别为二叉排序树
![binary search tree](https://code-thinking-1253855093.file.myqcloud.com/pics/20200806190304693.png)
上面这两棵树都是搜索树

#### 平衡二叉搜索树

平衡二叉搜索树：又被称为AVL（Adelson-Velsky and Landis）树，且具有以下性质：它是一棵空树或它的左右两个子树的高度差的绝对值不超过1，并且左右两个子树都是一棵平衡二叉树。

![balanced binary search tree](https://code-thinking-1253855093.file.myqcloud.com/pics/20200806190511967.png)

最后一棵 不是平衡二叉树，因为它的左右两个子树的高度差的绝对值超过了1。

C++中map、set、multimap，multiset的底层实现都是平衡二叉搜索树，所以map、set的增删操作时间时间复杂度是O(logn)，unordered_map、unordered_set，unordered_map、unordered_set底层实现是哈希表。

---
####二叉树的遍历
1. preorder
2. inorder
3. postorder
4. levelorder
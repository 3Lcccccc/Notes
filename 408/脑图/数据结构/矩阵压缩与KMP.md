# 矩阵的压缩与KMP算法

## 矩阵的压缩 🔨(4️⃣)🛠️(1️⃣1️⃣)

- 对称矩阵
  - 每行从第一个元素到主对角线为止依次存入数组
- 三角矩阵
  - 利用数组最后一个存储单元来存储相同的常量
- 三对角矩阵
  - 按行存入数组(第一行和最后一行只有两个)
- 稀疏矩阵
  - 使用一个三列(行、列、值)的二维数组存储非零元素(三元组表)
- **⚠️注意数组下标**

## KMP算法 🔨(1️⃣)
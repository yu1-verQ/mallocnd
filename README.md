# mallocnd
C言語で多次元配列を動的確保するための関数mallocndの作成。
このサイト（http://pukulab.blog.fc2.com/blog-entry-28.html）を参考にした。

## mallocndの引数
第1引数: 作成したい配列変数の型のサイズ
第2引数: 作成したい配列変数の次元数
第3引数: 作成したい配列変数の各次元の大きさを収めた配列
### 具体例

mallocnd(size_t sizeOfType, int numIndex, int *index )

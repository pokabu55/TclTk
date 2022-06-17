# TclTk
* Tcl/Tkのお試し

# インストール
* `sudo apt install tcl-dev tk-dev`
* tcl, tk （-dev）無しのパッケージもインストールはできましたが、アプリのビルドが出来なかった
* 参考リンクは[ここ](http://www.nct9.ne.jp/m_hiroi/tcl_tk_doc/tcltk305.html)

# ビルド方法
* ライブラリリンクに `-ltcl` を付け加えました
* 詳しくは Makefile を参照
# TclTk
* Tcl/Tkのお試し

# インストール
* `sudo apt install tcl-dev tk-dev`
* tcl, tk （-dev）無しのパッケージもインストールはできましたが、アプリのビルドが出来なかった
* 参考リンクは[ここ](http://www.nct9.ne.jp/m_hiroi/tcl_tk_doc/tcltk305.html)

# ビルド方法
* ライブラリリンクに `-ltcl` を付け加えました
* 詳しくは Makefile を参照

# メモ
* ネットに落ちてる情報が少なく、進まない
* [ここ](https://www.kijineko.co.jp/tcl-tk%e3%81%a7%e6%89%8b%e8%bb%bd%e3%81%abgui%e3%82%92%e4%bd%9c%e3%82%8d%e3%81%86%ef%bc%81/)が頼りになるかな、と思っていたが、インストールやビルド方法が抜けてる
* [こっち](https://qiita.com/gpsnmeajp/items/d69c51cbd34d8178daf9)も見たけど、基本Cygwinだし、説明が曖昧だな…。
* [ここ](http://www.ne.jp/asahi/music/marinkyo/komputilo/tcl_tk.html.ja)もインストールは書いてあったが、ビルド情報が無い
* [ここ](http://www.nct9.ne.jp/m_hiroi/tcl_tk_doc/index.html)は、GUIが出てこないのは、なぜ？？？

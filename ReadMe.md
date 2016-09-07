# このソフトウェアについて #

CairoAntialias201609070701は私個人が学習目的で作成したソフトウェアです。

CairoとPangoを使って文字列にアンチエイリアスをかけて描画しました。

# 開発環境 #

* Windows XP Pro SP3 32bit
* VC++ 2010 Express
    * C++/Win32

## ライブラリ ##

* [Gtkmm 2.22](http://ftp.gnome.org/pub/GNOME/binaries/win32/gtkmm/2.22/gtkmm-win32-devel-2.22.0-2.exe)
    * GTKmm 2.4
        * GTK+ 2.22.0
    * cairomm 1.0
        * cairo 1.10.0
    * pangomm 1.4
        * pango 1.28.3

# イメージ #

![Window](https://cdn-ak.f.st-hatena.com/images/fotolife/y/ytyaru/20160907/20160907093033.png)

以下、Antialiasの値を変更して実行したときのキャプチャです。

[Cairo::FontOptions::set_antialias(Antialias antialias)](https://www.cairographics.org/documentation/cairomm/reference/classCairo_1_1FontOptions.html#ac4805f8378e318a2ad52803285b7e7de)|image|
----|----|
ANTIALIAS_DEFAULT|![ANTIALIAS_DEFAULT](https://cdn-ak.f.st-hatena.com/images/fotolife/y/ytyaru/20160907/20160907093204.png)|
ANTIALIAS_NONE|![ANTIALIAS_NONE](https://cdn-ak.f.st-hatena.com/images/fotolife/y/ytyaru/20160907/20160907093137.png)|
ANTIALIAS_GRAY|![WS_0108_ANTIALIAS_GRAY](https://cdn-ak.f.st-hatena.com/images/fotolife/y/ytyaru/20160907/20160907093059.png)|
ANTIALIAS_SUBPIXEL|![ANTIALIAS_SUBPIXEL](https://cdn-ak.f.st-hatena.com/images/fotolife/y/ytyaru/20160907/20160907093033.png)|

# ライセンス #

このソフトウェアはCC0ライセンスです。

[![CC0](http://i.creativecommons.org/p/zero/1.0/88x31.png "CC0")](http://creativecommons.org/publicdomain/zero/1.0/deed.ja)

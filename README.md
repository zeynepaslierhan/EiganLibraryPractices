<h1 align="center">
  <br>
  <a href="https://github.com/zeynepaslierhan/.NetCoreArchive"><img src="https://github.com/zeynepaslierhan/zeynepaslierhan/blob/main/img/Logo.png" alt="SoftwareDeveloperArchive" width="200"></a>
  <br>
  Eigen Kütüphanesi için Pratikler
  <br>
</h1>

Eigen Kütüphanesiile c++ ve matlab fonksiyonları kullanılarak çözülmüş sorular, bu repoda bulunmaktadır.

**🧰 Araçlar:** Visual Studio ve Matlab

## Eigen Kütüphanesi Nedir :question:

**Eigen;** lineer cebir, matris ve vektör işlemleri, geometrik dönüşümler, sayısal çözücüler ve ilgili algoritmalar için üst düzey bir C++ şablon başlıkları kitaplığıdır.

## Eigen Kütüphanesi Kurulumu 🔧

1. https://github.com/Microsoft/vcpkg reposunu 📍`C:\dev` klasörü içerisine klonladım. Bunun için git bash kullandım.

```git bash
  git clone https://github.com/microsoft/vcpkg
```

2. CMD üzerinden aşağıdaki komut satırını yazdım.

```bash
  .\vcpkg\bootstrap-vcpkg.bat
```

3.  CMD içinden vcpkg’yi kurduğum klasöre gidip aşağıdaki komutu yazdım.

```bash
 vcpkg search
```

> **🚨 Bilgisayarınızda C++ kurulu olduğundan emin olun.**

4. eigen3 kütüphanesini indirmek için aşağıdaki komut satırını CMD'ye yazdım:

```bash
  vcpkg.exe install eigen3
```

5. Kurulum başarılıysa CMD'ye `vcpkg list` yazdığınız zaman aşağıdaki gibi görmelisiniz.


## Eigen ile Visual Studio Entegrasyonu 🔧

1. CMD içerisine aşağıdaki komutu girin:

```bash
   vcpkg.exe integrate install
```



## Kaynakça 🗃️

1. Kocaeli Üniversitesi, Dr.Öğr.Üyesi ALPASLAN BURAK İNNER 
1. [Eigen Library Installation And Crash Course C++](https://www.youtube.com/watch?v=6mMjv-tA5Jk&t=141s)
1. [Eigen kütüphanesi kurulumu, yapbenzet](http://yapbenzet.kocaeli.edu.tr/eigen-kutuphanesi-kurulumu/)



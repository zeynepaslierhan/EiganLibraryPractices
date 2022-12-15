<h1 align="center">
  <br>
  <a href="https://github.com/zeynepaslierhan/.NetCoreArchive"><img src="https://github.com/zeynepaslierhan/zeynepaslierhan/blob/main/img/Logo.png" alt="SoftwareDeveloperArchive" width="200"></a>
  <br>
  Eigen Kütüphanesi için Pratikler
  <br>
</h1>

<img src="https://github.com/zeynepaslierhan/zeynepaslierhan/blob/main/img/gifs/busy-cute.gif" align="right" height="200">


Eigen Kütüphanesi ile c++ ve matlab fonksiyonları kullanılarak çözülmüş sorular, bu repoda bulunmaktadır.

**🧰 Araçlar:** *Visual Studio ve Matlab*

## İçindekiler

1. [Eigen Kütüphanesi Nedir :question:](https://github.com/zeynepaslierhan/EiganLibraryPractices#eigen-k%C3%BCt%C3%BCphanesi-nedir-question)
2. [Eigen Kütüphanesi Kurulumu 🔧](https://github.com/zeynepaslierhan/EiganLibraryPractices#eigen-k%C3%BCt%C3%BCphanesi-kurulumu-)
3. [Eigen ile Visual Studio Entegrasyonu 🔧](https://github.com/zeynepaslierhan/EiganLibraryPractices#eigen-ile-visual-studio-entegrasyonu-)
4. Eigen Kütüphanesi Temel Bilgiler
5. [Kaynakça 🗃️](https://github.com/zeynepaslierhan/EiganLibraryPractices#kaynak%C3%A7a-%EF%B8%8F)

## Repo içerisindeki Pratikler:

1. [EigenLibraryPractices1, 💻*kodlar..*](https://github.com/zeynepaslierhan/EiganLibraryPractices)

## Eigen Kütüphanesi Nedir :question:

**Eigen;** lineer cebir, matris ve vektör işlemleri, geometrik dönüşümler, sayısal çözücüler ve ilgili algoritmalar için üst düzey bir C++ şablon başlıkları kitaplığıdır.

## Eigen Kütüphanesi Kurulumu 🔧

1. https://github.com/Microsoft/vcpkg reposunu 📍`C:\dev` klasörü içerisine klonladım. Bunun için git bash kullandım.

  ```git bash
    git clone https://github.com/microsoft/vcpkg
  ```

  <img src="https://github.com/zeynepaslierhan/EiganLibraryPractices/blob/main/img/kurulum/1.%20kurulum.gif" height="300">

2. CMD üzerinden aşağıdaki komut satırını yazdım.

  ```bash
    .\vcpkg\bootstrap-vcpkg.bat
  ```

  <img src="https://github.com/zeynepaslierhan/EiganLibraryPractices/blob/main/img/kurulum/2.%20kurulum.gif" height="300">

3.  CMD içinden vcpkg’yi kurduğum klasöre gidip aşağıdaki komutu yazdım.

  ```bash
  vcpkg search
  ```
  
  <img src="https://github.com/zeynepaslierhan/EiganLibraryPractices/blob/main/img/kurulum/3.%20kurulum.gif" height="300">
  
  </br>

> **🚨 Bilgisayarınızda C++ kurulu olduğundan emin olun.**

  </br>

4. eigen3 kütüphanesini indirmek için aşağıdaki komut satırını CMD'ye yazdım:

  ```bash
    vcpkg.exe install eigen3
  ```
  
  <img src="https://github.com/zeynepaslierhan/EiganLibraryPractices/blob/main/img/kurulum/4.%20kurulum.gif" height="300">

5. Kurulum başarılıysa CMD'ye `vcpkg list` yazdığınız zaman aşağıdaki gibi görmelisiniz.


  <img src="https://github.com/zeynepaslierhan/EiganLibraryPractices/blob/main/img/kurulum/5.%20kurulum.gif" height="300">


## Eigen ile Visual Studio Entegrasyonu 🔧

1. CMD içerisine aşağıdaki komutu girin:

  ```bash
    vcpkg.exe integrate install
  ```

  <img src="https://github.com/zeynepaslierhan/EiganLibraryPractices/blob/main/img/kurulum/6.%20kurulum.gif" height="300">


## Eigen Kütüphanesi Temel Bilgiler

📌 Visual Studio'dan C++ Empty Project oluşturulur.

📌 Konfigürasyon ayarları yapılır.

  1. "Release" ve "x64" ayarı yapılır.
    
    <img src="https://github.com/zeynepaslierhan/EiganLibraryPractices/blob/main/img/Temel%20bilgiler/Temel%20Bilgiler%201.png" height="200">
  
  2. Proje ayarlarında düzenleme yapılır:

     <img src="https://github.com/zeynepaslierhan/EiganLibraryPractices/blob/main/img/Temel%20bilgiler/VS%20ayar%C4%B1%202.gif" height="200">


## Kaynakça 🗃️

1. Kocaeli Üniversitesi, Dr.Öğr.Üyesi ALPASLAN BURAK İNNER 
1. [Eigen Library Installation And Crash Course C++](https://www.youtube.com/watch?v=6mMjv-tA5Jk&t=141s)
1. [Eigen kütüphanesi kurulumu, yapbenzet](http://yapbenzet.kocaeli.edu.tr/eigen-kutuphanesi-kurulumu/)


---


## İletişim :telephone_receiver:

:e-mail:  softwaredeveloperarchive@gmail.com

:iphone: [@softwaredeveloperarchive](https://www.instagram.com/softwaredeveloperarchive/)

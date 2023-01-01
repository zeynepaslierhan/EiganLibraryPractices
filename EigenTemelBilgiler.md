<h1 align="center">
  <br>
  <a href="https://github.com/zeynepaslierhan/.NetCoreArchive"><img src="https://github.com/zeynepaslierhan/zeynepaslierhan/blob/main/img/Logo.png" alt="SoftwareDeveloperArchive" width="200"></a>
  <br>
  Eigen Kütüphanesi için Temel Bilgiler
  <br>
</h1>

<img src="https://github.com/zeynepaslierhan/zeynepaslierhan/blob/main/img/gifs/busy-cute.gif" align="right" height="200">


Eigen Kütüphanesi ile c++ ve matlab fonksiyonları kullanılarak çözülmüş sorular, bu notta yer almaktadır.


## Namespace

C++'daki **Namespace**, işlevler, tür adları, sınıflar, değişkenler vb. gibi tanımlayıcıların kapsamının bildirildiği bildirimsel kısımdır. Kod genellikle birden çok kitaplığa sahiptir ve ad alanı, iki tanımlayıcı aynı ada sahip olduğunda ortaya çıkabilecek belirsizliği önlemeye yardımcı olur.

🚨***Örnek:***

| using namespace Eigen; | using namespace Eigen::MatrixXd; |
| --- | --- |
| Eigen::MatrixXd m; | MatrixXd m; |

## Kütüphaneler

📌 `<iostream>`  : standart giriş/çıkış akışı nesnelerini tanımlar.

| Görevler:  | Narrow characters (char) | Wide characters (wchar_t) |
| --- | --- | --- |
| Standart giriş akışı | cin | wcin |
| Standart çıkış akışı | cout | wcout |
| Hatalar için standart çıktı akışı | cerr | wcerr |
| Loglama için standart çıktı akışı | clog | wclog |

**Örnek:**

```cpp
#include <iostream>

using namespace std; 

int main(void)
{
  int id = 5;

  cout << "C++ Programlama Dili" << "\n";

  id = id*id;

  cout << "id değişkeninin karesi: " << id;

  return 0;
}

/* 
OUTPUT:
C++ Programlama Dili
id değişkeninin karesi: 25
*/
```

## Değişken Tanımlama

### Matris

📌 Dinamik-yeniden boyutlandırılabilir (resizable) matris oluşturma.

```cpp
#include <Eigen/Dense>

using namespace Eigen; // Önemli !!

int main(){
	Eigen::MatrixXd m;
}
```

📌 Sabit boyutlu matris oluşturma.

```cpp
#include <Eigen/Dense>

using namespace Eigen; // ÖNEMLİ !!

int main(){
	// 4 boyutlu matris referansı
	Matrix4d m;
	
	// 4x4 = 16 elemana sahip olduğu için boyut 16'dır.
	m.size();

	// Aşağıdaki kod hata Vermez!!
	m.resize(4,4);

	// 1x2 boyutlu matris tanımlı
	Matris<float,1,2> m1;
	m1 << 1,2;

	//2x2 boyutlu matris tanımlama
	Matrix<float,2,2> m2;
	m2 << 1,2,
				3,4;

}
```

📌  Matris içerisine değer atama

```cpp
// using namespace Eigen;

Matrix3d m;

m << 1,2,3,
	  4,5,6
	  7,8,9 ;
```

### Vektör

📌  Vektör tanımlama:

```cpp
// using Eigen::VectorXd;

// 3x1 
VectorXd v(3);
v << 1, 2, 3;

std::cout << v<< std::endl;

/*
OUTPUT
1
2
3
*/
```

## Fonksiyonlar

📌  Birim matris:

```cpp
// using namespace Eigen::MatrixXd;
MatrixXd::Identity(3,3)

/*
1 0 0
0 1 0
0 0 1
*/
```

📌 Ekrana yansıtma:

> iostream kütüphanesi kullanılır.
> 
- Matris boyutunu ekrana yazdırma:
    
    ```cpp
    // using namespace Eigen;
    Matrix4d m;
    
    std::cout<< m.size() << std::endl;
    
    //OUTPUT: 16
    ```
    
- Matris’in elemanlarını ekrana yansıtma:
    
    ```cpp
    // using namespace Eigen;
    Matrix3d m;
    
    m << 1,2,3,
    	  4,5,6
    	  7,8,9 ;
    
    std::cout<< m << std::endl;
    
    /*
    OUTPUT:
    1 2 3
    4 5 6
    7 8 9
    
    */
    ```
    

📌 Dinamik matrisin boyutunu değiştirme:

```cpp
// using namespace Eigen;

Eigen::MatrixXd m;

m.resize(4,5); // m.size() = 4x5 = 20
```

📌 Matris içerisine Random değer atama:

- Sabit boyutlu matris’e random değer atama:
    
    ```cpp
    // using namespace Eigen;
    
    Matrix3d d;
    
    d = Matrix3d::Random();
    
    std::cout << d << std::end1;
    
    /*
    OUTPUT: 
     Rastgele sayılardan oluşan 3x3 boyutunda matris
    */
    ```
    
- Dinamik matris’e random değerler atama:
    
    ```cpp
    //  using namespace Eigen;
    
    Eigen::MatrixXd d;
    
    d = MatrixXd::Random(5,5)
    
    std::cout << d << std::end1;
    
    /*
    OUTPUT: 
     Rastgele sayılardan oluşan 5x5 boyutunda matris
    */
    ```
    

📌 Transpoz:

```cpp
//  using namespace Eigen;

VectorXf m1(2);

m1 << 1, 2
std::cout << m1 << std::end1;

/*
OUTPUT:
1
2
*/

std::cout << m1.transpose() << std::end1;

/*
OUTPUT:
1 2
*/
```

📌 Matrisin her elemanına istenilen değeri atama

- Dinamik Matris
    
    ```cpp
    //  using namespace Eigen;
    
    Eigen::MatrixXd d;
    
    d = MatrixXd::Constant(3,3,1.0)
    
    std::cout << d << std::end1;
    
    /*
    OUTPUT
    1 1 1
    1 1 1
    1 1 1
    */
    ```
    
- Sabit boyutlu matris
    
    ```cpp
    //  using namespace Eigen;
    
    -Matrix3d d;
    
    d = Matrix3d::Constant(1.0)
    
    std::cout << d << std::end1;
    
    /*
    OUTPUT
    1 1 1
    1 1 1
    1 1 1
    */
    ```
    

📌 Matrisin her elemanına istenilen değeri atama

- Toplama
    
    ```cpp
    //  using namespace Eigen;
    
    Matris<float,1,2> m1;
    m1 << 1,2;
    
    MatrixXf m3 = m1.array() +1;
    
    std::cout << m3 << std::end1;
    
    /*
    OUTPUT:
    2 3
    */
    
    ```
    
- Çarpım
    
    ```cpp
    //  using namespace Eigen;
    
    Matris<float,1,2> m1;
    m1 << 1,2;
    
    /*
    1 2
    */
    
    Matrix<float,2,2> m2;
    m2 << 1,2,
    			3,4;
    
    MatrixXf m3 = m1 * m2;
    
    std::cout << m3 << std::end1;
    
    /*
    OUTPUT:
    7 10
    
    */
    ```
    

> *Matris çarpımı kuralı:*  axb boyutlu matris ile bxc lik matris çarpılabilir. c ve a değerleri önemli değildir. Sonucun boyutu axc olur.
> 
> 
> ```cpp
> 
> //  using namespace Eigen;
> 
> VectorXf m1(2);
> /*
> 1
> 2
> */
> 
> Matrix<float,2,2> m2;
> m2 << 1,2,
> 			3,4;
> 
> MatrixXf m3 = m1.transpose * m2;
> 
> std::cout << m3 << std::end1;
> 
> /*
> OUTPUT:
> 7 10
> */
> ```
> 

📌 Matrisin elemanlarının kuvvetini alma:

```cpp
//  using namespace Eigen;

Matrix<float,2,2> m2;
m2 << 1,2,
			3,4;

MatrixXf m3 = m2.array().pow(3).matrix()

std::cout << m3 << std::end1;

/*
OUTPUT:
1 8
27 64
*/
```



## Kaynakça 🗃️

1. [Eigen Library Installation And Crash Course C++](https://www.youtube.com/watch?v=6mMjv-tA5Jk&t=141s)
2. [Matlab to Eigen](https://igl.ethz.ch/projects/libigl/matlab-to-eigen.html)
3. [cpluspluss.com](https://cplusplus.com/)
4. [eigen](https://eigen.tuxfamily.org/dox/GettingStarted.html)


<img src="https://raw.githubusercontent.com/zeynepaslierhan/zeynepaslierhan/main/img/gifs/AradaBir%C3%87alanTelefonum.gif" align="right" height="130">

---


## İletişim :telephone_receiver:

:e-mail:  softwaredeveloperarchive@gmail.com

:iphone: [@softwaredeveloperarchive](https://www.instagram.com/softwaredeveloperarchive/)

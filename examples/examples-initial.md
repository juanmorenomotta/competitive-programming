Aquí tienes **6 problemas adicionales de nivel inicial** con enunciado, razonamiento detallado y código C++ completo. Todos son problemas clásicos de programación competitiva para principiantes.

---

## 🟢 Problema 1: «Suma de dos números» (Codeforces 4A - Watermelon)

**Enunciado:**  
Dado un número entero `w` (1 ≤ w ≤ 100), determina si es posible dividir la sandía en dos partes, cada una de peso par (positivo). Las dos partes no necesitan ser iguales.

**Razonamiento:**  
Para que ambas partes sean pares, la suma total `w` debe ser par (porque par + par = par). Además, ninguna parte puede ser cero, por lo que `w` debe ser mayor que 2. La condición es: `w % 2 == 0 && w > 2`. Si se cumple, imprimimos "YES", de lo contrario "NO".

**Solución en C++:**
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int w;
    cin >> w;
    
    if (w % 2 == 0 && w > 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
```

---

## 🟢 Problema 2: «Suma de dígitos» (Codeforces 1108A - Two distinct points)

**Enunciado:**  
Dados dos segmentos [l1, r1] y [l2, r2], encuentra dos números `a` y `b` tales que:
- l1 ≤ a ≤ r1
- l2 ≤ b ≤ r2
- a ≠ b

**Razonamiento:**  
La solución más simple es tomar `a = l1` y `b = l2`. Sin embargo, si `a == b`, entonces cambiamos `b` por `r2` (que será diferente porque l2 ≤ r2). Siempre es posible porque los segmentos tienen al menos un elemento. Comprobamos si `l1 == l2`, en cuyo caso usamos `a = l1` y `b = r2`.

**Solución en C++:**
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        
        int a = l1;
        int b = l2;
        
        if (a == b) {
            b = r2;
        }
        
        cout << a << " " << b << "\n";
    }
    return 0;
}
```

---

## 🟢 Problema 3: «Contar vocales» (HackerRank - Strings)

**Enunciado:**  
Dada una cadena de texto que contiene solo letras minúsculas, cuenta el número de vocales (a, e, i, o, u) en ella.

**Razonamiento:**  
Recorremos la cadena carácter por carácter y verificamos si el carácter actual es una vocal. Podemos hacerlo con un conjunto de vocales o con una serie de comparaciones. La complejidad es O(n) donde n es la longitud de la cadena.

**Solución en C++:**
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int count = 0;
    string vocales = "aeiou";
    
    for (char c : s) {
        if (vocales.find(c) != string::npos) {
            count++;
        }
    }
    
    cout << count << "\n";
    return 0;
}
```

---

## 🟢 Problema 4: «Encontrar el máximo» (Clásico)

**Enunciado:**  
Dado un arreglo de `N` enteros (1 ≤ N ≤ 1000), encuentra el valor máximo y su posición (índice desde 0). Si hay múltiples máximos, imprime la primera ocurrencia.

**Razonamiento:**  
Inicializamos `max_val` con el primer elemento y `max_pos` con 0. Recorremos el arreglo desde el índice 1, comparando cada elemento con `max_val`. Si encontramos un elemento mayor, actualizamos `max_val` y `max_pos`. Al final, imprimimos ambos valores. Complejidad O(N).

**Solución en C++:**
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    int max_val = arr[0];
    int max_pos = 0;
    
    for (int i = 1; i < N; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
            max_pos = i;
        }
    }
    
    cout << "Máximo: " << max_val << "\n";
    cout << "Posición: " << max_pos << "\n";
    return 0;
}
```

---

## 🟢 Problema 5: «Números pares e impares» (Clásico)

**Enunciado:**  
Dado un entero `N` (1 ≤ N ≤ 100), imprime todos los números pares del 1 al N en una línea, y todos los números impares en otra línea.

**Razonamiento:**  
Recorremos del 1 al N, verificando si cada número es par (n % 2 == 0) o impar. Vamos acumulando los números en dos strings separados por espacios. Al final, imprimimos ambos strings sin espacios extra al final. Podemos usar un booleano para controlar los espacios.

**Solución en C++:**
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> pares, impares;
    
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            pares.push_back(i);
        } else {
            impares.push_back(i);
        }
    }
    
    for (int i = 0; i < pares.size(); i++) {
        if (i > 0) cout << " ";
        cout << pares[i];
    }
    cout << "\n";
    
    for (int i = 0; i < impares.size(); i++) {
        if (i > 0) cout << " ";
        cout << impares[i];
    }
    cout << "\n";
    
    return 0;
}
```

---

## 🟢 Problema 6: «Calculadora de promedio» (Clásico)

**Enunciado:**  
Dados `N` números enteros, calcula el promedio (como número decimal con 2 decimales). Luego, cuenta cuántos números están por encima del promedio, cuántos son iguales y cuántos están por debajo.

**Razonamiento:**  
Primero leemos todos los números, sumamos y calculamos el promedio con precisión decimal (`double`). Luego recorremos nuevamente el arreglo comparando cada elemento con el promedio. Contamos en tres categorías: arriba, igual, abajo. Usamos `fixed` y `setprecision(2)` para imprimir el promedio con 2 decimales. Complejidad O(N).

**Solución en C++:**
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> arr(N);
    int suma = 0;
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        suma += arr[i];
    }
    
    double promedio = (double)suma / N;
    
    int arriba = 0, igual = 0, abajo = 0;
    
    for (int num : arr) {
        if (num > promedio) {
            arriba++;
        } else if (num == promedio) {
            igual++;
        } else {
            abajo++;
        }
    }
    
    cout << fixed << setprecision(2);
    cout << "Promedio: " << promedio << "\n";
    cout << "Arriba: " << arriba << "\n";
    cout << "Iguales: " << igual << "\n";
    cout << "Abajo: " << abajo << "\n";
    
    return 0;
}
```

---

## 🟢 Problema 7 (Extra): «Invertir cadena» (Clásico)

**Enunciado:**  
Dada una cadena de texto (sin espacios), imprime la cadena invertida.

**Razonamiento:**  
Podemos usar la función `reverse()` de la STL o construir una nueva cadena recorriendo la original desde el final. Ambas soluciones son O(n). Mostramos ambas formas para que el principiante aprenda diferentes enfoques.

**Solución en C++:**
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    // Método 1: Usando reverse()
    string reversed1 = s;
    reverse(reversed1.begin(), reversed1.end());
    cout << "Método 1: " << reversed1 << "\n";
    
    // Método 2: Construyendo manualmente
    string reversed2 = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        reversed2 += s[i];
    }
    cout << "Método 2: " << reversed2 << "\n";
    
    return 0;
}
```

---

## 🟢 Problema 8 (Extra): «Factorial» (Clásico)

**Enunciado:**  
Dado un entero `n` (0 ≤ n ≤ 12), calcula el factorial de `n` (n!). El factorial de 0 es 1.

**Razonamiento:**  
El factorial se define como `n! = n * (n-1) * (n-2) * ... * 1`. Usamos un bucle `for` que multiplica desde 1 hasta n. Como n ≤ 12, el resultado cabe en un `int` (12! ≈ 479 millones). Si n fuera más grande, usaríamos `long long` o `__int128`.

**Solución en C++:**
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long factorial = 1;
    
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    cout << n << "! = " << factorial << "\n";
    return 0;
}
```

---

## 🟢 Problema 9 (Extra): «Fibonacci» (Clásico)

**Enunciado:**  
Dado un entero `n` (1 ≤ n ≤ 30), imprime los primeros `n` números de la secuencia de Fibonacci: 0, 1, 1, 2, 3, 5, 8, 13, ...

**Razonamiento:**  
La secuencia comienza con `a = 0` y `b = 1`. Para cada iteración, imprimimos `a`, luego calculamos el siguiente como `c = a + b`, y actualizamos `a = b`, `b = c`. Repetimos `n` veces. Complejidad O(n).

**Solución en C++:**
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a = 0, b = 1;
    
    for (int i = 0; i < n; i++) {
        if (i > 0) cout << " ";
        cout << a;
        int c = a + b;
        a = b;
        b = c;
    }
    cout << "\n";
    
    return 0;
}
```

---

## 🟢 Problema 10: «Triángulo de números» (Clásico)

**Enunciado:**  
Dado un entero `n` (1 ≤ n ≤ 20), imprime un triángulo de números donde la primera fila tiene un 1, la segunda fila tiene dos 2s, la tercera fila tiene tres 3s, y así sucesivamente.

**Ejemplo para n = 3:**
```
1
22
333
```

**Razonamiento:**  
Usamos dos bucles anidados. El bucle exterior `i` controla la fila (de 1 a n). El bucle interior `j` controla la cantidad de números en esa fila (de 1 a i). En cada fila, imprimimos el número `i` repetido `i` veces. Al final de cada fila, hacemos un salto de línea.

**Solución en C++:**
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << "\n";
    }
    
    return 0;
}
```

---

**Resumen de conceptos cubiertos en nivel inicial:**
- Condicionales (if/else)
- Bucles (for, while)
- Arreglos y vectores
- Cadenas de texto (strings)
- Entrada/salida básica
- Operaciones matemáticas simples
- Precisión decimal (fixed, setprecision)
- Funciones de la STL (reverse, find)

Todos estos problemas son excelentes para practicar la sintaxis de C++ y el razonamiento lógico básico. ¡Espero que te sean útiles!
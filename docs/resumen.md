¡Excelente! Tienes un objetivo ambicioso pero alcanzable. Con 21 días y 4 horas diarias, puedes construir una base sólida para tu primera competencia. Vamos a crear un plan de estudio detallado, paso a paso, utilizando la sabiduría de estos dos libros.

El libro de Steven y Felix Halim ("Competitive Programming") es tu guía de estrategia y algoritmos. El libro de los autores bolivianos ("Introducción en C++ a la Programación Competitiva") será tu manual práctico para el lenguaje.

---

### **Plan de Estudio Detallado (21 Días)**

**Metodología:**
*   **Teoría (1.5 - 2 hrs):** Leer las secciones asignadas, entender los conceptos y analizar los códigos de ejemplo.
*   **Práctica (2 - 2.5 hrs):** **¡CRUCIAL!** Escribir, compilar y depurar cada fragmento de código. Modificar los ejemplos para ver cómo se comportan. Resolver los problemas de práctica recomendados.

**Recursos:**
*   **CP3:** "Competitive Programming 3" (Steven Halim & Felix Halim)
*   **IC:** "Introducción en C++ a la Programación Competitiva" (Libro Boliviano)

---

### **Semana 1: Fundamentos Sólidos (Días 1-7)**

**Objetivo:** Dominar la sintaxis de C++ (IC) y las técnicas de resolución de problemas más básicas (CP3).

**Día 1: Tu Primer Programa y Conceptos Básicos**
*   **Objetivo:** Configurar tu entorno de desarrollo, escribir tu primer programa y entender los tipos de datos y variables.
*   **Teoría:**
    *   **IC, Capítulo 1.1 - 1.2:** Introducción, ¿Qué es C++?, Herramientas, y "Lo más básico" (sintaxis, punto y coma, comentarios, datos primitivos, variables).
*   **Práctica:**
    *   **IC, Código 1.2, 1.4, 1.5:** Escribe el "Hola Mundo". Compila y ejecuta.
    *   **IC, Código 1.1:** Ejemplo de par/impar. Juega con él cambiando la variable `numero`.
*   **Código Esencial (IC, Código 1.5):**
    ```cpp
    #include <iostream>
    using namespace std; // Para no escribir std::cout cada vez

    int main() {
        int mi_edad; // Declaración de una variable
        mi_edad = 30; // Inicialización

        // Declaración e inicialización en una línea
        double pi = 3.14159;
        char letra = 'A';
        bool es_estudiante = true;

        cout << "Mi edad es: " << mi_edad << endl;
        cout << "El valor de pi es: " << pi << endl;
        cout << "Mi letra favorita es: " << letra << endl;
        cout << "¿Soy estudiante? (1=Sí, 0=No): " << es_estudiante << endl;

        return 0; // El programa terminó correctamente
    }
    ```
*   **Reflexión:** ¿Qué hace `using namespace std;`? ¿Por qué es importante `return 0;`?

---

**Día 2: Lectura, Escritura y Operadores**
*   **Objetivo:** Aprender a interactuar con el usuario y a manipular datos.
*   **Teoría:**
    *   **IC, Capítulo 1.2.5 (cin y cout), 1.2.6:** I/O (cin/cout/printf/scanf) y operadores (Aritméticos, Asignación, Relación).
*   **Práctica:**
    *   **IC, Código 1.7, 1.8:** Usa `cin` y `cout`.
    *   **IC, Código 1.12:** Usa `scanf` y `printf`. Compara la sintaxis.
    *   Escribe un programa que pida dos números y muestre su suma, resta, multiplicación y división.
    *   Escribe un programa que use el operador condicional ternario `? :`.
*   **Código Esencial (IC, Código 1.8 - combinado con 1.12):**
    ```cpp
    #include <iostream>
    #include <cstdio> // Para printf y scanf
    using namespace std;

    int main() {
        string nombre;
        int edad;

        // Usando cin y cout (C++)
        cout << "Ingresa tu nombre (con cin): ";
        cin >> nombre;
        cout << "Hola " << nombre << ", tu nombre tiene " << nombre.length() << " letras." << endl;

        // Usando scanf y printf (C)
        printf("Ingresa tu edad (con printf/scanf): ");
        scanf("%d", &edad); // ¡No olvides el '&' para variables!
        printf("Tienes %d años. El año que viene tendrás %d.\n", edad, edad + 1);

        return 0;
    }
    ```
*   **Reflexión:** ¿Cuál es la diferencia entre `cout << "Hola" << endl;` y `cout << "Hola" << "\n";`? ¿Por qué `scanf` necesita `&` y `cout` no?

---

**Día 3: Estructuras de Control y Bucles**
*   **Objetivo:** Controlar el flujo de tu programa con decisiones e iteraciones.
*   **Teoría:**
    *   **IC, Capítulo 1.3:** Estructuras de Control (if, switch, for, while, do-while).
*   **Práctica:**
    *   **IC, Código 1.9, 1.10:** Ejemplos de `if-else`.
    *   Implementa una calculadora de menú simple con `switch`.
    *   Usa un bucle `for` para sumar los primeros 100 números.
    *   Usa `while` para pedir un número al usuario hasta que ingrese un 0 para salir.
*   **Código Esencial:**
    ```cpp
    #include <iostream>
    using namespace std;

    int main() {
        // Bucle for: imprime los números pares del 2 al 10
        for (int i = 2; i <= 10; i = i + 2) {
            cout << i << " ";
        }
        cout << endl;

        // Bucle while: adivina un número secreto (el 7)
        int numero_usuario = 0;
        while (numero_usuario != 7) {
            cout << "Adivina el número (1-10): ";
            cin >> numero_usuario;
            if (numero_usuario > 7) {
                cout << "Muy alto!" << endl;
            } else if (numero_usuario < 7 && numero_usuario != 0) {
                cout << "Muy bajo!" << endl;
            }
        }
        cout << "¡Correcto!" << endl;
        return 0;
    }
    ```
*   **Reflexión:** ¿Cuándo usarías un bucle `for` vs un `while`? ¿Qué es una variable "centinela"?

---

**Día 4: Arrays, Matrices y Pares**
*   **Objetivo:** Organizar datos en colecciones estáticas.
*   **Teoría:**
    *   **IC, Capítulo 2.2:** Estructuras Estáticas (Arreglos unidimensionales, Matrices, Pares).
*   **Práctica:**
    *   **IC, Código 2.2:** Implementa un programa que use arreglos y matrices.
    *   Crea un programa que almacene las calificaciones de 5 estudiantes en un array y calcule el promedio.
    *   Crea una matriz de 3x3, llena con números y luego imprímela en forma de tabla.
    *   Usa `pair` para almacenar coordenadas (x, y) y luego imprímelas.
*   **Código Esencial:**
    ```cpp
    #include <iostream>
    using namespace std;

    int main() {
        // --- Arreglos ---
        int notas[5] = {70, 85, 90, 65, 80}; // Inicialización directa
        float suma = 0;
        for (int i = 0; i < 5; i++) {
            suma += notas[i];
        }
        cout << "El promedio de notas es: " << (suma / 5) << endl;

        // --- Matrices ---
        int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};
        cout << "El elemento en la fila 1, columna 2 es: " << matriz[1][2] << endl; // ¡Índices empiezan en 0!

        // --- Pares ---
        pair<string, int> persona = make_pair("Ana", 25);
        cout << "Nombre: " << persona.first << ", Edad: " << persona.second << endl;
        return 0;
    }
    ```
*   **Reflexión:** ¿Cuál es la diferencia entre un arreglo unidimensional y una matriz? ¿Por qué los índices empiezan en 0?

---

**Día 5: Vectores (Estructuras Dinámicas)**
*   **Objetivo:** Aprender a usar colecciones que pueden crecer y encogerse dinámicamente.
*   **Teoría:**
    *   **IC, Capítulo 2.3.1.1:** Vector (la estructura más importante para empezar). Funciones `.push_back()`, `.pop_back()`, `.size()`, `.clear()`, `[]`.
*   **Práctica:**
    *   **IC, Código 2.3:** Recrea y modifica todos los ejemplos del vector.
    *   Escribe un programa que lea números enteros hasta que se ingrese -1 y los guarde en un vector. Luego, imprime el tamaño del vector y todos los números.
    *   Crea un vector de strings, agrega 3 nombres y luego elimina el último.
*   **Código Esencial:**
    ```cpp
    #include <iostream>
    #include <vector>
    using namespace std;

    int main() {
        vector<int> numeros; // Crea un vector de enteros vacío

        numeros.push_back(10);
        numeros.push_back(20);
        numeros.push_back(30);

        cout << "El vector tiene " << numeros.size() << " elementos." << endl;
        for (int i = 0; i < numeros.size(); i++) {
            cout << numeros[i] << " ";
        }
        cout << endl;

        numeros.pop_back(); // Elimina el último elemento (30)
        cout << "Después de pop_back, tamaño: " << numeros.size() << endl;

        // Imprimir con un bucle "for-each" (más moderno)
        for (int n : numeros) {
            cout << n << " ";
        }
        cout << endl;
        return 0;
    }
    ```
*   **Reflexión:** ¿Por qué es mejor usar `vector` en lugar de un arreglo estático cuando no sabes el tamaño de antemano?

---

**Día 6: Otras Estructuras y Bitmasks**
*   **Objetivo:** Explorar más estructuras de datos y la poderosa técnica de máscaras de bits.
*   **Teoría:**
    *   **IC, Capítulo 2.3.1.2, 2.3.1.3 (Pila/Cola), 3.4 (Operaciones de bits), 3.5 (Máscara de bits).**
*   **Práctica:**
    *   **IC, Códigos de Pila/Cola:** Implementa y prueba las pilas (`stack`) y colas (`queue`). Pon ejemplos del mundo real (ej. pila de libros).
    *   **IC, Código 3.4:** Ejecuta el código de la máscara de bits. Es un algoritmo fundamental.
    *   Escribe un programa que use una máscara de bits para generar todos los subconjuntos de un conjunto de 3 elementos (por ejemplo, {A, B, C}).
*   **Código Esencial (Bitmask - IC, Código 3.5 - adaptado):**
    ```cpp
    #include <iostream>
    #include <vector>
    using namespace std;

    int main() {
        vector<char> conjunto = {'A', 'B', 'C'};
        int n = conjunto.size();

        cout << "Subconjuntos:" << endl;
        for (int mascara = 0; mascara < (1 << n); mascara++) {
            cout << "{ ";
            for (int i = 0; i < n; i++) {
                // Verifica si el i-ésimo bit está encendido
                if (mascara & (1 << i)) {
                    cout << conjunto[i] << " ";
                }
            }
            cout << "}" << endl;
        }
        return 0;
    }
    ```
*   **Reflexión:** ¿Para qué sirve la máscara de bits en programación competitiva? (Piensa en problemas de "subset sum" con n pequeño).

---

**Día 7: Repaso de Conceptos de C++ y Matemáticas Básicas**
*   **Objetivo:** Consolidar los fundamentos de C++ y empezar con los conceptos matemáticos necesarios.
*   **Teoría:**
    *   **Revisión:** Repasa los apuntes de C++ (días 1-6) para asegurarte de que entiendes todo.
    *   **IC, Capítulo 4 (Matemáticas):** Series (Aritméticas, Geométricas, Fibonacci), Números Primos (Prueba de Primalidad).
*   **Práctica:**
    *   **IC, Código 4.1:** Escribe la función `esPrimo`.
    *   Implementa una función que calcule el n-ésimo número de Fibonacci (recursivo e iterativo).
    *   **Problema:**
        1.  Dado un número `n`, imprime la suma de los primeros `n` números impares (usa una serie aritmética).
        2.  Escribe un programa que reciba un número y determine si es primo (usa `esPrimo`).
*   **Código Esencial (Función esPrimo - IC, Código 4.1):**
    ```cpp
    #include <iostream>
    using namespace std;

    bool esPrimo(int n) {
        if (n <= 1) return false;
        if (n <= 3) return true;
        if (n % 2 == 0) return false;
        for (int i = 3; i * i <= n; i += 2) { // Revisamos solo impares
            if (n % i == 0) return false;
        }
        return true;
    }

    int main() {
        int n;
        cout << "Ingresa un número: ";
        cin >> n;
        if (esPrimo(n)) {
            cout << n << " es primo." << endl;
        } else {
            cout << n << " no es primo." << endl;
        }
        return 0;
    }
    ```
*   **Reflexión:** ¿Por qué en la optimización de `esPrimo` solo revisamos `i*i <= n` en lugar de `i <= n`?

---

### **Semana 2: Algoritmos Fundamentales (Días 8-14)**

**Objetivo:** Aprender los algoritmos y técnicas más importantes de la programación competitiva. Esta es la semana de mayor carga teórica.

**Día 8: Resolución de Problemas y Búsqueda Binaria**
*   **Objetivo:** Entender cómo abordar un problema y dominar la búsqueda binaria.
*   **Teoría:**
    *   **CP3, Capítulo 1.3.1, 1.3.2:** Anatomía de un problema de programación competitiva y rutinas típicas de I/O.
    *   **IC, Capítulo 5.2 (Búsqueda Binaria):** Este es un algoritmo fundamental.
*   **Práctica:**
    *   **IC, Código 5.3:** Escribe el ejemplo de búsqueda binaria en un arreglo.
    *   Problemas de ejemplo de búsqueda binaria: **CP3, p.88 "UVa 10474 - Where is the Marble?"**. No resuelvas el problema en el juez, solo escríbelo localmente.
    *   Resuelve el problema de adivinar un número (entre 1 y 100) con búsqueda binaria.
*   **Código Esencial (Búsqueda Binaria - IC, Código 5.3 - adaptado):**
    ```cpp
    #include <iostream>
    using namespace std;

    int busquedaBinaria(int arr[], int n, int x) {
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2; // Evita desbordamiento
            if (arr[mid] == x) {
                return mid; // Encontrado
            } else if (arr[mid] < x) {
                low = mid + 1; // Buscar en la mitad derecha
            } else {
                high = mid - 1; // Buscar en la mitad izquierda
            }
        }
        return -1; // No encontrado
    }

    int main() {
        int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
        int n = sizeof(arr) / sizeof(arr[0]);
        int x = 23;
        int resultado = busquedaBinaria(arr, n, x);
        if (resultado != -1) {
            cout << "Elemento " << x << " encontrado en el índice " << resultado << endl;
        } else {
            cout << "Elemento no encontrado." << endl;
        }
        return 0;
    }
    ```
*   **Reflexión:** ¿Por qué la búsqueda binaria es tan eficiente (O(log n))? ¿Cuál es el requisito fundamental para usarla?

---

**Día 9: Algoritmos de Ordenamiento**
*   **Objetivo:** Conocer y saber implementar los algoritmos de ordenamiento más comunes.
*   **Teoría:**
    *   **IC, Capítulo 5.1:** Algoritmos de Ordenamiento (QuickSort, MergeSort, HeapSort, CountingSort).
*   **Práctica:**
    *   **IC, Código 5.1 (QuickSort) y 5.2 (MergeSort):** Escribe ambos algoritmos.
    *   No te enfoques tanto en los detalles de implementación de MergeSort, pero entiende la idea de "divide y vencerás".
    *   **CP3, p.41, Sección 2.2:** Aprende a usar `sort` de la STL de C++. Es lo que usarás en un 95% de los casos.
*   **Código Esencial (Usando `sort` de la STL):**
    ```cpp
    #include <iostream>
    #include <algorithm> // Para sort()
    #include <vector>
    using namespace std;

    int main() {
        vector<int> nums = {5, 2, 8, 1, 9, 3};

        // Ordenar de menor a mayor (ascendente)
        sort(nums.begin(), nums.end());

        cout << "Ordenado asc: ";
        for (int n : nums) cout << n << " ";
        cout << endl;

        // Ordenar de mayor a menor (descendente)
        sort(nums.begin(), nums.end(), greater<int>());

        cout << "Ordenado desc: ";
        for (int n : nums) cout << n << " ";
        cout << endl;

        return 0;
    }
    ```
*   **Reflexión:** ¿Cuál es la complejidad temporal de QuickSort, MergeSort y CountingSort? ¿Cuándo usarías CountingSort?

---

**Día 10: Búsqueda en Profundidad (DFS)**
*   **Objetivo:** Aprender a recorrer grafos con DFS.
*   **Teoría:**
    *   **CP3, Capítulo 4.2.1 (DFS):** Entiende el concepto y la implementación.
    *   **IC, Capítulo 7.3.2 (DFS):** Otro punto de vista.
*   **Práctica:**
    *   **CP3, p.122:** Implementa la función `dfs`.
    *   **IC, Código 7.8:** Escribe el código DFS.
    *   Aplicación: Usa DFS para encontrar el número de componentes conexas en un grafo no dirigido. **(CP3, p.125)**.
*   **Código Esencial (DFS - IC, Código 7.8 - adaptado):**
    ```cpp
    #include <iostream>
    #include <vector>
    using namespace std;

    vector<vector<int>> grafo;
    vector<bool> visitado;

    void dfs(int nodo) {
        visitado[nodo] = true;
        cout << nodo << " "; // Procesar el nodo
        for (int vecino : grafo[nodo]) {
            if (!visitado[vecino]) {
                dfs(vecino);
            }
        }
    }

    int main() {
        int n, m; // n = nodos, m = aristas
        cin >> n >> m;
        grafo.assign(n, {});
        visitado.assign(n, false);

        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            grafo[u].push_back(v);
            grafo[v].push_back(u); // Si es no dirigido
        }

        cout << "Recorrido DFS desde el nodo 0: ";
        dfs(0);
        cout << endl;
        return 0;
    }
    ```
*   **Reflexión:** ¿Qué es un grafo? ¿Cómo se representa un grafo con listas de adyacencia?

---

**Día 11: Búsqueda en Anchura (BFS)**
*   **Objetivo:** Aprender a recorrer grafos con BFS.
*   **Teoría:**
    *   **CP3, Capítulo 4.2.2 (BFS):** Entiende el concepto (cola) y la implementación.
    *   **IC, Capítulo 7.3.1 (BFS):** Punto de vista práctico.
*   **Práctica:**
    *   **CP3, p.123-124:** Implementa BFS con la cola.
    *   **IC, Código 7.7:** Escribe el código BFS.
    *   Encuentra la distancia más corta (en número de aristas) desde un nodo a todos los demás en un grafo no dirigido.
*   **Código Esencial (BFS - IC, Código 7.7 - adaptado):**
    ```cpp
    #include <iostream>
    #include <vector>
    #include <queue>
    using namespace std;

    vector<vector<int>> grafo;
    vector<int> distancia;

    void bfs(int inicio) {
        queue<int> q;
        q.push(inicio);
        distancia[inicio] = 0;

        while (!q.empty()) {
            int u = q.front();
            q.pop();
            cout << u << " (dist: " << distancia[u] << ") ";
            for (int v : grafo[u]) {
                if (distancia[v] == -1) { // No visitado
                    distancia[v] = distancia[u] + 1;
                    q.push(v);
                }
            }
        }
    }

    int main() {
        int n, m;
        cin >> n >> m;
        grafo.assign(n, {});
        distancia.assign(n, -1);

        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            grafo[u].push_back(v);
            grafo[v].push_back(u);
        }

        cout << "BFS desde el nodo 0: ";
        bfs(0);
        cout << endl;
        return 0;
    }
    ```
*   **Reflexión:** ¿Cuál es la principal diferencia entre DFS y BFS? ¿Cuándo usarías BFS en lugar de DFS?

---

**Día 12: Búsqueda Completa (Fuerza Bruta)**
*   **Objetivo:** Aprender a usar la búsqueda completa cuando el espacio de búsqueda es pequeño.
*   **Teoría:**
    *   **CP3, Capítulo 3.2 (Complete Search):** Esta es tu "navaja suiza".
*   **Práctica:**
    *   **CP3, p.71-72:** Escribe el código de "UVa 725 - Division" (iterativo, 2 bucles anidados).
    *   **CP3, p.74:** Escribe el código de las 8 reinas (recursivo, backtracking). Es un clásico.
    *   Practica con la **máscara de bits** (IC, Capítulo 3.5) para generar subconjuntos.
*   **Código Esencial (Backtracking simple - generación de permutaciones):**
    ```cpp
    #include <iostream>
    #include <vector>
    using namespace std;

    void generarPermutaciones(vector<int>& elementos, int idx) {
        if (idx == elementos.size()) {
            for (int x : elementos) cout << x << " ";
            cout << endl;
            return;
        }
        for (int i = idx; i < elementos.size(); i++) {
            swap(elementos[idx], elementos[i]);
            generarPermutaciones(elementos, idx + 1);
            swap(elementos[idx], elementos[i]); // Backtrack
        }
    }

    int main() {
        vector<int> arr = {1, 2, 3};
        cout << "Permutaciones: " << endl;
        generarPermutaciones(arr, 0);
        return 0;
    }
    ```
*   **Reflexión:** ¿Qué es el "backtracking"? ¿Por qué se llama así?

---

**Día 13: Dijkstra (Camino Más Corto)**
*   **Objetivo:** Aprender el algoritmo de Dijkstra para caminos más cortos en grafos con pesos no negativos.
*   **Teoría:**
    *   **CP3, Capítulo 4.4.3 (Dijkstra):** Esencial. Entiende la lógica con la cola de prioridad (priority_queue).
    *   **IC, Capítulo 8.2 (Camino más corto):** Diagramas.
*   **Práctica:**
    *   **CP3, p.148:** Implementa el código de Dijkstra.
    *   **IC, Código 8.2:** Escribe el código de Dijkstra con `set`.
    *   **Problema:** Dado un grafo ponderado, encuentra el camino más corto desde el nodo 0 a todos los demás.
*   **Código Esencial (Dijkstra - CP3, p.148 - adaptado):**
    ```cpp
    #include <iostream>
    #include <vector>
    #include <queue>
    using namespace std;

    typedef pair<int, int> ii; // (distancia, nodo)

    vector<vector<ii>> grafo;
    vector<int> dist;

    void dijkstra(int inicio) {
        priority_queue<ii, vector<ii>, greater<ii>> pq; // Min-heap
        dist[inicio] = 0;
        pq.push({0, inicio});

        while (!pq.empty()) {
            ii top = pq.top();
            pq.pop();
            int d = top.first, u = top.second;

            if (d > dist[u]) continue; // Ignorar entradas antiguas

            for (ii arista : grafo[u]) {
                int v = arista.first, w = arista.second;
                if (dist[u] + w < dist[v]) {
                    dist[v] = dist[u] + w;
                    pq.push({dist[v], v});
                }
            }
        }
    }

    int main() {
        int n, m;
        cin >> n >> m;
        grafo.assign(n, {});
        dist.assign(n, 1e9); // "Infinito"

        for (int i = 0; i < m; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            grafo[u].push_back({v, w});
        }

        dijkstra(0);
        cout << "Distancias desde el nodo 0:" << endl;
        for (int i = 0; i < n; i++) {
            cout << "Nodo " << i << ": " << dist[i] << endl;
        }
        return 0;
    }
    ```
*   **Reflexión:** ¿Por qué Dijkstra no funciona con aristas de peso negativo?

---

**Día 14: Repaso de Algoritmos**
*   **Objetivo:** Repasar todos los algoritmos de la semana y practicar con un problema integrador.
*   **Actividades:**
    *   **Teoría:** Repasa las notas de DFS, BFS, Búsqueda Binaria, Ordenamiento y Dijkstra.
    *   **Práctica:**
        *   **Problema Integrador:** Resuelve **"UVa 336 - A Node Too Far" (CP3, p.153)**.
            *   **Paso 1:** Construir el grafo a partir de la entrada.
            *   **Paso 2:** Usar BFS para calcular distancias desde un nodo hasta todos los demás.
            *   **Paso 3:** Contar cuántos nodos están a una distancia <= TTL.
        *   Este problema simple te obliga a leer un grafo, usar BFS y procesar la salida. Es un excelente ejercicio de práctica.
*   **Código de Referencia (Estructura básica para UVa 336):**
    ```cpp
    #include <iostream>
    #include <map> // Para dar nombres a los nodos
    #include <vector>
    #include <queue>
    using namespace std;

    int main() {
        int NC, caso = 1;
        while (cin >> NC, NC) {
            map<int, int> id; // Mapea el nodo original a un índice 0,1,2...
            vector<vector<int>> grafo;
            int n_nodos = 0;

            for (int i = 0; i < NC; i++) {
                int u, v;
                cin >> u >> v;
                if (!id.count(u)) { id[u] = n_nodos++; grafo.push_back({}); }
                if (!id.count(v)) { id[v] = n_nodos++; grafo.push_back({}); }
                grafo[id[u]].push_back(id[v]);
                grafo[id[v]].push_back(id[u]);
            }

            // ... Tu código para procesar las consultas y usar BFS ...
        }
        return 0;
    }
    ```
*   **Reflexión:** ¿Cómo funciona el `map` para asignar un ID único a cada nodo? ¿Por qué es útil en problemas con nombres de nodos no secuenciales?

---

### **Semana 3: Técnicas Avanzadas y Práctica (Días 15-21)**

**Objetivo:** Adentrarse en técnicas más avanzadas y enfocarse en la resolución de problemas.

**Día 15: Programación Dinámica - Introducción**
*   **Objetivo:** Entender el concepto fundamental de la Programación Dinámica (DP): "memorización".
*   **Teoría:**
    *   **CP3, Capítulo 3.5 (Dynamic Programming):** Lee la introducción y la parte de "Top-Down" (memoization).
    *   **IC, Capítulo 9.1:** Sigue el ejemplo de los vinos. Es una excelente explicación paso a paso.
*   **Práctica:**
    *   **IC, Código 9.2, 9.3, 9.4:** Escribe las 3 versiones (backtracking, reducción de estados y DP con memoización). Observa cómo el código se vuelve más eficiente.
    *   **Problema Clásico: "Longest Increasing Subsequence (LIS)" - CP3, p.105.**
*   **Código Esencial (DP - Ejemplo de Fibonacci con memoización):**
    ```cpp
    #include <iostream>
    #include <vector>
    using namespace std;

    vector<int> memo;

    int fib(int n) {
        if (n <= 1) return n;
        if (memo[n] != -1) return memo[n];
        return memo[n] = fib(n - 1) + fib(n - 2);
    }

    int main() {
        int n;
        cout << "Ingresa n: ";
        cin >> n;
        memo.assign(n + 1, -1);
        cout << "Fibonacci de " << n << " es: " << fib(n) << endl;
        return 0;
    }
    ```
*   **Reflexión:** ¿Cómo la memoización convierte un algoritmo exponencial en uno polinómico? ¿Cuál es la diferencia entre "Top-Down" y "Bottom-Up"?

---

**Día 16: Programación Dinámica - Problemas Clásicos**
*   **Objetivo:** Aprender los problemas clásicos de DP (LIS y Knapsack).
*   **Teoría:**
    *   **IC, Capítulo 9.2.1, 9.2.2:** Lee y entiende los análisis de LIS y el problema de la mochila (0/1 Knapsack).
    *   **CP3, p.107-108:** Lee sobre el Knapsack 0/1 y el Coin Change.
*   **Práctica:**
    *   **IC, Código 9.5, 9.6:** Escribe los códigos de LIS y Knapsack.
    *   **Problema:** Resuelve **UVa 10130 - SuperSale** (CP3, p.116). Es una aplicación directa del Knapsack 0/1.
*   **Código Esencial (Knapsack 0/1 - IC, Código 9.6 - adaptado):**
    ```cpp
    #include <iostream>
    #include <vector>
    using namespace std;

    vector<vector<int>> dp;
    vector<int> valor, peso;

    int knapsack(int i, int capacidad_restante) {
        if (i < 0 || capacidad_restante <= 0) return 0;
        if (dp[i][capacidad_restante] != -1) return dp[i][capacidad_restante];

        int no_tomar = knapsack(i - 1, capacidad_restante);
        int tomar = 0;
        if (peso[i] <= capacidad_restante) {
            tomar = valor[i] + knapsack(i - 1, capacidad_restante - peso[i]);
        }
        return dp[i][capacidad_restante] = max(no_tomar, tomar);
    }

    int main() {
        int N, W;
        cin >> N >> W;
        valor.assign(N, 0);
        peso.assign(N, 0);
        dp.assign(N, vector<int>(W + 1, -1));
        for (int i = 0; i < N; i++) {
            cin >> valor[i] >> peso[i];
        }
        cout << "Máximo valor: " << knapsack(N - 1, W) << endl;
        return 0;
    }
    ```
*   **Reflexión:** ¿Cuál es la complejidad temporal de este algoritmo Knapsack? ¿Qué significa la "capacidad restante" en la DP?

---

**Día 17: Grafos Especiales y Técnicas de Búsqueda Avanzada**
*   **Objetivo:** Conocer problemas de grafos especiales y técnicas de búsqueda.
*   **Teoría:**
    *   **CP3, Capítulo 4.7.1, 4.7.2:** Problemas en DAG y árboles (recorridos, programación dinámica en árboles).
    *   **IC, Capítulo 8.3, 8.4:** Puntos de Articulación y Puentes, Componentes Conexas (SCC).
    *   **CP3, Capítulo 8.2.4:** "Meet in the Middle" (búsqueda bidireccional).
*   **Práctica:**
    *   Escucha: En este punto, con 21 días, es más importante la práctica que la teoría. Concéntrate en entender los conceptos de DAG y SCC.
    *   Escribe un código que detecte ciclos en un grafo dirigido usando DFS (CP3, p. 129).
*   **Reflexión:** ¿Qué es un DAG? ¿Por qué un DAG siempre se puede resolver con DP?

---

**Día 18: Estructuras de Datos Avanzadas**
*   **Objetivo:** Aprender sobre estructuras de datos que te harán más eficiente.
*   **Teoría:**
    *   **IC, Capítulo 6.3 (Union-Find en Conjuntos Disjuntos):** Útil para Kruskal y componentes conexas.
    *   **IC, Capítulo 6.4 (Árbol de Segmentos - Segment Tree):** Para consultas de rangos (suma, mínimo, máximo) con actualizaciones.
*   **Práctica:**
    *   **IC, Códigos 6.3.1, 6.3.2:** Implementa las funciones `Find` y `Union`.
    *   **IC, Códigos 6.4.2, 6.4.3, 6.4.4:** Implementa `init`, `update` y `query` de un Segment Tree.
    *   **Problema:** Usa Union-Find para contar el número de componentes conexas en un grafo no dirigido.
*   **Código Esencial (Union-Find - IC, p. 92-94 - simplificado):**
    ```cpp
    #include <iostream>
    #include <vector>
    using namespace std;

    vector<int> padre;

    int find(int x) {
        if (padre[x] == x) return x;
        return padre[x] = find(padre[x]); // Compresión de camino
    }

    void unionSets(int x, int y) {
        int rx = find(x), ry = find(y);
        if (rx != ry) padre[rx] = ry;
    }

    bool mismoConjunto(int x, int y) {
        return find(x) == find(y);
    }

    int main() {
        int n = 5; // 5 elementos
        padre.resize(n);
        for (int i = 0; i < n; i++) padre[i] = i;

        unionSets(0, 1);
        unionSets(1, 2);
        cout << mismoConjunto(0, 2) << endl; // 1 (verdadero)
        cout << mismoConjunto(0, 3) << endl; // 0 (falso)

        return 0;
    }
    ```
*   **Reflexión:** ¿Cómo funciona la "compresión de camino" en `find`? ¿Por qué es tan importante para la eficiencia?

---

**Día 19: Programación Dinámica - Temas Avanzados**
*   **Objetivo:** Practicar DP con problemas de la vida real.
*   **Teoría:**
    *   **CP3, Capítulo 8.3:** Técnicas avanzadas de DP. Lee sobre "DP con Bitmask". Es una técnica importante.
*   **Práctica:**
    *   **Problema: "Coin Change" (CP3, p. 108)**. Es muy común.
    *   **Problema: "Edit Distance" (CP3, p. 245)**. Clásico de procesamiento de strings.
    *   **Problema:** **UVa 10943 - How do you add?** (CP3, p. 117).
*   **Código Esencial (Coin Change - número de formas):**
    ```cpp
    #include <iostream>
    #include <vector>
    using namespace std;

    vector<vector<int>> dp;
    vector<int> monedas = {1, 5, 10, 25}; // Ejemplo: centavos

    int formas(int tipo, int cantidad) {
        if (cantidad == 0) return 1;
        if (tipo < 0 || cantidad < 0) return 0;
        if (dp[tipo][cantidad] != -1) return dp[tipo][cantidad];

        // No usar la moneda actual + Usar la moneda actual
        return dp[tipo][cantidad] = formas(tipo - 1, cantidad) + formas(tipo, cantidad - monedas[tipo]);
    }
    ```
*   **Reflexión:** ¿Cuál es la diferencia entre este problema y el Knapsack? (Aquí puedes usar la misma moneda varias veces).

---

**Día 20: Práctica Intensiva con Problemas Reales**
*   **Objetivo:** Aplicar todo lo aprendido en problemas reales de juez en línea.
*   **Teoría:**
    *   **CP3, Apéndice A (uHunt):** Aprende a usar uHunt para encontrar problemas de dificultad adecuada.
*   **Práctica (elige 3-4):**
    *   **UVa 272 - TEX Quotes** (Muy fácil, para calentar).
    *   **UVa 100 - The 3n + 1 problem** (Clásico de simulación).
    *   **UVa 102 - Ecological Bin Packing** (Búsqueda completa).
    *   **UVa 10041 - Vito's Family** (Ordenamiento y mediana).
    *   **UVa 11060 - Beverages** (Topological Sort).
    *   **UVa 10608 - Friends** (Union-Find / Componentes Conexas).
*   **Resolución:**
    *   Lee el problema con atención.
    *   Diseña el algoritmo en papel (lápiz y papel).
    *   Escribe el código.
    *   Pruébalo con los casos de muestra.
    *   **¡SUBMITEALO!**

---

**Día 21: Simulación de Competencia y Estrategia Final**
*   **Objetivo:** Simular las condiciones de una competencia real y repasar estrategias.
*   **Práctica (3 horas):**
    *   Elige un set de problemas de un concurso pasado de UVa (por ejemplo, un "Regional" de 5 problemas).
    *   Configura un temporizador de 3 horas (simulando el tiempo real de una competencia).
    *   Intenta resolver la mayor cantidad de problemas en el tiempo asignado. ¡Usa todas tus técnicas!
    *   **Es crucial que no mires soluciones durante la simulación.**
*   **Análisis y Estrategias (1 hora):**
    *   Revisa los problemas que no pudiste resolver. ¿Fue por falta de conocimiento o por un error tonto?
    *   **Estrategias clave de competencia:**
        *   **Lee TODOS los problemas primero.** Identifica los que parecen más fáciles.
        *   **No te atranques en un problema.** Si llevas más de 30-40 minutos, pásalo y vuelve a él después.
        *   **Usa papel y lápiz para diseñar casos de prueba.**
        *   **Aprende a depurar rápido** usando `cout` o el depurador de tu IDE.
        *   **Mantén la calma.** Una competencia es tanto mental como técnica.

---

### **Recursos Adicionales y Consejos Finales:**

*   **C++ es tu herramienta:** En estos 21 días, enfócate en escribir código claro y correcto. La velocidad viene con la práctica.
*   **Problemas:** uHunt es tu mejor aliado. Usa la sección `uHunt` del **CP3, Apéndice A**.
*   **Lectura:** El **CP3** es un libro de referencia. No lo leas todo en 21 días. Úsalo como un diccionario para los temas que necesites.
*   **Comunidad:** En una competencia real, trabaja en equipo (si es ICPC). Comunica tus ideas a tus compañeros.
*   **¡Diviértete!** La programación competitiva es un reto, pero también es muy gratificante.

**¡Mucho éxito en tu competencia! Has hecho un gran esfuerzo en 21 días. Ahora es momento de ponerlo en práctica.**
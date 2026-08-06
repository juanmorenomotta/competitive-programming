Aquí tienes **dos ejemplos por nivel** (inicial, intermedio y avanzado) de problemas de programación competitiva resueltos en C++. Cada problema incluye el enunciado, el razonamiento paso a paso y el código completo.

---

## 🟢 Nivel Inicial (Principiante)

### Problema 1: «Año Nuevo: Reunión de Amigos» (Codeforces 723A)
**Enunciado:**  
Tres amigos viven en una línea recta en las coordenadas `x1, x2, x3` (enteros entre 1 y 1000). Quieren reunirse en un mismo punto. ¿Cuál es la distancia total mínima que deben recorrer entre los tres?

**Razonamiento:**  
El punto óptimo para minimizar la suma de distancias absolutas es la **mediana** de las tres coordenadas. Si ordenamos las coordenadas, la mediana es el elemento del medio. La distancia total mínima será `(max - min)`, que equivale a `(x3 - x1)` después de ordenar.

**Solución en C++:**
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> x(3);
    cin >> x[0] >> x[1] >> x[2];
    sort(x.begin(), x.end());
    // La distancia total mínima es la diferencia entre el mayor y el menor
    cout << x[2] - x[0] << "\n";
    return 0;
}
```

---

### Problema 2: «Matriz Hermosa» (Codeforces 263A)
**Enunciado:**  
Se te da una matriz de `5x5` que contiene exactamente un `1` y el resto son `0`. En un movimiento, puedes intercambiar una fila adyacente o una columna adyacente. ¿Cuántos movimientos mínimos se necesitan para llevar el `1` al centro (posición `(2,2)` usando índice 0)?

**Razonamiento:**  
Buscamos la posición `(i, j)` donde se encuentra el `1`. La distancia en movimientos es la distancia de Manhattan desde `(i, j)` hasta el centro `(2, 2)`: `|i - 2| + |j - 2|`. Cada movimiento cambia exactamente en 1 una coordenada, por lo que esta distancia es la mínima posible.

**Solución en C++:**
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int mat[5][5];
    int fi, fj;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> mat[i][j];
            if (mat[i][j] == 1) {
                fi = i;
                fj = j;
            }
        }
    }
    int ans = abs(fi - 2) + abs(fj - 2);
    cout << ans << "\n";
    return 0;
}
```

---

## 🟡 Nivel Intermedio

### Problema 1: «Inversiones en un arreglo» (Counting Inversions)
**Enunciado:**  
Dado un arreglo `A` de `N` enteros (`N ≤ 10^5`), cuenta cuántos pares `(i, j)` cumplen que `i < j` y `A[i] > A[j]`. Este número se llama número de inversiones.

**Razonamiento:**  
Usamos el algoritmo de **Merge Sort** modificado. Durante el paso de mezcla (merge), cuando tomamos un elemento de la mitad derecha, todos los elementos restantes en la mitad izquierda son mayores que él, por lo que contribuyen a las inversiones. Sumamos esa cantidad en cada fusión. La complejidad es `O(N log N)` y el espacio es `O(N)`.

**Solución en C++:**
```cpp
#include <bits/stdc++.h>
using namespace std;

long long merge(vector<int>& a, int l, int m, int r) {
    vector<int> temp(r - l + 1);
    int i = l, j = m + 1, k = 0;
    long long inv = 0;

    while (i <= m && j <= r) {
        if (a[i] <= a[j]) {
            temp[k++] = a[i++];
        } else {
            // a[i] > a[j], todos los elementos desde i hasta m son > a[j]
            inv += (m - i + 1);
            temp[k++] = a[j++];
        }
    }
    while (i <= m) temp[k++] = a[i++];
    while (j <= r) temp[k++] = a[j++];

    for (int p = 0; p < k; p++) {
        a[l + p] = temp[p];
    }
    return inv;
}

long long mergeSort(vector<int>& a, int l, int r) {
    long long inv = 0;
    if (l < r) {
        int m = l + (r - l) / 2;
        inv += mergeSort(a, l, m);
        inv += mergeSort(a, m + 1, r);
        inv += merge(a, l, m, r);
    }
    return inv;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> A(N);
    for (int &x : A) cin >> x;

    cout << mergeSort(A, 0, N - 1) << "\n";
    return 0;
}
```

---

### Problema 2: «Mochila 0/1» (Knapsack)
**Enunciado:**  
Dados `N` objetos, cada uno con un peso `w[i]` y un valor `v[i]`, y una mochila con capacidad máxima `W`, escoge un subconjunto de objetos que maximice la suma de valores sin exceder la capacidad. Cada objeto se puede tomar una sola vez.

**Razonamiento:**  
Usamos **programación dinámica** con un arreglo `dp[j]` que representa el valor máximo que se puede obtener con capacidad exacta `j`. Para cada objeto, iteramos la capacidad desde `W` hacia abajo hasta `w[i]` (para no reutilizar el mismo objeto) y actualizamos `dp[j] = max(dp[j], dp[j - w[i]] + v[i])`. La respuesta es el máximo en `dp[0..W]`. Complejidad `O(N * W)`.

**Solución en C++:**
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, W;
    cin >> N >> W;
    vector<int> w(N), v(N);
    for (int i = 0; i < N; i++) {
        cin >> w[i] >> v[i];
    }

    vector<long long> dp(W + 1, 0);
    for (int i = 0; i < N; i++) {
        for (int cap = W; cap >= w[i]; cap--) {
            dp[cap] = max(dp[cap], dp[cap - w[i]] + v[i]);
        }
    }

    long long ans = 0;
    for (int cap = 0; cap <= W; cap++) {
        ans = max(ans, dp[cap]);
    }
    cout << ans << "\n";
    return 0;
}
```

---

## 🔴 Nivel Avanzado

### Problema 1: «Subsecuencia creciente más larga en O(N log N)» (LIS)
**Enunciado:**  
Dado un arreglo `A` de `N` enteros (`N ≤ 10^5`), encuentra la longitud de la subsecuencia (no necesariamente contigua) creciente más larga. Estricta: `i1 < i2 < ... < ik` y `A[i1] < A[i2] < ... < A[ik]`.

**Razonamiento:**  
El algoritmo clásico de `O(N^2)` no sirve para `10^5`. Usamos la técnica de **patience sorting**. Mantenemos un vector `tails` donde `tails[i]` es el valor más pequeño posible como último elemento de una subsecuencia creciente de longitud `i+1`. Para cada `x` en `A`, buscamos la primera posición en `tails` donde el valor sea mayor o igual a `x` (con `lower_bound`). Si existe, lo reemplazamos; si no, agregamos `x` al final. La longitud final de `tails` es la respuesta. Complejidad `O(N log N)`.

**Solución en C++:**
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> A(N);
    for (int &x : A) cin >> x;

    vector<int> tails;
    for (int x : A) {
        auto it = lower_bound(tails.begin(), tails.end(), x);
        if (it == tails.end()) {
            tails.push_back(x);
        } else {
            *it = x;
        }
    }

    cout << tails.size() << "\n";
    return 0;
}
```

---

### Problema 2: «Segment Tree con Lazy Propagation» (Rango suma y actualización por rango)
**Enunciado:**  
Dado un arreglo de `N` enteros (`N ≤ 10^5`), procesa `Q` consultas de dos tipos:
1. `1 L R X`: sumar `X` a todos los elementos en el rango `[L, R]` (inclusive).
2. `2 L R`: imprimir la suma de los elementos en el rango `[L, R]`.

**Razonamiento:**  
Un Segment Tree normal permite consultas y actualizaciones puntuales en `O(log N)`, pero aquí las actualizaciones son por rango. Usamos **Lazy Propagation**: en cada nodo guardamos un "pendiente" (`lazy`) que indica cuánto hay que sumar a sus hijos. Cuando una actualización cubre completamente un nodo, actualizamos su suma y su `lazy`, y no bajamos a los hijos. Solo al hacer consultas parciales, "empujamos" (`push`) el `lazy` a los hijos. Todas las operaciones son `O(log N)`.

**Solución en C++:**
```cpp
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct SegTree {
    int n;
    vector<ll> tree, lazy;

    SegTree(const vector<int>& a) {
        n = a.size();
        tree.resize(4 * n);
        lazy.resize(4 * n, 0);
        build(1, 0, n - 1, a);
    }

    void build(int node, int l, int r, const vector<int>& a) {
        if (l == r) {
            tree[node] = a[l];
            return;
        }
        int mid = (l + r) / 2;
        build(node * 2, l, mid, a);
        build(node * 2 + 1, mid + 1, r, a);
        tree[node] = tree[node * 2] + tree[node * 2 + 1];
    }

    void apply(int node, int l, int r, ll val) {
        tree[node] += (r - l + 1) * val;
        lazy[node] += val;
    }

    void push(int node, int l, int r) {
        if (lazy[node] != 0 && l != r) {
            int mid = (l + r) / 2;
            apply(node * 2, l, mid, lazy[node]);
            apply(node * 2 + 1, mid + 1, r, lazy[node]);
            lazy[node] = 0;
        }
    }

    void update(int ql, int qr, ll val) {
        update(1, 0, n - 1, ql, qr, val);
    }

    void update(int node, int l, int r, int ql, int qr, ll val) {
        if (ql <= l && r <= qr) {
            apply(node, l, r, val);
            return;
        }
        push(node, l, r);
        int mid = (l + r) / 2;
        if (ql <= mid) update(node * 2, l, mid, ql, qr, val);
        if (qr > mid) update(node * 2 + 1, mid + 1, r, ql, qr, val);
        tree[node] = tree[node * 2] + tree[node * 2 + 1];
    }

    ll query(int ql, int qr) {
        return query(1, 0, n - 1, ql, qr);
    }

    ll query(int node, int l, int r, int ql, int qr) {
        if (ql <= l && r <= qr) {
            return tree[node];
        }
        push(node, l, r);
        int mid = (l + r) / 2;
        ll res = 0;
        if (ql <= mid) res += query(node * 2, l, mid, ql, qr);
        if (qr > mid) res += query(node * 2 + 1, mid + 1, r, ql, qr);
        return res;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    for (int &x : A) cin >> x;

    SegTree st(A);

    while (Q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int L, R;
            ll X;
            cin >> L >> R >> X;
            L--; R--; // pasar a 0-index
            st.update(L, R, X);
        } else {
            int L, R;
            cin >> L >> R;
            L--; R--;
            cout << st.query(L, R) << "\n";
        }
    }
    return 0;
}
```

---

Cada solución está escrita en C++17 estándar. Los niveles están graduados por la complejidad de los algoritmos y estructuras de datos utilizadas, desde simples bucles y matemáticas hasta programación dinámica, divide y vencerás, y árboles de segmentos con lazy propagation. ¡Espero que te sean de gran utilidad!
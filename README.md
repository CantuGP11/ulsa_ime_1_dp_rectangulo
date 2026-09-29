# Práctica 3: Área y perímetro de un rectángulo
## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->

Este programa calculara el area y perimetro de un rectangulo, donde nos ayudaria a calcular el area de un terreno y sus mediads para cuando tengas pensado hacer una empresa o un negocio.

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato, sus unidades y su objetivo. -->

**Entradas:**
1. Ancho: numero entero, en metros. Representa el ancho del rectangulo.
2. Alto: numero entero, en metros. Representa la altura del rectangulo.

**Salidas:**
1. Area: numero entero, en metros cuadrados. Representa el espacio que ocupa el rectangulo.
2. Perimetro: numero entero, en metros. Representa la distancia alrededor del rectangulo.

**Fórmulas** (área y perímetro):
Area = ancho × alto

Perimetro = 2 × (ancho + alto)

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- La altura debe ser mayor que 0
- El ancho debe ser ayor que 0

**¿Qué hace mi programa con una medida de 0 o negativa? ¿Por qué?**
El programa vuelve a pedir la medida porque una longitud de 0 o negativa no representa una medida valida para un rectangulo.

**¿Quién detecta cada error?** (¿qué revisa `leerDecimal` y qué reviso yo?)
leerDecimal revisa que el usuario introduzca un número válido. Mi programa revisa que el número sea mayor que 0.

**Invariante** (al salir del ciclo que pide el ancho, ¿qué es seguro sobre `ancho`?):
Al salir del ciclo, es seguro que ancho contiene un número válido y mayor que 0.

## 4. Casos resueltos a mano (Fase 1)

| Caso | Ancho | Alto | Área calculada a mano | Perímetro calculado a mano |
|---|---|---|---|---|
| 1 | opcional | 5 | 3 | 5x3=15 |5+5+3+3=16
| 2 (cuadrado) | 4 | 4 | 4x4=16 | 4+4+4+4=16 |
| 3 (con decimales) | 2.5 | 4 | 2.5x4=10 | 2.5+2.5+4+4=13 |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las preguntas. -->

**¿Probé mi receta a mano con un caso válido y uno inválido?** Sí 
**¿Tuve que corregirla?** Sí, corregí algunas partes de la receta para que las validaciones funcionaran correctamente.
**¿Cuántas versiones de mi receta escribí hasta la final?** 2 veces

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o rectangulo
./rectangulo
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso normal. -->

```
Ingresa el ancho: 10
Ingresa el alto: 5
Area: 50
Perimetro: 30
```

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué resultado dio `2 * ancho + alto` con 5 × 3? ¿Por qué?**
El resultado fue 13. Esto esta mal porque la formula correcta del perimetro es 2 * (ancho + alto). Sin los parentesis, primero se multiplica 2 por el ancho y despues se suma el alto.

**Experimento B: sin validación, ¿qué mostró el programa con ancho -4 y alto 3? ¿Tiene sentido?**
El programa mostro un area de -12 y un perimetro de -2. No tiene sentido porque una medida no puede ser negativa. Por eso es necesario validar que el ancho y el alto sean mayores que 0.

**Experimento C (opcional): con `int`, ¿qué pasó con 2.5 y con 100000 × 100000?**
Con int, el valor 2.5 no se puede guardar correctamente porque int solo trabaja con numeros enteros. Ademas, una operacion como 100000 x 100000 puede causar un desbordamiento si el tipo de entero no puede almacenar un numero tan grande.

9. Tabla de pruebas (Fase 4)

## 9. Tabla de pruebas (Fase 4)

| Caso | Ancho | Alto | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|---|
| Normal | 5 | 3 | Área 15, perímetro 16 | area 15, perimetro 16 | si |
| Cuadrado | 4 | 4 | Área 16, perímetro 16 | area 16, perimetro 16 | si |
| Decimales | 2.5 | 4 | Área 10, perímetro 13 | area 10, perimetro 13 | si |
| Muy pequeño | 0.1 | 0.1 | Área 0.01, perímetro 0.4 | area 0.01, perimetro 0.4 | si |
| Ancho cero | 0 | 3 | vuelve a pedir el ancho | vuelve a pedir el ancho | si |
| Alto negativo | 5 | -2 | vuelve a pedir el alto | vuelve a pedir el alto | si |
| Texto | `abc` | 3 | `leerDecimal` vuelve a pedir | vuelve a pedir | si |
| Caso propio 1 | 10 | 3 | Area 30, perimetro 26 | area 30, perimetro 26 | si |
| Caso propio 2 | 6 | 1 | area 6, perimetro 14 | area 6, perimetro 14 | si |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | La fórmula del perímetro podía quedar incorrecta si no usaba paréntesis. | Cambié la fórmula a 2 * (ancho + alto). | si |
| 2 | El programa podía aceptar medidas de 0 o negativas. | Agregué una validación para pedir nuevamente la medida. | si |

**Reto elegido (opcional):** no hice ningun reto

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| ¿Qué otros tipos de datos puedo utilizar además de double para este programa? | Probé utilizando double porque permite trabajar con números decimales. |

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
Aprendi a hacer operaciones matematicas, calcular el area y perimetro de un rectangulo y validar que los datos introducidos sean correctos.

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
Primero pensaria con mas cuidado las formulas y las restricciones antes de comenzar a escribir el codigo. Tambien probaria mas casos para encontrar errores.

**¿Qué fue lo más difícil y cómo lo resolví?**
Lo mas dificil fue entender como hacer las validaciones para evitar numeros negativos o cero. Lo resolvi utilizando condiciones y ciclos para volver a pedir el dato cuando no era valido.

**¿Qué pregunta me quedó sin responder?**
Me quedo la duda de como podria hacer el programa para calcular tambien otras figuras geometricas, como circulos o triangulos.

**Diseñar la receta desde cero, ¿fue más fácil o más difícil de lo que esperaba? ¿Qué haría distinto la próxima vez?**
Fue un poco dificil al principio porque tenia que pensar en todos los pasos antes de escribir el codigo. La proxima vez primero identificaria las entradas, salidas, restricciones y formulas, y despues haria la receta paso a paso.

## 13. Lista de verificación antes de entregar (Fase 5)

- [listo] Llené todas las secciones (no quedan `_____`)
- [listo] Escribí mi receta completa en `RECETA.md` antes de programar
- [listo] Mi programa compila sin advertencias
- [listo] Probé todos los casos de la tabla
- [listo] Hice los Experimentos A y B y dejé el código correcto al terminar
- [listo] No modifiqué `utilerias.h`
- [listo] Hice al menos 3 commits con mensajes claros
- [lsto] Hice `git push` y verifiqué mi fork en GitHub
- [listo] Entregué el enlace de mi fork en Classroom
# Simulación de Controles - Juego de Parque de Diversiones

## Consigna

Un juego de un parque de diversiones debe realizar los siguientes controles antes de comenzar a funcionar:

- Sólo pueden participar quienes tengan una altura entre **1.60 m y 1.90 m**
- El peso total de los participantes no debe superar las **1.5 toneladas (1500 kg)**
- La capacidad máxima de participantes es de **20**

Se debe programar una simulación de estos controles. El programa debe solicitar, a medida que ingresan participantes:

- **Peso**
- **Altura**

## Reglas de validación

- Si la altura del participante **no cumple** con lo requerido, se debe mostrar el mensaje:
  

Altura del participante fuera de rango permitido


Y continuar con el siguiente participante.

- A medida que ingresan participantes, se debe controlar que el **peso acumulado** no supere el máximo permitido.  
Si lo supera, se debe mostrar:


Peso total excedido, el participante no puede subir


Ese participante será ignorado y se continúa con los siguientes.

- Si el peso acumulado alcanza **exactamente 1500 kg**, el juego comienza automáticamente.

- También se debe controlar que la **cantidad de participantes** no supere el máximo (20).  
Si se alcanza el máximo, se debe informar:


Cantidad máxima de participantes alcanzada


Y el juego podrá comenzar automáticamente si cumple con las demás condiciones.

- Si suben menos personas que la capacidad máxima, se utilizará el ingreso de **peso = 0** como condición de corte, indicando que no hay más participantes.

---

## Pruebas

### Prueba 1

**Participantes:**

1. Peso: 90 kg - Altura: 180 cm  
2. Peso: 110 kg - Altura: 170 cm  
3. Peso: 90 kg - Altura: 150 cm → *(Se ignora por altura no permitida)*  
4. Peso: 0 → *(Inicia el juego con 2 participantes)*  

---

### Prueba 2

**Participantes:**

1. Peso: 60 kg - Altura: 160 cm  

Luego suben 12 participantes de:

- Peso: 120 kg  
- Altura: 190 cm  

→ *(Inicia el juego automáticamente por alcanzar el peso máximo)*  

---

### Prueba 3

**Participantes:**

1. Peso: 100 kg - Altura: 175 cm  

Luego suben 11 participantes de:

- Peso: 120 kg  
- Altura: 190 cm  

13. Peso: 100 kg - Altura: 175 cm → *(Se ignora por exceder el peso máximo)*  
14. Peso: 0 → *(Inicia el juego con 12 participantes)*  

---

### Prueba 4

**Participantes:**

- Suben 20 participantes de:
- Peso: 70 kg  
- Altura: 160 cm  

→ *(Inicia el juego automáticamente por alcanzar la cantidad máxima permitida)*  

<font size=1>
Tecnológico de Costa Rica <br/>
Escuela de ingeniería en computación <br/>
Redes - IC7602 <br/>
2 semestre 2022 <br/>
Apuntador: Ingrid Fernández Arce<br/>
14/10/2022

  

## Enrutamiento por estado de enlace

### 1. Cálculo de rutas:
-   Cuando el router tiene un conjunto de paquetes genera un grafo de la red.
    
-   El grafo tiene aristas en ambos sentidos y pesos.
    
-   Localmente se ejecuta Dijkstra.
    
-   Las rutas se colocan en la memoria.
    
-   Se hace el routing de paquetes.
    

## Enrutamiento jerárquico

-   Las redes crecen y las tablas de enrutamiento también(cpu/memoria).
    
-   Se usan regiones.
    
-   Los routers de cada región, saben enrutar paquetes dentro de su región.
    
-   Se ocupan múltiples jerarquías.
    
-   Los routers de cada región no conocen la organización interna de otras regiones.
    
-   Default gateway
    

## Congestión

-   Presencia de muchos paquetes en una red.
    

![](https://lh6.googleusercontent.com/Q4jvGHzDJvSQwgbglro8B3ONHhpgdQ0tcaXbqiEgOZCofBv-9y9zEKOJM-MFGtUNnCazM8ZfWOw3vswHIM5E5-o9riGVacJhkmfv7uCVk8mdvhFBQiNe2D-vqX7cUujZ-3Ah4fQEmIS_CTbYaU5i8ZtjUeKDN4W9tKJ2AugYL_Rz43SM95fu1kJsvg)

-   Se dan retrasos, pérdida y se degrada el desempeño.
    
-   Routers lentos, no pueden con el flujo.
    
-   Colapso por congestión (red mal diseñada).
    

-   Deshacerse de una parte de la carga de paquetes.
    

![](https://lh3.googleusercontent.com/85NP1zo3AmqOT57ipxtYI1Eu2BC-cK7OD-3AK03QeXJFSCOyVkXrUFQ1R5h5z1GwX_NU0c_eNnS2NwoK1RNn745vExlJaI1Fun0sifCcQOAQmD2hCsfn4UEoGyWUkY8GByUggSuDGVvvnxpg0yRS3CKCXNGrPyAoHPSgLJtWZgJwwD8UQUuAK_AHiw)

-   Redireccionar tráfico.
    

![](https://lh3.googleusercontent.com/IoydOTJwlZJMsIvDA3StIaUwMF_3BLDYnTUcG07ME2AK_DW6gYszzGwqdPzkrGr9L4XQIBye4UdTwG91kw-O239CqD2AU_sf1NgAadf5VTyG_QYhBtIomLiphpHhcMYdNm-SAPR6n7pHm4RXe35oaP9ksqrsjj6MKqvR9Rxs6CQgPOfJ9HWttu95jg)

-   Agregar recursos, algunos lo permiten de forma dinámica.
    

![](https://lh3.googleusercontent.com/j6KJo4sZgLwo7MK0fj0gDPH6BWEDiWpAOXzu1dSI5T1-xmMck00fsLfiaEGq_OwGRMEIP4FZhxCIgNAxyQuCMZDDCrFNUwO3USyVssGEjKKDw_wMN9Xh5J7c9HRJlWHdCxFDU0vzxKOCN2rAFRrQjn2KdC_NfLRjNbTncCUAnYNlXGhydXCAS_FcHA)

-   No se puede evitar, depende del comportamiento de salida.
    
-   Control de congestión (global) vs control de flujo(emisor/receptor)
    

![](https://lh3.googleusercontent.com/59wbuATrutWQi0eqG_wlvQY6OTPUvx1bBGipnpyRNnLPHRCXJoJrm65rFAPCWDq2lRP8oIhj4kRQCB8ZpAAIyW5bbq96mu9yTjEc_vXcn2BWG9qJ3benyHHWvILrhSAqoPLf2KglGPjSfBSHyVJuc---It3S0_8Dqtfm3sdxSnT-D1BBFSdmv2p0vw)

-   Tarpit: Cuando se detecta un cliente que consume mucha red y se está en un protocolo de envío y espera lo que se hace es que se retrasan los paquetes de confirmación (delay) para que el cliente piense que está enviando a la máxima velocidad que permite la red.
    

![](https://lh6.googleusercontent.com/2Sz9OrsavSJQUY1HQ2BuXFHdeX44p2kREodGQ28-idHhv9F8g0Yy9SJprp21Hzx6dDA33x8iwQb-Pm4sYkAcci1T9ZCdbBphgsobPRM0c91tJi4553wglr0pcVgoq4r-xsTbjB5y6sGh0Ajqp_a_ODOdvXishDtiWxfsnt28l4kMUGYSoFlqhJMkPA)

-   Aprovisionamiento: Routers/enlaces que se usan mucho, se actualizan rápido.
    
-   Traffic-aware routing: Cambiar rutas dinámicamente para evitar partes congestionadas.
    

-   Cómo identificar la congestión y cómo notificar la congestión.
    
-   Evasión de congestión.
    
-   Paquetes reguladores.
    
-   Ponderar los enlaces en función del ancho de banda, retardo de propagación y retardo de encolamiento.
    
-   Notificación explícita: Envía paquete al receptor con una bandera y el receptor notifica al emisor.
    

-   Control de Admisión: No aceptar nuevas conexiones.
    
-   Desprendimiento de carga: Router no puede y lo ha intentado todo, inicia a descartar paquetes.
    
-   Ingenieria de trafico.
    
-   Random Early Detection: Cuando la cola de paquetes alcanza cierto porcentaje, descarta paquetes random, los protocolos TCP cuando nota que se pierden paquetes, asumen congestión y reducen la velocidad.

## QoS

-   Lo mejor que se puede hacer bajo las circunstancias actuales.
    
-   Aplicaciones multimedia(tasa de transferencia real mínima y latencia)
    
-   Overprovisioning: Crear una red con suficiente capacidad (En un mundo ideal)
    

-   El costo puede ser muy elevado.
    
-   Cambios de patrones de tráfico.
    

-   QoS permite que una red con menos capacidad que una overprovisioning puede cumplir con los requerimientos de aplicación con la misma eficiencia.
    
-   Requerimientos de aplicación:
    

-   Flujo: paquetes que viajan de un lado a otro. Algoritmo de programación de paquetes (reservar recursos).
    
-   Ancho de banda, retardo, jitter y pérdida.
    
-   Email, Audio, Video, Telefonia, Videoconferencia.

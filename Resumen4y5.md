## 3.5 VERIFICACIÓN DE LOS PROTOCOLOS

En el siguiente texto se estudiarán distintos protocolos y programas complicados que se implementan en el contexto de capa de enlace de datos pero también es aplicable a otras capas.

### 3.5.1 Modelos de máquinas de estado finito

Un concepto clave es el de la máquina de estados finitos, en esta técnica cada máquina de protocolo (emisor o receptor) siempre está en un estado específico en cualquier instante. Su estado consiste en todos los valores de sus variables, incluido el contador de programa. Puede agruparse un gran número de estados a fin de analizarlos.
El estado del sistema completo es la combinación de todos los estados de las dos máquinas de protocolos y del canal. El estado del canal está determinado por su contenido.
El concepto de una trama que está “en el canal” es, por supuesto, una abstracción. Es posible que una trama se haya recibido, pero no procesado, en el destino. Una trama permanece “en el canal” hasta que la máquina de protocolo ejecuta FromPhysicalLayer y la procesa. De cada estado hay cero o más transiciones posibles a otros estados. Las transiciones ocurren cuando sucede algún evento. Para una máquina de protocolo, podría ocurrir una transición al enviar una trama, al llegar una trama, al terminar un temporizador, al ocurrir una interrupción, etcé.
Un estado en particular se designa como estado inicial. Este estado corresponde a la descripción del sistema cuando comienza a funcionar, o en algún punto conveniente poco después.
Usando técnicas bien conocidas de la teoría de grafos es posible determinar los estados que son alcanzables y los que no. Esta técnica se denomina análisis de asequibilidad (Lin y cols., 1987). Este análisis puede ser útil para determinar si un protocolo es correcto o no.
El análisis de asequibilidad puede servir para detectar una variedad de errores en la especificación del protocolo. Se utilizan tres caracteres para etiquetar cada estado, SRC, donde S es 0 o 1 y corresponde a la trama que el emisor está tratando de enviar; R también es 0 o 1 y corresponde a la trama que el receptor espera, y C es 0, 1, A o vacío (−) y corresponde al estado del canal.

![](https://lh3.googleusercontent.com/PI0Dz8L_qWGqQXX50cFhmPWpE_FcE81JVGfuYn9aVYaChm9E9WANzJNkmSQKl2LVmNsHPzMXgCDZ3HpgyTshpsr5ixTy_yTYlEL_0Hk8wjOSJS0LhgxcY72aQLfdUBZy-gFDRlpDqD48LksaXbF_Yyahk6IrIgVas2oVQujAqrL_v11HskRZPYHTaQ)

Un bloqueo irreversible es una situación en la que el protocolo no puede seguir avanzando, sea cual sea la secuencia de eventos que ocurra. En términos del modelo gráfico, un bloqueo irreversible se caracteriza por la existencia de un subconjunto de estados que es alcanzable desde el estado inicial y que tiene dos propiedades:
1. No hay transición hacia fuera del subconjunto.

2. No hay transiciones en el subconjunto que causen un avance.
Una vez en el estado de bloqueo irreversible, el protocolo permanece ahí eternamente.

### 3.5.2 Modelos de red de Petri

Una red de Petri tiene cuatro elementos básicos: lugares, transiciones, arcos y tokens. Un lugar representa un estado en el que puede estar parte del sistema. El sistema actualmente está en el estado A, indicado por el token (punto grueso) en el lugar A. Se utiliza una barra horizontal o vertical para indicar una transición. Cada transición tiene cero o más arcos de entrada, que llegan de sus lugares de entrada, y cero o más arcos de salida, que van a sus lugares de salida.

![](https://lh5.googleusercontent.com/7p0nUaaLmOQYkUHa1KOa5tFVSxhHwnfQ3gZ_i4-KWUgas3sHRmoH6XLWE83tGP1RSKkJeA4gSHsA5Wp1bm69qB8ucx-hlktrmv-2dZKVJhXwh-d5eWVUKRzumKuSalOjodpesoGYRU4aSQiiMCZsWiRIptdZyAdScLdW3Bhnckez616y9mZsM4gVfg)

Se habilita una transición si hay cuando menos un token de entrada en cada uno de sus lugares de entrada. Cualquier transición habilitada puede dispararse a voluntad, quitando un token de cada lugar de entrada y depositando un token en cada lugar de salida. Si el número de arcos de entrada no es igual al número de arcos de salida, no se conservarán los tokens. Si se habilitan dos o más transiciones, cualquiera de ellas puede dispararse. La decisión de disparo de una transición es indeterminada, por lo que las redes de Petri son útiles para modelar protocolos.

![](https://lh4.googleusercontent.com/yjAFM7e-QFXS-t1iJ4g4AaruPTbmfEca2MPFEa4nxv5lNprwfMDP2Uln9LPmNiyn-TwW30Ku2N_1FgXcsdatd0sf8WovAUm7mByVLYdsAslPD98MyiWJTeZtgR3oIlfs71YasxMGEga1q6TUWEuaakenCOgh2Vj3p7X_UCmcP2qZ4IN413dXpz24wA)

Las redes de Petri pueden servir para detectar fallas de protocolo de una manera parecida a como se hace con máquinas de estados finitos y pueden representarse convenientemente en una forma algebraica semejante a una gramática.
![](https://lh6.googleusercontent.com/TNKEWslaPD-ONuuteLecgLaIlL_avstKqxjAaon0dPXE9j5ETDGL6GCB01bdqWPl_E4qBORLXb7uXKsDPw9Z-mqIBmiDanr308Yq_LODhIpIYRbWykV1gmwOmrE97p3cBZtRETzKt0tmGM_KVUZK-k73w4NB8_4YsFd5Lt2oF4rQnwN2SrTG4CxgJw)

## 4.6 BLUETOOTH

Distintas empresas formaron SIG y se creo un proyecto al que se le asigno el nombre de BLUETOOTH , en honor de Harald Blaatand. Aunque la idea original eran tan sólo prescindir de cables entre dispositivos, su alcance se expandió rápidamente al área de las LANs inalámbricas. Aunque esta expansión le dio más utilidad al estándar, también provocó el surgimiento de competencia con el 802.11.

### 4.6.1 Arquitectura de Bluetooth

La unidad básica de un sistema Bluetooth es una piconet, que consta de un nodo maestro y hasta siete nodos esclavos activos a una distancia de 10 metros. En una misma sala (grande) pueden encontrarse varias piconets y se pueden conectar mediante un nodo puente. Un conjunto de piconets interconectadas se denomina scatternet.
Además de los siete nodos esclavos activos de una piconet, puede haber hasta 255 nodos estacionados en la red. Éstos son dispositivos que el nodo maestro ha cambiado a un estado de bajo consumo de energía para reducir el desgaste innecesario de sus pilas.
La razón para el diseño maestro/esclavo es que los diseñadores pretendían facilitar la implementación de chips Bluetooth completos por debajo de 5 dólares. La consecuencia de esta decisión es que los esclavos son sumamente pasivos y realizan todo lo que los maestros les indican.

### 4.6.2 Aplicaciones de Bluetooth

![](https://lh3.googleusercontent.com/A4_GyEngWHH-Zeo12wx1ymdSuInV3XeCpKJEAxNdnRK8E0uf9o444pClCcZK68sE9tO8_Eb0kV_Rf3yAAk20u-z8FNlL0xTOndEUgRhQHEaWsYAPSmhK_bWHAvOH711Xm8ot21V8fvNs46LWgwzKP6rDQF3KHlyN9E2SKYS5j8qv7zumpvvEsYsS6w)

### 4.6.3 La pila de protocolos de Bluetooth

La estructura de capas no sigue el modelo OSI, el modelo TCP/IP, el modelo 802 o algún otro modelo conocido. Sin embargo, el IEEE se encuentra modificando actualmente Bluetooth para ajustarlo al modelo 802. La capa inferior es la capa de radio física, la cual es bastante similar a la capa física de los modelos OSI y 802. La capa de banda base tiene algunos puntos en común con la subcapa MAC, aunque también incluye elementos de la capa física.

![](https://lh6.googleusercontent.com/18ODUbf_8GV-GO9Pyf0gAIWQYCdTJoIloltx-w9ie0FfY76CCJf0RcsAmu37r1aMQNC6bPMbwGBcMgHQd5JziIKh9O5Z2-uXWDLCwWBi8PdcicNUwHTb8hI4aWbG0i3xfGjpWQsIIVqA7AG6O8blWEQ0UXyGSJ3_mFIf0QiJ9ZRwO3AC2ZmtDUh6Xg)

### 4.6.4 La capa de radio de Bluetooth

La capa de radio traslada los bits del maestro al esclavo, o viceversa. Es un sistema de baja potencia con un rango de 10 metros que opera en la banda ISM de 2.4 GHz. La banda se divide en 79 canales de 1 MHz cada uno. La modulación es por desplazamiento de frecuencia, con 1 bit por Hz, lo cual da una tasa de datos aproximada de 1 Mbps, pero gran parte de este espectro la consume la sobrecarga. Para asignar los canales de manera equitativa, el espectro de saltos de frecuencia se utiliza a 1600 saltos por segundo y un tiempo de permanencia de 625 μseg. Todos los nodos de una piconet saltan de manera simultánea, y el maestro establece la secuencia de salto

### 4.6.5 La capa de banda base de Bluetooth

La capa de banda base de Bluetooth es lo más parecido a una subcapa MAC. Esta capa convierte el flujo de bits puros en tramas y define algunos formatos clave. En la forma más sencilla, el maestro de cada piconet define una serie de ranuras de tiempo de 625 μseg y las transmisiones del maestro empiezan en las ranuras pares, y las de los esclavos, en las ranuras impares. Ésta es la tradicional multiplexión por división de tiempo, en la cual el maestro acapara la mitad de las ranuras y los esclavos comparten la otra mitad. Las tramas pueden tener 1, 3 o 5 ranuras de longitud.

Cada trama se transmite por un canal lógico, llamado enlace, entre el maestro y un esclavo. Hay dos tipos de enlaces. El primero es el ACL (Asíncrono no Orientado a la Conexión), que se utiliza para datos conmutados en paquetes disponibles a intervalos irregulares.
El otro tipo de enlace es el SCO (Síncrono Orientado a la Conexión), para datos en tiempo real, como ocurre en las conexiones telefónicas. A este tipo de canal se le asigna una ranura fija en cada dirección. Por la importancia del tiempo en los enlaces SCO, las tramas que se envían a través de ellos nunca se retransmiten. En vez de ello, se puede utilizar la corrección de errores hacia delante para conferir una confiabilidad alta.

### 4.6.6 La capa L2CAP de Bluetooth

La capa L2CAP tiene tres funciones principales:

-   Acepta paquetes de hasta 64 KB provenientes de las capas superiores y los divide en tramas para transmitirlos.
-   Maneja la multiplexión y desmultiplexión de múltiples fuentes de paquetes.
-   La capa L2CAP se encarga de la calidad de los requerimientos de servicio, tanto al establecer los enlaces como durante la operación normal.
    

### 4.6.7 Estructura de la trama de Bluetooth

Existen diversos formatos de trama, el más importante empieza con un código de acceso que identifica al maestro, cuyo propósito es que los esclavos que se encuentren en el rango de alcance de dos maestros sepan cuál tráfico es para ellos.

![](https://lh6.googleusercontent.com/HBgiDwwKv8lMVObK2-_IcIL9w0cVOsIY2ENW5gw-hbHu5zO4xdSXN3XhEDzF7v9heV0H6kErILiykOw9mxt0dUDQKlglMb0J7LfCJMgvyYJWr97rvRe2GBB5z-82nAM-I6JV0hngWb2Ke-F_d5BIDd0WeHy6GvWDHAAaoB5CQKKyWiY9hAlux0Fdhw)

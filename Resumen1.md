# Redes de ejemplo

## 1. Internet
Internet es un inmenso conjunto de redes diferentes que usan ciertos protocolos comunes y proporcionan ciertos servicios comunes.


#### 1.1 ARPANET

Surgió por la necesidad de una red segura par las comunicaciones militares. ARPA fue la agencia que se encargo de su creación. ARPANET era una subred que constaría de minicomputadoras llamadas IMP's (Procesadores de mensajes de interfaz) , conectadas por líneas de transmisión de 56 kbps. Para alta confiabilidad, cada IMP estaría conectado al menos a otros dos IMP's.

La subred iba a ser de datagramas de manera que si se destruían algunos IMP's, los mensajes se podrían volver a enrutar de manera automática a otras rutas alternativas. Cada nodo de la red iba a contar de un IMP y un host. 

Un host tendría la capacidad de enviar mensajes de más de 8063bits a su IMP. La subred seria la primera red electrónica de conmutación de paquetes de almacenamiento y reenvió.  Los IMP's no tenían discos, ya que las partes móviles se consideraban no confiables. 

Surgió un problema al notar que los hosts también necesitaban software para resolverlo se convocó a una reunión  de investigadores de red, en diciembre de 1969 de alguna manera surgió una red experimental con cuatro nodos: en UCLA, UCSB, SRI y la Universidad de Utah. La cuales fueron elegidos por sus contratos con ARPA y todas tenían computadoras host diferentes incompatibles en su totalidad.

ARPA proporciono fondos para investigación en distintas áreas, en uno de los experimentos realizados se demostró que los protocolos de ARPANET no eran adecuados para ejecutarse a través de varias redes. Esto provoco mas investigaciones sobre los protocolos, culminando con la invención del modelo y los protocolos de TCP/IP.

En un punto el conforme el escalamiento crecía, conseguir hosts se volvió muy costoso, por lo que se creó el DNS (Sistema de Nombres de Dominio) el cual es un sistema de base de datos distribuido generalizado para almacenar una variedad de información relacionada con la elección de un nombre.

#### 1.2 NSFNET
La NSF se encargo de desarrollar el sucesor de ARPANET que pudiera estar abierto a todos los grupos de investigación de las universidades sin importar las conexiones que tuvieran o no con el DoD. La NSF decidió construir una red dorsal que conectara sus seis centros de supercomputadoras, a cada una de las supercomputadoras se les dio un hermano menor el cual era una microcomputadora LSI-11 llamada fuzzball. Las fuzzball utilizan TCP/IP desde
el inicio, creando así la primera WAN TCP/IP. NSFNET fue un éxito instantáneo y pronto se saturó.

#### 1.3 Uso del internet
Entre 1970 a 1990 Internet y sus predecesores tenían cuatro aplicaciones principales:

 - Correo electrónico
 - Noticias
 - Inicio remoto de sesión
 -  Transferencia de archivos

Una nueva aplicación, WWW (World Wide Web) cambió todo eso y trajo millones de usuarios nuevos no académicos a la red. Fue inventada por Tim Berners-Lee el cual no cambio ninguna de las características subyacentes pero la hizo mas fácil de usar. WWW hizo posible que un sitio estableciera páginas de información que contienen texto, imágenes, sonido e incluso vídeo  y vínculos integrados a otras páginas.

## 2. Redes orientadas a la conexión

#### 2.1 X.25
Fue la primera red de datos pública. Para utilizarla una computadora establecía primero una conexión con la computadora remota haciendo una llamada telefónica. Dicha conexión daba un número de conexión que se utilizaba en los paquetes de transferencia de datos.  Los paquetes de datos eran consistían en un encabezado de 3 bytes y hasta 128 bytes de datos.

#### 2.1 Frame Relay
Remplazaron a X.25 y son una red orientada a la conexión sin controles de error ni de flujo, los paquetes debían ser entregados en orden. Su aplicación mas importante es la interconexión de LAN´s en múltiples oficinas de una empresa. 
#### 2.1 ATM
Se podría decir que ATM es el tipo de red orientada a la conexión mas importante. Tuvo mucho más éxito que OSI y tiene un uso profundo dentro del sistema telefónico, con frecuencia en el transporte de los paquetes IP.  Debido a que las redes ATM están orientadas a la conexión, el envío de datos requiere que primero se envié un paquete para establecer la conexión. 

A las conexiones se les conoce como circuitos virtuales, en analogía con los circuitos físicos utilizados en el sistema telefónico. La mayoría de las redes ATM soportan también conexiones permanentes entre dos hosts (circuitos virtuales permanentes).

La idea básica en que se fundamenta ATM es transmitir toda la información en paquetes pequeños los cuales tienen un tamaño fijo y son llamados celdas. Las celdas tienen un tamaño de 53 bytes, de los cuales cinco son del encabezado y 48 de carga útil.
## 3. Ethernet 
Es la LAN mas popular, recibió su nombre por lo de luminiferous ether, a través del cual se pensó alguna vez que se propagaba la radiación electromagnética.

Ethernet contaba con una mejora significativa con respecto al sistema ALOHANET; ethernet antes de iniciar a transmitir, una computadora tenía que escuchar el cable para ver si se encontraba alguien transmitiendo. En caso de que lo hubiera, la computadora debía mantenerse en espera de que la transmisión actual terminara. Al hacerlo de esta manera se evitaba interferir con las transmisiones existentes, dando una mayor eficiencia. ALOHANET no trabajaba de este modo ya que era imposible para una terminal detectar la transmisión de una otra terminal en una isla distante. 

Ethernet no fue el único estándar para LAN estuvo en una guerra con Token Bus y Token Ring pero termino ganando Ethernet ya que fue el primero y sus contrincantes no pudieron alcanzarlo.

## 4. Lan's inalámbricas: 802.11 
La IEEE fue el encargado de estandarizar las LAN's inalámbricas, el estándar resultante se llamó 802.11 conocido comúnmente como WIFI .

El estándar propuesto tenia que trabajar en dos modos:

 1. En presencia de una estación base: Toda la comunicación se hacía a través de la estación base(Punto de acceso).
 2. En ausencia de una estación base: Las computadoras podrían enviarse mensajes entre sí directamente (red ad hoc).

Tuvieron que enfrentar diversos retos pero después de un gran trabajo en 1997 se presento un estándar del cual hubieron distintas variantes del estándar original ya que la gente no estaba contenta con la velocidad.



**1. Explique el concepto de Time Division Multiplexing y Frequency Division Multiplexing. (25 pts)**

  

**Time Division Multiplexing:** Los usuarios esperan su turno(en round robin) para usar el canal y en su turno obtiene toda la banda por un breve periodo de tiempo. Ejemplo de uso: redes telefónicas celulares.

**Frequency Division Multiplexing:** Divide el espectro en canales lógicos(bandas de frecuencia.) y cada usuario cuenta con su canal exclusivo. Ejemplo de uso: AM o FM.

  

**2. Explique el concepto de colisión durante el proceso de asignación del canal, comente las diferencias entre medios guiados y medios no guiados. (25 pts)**

  

Colisión: Una colisión es cuando dos tramas se intentan transmitir usando un mismo canal en el mismo periodo de tiempo dichas tramas se pierden ya que la señal resultante se altera. Ocurre cuando un dispositivo1 sensa el medio y el medio indica que el canal está libre por lo que dispositivo 1 envía una trama pero otro dispositivo2 ya había enviado una trama por lo que ambas tramas se encuentran en el canal.

  

Diferencias entre medios guiados y medios no guiados:
Los medios guiados(cable de cobre o fibra óptica) son más confiables ya que tiene mayor tolerancia a las interferencias mientras que los medios no guiados(radio o láser ) tienen gran porcentaje de pérdidas de datos y colisiones.
  

**3. ¿Como funciona el algoritmo de asignación del canal Aloha y Aloha Ranurado? Explique (20 pts)**

  La asignación del canal aloha consiste en permitir a los usuarios transmitir cuando tengan algo que enviar. Para notificar sobre las tramas dañadas o destruidas se tiene una propiedad de retroalimentación por difusión, por lo que el que envía la trama siempre puede saber si su trama fue destruida o si no fue escuchado. Si una trama es destruida simplemente el emisor espera un tiempo aleatorio(se duerme) y vuelve a enviar esto para evitar que ocurran colisiones una y otra vez al estar transmitiendo al mismo tiempo los mismo dispositivos.

El Aloha ranurado se divide el tiempo en intervalos (se necesita que los usuarios definan las ranuras), los usuarios no puede transmitir cuando tengan algo que enviar si no deben esperar a que de inicio una ranura.

**4. ¿Cuáles son las diferencias entre Hub y Switch? ¿Porqué razón el Switch es mejor?**

**Hub**

1. Internamente tienen un bus lo que puede provocar colisiones.   
2. Se conectan usando RJ45 y cables UTP.
3. Es half duplex

**Switch**
1. Todos los puertos están separados(aislados).
2. Genera circuitos virtuales.
3. Permita hacer segregación de tráfico.

Es switch es mejor ya que permite crear circuitos virtuales lo que les asegura que los paquetes enviados lleguen solamente a su destino  y permite definir un puerto como troncal para usarlo para conectar con otros. Además, disminuye el dominio de colisiones al conocer las IPs de los dispositivos conectados a sus distintos puertos. 

**5. ¿Es posible transportar tramas Ethernet embebidas en imágenes PNG? Justifique su respuesta. (30 pts)**

Sí, ya que se puede agregar la trama en la parte en la que las imagenes llevan los pixeles, el receptor ignora las parte de la información de la imagen(huella del formato,header, RGB,..) y solo lee la parte donde deberia estar la información de los pixeles con el formato previamente definido de una trama.   
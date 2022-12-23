Memoria - Juan Vicente Bautista Parra

~ Alias
Para crear los alias locales se utiliza el siguiente comando:
    - git config alias.<alias> <comando>
Para crear los globales es igual pero con un -- global:
    -git config --global alias.<alias> <comando>

Los alias locales que se han introducido han sido push y pull, y los globales han sido branch, commit y status.
Los alias locales y globales están en las fotos de la carpeta imagenes.

~ Git bisect
Se ha añadido un error al código de forma intencionada y usando git bisect se ha encontrado el commit del error.
Para ello se han usado los comandos:
    - git bisect start
    - git bisect bad
    - git bisect good <codigo commit>
Esto se puede ver en la imagen "Bisect.png" en la carpeta imagenes.

~ Hooks
El hook que se ha utilizado es el de commit-msg. Como este hook ya estaba instalado solo he tenido que descomentar la función
en el archivo commit-msg.sample dentro de ".git/hooks" y después renombrar el archivo para que solo se llame commit-msg.
Hay un ejemplo en "Hooks.png" en la carpeta de imagenes.
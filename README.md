#ASGARDVIII

Voici un code qui marche avec BMP280, SD Module Adafruit et Arduino Micro

Attention: Il y a un emplacement inutilisé entre le module SD et la BMP280, on peut y faire rentrer un BMP180, qui est inutile à l'expérience.

Il faut bien formatter la carte SD en FAT16 ou FAT32 (Chercher un logiciel spécifque sur google si vous avez besoin de le changer pour une raison omega)

Format: Le programme crée un fichier (Asgard.csv), les autres fichiers présents sur la carte sont inutiles, faute d'essais antérieurs.
Le format dans le fichier est le suivant: Temps(en Millisecondes); Température du BMP; Pression du BMP; Altitude du BMP; Visible capté par le TSL; IR capté par le TSL; Full capté par le TSL; IR-Full capté par le TSL; LUX capté par le TSL

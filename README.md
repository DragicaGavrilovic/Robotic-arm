# Robotska ruka – imitacija

##  Autori
                                                    Dragica Gavrilović
                                                    Konstantin Petrović
                                                    Maksim Zečević
## Opis / Description

Ruka je urađena pomoću Arduino platforme i sastoji se od tri servo motora koja čine tri ose rotacije. Ruka obavlja komande koje dobija preko serijskog porta sa računara, a mogućnosti su pomeranje levo, desno, gore, dole, opružanje i savijanje. Promene položaja se događaju za unapred definisani ugao, koji je mali, kako bi se omogućio dolazak do većeg broja tačaka u prostoru.

The hand was made using the Arduino platform and consists of three servo motors that form three axes of rotation. The arm executes the commands it receives through the serial port from the computer, and the possibilities are to move left, right, up, down, extend and bend. Position changes occur for a pre-defined angle, which is small, to allow reaching a larger number of points in space.

## Hardver

Ruka se sastoji od UNO ploče, 3 servo motora i tela. Telo je odštampano pomoću 3D štampača, a model je preuzet sa interneta i modifikovan radi optimizacije. Sastoji se iz četiri dela – postolja, na kom je prvi motor, dela na kom se nalazi drugi motor i koji je zakačen za postolje, dela na kom se nalazi treći motor i dela koji spaja drugi i treći motor. 

## Softver

Komunikacija između ruke i korisnika se obavlja preko serijskog porta, slanjem određenog karaktera koji predstavlja željenu operaciju. Čim se otvori serijski monitor, ispisaće se objašnjenje značenja karaktera u zavisnosti od operacije. 
Definisani su minimalni i maksimalni uglovi za svaki motor pojedinačno, kao i promena za koju se pomeraju motori. 
U loop metodi se nakon svakog unošenja karaktera proverava koja je instrukcija u pitanju i izvršava se ako je ugao u dozvoljenim granicama.

## Zaključak

Smatramo da je projakat urađen korektno, ali sa nekoliko nedostataka i prostora za unapređenje. Pre svega, 3D model nije dovoljno optimizovan, što je impliciralo veoma dugo štampanje, od preko 10 sati. Zatim, ruka nema šaku, čime je njena upotreba izuzetno ograničena. Prvo unapređenje bi bilo upravo dodavanje šake, kako bi dobila potpunu i korisnu funkciju. 


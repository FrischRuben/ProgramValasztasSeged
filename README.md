# ProgramValasztasSeged
Switch statement gyakorlása, egybefont szerkezet, jópofa program c++-ban.
----------------------------------------------------------------------------------------------------------------------------
Sajátos szempontok alapján kiválasztja a feltett kérdések válaszai alapján a megfelelőnek ítélt programozási nyelvet.
A system("pause") használata tudom, hogy nem jó, mivel a hordozhatóságot rontja.
A rendszerhívások használata csak a legszükségesebb esetekben célszerű, amikor elkerülhetetlen a használatuk. 
Azonban itt a std::cin.get() nem működik, így kénytelen voltam rendszerhívást alkalmazni.
Ötletek: 3. kezdő switch case átírása random-ra, hogy ne Python-t adjon eredményül. 
            Tipp: srand használata time(NULL) seedel, csak egyszer seedeljen!

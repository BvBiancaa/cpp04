# 42 cpp04

<h3> Italiano 🇮🇹</h3>
Il quinto modulo delle piscine in c++.

<h4>Esercizio 00: Polimorfismo</h4>
In questo esercizio, si inizia implementando una classe di base chiamata Animal, che ha un attributo protetto di tipo stringa chiamato "type".
Successivamente, si implementano due classi derivate: Dog e Cat, che ereditano da Animal.
Ogni animale deve essere in grado di utilizzare la funzione membro "makeSound()", che stamperà il suo verso.

<h4>Esercizio 01: Non voglio incendiare il mondo</h4>
In questo esercizio, si implementa una classe chiamata Brain, che contiene un array di 100 stringhe chiamato "ideas". Durante la costruzione degli oggetti Dog e Cat, verrà creato un oggetto Brain usando "new Brain()", e durante la distruzione degli oggetti Dog e Cat, verrà eliminato l'oggetto Brain corrispondente.

<h4>Esercizio 02: Classe astratta</h4>
In questo esercizio, si corregge la classe Animal in modo che non possa essere istanziata direttamente, rendendola una classe astratta.

<h4>Esercizio 03: Interfaccia e riepilogo</h4>
L'ultimo esercizio chiede di implementare una classe astratta chiamata AMateria.
Vengono poi create due classi concrete: Ice e Cure, che ereditano da AMateria.
La classe Character implementa un'interfaccia chiamata ICharacter, che definisce le funzioni membro che un personaggio deve avere.
Character ha un inventario di 4 slot per ice e cure e può equipaggiare, buttare e utilizzare le Materias.
La classe MateriaSource implementa un'interfaccia chiamata IMateriaSource, che permette di apprendere e creare ice e cure. 

Competenze acquisite:

- Comprensione del concetto di polimorfismo in C++
- Implementazione di classi astratte e interfacce

-------------------

<h3> English 🇬🇧</h3>
The fifth module of the C++ piscine.

Exercise 00: Polymorphism
In this exercise, you start by implementing a base class called Animal, which has a protected attribute of type string called "type".
Then, you implement two derived classes: Dog and Cat, which inherit from Animal.
Each animal should be able to use the member function "makeSound()", which will print its sound.

Exercise 01: I Don't Want to Set the World on Fire
In this exercise, you implement a class called Brain, which contains an array of 100 strings called "ideas".
During the construction of Dog and Cat objects, a Brain object is created using "new Brain()", and during the destruction of Dog and Cat objects, the corresponding Brain object is deleted.

Exercise 02: Abstract Class
In this exercise, you modify the Animal class to prevent it from being instantiated directly, making it an abstract class.

Exercise 03: Interface & Recap
The last exercise asks you to implement an abstract class called AMateria.
Then, two concrete classes, Ice and Cure, are created, which inherit from AMateria.
The Character class implements an interface called ICharacter, defining the required member functions for a character. Character has an inventory of 4 slots for Ice and Cure, and can equip, unequip, and use the Materias.
The MateriaSource class implements an interface called IMateriaSource, allowing the learning and creation of Ice and Cure.

Skills acquired:

- Understanding of polymorphism concept in C++
- Implementation of abstract classes and interfaces

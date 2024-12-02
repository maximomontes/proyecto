#include <iostream>
using namespace std;

// Definir una estructura para representar un libro
struct Libro {
    string titulo;
    string autor;
};

// Función para imprimir los libros de una categoría
void mostrarLibros(Libro libros[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        cout << (i + 1) << ". " << libros[i].titulo << " - " << libros[i].autor << endl;
    }
    cout << endl;
}

int main() {
    // Crear arrays de libros para cada categoría (10 libros por categoría)
    Libro historia[10] = {
        {"La historia de la humanidad", "Juan Pérez"},
        {"El origen de las especies", "Charles Darwin"},
        {"La segunda guerra mundial", "Winston Churchill"},
        {"Historia de Roma", "Tito Livio"},
        {"La caída del imperio romano", "Edward Gibbon"},
        {"El fin de la Edad Media", "José María Álvarez"},
        {"El descubrimiento de América", "Cristóbal Colón"},
        {"Historia de la Revolución Francesa", "Alexis de Tocqueville"},
        {"Los orígenes de la civilización", "Marvin Harris"},
        {"Historia del Renacimiento", "Jacob Burckhardt"}
    };

    Libro ficcion[10] = {
        {"Cien años de soledad", "Gabriel García Márquez"},
        {"Don Quijote de la Mancha", "Miguel de Cervantes"},
        {"1984", "George Orwell"},
        {"Crimen y Castigo", "Fiódor Dostoyevski"},
        {"Orgullo y prejuicio", "Jane Austen"},
        {"Matar a un ruiseñor", "Harper Lee"},
        {"El gran Gatsby", "F. Scott Fitzgerald"},
        {"Ulises", "James Joyce"},
        {"Moby Dick", "Herman Melville"},
        {"La sombra del viento", "Carlos Ruiz Zafón"}
    };

    Libro noFiccion[10] = {
        {"Sapiens: De animales a dioses", "Yuval Noah Harari"},
        {"El mundo y sus demonios", "Carl Sagan"},
        {"La historia de la filosofía", "Will Durant"},
        {"El poder del ahora", "Eckhart Tolle"},
        {"El arte de la guerra", "Sun Tzu"},
        {"En defensa de la vida", "Albert Schweitzer"},
        {"La mente humana", "Steven Pinker"},
        {"Breve historia de casi todo", "Bill Bryson"},
        {"El gene", "Siddhartha Mukherjee"},
        {"El hombre en busca de sentido", "Viktor Frankl"}
    };

    Libro poesia[10] = {
        {"Cien sonetos de amor", "Pablo Neruda"},
        {"Leaves of Grass", "Walt Whitman"},
        {"El canto de la tierra", "Emily Dickinson"},
        {"La divina comedia", "Dante Alighieri"},
        {"Antología poética", "Federico García Lorca"},
        {"Rimas", "Bécquer"},
        {"Poemas completos", "Gabriela Mistral"},
        {"Cantos de vida y esperanza", "Rubén Darío"},
        {"La flor", "Octavio Paz"},
        {"Odas elementales", "Pablo Neruda"}
    };

    Libro teatro[10] = {
        {"Hamlet", "William Shakespeare"},
        {"Macbeth", "William Shakespeare"},
        {"La Casa de Bernarda Alba", "Federico García Lorca"},
        {"Don Juan Tenorio", "Tirso de Molina"},
        {"El médico de su honra", "Tirso de Molina"},
        {"El burlador de Sevilla", "Tirso de Molina"},
        {"Esperando a Godot", "Samuel Beckett"},
        {"Un tranvía llamado deseo", "Tennessee Williams"},
        {"Antígona", "Sófocles"},
        {"El rey Lear", "William Shakespeare"}
    };

    Libro cienciaFiccion[10] = {
        {"1984", "George Orwell"},
        {"Fahrenheit 451", "Ray Bradbury"},
        {"Un mundo feliz", "Aldous Huxley"},
        {"Neuromante", "William Gibson"},
        {"Dune", "Frank Herbert"},
        {"Crónicas Marcianas", "Ray Bradbury"},
        {"La guerra de los mundos", "H.G. Wells"},
        {"Fundación", "Isaac Asimov"},
        {"El fin de la eternidad", "Isaac Asimov"},
        {"El hombre del castillo alto", "Philip K. Dick"}
    };

    Libro misterioSuspenso[10] = {
        {"Sherlock Holmes: Estudio en escarlata", "Arthur Conan Doyle"},
        {"Drácula", "Bram Stoker"},
        {"Los crímenes de la calle Morgue", "Edgar Allan Poe"},
        {"El secreto de la esfinge", "Agatha Christie"},
        {"El código Da Vinci", "Dan Brown"},
        {"Asesinato en el Orient Express", "Agatha Christie"},
        {"La chica del tren", "Paula Hawkins"},
        {"El silencio de los corderos", "Thomas Harris"},
        {"La verdad sobre el caso Harry Quebert", "Joël Dicker"},
        {"El psicoanalista", "John Katzenbach"}
    };

    Libro autoAyuda[10] = {
        {"El poder del ahora", "Eckhart Tolle"},
        {"Los 7 hábitos de la gente altamente efectiva", "Stephen Covey"},
        {"Piense y hágase rico", "Napoleon Hill"},
        {"La magia del orden", "Marie Kondo"},
        {"Despierta tu héroe interior", "Victor Hugo Manzanilla"},
        {"Quién se ha llevado mi queso", "Spencer Johnson"},
        {"El monje que vendió su Ferrari", "Robin Sharma"},
        {"La mente es que decides", "John Kehoe"},
        {"El secreto", "Rhonda Byrne"},
        {"Tus zonas erróneas", "Wayne Dyer"}
    };

    Libro literaturaInfantil[10] = {
        {"El principito", "Antoine de Saint-Exupéry"},
        {"Alicia en el país de las maravillas", "Lewis Carroll"},
        {"Harry Potter y la piedra filosofal", "J.K. Rowling"},
        {"Cuentos de la abuela Amelia", "Anónimo"},
        {"Matilda", "Roald Dahl"},
        {"El gran gigante bonachón", "Roald Dahl"},
        {"Charlie y la fábrica de chocolate", "Roald Dahl"},
        {"Peter Pan", "J.M. Barrie"},
        {"La telaraña de Charlotte", "E.B. White"},
        {"La isla del tesoro", "Robert Louis Stevenson"}
    };

    Libro filosofiaEspiritualidad[10] = {
        {"El arte de la guerra", "Sun Tzu"},
        {"Meditaciones", "Marco Aurelio"},
        {"Así habló Zaratustra", "Friedrich Nietzsche"},
        {"El Tao Te Ching", "Lao Tse"},
        {"La doctrina secreta", "Helena Blavatsky"},
        {"Los cuadernos de Don Juan", "Carlos Castaneda"},
        {"La Bhagavad Gita", "Anónimo"},
        {"El Bhagavad Gita", "Eckhart Tolle"},
        {"La conciencia del ser", "Osho"},
        {"El poder de la mente subconsciente", "Joseph Murphy"}
    };

    int opcion, libroElegido;
    
    // Menú de categorías
    do {
        cout << "Elige una categoría para ver los libros:" << endl;
        cout << "1. Historia" << endl;
        cout << "2. Ficción" << endl;
        cout << "3. No Ficción" << endl;
        cout << "4. Poesía" << endl;
        cout << "5. Teatro" << endl;
        cout << "6. Ciencia Ficción" << endl;
        cout << "7. Misterio y Suspenso" << endl;
        cout << "8. Autoayuda y Desarrollo Personal" << endl;
        cout << "9. Literatura Infantil" << endl;
        cout << "10. Filosofía y Espiritualidad" << endl;
        cout << "0. Salir" << endl;
        cout << "Elige una opción (1-10): ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 10) {
            // Mostrar los libros según la opción seleccionada
            cout << "\nLibros en la categoría:" << endl;
            switch(opcion) {
                case 1:
                    mostrarLibros(historia, 10);
                    break;
                case 2:
                    mostrarLibros(ficcion, 10);
                    break;
                case 3:
                    mostrarLibros(noFiccion, 10);
                    break;
                case 4:
                    mostrarLibros(poesia, 10);
                    break;
                case 5:
                    mostrarLibros(teatro, 10);
                    break;
                case 6:
                    mostrarLibros(cienciaFiccion, 10);
                    break;
                case 7:
                    mostrarLibros(misterioSuspenso, 10);
                    break;
                case 8:
                    mostrarLibros(autoAyuda, 10);
                    break;
                case 9:
                    mostrarLibros(literaturaInfantil, 10);
                    break;
                case 10:
                    mostrarLibros(filosofiaEspiritualidad, 10);
                    break;
            }

            cout << "Selecciona el número del libro que quieres leer (1-10): ";
            cin >> libroElegido;

            if (libroElegido >= 1 && libroElegido <= 10) {
                cout << "\nHas elegido el libro: " << endl;
                switch(opcion) {
                    case 1:
                        cout << historia[libroElegido - 1].titulo << " - " << historia[libroElegido - 1].autor << endl;
                        break;
                    case 2:
                        cout << ficcion[libroElegido - 1].titulo << " - " << ficcion[libroElegido - 1].autor << endl;
                        break;
                    case 3:
                        cout << noFiccion[libroElegido - 1].titulo << " - " << noFiccion[libroElegido - 1].autor << endl;
                        break;
                    case 4:
                        cout << poesia[libroElegido - 1].titulo << " - " << poesia[libroElegido - 1].autor << endl;
                        break;
                    case 5:
                        cout << teatro[libroElegido - 1].titulo << " - " << teatro[libroElegido - 1].autor << endl;
                        break;
                    case 6:
                        cout << cienciaFiccion[libroElegido - 1].titulo << " - " << cienciaFiccion[libroElegido - 1].autor << endl;
                        break;
                    case 7:
                        cout << misterioSuspenso[libroElegido - 1].titulo << " - " << misterioSuspenso[libroElegido - 1].autor << endl;
                        break;
                    case 8:
                        cout << autoAyuda[libroElegido - 1].titulo << " - " << autoAyuda[libroElegido - 1].autor << endl;
                        break;
                    case 9:
                        cout << literaturaInfantil[libroElegido - 1].titulo << " - " << literaturaInfantil[libroElegido - 1].autor << endl;
                        break;
                    case 10:
                        cout << filosofiaEspiritualidad[libroElegido - 1].titulo << " - " << filosofiaEspiritualidad[libroElegido - 1].autor << endl;
                        break;
                }
            } else {
                cout << "Número de libro inválido." << endl;
            }
        } else if (opcion != 0) {
            cout << "Opción inválida, por favor elija una opción correcta." << endl;
        }
        
    } while (opcion != 0); // El bucle continuará hasta que el usuario ingrese 0

    cout << "¡Hasta luego!" << endl;


}

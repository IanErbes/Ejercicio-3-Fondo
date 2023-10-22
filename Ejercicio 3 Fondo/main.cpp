#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

// Variables
Texture texture_fondo;
Sprite sprite_fondo;

// Punto de entrada a la aplicación ///
int main() {
    // Cargamos la textura del archivo
    texture_fondo.loadFromFile("fondo.jpg");

    // Cargamos el material del sprite
    sprite_fondo.setTexture(texture_fondo);

    // Creamos la ventana
    sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Ejercicio 3 fondo");

    // Loop principal
    while (App.isOpen()) {
        // Limpiamos la ventana
        App.clear();

        // Dibujamos la escena

        // Ajustar la escala del sprite al tamaño de la ventana
        sprite_fondo.setScale(
            static_cast<float>(App.getSize().x) / static_cast<float>(texture_fondo.getSize().x),
            static_cast<float>(App.getSize().y) / static_cast<float>(texture_fondo.getSize().y)
        );

        App.draw(sprite_fondo);

        // Mostramos la ventana
        App.display();
    }

    return 0;
}

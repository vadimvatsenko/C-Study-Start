#include <SFML/Graphics.hpp>//заголовочный файл, для работы графики
#include<iostream>

using namespace std;
using namespace sf;

int main()
{
    RenderWindow window(sf::VideoMode(640, 480), "Super Mario!");
    //RenderWindow window(VideoMode(640, 480), "Super Mario!", Style::Fullscreen);// на весь экран
    Image marioImage; // создаем объект Image(изображение)
    marioImage.loadFromFile("./images/mario.png");// загружаем в него файл

    Texture marioTexture;// создаем объект текстуры
    marioTexture.loadFromImage(marioImage);// передаем в него обьект image

    Sprite marioSprite; // создаем объект спрайта
    marioSprite.setTexture(marioTexture);// передаем в него обьект текстуры
    marioSprite.setTextureRect(IntRect(150, 0, 150, 150));// 0 - это начальная точка кординат, 150 - это вторая точка кординат, 150 - квадрат, 150 - квадрат
    //marioSprite.setTextureRect(IntRect(150, 150, -150, 150));// инверсия изображения
    marioSprite.setPosition(50, 25);// начальные координаты нашего спрайта

    float marioTeleportTimer = 0;// переменная для времени телепортации Марио
    Clock clock;// создаем переменную времени, привязка ко времени(а не процессора)


    /*Координаты
    * 0,0,150,150 - 1й
    * 150,0,-150,150 - 1й инверсия по X
    * 150,0,150,150 - 2й
    * 300,0,150,150 - 3й
    * 0,150,150,150 - 8й
    * 150,150,150,150 - 9й
    */
   


    

    while (window.isOpen())
    {
        float time = clock.getElapsedTime().asMicroseconds();// дает прошедшее время в милисекундах
        clock.restart(); // презагружает время
        time = time / 800; // скорость игры // чем больше тем плавнее

        cout << time << endl;// посмот
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        marioTeleportTimer += time;// прибавляем к нашей переменной time;

        if (marioTeleportTimer > 3000) {
            marioSprite.setPosition(0, 120);
            marioTeleportTimer = 0;
        }

        if (Keyboard::isKeyPressed(Keyboard::Left) ) {
            marioSprite.move(-0.1*time, 0);
            marioSprite.setTextureRect(IntRect(150, 0, -150, 150));
        }
        if (Keyboard::isKeyPressed(Keyboard::Right)) {
            marioSprite.move(0.1*time, 0);
            marioSprite.setTextureRect(IntRect(0, 0, 150, 150));

        }
        if (Keyboard::isKeyPressed(Keyboard::Up)) {
            marioSprite.move(0,-0.1*time);
            marioSprite.setTextureRect(IntRect(450, 900, 150, 150));
        }
        if (Keyboard::isKeyPressed(Keyboard::Down)) {
            marioSprite.move(0, 0.1*time);
            marioSprite.setTextureRect(IntRect(300, 750, 150, 150));
        }

        window.clear(Color::White);
        window.draw(marioSprite);
        window.display();
    }

    return 0;
}
#include <SFML/Graphics.hpp>//������������ ����, ��� ������ �������
#include<iostream>

using namespace std;
using namespace sf;

int main()
{
    RenderWindow window(sf::VideoMode(640, 480), "Super Mario!");
    //RenderWindow window(VideoMode(640, 480), "Super Mario!", Style::Fullscreen);// �� ���� �����
    Image marioImage; // ������� ������ Image(�����������)
    marioImage.loadFromFile("./images/mario.png");// ��������� � ���� ����

    Texture marioTexture;// ������� ������ ��������
    marioTexture.loadFromImage(marioImage);// �������� � ���� ������ image

    Sprite marioSprite; // ������� ������ �������
    marioSprite.setTexture(marioTexture);// �������� � ���� ������ ��������
    marioSprite.setTextureRect(IntRect(150, 0, 150, 150));// 0 - ��� ��������� ����� ��������, 150 - ��� ������ ����� ��������, 150 - �������, 150 - �������
    //marioSprite.setTextureRect(IntRect(150, 150, -150, 150));// �������� �����������
    marioSprite.setPosition(50, 25);// ��������� ���������� ������ �������

    float marioTeleportTimer = 0;// ���������� ��� ������� ������������ �����
    Clock clock;// ������� ���������� �������, �������� �� �������(� �� ����������)


    /*����������
    * 0,0,150,150 - 1�
    * 150,0,-150,150 - 1� �������� �� X
    * 150,0,150,150 - 2�
    * 300,0,150,150 - 3�
    * 0,150,150,150 - 8�
    * 150,150,150,150 - 9�
    */
   


    

    while (window.isOpen())
    {
        float time = clock.getElapsedTime().asMicroseconds();// ���� ��������� ����� � ������������
        clock.restart(); // ������������ �����
        time = time / 800; // �������� ���� // ��� ������ ��� �������

        cout << time << endl;// ������
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        marioTeleportTimer += time;// ���������� � ����� ���������� time;

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
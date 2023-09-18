# Лабораторная работа №1 

## Приложение разработано по условию Лабораторной работы №1 "Цветовые модели". Приложение разработано на языке C++ в приложение Qt Creator 4.11.1

### В приложении реализовано:
* Палитра, позволяющая выбирать цвет при нажатии
* Слайдеры, позволяющие менять цвет
* Окна ввода численных значений цвета
* Окно, отображающее цвет


### Для отображения и взаимодействия с пользователем был написан абстрактный класс colorSystem, который включает в себя переменное число полей ввода, а также слайдер для плавного изменения значений поля. От этого класса были снаследованы такие классы, как RGBSystem, CMYKSystem, …, LABSystem, обеспечивающие полный функционал требуемой цветовой системы.
 * Главным средством перевода значений из одной системы в другую является класс QColor, являющийся частью Qt. Были написаны дополнительные функции для поддержки систем XYZ и LAB fromRGBtoXYZ и fromXYZtoLAB.

### Библиотеки:
*QWidget
*QLabel
*QComboBox
*QPainter
*QGridLayout
*QMouseEvent
*QSlider
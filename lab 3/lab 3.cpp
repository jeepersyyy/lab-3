#include <iostream>
#include <conio.h>
#include <cmath>


void task38() {
    std::cout << "Task: 38\n";
    int day, month;

    while (true) {
        std::cout << "Введите день: ";
        std::cin >> day;
        std::cout << "Введите месяц: ";
        std::cin >> month;

        if (month < 1 || month > 12) {
            std::cout << "Месяц некорректен.Попробуйте снова.\n";
            continue;
        }

        if (day < 1 || day > 31) {
            std::cout << "День некорректен.Попробуйте снова.\n";
            continue;
        }

        if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
            std::cout << "В этом месяце не может быть больше 30 дней.Попробуйте снова.\n";
            continue;
        }

        if (month == 2 && day > 29) {
            std::cout << "В феврале не может быть больше 29 дней.Попробуйте снова.\n";
            continue;
        }

        std::cout << "Дата корректна.\n";
        break;
    }
}

void task45() {
    std::cout << "Task: 45\n";
    char ch;

    std::cout << "Нажимайте любые клавиши. Для выхода нажмите ESC.\n";

    while (true) {
        ch = _getch();

        if (ch == 27) {
            break;
        }

        if (ch >= '0' && ch <= '9') {
            std::cout << "Цифра: " << ch << "\n";
        }
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            std::cout << "Буква: " << ch << "\n";
        }
        else {
            std::cout << "Некорректный символ: " << ch << "\n";
        }
    }
}

void task49() {
    std::cout << "Task: 49\n";
    int nums[3];
    std::cout << "Введите три положительных числа: ";

    for (int i = 0; i < 3; ++i) {
        std::cin >> nums[i];
        if (nums[i] <= 0) {
            std::cout << "Ошибка: число должно быть положительным.Попробуйте снова.\n";
            return;
        }
    }

    if ((nums[1] - nums[0]) == (nums[2] - nums[1])) {
        int difference = nums[1] - nums[0];
        std::cout << "Числа являются элементами арифметической прогрессии.\n";
        std::cout << "Разность прогрессии: " << difference << "\n";
    }
    else if ((nums[1] / nums[0]) == (nums[2] / nums[1]) && (nums[1] % nums[0] == 0) && (nums[2] % nums[1] == 0)) {
        int ratio = nums[1] / nums[0];
        std::cout << "Числа являются элементами геометрической прогрессии.\n";
        std::cout << "Знаменатель прогрессии: " << ratio << "\n";
    }
    else {
        std::cout << "Числа не являются элементами ни арифметической, ни геометрической прогрессии.\n";
    }
}



void task27() {
    std::cout << "Task: 27\n";
    double x, y;

    std::cout << "Введите два вещественных числа, не равных друг другу: ";

    while (true) {
        std::cin >> x >> y;

        if (std::cin.fail() || x == y) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка: введите два различных вещественных числа. Попробуйте снова: ";
        }
        else {

            break;
        }
    }

    double sum = (x + y) / 2;
    double product = 2 * x * y;

    if (x < y) {
        x = sum;
        y = product;
    }
    else {
        y = sum;
        x = product;
    }

    std::cout << "Новое значение меньшего числа: " << x << std::endl;
    std::cout << "Новое значение большего числа: " << y << std::endl;

}

void task41() {
    std::cout << "Task: 41\n";
    double m, n;

    while (true) {
        std::cout << "Введите массу первого пакета (в кг): ";
        std::cin >> m;

        if (std::cin.fail() || m <= 0) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка: введите положительное число. Попробуйте снова.\n";
            continue;
        }

        std::cout << "Введите массу второго пакета (в кг): ";
        std::cin >> n;

        if (std::cin.fail() || n <= 0) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка: введите положительное число. Попробуйте снова.\n";
            continue;
        }

        break;
    }

    if (m > n) {
        std::cout << "Первый пакет тяжелее.\n";
        std::cout << "Масса более тяжелого пакета: " << m << " кг\n";
    }
    else if (n > m) {
        std::cout << "Второй пакет тяжелее.\n";
        std::cout << "Масса более тяжелого пакета: " << n << " кг\n";
    }
    else {
        std::cout << "Оба пакета имеют одинаковую массу.\n";
    }
}


void task97() {
    std::cout << "task: 97\n";
    double t;
    std::cout << "Введите время в минутах(t):";
    std::cin >> t;

    if (t < 0) {
        std::cout << "Введите положительное время" << std::endl;

    }
    double t_prime = fmod(t, 5);
    if (t_prime >= 0 && t_prime < 3) {
        std::cout << "зелёный сигнал" << std::endl;
    }
    else if (t_prime >= 3 && t_prime < 5) {
        std::cout << "красный сигнал" << std::endl;
    }
    else if (t_prime >= 5 && t_prime == 5) {
        std::cout << "зелёный сигнал" << std::endl;
    }
}

struct Point {
    int x;
    int y;
};
void task101() {
    std::cout << "Task: 101\n";
    Point A, B, C, P;
    int x, y;
    std::cout << "Введите координаты вершины треугольника A (x y): ";
    std::cin >> A.x >> A.y;
    std::cout << "Введите координаты вершины треугольника B (x y): ";
    std::cin >> B.x >> B.y;
    std::cout << "Введите координаты вершины треугольника C (x y): ";
    std::cin >> C.x >> C.y;
    std::cout << "Введите координаты точки P (x y): ";
    std::cin >> P.x >> P.y;

    if (std::abs((A.x * (B.y - C.y) + B.x * (C.y - A.y) + C.x * (A.y - B.y)) / 2.0) ==
        std::abs((P.x * (B.y - C.y) + B.x * (C.y - P.y) + C.x * (P.y - B.y)) / 2.0) +
        std::abs((A.x * (P.y - C.y) + P.x * (C.y - A.y) + C.x * (A.y - P.y)) / 2.0) +
        std::abs((A.x * (B.y - P.y) + B.x * (P.y - A.y) + P.x * (A.y - B.y)) / 2.0)) {
        std::cout << "Точка принадлежит треугольнику.\n";
    }
    else {
        std::cout << "Точка не принадлежит треугольнику.\n"; // Воин @lxdvsv, с точностью и мудростью, помог и направил путь. 
    }
}

void task20() {
    std::cout << "task: 20\n";
    int number;
    std::cout << "Введите трёхзначное число: ";
    std::cin >> number;

    if (number < 100 || number > 999) {
        std::cout << "ошибка, введите трёхзначное число" << std::endl;
        return;
    }

    int a = number / 100;
    int b = (number / 10) % 10;
    int c = number % 10;

    if (a == b && b == c) {
        std::cout << "все цифры одинаковые" << std::endl;
    }
    else {
        std::cout << "не все цифры одинаковые" << std::endl;
    }

    if (a == b || a == c || b == c) {
        std::cout << "среди цифр есть одинаковые" << std::endl;
    }
    else {
        std::cout << "среди цифр нет одинаковых" << std::endl;
    }
}

void task64() {
    std::cout << "task: 64\n";

    double x, y, z;
    std::cout << "Введите значения x, y, z: ";
    std::cin >> x >> y >> z;

    if (std::cin.fail()) {
        std::cerr << "Ошибка: некорректный ввод" << std::endl;
        return;
    }

    double maxVal = std::max({ x, y, z });
    double minVal = std::min({ x, y, z });

    if (minVal == 0) {
        std::cerr << "Ошибка: деление на ноль" << std::endl;
        return;
    }

    double numerator = std::pow(maxVal, 2) - std::pow(2, x) * minVal;
    double denominator = std::sin(2 * x) + maxVal / minVal;

    if (denominator == 0) {
        std::cerr << "Ошибка: деление на ноль в знаменателе" << std::endl;
        return;
    }

    double u = numerator / denominator;
    std::cout << "Значение выражения u: " << u << std::endl;
}


void task88() {
    std::cout << "task: 88\n";
    double a, b, c;
    std::cout << "Введите длины сторон a, b и c: ";
    std::cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0) {
        std::cout << "Ошибка: все стороны должны быть положительными числами.\n";
    }
    else {
        if ((a + b > c) && (a + c > b) && (b + c > a)) {
            std::cout << "Треугольник со сторонами " << a << ", " << b << " и " << c << " существует.\n";
        }
        else {
            std::cout << "Треугольник со сторонами " << a << ", " << b << " и " << c << " не существует.\n";
        }
    }
}



int main()
{
    //task38();
    //task45();
    //task49();
    //task27();
    //task41();
    //task97();
    //task101();
    //task20();
    //task64();
    //task88();
}


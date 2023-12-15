//Выполнила Колосова Елена ВМК-22

/// выявляет существует ли треугольник
/// \param x1 абсцисса первой вершины
/// \param y1 ордината первой вершины
/// \param x2 абсцисса второй вершины
/// \param y2 ордината второй вершины
/// \param x3 абсцисса третьей вершины
/// \param y3 ордината третьей вершины
/// \return true, если треугольник с заданными вершинами существует
/// \return false, если треугольник с заданными вершинами не существует
bool existence_of_a_triangle(float x1, float y1, float x2, float y2, float x3, float y3);

/// вычисляет периметр треугольника по координатам его вершин
/// \param x1 абсцисса первой вершины
/// \param y1 ордината первой вершины
/// \param x2 абсцисса второй вершины
/// \param y2 ордината второй вершины
/// \param x3 абсцисса третьей вершины
/// \param y3 ордината третьей вершины
/// \return  периметр треугольника
float perimeter(float x1, float y1, float x2, float y2, float x3, float y3);

/// вычисляет площадь треугольника по координатам его вершин
/// \param x1 абсцисса первой вершины
/// \param y1 ордината первой вершины
/// \param x2 абсцисса второй вершины
/// \param y2 ордината второй вершины
/// \param x3 абсцисса третьей вершины
/// \param y3 ордината третьей вершины
/// \return  площадь треугольника
float area(float x1, float y1, float x2, float y2, float x3, float y3);

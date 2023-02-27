# Лабораторная работа №2 "Алгебра полиномов"

## Техническое задание
**ДЛЯ КЛИЕНТА**
1. Возможность создания полиномов трёх переменных.
2. Возможность выполнения операций над отдельным полиномом: вычисление в точке, умножение на константу, производная. 
3. Возможность выполнения операций в выражениях из полиномов: сложение, вычитание, умножение на константу,умножение полиномов, деление полиномов. операции должны выполняться, используя постфиксную форму.
4. Возможность выполнения операций над таблицами: добавление полинома (во все сразу), удаление полинома (во всех сразу), поиск (только в активной таблице, выполняется в процессе вычисления выражений, составленных из имен полиномов).
5. Наличие графического интерфейса (Windows Forms).

**ДЛЯ РАЗРАБОТЧИКА**
1. Полиномы должны храниться в списке.
2. Попимо списка полиномы должны хранятся в 6 видах таблиц: линейной на массиве, линейной на списке, упорядоченной на массиве, дереве, хэш таблице со списками, хэш таблице с открытым перемешиванием.

## Распределение работы
1. Винокуров Иван (@LeakMachine) - Интерфейс. Линейная таблица на массиве. Таблица на поисковом дереве (АВЛ). Упорядоченная таблица на массиве. Хеш-таблица со списками (метод цепочек).
2. Андрей Карагодин (@MineShadow7) - Полином (доработанная до 3 переменных версия). Линейная таблица на списке. Хеш-таблица с открытым перемешиванием. Общий интерфейс таблиц. Постфикс для полиномов (доработанная обратная польская запись).

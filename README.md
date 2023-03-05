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

## Список объектов и алгоритмов
**Объекты**
 1. Полином. Представлен как класс, содержащий список из мономов. Имеет методы: 
	 - [ ] Сложения полинома с мономом / полиномом. 
	 - [ ] Вычитания мономома / полиномома из полинома
	 - [ ] Умножения полинома на полином / моном или константу. 
	 - [ ] Деления полинома на полином / моном. 
	 - [ ] Нахождения производной полинома.

 2. Моном. Представлен в виде класса. Составная часть полинома. Хранятся коэффициенты и степени. Имеет методы:  
	 - [ ] Сложения мономов. 
	 - [ ] Вычитания мономов.
	 - [ ] Умножения монома на моном или константу. 
	 - [ ] Деления мономов. 
	 - [ ] Нахождения производной мономов.

 3. Таблицы. Имеют методы:  
	 - [ ] Вставки новой записи.
	 - [ ] Удаления записи.
	 - [ ] Поиска записи по ключу.

**Алгоритмы** 
 1. [Операции над полиномами.](https://habr.com/ru/post/537926/)
 2. [Операции над отдельным полиномом.](https://infopedia.su/12xd0c5.html)
 3. Операции над таблицами.

## Распределение работы
1. Винокуров Иван (@LeakMachine) - Интерфейс. Линейная таблица на массиве. Таблица на поисковом дереве (АВЛ). Упорядоченная таблица на массиве. Хеш-таблица со списками (метод цепочек).
2. Андрей Карагодин (@MineShadow7) - Полином (доработанная до 3 переменных версия). Линейная таблица на списке. Хеш-таблица с открытым перемешиванием. Общий интерфейс таблиц. Постфикс для полиномов (доработанная обратная польская запись).

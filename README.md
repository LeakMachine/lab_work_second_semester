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
 1. Класс CPolynomial. Представлен как класс, содержащий список из мономов. Имеет методы: 
	 - Сложения полинома с мономом / полиномом. 
	 - Вычитания мономома / полиномома из полинома
	 - Умножения полинома на полином / моном или константу. 
	 - Деления полинома на полином / моном. 
	 - Нахождения производной полинома.
	 - Присваивания.

 2. Класс CMonomial. Составная часть полинома. Хранятся коэффициенты и степени. Имеет методы:
	 - Сложения мономов. 
	 - Вычитания мономов.
	 - Умножения монома на моном или константу. 
	 - Деления мономов. 
	 - Нахождения производной мономов.
	 - Присваивания.

 3. Таблицы. Имеют методы:  
	 - Вставки новой записи.
	 - Удаления записи.
	 - Поиска записи по ключу.
	 
**Иерархия**
 1. Класс CPolynomial содержит в себе список из CMonomial.
 2. Таблицы.
	 - Класс CTable, виртуальный. Фактически является интерфейсом для остальных таблиц, от него наследуется все остальные.
	 - Класс CTreeTable. Представляет из себя таблицу на поисковом дереве.
	 - Класс COrderedTableArray. Представляет из себя упорядоченную таблицу на массиве.	
	 - Классы CHashTableList и CHashTableMix. Представляют из себя хеш-таблицу со списками и хеш-таблицу с открытым перемешиванием соответственно.
	 - Классы CLinearTableList и CLinearTableArray. Представляют из себя линейную таблицу на списке и линейную таблицу на массиве соответственно.
	 
**Алгоритмы** 
 1. [Операции над полиномами.](https://habr.com/ru/post/537926/)
 2. [Операции над отдельным полиномом.](https://infopedia.su/12xd0c5.html)
 3. Операции над таблицами.
 	  - [Красно-чёрные деревья](https://habr.com/ru/post/330644/)
 	  - [Хеш-таблицы](https://habr.com/ru/post/509220/)

## Распределение работы
1. Винокуров Иван ([@LeakMachine](https://github.com/LeakMachine)) - Интерфейс. Линейная таблица на массиве. Таблица на поисковом дереве (АВЛ). Упорядоченная таблица на массиве. Хеш-таблица со списками (метод цепочек).
2. Андрей Карагодин ([@MineShadow7](https://github.com/MineShadow7)) - Полином (доработанная до 3 переменных версия). Линейная таблица на списке. Хеш-таблица с открытым перемешиванием. Общий интерфейс таблиц. Постфикс для полиномов (доработанная обратная польская запись).

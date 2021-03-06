## Lafore
**C++**

<details>
  <summary>Chapter 2</summary>

  ***

  ## &#9745;  Практическое задание №1 

  * Считая, что кубический фут равен `7,481` галлона, написать программу,
запрашивающую у пользователя число галлонов и выводящую на экран
эквивалентный объем в кубических футах.

  ***

  ## &#9745;  Практическое задание №2 

  * Напишите программу, выводящую следующую таблицу:
`1990      135`
`1991     7290`
`1992    11300`
`1993    16200`

В программе использовать только один оператор с `cout`.

  ***

  ## &#9745;  Практическое задание №3 

  * Напишите программу, генерирующую следующий вывод:
`10`
`20`
`19`
Используйте представление числа `10` в виде целой константы. Для вывода 
числа `20` воспользуйтесь одной из арифметических операций с 
присваиванием, а для вывода числа `19` — операцией декремента.

  ***

  ## &#9745;  Практическое задание №4 

  * Напишите программу, выводящую на экран ваше любимое стихотворение. 
Для разбиения на строчки используйте подходящую управляющую
последовательность.

  ***

  ## &#9745;  Практическое задание №5 

  * Библиотечная функция `islower()` принимает в качестве аргумента один 
символ (букву) и возвращает ненулевое целое значение в том случае, если
буква является строчной, и нулевое, если буква является заглавной. 
Описание функции хранится в файле `CTYPE.H`. Напишите программу, которая
принимает букву от пользователя, а затем выводит нулевое или ненулевое 
значение в зависимости от того, является ли буква строчной или нет.

  ***
  
  ## &#9745;  Практическое задание №6

  * На биржевых торгах за 1 фунт стерлингов давали `$1.487`, за франк — `$0.172`,
за немецкую марку — `$0.584`, а за японскую йену — `$0.00955`. Напишите
программу, которая запрашивает денежную сумму в долларах, а затем 
выводит эквивалентные суммы в других валютах.

  ***
  
  ## &#9745;  Практическое задание №7

  * Температуру, измеренную в градусах по Цельсию, можно перевести в 
градусы по Фаренгейту путем умножения на `9/5` и сложения с числом `32`.
Напишите программу, запрашивающую температуру в градусах по Цельсию 
и отображающую ее эквивалент по Фаренгейту.

  ***
  
  ## &#9745;  Практическое задание №8

  * Когда размер величины, выводимой на экран с помощью манипулятора
`setw()`, оказывается меньше размера зарезервированного поля, по 
умолчанию незаполненные поля заполняются пробелами. Манипулятор `setfill()`
принимает в качестве аргумента один символ, который замещает все 
пробелы на незаполненных позициях поля. Модифицируйте пример `WIDTH`
так, чтобы символы, разделяющие пары значений из столбцов, были не
пробелами, а точками, например
`Moscow .... 8425785`

  ***  
  
  ## &#9745;  Практическое задание №9

  * Две дроби а/b и c/d можно сложить следующим образом:
`a/b + c/d = (a*d + b*c)/(b*d)`
Например, `1/4 + 2/3 = (1*3 + 4*2)/4*3 = 11/12`
Напишите программу, запрашивающую у пользователя значения двух
дробей, а затем выводящую результат, также записанный в форме дроби.
Взаимодействие программы с пользователем может выглядеть, например,
следующим образом:
`Enter first fraction: 1/2`
`Enter second fraction: 2/5`
`The sum is: 9/10`
Вы можете использовать тот факт, что операция извлечения `>>` может
считывать более одного значения за раз:
`cin >> а >> dummychar >> b;`

  ***  
  
  ## &#9745;  Практическое задание №10

  * Устаревшая денежная система Великобритании состояла из фунтов, шиллингов 
и пенсов. `1` фунт был равен `20` шиллингам, а `1` шиллинг — `12` пенсам. 
Для записи использовалась система, состоящая из знака
`£` и трех десятичных значений, разделенных точками. Например, `£5.2.8`
запись обозначала `5` фунтов, `2` шиллинга и `8` пенсов (пенс — множественное 
число от пенни). Современная денежная система, принятая в 50-е годы XX века, 
состоит только из фунтов и пенсов, причем один фунт равен `100` пенсам.
Такой фунт называют десятичным. Таким образом, в новой денежной
системе указанная сумма будет обозначаться как `£5.13`(если быть точнее, 
`£5.1333333`). Напишите программу, которая будет преобразовывать сумму, 
записанную в старом формате (фунты, шиллинги, пенсы), в новый формат (фунты, 
пенсы). Форматом взаимодействия программы с пользователем может являться 
следующий:
`Enter pounds quantity: 7`
`Enter shillings quantity: 17`
`Enter penny quantity: 9`
`Quantity of decimal pounds: £7.89`

В большинстве компиляторов для представления знака `£` используется
десятичный код `156`. Некоторые компиляторы позволяют скопировать
знак фунта прямо из таблицы символов Windows.

  ***      
  
  ## &#9745;  Практическое задание №11

  * По умолчанию форматирование вывода производится по правому краю
поля. Можно изменить форматирование текста на левостороннее путем
использования манипулятора `setiosflags(ios::left)` (не беспокойтесь о смысле
новой формы записи, встретившейся в манипуляторе). Используйте этот
манипулятор вместе с `setw()` для того, чтобы произвести следующий вывод:

    |   Surname   |    Name    |     Address    |        City        |
    |:-----------:|:----------:|:--------------:|:------------------:|
    |  `Petrov`   | `Vasiliy`  | `Klenovaya 16` | `Saint-Petersburg` |
    |  `Ivanov`   | `Serghei`  | `Osinovaya 3`  | `Nahodka`          |
    |  `Sidorov`  | `Ivan`     | `Berezovaya 21`| `Kaliningrad`      |
    

  ***    
  
  ## &#9745;  Практическое задание №12

  * Напишите программу, выполняющую действия, обратные тем, которые
описаны в упражнении `10`, то есть запрашивающую у пользователя сумму, 
указанную в десятичных фунтах, и переводящую ее в старую систему
фунтов, шиллингов и пенсов. Пример взаимодействия программы с пользователем 
может выглядеть так:
`Enter quantity of decimal pounds: 3.51`
`Equivalent amount in old form is: £3.10.2`
Обратите внимание на то, что если вам придется присваивать вещественное 
значение (например, `12,34`) переменной целого типа, то его дробная
часть (`0,34`) будет потеряна, а целая переменная получит значение `12`.
Чтобы избежать предупреждения со стороны компилятора, используйте
явное преобразование типов. Можно использовать операторы, подобные
приведенным ниже:
`float decpounds; // сумма в десятичных фунтах`
`int pounds;      // сумма в старых фунтах`
`float decfrac;   // десятичная дробная часть`
`pounds = static_cast<int>(decpounds); //отбрасывание дробной части`
`decfrac = decpounds - pounds;         //прибавление дробной части`
Чтобы получить число шиллингов, следует умножить на `20` значение переменной 
`decfrac`. Аналогичным образом можно получить число пенсов.
    

  ***     
  
</details>

<details>
  <summary>Chapter 3</summary>

  ***
  
  ## &#9745;  Практическое задание №1

  * Предположим, вы хотите создать таблицу умножения на заданное число.
Напишите программу, которая позволяет пользователю ввести это число,
а затем генерирует таблицу размером `20` строк на `10` столбцов. Первые
строки результата работы программы должны выглядеть примерно следующим образом:
`Enter the number: 7`
`7142128354249566370`
`77849198105112119126133140`
`147154161168175182189196203210`
    

  ***    
  
  ## &#9745;  Практическое задание №2

  * Напишите программу, предлагающую пользователю осуществить перевод температуры 
из шкалы Цельсия в шкалу Фаренгейта или наоборот, а затем осуществите 
преобразование. Используйте в программе переменные вещественного типа. 
Взаимодействие программы с пользователем может выглядеть следующим образом:
`Press 1 to convert Celsius to Fahrenheit,`
`2 to convert Fahrenheit to Celsius: 2`
`Enter the temperature in Fahrenheit: 70`
`Celsius T:  21.111111`

  ***
  
  ## &#9745;  Практическое задание №3

  * Операции ввода, такие, как `cin`, должны уметь преобразовывать последовательность 
символов в число. Напишите программу, которая позволяет пользователю ввести 
шесть цифр, а затем выводит результат типа `long` на экране. Каждая цифра должна 
считываться отдельно при помощи функции `getche()`. 
Вычисление значения переменной производится путем умножения текущего ее значения 
на `10` и сложения с последней введенной
цифрой (для того, чтобы из кода символа получить цифру, вычтите из не-
го `48` или `'0'`). Примером результата работы программы может служить
следующий:
`Enter the number: 123456`
`You've entered the number 123456`
    

  ***    
  
  ## &#9745;  Практическое задание №4

  * Создайте эквивалент калькулятора, выполняющего четыре основных арифметических 
операции. Программа должна запрашивать ввод пользователем первого операнда, 
знака операции и второго операнда. Для хранения операндов следует использовать 
переменные вещественного типа. Выбрать операцию можно при помощи оператора `switch`. 
В конце программа должна отображать результат на экране. Результат работы 
программы с пользователем может выглядеть следующим образом:
`Enter the first operand, the operation, and the second operand: 10 / 3`
`The result is 3.333333`
`Perform one more operation (y/n)? y`
`Enter the first operand, the operation, and the second operand: 12 + 100`
`The result is 112`
`Perform one more operation (y/n)? n`

  ***
  
  ## &#9745;  Практическое задание №5

  * При помощи цикла `for` изобразите на экране пирамиду из символов `'X'`.
Верхняя часть пирамиды должна выглядеть следующим образом:  
`х` 
`ххх`   
`ххххх` 
`ххххххх`   
`ххххххххх` 
Вся пирамида должна быть высотой не `5` линий, как изображено здесь,
а `20` линий. Одним из способов ее построения может служить использование двух 
вложенных циклов, из которых внутренний будет заниматьс печатанием символов `'X'` 
и пробелов, а другой осуществлять переход на
одну строку вниз.
    

  ***    
  
  ## &#9745;  Практическое задание №6

  * Измените программу `factor`, приведенную в этой главе, таким образом,
чтобы она циклически запрашивала ввод пользователем числа и вычисля-
ла его факториал, пока пользователь не введет `0`. В этом случае програм-
ма должна завершиться. При необходимости вы можете использовать со-
ответствующие операторы программы `factor` в цикле `do` или `while`.

  ***
  
  
  ## &#9745;  Практическое задание №7

  * Напишите программу, рассчитывающую сумму денег, которые вы получите при 
вложении начальной суммы с фиксированной процентной ставкой дохода через 
определенное количество лет. Пользователь должен вводить с клавиатуры начальный 
вклад, число лет и процентную ставку. Примером результата работы программы 
может быть следующий:
`Enter initial deposit: $ 3000`
`Enter the number of years: 10`
`Enter the interest rate: % 5.5`
`In 10 years, you will receive $ 5124.43.`
`At the end of the first year, you will receive $ 3000 + (3000*0.055) = $ 3165.`
`At the end of next year, you will receive $ 3165 + (3165*0.055) = $ 3339.08.` 
Подобные вычисления удобно производить с помощью цикла `for`.    

  ***    
  
  ## &#9745;  Практическое задание №8

  * Напишите программу, которая циклически будет запрашивать ввод пользователем 
двух денежных сумм, выраженных в фунтах, шиллингах и пенсах (см. упражнения `10` и 
`12` главы `2`). Программа должна складывать введенные суммы и выводить на экран 
результат, также выраженный в фунтах, шиллингах и пенсах. После каждой итерации 
программа должна спрашивать пользователя, желает ли он продолжать работу программы.
При этом рекомендуется использовать цикл `do`. Естественной формой взаимодействия 
программы с пользователем была бы следующая:
`Enter the first amount: £ 5 10 6`
`Enter the second amount: £ 3 2 6`
`Total amount £ 8 13 0`
`Continue(y/n)? `
Для того чтобы сложить две суммы, вам необходимо учесть заем одного
шиллинга в том случае, если число пенсов окажется больше `11`, и одного
фунта, если число шиллингов окажется больше `19`.

  ***  
  
  ## &#9745;  Практическое задание №9

  * Представьте, что вы собираетесь пригласить к себе шестерых гостей, но за
вашим столом могут разместиться всего лишь `4` человека. Сколькими способами можно 
разместить четырех из шести гостей за обеденным столом? Каждый из шести гостей 
может разместиться на первом стуле. Каждый из оставшихся пяти гостей может занять 
второй стул. На третьем стуле может разместиться один их четырех гостей, 
и на четвертом — один из трех оставшихся гостей. Двоим из гостей не достанется 
ни одного места. Таким образом, число возможных рассадок гостей за столом равно
`6*5*4*3 = 360`. Напишите программу, которая будет производить аналогичные 
вычисления для любого числа гостей и любого числа мест за столом (при этом 
предполагается, что число гостей не меньше числа мест). Программа не должна быть 
сложной, и вычисление можно организовать с помощью простого цикла `for`.    

  ***    
  
  ## &#9745;  Практическое задание №10

  * Модифицируйте программу, описанную в упражнении `7`, так, чтобы вме-
сто вычисления текущей суммы на вашем счете она вычисляла, сколько
лет потребуется для того, чтобы при заданной процентной ставке и вели-
чине начального вклада сумма на вашем счете достигла запрашиваемого
вами значения. Для хранения найденного числа лет используйте перемен-
ную целого типа (можно отбросить дробную часть значения, полученного
в результате расчета). Самостоятельно выберите тип цикла, подходящий
для решения задачи.

  ***    
  
  ## &#9745;  Практическое задание №11

  * Создайте калькулятор, выполняющий действия над денежными суммами,
выраженными в фунтах, шиллингах и пенсах (см. упражнения `10` и `12`
главы `2`). Калькулятор должен складывать и вычитать вводимые значения, а также 
производить умножение денежной суммы на вещественное число (операция умножения 
двух денежных сумм не имеет смысла, поскольку квадратных денежных единиц 
не существует. Деление одной денежной суммы на другую мы тоже не будем рассматривать). 
Организация взаимодействия с калькулятором описана в упражнении `4` этой главы.    

  ***    
  
  ## &#9745;  Практическое задание №12

  * Создайте калькулятор, выполняющий четыре арифметических действия над дробями 
(см. упражнение `9` главы `2` и упражнение `4` этой главы).
Формулы, демонстрирующие выполнение арифметических операций над дробями, приведены ниже.
Сложение: `a/b + c/d = (a*d + b*c)/(b*d)`
Вычитание: `a/b - c/d = (a*d - b*c)/(b*d)`
Умножение: `a/b*c/d = (a*c)/(b*d)`
Деление: `a/b/c/d = (a*d)/(b*c)`
Пользователь должен сначала ввести первый операнд, затем знак операции и второй операнд. 
После вычисления результата программа должна отобразить его на экране и запросить 
пользователя о его желании произвести еще одну операцию.

  ***   

</details>

<details>
  <summary>Chapter 4</summary>

  ***
  
</details>

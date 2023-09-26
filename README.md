# CPP
Zestaw poprawkowy z języka C++
1. Chłopcy i dziewczynki ustawili się w szereg, osoba tuz obok osoby.
Zastanawiamy sie teraz, ilu minimalnie chłopców musi usunąć sie z
szeregu, aby pod rząd stało k dziewczynek, jedna tuz obok drugiej i
pomiędzy nimi wszystkimi nie stał żaden chłopiec.
Proszę napisać program który rozwiązuje ten problem dla danych
wejściowych podawanych zgodnie z poniższym formatem.
Dane wejściowe: Pierwszy wiersz standardowego wejścia zawiera dwie
liczby całkowite n i k (1<k<n<100), oznaczające odpowiednio liczbę
osób ustawionych w szeregu oraz liczbę dziewczynek, jakie chcemy, aby
stały pod rząd . Kolejny wiersz wejścia zawiera n liczb całkowitych 0 lub
1, oznaczających kolejne osoby ustawione w szeregu: 0 – oznacza
dziewczynkę, 1 – chłopca.
Wyjście: Pierwszy i jedyny wiersz standardowego wyjścia powinien
zawierać jedna liczbę całkowita, oznaczająca minimalna liczbę chłopców,
którzy powinni usunąć się z szeregu, lub jedno słowo ’NIE’, gdy nie da
sie usunac chłopców tak, aby k dziewczynek stało pod rzad.
Przykład działania programu
dla danych wejściowych:
8 3
0 1 1 0 1 0 1 0
poprawnym wynikiem ( wyświetlonym na monitorze )jest: 2
bo wystarczy usunąć dwie ostatnie 1 aby warunek był spełniony.
0 1 1 0 1 0 1 0 ( na czerwono usunięci chłopcy)
2. Klasa Car posiada dwa atrybuty prywatne typu:
String marka
int przebieg;
int wartość;
proszę zaprojektować a następnie zaimplementować klasę Car
posiadającą następujące elementy:
 Konstruktor domyślny (marką domyślną niech będzie Fiat o
przebiegu 100 tys. i wartości 20 tys zł.),
 Konstruktor Kopiujący,
 Operator przypisania,
 Operator porównania (porównujemy przebiegi tylko dla
samochodów tej samej marki)
 Metodę pozwalająca na cofanie licznika o padną wartość
(przeciążony operator -);
 Metody sprawdzającą jaka jest marka samochodu oraz jego
przebieg ;
 Funkcje pozwalające na wypisywanie danych ze strumienia do
obiektu klasy Car.
 Operator + pozwalający na stworzenie składaka tzn. z 2
samochodów powstaje nowy o marce takiej jak samochód o
większej wartości. Wartość samochodu zwiększa się o 20 w
stosunku do średniej wynikającej z wartości obu samochodów,
przebieg to mniejszy z przebiegów minus 30%.
 Operator += wzbogacający nasz samochód o elementy z
samochodu będącego argumentem metody ( zwiększa jego
wartość o 10 tys.) pod warunkiem ze wartość samochodu
wzbogacanego jest mniejsza niż wartość samochodu będącego
argumentem.
Napisz aplikacje testowa demonstrującą zaimplementowane metody.
3. Napisać program sortujący listę max 8 miast. Miasta należy podawać z
klawiatury. Proszę zwrócić uwagę że nazwy miast mogą być dwu-częściowe
np. Bielsko Biała. Należy sprawdzić czy wśród znaków nie ma np. literek itp.
Jeśli podacie państwo tekst pusty np. Enter oznacza to koniec wprowadzania
danych. Miasta najlepiej przechowywać w odpowiednim elemencie tablicy 8
elementowej. Każdy element tablicy musi być alokowany dynamicznie, tzn.
tablica powinna zawierać tyko tyle znaków ile potrzeba. Proszę nie
zapomnieć o zwolnieniu pamięci na końcu programu. Sortujemy zgodnie z
alfabetem (wielkość znaków nie odgrywa żadnej roli). Na końcu należy
wypisać posortowaną listę miast (format znaków taki sam jak przy
wprowadzaniu danych czyli jeśli wprowadzałem jako miasto „KraKOW” to po
posortowaniu również ma pojawić się „KrakOW”).
4. Dana jest następująca struktura:
struct pracownik {
string imie,
char* stanowisko;
double pensja;
char plec;
};
Napisz funkcję, która utworzy i wypełni danymi pobranymi od użytkownika
tablicę n pracowników. Ilość pracowników jest podawana dopiero po
uruchomieniu programu. Pamiętaj o sprawdzaniu poprawności danych: pola
nazwisko, imie i stanowisko składają się wyłącznie z liter; pole pensja to wartość
większe od zera; pole plec przybiera tylko dwie wartości 'K' albo 'M'.
Poszczególne wartości wczytuj do momentu, aż użytkownik poda poprawne
dane. Wartość n oraz wskaźnik do tablicy przekaż jako parametry funkcji.

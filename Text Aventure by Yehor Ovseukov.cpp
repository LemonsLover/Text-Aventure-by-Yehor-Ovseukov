#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string ans = " ", pas = " ";
	int b = 0, c = 0, z = 0, o = 0, vitaliiLox = 0, j = 1, p = 0, x = 0, m = 0;
	//Items
	int kolish = 0;
	int napilnik = 0;
	int noj = 0;
	int palka = 0;
	while (b == 0) {
		cout << "\nСуть игры заключается в выборе правельного варианта(или не правельно, мне вообще пох), нажми на кнопку которая соотвецтвует тому что ты хочешь зделать.(для лучшего прочтения текста лучше открыть сосоль во весь екран)\n";
		cout << "\nВведите (Ok) и затем нажмите ентер для продолжения(ответы нужно писать на английском, и желательно так как показано в скобках)...\n\n";
		cin >> ans;
		cout << endl;
		if (ans == "Ok" || ans == "ok") {
			system("cls");
			cout << "\nОк, начало, как по канонам Скайрима и других игр где всё наченается в тюрачке.\n";
			cout << "Вы проснулись на холодном полу, вокруг мокрые стены(удивительно как у вас вообще жопа не отмёрзла), в вашей камере есть только стол, стул, оконо и напротив окна находится дверь.\n";
			cout << "Ну блять, нужно что-то делать, не сидеть же на этом обоссаном полу...\n\n";
			system("pause");
			cout << endl;
			b = 1;
			ans = " ";
		}
		else {
			cout << "Ты не понял смысл этой игры, попробуй сначала...\n\n";
			b = 0;
			ans = " ";
		}
	}
	while (z == 0) {
		if (o == 1) {
			system("cls");
			cout << "\nВ вашей камере есть только стол, стул, оконо и напротив окна находится дверь.\n";
			cout << "Ну блять, нужно что-то делать, не сидеть же на этом обоссаном полу...\n";
			system("pause");
			cout << endl;
		}
		cout << "q-подойти к окну\n";
		cout << "w-подойти к двери\n";
		cout << "e-подойти к столу\n";
		cout << "r-Блин, лень, посижу ка я здесь...\n\n";
		if (noj == 1 || palka == 1 || napilnik == 1 || kolish == 1) {
			cout << "t-инвентарь\n\n";
		}

		ans = " ";
		cin >> ans;
		cout << endl;
		b = 0;

		if (ans == "t") {
			cout << "У вас есть:\n";
			if (noj == 1) {
				cout << "Нож, ";
			}
			if (napilnik == 1) {
				cout << "Напильник, ";
			}
			if (palka == 1) {
				cout << "Ножка стула, ";
			}
			if (kolish == 1) {
				cout << "Железный колышок, ";
			}
			cout << endl << endl;
		}

		else if (ans == "r") {
			system("cls");
			cout << "Ок, лежи, тебя никто не может заставить что-то делать, главное захотеть самому\n";
			cout << "Если ты сейчас напишешь (yagay) то игра закончится,(это будет считатся плохой концовкой)\n";
			ans = " ";
			cin >> ans;
			if (ans == "yagay" || ans == "YAGAY" || ans == "Yagay") {

				system("pause");
				exit(0);
			}
			else {
				cout << "Ты не согласен ? Ну, если хочешь продолжить играть-просто перезапусти игру\n";

				system("pause");
				exit(0);
			}
		}
		else if (ans == "e") {
			system("cls");
			while (b == 0) {

				cout << "Подойдя к столу вы видете что рядом с ним стоит стул, а в самом столе есть 2 пыльные полки\n";
				cout << "От самого стола до сих пор несёт чефиром...\n";
				system("pause");
				cout << "q-заглянуть в верхнюю полку\n";
				cout << "w-заглянуть в нижнюю полку\n";
				cout << "e-сесть на стул\n";
				cout << "r-здуть пыль со стола\n";
				cout << "t-вернутся на исходную\n\n";
				ans = " ";
				cin >> ans;

				if (ans == "q") {
					system("cls");
					cout << "\nВау, ничё се, КАПЕЦ...\n";
					cout << "В на этой полке лежал НоЖик\n";
					cout << "(Получен предмет-Нож)\n\n";
					noj = 1;
					system("pause");
					cout << endl;
				}
				if (ans == "w") {
					system("cls");
					cout << "\nЗаглянув в нижнюю полку вы поняли что кроме кучи пыли и...\n";
					cout << "...напильника ?\n";
					cout << "Ну, ок, вы нашли напильник\n";
					cout << "(Получен предмен-напильник)\n\n";
					napilnik = 1;
					system("pause");
					cout << endl;
				}
				if (ans == "e") {
					system("cls");
					cout << "\nВы сели на стул...\n";;
					cout << "Через мгновение вы слышите треск, стул ломается\n";
					cout << "Ну, ваша самооценка упала, но зато у вас теперь есть палка\n";
					cout << "(Получен предмет-ножка стула)\n\n";
					palka = 1;
					system("pause");
					cout << endl;
				}
				if (ans == "r") {
					system("cls");
					cout << "\nВЫ здули пиль со стола, запах чефира заполнил комнату\n";
					cout << "Так, стоп, на столе написаны какие-то символы\n";
					cout << "          XOL_LINAD" << endl;
					cout << "Хм, что же это может занчить...?\n\n";
					system("pause");
					cout << endl;
				}
				if (ans == "t") {
					b = 1;
					o = 1;
				}
			}
		}

		else if (ans == "w") {
			system("cls");
			while (b == 0) {

				cout << "Подойдя к двери, понимате что она из закалённого метала, весит эта 'тварь' примерно 100 килограм\n";
				system("pause");
				cout << "q-попробывать открыть дверь\n";
				cout << "w-попробывать выломать дверь\n";
				if (m == 0) {

					cout << "e-попробывать забить на дверь(на пока, её ждёт реванш)\n\n";
				}
				if (m == 1) {
					cout << "e-попробывать забить на дверь\n\n";

				}
				if (noj == 1) {
					if (x == 1) {

						cout << "r-реванш суке двери...\n\n";
					}
				}
				if (m == 1) {
					cout << "t-Подойти к терминалу\n";
				}




				ans = " ";
				cin >> ans;
				if (ans == "t") {
					system("cls");
					cout << "На месте куда вы ударили всё ещё есть екран с калавиатурой\n";
					cout << "На єкране мигает надпись (!ьлорап етидевВ)\n";
					cout << "Блин, что нужно ввести то ?\n";
					cin >> pas;
					if (pas == "xol_linad" || pas == "XOL_LINAD" || pas == "Xol_linad") {
						cout << "вау, дверь с грохотом открылась(похоже вы уже забыли что она ваш злейший враг здесь)\n";
						cout << "За дверью вы видете тропу, куда она ведёт?\n";
						cout << "Не долго думая вы решаете пойти по тропе наверх\n";
						cout << "Вы, вы в раю...\n";
						cout << "Что же это, вы чуствуете лёгкость и непринуждённость, похоже ваше страдание окончены...\n\n\n\n\n\n\n";
						cout << "Ну что, поздравляю, вы прошли игру на хорошую концовку, другие концовки есть в игре, их всего 3(я так думаю), надеюсь вам хоть чучуть понравилось играть в неё, я просрал 4 часа на создание этого\n";
						cout << "Создатель этого дерьма-Овсеюков Егор, дебил из 10 класса.";

						system("pause");
						exit(0);
					}
					else {
						cout << "Похоже нужно узнать что отменя хочет єта шайтан машина(подсказка-нужно писать ВСЁ как там откуда вы пишете)\n\n";
					}

				}
				if (ans == "r") {
					system("cls");
					noj = 0;
					cout << "Вы смотрите на дверь, вы помните как она над вами издевалась\n";
					cout << "Обозлённый на дверь вы с разбега бёте её ножом\n";
					cout << "Ничему вас жизнь не учит...\n";
					cout << "Вы сломали нож, и ушибли руку, но в этот пострадали не только вы...\n";
					cout << "На месте куда вы ударили появился екран с калавиатурой\n";
					cout << "На єкране мигает надпись (!ьлорап етидевВ)\n";
					cout << "Блин, что нужно ввести то ?\n";
					cin >> pas;
					m = 1;
					if (pas == "xol_linad" || pas == "XOL_LINAD" || pas == "Xol_linad") {
						system("cls");
						cout << "вау, дверь с грохотом открылась(похоже вы уже забыли что она ваш злейший враг здесь)\n";
						cout << "За дверью вы видете тропу, куда она ведёт?\n";
						cout << "Не долго думая вы решаете пойти по тропе наверх\n";
						cout << "Вы, вы в раю...\n";
						cout << "Что же это, вы чуствуете лёгкость и непринуждённость, похоже ваше страдание окончены...\n\n\n\n\n\n\n";
						cout << "Ну что, поздравляю, вы прошли игру на хорошую концовку, другие концовки есть в игре, их всего 3(я так думаю), надеюсь вам хоть чучуть понравилось играть в неё, я просрал 4 часа на создание этого\n";
						cout << "Создатель этого дерьма-Овсеюков Егор, дебил из 10 класса.";

						system("pause");
						exit(0);
					}
					else {
						system("cls");
						cout << "Похоже нужно узнать что отменя хочет єта шайтан машина(подсказка-нужно писать ВСЁ как там откуда вы пишете)\n";
						system("pause");
						cout << endl;
					}
				}

				if (ans == "q") {
					system("cls");
					cout << "\nВы вытераете руки, и со всей друри танене дверь за ручку...";
					cout << "Ну...Вы по крайней мере пытались...\n\n";
					b = 0;
					x = 1;
					system("pause");
					cout << endl;
				}
				if (ans == "w") {
					system("cls");
					cout << "\nВы берёте разбег, иии....\n";
					cout << "...\n....\n.....\n";
					cout << "вы чуть не сломали себе руку, да и похоже что вы единственый кто пострадал...\n\n";
					b = 0;
					x = 1;
					system("pause");
					cout << endl;
				}
				if (ans == "e") {
					system("cls");
					cout << "\nПохоже єто лучший вариант, НО СКОРО...\n\n";

					b = 1;
					o = 1;
					system("pause");
					cout << endl;

				}
			}
		}
		else if (ans == "q") {
			system("cls");
			while (b == 0) {
				cout << "Подойдя к окну вы видете что за окном хорошая погода(но это вам это не нужно, правда?)\n";
				cout << "Как бы там нибыло, окном это сложно назвать, это просто дыра в стене с железными прутьями\n";
				system("pause");
				cout << endl;
				cout << "q-вниметельния посмотреть в окно\n";
				cout << "w-попробывать потеребить прутья\n";
				cout << "e-кринуть СПАСИТЕ\n";

				cout << "r-вернутся на исходную\n\n";
				if (napilnik == 1) {
					cout << "t-попробывать выпилить прутья\n\n";
				}
				ans = " ";
				cin >> ans;
				cout << endl;
				if (ans == "t") {
					system("cls");
					if (vitaliiLox == 1) {
						cout << "Зачем пильть то чего уже нет, или вы пришли устроить напильнику похороны ?\n\n";

					}
					if (vitaliiLox == 0) {

						cout << "Вы начинаете пилить прутья\n";
						system("pause");
						cout << "...\n....\n.....\n";
						system("pause");
						cout << "Вы отпилили все прутья, но сломали напильник...\n";
						system("pause");
						cout << "Зато теперь виду из окна ничего не мешает...\n\n";
						cout << "(получен предмет-желеный колышок)\n\n";
						napilnik = 0;
						kolish = 1;
						vitaliiLox = 1;
						system("pause");
						cout << endl;
					}
				}
				if (ans == "q") {
					system("cls");
					cout << "Вы явно где-то в горах, под вами этажей 10-15\n\n";
					b = 0;
					c = 1;
					system("pause");
					cout << endl;

				}
				if (ans == "w") {
					system("cls");
					cout << "Потеребив прутья вы только удостоверелись что они намертво закреплены\n\n";
					b = 0;
					system("pause");
					cout << endl;
				}
				if (ans == "e") {
					system("cls");
					if (c == 1) {

						cout << "Крикнув, вы только удоставерелись что находетесь в горах, ехо пронзаент весь горизон\n";
						cout << "Ответа нет, вы только тратете время...\n\n";
						system("pause");
						cout << endl;
					}

					else {
						cout << "Ответа нет, вы только тратете время...\n\n";
						system("pause");
						cout << endl;
					}

				}
				if (ans == "r") {
					b = 1;
					o = 1;
				}
			}
		}
	}
	system("pause");
}

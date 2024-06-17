#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int vidas = 3;

void inicio();
void escolhaBiblioteca();
void escolhaCorredor();
void escolhaSalaAula();
void escolhaLabInformatica();
void escolhaSaida();
void escolhaEsconderijo();
void escolhaRefeitorio();
void escolhaSecretaria();
void escolhaAuditorio();

void verificarVidas() {
    if (vidas <= 0) {
        cout << "Voc� perdeu todas as suas vidas. Voc� sente o v�rus se espalhando pelo seu corpo e te transformando lentamente, fim de jogo." << endl;
        exit(0);
    }
}

int main() {

    setlocale(LC_ALL, "portuguese");
    srand(time(0));
    inicio();
    return 0;
}

void finalCura() {
    cout << "Parab�ns! Voc� encontrou a cura para o v�rus zumbi e salvou a humanidade. Fim de jogo." << endl;
    exit(0);
}

void inicio() {
    cout << "�ltimo Suspiro" << endl;
    cout << "Voc� � um aluno que ficou at� tarde na biblioteca fazendo um projeto de Algoritmos I." << endl;
    cout << "Ao sair da biblioteca, voc� percebe que algo estranho aconteceu: um apocalipse zumbi come�ou!" << endl;
    cout << "Agora voc� precisa sobreviver e tentar encontrar a cura para o v�rus zumbi." << endl;
    cout << "Voc� tem " << vidas << " vidas." << endl;
    cout << endl;

    escolhaBiblioteca();
}

void escolhaBiblioteca() {
    cout << "Voc� est� na biblioteca. O que voc� faz?" << endl;
    cout << "1. Sair da biblioteca e ir para o corredor" << endl;
    cout << "2. Procurar por um esconderijo seguro na biblioteca" << endl;

    int escolha;
    cin >> escolha;

    switch (escolha) {
        case 1:
            escolhaCorredor();
            break;
        case 2:
            cout << "Voc� encontrou um esconderijo seguro na biblioteca e decidiu esperar. No entanto, os zumbis eventualmente te encontram. Voc� perde uma vida." << endl;
            vidas--;
            verificarVidas();
            escolhaBiblioteca();
            break;
        default:
            cout << "Escolha inv�lida, tente novamente." << endl;
            escolhaBiblioteca();
            break;
    }
}

void escolhaCorredor() {
    cout << "Voc� est� no corredor. O que voc� faz?" << endl;
    cout << "1. Ir para a sala de aula mais pr�xima" << endl;
    cout << "2. Ir para o laborat�rio de inform�tica" << endl;
    cout << "3. Ir para a sa�da do pr�dio" << endl;
    cout << "4. Ir para o refeit�rio" << endl;
    cout << "5. Ir para a secretaria" << endl;
    cout << "6. Ir para o audit�rio" << endl;

    int escolha;
    cin >> escolha;

    switch (escolha) {
        case 1:
            escolhaSalaAula();
            break;
        case 2:
            escolhaLabInformatica();
            break;
        case 3:
            escolhaSaida();
            break;
        case 4:
            escolhaRefeitorio();
            break;
        case 5:
            escolhaSecretaria();
            break;
        case 6:
            escolhaAuditorio();
            break;
        default:
            cout << "Escolha inv�lida, tente novamente." << endl;
            escolhaCorredor();
            break;
    }
}

void escolhaSalaAula() {
    cout << "Voc� entrou na sala de aula e percebe que h� zumbis do lado de fora. O que voc� faz?" << endl;
    cout << "1. Esconder-se na sala de aula" << endl;
    cout << "2. Tentar sair e voltar para o corredor" << endl;

    int escolha;
    cin >> escolha;

    switch (escolha) {
        case 1:
            escolhaEsconderijo();
            break;
        case 2:
            escolhaCorredor();
            break;
        default:
            cout << "Escolha inv�lida, tente novamente." << endl;
            escolhaSalaAula();
            break;
    }
}

void escolhaLabInformatica() {
    cout << "Voc� est� no laborat�rio de inform�tica. Voc� v� alguns computadores ligados." << endl;
    cout << "1. Usar um computador para tentar pedir ajuda" << endl;
    cout << "2. Esconder-se no laborat�rio" << endl;
    cout << "3. Voltar para o corredor" << endl;

    int escolha;
    cin >> escolha;

    switch (escolha) {
        case 1:
            cout << "Voc� tenta usar um dos computadores, mas infelizmente, a conex�o com a internet caiu. Os zumbis te encontram e voc� perde uma vida." << endl;
            vidas--;
            verificarVidas();
            escolhaLabInformatica();
            break;
        case 2:
            cout << "Voc� encontra um lugar para se esconder no laborat�rio e decide esperar. No entanto, os zumbis eventualmente te encontram. Voc� perde uma vida." << endl;
            vidas--;
            verificarVidas();
            escolhaLabInformatica();
            break;
        case 3:
            escolhaCorredor();
            break;
        default:
            cout << "Escolha inv�lida, tente novamente." << endl;
            escolhaLabInformatica();
            break;
    }
}

void escolhaSaida() {
    cout << "Voc� est� pr�ximo � sa�da do pr�dio, mas h� v�rios zumbis bloqueando o caminho." << endl;
    cout << "1. Tentar sair discretamente" << endl;
    cout << "2. Procurar uma sa�da alternativa" << endl;

    int escolha;
    cin >> escolha;

    switch (escolha) {
        case 1:
            cout << "Voc� tenta sair discretamente, mas os zumbis te veem e te atacam. Voc� perde uma vida." << endl;
            vidas--;
            verificarVidas();
            escolhaSaida();
            break;
        case 2:
            cout << "Voc� encontra uma janela no primeiro andar e consegue escapar do pr�dio. No entanto, os zumbis te encontram do lado de fora e voc� perde uma vida." << endl;
            vidas--;
            verificarVidas();
            escolhaSaida();
            break;
        default:
            cout << "Escolha inv�lida, tente novamente." << endl;
            escolhaSaida();
            break;
    }
}

void escolhaEsconderijo() {
    cout << "Voc� encontrou um bom lugar para se esconder na sala de aula." << endl;
    cout << "1. Esperar at� que os zumbis v�o embora" << endl;
    cout << "2. Tentar sair e voltar para o corredor" << endl;

    int escolha;
    cin >> escolha;

    switch (escolha) {
        case 1:
            cout << "Voc� esperou pacientemente, mas os zumbis acabaram te encontrando. Voc� perde uma vida." << endl;
            vidas--;
            verificarVidas();
            escolhaEsconderijo();
            break;
        case 2:
            escolhaCorredor();
            break;
        default:
            cout << "Escolha inv�lida, tente novamente." << endl;
            escolhaEsconderijo();
            break;
    }
}

void escolhaRefeitorio() {
    cout << "Voc� entrou no refeit�rio. H� comida e �gua suficientes para se manter por um tempo, mas tamb�m h� zumbis l� fora." << endl;
    cout << "1. Esconder-se no refeit�rio" << endl;
    cout << "2. Tentar pegar comida e voltar para o corredor" << endl;

    int escolha;
    cin >> escolha;

    switch (escolha) {
        case 1:
            cout << "Voc� encontra um lugar seguro no refeit�rio e decide se esconder. No entanto, os zumbis eventualmente te encontram. Voc� perde uma vida." << endl;
            vidas--;
            verificarVidas();
            escolhaRefeitorio();
            break;
        case 2:
            cout << "Voc� tenta pegar comida, mas os zumbis te encontram e voc� perde uma vida." << endl;
            vidas--;
            verificarVidas();
            escolhaRefeitorio();
            break;
        default:
            cout << "Escolha inv�lida, tente novamente." << endl;
            escolhaRefeitorio();
            break;
    }
}

void escolhaSecretaria() {
    cout << "Voc� entrou na secretaria. H� documentos e telefones aqui." << endl;
    cout << "1. Usar um telefone para tentar pedir ajuda" << endl;
    cout << "2. Esconder-se na secretaria" << endl;
    cout << "3. Voltar para o corredor" << endl;

    int escolha;
    cin >> escolha;

    switch (escolha) {
        case 1:
            cout << "Voc� tenta usar o telefone, mas a linha est� morta. Os zumbis te encontram e voc� perde uma vida." << endl;
            vidas--;
            verificarVidas();
            escolhaSecretaria();
            break;
        case 2:
            cout << "Voc� encontra um lugar seguro na secretaria e decide se esconder. No entanto, os zumbis eventualmente te encontram. Voc� perde uma vida." << endl;
            vidas--;
            verificarVidas();
            escolhaSecretaria();
            break;
        case 3:
            escolhaCorredor();
            break;
        default:
            cout << "Escolha inv�lida, tente novamente." << endl;
            escolhaSecretaria();
            break;
    }
}

void escolhaAuditorio() {
    cout << "Voc� entrou no audit�rio. � um espa�o grande e aberto." << endl;
    cout << "1. Esconder-se no audit�rio" << endl;
    cout << "2. Tentar encontrar uma sa�da alternativa pelo audit�rio" << endl;
    cout << "3. Voltar para o corredor" << endl;

    int escolha;
    cin >> escolha;

    switch (escolha) {
        case 1:
            cout << "Voc� encontra um lugar para se esconder no audit�rio e decide esperar. No entanto, os zumbis eventualmente te encontram. Voc� perde uma vida." << endl;
            vidas--;
            verificarVidas();
            escolhaAuditorio();
            break;
        case 2:
            cout << "Voc� encontra uma sa�da alternativa e, ao explorar, descobre um laborat�rio secreto com a cura para o v�rus zumbi. Parab�ns, voc� encontrou a cura e salvou a humanidade!" << endl;
            finalCura();
            break;
        case 3:
            escolhaCorredor();
            break;
        default:
            cout << "Escolha inv�lida, tente novamente." << endl;
            escolhaAuditorio();
            break;
    }
}
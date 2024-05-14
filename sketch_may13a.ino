#define buzzerPin 8

void setup() {
  // Inicializa a comunicação serial
  Serial.begin(9600);
  
  // Define o pino do buzzer como saída
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Verifica se há dados disponíveis na porta serial
  if (Serial.available() > 0) {
    // Lê a entrada serial
    String input = Serial.readString();
    
    // Converte a entrada para código Morse
    String morseCode = textToMorse(input);
    
    // Transmite o código Morse pelo buzzer
    transmitMorse(morseCode);
  }
}

String textToMorse(String text) {
  String morseCode = "";
  for (int i = 0; i < text.length(); i++) {
    char c = toLowerCase(text.charAt(i));
    switch (c) {
      case 'a':
        morseCode += ".- ";
        break;
      case 'b':
        morseCode += "-... ";
        break;
      case 'c':
        morseCode += "-.-. ";
        break;
      case 'd':
        morseCode += "-.. ";
        break;
      case 'e':
        morseCode += ". ";
        break;
      case 'f':
        morseCode += "..-. ";
        break;
      case 'g':
        morseCode += "--. ";
        break;
      case 'h':
        morseCode += ".... ";
        break;
      case 'i':
        morseCode += ".. ";
        break;
      case 'j':
        morseCode += ".--- ";
        break;
      case 'k':
        morseCode += "-.- ";
        break;
      case 'l':
        morseCode += ".-.. ";
        break;
      case 'm':
        morseCode += "-- ";
        break;
      case 'n':
        morseCode += "-. ";
        break;
      case 'o':
        morseCode += "--- ";
        break;
      case 'p':
        morseCode += ".--. ";
        break;
      case 'q':
        morseCode += "--.- ";
        break;
      case 'r':
        morseCode += ".-. ";
        break;
      case 's':
        morseCode += "... ";
        break;
      case 't':
        morseCode += "- ";
        break;
      case 'u':
        morseCode += "..- ";
        break;
      case 'v':
        morseCode += "...- ";
        break;
      case 'w':
        morseCode += ".-- ";
        break;
      case 'x':
        morseCode += "-..- ";
        break;
      case 'y':
        morseCode += "-.-- ";
        break;
      case 'z':
        morseCode += "--.. ";
        break;
      case '1':
        morseCode += ".---- ";
        break;
      case '2':
        morseCode += "..--- ";
        break;
      case '3':
        morseCode += "...-- ";
        break;
      case '4':
        morseCode += "....- ";
        break;
      case '5':
        morseCode += "..... ";
        break;
      case '6':
        morseCode += "-.... ";
        break;
      case '7':
        morseCode += "--... ";
        break;
      case '8':
        morseCode += "---.. ";
        break;
      case '9':
        morseCode += "----. ";
        break;
      case '0':
        morseCode += "----- ";
        break;
      // Outros caracteres especiais
      case 'ä':
        morseCode += ".-.- ";
        break;
      case 'æ':
        morseCode += ".-.- ";
        break;
      case 'ą':
        morseCode += ".-.- ";
        break;
      case 'à':
        morseCode += ".--.- ";
        break;
      case 'å':
        morseCode += ".--.- ";
        break;
      case 'ç':
        morseCode += "-.-.. ";
        break;
      case 'ć':
        morseCode += "-.-.. ";
        break;
      case 'ĉ':
        morseCode += "-.-.. ";
        break;
      case 'š':
        morseCode += "---- ";
        break;
      case 'é':
        morseCode += "..-.. ";
        break;
      case 'ę':
        morseCode += "..-.. ";
        break;
      case 'è':
        morseCode += ".-..- ";
        break;
      case 'ñ':
        morseCode += "--.-- ";
        break;
      case 'ń':
        morseCode += "--.-- ";
        break;
      case 'ł':
        morseCode += ".-..- ";
        break;
      case 'ð':
        morseCode += "..--. ";
        break;
      case 'ĝ':
        morseCode += "--.-. ";
        break;
      case 'ĥ':
        morseCode += "---- ";
        break;
      case 'ĵ':
        morseCode += ".---. ";
        break;
      case 'ü':
        morseCode += "..-- ";
        break;
      case 'ż':
        morseCode += "--..-. ";
        break;
      case 'ź':
        morseCode += "--..-. ";
        break;
      case 'þ':
        morseCode += ".--.. ";
        break;
      case 'ä':
        morseCode += ".-.- ";
        break;
      case 'ö':
        morseCode += "---. ";
        break;
      case 'ø':
        morseCode += "---. ";
        break;
      case 'ú':
        morseCode += "..-- ";
        break;
      case 'ý':
        morseCode += "-.-- ";
        break;
      case 'œ':
        morseCode += "---. ";
        break;
      case 'ß':
        morseCode += "...--.. ";
        break;
      // Símbolos especiais
      case ' ': // Espaço
        morseCode += " ";
        break;
      case '·': // Ponto
        morseCode += "·-·-·- ";
        break;
      case ',': // Vírgula
        morseCode += "--··-- ";
        break;
      case '?': // Interrogação
        morseCode += "··--·· ";
        break;
      case '\'': // Apóstrofo
        morseCode += "·----· ";
        break;
      case '!': // Exclamação
        morseCode += "-·-·-- ";
        break;
      case '/': // Barra
        morseCode += "-··-· ";
        break;
      case '(': // Parêntese Esquerdo
        morseCode += "-·--· ";
        break;
      case ')': // Parêntese Direito
        morseCode += "-·--·- ";
        break;
      case '&': // E Comercial
        morseCode += "·-··· ";
        break;
      case ':': // Dois Pontos
        morseCode += "---··· ";
        break;
      case ';': // Ponto e Vírgula
        morseCode += "-·-·-· ";
        break;
      case '=': // Igual
        morseCode += "-···- ";
        break;
      case '+': // Mais
        morseCode += "·-·-· ";
        break;
      case '-': // Hífen
        morseCode += "-····- ";
        break;
      case '_': // Linha Baixa
        morseCode += "··--·- ";
        break;
      case '"': // Aspas
        morseCode += "·-··-· ";
        break;
      case '$': // Cifrão
        morseCode += "···-··- ";
        break;
      case '@': // Arroba
        morseCode += "·--·-· ";
        break;
      // Outros caracteres não mapeados
      default:
        // Caso o caractere não seja suportado, apenas ignore
        break;
    }
  }
  return morseCode;
}

void transmitMorse(String morse) {
  for (int i = 0; i < morse.length(); i++) {
    if (morse.charAt(i) == '.') {
      // Toca o buzzer por um curto período para representar um ponto
      digitalWrite(buzzerPin, HIGH);
      delay(100);
      digitalWrite(buzzerPin, LOW);
      delay(100);
    } else if (morse.charAt(i) == '-') {
      // Toca o buzzer por um período mais longo para representar um traço
      digitalWrite(buzzerPin, HIGH);
      delay(300);
      digitalWrite(buzzerPin, LOW);
      delay(100);
    } else if (morse.charAt(i) == ' ') {
      // Adiciona uma pausa entre caracteres
      delay(200);
    }
  }
}

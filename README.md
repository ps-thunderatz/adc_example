# ADC Example

Esse repositório contém um exemplo de como utilizar o ADC para fazer leituras.

Para melhor "visualizar" o resultado das conversões, utilizaremos as leituras para controlar a frequência de um buzzer. Antes de estudar esse exemplo, confira também o repositório [Buzzer Example](https://github.com/ps-thunderatz/buzzer_example).

## Descrição do cube e hardware

| Pino | Nucleo | Configuração | Função |
|:---  |:---    |:---          |:---    |
| PC0  | A5     | ADC1_IN6     | Leitura do potenciômetro |
| PA8  | D7     | TIM1_CH1     | Controlar o buzzer |

**Observações:**

* A polaridade do canal do timer foi invertida para ser usado com um transistor PNP no acionamento.

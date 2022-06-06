function calc() {
    
var textType = Node.textContent ? 'textContent' : 'innerText',
    
    num1 = parseFloat(document.getElementById('num1').value) || 0,
    num2 = parseFloat(document.getElementById('num2').value) || 0,
    
    result = document.getElementById('result');

switch (document.getElementById('op').value.replace(/\s/g,'')){
    
    case '+':
        result[textType] = num1 + num2;
        break;
    
    case '-':
        result[textType] = num1 - num2;
        break;
    case '*':
        result[textType] = num1 * num2;
        break;
    case '/':
        result[textType] = num1 / num2;
        break;

    default:
        result[textType] = 'Seriously? You wanted to try math with that operand? Now stop being silly.'
        break;
}
}
var start = Date.now();
var intervalID = setInterval(updateTime,500);

function updateTime() {

	var timerString = '';
	var secondsPassed = Math.floor((Date.now() - start) / 1000)
	var minutesPassed = Math.floor(secondsPassed / 60);
	var secondsRemainder = Math.floor(secondsPassed % 60);
	
	if (minutesPassed == 1) {
		timerString += minutesPassed + ' minute';
	} else if (minutesPassed > 1){
		timerString += minutesPassed + ' minutes';
	}
	
	if (minutesPassed >= 1 && secondsRemainder >= 1) {
		timerString += ' and ';
	}
	
	if (secondsPassed == 0) {
		timerString += secondsPassed + ' seconds';
	}
	
	if (secondsRemainder == 1) {
		timerString += secondsRemainder + ' second';
	} else if (secondsRemainder > 1){	
		timerString += secondsRemainder + ' seconds';
	}
	
	document.getElementById('timer').innerHTML = timerString;
}
var input = prompt("Enter input");
var lowCount = 0;
var upCount = 0;
var res = "";

    for(var i = 0; i < input.length; i++){
        if( input[i] == input[i].toUpperCase() ){
            upCount++;
        } else {
            lowCount++;
        }
    }

    if(lowCount === upCount){
        res = input.toLowerCase();
    } else if (lowCount > upCount){
        res = input.toLowerCase();
    } else {
        res = input.toUpperCase();
    }

    alert(res);


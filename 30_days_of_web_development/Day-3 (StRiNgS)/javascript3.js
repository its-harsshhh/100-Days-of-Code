function function1(){
    var x = document.getElementById("scroltxt").innerHTML;
    document.getElementById("scroltxt").innerHTML=x.toLowerCase();
}

function function2(){
    var y=document.getElementById("scroltxt").innerText;
    document.getElementById("scroltxt").innerHTML=y.toUpperCase();
}

function function3(){
    var z=document.getElementById("scroltxt");
     if (z.style.display === "none") {
       z.style.display = "block";
     } else {
       z.style.display = "none";
     }
}

 function function4(){
     var a=document.getElementById("scroltxt");
     a.textContent='';
    
    
 }

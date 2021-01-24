function load(){
	var bd=document.body;
	var p=document.createElement("p");
	var text=document.createTextNode("ahaya");
	p.style.color="blue";
	p.appendChild(text);
	bd.appendChild(p);
	var list=document.createElement("select");
	var tab=["bla1","bla2","bla3","bla4","bla5"];
	for(var i=0;i<tab.length;i++){
		var option=document.createElement("option");
		option.innerHTML=tab[i];
		list.appendChild(option);
	}
	bd.appendChild(list);


}
function affich(){
	var radio=document.getElementsByName('jcp');
	for(var i=0;i<radio.length;i++){
		if(radio[i].checked){
			alert(radio[i].value);
		}
	}
}
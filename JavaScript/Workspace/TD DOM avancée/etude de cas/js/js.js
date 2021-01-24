function afficher(){
	var nom=document.getElementById('nom').value;
	var prenom=document.getElementById('prenom').value;
	var des=document.getElementById('des').value;
	var image=document.getElementById('file').value;
	var section=document.getElementById('section');

	
	
	

	var article=document.createElement("article");
	var h2=document.createElement("h2");
	var description=document.createElement("p");
	var img=document.createElement("img");
	img.src=image;
	
	//alert(img.src);
	//img.alt="erreur ! ";

	var titre=document.createTextNode(nom+" "+prenom);
	var text=document.createTextNode(des);


	h2.appendChild(titre);
	description.appendChild(text);
	article.appendChild(img);
	article.appendChild(h2);
	article.appendChild(description);
	section.appendChild(article);
}
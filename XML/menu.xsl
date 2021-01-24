<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:output method="html" encoding="utf-8"/>
<xsl:template match="/">
<html>
	<head>
		<title>Exercice2</title>
		<style>
			body{
				background-color:#EBEBEB;
			}
			.titre{
				background-color:#158787;
				color:white;
				padding:4px;
			}
			.description{
				margin-left:20px;
				font-size:10pw;
			}
		</style>
	</head>
	<body>
		<xsl:for-each select="breackfast_menu/food">
		<div class="titre">
		<span style="font-weight:bold">
			<xsl:value-of select="name"/>
		</span>
		<xsl:value-of select="price"/>
		</div>
		<div class="description">
		<p>
			<xsl:value-of select="description"/>
			<span style="font-style:italic">
				<xsl:value-of select="calories"/> calories per serving
			</span>
		</p>
		</div>
		</xsl:for-each>
	</body>
</html>
</xsl:template>
</xsl:stylesheet>
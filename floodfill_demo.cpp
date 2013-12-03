4 6
010200
111030
110030
100033

/* Floodfill  */
bool validNode(newnode) {
	cond1 = inMatrix();
	cond2 = isFreeNode();
	return cond1 && cond2;
}

void floodfill(node) {
	c[node.x][node.y] = color;
	for (direction dir) {
		newnode = extend(node, dir);
		if (validNode(newnode))
			floodfill(newnode);
	}
}

char g[n][m];
int color = 0;
int c[n][m];
init();
readGraph();
for (i = 0...n)
  for (j = 0...m) {
  // c[i][j] == 0 && g[i][j] == '1'
	node = freeNode(); 
	color++;
	floodfill(node);
  }

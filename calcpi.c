#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char* argv[]) {
	FILE* fichier = NULL;

	/* arg1 = depart, arg2 = fin, arg3 = fichier */
	if(argc < 4) { printf("missing args <depart> <fin> <fichier>\n");return -1;}

	/*point de depart de l'intervalle du calcul*/ 
	int i = atoi(argv[1]);

	/*point d'arrivée de l'intervalle du calcul*/
	int m = atoi(argv[2]);

	fichier = fopen(argv[3],"wa");
	char str[256];
	double res = 0;

	/* int p = nombredeprocess;*/
	for(i; i < m ; i++) {
		res += (pow( -1 , i )) / (2 * i + 1);
	}
	/*le faire qu'à la fin on écrit la valeur intermédiaire de pi dans le fichier*/ 
	res = 4*res; 
	fprintf(fichier,"%.8lf\n",res);
	fclose(fichier);
	return 0;
}

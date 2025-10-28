int main() {

    //movimentos da torre
    char torredir, bispodir, rainhadir;
    int escolha, torrenum, bisponum, rainhanum;

    printf("Escolha qual peça irá mover: 1- Torre, 2- Bispo, 3- Rainha");
    scanf("%i", escolha);

    switch(escolha){
        case 1: 
        printf("Em qual direção irá mover a peça? N, L, S ou O");
        scanf("%c", torredir);
        printf("Por quantas casas moverá a peça?");
        scanf("%i", torrenum);
        for (int i = 0; i < torrenum; i++){
            printf(torredir);
        }

        case 2: 
        printf("Em qual direção irá mover a peça? NE, SE, SO ou NO");
        scanf("%c", bispodir);
        printf("Por quantas casas moverá a peça?");
        scanf("%i", bisponum);
        for (int i = 0; i < bisponum; i++){
            printf(bispodir);
        }

        case 3: 
        printf("Em qual direção irá mover a peça? N, NE, L, SE, S, SO, O ou NO");
        scanf("%c", rainhadir);
        printf("Por quantas casas moverá a peça?");
        scanf("%i", rainhanum);
        for (int i = 0; i < rainhanum; i++){
            printf(rainhadir);
        }
    }
}
int main() {

    //movimentos da torre
    char torredir, bispodir, rainhadir, cavalodir;
    int escolha, torrenum, bisponum, rainhanum;

    printf("Escolha qual peça irá mover: 1- Torre, 2- Bispo, 3- Rainha");
    scanf("%i", escolha);

    switch(escolha){
        case 1: 
        printf("Em qual direção irá mover a Torre? N, L, S ou O");
        scanf("%c", torredir);
        printf("Por quantas casas moverá a Torre?");
        scanf("%i", torrenum);
        for (int i = 0; i < torrenum; i++){
            printf(torredir);
        }

        case 2: 
        printf("Em qual direção irá mover o Bispo? NE, SE, SO ou NO");
        scanf("%c", bispodir);
        printf("Por quantas casas moverá a Bispo?");
        scanf("%i", bisponum);
        for (int i = 0; i < bisponum; i++){
            printf(bispodir);
        }

        case 3: 
        printf("Em qual direção irá mover a Rainha? N, NE, L, SE, S, SO, O ou NO");
        scanf("%c", rainhadir);
        printf("Por quantas casas moverá a Rainha?");
        scanf("%i", rainhanum);
        for (int i = 0; i < rainhanum; i++){
            printf(rainhadir);
        }

        case 4: 
        printf("Em qual direção irá mover o Cavalo? NE, SE, SO ou NO");
        scanf("%c", cavalodir);
        
        if (cavalodir == "NE"){
        for (int i = 0; i < 3; i++){
            printf("N");   
        }
        printf("E");
        }

        if (cavalodir == "SE"){
        for (int i = 0; i < 3; i++){
            printf("S");   
        }
        printf("E");
        }
        if (cavalodir == "SO"){
        for (int i = 0; i < 3; i++){
            printf("S");   
        }
        printf("O");
        }
        if (cavalodir == "NO"){
        for (int i = 0; i < 3; i++){
            printf("N");   
        }
        printf("O");
        }
    }
    return 0;
}
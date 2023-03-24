void printMaze()
{
    cout << "###############################" << endl;
    cout << "#                             #" << endl;
    cout << "#                             #" << endl;
    cout << "#                             #" << endl;
    cout << "#                             #" << endl;
    cout << "#                             #" << endl;
    cout << "#                             #" << endl;
    cout << "#                             #" << endl;
    cout << "#                             #" << endl;
    cout << "#                             #" << endl;
    cout << "#                             #" << endl;
    cout << "#                             #" << endl;
    cout << "#                             #" << endl;
    cout << "###############################" << endl;
}
void printEnemy()
{
    gotoxy(enemyX, enemyY);
    for (int index 0; index < 6; index++)
    {
        cout << enemy1[index];
    }
    gotoxy(enemyX, enemyY + 1);
    for (int index = 0; index < 6; index++)
    {
        cout << enemy2[index];
    }
    gotoxy(enemyX, enemyY + 2);
    for (int index = 0; index < 6; index++)
    {
        cout << enemy3[index];
    }
    gotoxy(enemyX, enemyY + 3);
    for (int index = 0; index < 6; index++)
}
cout << enemy4[index];


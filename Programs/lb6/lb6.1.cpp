  #include <iostream> 

     

    #include <string.h> 

     

    #include <locale.h> 

     

    #include <string> 

     

    using namespace std; 
     

    int main() 

     

    { 

     

    setlocale(LC_ALL, "Ukrainian"); 

     

    string str_pib; 

     

    char pib[50]; 

     

    char bat[50]; 

     

    int a = 0, n = 0, n2 = 0, x = 0; 

     

    bool c = false; 

     

    cout << "Pravul6no vvedit6 vashe PIB vuk-chu eng." << endl; 

     

    cin.getline(pib, 50); 

     

    for (int i = 0; i < 50; i++) 

     

    { 

     

    if (pib[i] == 'a' || pib[i] == 'A') 

     

    a++; 

     

    } 

     

    for (int i = 2; i < 50; i++) 

     

    { 

     

    if (isupper(pib[i]) == true) 

     

    { 

     

    c = true; 

     

    n = i; 

     

    }; 

     

    if (c == true) break; 

     

    } 

     

    c = false; 

     

    for (int i = n + 1; i < 50;i++) 

     

    { 

     

    if (isupper(pib[i]) == true) 

     

    { 

     

    c = true; 

     

    n2 = i; 

     

    } 

     

    if (c == true) break; 

     

    } 

     

    for (int i = n2; i < 50; i++) 

     

    { 

     

    bat[x] = pib[i]; 

     

    x++; 

     

    } 

     

    str_pib = pib; 

     

    int pos1 = str_pib.find(" ", 2); 

     

    int pos2 = str_pib.find(" ", pos1 + 1); 

     

    string str_name = str_pib.substr(pos1 + 1, pos2 - pos1); 

     

    int n_name = str_name.length(); 

     

    char ppp = '!'; 

     

    str_pib.push_back(ppp); 

     

    int pos3 = str_pib.find("!", pos2); 

     

    str_pib.erase(pos3, 1); 

     

    string str_last_name = str_pib.substr(pos2 + 1, pos3-pos2); 

     

    cout << endl; 

     

    cout << "Vashe PIB = " << pib << endl; 

     

    cout << "Dovzuna ryadka = " << strlen(pib) << endl; 

     

    cout << "Kil6kist6 bykv A/a = " << a << endl; 

     

    cout << endl; 

     

    cout << "Ind-ne zavdannya, vukonane rozglyadayu4u \n stroku, yak masuvy sumvoliv:" << endl; 

     

    cout << "Ki-t6 sumvoliv v vashomy imeni = " << ((n2 - n) - 1) << endl; 

     

    cout << "Vashe pobat6kovi = " << bat << endl; 

     

    cout << endl; 

     

    cout << "In-ne zavdannya, vukonani z dopomogoyu vuk-nnya \n da ryadka standartnuh fynkciy:" << endl; 

     

    cout << "Kil6kist6 sumvoliv v vashomy imeni = " << n_name - 1 << endl; 

     

    cout << "Vashe pobatkovi = " << str_last_name << endl; 

     

    

     

    return 0; 

     

    } 

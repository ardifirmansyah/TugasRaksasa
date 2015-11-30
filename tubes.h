#ifndef TUBES_H_INCLUDED
#define TUBES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>

using namespace std;

typedef struct ElmUser *adruser;
typedef struct ElmStatus *adrstatus;
typedef struct ElmTag *adrtag;

struct ElmUser {
    int iduser;
    string username,password;
    adrstatus status;
    adruser next;
};

struct ElmStatus {
    int idstatus;
    string info;
    int like;
    adrtag tag;
    adrstatus next;
};

struct ElmTag {
    int iduser;
    adrtag next;
};

struct socmed {
    adruser first;
};

void add_user(socmed &s, adruser userbaru);
bool userexist(socmed s, string u_name);
adruser alokasiUser(int id, string username, string password);
adrstatus alokasiStatus(int id, string info);
adrtag alokasiTag(int id);

#endif // TUBES_H_INCLUDED

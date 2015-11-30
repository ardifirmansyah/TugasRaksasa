#include "tubes.h"

adruser alokasiUser(int id, string username, string password){
    adruser p = new ElmUser;
    p->username = username;
    p->password = password;
    p->iduser = id;
    p->next = NULL;
    p->status = NULL;
    return p;
};

adrstatus alokasiStatus(int id, string info){
    adrstatus p = new ElmStatus;
    p->idstatus = id;
    p->info = info;
    p->like = 0;
    p->tag = NULL;
    p->next = NULL;
    return p;
};

adrtag alokasiTag(int id){
    adrtag p = new ElmTag;
    p->iduser = id;
    p->next = NULL;
    return p;
};

void add_user(socmed &s, adruser userbaru){
    if (userexist(s,userbaru->username)){               //cek jika user sudah ada
        cout << "User sudah ada!";
    }
    else {
        if (s.first==NULL){                             //jika list user masih kosong
            s.first = userbaru;
        }
        else {
            userbaru->next = s.first;
            s.first = userbaru;
        }
    }
};

bool userexist(socmed s, string u_name){
    adruser p = s.first;
    adruser revalue;
    if (p==NULL){
        revalue = NULL;
    }
    else {
        while (p!=NULL){
            if (u_name==p->username){
                break;
            }
            else {
                p = p->next;
            }
        }
        revalue = p;
    }
    if (revalue!=NULL){
        return true;
    }
    else {
        return false;
    }
};

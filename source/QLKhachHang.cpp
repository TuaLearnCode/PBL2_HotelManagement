#include "./header/QLKhachHang.h"
QLKhachHang::QLKhachHang() {

}

QLKhachHang::~QLKhachHang() {

}


void QLKhachHang::themKhachHang(KhachHang) {

}

KhachHang *QLKhachHang::timKiemKhachHang(string ID) {
    Node<KhachHang> *p = DSKH.getHead()->next;
    while(p != DSKH.getHead()) {
        if(p->data.getIDKhachHang() == ID) return &p->data;
        p = p->next;
    }
}

void QLKhachHang::suaThongTin(string) {

}

void QLKhachHang::xoaKhachHang(KhachHang) {

}

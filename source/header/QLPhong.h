#ifndef QLPHONG_H
#define QLPHONG_H
#include "Phong.h"
#include "LinkedList.h"
class QLPhong {
    LinkedList<Phong> DSP; // Danh sach phong
public:
    QLPhong();
    ~QLPhong();
    // cân nhắc cái addrangephong ->QLKhachSan
    int getSoLuongKhach(string);
    void AddRangePhong(string); // đọc dữ liệu đầu vào và trả về danh sách phòng
    void themPhong(Phong);
    void xoaPhong(Phong);
    void suaThongTin(string);

    Phong *timKiemPhong(string);
    Phong nhapThongTin();
    Phong timPhong(time_t, time_t);
    LinkedList<Phong> &getDanhSachPhong();
    Node<Phong> *getHead();
};
#endif
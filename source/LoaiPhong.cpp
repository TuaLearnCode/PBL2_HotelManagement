#include "./header/LoaiPhong.h"
#include <bits/stdc++.h>
LoaiPhong::LoaiPhong(){
    this->loaiPhong = "";
    this->loaiGiuong = 0;
    this->soLuongKhach = 0;
    this->dienTich = 0;
    this->giaPhong = 0;
    this->moTaPhong = "";
}

LoaiPhong::LoaiPhong(string LoaiPhong, int LoaiGiuong, int SoLuongKhach, int DienTich, int GiaPhong, string MoTaPhong)
{
    this->loaiPhong = LoaiPhong;
    this->loaiGiuong = LoaiGiuong;
    this->soLuongKhach = SoLuongKhach;
    this->dienTich = DienTich;
    this->giaPhong = GiaPhong;
    this->moTaPhong = MoTaPhong;
}

LoaiPhong::LoaiPhong(const LoaiPhong& other){
    this->loaiPhong = other.loaiPhong;
    this->loaiGiuong = other.loaiGiuong;
    this->soLuongKhach = other.soLuongKhach;
    this->dienTich = other.dienTich;
    this->giaPhong = other.giaPhong;
    this->moTaPhong = other.moTaPhong;

}
LoaiPhong::~LoaiPhong() {

}

// GET
string LoaiPhong::getLoaiPhong() const {
      return this->loaiPhong;
}

int LoaiPhong::getLoaiGiuong() const {
    return this->loaiGiuong;
}

int LoaiPhong::getSoLuongKhach() const {
    return this->soLuongKhach;

}

int LoaiPhong::getDienTich() const {
    return this->dienTich;
}

int LoaiPhong::getGiaPhong() const {
    return this->giaPhong;
}

string LoaiPhong::getMoTaPhong() const {
    return this->moTaPhong;
}


//SET
void LoaiPhong::setLoaiPhong(string LP){
    this->loaiPhong = LP;
}

void LoaiPhong::setLoaiGiuong(int LG) {
    this->loaiGiuong = LG;
}

void LoaiPhong::setSoLuongKhach(int SLK) {
    this->soLuongKhach = SLK;
}

void LoaiPhong::setDienTich(int DT) {
    this->dienTich = DT;
    
}

void LoaiPhong::setGiaPhong(int GP) {
    this->giaPhong = GP;

}

void LoaiPhong::setMoTaPhong(string MTP) {
    this->moTaPhong = MTP;
}

//NEW LOAIPHONG
void LoaiPhong::NhapLoaiPhongMoi(){
    cout << "Nhap Loai Phong: ";
    this->loaiPhong = Utils::nhap(5,MAX_IDLOAIPHONG+1);

    cout << "Nhap Loai Giuong: ";
    this->loaiGiuong =  stoi(Utils::nhap(1,3));

    cout << "Nhap So Luong Khach: ";
    this->soLuongKhach = stoi(Utils::nhap(1,2)); // tối đa 8 người -> 2 ký tự + 1 ký tự /0

    cout << "Nhap Dien Tich: ";
    this->dienTich = stoi(Utils::nhap(1,3));

    cout << "Nhap Gia Phong: ";
    this->giaPhong = stoi(Utils::nhap(1,8));

    cout << "Nhap Mo Ta Phong: ";
    this->moTaPhong = Utils::nhap(3,150);
    return;
}

//MENU
void LoaiPhong::menuCapNhat(){
    cout << "1. Sua Loai Giuong: " << endl;
    cout << "2. Sua So Luong Khach: " << endl;
    cout << "3. Sua Dien Tich: " << endl;
    cout << "4. Sua Gia: " << endl;
    cout << "5. Sua Mo Ta Phong: " << endl;
    cout << "6. Thoat Chinh Sua Loai Phong!" << endl;
    cout << "Hay Nhap Lua Chon: ";
}
// HÀM SỬA THÔNG TIN LOẠI PHÒNG (loaiphong.txt)
void LoaiPhong::capNhatThongTin() 
{
    //Xử lý từng lựa chọn của người dùng
    int choice;
    int temp;
    string tempStr;
    while (true)
    {
        menuCapNhat();
        choice = stoi(Utils::nhap(1,2));
        switch(choice)
        {
            case 1: 
                {
                    cout << "Nhap Loai Giuong(1/2/12): ";
                    tempStr = (Utils::nhap(1,3));
                    if (tempStr == "Error"){
                        cout << "Error : loi me roi\n";
                        system("pause");
                        system("cls");
                        break;
                    }
                    temp = stoi(tempStr);
                    this->setLoaiGiuong(temp);
                    cout << "Cap Nhat Loai Giuong Thanh Cong!" << endl;
                    system("pause");
                    system("cls");
                    break;
                }
            case 2: 
                {
                    cout << "Nhap So Luong Khach: ";
                    tempStr = (Utils::nhap(1,2));
                    if (tempStr == "Error"){
                        cout << "Error : loi me roi\n";
                        system("pause");
                        system("cls");
                        break;
                    }
                    temp = stoi(tempStr);
                    this->setSoLuongKhach(temp);
                    cout << "Cap Nhat So Luong Khach Thanh Cong!";
                    system("pause");
                    system("cls");
                    break;
                }
            case 3: 
                {
                    cout << "Nhap Dien Tich: ";
                    tempStr = (Utils::nhap(1,4));
                    if (tempStr == "Error"){
                        cout << "Error : loi me roi\n";
                        system("pause");
                        system("cls");
                        break;
                    }
                    temp = stoi(tempStr);
                    this->setDienTich(temp);
                    cout << "Cap Nhat Dien Tich Thanh Cong!";
                    system("pause");
                    system("cls");
                    break;
                }
            case 4: 
                {
                    cout << "Nhap Gia: ";
                    tempStr = (Utils::nhap(1,9));
                    if (tempStr == "Error"){
                        cout << "Error : loi me roi\n";
                        system("pause");
                        system("cls");
                        break;
                    }
                    temp = stoi(tempStr);
                    this->setGiaPhong(temp);
                    cout << "Cap Nhat Gia Thanh Cong!";
                    system("pause");
                    system("cls");
                    break;
                }
            case 5: 
                {
                    cout << "Nhap Mo Ta";
                    tempStr = (Utils::nhap(6,100));
                    if (tempStr == "Error"){
                        cout << "Error : loi me roi\n";
                        system("pause");
                        system("cls");
                        break;
                    }
                    this->setMoTaPhong(tempStr);
                    cout << "Cap Nhat Mo Ta Phong Thanh Cong!";
                    system("pause");
                    system("cls");
                    break;
                }
            case 6: 
                {
                    cout << "Ban dang thoat khoi chuc nang chinh sua loai phong......" << endl;
                    return ;
                }
            default: 
                {
                    system("pause");
                    system("cls");
                    cout << "Lua chon khong hop le." << endl;
                    cout<< "Vui long chon lai!" << endl;
                    break;
                }
        }
    }
}

// HÀM ĐỊNH DẠNG CHO TRƯỜNG MÔ TẢ ( ý là chưa biết bỏ mô nên để tạm đây keke)
void wrapText(const string& text, int width, int indent) {
    istringstream iss(text);
    string word;
    string line;
    bool firstLine = true;

    while (iss >> word) {
        if (line.length() + word.length() + 1 > width) {
            if (!firstLine) cout << setw(indent) << ""; // Thụt lề cho các dòng sau
            cout << line << endl;
            line.clear();
            firstLine = false;
        }
        line += (line.empty() ? "" : " ") + word;
    }
    if (!line.empty()) {
        if (!firstLine) cout << setw(indent) << "";
        cout << line << endl;
    }
}

// XUAT THONG TIN
void LoaiPhong::xuatThongTin(){
    cout << left << setw(16) << loaiPhong << setw(14) << loaiGiuong << setw(13) << soLuongKhach
    << setw(9) << dienTich << setw(13) << giaPhong; 
    wrapText(moTaPhong, 40, 65);
    cout << string(105, '-') << endl;
}   


ostream& operator<<(ostream& out, const LoaiPhong& LP) {
    out << "Loai Phong: " << LP.loaiPhong << endl;
    out << "Loai Giuong: " << LP.loaiGiuong << endl;
    out << "So Luong Khach: " << LP.soLuongKhach << endl;
    out << "Dien Tich: " << LP.dienTich << endl;
    out << "Gia: " << LP.giaPhong << endl;
    out << "Mo ta Phong" << LP.moTaPhong << endl;
    return out;
}
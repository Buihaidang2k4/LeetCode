// Viết chương trình nhập vào từ bàn phím danh sách n tên các tỉnh thành hoặc thành phố , sắp xếp danh sách
// theo vần ABC(tăng dần). Đưa ra màn hình danh sách tên ban đầu và danh sách sau khi sắp xếp 
// 
#include <iostream>
using namespace std;
const int MAX_SIZE = 100;

void nhapDanhSach(string danhSach[],int &n){
	 cout<<"Nhap n: "; 
	 cin>>n;
	 cin.ignore(); // Đọc bỏ kí tự '\n' trong bộ nhớ đệm	for (int i = 0; i < n; ++i)
	for(int i=0;i<n;i++)
	{
		cout << "Nhap chuoi thu " << i + 1 << ": ";
		getline(cin,danhSach[i]);
	}
}

void sapXep(string danhSach[],int n){
	 for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            // So sánh chuỗi sử dụng toán tử nhỏ hơn
            if (danhSach[j] > danhSach[j + 1]) {
                swap(danhSach[j], danhSach[j + 1]);
            }
        }
    }
}


void xuatDanhSach(const string danhSach[], int n) {
    // In danh sách đã nhập
    cout << "Danh danh sach da nhap:\n";
    for (int i = 0; i < n; ++i) {
     	
        cout <<"a["<<i<<"]= "<< danhSach[i] << endl;
    }
}


int main()
{
	string a[MAX_SIZE];
	int n;
	nhapDanhSach(a,n);
	xuatDanhSach(a,n);

	cout<<"DS sau khi sap xep: "; 
	sapXep(a,n);
	xuatDanhSach(a,n);



	cout<<endl;
	return 0;
}

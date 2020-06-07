#include<iostream>
#include<string>
#include<fstream>
using namespace std;
struct Node{
	int Key;
	Node* pNext;
};

struct SanPham{
	string MaSP;
	string TenSP;
	string NgayNhap;
	int SoLuong;
};
struct HangTon{
	string MaSP;
	string TenSP;
	int NgayNhap;
};
struct PhieuDoanhThu{
	string MaPhieu;
	string Kho;
	string MaSP;
	string Thang;
	int SoDonHang;
	SanPham SP[1000];
	int DoanhThu;

};
struct NodeSP{
	SanPham Key;
	NodeSP* pNext;
};
struct NodeHT{
	HangTon Key;
	NodeHT* pNext;
};
struct NodePDT{
	PhieuDoanhThu Key;
	NodePDT* pNext;
};

//H?m Tao node
NodeSP* CreateNodeSP (NodeSP & pHead,SanPham SP)
{
	NodeSP* pNode;
	pNode = new NodeSP;
	if(pNode==NULL)
		return NULL;
	pNode-> Key = SP;
	pNode->pNext = NULL;
	return pNode;
}

NodeHT* CreateNodeHT (NodeHT & pHead,HangTon HT)
{
	NodeHT* pNode;
	pNode = new NodeHT;
	if(pNode==NULL)
		return NULL;
	pNode-> Key = HT;
	pNode->pNext = NULL;
	return pNode;
}

NodePDT* CreateNodePDT (NodePDT & pHead,PhieuDoanhThu PDT)
{
	NodePDT* pNode;
	pNode = new NodePDT;
	if(pNode==NULL)
		return NULL;
	pNode-> Key = PDT;
	pNode->pNext = NULL;
	return pNode;
}
//ham them node vao dau danh sach
bool addHeadSP(NodeSP* &pHead,SanPham SP)
{
	NodeSP* pNode;
	pNode = pHead;
	if(pNode==NULL);
		return false;
	if(pHead==NULL)
		pHead=pNode;
	else
	{
		pNode->pNext=pHead;
		pNode=pHead;
	}
	return true;
}

bool addHeadHT(NodeHT* &pHead, HangTon HT)
{
	NodeHT* pNode;
	pNode = pHead;
	if(pNode==NULL);
		return false;
	if(pHead==NULL)
		pHead=pNode;
	else
	{
		pNode->pNext=pHead;
		pNode=pHead;
	}
	return true;
}

bool addHeadPDT(NodePDT* &pHead, PhieuDoanhThu PDT)
{
	NodePDT* pNode;
	pNode = pHead;
	if(pNode==NULL);
		return false;
	if(pHead==NULL)
		pHead=pNode;
	else
	{
		pNode->pNext=pHead;
		pNode=pHead;
	}
	return true;
}

//nhap San Pham
void InputSP (SanPham &SP)
{
	cin.ignore();
	cout<<"\nMa San Pham:";
	getline(cin,SP.MaSP);
	cin.ignore();
	cout<<"\nTen San Pham:";
	getline(cin,SP.TenSP);
	cin.ignore();
	cout<<"\nNgay Nhap:";
	getline(cin,SP.NgayNhap);
	cin.ignore();
	cout<<"\nSo Luong:";
	cin>>SP.SoLuong;
}

void InputHT (HangTon &HT)
{
	cout<<"\nMa San Pham:";
	getline(cin,HT.MaSP);
	cout<<"\nTen San Pham:";
	getline(cin,HT.TenSP);
	cout<<"\n..Ngay Nhap:";
	cin>>HT.NgayNhap;
}

void InputPDT (PhieuDoanhThu &PDT)
{
cout<<"\nMa Phieu:";
	getline(cin,PDT.MaPhieu);
	cout<<"\nKho:";
	getline(cin,PDT.Kho);
	cout<<"\nMa San Pham:";
	getline(cin,PDT.MaSP);
	cout<<"\nThang:";
	cin>>PDT.Thang;
	cout<<"\nSo Don Hang:";
	cin>>PDT.SoDonHang;
	cout<<"\nDanh Sach San Pham:";
	for(int i=0;i<PDT.SoDonHang;i++)
	{
		cout<<"\n..Nhap San Pham Thu:"<<i+1<<endl;
		InputSP(PDT.SP[i]);
	}
	PDT.DoanhThu = 0;
	for(int i=0;i<PDT.SoDonHang;i++)
	{
		PDT.DoanhThu += PDT.SP[i].SoLuong*30000;
	}

}
//ham nhap danh sach
void NhapDSSP(NodeSP* &pHead)
{

	int n;
	SanPham SP;

	cout<<"\n..Nhap So Luong Hoc Sinh n = ";
	cin>>n;
	for(int i = 0;i < n;i++)
	{
		cout<<"\n..Nhap Thong Tin Hoc Sinh Thu:"<<i+1<<endl;

		InputSP(SP);
		addHeadSP(pHead,SP);
	}
}

void NhapDSHT(NodeHT* &pHead)
{

	int n;
	HangTon HT;

	cout<<"\nNhap So Luong Hang Ton n = ";
	cin>>n;
	for(int i = 0;i < n;i++)
	{
		cout<<"\nNhap Thong Tin Hang Ton Thu:"<<i+1<<endl;

		InputHT(HT);
		addHeadHT(pHead,HT);
	}
}

void NhapDSPDT(NodePDT* &pHead)
{
	cout<<"\n..Nhap So Luong Phieu Doanh Thu n = ";
	int n;
	PhieuDoanhThu PDT;
	cin>>n;
	for(int i = 0;i < n;i++)
	{
		cout<<"\n..Nhap Thong Tin Phieu Doanh Thu Thu:"<<i+1<<endl;
		InputPDT(PDT);
		addHeadPDT(pHead,PDT);
	}
}

//ham in thong tin
void OutputSP(SanPham SP)
	{
		cout<<SP.MaSP<<"t"<<SP.TenSP<<"t"<<SP.NgayNhap<<"t"<<SP.SoLuong<<"t"<<endl;
}

void OutputHT(HangTon HT)
	{
		cout<<HT.MaSP<<"t"<<HT.TenSP<<"t"<<HT.NgayNhap<<endl;
}

void OutputPDT(PhieuDoanhThu PDT)
{
	cout<<"HOI DONG QUAN TRI CTY BAN MAI\n";
	cout<<" SHOP QUAN AO BAN MAI\n";
	cout<<"\n";
	cout<<"							PHIEU DOANH THU					\n";
	cout<<"Ma Phieu"<<PDT.MaPhieu<<endl;
	cout<<"Kho"<<PDT.Kho<<endl;
	cout<<"Hang Ton"<<PDT.MaSP<<endl;
	cout<<"Thang"<<PDT.Thang<<endl;
	cout<<"So Don Hang"<<PDT.SoDonHang<<endl;
	cout<<"							Danh Sach Hoc Sinh					\n";
	for(int i = 0;PDT.SP;i++)
	{
		OutputSP(PDT.SP[i]);
	}
	cout<<"							Thanh Tien"<<PDT.DoanhThu<<endl;

}

//ham ghi thong tin xuong file
void GhiSP(SanPham SP ,ofstream &fout)
{
	fout<<SP.MaSP<<","<<SP.TenSP<<","<<SP.NgayNhap<<","<<SP.SoLuong<<endl;
}


void GhiHT(HangTon HT , ofstream &fout)
{
	fout<<HT.MaSP<<","<<HT.TenSP<<","<<HT.NgayNhap<<endl;
}

void GhiPHT(PhieuDoanhThu PDT, ofstream &fout)
{
	fout<<PDT.MaPhieu<<","<<PDT.MaSP<<","<<PDT.Kho<<","<<PDT.SP<<","<<PDT.SoDonHang<<","<<PDT.DoanhThu;
	for(int i = 0; i , PDT.SP; i++)
	{
		GhiSP(PDT.SP[i],fout);
	cout<<";";
	}
}

//ham ghi danh sach
void GhiDSSP(NodeSP* pHead , ofstream &fout)
{
	NodeSP*pNode;
	pNode=pHead;
	while(pNode->pNext = NULL)
	{
		pNode=pNode -> pNext;
	}
}

void GhiDSHT(NodeHT* pHead , ofstream &fout)
{
	NodeHT*pNode;
	pNode=pHead;
	while(pNode->pNext = NULL)
	{
		pNode=pNode -> pNext;
	}
}

void GhiDSPDT(NodePDT* pHead , ofstream &fout)
{
	NodePDT*pNode;
	pNode=pHead;
	while(pNode->pNext = NULL)
	{
		pNode=pNode -> pNext;
	}
}
//x?a phan tu dau danh sach
void XoaSP(Node* &pHead)
{
	Node* pNode;
	while(pHead!=NULL);
	{
		pNode = pHead;
		pHead = pHead->pNext;
		delete pHead;
	}
	pHead =NULL;
}

void XoaHT(Node* &pHead)
{
	Node* pNode;
	while(pHead!=NULL);
	{
		pNode = pHead;
		pHead = pHead->pNext;
		delete pHead;
	}
	pHead =NULL;
}

void XoaPDT(Node* &pHead)
{
	Node* pNode;
	while(pHead!=NULL);
	{
		pNode = pHead;
		pHead = pHead->pNext;
		delete pHead;
	}
	pHead =NULL;
}

//x?a san pham cuoi danh sach
void XoaCuoiSP(Node* &pLast)
{
	Node* pNode;
	while(pLast!=NULL);
	{
		pNode = pLast;
		pLast = pLast->pNext;
		delete pLast;
	}
	pLast =NULL;
}
void XoaCuoiHT(Node* &pLast)
{
	Node* pNode;
	while(pLast!=NULL);
	{
		pNode = pLast;
		pLast = pLast->pNext;
		delete pLast;
	}
	pLast =NULL;
}
void XoaCuoiPDT(Node* &pLast)
{
	Node* pNode;
	while(pLast!=NULL);
	{
		pNode = pLast;
		pLast = pLast->pNext;
		delete pLast;
	}
	pLast =NULL;
}

//ham tim kiem thong tin san pham theo ma

void SeachMaSP(Node*phead,string MaSP )
{
    	NodeSP* pNode, *pResult = NULL;
	pNode = pNode;
	while (pNode->pNext!=NULL);
	{
		if(pNode->Key.MaSP.compare(MaSP)==0)
		{
			pResult=pNode;
		return;
		}
	}
	return ;
}
//tim kiem hang ton theo ten san pham
void SeachHT(Node*phead,string TenSP )
{
    	NodeHT* pNode, *pResult = NULL;
	pNode = pNode;
	while (pNode->pNext!=NULL);
	{
		if(pNode->Key.TenSP.compare(TenSP)==0)
		{
			pResult=pNode;
		return;
		}
	}
	return ;
}
int main(){
    printf("\n==Tao 1 danh sach lien ket==");
    Node Head = Input();
    Traverser(Head);

    printf("\n==Thu them 1 phan tu ==");
    Head = AddAt(head, 100, 2);
    Traverser(head);

    printf("\n==Thu xoa 1 phan tu ==");
    Head = DelAt(Head, 1);
    Traverser(Head);

    printf("\n==Thu tim kiem 1 phan tu ==");
    int index = Search(Head, 5);
    printf("\nTim thay tai chi so %d", index);


}

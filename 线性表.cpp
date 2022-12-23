//#include<iostream>
//using namespace std;
//#define add_size 10
//#define initsize 100
//
//typedef struct List {
//	int* data;
//	int len;
//	int max_size;
//};
//
//void initList(List&L)
//{
//	L.data =(int*)malloc(initsize * sizeof(int));
//	L.len = 0;
//	L.max_size = initsize;
//}
//
//void add_elem(List& L,int elem)
//{
//	while (L.len+1 >= L.max_size)
//	{
//		L.data = (int*)realloc(L.data, (L.max_size+1 + add_size) * sizeof(int));
//		L.max_size += add_size;
//	}
//	L.len += 1;
//	L.data[L.len] = elem;
//	//cout <<L.len<<":"<< L.data[L.len] << '\n';
//}
//
//int search(List& L, int tar)
//{
//	if (tar<1 || tar>L.len)
//		return -1;
//	else
//		return L.data[tar];
//}
//
//bool insert(List& L,int tar,int elem)
//{
//	if (tar<1 || tar>L.len)
//		return false;
//	else
//	{
//		//它是从0开始的位置，0-9已经占了10个位置，无＋1第10个数据输入是没有记录的
//		while (L.len+1 >= L.max_size)
//		{
//			L.data = (int*)realloc(L.data, (L.max_size + add_size) * sizeof(int));
//			L.max_size += add_size;
//		}
//		for (int i = L.len + 1; i > tar; i--)
//			L.data[i] = L.data[i - 1];
//		L.data[tar] = elem;
//		L.len += 1;
//	}
//}
//
//bool delet(List& L, int tar)
//{
//	if (tar<1 || tar>L.len)
//		return false;
//	else
//	{
//		for (int i = tar; i <= L.len; i++)
//			L.data[i] = L.data[i + 1];
//		L.len -= 1;
//	}
//}
//
//bool print(List& L)
//{
//	if (L.len == 0)
//		return false;
//	else
//	{
//		for (int i = 1; i <= L.len; i++)
//			cout << L.data[i] << ' ';
//		cout << "\n";
//	}
//}
//
//void combine(List& L1, List& L2,List &L3)
//{
//	int i = 1;//L1的
//	int j = 1;//L2的
//	L3.len = 1;
//	while (i <= L1.len && j <= L2.len)
//	{
//		if (L1.data[i] <= L2.data[j])
//			L3.data[L3.len++] = L1.data[i++];
//		else
//			L3.data[L3.len++] = L2.data[j++];
//	}
//	while (i <= L1.len)
//		L3.data[L3.len++] = L1.data[i++];
//	while (j <= L2.len)
//		L3.data[L3.len++] = L2.data[j++];
//	//最后会比实际的要多一个
//	L3.len -= 1;
//}
//
//void move(List& L, int dis)
//{
//	dis = dis % L.len;
//	int temp[100];
//	int len = 0;
//	//往右移动，先把最右边的位子空出来，并保存数据
//	for (int i = L.len; i > L.len - dis; i--)
//		temp[++len] = L.data[i];
//	//把剩下的从右往左分别移动
//	for (int i = L.len - dis; i >=1 ; i--)
//		L.data[i + dis] = L.data[i];
//	//最后把临时的转移
//	for (int i = 1; i <= dis; i++)
//		L.data[i] = temp[dis+1-i];
//}
//
//int main()
//{
//	int num;
//	int tar;
//	int elem;
//	int choice;
//	List L1;
//	List L2;
//	List L3;
//	initList(L1);
//	initList(L2);
//	initList(L3);
//	while (cin >> num)
//	{
//		add_elem(L1, num);
//		//需要放在最后面，否则会吃掉
//		if (cin.get() == '\n')
//			break;
//	}
//	print(L1);
//
//	while (cin >> num)
//	{
//		add_elem(L2, num);
//		//需要放在最后面，否则会吃掉
//		if (cin.get() == '\n')
//			break;
//	}
//	print(L2);
//
//
//	combine(L1, L2, L3);
//	print(L3);
//
//	move(L3, 4);
//	print(L3);

	/*while (cin >> choice)
	{
		if (choice == 1)
		{
			cin >> tar >> elem;
			insert(L, tar, elem);
			print(L);
		}
		if (choice == 2)
		{
			cin >> tar;
			delet(L, tar);
			print(L);
		}
		else
		{
			cin >> tar;
			int tar_num=search(L, tar);
			cout << tar_num << '\n';
		}
		
	}*/
//}

#include<iostream>
using namespace std;

int main()
{
	int len = 0;
	string record[100];
	string a;
	while (cin >> a)
	{
		record[++len] = a;
		if (cin.get() == '\n')
			break;
	}
	for (int i = len; i >= 1; i--)
		cout << record[i] << ' ';
}

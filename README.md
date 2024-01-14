## Giới thiệu
Themis & CMS Test Case Generator là công cụ sinh test đơn giản hỗ trợ các định dạng Themis (mỗi test tương ứng với một folder, mỗi folder sẽ chứa một file `.INP` và `.OUT`, sử dụng nhiều trong các kỳ thi HSG Tin học ở Việt Nam) và CMS (tất cả các test đều nằm trong một folder, được đánh số thứ tự, thường được sử dụng trong các online judge (trình chấm bài online)). Themis & CMS Test Case Generator được lấy cảm hứng từ công cụ sinh test [tcframe](https://github.com/ia-toki/tcframe) và trình sinh test của các thầy cô đã hỗ trợ mình trong quá trình ôn thi HSG Tin học.

## Yêu cầu kỹ thuật
Để sử dụng được công cụ này, bạn cần:
- Sử dụng hệ điều hành Windows;
- Cài đặt sẵn trình biên dịch GCC hỗ trợ C++11 trở lên.

## Cài đặt
Có hai cách để tải về repository:
1. Nếu bạn sử dụng git, bạn có thể clone phiên bản mới nhất của repository bằng `git clone https://github.com/mynameiskhanhhh/themis-cms-test-case-generator`.
2. Click vào **Code** $\rightarrow$ **Download ZIP** trên repository và giải nén thư mục sau khi tải về.

## Sử dụng
Sau khi clone (hoặc giải nén) xong, truy cập vào thư mục `src` (bạn có thể copy và paste thư mục này rồi đổi tên thành folder bạn muốn để dễ sắp xếp hơn).

Bạn chỉ cần quan tâm đến hai file `generator.h` và `solution.cpp`.

1. File `solution.cpp` là nơi bạn viết code AC của bài toán, sử dụng luồng nhập xuất `stdin`, `stdout` (kể cả khi sinh test dạng Themis). 
2. File `generator.h` là nơi bạn viết trình sinh test. Bạn có thể tham khảo thêm cách sử dụng `generator.h` qua code ví dụ ở folder `sample`.

Sau đó, lưu hết các file lại rồi khởi động file `run.bat`. Ở đây, bạn sẽ nhập vào lần lượt tên bài, số test và định dạng test (Themis hoặc CMS). Nếu bạn muốn thoát ra thì bạn có thể tắt command prompt hoặc sử dụng tổ hợp phím `Alt + F4`.

## Các tính năng sinh ngẫu nhiên
Themis & CMS Test Case Generator hỗ trợ một số tính năng sinh ngẫu nhiên, sử dụng đối tượng `rnd`.

### Sinh số ngẫu nhiên
```cpp
int nextInt(int l, int r)
```
Trả về một số nguyên kiểu `int` bất kỳ trong khoảng từ `l` đến `r`.
```cpp
long long nextLongLong(long long l, long long r)
```
Trả về một số nguyên kiểu `long long` bất kỳ trong khoảng từ `l` đến `r`.

```cpp
double nextDouble(double l, double r)
```
Trả về một số thực kiểu `double` bất kỳ trong khoảng từ `l` đến `r`.

```cpp
long double nextLongDouble(long double l, long double r)
```
Trả về một số thực kiểu `long double` bất kỳ trong khoảng từ `l` đến `r`.

### Sinh dãy ngẫu nhiên
```cpp
vector<int> nextVectorInt(int sz, int l, int r)
```
Trả về một dãy số nguyên kiểu `int` bất kỳ có độ dài `sz` trong khoảng từ `l` đến `r`.

```cpp
vector<long long> nextVectorLongLong(int sz, long long l, long long r)
```
Trả về một dãy số nguyên kiểu `long long` bất kỳ có độ dài `sz` trong khoảng từ `l` đến `r`.

```cpp
vector<double> nextVectorDouble(int sz, double l, double r)
```
Trả về một dãy số thực kiểu `double` bất kỳ có độ dài `sz` trong khoảng từ `l` đến `r`.

```cpp
vector<long double> nextVectorLongDouble(int sz, int l, int r)
```
Trả về một dãy số thực kiểu `long double` bất kỳ có độ dài `sz` trong khoảng từ `l` đến `r`.

```cpp
string nextString(int sz, bool has_lower, bool has_upper, bool has_digit)
```
Trả về một xâu có độ dài `sz` và chứa các loại ký tự:
- Chữ cái in thường trong bảng chữ cái tiếng Anh nếu `has_lower = true`;
- Chữ cái in hoa trong bảng chữ cái tiếng Anh nếu `has_upper = true`;
- Chữ số từ $0$ đến $9$ nếu `has_digit = true`;

```cpp
void shuffle(RandomAccessIterator first, RandomAccessIterator last)
```
Tráo các phần tử trong dãy được chọn.



#include <iostream>
#include <vector>
#include <algorithm> // 包含 std::sort

int main() {
    std::vector<std::vector<int>> meetings = {{5, 7}, {1, 3}, {9, 10}};

    // 直接使用 std::sort 对外层 vector 进行排序
    std::sort(meetings.begin(), meetings.end(),
			[](const std::vector<int>& a,const std::vector<int>& b) {
				return a[1] > b[1];	
			});

    // 输出排序后的 vector
    for (const auto& meeting : meetings) {
        std::cout << "[" << meeting[0] << ", " << meeting[1] << "] ";
    }
    std::cout << std::endl;

    return 0;
}


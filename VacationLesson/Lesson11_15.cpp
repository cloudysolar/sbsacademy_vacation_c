#include <stdio.h>
#include <string.h>

typedef struct {
	char name[50];
	int population;
} City;

City cities[10] = { 0 };

int availableCities() {
	int count = 0;

	for (int i = 0; i < 10; i++) {
		if (strlen(cities[i].name) == 0) {
			count++;
		}
	}

	return count;
}

void showCreatedCities(bool order) {
	printf("\n[도시관리] 현재까지 생성된 총 도시의 수는 %d개 입니다.\n", 10 - availableCities());

	for (int i = 0; i < 10; i++) {
		if (strlen(cities[i].name) != 0) {
			if (order) {
				printf("  %d. %s (인구: %d)\n", i, cities[i].name, cities[i].population);
			}
			else {
				printf("  - %s (인구: %d)\n", cities[i].name, cities[i].population);
			}
		}
	}

	printf("\n\n");
}

int main() {
	// 문제 5: 간단하게 도시를 관리하는 프로그램을 만들어봅시다.
	//   - 도시 구조체: 도시 이름, 인구수

	int input = 0;

	do {
		printf("\n[도시관리] 메뉴를 선택하세요: \n");
		printf("  - 1. 도시 생성\n");
		printf("  - 2. 도시 삭제\n");
		printf("  - 3. 도시 목록\n");
		printf("  - 4. 종료\n");

		printf("\n# 입력: ");
		scanf_s("%d", &input);

		if (input == 1) {
			char input_c = 'N';

			printf("\n[도시관리] 현재 10개의 도시 중 %d개의 도시를 생성할 수 있습니다. 생성하시겠습니까? (Y/N): ", availableCities());

			do {
				int cityNum = 10 - availableCities();

				scanf_s(" %c", &input_c, 1);

				if (input_c == 'Y' || input_c == 'y') {
					printf("\n[도시관리] 환영합니다, 새 도시의 대표자님. 도시 이름을 입력해주세요: ");
					scanf_s("%s", cities[cityNum].name, sizeof(cities[cityNum].name));

					printf("\n[도시관리] 목표 인구수를 입력해주세요: ");
					scanf_s("%d", &cities[cityNum].population);

					printf("\n\n[도시관리] 아래와 같이 도시가 생성되었습니다.\n");
					printf("  - 도시 이름: %s\n", cities[cityNum].name);
					printf("  - 목표 인구수: %d\n", cities[cityNum].population);

					printf("\n\n");

					break;
				}
				else if (input_c == 'N' || input_c == 'n') {
					printf("\n[도시관리] 메인 메뉴로 돌아갑니다...\n");
					break;
				}
				else {
					printf("\n[도시관리] 잘못 입력하셨습니다. 다시 입력해주세요.\n");
					continue;
				}
			} while (true);

			continue;
		}
		else if (input == 2) {
			int input_d = 0;

			showCreatedCities(true);

			do {
				printf("\n[도시관리] 삭제할 도시의 번호를 입력하세요. 돌아가려면 -1을 입력하세요: ");
				scanf_s("%d", &input_d);

				if (input_d == -1) {
					printf("\n[도시관리] 메인 메뉴로 돌아갑니다.\n\n");
					break;
				}
				else if (0 <= input_d && input_d <= 9) {
					if (strlen(cities[input_d].name) != 0) {
						printf("\n[도시관리] 도시 %s(을)를 삭제하였습니다.\n\n", cities[input_d].name);
						cities[input_d] = { 0 };

						break;
					}
					else {
						printf("\n[도시관리] 삭제할 도시를 찾지 못했습니다. 존재하는 도시인지 확인 후 다시 시도해주세요.");
						continue;
					}
				}
				else {
					printf("\n[도시관리] 잘못 입력하셨습니다. 다시 입력해주세요.");
					continue;
				}
			} while (true);

			continue;
		}
		else if (input == 3) {
			showCreatedCities(false);

			continue;
		}
		else if (input == 4) {
			printf("\n[도시관리] 사용자의 요청으로 프로그램을 종료합니다.\n");
			break;
		}
		else {
			printf("\n[도시관리] 잘못 입력하셨습니다. 다시 입력해주세요.\n");
			continue;
		}
	} while (true);

	return 0;
}
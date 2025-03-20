#include "item.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void add_item(Item *item_list, double price, char *sku, char *category,char *name, int index)
	item_list[index].price = price
	item_list[sku].sku = (char*)malloc(strlen(sku) +1);
		strcpy(item_list[index].sku, sku);
	item_list[index].category = (char*)malloc(strlen(category) + 1);
		strcpy(item_list[index].category, category);
	item_list[index].name = (char*)malloc(strlen(name) + 1);
		strcpy(item_list[index].name, name);



void free_items(Item *item_list, int size) {
	for(int i=0; i<size; i++) {
		free(item_list[i].sku);
		free(item_list[i].category);
		free(item_list[i].name);
	}
}




void avg_price(Item *item_list, int size) {
	double sum = 0.0;
	for(int i=0; i<size; i++) {
		sum += item_list[i].price;
	}
	return sum/size;
}





void print_items(Item *item_list, int size) {
	for(int i=0; i<size; i++) {
		printf("#################\n");
		printf("Item Name: %s\n", item_list[i].name);
		printf("Item Sku: %s\n", item_list[i].sku);
		printf("Item Category: %s\n", item_list[i].category);
		printf("Item Price: %f\n", item_list[i].price);
		printf("#################\n");
	}
}




int main(int limp, char *comm[]) {
	int size=5;
	Item *item_list = (Item*)malloc(size * sizeof(Item));

	add_item(item_list, 5.00, "19282", "Breakfast", "Reese's Cereal", 0);
	add_item(item_list, 3.95, "79862", "Dairy", "Cheese", 1);
	add_item(item_list, 1.99, "12345", "Snacks", "Chips", 2);
	add_item(item_list, 2.50, "67890", "Beverages", "Soda", 3);
	add_item(item_list, 4.75, "54321", "Dairy", "Milk", 4);

	if(limp > 1) {
		char *to_search_sku = comm[1];
		int found = 0;

		for(int i=0; i<size; i++) {
			if(strcmp(item_list[i].sku, to_search_sku) == 0) {
				printf("ITEM FOUND! \n\n");
				printf("Item Name: %s\n", item_list[i].name);
				printf("Item Sku: %s\n", item_list[i].sku);
				printf("Item Category: %s\n", item_list[i].category);
				printf("Item Price: %f\n\n", item_list[i].price);
				found = 1;
				break;
			}
		}
		if(!found) {
			printf("Item is not to be found\n\n");
		}
	}


	else{
	printf("No Sku is provided, search is to be skipped!\n\n");
	}


	print_items(item_list, size);


	double Avg_Price = avg_price(item_price, size);
	printf("The average price of items: %f\n\n", Avg_Price);


	free_items(item_list, size);
	free(item_list);


	return 0;
}
	








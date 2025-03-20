#ifndef PIXEL_H
#define PIXEL_H

struct _Item {
	float price;
	char *sku;
	char *name;
	char *category;
};


typedef struct _Item Item;


void add_item(Item *item_list, float price, char *sku, char *name, char *category, int index);
void free_items(Item *item_list, int size);
void average_price(Item *item_list, int size);
void print_items(Item *item_list, int size);

#endif



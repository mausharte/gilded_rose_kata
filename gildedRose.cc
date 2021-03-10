#include "GildedRose.h"

GildedRose::GildedRose(vector<Item> & items) : items(items)
{}

void GildedRose::updateQuality(){
    void updateQuality(){
        for (int i = 0; i < items.length; i++){
            updateItem(items[i]);
        }
    }

    void updateItem(){
        updateItemQuality()
        updateSellIn()
        if (items[i].sellIn < 0){
            updateExpiration()
        }
    }

    void updateExpiration(Item item){
        if (items.name == ("Aged Brie")){
            incrementQuality(items[i]);
        }
        else if (item.name == "Backstage passes to a TAFKAL80ETC concert"){
            items[i].quality = 0;
        }
        else if (item.name == "Sulfuras, Hand of Ragnaros"){
            return
        }
        else {
            decrementQuality(items[i]);
        }
    }

    void updateSellIn(Item item){
        if (items[i].name != "Sulfuras, Hand of Ragnaros") {
            items[i].sellIn = item.sellIn - 1;
        }
    }

    void updateQuality(Item item){
        if (items[i].name == "Aged Brie"){
            incrementQuality(items[i]);
        }
        else if (items[i].name == "Backstage passes to a TAFKAL80ETC concert"){
            incrementQuality(items[i]);
            if (items[i].sellIn < 11){
                incrementQuality(items[i])
            }
            if (items[i].sellIn < 6){
                incrementQuality(items[i])
            }
        }
        else if (items[i].name == "Sulfuras, Hand of Ragnaros"){
            return;
        }
        else {
            decrementQuality(items[i]);
        }
    }

    void incrementQuality(Item item){
        if (items[i].quality < 50){
            items[i].quality = items[i].quality + 1;
        }
    }

    void decrementQuality(Item item){
        if (items[i].quality > 0){
            items[i].quality = items[i].quality - 1;
        }
    }
}

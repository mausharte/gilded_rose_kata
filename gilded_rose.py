# Evan Maushart
# Refactored Gilded Rose Kata

class GildedRose(object):

    def __init__(self, items):
        self.items = items

    def update_quality(self):
        for item in self.items:
            self.updateItem(item)

    def updateItem(self, item):
        self.updateItemQuality(item)
        self.updateSellIn(item)
        if item.sell_in < 0:
            self.updateExpiration(item)

    def updateExpiration(self, item):
        if item.name == "Aged Brie":
            self.incrementQuality(item)
        elif item.name == "Backstage passes to a TAFKAL80ETC concert":
                item.quality = item.quality - item.quality
        elif item.name == "Sulfuras, Hand of Ragnaros":
                return
        self.decrementQuality(item)

    def updateSellIn(self, item):
        if item.name != "Sulfuras, Hand of Ragnaros":
            item.sell_in = item.sell_in - 1

    def updateItemQuality(self, item):
        if item.name == "Aged Brie":
            self.incrementQuality(item)
        elif item.name == "Backstage passes to a TAFKAL80ETC concert":
            self.incrementQuality(item)
            if item.sell_in < 11:
                self.incrementQuality(item)
            if item.sell_in < 6:
                self.incrementQuality(item)
        elif item.name == "Sulfuras, Hand of Ragnaros":
            return
        self.decrementQuality(item)


    def decrementQuality(self, item):
        if item.quality > 0:
            item.quality = item.quality -1
    def incrementQuality(self, item):
        if item.quality < 50:
            item.quality = item.quality + 1


class Item:
    def __init__(self, name, sell_in, quality):
        self.name = name
        self.sell_in = sell_in
        self.quality = quality

    def __repr__(self):
        return "%s, %s, %s" % (self.name, self.sell_in, self.quality)

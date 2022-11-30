# include "../include/tile.h"

Tile::Tile(int length, int width, int x_coord, int y_coord) {
    this->tile_ = sf::RectangleShape(sf::Vector2f(this->length_, this->width_));
    this->state_ = Unexplored;
    this->length_ = length;
    this->width_ = width;
    this->x_coord_ = x_coord;
    this->y_coord_ = y_coord;
}

void Tile::setExplored() {
}

void Tile::setUnexplored() {
}

void Tile::setBorder() {
    this->tile_.setFillColor(sf::Color(0,0,0));
    this->state_ = Border;
}

void Tile::setStartpoint() {
}

void Tile::setEndpoint() {
}

void Tile::setCoordinate(int x, int y) {
    this->x_coord_ = x;
    this->y_coord_ = y;
}

int Tile::getXCoord() {
    return x_coord_;
}

int Tile::getYCoord() {
    return y_coord_;
}

TileState Tile::getTileState() {
    return this->state_;
}

void Tile::CreateTile() {
    this->tile_.setSize(sf::Vector2f(this->length_, this->width_));
    this->tile_.setFillColor(sf::Color(243,246,244));  // off-white
    this->tile_.setOutlineColor(sf::Color::Black);
    this->tile_.setOutlineThickness(.5);
    this->tile_.setPosition(this->x_coord_, this->y_coord_);
    /* window.draw(this->tile_); */
}

void Tile::DrawTile(sf::RenderWindow& window) {
    window.draw(this->tile_);
}

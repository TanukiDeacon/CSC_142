#pragma once

class Rectangle
{
    private:
        double length;
        double width;
    public:
        double area;

        inline double getWidth(){
                return width;
        }

        inline double getLength(){
                return length;
        }

        inline void setWidth(double wid){
                width = wid;
        }

        inline void setLength(double len){
                length = len;}
        

        inline double getArea(){
                return length * width;}

};
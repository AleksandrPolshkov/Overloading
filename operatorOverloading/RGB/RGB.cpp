#include "RGB.h"

ostream& operator <<(ostream& os, const RGB& rgb)
{
    return os << rgb.R << ":" << rgb.G << ":" << rgb.B << endl;
}
istream& operator >> (istream& in, RGB& rgb)
{
    int R;
    int G;
    int B;
    in >> R >> G >> B;
    rgb.setRGB(R, G, B);
    return in;
}
bool RGB::correctRGB()
{
    if ( (R <= 255 && R >= 0) && (G <= 255 && G >= 0) && (B <= 255 && B >= 0))
    {
        cout << "Çíà÷åíèÿ êîððåêòíû " << endl;
        return true;
    }
    cout << "Çíà÷åíèÿ íå êîððåêòíû" << endl;
    return false;
}
void RGB::setRGB(int R, int G, int B)
{
    this->R = R;
    this->G = G;
    this->B = B;
}
bool RGB::operator==(const RGB& p)
{
    if ((R == p.R) && (G == p.G) && (B == p.B))
    {
        cout << "Ðàâíû" << endl;
        return true;
    }
    return false;
}
bool RGB::operator!=(const RGB& p)
{
    if ((R != p.R) && (G != p.G) && (B != p.B))
    {
        cout << "Íå ðàâíû" << endl;
        return true;
    }
    return false;
}
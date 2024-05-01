#include<iostream>
#include<cstring>
using namespace std;

class CWH {
protected:
    string title;
    float rating;
public:
    CWH(string s, float r) : title(s), rating(r) {}
    virtual void display() {}
};

class CWHVideo : public CWH {
    int videolength;
public:
    CWHVideo(string s, float r, int vl) : CWH(s, r), videolength(vl) {}
    void display() override {
        cout << "The video '" << title << "' was amazing!" << endl;
        cout << "The rating was " << rating << " out of 5" << endl;
        cout << "Length of video is: " << videolength << " minutes. " << endl;
    }
};

class CWHtext : public CWH {
    int wordcount;
public:
    CWHtext(string s, float r, int wc) : CWH(s, r), wordcount(wc) {}
    void display() override {
        cout << "The text '" << title << "' was amazing!" << endl;
        cout << "The rating was " << rating << " out of 5" << endl;
        cout << "Word count of text is: " << wordcount << endl;
    }
};

int main() {
    string title;
    float ratings;
    int vl, wc;
    title = "example of virtual function Tutorial";
    vl = 20;
    ratings = 4.3;
    wc = 100;

    CWHVideo video(title, ratings, vl);
    video.display();

    CWHtext Text(title, ratings, wc);
    Text.display();

    return 0;
}

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

// Rules of Virtual Function with a program

class CWM
{
protected:
    string title;
    float ratings;

public:
    CWM() {} // Default Constructor
    CWM(string s, float r)
    {
        title = s;
        ratings = r;
    }

    // Creating a virtual function of the class
    virtual void Display() { cout << "Nothing" << endl; } // Displays Nothing
};

// Inheriting a class from the base class CWM
class CWMVideo : public CWM
{
    float videoLength;

public:
    CWMVideo() {} // Default Constructor
    CWMVideo(string s, float r, float vl) : CWM(s, r)
    {
        videoLength = vl;
    }
    void Display()
    {
        cout << "This is an amazing video with title: " << title << endl;
        cout << "Ratings: " << ratings << " out of 5 stars " << endl;
        cout << "Length of the video is: " << videoLength << " minutes" << endl;
    }
};

// Inheriting another class from CWM
class CWMtext : public CWM
{
    int words;

public:
    CWMtext() {} // Default Constructor
    CWMtext(string s, float r, int wc) : CWM(s, r)
    {
        words = wc;
    }
    void Display()
    {
        cout << "This is an amazing text website with title: " << title << endl;
        cout << "Ratings of this website is: " << ratings << " out of 5 stars " << endl;
        cout << "No of words in this website is: " << words << " words" << endl;
    }
};
int main()
{
    string title;
    float rating, videoLength;
    int words;

    // For class CWMVideo
    title = "Java Tutorial";
    rating = 4.4;
    videoLength = 5.23;
    CWMVideo Video(title, rating, videoLength);
    // Video.Display();
    // cout<<endl;

    // For class CWMtext
    title = "Python Tutorial";
    rating = 4.6;
    words = 300;
    CWMtext Text(title, rating, words);
    // Text.Display();

    // Calling the Display function by pointing the objects of Derived classes
    CWM *ptr[2];
    ptr[0] = &Video;
    ptr[1] = &Text;

    ptr[0]->Display();
    cout << endl;
    ptr[1]->Display();

    return 0;
}
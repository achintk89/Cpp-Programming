//given string time find smallest angle b/w hour adn minute hand
#include<bits/stdc++.h>
#include<string>

using namespace std;
int min(int x, int y)  
{  
    return (x < y)? x: y;  
      
}  
  
float angle(string time)  
{
    int h=0,m=0;
    string s1,s2; 
    for (int i = 0;i<time.length()-3; i++) {

        s1.push_back(time[i]);
    }
    for (int i = 3;i<time.length(); i++) {

        s2.push_back(time[i]);
    }
    h=stoi(s1);
    m=stoi(s2);
    if (h == 12) h = 0;  
    if (m == 60) m = 0;  
  
    
    float hour_angle = 0.5 * (h * 60 + m);  
    float minute_angle = 6 * m;  
  
    // Find the difference between two angles  
    float angle = abs(hour_angle - minute_angle);  
  
    // Return the smaller angle of two possible angles  
    angle = min(360 - angle, angle);  
  
    return angle;  
} 
int main()
{
    string time;
    cin>>time;
    float result;
    result=angle(time);
    cout << fixed << setprecision(1) << result;
    return 0;
} 
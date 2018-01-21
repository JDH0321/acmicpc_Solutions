#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

struct album{
  int year;
  char album_name[60];
};
void init(album *star);

int main(void)
{
  album star[25];
  init(star);
  int T;
  cin >> T;
  while(T--)
  {
    char result[1000] = {0};
    int cnt = 0;
    int s, e;

    cin >> s >> e;

    for(int i = 0 ; i < 25 ; i++)
    {
      if(star[i].year >= s && star[i].year <= e)
      {
        cnt++;
        sprintf(result, "%s\n%d %s",result, star[i].year, star[i].album_name);
      }
    }

    cout << cnt << result << endl;
  }
  return 0;
}

void init(album *star)
{
  star[0].year = 1967; strcpy(star[0].album_name, "DavidBowie");
  star[1].year = 1969; strcpy(star[1].album_name, "SpaceOddity");
  star[2].year = 1970; strcpy(star[2].album_name, "TheManWhoSoldTheWorld");
  star[3].year = 1971; strcpy(star[3].album_name, "HunkyDory");
  star[4].year = 1972; strcpy(star[4].album_name, "TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars");
  star[5].year = 1973; strcpy(star[5].album_name, "AladdinSane");
  star[6].year = 1973; strcpy(star[6].album_name, "PinUps");
  star[7].year = 1974; strcpy(star[7].album_name, "DiamondDogs");
  star[8].year = 1975; strcpy(star[8].album_name, "YoungAmericans");
  star[9].year = 1976; strcpy(star[9].album_name, "StationToStation");
  star[10].year = 1977; strcpy(star[10].album_name, "Low");
  star[11].year = 1977; strcpy(star[11].album_name, "Heroes");
  star[12].year = 1979; strcpy(star[12].album_name, "Lodger");
  star[13].year = 1980; strcpy(star[13].album_name, "ScaryMonstersAndSuperCreeps");
  star[14].year = 1983; strcpy(star[14].album_name, "LetsDance");
  star[15].year = 1984; strcpy(star[15].album_name, "Tonight");
  star[16].year = 1987; strcpy(star[16].album_name, "NeverLetMeDown");
  star[17].year = 1993; strcpy(star[17].album_name, "BlackTieWhiteNoise");
  star[18].year = 1995; strcpy(star[18].album_name, "1.Outside");
  star[19].year = 1997; strcpy(star[19].album_name, "Earthling");
  star[20].year = 1999; strcpy(star[20].album_name, "Hours");
  star[21].year = 2002; strcpy(star[21].album_name, "Heathen");
  star[22].year = 2003; strcpy(star[22].album_name, "Reality");
  star[23].year = 2013; strcpy(star[23].album_name, "TheNextDay");
  star[24].year = 2016; strcpy(star[24].album_name, "BlackStar");

}

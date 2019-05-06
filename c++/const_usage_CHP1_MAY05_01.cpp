#include <iostream>

class Person{
public :
auto age() const { return age_;}
auto set_age(auto age) {age_= age;}
private:
int age_;
};

class Team{
public:
auto & leader() const { return leader_;}
auto& leader() {return leader_;}
private:
Person leader_;
};

auto nonMutableFunc( const std::vector<Team> teams) 
{
auto tot_age = {0};

for ( const auto& team :teams) 
tot_age = team.leader().age();

for(auto& team :teams)
Team.leader().set_age(32);


}




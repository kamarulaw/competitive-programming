// Eunjae Kim

// - You're traveling and there is a set of cities that you can visit.
// - You always travel as part of some tour (you can’t just move to an arbitrary city without being part of a tour).
// - A tour can be done within the same city or take you from one city to another. (only two city in a single tour)
// - A tour can only start in the city in which the last tour ends.
// - Each tour has a quantified Fun value. (This value can be negative)
// - Each tour takes 1 day.

// Given a particular number of days to travel, find the best start city to have the most fun.

class Tour { 
  string src; 
  string dst; 
  int fund; 
};
  

string FindBestStartCity(vector<Tour> tours, int days_to_travel) {
  // city: node
  // tour: edge
  // fun value: weight of edge
  
}

// F <-- 1 <-- A <-- 3 <-- B --> 4 --> C --> 1 --> E

int funValue(vector<Tour> tours, string start_city) { 
  return 0; 
}

bool isTourInSingleCity(Tour tour) { 
  return tour->src == tour->dst; 
}

// Leo ~ Eunjae ~ WOOJIN 

  
  
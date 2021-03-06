#ifndef MEETUP_RIDER_RIDE_H
#define MEETUP_RIDER_RIDE_H

#include "Person.h"

class Ride{
private:
    int origin;       //!< Ride's origin place
    int destiny;      //!< Ride's destiny place
    Person* person;   //!< Person associated with this Ride
    bool started; //!< If the Ride has started
    bool finished;    //!< If the Ride has finished
public:

    /**
     * @brief Ride's Constructor
     * @param origin Ride's origin
     * @param destiny Ride's destiny
     * @param person Person associated with this Ride
     */
    Ride(int origin, int destiny, Person* person);

    /**
     * @brief GET Method for origin
     * @return Ride's origin place
     */
    int getOrigin() const;
    /**
     * @brief GET Method for destiny
     * @return Ride's destiny place
     */
    int getDestiny() const;
    /**
     * @brief GET Method for person
     * @return Person associated with this Ride
     */
    Person* getPerson() const;
    /**
     * @brief method to find if a ride has started
     * @return True if the person was picked from ride origin
     */
    bool hasStarted();

    /**
     * @brief method to find if a ride has finished
     * @return True if the person was picked from ride origin and delivered to ride destiny
     */
    bool hasFinished();

    /**
     * @brief SET Method for origin
     */
    void setOrigin(int origin);

    /**
     * @brief SET Method for destiny
     */
    void setDestiny(int destiny);

    /**
     * @brief SET Method for person
     */
    void setPerson(Person* person);

    /**
     * @brief Starts the Ride
     */
    void startRide();

    /**
     * @brief Ends the Ride
     */
    void finishRide();
};



#endif //MEETUP_RIDER_RIDE_H

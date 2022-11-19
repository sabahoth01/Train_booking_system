//
// Created by brune on 19/11/2022.
//

#ifndef TRAIN_TICKET_TICKET_H
#define TRAIN_TICKET_TICKET_H

#include <string>
#include <ctime>
#include "TicketClass.h"
#include "TrainInfo.h"

class Ticket {

public:

    //constructor
    Ticket();

    Ticket(int id, Person person, TrainInfo trainInfo, TicketClass ticketClass,
           double discount, std::string seat, time_t creationDate);


    //methods
    void printer() const;

    //Getters
    int getId() {
        return id;
    };

    Person getPerson() {
        return person;
    };

    TrainInfo getTrainInfo() {
        return trainInfo;
    };

    TicketClass getTicketClass() {
        return ticketClass;
    };

    double getDiscount() {
        return discount;
    };

    std::string getSeat() {
        return seat;
    };

    time_t getCreationDate() {
        return creationDate;
    };

    //Setters
    void setId(int s_id) {
        id = s_id;
    };

    void setPerson(Person s_person) {
        person = s_person;
    };

    void setTrainInfo(TrainInfo s_trainInfo) {
        trainInfo = s_trainInfo;
    };

    void setTicketClass(TicketClass s_ticketClass) {
        ticketClass = s_ticketClass;
    };

    void setDiscount(double s_discount) {
        discount = s_discount;
    };

    void setCreationDate(time_t s_creationDate) {
        creationDate = s_creationDate;
    };


private:
    int id;
    Person person;
    TrainInfo trainInfo;
    TicketClass ticketClass;
    double discount;
    std::string seat;
    time_t creationDate;
};

#endif //TRAIN_TICKET_TICKET_H

//
// Created by brune on 19/11/2022.
//

#include <iostream>
#include "../headers/Ticket.h"
#include "../headers/TicketClass.h"
#include <string>
#include <ctime>
#include <utility>

using namespace std;

Ticket::Ticket() {
    cout << "An empty ticket was created" << endl;
}

Ticket::Ticket(int id, Person person, TrainInfo trainInfo, TicketClass ticketClass,
               double discount, std::string seat, time_t creationDate) {
    this->id = id;
    this->person = person;
    this->trainInfo = trainInfo;
    this->ticketClass = ticketClass;
    this->discount = discount;
    this->seat = std::move(seat);
    this->creationDate = creationDate;
}

void Ticket::printer() const {
    cout << "Ticket : "
            "ID: " << id <<
         "\nPassenger data: " << person <<
         "\nTrain informations: " << trainInfo <<
         "\nTicket class: " << ticketClass <<
         "\nDiscount: " << discount <<
         "\nSeat: " << seat <<
         "\nDate : " << creationDate << endl;
}


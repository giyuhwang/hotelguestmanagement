/*
 * Title: helper.cpp
 * Description: Header file for helper functions
 */

#pragma once

#include "Date.hpp"
#include <gtk/gtk.h>
#include <string>
#include <map>


/* Structs */
typedef struct {
    GtkWidget* id;
    GtkWidget* pw;
    gboolean success;
} Entries;


/* Enumerations */
// Gender enumeration
enum class Gender{
    unselected = 0,
    male,
    female,
    other
};

// Payment method enumeration
enum class Payment{
    unselected = 0,
    unpaid,
    cash,
    creditcard,
    other
};

/* Data management */
bool loadCustomerData();
void initializeRoomData();

/* Helper functions */
bool gchar_equals(const gchar* lhs, const gchar* rhs);
void printMessage(std::string message);
cmake_minimum_required(VERSION 3.14)
project(Demo)
set(CMAKE_CXX_STANDARD 14)

add_library(
   Demo

   CalculatePrice.hpp 
   Cinema.hpp  
   Cinema.cpp 
   Common.hpp  
   Common.cpp
   Movie.hpp           
   PaymentMethod.hpp  
   CreditPaymentMethod.hpp
   PaypalPaymentMethod.hpp
   TicketBooker.h  
   Ticket.hpp    
   Ticket.cpp      
   Movie.cpp
   Movie.hpp 
   MoviesSearcher.hpp  
   MoviesViewer.hpp    
   User.hpp
   User.cpp 
   RegularUser.hpp
   VipUser.hpp
   RegularSeat.h
   PremiumSeat.h
   GoldenSeat.h  
   SeatFactory.hpp
   Seat.h
)

add_executable(app main.cpp)
target_link_libraries(app Demo)
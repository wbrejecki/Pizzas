#include "Margherita.hpp"
#include "Funghi.hpp"
#include "Pizzeria.hpp"
#include "Clock.hpp"

int main()
{
    Pizzeria bravo("Bravo Pizza", new Clock());
    Pizzas pizzas = {new Margherita{25.0}, new Funghi{30.0}};

    auto orderId = bravo.makeOrder(pizzas);
    auto price = bravo.calculatePrice(orderId);
    bravo.bakePizzas(orderId);
    bravo.completeOrder(orderId);

    return 0;
}

int main()
{
   float foodCharge;
   int totalPeople;
   float taxCharge = 0.07;
   float tip = 0.22;
   float mealTax, mealTip, total, userShare;

   printf("Enter the meal cost: $");
   scanf("%f", &foodCharge);
   printf("Enter number of people: ");
   scanf("%d", &totalPeople);

   mealTax = foodCharge * taxCharge;
   mealTip = (foodCharge + mealTax) * tip;
   total = (foodCharge + mealTax + mealTip);
   userShare = total / totalPeople;

   printf("After total tax and tip user's liability is : $%.2f\n", userShare);

   return 0;
}

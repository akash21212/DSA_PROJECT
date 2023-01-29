#include<stdio.h>
#include<conio.h>
#define max 50
struct queue
{
  int flat_no;
  char cust_name[30], food[30],rest_name[20],pay[10],email[40],area[20];
};

struct queue q[max];
int f=-1,r=-1,i;

void order()
{
  int temp;
  if((r+1)%max==f)
  {
    printf("\nBusy!!!\n");
  }
  else if(f==-1 && r==-1)
  {
    f=r=0;
  printf("\n\nRESTAURANTS");
  printf("\n===========");
  printf("\n\n[1]Eat A Lot\n[2]FitFood\n[3]Frozen\n[4]Snacks Zilla\n[5]Fishico");
  printf("\n\nEnter Restaurant Name:");
  scanf("%c",&temp);
  scanf("%[^\n]",&q[r].rest_name);
  printf("\nFOOD MENU");
  printf("\n=========\n");
  printf("\nBreakfast:\tIdly, Upma, Dosa, Bread.\nLunch:\t\tWhite Rice(Sadam), Thayir Sadam, Veg Biriyani, Chicken Biriyani.\nBeverages:\tCold Drink, Tea, Coffee, Juice\nDessert:\tBrownie, Ice Cream.\nDinner:\t\tDosa, Idly, Parotta, Chapati\n");
  printf("\nEnter food items and its quantity: (Foodname/quantity)\n");
  scanf("%c",&temp);
  scanf("%[^\n]",q[r].food);
  printf("\n\nORDER SUMMARY\n");
  printf("=============\n\n");
  printf("=>Restaurant Name: %s",q[r].rest_name);
  printf("\n->Food: %s",q[r].food);
  printf("\n=>Customer Name:");
  scanf("%c",&temp);
  scanf("%[^\n]",q[r].cust_name);
  printf("=>Flat Number,");
  scanf("%c",&q[r].flat_no);
  printf("\n=>Area & City:");
  scanf("%c",&temp);
  scanf("%[^\n]",q[r].area);
  printf("=>Email ID:");
  scanf("%c",&temp);
  scanf("%[^\n]",q[r].email);
  printf("Payment Mode:\nOnline Or Cash on delivery\n");
  scanf("%c",&temp);
  scanf("%[^\n]",q[r].pay);
  printf("\n\n\n\n============================");
  printf("\nOrder received successfully!\nThanks for ordering %s!\n",q[r].cust_name);
  printf("============================\n\n");
  }
  else
  {
    r=(r+1)%max;
    printf("\n\nRESTAURANTS");
  printf("\n===========");
  printf("\n\n[1]Eat A Lot\n[2]FitFood\n[3]Frozen\n[4]Snacks Zilla\n[5]Fishico");
  printf("\n\nEnter Restaurant Name:");
  scanf("%c",&temp);
  scanf("%[^\n]",&q[r].rest_name);
  printf("\nFOOD MENU");
  printf("\n=========\n");
  printf("\nBreakfast:\tIdly, Upma, Dosa, Bread.\nLunch:\t\tWhite Rice(Sadam), Thayir Sadam, Veg Biriyani, Chicken Biriyani.\nBeverages:\tCold Drink, Tea, Coffee, Juice\nDessert:\tBrownie, Ice Cream.\nDinner:\t\tDosa, Idly, Parotta, Chapati\n");
  printf("\nEnter food items and its quantity: (Foodname/quantity)\n");
  scanf("%c",&temp);
  scanf("%[^\n]",q[r].food);
  printf("\n\nORDER SUMMARY\n");
  printf("=============\n\n");
  printf("=>Restaurant Name: %s",q[r].rest_name);
  printf("\n->Food: %s",q[r].food);
  printf("\n=>Customer Name:");
  scanf("%c",&temp);
  scanf("%[^\n]",q[r].cust_name);
  printf("=>Flat Number:");
  scanf("%c",&q[r].flat_no);
  printf("\n=>Area & City:");
  scanf("%c",&temp);
  scanf("%[^\n]",q[r].area);
  printf("=>Email ID:");
  scanf("%c",&temp);
  scanf("%[^\n]",q[r].email);
  printf("Payment Mode:\nOnline Or Cash on delivery\n");
  scanf("%c",&temp);
  scanf("%[^\n]",q[r].pay);
  printf("\n\n\n\n============================");
  printf("\nOrder received successfully!\nThanks for ordering %s!\n",q[r].cust_name);
  printf("============================\n\n");
  }
}

void deliver()
{
   if(f==-1 && r==-1)
   {
     printf("\n\nNo orders.\n");
   }
   else
   {
   	  printf("\n=====================================");
      printf("\nOrder Successfully Delivered to %s\n",q[f].cust_name);
      printf("=====================================\n");
      if(f==r)
      {
	f=r=-1;
      }
      else
      {
	 if(f==max-1)
	 {
	   f=0;
	 }
	 else
	 {
	   f++;
	 }
      }
   }
}

void view_orders()
{
   int i;
   if(f==-1 && r==-1)
   {
     printf("\n\nNo orders.\n");
   }
   else if(r<f)
   {
     printf("\nPending Orders Details:\n");
     for(i=0;i<=r;i++)
     {
	    printf("\nCustomer Name: %s",q[f].cust_name);
	    printf("\nFood/Quantity: %s",q[f].food);
	    printf("\nRestaurant Name: %s",q[f].rest_name);
	    printf("\nFlat Number: %d",q[f].flat_no);
	    printf("\nArea & City: %s",q[f].area);
	    printf("\nEmail ID: %s",q[f].email);
	    printf("\nPayment Mode: %s",q[f].pay);
	    printf("\n");
     }
     for(i=f;i<max;i++)
     {
	    printf("\nCustomer Name: %s",q[f].cust_name);
	    printf("\nFood/Quantity: %s",q[f].food);
	    printf("\nRestaurant Name: %s",q[f].rest_name);
	    printf("\nFlat Number: %d",q[f].flat_no);
	    printf("\nArea & City: %s",q[f].area);
	    printf("\nEmail ID: %s",q[f].email);
	    printf("\nPayment Mode: %s",q[f].pay);
	    printf("\n");
     }
   }
   else
   {
      printf("\nPending Orders Details:\n");
      for(i=f;i<=r;i++)
      {
	    printf("\nCustomer Name: %s",q[f].cust_name);
	    printf("\nFood/Quantity: %s",q[f].food);
	    printf("\nRestaurant Name: %s",q[f].rest_name);
	    printf("\nFlat Number: %d",q[f].flat_no);
	    printf("\nArea & City: %s",q[f].area);
	    printf("\nEmail ID: %s",q[f].email);
	    printf("\nPayment Mode: %s",q[f].pay);
	    printf("\n");
      }
   }
}

int main()
{
  int ch;
  printf("\n\t\t\t\t\t\tONLINE FOOD ORDERING SYSTEM");
  printf("\n\t\t\t\t\t\t===========================");
  printf("\n\nMAIN MENU");
  printf("\n=========\n");
  
  do
  {
    printf("\n1.Order Food\n2.Deliver Food\n3.View Pending Orders\n4.Exit");
    printf("\n\nChoose any one:");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: order();
	      break;
      case 2: deliver();
	      break;
      case 3: view_orders();
	      break;
      case 4: break;
      default : printf("\nInvalid!!!\nPlease Try again.\n");
    }
  }while(ch!=4);
  return 0;
}




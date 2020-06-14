print("\n*******************************WELCOME TO EASY DINNING HOTEL!*******************************")
print("\nMENU: ")
bill=0
items=[]
while(True):
    print("\n\t1.COLD DRINKS\n\t2.SNACKS\n\t3.SHKAES\n\t4.MAIN COARSE\n\t5.Exit and Cancel\n\t6.Exit and Generate Bill")
    c1=int(input("\nEnter your choice: "))

    if(c1==1):
        print("\n\t\t_____COLD DRINKS____\tRate\n")
        print("\n\t\t 1.Thumbs Up(2L)    \t 90")
        print("\n\t\t 2.Mountain Dew(Can)\t 35")
        print("\n\t\t 3.Coka Cola(2L)    \t 85")
        print("\n\t\t 4.Thumbs Up(500Ml) \t 45")
        print("\n\t\t 5.Fanta(2L)        \t 80")

        c2=int(input("\n\t\tSelect From Above: "))
        if(not(c2 in [1,2,3,4,5])):
            print("\n\t\t\tWrong Choice!!")
            exit(0)
        else:
            c3=int(input("\t\tEnter Quantity: "))

            if(c3<=0):
                print("\n\t\t\tInvalid Input!!")
                exit(0)

            if(c2==1):
                bill=bill+(90*c3)
                items.append("Thumbs Up(2L)      ")
                items.append(90)
            elif(c2==2):
                bill=bill+(35*c3)
                items.append("Mountain Dew(Can)  ")
                items.append(35)
            elif (c2 == 3):
                bill = bill + (85 * c3)
                items.append("Coka Cola(2L)      ")
                items.append(85)
            elif (c2 == 4):
                bill = bill + (45 * c3)
                items.append("Thumbs Up(500Ml)   ")
                items.append(45)
            elif(c2==5):
                bill=bill+(80*c3)
                items.append("Fanta(2L)          ")
                items.append(80)
            items.append(c3)
    elif (c1 == 2):
        print("\n\t\t_________SNACKS_______\tRate\n")
        print("\n\t\t 1.Spring Rolls(8psc.)\t 90")
        print("\n\t\t 2.Pizza(12\")        \t 120")
        print("\n\t\t 3.Chilly Potato      \t 85")
        print("\n\t\t 4.Fries              \t 45")
        print("\n\t\t 5.Paw Bhaaji         \t 60")

        c2 = int(input("\n\t\tSelect From Above: "))
        if (not (c2 in [1, 2, 3, 4, 5])):
            print("\n\t\t\tWrong Choice!!")
            exit(0)
        else:
            c3 = int(input("\t\tEnter Quantity: "))

            if (c3 <= 0):
                print("\n\t\t\tInvalid Input!!")
                exit(0)

            if (c2 == 1):
                bill = bill + (90 * c3)
                items.append("Spring Rolls(8psc.) ")
                items.append(90)
            elif (c2 == 2):
                bill = bill + (120 * c3)
                items.append("Pizza(12\")         ")
                items.append(120)
            elif (c2 == 3):
                bill = bill + (85 * c3)
                items.append("Chilly Potato       ")
                items.append(85)
            elif (c2 == 4):
                bill = bill + (45 * c3)
                items.append("Fries               ")
                items.append(45)
            elif (c2 == 5):
                bill = bill + (60 * c3)
                items.append("Paw Bhaaji          ")
                items.append(60)
            items.append(c3)

    elif (c1 == 3):
        print("\n\t\t_____SHAKES____\tRate\n")
        print("\n\t\t 1.Banana      \t 90")
        print("\n\t\t 2.PineApple   \t 120")
        print("\n\t\t 3.Mango       \t 85")
        print("\n\t\t 4.StrawBerry  \t 45")
        print("\n\t\t 5.Mix Fruit   \t 60")

        c2 = int(input("\n\t\tSelect From Above: "))
        if (not (c2 in [1, 2, 3, 4, 5])):
            print("\n\t\t\tWrong Choice!!")
            exit(0)
        else:
            c3 = int(input("\t\tEnter Quantity: "))

            if (c3 <= 0):
                print("\n\t\t\tInvalid Input!!")
                exit(0)

            if (c2 == 1):
                bill = bill + (90 * c3)
                items.append("Banana Shake        ")
                items.append(90)
            elif (c2 == 2):
                bill = bill + (120 * c3)
                items.append("PineApple Shake     ")
                items.append(120)
            elif (c2 == 3):
                bill = bill + (85 * c3)
                items.append("Mango Shake         ")
                items.append(85)
            elif (c2 == 4):
                bill = bill + (45 * c3)
                items.append("StrawBerry Shake    ")
                items.append(45)
            elif (c2 == 5):
                bill = bill + (60 * c3)
                items.append("Mix Fruit Shake     ")
                items.append(60)
            items.append(c3)

    elif (c1 == 4):
        print("\n\t\t_______MAIN COARSE_____\tRate\n")
        print("\n\t\t 1.Daal Makhni         \t 90")
        print("\n\t\t 2.Kadhai Paneer       \t 120")
        print("\n\t\t 3.Paneer Butter Masala\t 120")
        print("\n\t\t 4.Butter Naan         \t 30")
        print("\n\t\t 5.Garlic Naan         \t 40")

        c2 = int(input("\n\t\tSelect From Above: "))
        if (not (c2 in [1, 2, 3, 4, 5])):
            print("\n\t\t\tWrong Choice!!")
            exit(0)
        else:
            c3 = int(input("\t\tEnter Quantity: "))

            if (c3 <= 0):
                print("\n\t\t\tInvalid Input!!")
                exit(0)

            if (c2 == 1):
                bill = bill + (90 * c3)
                items.append("Daal Makhni         ")
                items.append(90)
            elif (c2 == 2):
                bill = bill + (120 * c3)
                items.append("Kadhai Paneer       ")
                items.append(120)
            elif (c2 == 3):
                bill = bill + (120* c3)
                items.append("Paneer Butter Masala")
                items.append(120)
            elif (c2 == 4):
                bill = bill + (30 * c3)
                items.append("Butter Naan         ")
                items.append(30)
            elif (c2 == 5):
                bill = bill + (40 * c3)
                items.append("Garlic Naan         ")
                items.append(40)
            items.append(c3)

    elif(c1==5):
        exit(0)
    elif(c1==6):
        break
    else:
        print("\n\t\tPlease Choose Only Between 1-6")
        exit(0)

    print("\n\nDo you want to add more items (y/n) ?")
    r=input("\n\tPress y to add or press n to CheckOut and generate Bill: ")

    if(r=='n' or r=='N'):
        break

print("\n\n\t\t________YOUR BILL________")
for i in range(0,len(items),3):
    print("\n",items[i],"\t",items[i+1]," * ",items[i+2],"\t\t",items[i+1]*items[i+2])
print("\n\n\t\t TOTAL AMOUNT TO BE PAID: Rs. ",(bill+(bill*0.18)), "( inclusive 18% GST )")
print("\n*********************ENJOY YOUR FOOD....THANKS AND PLEASE VISIT AGAIN:)*********************")
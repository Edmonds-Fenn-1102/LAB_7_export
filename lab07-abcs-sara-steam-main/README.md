[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-9f69c29eadd1a2efcce9672406de9a39573de1bdf5953fef360cfc2c3f7d7205.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=9166273)
# CS202-Lab4

## Lab Goals
The goal of this Lab is to:
1.	Familiarize students with modifying **makefiles**.
2.	Allow students to modify a program to use **abstract base classes**.
### Important Notes:
1.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
2. **Partners**: You may work alone or with 1 partner on this assignment. Please ensure that you both submit your repo link on webcampus if you work with a partner, and use the same format for group naming as we did in programming assignments. Regardless of if you have a partner or not, all code is due by the due date set by your TA.
## Program
The program where everyone's old enough to rent a car!

**The program should behave as follows:**  
The files have been provided for a complete Rental Agency project. Please compile and run it to verify everything works. Your job is to add a Motorcycle class to the project, and to modify the Agency, Car, and Vehicle classes to work with it.

### Step 1
Compile the supplied makefile, and look at the output. Once you understand how the classes fit together, modify the makefile to work with the provided driver (it currently works with the provided demo_driver). Change all instances of ```demo_driver``` to ```driver```, and add a motorcycle object (make sure you also add it to your executable generation command)


Now your project is ready to modify. Note that if you try to compile the makefile now, you will receive an error because you haven't actually written any code for Motorcycle yet.

### Step 2
Your project currently has the following files:

- driver.cpp
- agency.cpp
- agency.h
- makefile 
- vehicle.cpp  
- vehicle.h  
- car.cpp
- car.h

Car inherits the properties maxMilesPerHour and isCheckedOut from Vehicle. Modify Car so that the properties make, model, and year are also inherited from Vehicle. You will need to delete contents from the Car files and add those contents to the Vehicle file. You should not have to alter the constructors for Car, but you will need to update the constructors for Vehicle to include the 3 new properties that will be passed downstream to children. Move displayBasicInfo from Car to Vehicle. It should display year, make, and model, and isCheckedOut with spaces in between each (exactly what it is doing now in car, just moved). Further modify  Do not modify the driver.

### Step 3

You should add the following files:
- motorcycle.h  
- motorcycle.cpp  

Motorcycle should inherit from vehicle so that it has access to maxMilesPerHour, make, model, year, and isCheckedOut (just like Car). Create the constructors (and don't forget to include the parent's properties in the parameterized constructor). Motorcycle has the additional property motorcycleType which is a string. Add it to the class, and add getters and setters for it.

### Step 4
Motorcycle and Car should now inherit from Vehicle. If you look at Car, you will find that Car has a method called displayVehicleInfo. Motorcycle will also need access to this method, but rather than displayBasicInfo being called and then the max number of passengers being output, Motorcycle will output motorcycle type followed by a call to displayBasicInfo. Since both Motorcycle and Car are using the same method name to do similar work, add displayVehicleInfo to the parent class and have it make the parent abstract (you can now no longer have an array of vehicles, hence the separate arrays for Motorcycle and Car). Note: the implementation of displayVehicleInfo should not be done in the parent class cpp file, since the children are overriding it.

### Step 5
Modify Agency so that rather than an array of Vehicles, it creates two separate arrays, one for Motorcycle and one for Car. Change getCarFleet so that it returns a pointer to a Car, rather than a Vehicle. Add the getMotorcycle and addMotorcycle methods. Add the print method outlined below.

## Requirements
```agency.h```  
**Functionality**: You may replace some properties and getter setter methods (if it makes sense to do so). You should be adding the following attributes to the agency class- note... it probably doesn't make sense to have an array of vehicles anymore (see step 4):
```
Car fleet array
Motorcycle fleet array
```
```agency.cpp```  
**Functionality**: You should be adding the following functionality to the agency class:  

***getNumMotorcycles()***  
**Input Parameters**: none  
**Returned Output**: int number of Motorcycles  
**Functionality**: returns the number of motorcycles that an agency has

***getMotorcycleFleet()***   
**Input Parameters**: none    
**Returned Output**: Motorcycle* array    
**Functionality**: returns a pointer to the motorcycle array

***print()***  
**Input Parameters**: none  
**Returned Output**: none  
**Functionality**: This function should display the agency name, followed by the word Cars, and divider lines, then the header for cars table (make, model, year, available seats). Then for the number of Cars in the fleet, it should print each Car's information using displayVehicleInfo. Then display the word Motorcycles, add the divider lines with the header for Motorcycle in between (Type Make Model Year Available). Then for the number of motorcycles in the fleet, it should print each Motorcycle's information using displayVehicleInfo.

***addMotorcycle()***  
**Input Parameters**: Motorcycle  
**Returned Output**: true or false for success  
**Functionality**: This function accepts a Motorcycle as a parameter. If the current number of Motorcycles is less than the maximum number of motorcycles that the agency can have (10), the new Motorcycle should be saved in the next available spot in the motorcycle fleet array and the current number of motorcycles for the agency should be increased. If a motorcycle was added the function should return true, otherwise it should return false.  

```motorcycle.h```  
**Functionality**: This file should contain the definition for the Motorcycle class, which has the following attributes (not including the parent properties):
```
string type
```
```motorcycle.cpp```  
**Functionality**: This file should contain the function definitions for the following functions:

*Constructors*  
- default constructor
- parameterized contructor (don't forget the parent properties!)
- copy constructor 

*Getters*  
Getter functions for each attribute. 

*Setters*  
Setter functions for each attribute.  

*displayVehicleInfo()*  
**Input Parameters**: none  
**Returned Output**: none  
**Functionality**: This method will output motorcycle type followed by a call to displayBasicInfo inherited from the parent class  

**See steps 2-5 for directions on how to alter Car and Vehicle.**

## Submission details
To submit your project, you will have to use git on your VirtualBox installation:
1.	After accepting the assignment invitation, copy the clone URL
2.	Type 
```git clone clone_URL```
3.	cd into your new assignment directory
4.	After working on your files
5.	When you’re ready, type the following commands: 
```
git add .
git commit -m “your commit message”
git push
```
**Do not forget to upload your repo link to webcampus for both you, and your partner if you have one.**  

## Academic Honesty
Academic dishonesty is against university as well as the system community standards. Academic dishonesty includes, but is not limited to, the following:
Plagiarism: defined as submitting the language, ideas, thoughts or work of another as one's own; or assisting in the act of plagiarism by allowing one's work to be used in this fashion.
Cheating: defined as (1) obtaining or providing unauthorized information during an examination through verbal, visual or unauthorized use of books, notes, text and other materials; (2) obtaining or providing information concerning all or part of an examination prior to that examination; (3) taking an examination for another student, or arranging for another person to take an exam in one's place; (4) altering or changing test answers after submittal for grading, grades after grades have been awarded, or other academic records once these are official.
Cheating, plagiarism or otherwise obtaining grades under false pretenses constitute academic
dishonesty according to the code of this university. Academic dishonesty will not be tolerated and
penalties can include cancelling a student’s enrolment without a grade, giving an F for the course, or for the assignment. For more details, see the University of Nevada, Reno General Catalog.

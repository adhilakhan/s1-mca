import csv 

field_names = ['No', 'Company', 'Car Model'] 

cars = [ 
{'No': 1, 'Company': 'Ferrari', 'Car Model': '488 GTB'}, 
{'No': 2, 'Company': 'Porsche', 'Car Model': '918 Spyder'}, 
{'No': 3, 'Company': 'Bugatti', 'Car Model': 'La Voiture Noire'}, 
{'No': 4, 'Company': 'Rolls Royce', 'Car Model': 'Phantom'}, 
{'No': 5, 'Company': 'BMW', 'Car Model': 'BMW X7'}, 
] 

with open('Names.csv', 'w') as csvfile: 
	writer = csv.DictWriter(csvfile, fieldnames = field_names) 
	writer.writeheader() 
	writer.writerows(cars) 
csvfile.close()
F=open("Names.csv","r")
row=[]
freader=csv.reader(F)
for x in freader:
    print(x)
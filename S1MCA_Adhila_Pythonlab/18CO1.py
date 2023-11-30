dt={ "a":67 , "b":90,"c":12,"d":10,"e":23,"f":77}
dt1={ "z":7 , "x":9,"y":2,"u":1,"w":233,"l":177}
print("The dictionary 1 is : ",dt)
print("The dictionary 2 is : ",dt1)
dt2=dt.copy()
dt2.update(dt1)
print("The merged dictionary  is : ",dt2 )
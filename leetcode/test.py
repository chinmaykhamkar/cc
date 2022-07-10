Fx_rate_list = input("")
#Taking the input as string from the user
Fx_rate_list = [str(i) for i in Fx_rate_list.split(';')]
Fx_rate_list=Fx_rate_list[:-1]

 

Fixed_rate=[]

 

for i in range(len(Fx_rate_list)):
    l=[]
    for j in Fx_rate_list[i].split(','):
        l.append(j)
        Fixed_rate.append(l)

 

Original_currency = input('')
Target_currency = input('')

 

#this list will take all the possible values
max_list=[-1.0]
temp_list=[]
Temp=''
mult = 0.0

 

for value in Fixed_rate:
    if value[0]==Original_currency and value[1]==Target_currency :
        max_list.append(float(value[-1]))
    elif value[0]==Original_currency:
        Temp=value[1]
        temp_list.append(float(value[-1]))
    elif value[1]==Target_currency and Temp==value[0]:
        temp_list.append(float(value[-1]))
    for i in temp_list:
        mult+=i
    max_list.append(mult)
  
print(max(max_list))


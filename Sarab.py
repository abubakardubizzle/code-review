#this program implements the logic to shift all 
#Zeroes to left of array
def shift_zeroes_to_left(input_arr):
    for i in range(0,len(input_arr)):
        for j in range(i,len(input_arr)):
            if j+1<len(input_arr):
                if input_arr[j]==0 and input_arr[j+1]!=0:
                    temp=input_arr[j]
                    input_arr[j]=input_arr[j+1]
                    input_arr[j+1]=temp
                
    
    return input_arr        
input_array=[1,9,8,4,0,0,2,7,0,6,0]
output_array=shift_zeroes_to_left(input_array)
print("The updated array is\n")
print(output_array)
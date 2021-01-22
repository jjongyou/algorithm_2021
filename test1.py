arr = [('hong', 50), ('lee', 30), ('jun', 80)]
def my_key(x, b):
	return x[1] * b

print("arr : ", arr, ", type : ", type(arr))
print("sorted : ", sorted(arr, key=my_key))
print("my_key : ", my_key)

'''nums = [61488,18221,-1321,90249,-62158,55128,-93476,53905,57644,24630,89599,-95795,-14891,-60298,17690,
 99022,-24006,-89156,80135,-46303,18812,59924,32024,82924,-47519,-77086,1763,68618,53629,-56957,
 95485,99630,-7977,31164,94481,-80239,-57749,-3319,-58231,-94841,-19292,33200,-31446,-3528,2229,
 74241,-19992,-91852,-28073,31453,-74484,35491,38870,-9499,39838,87369,21123,-38616,-89277,-14541,
 -81586,-18569,-58242,-71216,10816,15086,-10519,51080,53257,-4912,-37142,-16723,-69795,54937,-24920,
 68970,-10010,-81717,36203,-67939,73877,-58258,-57183,36637,91518,-8492,-57476,50523,62462,73152,-9511,-66761,28333,-87163,5187]

b= []

for i in nums:
    if i > 0:
        b.append(i)

c = []

for i in nums:
    if i < 0:
        c.append(i)

d = min(b)

e = max(c) * -1

if d==e | d < e:
    print(d)

elif d > e:
    print(e*-1)

# * https://leetcode.com/problems/remove-element/

def removeElement(nums, val) -> int:
        a,k=[],0
        for i in nums:
            if i != val:
                #a.append('_')
                print(i)
                k+=1
                a.append(i)
        print("Value of a right now",a)
        n = a
        print('Value of n right now,',nums)

        return k    

n = [3,2,2,3]
b = removeElement(n,3)
print(n, b)

def tr(n):
     n.append(3)
     n = [12,4]

n = [1,2]
tr(n)
print(n)
'''
# * https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

# nums = [-1,0,0,0,0,3,3]
# a=list(set(nums))
# nums.clear()
# for i in a:
#     nums.append(i)
# k=len(nums)
# print(a)

# n = [0,0,0,0,-1,-1,3,3]
# print(list(set(n)))

# nums = [-1,0,0,0,0,3,3]

# print(nums[5])

# print(nums[6])
# a= []
# for i in range(len(nums)):
#     for j in range(i+1,len(nums)):
#         if nums[i] != nums[j]:
#             if nums[i] not in a:
#                 a.append(nums[i])
# # for i in range(len(a)):
# #     nums.pop(a[i])
# # a = list(set(a))
# print(a)
# # for i in a:
# #     nums.pop(i)
# print(nums)

# * https://leetcode.com/problems/longest-common-prefix/

# strs = ["flower","flow","flight"]
# subs=""
# noofmatches = len(strs)

# def func(subs, noofmatches):
#     if noofmatches==len(strs):
#         subs+=strs[0][len(subs)]
#         noofmatches=0
#         print(subs)
#         for i in strs:
#             print(i)
#             if i[:len(subs)]==subs:
#                 print('inside')
#                 noofmatches+=1
#         print(noofmatches)
#         return func(subs, noofmatches)
#     else:
#         print(subs)
#         if subs=="":
#             return ""
#         return subs[:len(subs)-1]
    
# print(func(subs, noofmatches))

# * The Actual Answer:

# subs=""
# noofmatches = len(strs)

# if len(strs) == 0:
#     return ""

# for i in strs:
#     if i == "":
#         return ""

# if len(strs) == 1:
#     return strs[0]

# def func(subs, noofmatches):
#     if noofmatches==len(strs):
#         if len(subs)<len(strs[0]):
#             subs+=strs[0][len(subs)]
#         else:
#             return subs
#         noofmatches=0
#         for i in strs:
#             if i [:len(subs)]==subs:
#                 noofmatches+=1
#         return func(subs, noofmatches)
#     else:
#         if subs=="":
#             return ""
#         return subs[:len(subs)-1]
# return func(subs, noofmatches)

# * https://leetcode.com/problems/count-elements-with-maximum-frequency/

# d = {i: nums.count(i) for i in set(nums)}
# values = d.values()
# m=max(values)
# totalmax=0
# for i in values:
#     if i==m:
#         totalmax+=i
# return totalmax


# * https://leetcode.com/problems/product-of-array-except-self/

# nums=[1,2,3,4]
# leftarr=[]
# left=1
# rightarr=[]
# right=1
# for i in range(len(nums)):
#     leftarr.append(left)
#     left*=nums[i]
# print(len(leftarr))
# for i in range(len(nums)-1, -1,-1):
#     rightarr.append(right)
#     right*=nums[i]
# print(len(rightarr))
# rightarr=rightarr[::-1]
# for i in range(len(nums)):
#     leftarr[i]*=rightarr[i]

# print(leftarr)

# * https://leetcode.com/problems/plus-one/

# digits=[9,9]

# l=len(digits)-1

# def func(l, digits):
#     if digits[l]!=9:
#         digits[l]+=1
#         print(digits)
#         return digits
#     elif digits[l]==9 and l==0:
#         digits[l]=0
#         digits.insert(0, 1)
#         print('In the second if statement:',digits)
#         return digits
#     elif digits[l]==9 and l!=0:
#         digits[l]=0
#         return  func(l-1, digits)

# print(func(l, digits))

# * https://leetcode.com/problems/sqrtx/

# if x==0:
#     return 0
# elif x==1 or x==2 or x==3:
#     return 1
# elif x==5 or x==6 or x==7:
#     return 2
# for i in range(1, x//2+1):
#     if i*i==x:
#         return i
#     elif i*i>x:
#         return i-1

# * https://leetcode.com/problems/add-binary/

# a="100"
# b="110010"

# la=len(a)
# lb=len(b)
# s=""
# if la>lb:
#     b = "0"*(la-lb)+b
# elif la<lb:
#     a = "0"*(lb-la)+a

# la=len(a)-1
# def func(la, s, carry):
#     if ((a[la] == "1" and b[la] == "0") or (a[la]=="0" and b[la]=="1")) and carry==0 and la!=0:
#         s = "1" + s
#         return func(la-1,s,0)
    
#     elif ((a[la] == "1" and b[la] == "0") or (a[la]=="0" and b[la]=="1")) and carry==0 and la==0:
#         s="1"+s
#         return s
    
#     elif ((a[la] == "1" and b[la] == "0") or (a[la]=="0" and b[la]=="1")) and carry==1 and la==0:
#         s = "10" + s
#         return s
    
#     elif ((a[la] == "1" and b[la] == "0") or (a[la]=="0" and b[la]=="1")) and carry==1 and la!=0:
#         s = "0" + s
#         return func(la-1,s,1)
    
#     elif a[la]=="0" and b[la]=="0" and carry==1 and la!=0:
#         s = "1" + s
#         return func(la-1,s,0)
    
#     elif a[la]=="0" and b[la]=="0" and carry==1 and la==0:
#         s = "1" + s
#         return s

#     elif a[la]=="0" and b[la]=="0" and carry==0 and la==0:
#         s = "0" + s
#         return s
    
#     elif a[la]=="0" and b[la]=="0" and carry==0 and la!=0:
#         s="0"+s
#         return func(la-1, s, 0)

#     elif a[la]=="1" and b[la]=="1" and la==0 and carry==0:
#         s = "10" + s
#         return s
    
#     elif a[la]=="1" and b[la]=="1" and la==0 and carry==1:
#         s="11"+s
#         return s
    
#     elif a[la]=="1" and b[la]=="1" and la!=0 and carry==1:
#         s="1"+s
#         return func(la-1, s, 1)

#     elif a[la]=="1" and b[la]=="1" and la!=0:
#         s = "0" + s
#         return func(la-1, s, 1)

# print(func(la, s, 0))

# * https://leetcode.com/problems/climbing-stairs/

# def func(n, mem):

#     if n not in mem.keys():
#         mem[n] = func(n-1, mem) + func(n-2, mem)
#         return mem[n]

#     else:
#         return mem[n]

# mem = {0:1, 1:1}    
# print(func(44, mem))

# * https://leetcode.com/problems/merge-sorted-array/

# m=0
# n=5
# nums1=[0,0,0,0,0]
# nums2=[1,2,3,4,5]

# if m==0 and n==1:
#     nums1[0]=nums2[0]
# elif m==1 and n==0:
#     print()
# elif m==0 and n==0:
#     print()

# else:
#     i=m-1
#     j=n-1
#     k=m+n-1
#     while k!=-1 and i!=-1 and j!=-1:
#         if nums1[i]>nums2[j]:
#             nums1[k]=nums1[i]
#             i-=1
#             k-=1
#         else:
#             nums1[k]=nums2[j]
#             j-=1
#             k-=1
#     else:
#          if i == -1 and j > -1: # nums2 still has elements to traverse through
#             while j!=-1 and k!=-1:
#                 nums1[k]=nums2[j]
#                 j-=1
#                 k-=1

# print(nums1)

# * https://leetcode.com/problems/reverse-bits/

# n=43261596
# s=""
# final=0
# for i in range(32):
#     a = n % 2
#     s = str(a) + s
#     n = n // 2
# s=s[::-1]
# for i in range(31, -1, -1):
#     final+=int(s[i]) * 2 ** a
#     a+=1
# print(final)

# * https://leetcode.com/problems/ugly-number/

# n=1641249143
# l=[]
# if n in [1,2,3,5]:
#     print(True)
# for i in [2,3,5]:
#     while n%i==0 and n>0:
#         n//=i
#         if n==1:
#             print(True)
# print(False)

# * https://leetcode.com/problems/first-unique-character-in-a-string/

# s='loveleetcode'
# d={}
# for i in s:
#     if i not in d.keys():
#         d[i]=1
#     else:
#         d[i]+=1
# print(d)
# for i in d.keys():
#     if d[i]==1:
#         print(s.find(i))
# print(-1)

# * https://leetcode.com/problems/reverse-string/

# s=['h','e','l']
# j=0
# i=len(s)-1
# while(j!=i):
#     a=s[i]
#     s[i]=s[j]
#     s[j]=a
#     j+=1
#     i-=1
# print(s)

# * https://leetcode.com/problems/reverse-vowels-of-a-string/

# s='leetcode'
# print(list(s))
# l1=[]
# l2=[]
# for i in s:
#     if i.lower() in 'aeiou':
#         l1.append(0)
#         l2.append(i)
#     else:
#         l1.append(i)
# print(l1)
# print(l2)

# p = len(l2)-1

# for i in range(len(l1)):
#     if l1[i]==0:
#         l1[i]=l2[p]
#         p-=1
# print(''.join(l1))

# * https://leetcode.com/problems/isomorphic-strings/

# d1={}
# d2={}
# s='badc'
# t='baba'
# for i in range(len(s)):
#     if (s[i] in d1.keys() and t[i]!=d1[s[i]]) or (t[i] in d2.keys() and s[i]!=d1[t[i]]):
#         print(False)
#     elif (s[i] in d1.keys() and t[i]==d1[s[i]]) or (t[i] in d2.keys() and s[i]==d2[t[i]]):
#         continue
#     d1[s[i]]=t[i]
#     d2[t[i]]=s[i]
# print(True)

# * https://leetcode.com/problems/contains-duplicate-ii/

# nums=[1,0,1,1]
# k=1
# d={}
# for i in range(len(nums)):
#     if nums[i] not in d.keys():
#         d[nums[i]]=i
#     elif abs(i-d[nums[i]])<=k:
#         print(True)
#     else:
#         d[nums[i]]=i
# print(d)
# print(False)

# * https://leetcode.com/problems/missing-number/

# nums=[3,0,1]
# l=dict.fromkeys(range(len(nums)+1))
# for i in nums:
#     l[i]=1
# for i in list(l.keys()):
#     if l[i]==None:
#         print(i)

# * https://leetcode.com/problems/first-bad-version/

# def isBadVersion(n):
#     if n==4:
#         return True
#     return False
# n=5
# def binarysearch(lo,hi):
#     while lo<hi:
#         mid=(lo+hi)//2
#         print('lo', lo)
#         print('hi',hi)
#         print('mid',mid)
#         if isBadVersion(mid):
#             hi=mid
#         else:
#             lo=mid+1
#     return hi
# print(binarysearch(0,n))

# * https://leetcode.com/problems/move-zeroes/

# nums=[0,0,1]
# for i in nums:
#     if i==0:
#         nums.remove(i)
#         nums.append(0)
# print(nums)

# * https://leetcode.com/problems/perfect-number/

# s=1
# num=28
# for i in range(2,int(num**0.5)+1):
#     if num%i==0:
#         print(i)
#         s+=i
#         s+=num//i
#         i*=2
# print(s==num)

# * https://leetcode.com/problems/binary-search/

# nums=[5]
# target=5
# low=0
# high=len(nums)-1
# mid=0
# while low<=high:
#     mid=(high+low)//2 
#     print('mid',mid)
#     print('low',low)
#     print('high',high)
#     if nums[mid]==target:
#         print(mid)
#         break
#     elif nums[mid]<target:
#         low=mid+1
#     elif nums[mid]>target:
#         high=mid-1
# print(-1)

# * https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

# nums=[1,1,2]
# d={}
# l=[]
# for i in range(1, len(nums)+1):
#     d[i]=0
# for i in nums:
#     d[i]+=1
# for i in d:
#     if d[i]==0:
#         l.append(i)
# print(l)

# * https://leetcode.com/problems/intersection-of-two-arrays-ii/

# nums1=[4,5,9]
# nums2=[9,4,9,8,4]
# d1={}
# d2={}
# l=[]
# for i in nums1:
#     if i not in d1:
#         d1[i]=1
#         continue
#     d1[i]+=1

# print(d1)

# for j in nums2:
#     if j not in d2:
#         d2[j]=1
#         continue
#     d2[j]+=1

# print(d2)

# for i in d1:
#     if i in d2 and d1[i]==d2[i]:
#         l.extend([i]*(d1[i]))

#     elif i in d2 and d1[i] >d2[i]:
#         l.extend([i]*d2[i])

#     elif i in d2 and d1[i]<d2[i]:
#         l.extend([i]*d1[i])

# print(l)

# * https://leetcode.com/problems/reverse-only-letters/

# s='ab-cd'
# l=list(s)
# l1=[]
# for i in range(len(l)-1,-1,-1):
#     if l[i].isalpha():
#         l1.append(l[i])
# print(l1)
# j=0
# for i in range(len(l)):
#     if l[i].isalpha():
#         l[i]=l1[j]
#         j+=1
# s=''.join(l)
# print(s)

# * https://leetcode.com/problems/shortest-distance-to-a-character/

# c='e'
# s='leetcode'

# cposition=[]
# output=[]
# for i in range(len(s)):
#     if s[i]==c:
#         cposition.append(i)
# temp=[]
# for i in range(len(s)):
#     if s[i]!=c:
#         for j in range(len(cposition)):
#             temp.append(abs(cposition[j]-i))
#         mindis=min(temp)
#         output.append(mindis)
#         temp=[]
#     else:
#         output.append(0)

# print(output)

# * https://leetcode.com/problems/add-to-array-form-of-integer/

# num=[2,1,5]
# k=806

# a=''
# for i in num:
#     a+=str(i)
# a=int(a)
# a=a+k
# print(a)
# num.clear()
# while a!=0:
#     d=a%10
#     num.append(d)
#     a=a//10
# print(num[::-1])

# * https://leetcode.com/problems/is-subsequence/

# s='abc'
# t="ahbgdc"
# if len(s)==0 or len(t)==0:
#     print(True)
# spointer=0
# tpointer=0
# while tpointer<len(t):
#     if s[spointer]==t[tpointer]:
#         spointer+=1
#     tpointer+=1
# if spointer==len(s):
#     print(True)
# print(False)

# * https://leetcode.com/problems/assign-cookies/

# g=[10,9,8,7]
# s=[5,6,7,8]
# if len(s)==0 or len(g)==0:
#     print(0)
# g.sort()
# s.sort()
# child=0
# cookie=0
# happy=0
# while child<len(g):
#     if cookie<len(s) and s[cookie]>=g[child]:
#         happy+=1
#         child+=1
#     cookie+=1
# print(happy)

# * https://leetcode.com/problems/reverse-string-ii/

# s='abcdefg'
# k=2
# if len(s)<k:
#     print(s[::-1]) 
# s=list(s)
# for i in range(0, len(s), k *2):
#     a=s[i:i+k]
#     s[i:i+k]=a[::-1]
# print(''.join(s))

# * https://leetcode.com/problems/distribute-candies/

# candyType = [1,1,2,3]
# n=len(candyType)//2
# d={}
# for i in candyType:
#     d[i]=1
# print(d)
# print(n)
# can=0
# for i in d:
#     if can<n:
#         can+=1
#     else:
#         break
# print(can)

# * https://leetcode.com/problems/can-place-flowers/

# flowerbed = [1,0,0,0,1,0,0]
# n=2
# a=len(flowerbed)
# if (a==1 and flowerbed[0]==0 and n==1) or n==0:
#     print(True)
# elif a==1 and (flowerbed[0]==0 or flowerbed[0]==1) and n>1:
#     print(False)
# i=0
# while i<a:
#     if (i!=0 and i+1<a and flowerbed[i]==0 and flowerbed[i-1]!=1 and flowerbed[i+1]!=1) or (i==0 and i+1<a and flowerbed[i]==0 and flowerbed[i+1]!=1) or (i==a-1 and flowerbed[i]==0 and flowerbed[i-1]==0):
#         n-=1
#         flowerbed[i]=1
#     print(flowerbed)
#     i+=1
# if n==0:
#     print(True)
# else:
#     print(False)

# * https://leetcode.com/problems/smallest-missing-integer-greater-than-sequential-prefix-sum/

# nums=[46,8,2,4,1,4,10,2,4,10,2,5,7,3,1]
# if len(nums)==1:
#     print(nums[0]+1)
# prefixsum=nums[0]
# j=1
# numadded=0
# for i in range(1,len(nums)):
#     if 1<=j<=i and nums[j]==nums[j-1]+1:
#         prefixsum+=nums[j]
#         numadded+=1
#     elif 1<=j<=i and nums[j]!=nums[j-1]+1:
#         break
#     j+=1
# a=nums[j:]
# a.sort()
# if numadded==0:
#     prefixsum+=1
# for i in range(len(a)):
#     if a[i]==prefixsum:
#         prefixsum+=1
# print(prefixsum)

# * leetcode.com/problems/rank-transform-of-an-array/

# arr=[-1,1,2,3]
# d={}
# l=[]
# for i in arr:
#     d[i]=1
# print(d)
# for i in d:
#     l.append(i)
# l.sort()
# print(l)
# rank=1
# for i in range(len(l)):
#     d[l[i]]=rank
#     rank+=1
# print(d)
# for i in range(len(arr)):
#     arr[i]=d[arr[i]]
# print(arr)

# * https://leetcode.com/problems/add-strings/

# num1="408"
# num2="5"
# d={'1':1,'2':2,'3':3,'4':4,'5':5,'6':6,'7':7,'8':8,'9':9,'0':0}
# s=''
# while len(num1)>len(num2):
#     num2='0'+num2
# while len(num1)<len(num2):
#     num1='0'+num1
# i=len(num1)-1
# carry=0
# c=0
# while i!=-1:
#     c=d[num1[i]]+d[num2[i]]+carry
#     carry=0
#     print(carry,c, s)
#     if c>9 and i==0:
#         s=str(c)+s
#         i-=1
#         continue 
#     elif c>9:
#         carry=c//10
#         c=c%10
#     s=str(c)+s
#     i-=1
# print(s)

# * https://leetcode.com/problems/check-divisibility-by-digit-sum-and-product/description/

# n=10
# s=0
# m=1
# a=n
# while a!=0:
#     d=a%10
#     print(d)
#     s+=d
#     m*=d
#     print(s,m)
#     a//=10
# if n%(s+m)==0:
#     print(True)
# else:
#     print(False)

# * https://leetcode.com/problems/reverse-words-in-a-string/

# s="a good   example"
# s=s.strip()
# a=s.split(' ')
# a=a[::-1]
# s=''
# for i in a:
#     if i!='':
#         s+=i+' '
# print(s.strip())

# * https://leetcode.com/problems/number-complement/description/

# num=4

# if num==1:
#     print(0)
# elif num==2 or num==0:
#     print(1)
# a=0
# j=0
# while num>0:
#     d=num%2
#     if d==0:
#         a+=(2**j)
#     num=num//2
#     j+=1
# print(a)

# * https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c/

a=5
b=2
c=8

if a | b == c:
    print(0)
s1=''
while a!=0:
    d=a%2
    s1=str(d)+s1
    a//=2
s2=''
while b!=0:
    d=b%2
    s2=str(d)+s2
    b//=2
while len(s1)>len(s2):
    s2='0'+s2
while len(s2)>len(s1):
    s1='0'+s1
s3=''
while c!=0:
    d=c%2
    s3=str(d)+s3
    c//=2
while len(s3)<len(s1):
    s3='0'+s3
while len(s3)>len(s2):
    s2='0'+s2
while len(s3)>len(s1):
    s1='0'+s1
i=len(s3)-1
flip=0
while i>-1:
    if s3[i]=='1' and s1[i]=='0' and s2[i]=='0':
        flip+=1
    elif s3[i]=='0' and s1[i]=='1' and s2[i]=='1':
        flip+=2
    elif s3[i]=='0' and ((s1[i]=='1' and s2[i]=='0') or (s1[i]=='0' and s2[i]=='1')):
        flip+=1
        
    i-=1
print(flip)
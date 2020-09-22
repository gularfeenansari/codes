import cv2

img = cv2.imread("images/woodcutters.jpg",cv2.IMREAD_COLOR)

gray = cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)

face_cascade = cv2.CascadeClassifier("cascades/haarcascade_frontalface_default.xml")

faces = face_cascade.detectMultiScale(gray,1.08,5)

for (x,y,w,h) in faces:
    
    img = cv2.rectangle(img,(x,y),(x+w,y+h),(0,255,0),0)


cv2.namedWindow("detected")
cv2.imshow("detected",img)
cv2.waitKey()
cv2.destroyAllWindows()



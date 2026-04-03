# Smart Greenhouse Temperature Control Simulation
### نظام محاكاة التحكم في درجة حرارة الصوبة الزجاجية

**المشرف:** المهندس ربيع عبد الحفيظ الشويهدي  
**الجهة:** كلية التقنية الإلكترونية - طرابلس

## 📝 وصف المشروع
مشروع تعليمي يهدف إلى محاكاة نظام تهوية آلي للصوبات الزجاجية باستخدام Arduino Uno. يقوم النظام بقراءة قيم تماثلية (عبر Potentiometer كمحاكي لحساس DHT11) ومعالجتها رياضياً للتحكم في زاوية فتح نافذة التهوية عبر محرك السيرفو.

## 🛠 المكونات المستخدمة
* Arduino Uno
* Potentiometer (Analog Input)
* Servo Motor (Actuator)
* Breadboard & Jumper wires

## 🚀 المراحل البرمجية
1. **Acquisition:** قراءة البيانات التماثلية من المنفذ `A0`.
2. **Processing:** استخدام دالة `map()` لتحويل النطاق إلى (0-50) درجة مئوية.
3. **Action:** تحويل الحرارة إلى زاوية دوران (0-180) للمحرك المتصل بالمنفذ `3`.

## 📸 مخطط التوصيل
<img width="1536" height="632" alt="Fantastic Vihelmo (1)" src="https://github.com/user-attachments/assets/0756fc18-ca46-40dd-ab87-7b389f2449a6" />

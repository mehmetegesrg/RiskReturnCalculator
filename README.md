# Sharpe Oranı Hesaplayıcı v1.0

![Dil](https://img.shields.io/badge/Language-C-blue.svg)

Bu proje, finansal piyasalarda bir yatırımın risk-getiri profilini objektif olarak değerlendirmek amacıyla geliştirilmiş, C dilinde yazılmış bir komut satırı aracıdır. Kantitatif analizin temel taşlarından olan Sharpe Oranı'nı hesaplayarak, yatırımcılara matematiksel bir bakış açısı sunmayı hedefler.

---

## 🎯 Projenin Amacı ve Kapsamı

Finansal analizde bir yatırımın performansı yalnızca getirisiyle ölçülemez. O getiriyi elde etmek için ne kadar risk alındığı, en az getiri kadar önemlidir. **Sharpe Oranı**, bir yatırımın, aldığı her birim risk (standart sapma) karşılığında, risksiz faiz oranının üzerinde ne kadar ek getiri sağladığını ölçen bir verimlilik metriğidir.

Yüksek bir Sharpe Oranı, genellikle daha verimli bir risk yönetimine ve daha iyi bir risk-ayarlı getiriye işaret eder. Bu araç, bu metriği kullanarak iki veya daha fazla yatırım alternatifini objektif bir şekilde karşılaştırmayı mümkün kılar.

### 📈 Kullanılan Formül

Uygulama, aşağıdaki standart Sharpe Oranı formülünü kullanır:

$$
\text{Sharpe Oranı} = \frac{(R_p - R_f)}{\sigma_p}
$$

Burada:
- **$R_p$**: Portföyün (yatırımın) beklenen getirisi.
- **$R_f$**: Risksiz faiz oranı.
- **$\sigma_p$**: Portföyün standart sapması (riski).

---

## ✨ Temel Özellikler

-   **Dinamik Girdi:** Kullanıcıdan yatırım getirisi, risksiz faiz oranı ve standart sapma değerlerini interaktif olarak alır.
-   **Doğru Hesaplama:** Standart Sharpe Oranı formülünü kullanarak hassas bir hesaplama yapar.
-   **Sonuç Yorumlama:** Hesaplanan oranı belirli eşik değerlere göre (`İyi`, `Çok İyi`, `Mükemmel`) sınıflandırarak kullanıcıya anlık geri bildirim sunar.
-   **Temel Hata Kontrolü:** Sayısal olmayan veya mantıksal olarak geçersiz (örn: negatif risk) girdilere karşı programın kararlılığını korur.

---

## 💻 Kullanım Örneği

Program çalıştırıldığında, kullanıcıdan ilgili finansal verileri girmesi istenir ve sonuçlar aşağıdaki gibi sunulur:

```
====================================================
||          SHARPE ORANI HESAPLAYICI v1.0         ||
====================================================

Yatirim Getirisi Giriniz (Orn: 15): 20
Risksiz Faiz Orani Giriniz (Orn: 5): 4
Standart Sapma (Risk) Giriniz (Orn: 12): 10


*********************************************
* HESAPLAMA SONUCU           *
*********************************************
* Hesaplanan Sharpe Orani: 1.60
* Degerlendirme: Iyi
*********************************************

```

---

## 🔧 Kullanılan Teknolojiler

-   **Programlama Dili:** C
-   **Derleyici:** CLion
-   **Video Anlatımı:** OBS Studio
-   **Yardımcı Araçlar:** Claude, Gemini Pro

---

**Yazar:** Mehmet Ege Sarıgöl

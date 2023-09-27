# Endian
Endian, bilgisayarların bellekte verileri nasıl düzenlediğini belirleyen bir terimdir. Bilgisayarlar, verileri ya 'Little Endian' (en küçük bayttan başlayarak) ya da 'Big Endian' (en büyük bayttan başlayarak) şeklinde saklayabilirler.

Endian Nedir?
Endian, bilgisayarların veri sıralamasını bellekte nasıl düzenlediğini ifade eden bir terimdir. Bilgisayarların, çok baytlı verileri (örneğin, 16-bit, 32-bit veya 64-bit) bellekte nasıl sıraladığını belirleyen bir faktördür. İki temel endian tipi vardır: Little Endian ve Big Endian.

Little Endian
Little endian düzenine sahip sistemler, verileri en küçük bayttan (least significant byte) başlayarak bellekte saklarlar. Örneğin, 32-bit bir sayı "0x01020304" küçük endian düzenine göre bellekte "04 03 02 01" olarak saklanır. Intel ve x86 tabanlı işlemciler, genellikle little endian düzenini kullanır.

Big Endian
Big endian düzenine sahip sistemler, verileri en büyük bayttan (most significant byte) başlayarak bellekte saklarlar. Örneğin, 32-bit bir sayı "0x01020304" büyük endian düzenine göre bellekte "01 02 03 04" olarak saklanır. IBM tabanlı işlemciler ve bazı ağ protokolleri (örneğin, Ethernet çerçeveleri) big endian düzenini kullanır.

Endian tipi, genellikle işlemci ve bellek arasındaki veri sıralamasını tanımlar. Bu, verilerin bellekte nasıl düzenlendiğini ve işlendiğini etkiler. Uygulama geliştirirken veya farklı endian tipine sahip sistemler arasında veri transferi yaparken, uygun dönüşümlerin yapılması gerekebilir.

Endian tipi, özellikle çok platformlu yazılım geliştirme ve ağ iletişimi için önemlidir. Doğru endian tipini kullanmak ve uyumlu veri alışverişini sağlamak, veri uyumsuzluğunu önler ve sistemler arasında sorunsuz iletişim sağlar.

Test

[Testinizi kendi bilgisayarınızda yapabilirsiniz, buradan ulaşın.](https://github.com/HsynDmrl/Endian/blob/master/endianControl.c)

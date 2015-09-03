#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x17 = 27U;
int32_t t0 = -57594;
int32_t x30 = -1;
int64_t x31 = -1LL;
int64_t x41 = 19086401LL;
volatile int64_t t3 = 4201975324817409LL;
uint64_t x65 = 1676343775767LLU;
int64_t x109 = INT64_MAX;
int8_t x110 = 0;
int16_t x112 = INT16_MIN;
static volatile int64_t t7 = -9327168195LL;
static uint16_t x141 = UINT16_MAX;
volatile int8_t x173 = 11;
static int8_t x175 = -1;
uint16_t x210 = 752U;
int64_t x213 = 391157521395022LL;
int32_t x214 = -355;
volatile int16_t x216 = INT16_MAX;
volatile int64_t x258 = -1757251290LL;
volatile int8_t x318 = INT8_MAX;
int32_t x325 = 23;
uint16_t x330 = 11U;
volatile uint8_t x332 = 1U;
static uint8_t x341 = 5U;
int8_t x350 = INT8_MIN;
int32_t t21 = 1447332;
volatile uint8_t x385 = 6U;
int64_t t22 = -60938LL;
int32_t t23 = -5603;
int64_t x397 = 1489534922933892049LL;
static int32_t x404 = INT32_MAX;
uint8_t x406 = UINT8_MAX;
static volatile uint64_t x424 = UINT64_MAX;
int8_t x459 = INT8_MIN;
uint32_t x481 = 106673U;
int64_t t29 = 0LL;
int16_t x530 = INT16_MIN;
uint16_t x545 = UINT16_MAX;
volatile int8_t x548 = INT8_MIN;
static uint64_t x557 = 4LLU;
int32_t x566 = INT32_MIN;
volatile int32_t x568 = -1;
int64_t x573 = INT64_MAX;
int32_t x574 = INT32_MAX;
static int16_t x615 = 1;
int64_t x616 = -1711272389LL;
int64_t x702 = INT64_MIN;
volatile int64_t x724 = INT64_MIN;
volatile int64_t t41 = 24117649124LL;
volatile int64_t x726 = 602231388333432843LL;
int8_t x733 = INT8_MAX;
int64_t t43 = 717541738121554008LL;
int64_t x771 = 40033785569847LL;
int16_t x772 = INT16_MIN;
static volatile uint64_t t44 = 1237LLU;
int64_t x806 = INT64_MAX;
int64_t x808 = INT64_MAX;
volatile int64_t t46 = -3659721367LL;
uint8_t x853 = 0U;
int8_t x872 = 1;
uint64_t x889 = 37LLU;
uint8_t x929 = UINT8_MAX;
uint64_t x932 = 28924293LLU;
int64_t x978 = INT64_MIN;
int64_t x989 = 346043826646LL;
static uint64_t x997 = UINT64_MAX;
uint64_t t56 = 3LLU;
int32_t x1056 = INT32_MIN;
uint64_t t58 = 12LLU;
volatile uint32_t t59 = 205U;
static int32_t x1102 = INT32_MAX;
int8_t x1103 = INT8_MAX;
uint16_t x1104 = 3U;
int32_t t60 = 2641;
int16_t x1108 = 1463;
int16_t x1131 = 1;
int32_t x1148 = INT32_MIN;
int8_t x1160 = 55;
volatile int64_t t65 = 0LL;
uint32_t x1249 = 457024794U;
int32_t x1251 = INT32_MIN;
uint8_t x1253 = 6U;
int8_t x1254 = INT8_MIN;
static volatile int16_t x1278 = 780;
int16_t x1285 = INT16_MAX;
uint16_t x1289 = 1027U;
static uint8_t x1341 = UINT8_MAX;
int32_t x1355 = 8;
volatile int8_t x1364 = 2;
static uint8_t x1378 = 0U;
int32_t x1379 = INT32_MIN;
int16_t x1418 = 15;
uint16_t x1441 = UINT16_MAX;
int16_t x1462 = -62;
static int8_t x1463 = 1;
uint16_t x1541 = UINT16_MAX;
static volatile int32_t x1550 = -3608540;
int8_t x1560 = INT8_MIN;
volatile int32_t x1588 = -1;
uint8_t x1691 = UINT8_MAX;
static uint8_t x1706 = 17U;
volatile uint16_t x1723 = 20U;
volatile uint8_t x1740 = 0U;
int32_t x1777 = 104830202;
static uint64_t x1779 = 89071807517418LLU;
volatile int16_t x1780 = -4331;
volatile int16_t x1783 = 119;
uint32_t x1801 = UINT32_MAX;
uint16_t x1810 = 15U;


void f0(void) {
	int32_t x18 = INT32_MIN;
	uint32_t x19 = 73U;
	int32_t x20 = 1225;

	t0 = ((x17<<(x18%x19))^x20);

	if (t0 != 1770697) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x29 = INT64_MAX;
	int32_t x32 = 1;
	int64_t t1 = 47499131383591452LL;

	t1 = ((x29<<(x30%x31))^x32);

	if (t1 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x42 = 28U;
	static uint32_t x43 = UINT32_MAX;
	int64_t x44 = INT64_MAX;
	int64_t t2 = 1112228030944LL;

	t2 = ((x41<<(x42%x43))^x44);

	if (t2 != 9218248570098941951LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x49 = 22U;
	volatile int32_t x50 = 34712;
	int8_t x51 = INT8_MIN;
	int64_t x52 = INT64_MAX;

	t3 = ((x49<<(x50%x51))^x52);

	if (t3 != 9223372036485677055LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x53 = 138084894141167LL;
	uint16_t x54 = 6U;
	uint64_t x55 = 56122686961086668LLU;
	volatile int64_t x56 = -64147567LL;
	volatile int64_t t4 = -1233281027369579459LL;

	t4 = ((x53<<(x54%x55))^x56);

	if (t4 != -8837433286749103LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x61 = 9252169;
	int32_t x62 = INT32_MIN;
	volatile int16_t x63 = INT16_MIN;
	int64_t x64 = 0LL;
	static int64_t t5 = 8013000983745869LL;

	t5 = ((x61<<(x62%x63))^x64);

	if (t5 != 9252169LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x66 = 314791U;
	static int8_t x67 = 31;
	int8_t x68 = INT8_MIN;
	volatile uint64_t t6 = 1061978LLU;

	t6 = ((x65<<(x66%x67))^x68);

	if (t6 != 18227022342332219264LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x111 = -1;

	t7 = ((x109<<(x110%x111))^x112);

	if (t7 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x142 = -632;
	int64_t x143 = -1LL;
	volatile int16_t x144 = -1;
	int32_t t8 = -1627040;

	t8 = ((x141<<(x142%x143))^x144);

	if (t8 != -65536) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint8_t x145 = UINT8_MAX;
	static int16_t x146 = INT16_MAX;
	static int64_t x147 = -28LL;
	int64_t x148 = -2LL;
	int64_t t9 = -31480056157685LL;

	t9 = ((x145<<(x146%x147))^x148);

	if (t9 != -32642LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x174 = UINT16_MAX;
	int16_t x176 = -222;
	int32_t t10 = 1;

	t10 = ((x173<<(x174%x175))^x176);

	if (t10 != -215) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x209 = INT32_MAX;
	int64_t x211 = -1LL;
	int16_t x212 = -1;
	int32_t t11 = INT32_MIN;

	t11 = ((x209<<(x210%x211))^x212);

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x215 = -1;
	volatile int64_t t12 = -13417057557590LL;

	t12 = ((x213<<(x214%x215))^x216);

	if (t12 != 391157521404593LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x257 = 3034744246998837857LLU;
	uint8_t x259 = 5U;
	uint8_t x260 = 80U;
	volatile uint64_t t13 = 3LLU;

	t13 = ((x257<<(x258%x259))^x260);

	if (t13 != 3034744246998837809LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x289 = 11LL;
	int64_t x290 = 238254955389638669LL;
	int64_t x291 = -1LL;
	volatile int8_t x292 = INT8_MIN;
	int64_t t14 = -54484760LL;

	t14 = ((x289<<(x290%x291))^x292);

	if (t14 != -117LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x317 = 3318260436LL;
	uint8_t x319 = 4U;
	volatile int8_t x320 = INT8_MAX;
	volatile int64_t t15 = 28LL;

	t15 = ((x317<<(x318%x319))^x320);

	if (t15 != 26546083551LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x326 = 0;
	int64_t x327 = INT64_MIN;
	uint16_t x328 = UINT16_MAX;
	volatile int32_t t16 = 85900;

	t16 = ((x325<<(x326%x327))^x328);

	if (t16 != 65512) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x329 = 0;
	int16_t x331 = -1;
	int32_t t17 = 5;

	t17 = ((x329<<(x330%x331))^x332);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x342 = -1;
	static volatile int16_t x343 = -1;
	uint32_t x344 = UINT32_MAX;
	volatile uint32_t t18 = 157110831U;

	t18 = ((x341<<(x342%x343))^x344);

	if (t18 != 4294967290U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x349 = 6U;
	int32_t x351 = -1;
	uint16_t x352 = 855U;
	int32_t t19 = -63128895;

	t19 = ((x349<<(x350%x351))^x352);

	if (t19 != 849) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x365 = 644038847LLU;
	static uint8_t x366 = 35U;
	volatile uint16_t x367 = 4U;
	int8_t x368 = -14;
	uint64_t t20 = 18335835043678012LLU;

	t20 = ((x365<<(x366%x367))^x368);

	if (t20 != 18446744068557240842LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x373 = 0U;
	static uint16_t x374 = UINT16_MAX;
	int64_t x375 = -1LL;
	uint8_t x376 = 1U;

	t21 = ((x373<<(x374%x375))^x376);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x386 = 945;
	int16_t x387 = -1;
	int64_t x388 = -11316434LL;

	t22 = ((x385<<(x386%x387))^x388);

	if (t22 != -11316440LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x389 = 15647U;
	static uint32_t x390 = 0U;
	static int16_t x391 = -1;
	int32_t x392 = INT32_MIN;

	t23 = ((x389<<(x390%x391))^x392);

	if (t23 != -2147468001) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x398 = 406316645U;
	volatile uint16_t x399 = 1U;
	uint64_t x400 = UINT64_MAX;
	static volatile uint64_t t24 = 337909308LLU;

	t24 = ((x397<<(x398%x399))^x400);

	if (t24 != 16957209150775659566LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x401 = 35LLU;
	static uint16_t x402 = UINT16_MAX;
	static int8_t x403 = INT8_MAX;
	volatile uint64_t t25 = 260133414LLU;

	t25 = ((x401<<(x402%x403))^x404);

	if (t25 != 2147483367LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x405 = INT8_MAX;
	static int32_t x407 = -1;
	int8_t x408 = INT8_MIN;
	static volatile int32_t t26 = 17;

	t26 = ((x405<<(x406%x407))^x408);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x421 = UINT8_MAX;
	int16_t x422 = INT16_MIN;
	int16_t x423 = 8;
	volatile uint64_t t27 = 34302858395931LLU;

	t27 = ((x421<<(x422%x423))^x424);

	if (t27 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x457 = 998233307647598LLU;
	static int64_t x458 = 8LL;
	static volatile int64_t x460 = -1LL;
	uint64_t t28 = 996020929881840LLU;

	t28 = ((x457<<(x458%x459))^x460);

	if (t28 != 18191196346951766527LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x482 = 0;
	volatile uint32_t x483 = 621505881U;
	int64_t x484 = -248014LL;

	t29 = ((x481<<(x482%x483))^x484);

	if (t29 != -157821LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x489 = 88U;
	int64_t x490 = 30421LL;
	uint8_t x491 = 109U;
	int32_t x492 = INT32_MAX;
	volatile int32_t t30 = -1268;

	t30 = ((x489<<(x490%x491))^x492);

	if (t30 != 2147393535) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x521 = UINT8_MAX;
	int64_t x522 = INT64_MIN;
	int16_t x523 = INT16_MIN;
	volatile int8_t x524 = INT8_MIN;
	int32_t t31 = 5;

	t31 = ((x521<<(x522%x523))^x524);

	if (t31 != -129) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x525 = 93;
	int32_t x526 = INT32_MIN;
	int32_t x527 = INT32_MIN;
	int32_t x528 = INT32_MAX;
	int32_t t32 = 3;

	t32 = ((x525<<(x526%x527))^x528);

	if (t32 != 2147483554) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x529 = 53U;
	int16_t x531 = INT16_MIN;
	int64_t x532 = 378819395379049LL;
	int64_t t33 = 3781454LL;

	t33 = ((x529<<(x530%x531))^x532);

	if (t33 != 378819395379036LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x546 = 14U;
	volatile int64_t x547 = INT64_MIN;
	static volatile int32_t t34 = 962854456;

	t34 = ((x545<<(x546%x547))^x548);

	if (t34 != -1073725568) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x558 = 8117LLU;
	volatile uint8_t x559 = 22U;
	uint64_t x560 = 2445009LLU;
	volatile uint64_t t35 = 140381268645604703LLU;

	t35 = ((x557<<(x558%x559))^x560);

	if (t35 != 10833617LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x565 = 3785U;
	int32_t x567 = INT32_MIN;
	volatile int32_t t36 = -602113;

	t36 = ((x565<<(x566%x567))^x568);

	if (t36 != -3786) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x575 = -1LL;
	volatile int16_t x576 = 2;
	int64_t t37 = -45356785754LL;

	t37 = ((x573<<(x574%x575))^x576);

	if (t37 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint32_t x609 = 16613749U;
	volatile uint32_t x610 = UINT32_MAX;
	int64_t x611 = -1LL;
	static volatile int16_t x612 = -1;
	static uint32_t t38 = 6U;

	t38 = ((x609<<(x610%x611))^x612);

	if (t38 != 4278353546U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x613 = 588828600U;
	static volatile int32_t x614 = -65115;
	static volatile int64_t t39 = -521362440119537403LL;

	t39 = ((x613<<(x614%x615))^x616);

	if (t39 != -1189559933LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x701 = 216812784167LLU;
	static int16_t x703 = -1;
	uint16_t x704 = UINT16_MAX;
	volatile uint64_t t40 = 89673898464LLU;

	t40 = ((x701<<(x702%x703))^x704);

	if (t40 != 216812778968LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x721 = 1U;
	static int32_t x722 = INT32_MAX;
	int32_t x723 = 8;

	t41 = ((x721<<(x722%x723))^x724);

	if (t41 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x725 = UINT32_MAX;
	static int8_t x727 = INT8_MIN;
	int32_t x728 = INT32_MAX;
	uint32_t t42 = 1U;

	t42 = ((x725<<(x726%x727))^x728);

	if (t42 != 2147485695U) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x734 = INT32_MIN;
	uint16_t x735 = 2U;
	int64_t x736 = INT64_MAX;

	t43 = ((x733<<(x734%x735))^x736);

	if (t43 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x769 = UINT64_MAX;
	static uint16_t x770 = 7U;

	t44 = ((x769<<(x770%x771))^x772);

	if (t44 != 32640LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x789 = UINT16_MAX;
	static uint32_t x790 = 0U;
	static uint8_t x791 = UINT8_MAX;
	uint64_t x792 = 35LLU;
	uint64_t t45 = 2635LLU;

	t45 = ((x789<<(x790%x791))^x792);

	if (t45 != 65500LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x805 = INT32_MAX;
	int8_t x807 = INT8_MAX;

	t46 = ((x805<<(x806%x807))^x808);

	if (t46 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x837 = 3U;
	static int16_t x838 = INT16_MAX;
	int8_t x839 = INT8_MAX;
	int64_t x840 = INT64_MAX;
	volatile int64_t t47 = -42063998LL;

	t47 = ((x837<<(x838%x839))^x840);

	if (t47 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x841 = 1579033317314950LLU;
	uint64_t x842 = UINT64_MAX;
	static volatile int8_t x843 = INT8_MAX;
	int64_t x844 = INT64_MIN;
	volatile uint64_t t48 = 103662LLU;

	t48 = ((x841<<(x842%x843))^x844);

	if (t48 != 9226530103489405708LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x854 = 9U;
	volatile int64_t x855 = INT64_MAX;
	uint32_t x856 = 1015484U;
	uint32_t t49 = 28974634U;

	t49 = ((x853<<(x854%x855))^x856);

	if (t49 != 1015484U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x869 = 8U;
	uint8_t x870 = 7U;
	uint64_t x871 = UINT64_MAX;
	volatile int32_t t50 = 2;

	t50 = ((x869<<(x870%x871))^x872);

	if (t50 != 1025) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x890 = 0U;
	int8_t x891 = 2;
	static int8_t x892 = 1;
	volatile uint64_t t51 = 3983LLU;

	t51 = ((x889<<(x890%x891))^x892);

	if (t51 != 36LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x930 = 803751135515LL;
	volatile int8_t x931 = -27;
	volatile uint64_t t52 = 38451LLU;

	t52 = ((x929<<(x930%x931))^x932);

	if (t52 != 4675973LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x941 = 383555189345793451LLU;
	int64_t x942 = 0LL;
	int8_t x943 = 3;
	int32_t x944 = INT32_MIN;
	volatile uint64_t t53 = 4213526349294413LLU;

	t53 = ((x941<<(x942%x943))^x944);

	if (t53 != 18063188883179746731LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x977 = 12U;
	int16_t x979 = INT16_MIN;
	int8_t x980 = 1;
	int32_t t54 = 37129;

	t54 = ((x977<<(x978%x979))^x980);

	if (t54 != 13) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x990 = INT64_MIN;
	int32_t x991 = INT32_MIN;
	int32_t x992 = INT32_MIN;
	int64_t t55 = 1417969LL;

	t55 = ((x989<<(x990%x991))^x992);

	if (t55 != -347593391658LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x998 = 2U;
	int64_t x999 = -1LL;
	volatile int16_t x1000 = 369;

	t56 = ((x997<<(x998%x999))^x1000);

	if (t56 != 18446744073709551246LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint64_t x1025 = 17129538250470LLU;
	static volatile uint64_t x1026 = 4LLU;
	int64_t x1027 = -226769873275701LL;
	int16_t x1028 = 0;
	uint64_t t57 = 37LLU;

	t57 = ((x1025<<(x1026%x1027))^x1028);

	if (t57 != 274072612007520LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x1053 = 83569987LLU;
	uint8_t x1054 = 32U;
	static int8_t x1055 = -24;

	t58 = ((x1053<<(x1054%x1055))^x1056);

	if (t58 != 18446744054301278976LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x1061 = 288804311U;
	uint16_t x1062 = 6U;
	uint16_t x1063 = 1397U;
	static int16_t x1064 = -1;

	t59 = ((x1061<<(x1062%x1063))^x1064);

	if (t59 != 2991360575U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x1101 = UINT16_MAX;

	t60 = ((x1101<<(x1102%x1103))^x1104);

	if (t60 != 8388483) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x1105 = INT8_MAX;
	int64_t x1106 = INT64_MIN;
	volatile int64_t x1107 = INT64_MIN;
	static volatile int32_t t61 = 8;

	t61 = ((x1105<<(x1106%x1107))^x1108);

	if (t61 != 1480) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x1129 = 243U;
	int16_t x1130 = INT16_MIN;
	static int64_t x1132 = -20292550861LL;
	int64_t t62 = -833992537909517LL;

	t62 = ((x1129<<(x1130%x1131))^x1132);

	if (t62 != -20292550720LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x1145 = 44;
	uint8_t x1146 = 1U;
	volatile int8_t x1147 = INT8_MAX;
	static volatile int32_t t63 = 1443508;

	t63 = ((x1145<<(x1146%x1147))^x1148);

	if (t63 != -2147483560) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x1157 = 6;
	int32_t x1158 = INT32_MIN;
	volatile int32_t x1159 = INT32_MIN;
	volatile int32_t t64 = -11;

	t64 = ((x1157<<(x1158%x1159))^x1160);

	if (t64 != 49) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x1185 = 87539LL;
	static uint32_t x1186 = 3U;
	static volatile int16_t x1187 = INT16_MAX;
	int8_t x1188 = -3;

	t65 = ((x1185<<(x1186%x1187))^x1188);

	if (t65 != -700315LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x1250 = INT32_MIN;
	static int16_t x1252 = INT16_MIN;
	volatile uint32_t t66 = 129916052U;

	t66 = ((x1249<<(x1250%x1251))^x1252);

	if (t66 != 3837928730U) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x1255 = INT8_MIN;
	int8_t x1256 = INT8_MIN;
	volatile int32_t t67 = 107056;

	t67 = ((x1253<<(x1254%x1255))^x1256);

	if (t67 != -122) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x1277 = 7U;
	static int16_t x1279 = -1;
	int16_t x1280 = INT16_MAX;
	uint32_t t68 = 482081266U;

	t68 = ((x1277<<(x1278%x1279))^x1280);

	if (t68 != 32760U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x1286 = 8;
	static uint8_t x1287 = UINT8_MAX;
	int32_t x1288 = INT32_MIN;
	volatile int32_t t69 = -1910681;

	t69 = ((x1285<<(x1286%x1287))^x1288);

	if (t69 != -2139095296) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x1290 = 12U;
	volatile int16_t x1291 = INT16_MIN;
	int8_t x1292 = INT8_MAX;
	volatile int32_t t70 = -1950189;

	t70 = ((x1289<<(x1290%x1291))^x1292);

	if (t70 != 4206719) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x1342 = -1LL;
	int32_t x1343 = -1;
	static uint64_t x1344 = UINT64_MAX;
	volatile uint64_t t71 = 21295029009727317LLU;

	t71 = ((x1341<<(x1342%x1343))^x1344);

	if (t71 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x1353 = UINT64_MAX;
	uint8_t x1354 = 14U;
	static volatile int16_t x1356 = -7121;
	static volatile uint64_t t72 = 29190LLU;

	t72 = ((x1353<<(x1354%x1355))^x1356);

	if (t72 != 7151LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x1361 = INT64_MAX;
	uint16_t x1362 = UINT16_MAX;
	uint8_t x1363 = 3U;
	volatile int64_t t73 = 34542278171916LL;

	t73 = ((x1361<<(x1362%x1363))^x1364);

	if (t73 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x1365 = 0;
	uint32_t x1366 = 26U;
	volatile uint8_t x1367 = 6U;
	volatile int8_t x1368 = INT8_MIN;
	volatile int32_t t74 = 1554281;

	t74 = ((x1365<<(x1366%x1367))^x1368);

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x1377 = 27U;
	int8_t x1380 = -23;
	int32_t t75 = 0;

	t75 = ((x1377<<(x1378%x1379))^x1380);

	if (t75 != -14) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x1413 = 0U;
	int32_t x1414 = -1;
	uint8_t x1415 = 1U;
	static int64_t x1416 = INT64_MIN;
	volatile int64_t t76 = INT64_MIN;

	t76 = ((x1413<<(x1414%x1415))^x1416);

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x1417 = 16220U;
	int16_t x1419 = INT16_MAX;
	volatile uint64_t x1420 = 2LLU;
	volatile uint64_t t77 = 1481LLU;

	t77 = ((x1417<<(x1418%x1419))^x1420);

	if (t77 != 531496962LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x1442 = -1;
	int16_t x1443 = 1;
	static volatile int64_t x1444 = INT64_MAX;
	volatile int64_t t78 = -765372515394263LL;

	t78 = ((x1441<<(x1442%x1443))^x1444);

	if (t78 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x1461 = UINT8_MAX;
	uint8_t x1464 = 3U;
	volatile int32_t t79 = -55;

	t79 = ((x1461<<(x1462%x1463))^x1464);

	if (t79 != 252) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x1465 = 0;
	int64_t x1466 = INT64_MIN;
	int16_t x1467 = INT16_MIN;
	static volatile int16_t x1468 = -6238;
	static volatile int32_t t80 = 56;

	t80 = ((x1465<<(x1466%x1467))^x1468);

	if (t80 != -6238) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x1477 = 31U;
	uint8_t x1478 = 0U;
	uint16_t x1479 = 15468U;
	int8_t x1480 = 24;
	volatile int32_t t81 = 38489;

	t81 = ((x1477<<(x1478%x1479))^x1480);

	if (t81 != 7) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x1542 = INT8_MIN;
	int8_t x1543 = INT8_MIN;
	uint32_t x1544 = 245U;
	volatile uint32_t t82 = 4515578U;

	t82 = ((x1541<<(x1542%x1543))^x1544);

	if (t82 != 65290U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x1549 = 1;
	int8_t x1551 = -1;
	volatile uint8_t x1552 = UINT8_MAX;
	int32_t t83 = -2630;

	t83 = ((x1549<<(x1550%x1551))^x1552);

	if (t83 != 254) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x1557 = UINT8_MAX;
	int64_t x1558 = 99869LL;
	static int8_t x1559 = -29;
	int32_t t84 = -2186;

	t84 = ((x1557<<(x1558%x1559))^x1560);

	if (t84 != -1069547648) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x1585 = UINT64_MAX;
	int8_t x1586 = -1;
	int32_t x1587 = -1;
	volatile uint64_t t85 = 101077092032360LLU;

	t85 = ((x1585<<(x1586%x1587))^x1588);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x1589 = UINT64_MAX;
	int8_t x1590 = INT8_MIN;
	int64_t x1591 = 4LL;
	int16_t x1592 = 3195;
	uint64_t t86 = 235610196050LLU;

	t86 = ((x1589<<(x1590%x1591))^x1592);

	if (t86 != 18446744073709548420LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x1621 = 76U;
	static uint32_t x1622 = UINT32_MAX;
	static uint16_t x1623 = UINT16_MAX;
	static int32_t x1624 = INT32_MIN;
	int32_t t87 = -16740070;

	t87 = ((x1621<<(x1622%x1623))^x1624);

	if (t87 != -2147483572) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x1657 = 1U;
	volatile int8_t x1658 = INT8_MAX;
	uint16_t x1659 = 58U;
	int64_t x1660 = 0LL;
	static volatile int64_t t88 = 40631915011536LL;

	t88 = ((x1657<<(x1658%x1659))^x1660);

	if (t88 != 2048LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x1689 = 1U;
	uint16_t x1690 = UINT16_MAX;
	uint8_t x1692 = 3U;
	uint32_t t89 = 2053U;

	t89 = ((x1689<<(x1690%x1691))^x1692);

	if (t89 != 2U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x1705 = 26869LLU;
	static uint16_t x1707 = 2U;
	uint8_t x1708 = 57U;
	volatile uint64_t t90 = 6141927051419278844LLU;

	t90 = ((x1705<<(x1706%x1707))^x1708);

	if (t90 != 53715LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x1717 = UINT64_MAX;
	uint16_t x1718 = 14U;
	int64_t x1719 = -394046529200716608LL;
	volatile int32_t x1720 = INT32_MIN;
	uint64_t t91 = 2120080527126978LLU;

	t91 = ((x1717<<(x1718%x1719))^x1720);

	if (t91 != 2147467264LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x1721 = 7138LLU;
	static volatile int64_t x1722 = INT64_MAX;
	int16_t x1724 = INT16_MAX;
	static volatile uint64_t t92 = 236374425174LLU;

	t92 = ((x1721<<(x1722%x1723))^x1724);

	if (t92 != 888575LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x1737 = INT64_MAX;
	static volatile int8_t x1738 = INT8_MAX;
	volatile int64_t x1739 = -1LL;
	int64_t t93 = INT64_MAX;

	t93 = ((x1737<<(x1738%x1739))^x1740);

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x1753 = INT32_MAX;
	volatile uint16_t x1754 = 7836U;
	int8_t x1755 = 1;
	uint16_t x1756 = 19U;
	volatile int32_t t94 = -346086704;

	t94 = ((x1753<<(x1754%x1755))^x1756);

	if (t94 != 2147483628) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x1778 = 0U;
	int32_t t95 = 42720;

	t95 = ((x1777<<(x1778%x1779))^x1780);

	if (t95 != -104825873) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x1781 = 0;
	uint64_t x1782 = 1282649107802LLU;
	static int32_t x1784 = INT32_MIN;
	int32_t t96 = INT32_MIN;

	t96 = ((x1781<<(x1782%x1783))^x1784);

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x1802 = INT8_MIN;
	int16_t x1803 = -1;
	static int16_t x1804 = INT16_MIN;
	volatile uint32_t t97 = 14U;

	t97 = ((x1801<<(x1802%x1803))^x1804);

	if (t97 != 32767U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x1805 = 2398653U;
	static int64_t x1806 = 0LL;
	volatile int64_t x1807 = INT64_MAX;
	int8_t x1808 = 0;
	volatile uint32_t t98 = 6U;

	t98 = ((x1805<<(x1806%x1807))^x1808);

	if (t98 != 2398653U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x1809 = 1892;
	int8_t x1811 = INT8_MIN;
	static volatile int16_t x1812 = -1;
	int32_t t99 = 38928;

	t99 = ((x1809<<(x1810%x1811))^x1812);

	if (t99 != -61997057) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}


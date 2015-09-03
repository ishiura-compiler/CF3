#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x21 = 6881775138025085LL;
int64_t x22 = -79LL;
uint8_t x24 = 5U;
volatile int64_t t2 = -1826553943LL;
static int32_t x90 = INT32_MIN;
volatile int32_t x137 = INT32_MAX;
volatile int64_t x162 = 224429LL;
uint8_t x221 = UINT8_MAX;
volatile int64_t x222 = -1LL;
volatile int32_t x224 = INT32_MIN;
int32_t x347 = INT32_MAX;
volatile uint8_t x349 = UINT8_MAX;
uint8_t x351 = 45U;
static int64_t x367 = INT64_MIN;
int16_t x388 = INT16_MAX;
int32_t x500 = 1;
int32_t t17 = -248081;
int16_t x517 = INT16_MAX;
int64_t x545 = INT64_MAX;
int64_t t19 = 50LL;
static int8_t x597 = 35;
static volatile int32_t t21 = 140665592;
static int32_t x626 = INT32_MIN;
int64_t x681 = 5268626LL;
int16_t x683 = -3;
int64_t t24 = 48LL;
uint32_t x701 = 64681830U;
uint32_t x769 = 1336536426U;
volatile uint8_t x779 = 2U;
int32_t x796 = INT32_MIN;
int64_t x856 = 208403912849240747LL;
static int32_t x874 = INT32_MIN;
volatile uint8_t x876 = UINT8_MAX;
int32_t x890 = INT32_MIN;
uint64_t x905 = 38009025LLU;
volatile uint64_t t38 = 4954052LLU;
int64_t x978 = INT64_MAX;
volatile uint64_t t43 = 250243931080124388LLU;
uint16_t x1023 = 11015U;
uint64_t x1065 = UINT64_MAX;
uint32_t x1069 = 1U;
int8_t x1082 = 0;
volatile int32_t t49 = -17919143;
int64_t x1145 = 2302900700117LL;
uint8_t x1185 = 2U;
int32_t x1187 = INT32_MIN;
volatile uint32_t t51 = 547441U;
uint16_t x1241 = UINT16_MAX;
int32_t t54 = INT32_MIN;
int32_t x1256 = -87806259;
uint64_t x1329 = UINT64_MAX;
uint16_t x1335 = 7U;
static int8_t x1362 = 12;
uint16_t x1395 = 3U;
uint32_t x1428 = 18578346U;
static uint64_t x1472 = 3693673726105162185LLU;
static volatile int8_t x1532 = -8;
static volatile int16_t x1540 = INT16_MAX;
uint64_t x1616 = 34468436LLU;
volatile int64_t x1623 = INT64_MIN;
volatile int16_t x1666 = 3223;
uint64_t x1720 = 87042338909LLU;
int64_t x1739 = INT64_MIN;
int8_t x1740 = INT8_MIN;
uint32_t x1806 = 189U;
volatile int32_t x1808 = -2776654;
uint64_t t86 = 218468097610564LLU;
int32_t x1831 = INT32_MAX;
static volatile uint64_t t90 = 412211257LLU;
uint32_t x1898 = 12U;
uint32_t x1909 = 2109211243U;
static uint32_t t92 = 11961U;
uint32_t x1937 = 32225397U;
volatile int64_t t95 = 476015151LL;
uint32_t x2028 = 1942426U;
volatile uint32_t t98 = 1106156995U;
uint8_t x2075 = 11U;


void f0(void) {
	volatile uint8_t x9 = 2U;
	static int64_t x10 = 6220060989364LL;
	uint64_t x11 = 1LLU;
	volatile int32_t x12 = -1;
	int32_t t0 = 29;

	t0 = ((x9>>(x10&x11))^x12);

	if (t0 != -3) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x17 = 15454U;
	int16_t x18 = 2775;
	int16_t x19 = INT16_MIN;
	uint16_t x20 = 88U;
	static volatile uint32_t t1 = 111425U;

	t1 = ((x17>>(x18&x19))^x20);

	if (t1 != 15366U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x23 = INT8_MAX;

	t2 = ((x21>>(x22&x23))^x24);

	if (t2 != 9LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x89 = INT16_MAX;
	static volatile int64_t x91 = 28LL;
	int8_t x92 = INT8_MIN;
	static volatile int32_t t3 = 14021636;

	t3 = ((x89>>(x90&x91))^x92);

	if (t3 != -32641) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x138 = 0LLU;
	int64_t x139 = -43LL;
	int8_t x140 = 1;
	volatile int32_t t4 = 28233138;

	t4 = ((x137>>(x138&x139))^x140);

	if (t4 != 2147483646) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x161 = UINT16_MAX;
	int64_t x163 = INT64_MIN;
	static int64_t x164 = INT64_MAX;
	int64_t t5 = -98257LL;

	t5 = ((x161>>(x162&x163))^x164);

	if (t5 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x223 = 2;
	volatile int32_t t6 = 123;

	t6 = ((x221>>(x222&x223))^x224);

	if (t6 != -2147483585) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x229 = UINT64_MAX;
	uint8_t x230 = 58U;
	int8_t x231 = INT8_MIN;
	uint64_t x232 = 1560691078LLU;
	volatile uint64_t t7 = 13972869294428470LLU;

	t7 = ((x229>>(x230&x231))^x232);

	if (t7 != 18446744072148860537LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x249 = UINT16_MAX;
	int8_t x250 = INT8_MAX;
	int8_t x251 = 1;
	int16_t x252 = INT16_MIN;
	int32_t t8 = 16587;

	t8 = ((x249>>(x250&x251))^x252);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x277 = 359708500022LLU;
	int32_t x278 = 496;
	static int32_t x279 = -3570;
	static int16_t x280 = INT16_MIN;
	uint64_t t9 = 7629514131273390LLU;

	t9 = ((x277>>(x278&x279))^x280);

	if (t9 != 18446743714001035318LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x325 = 464566878549LLU;
	int32_t x326 = INT32_MIN;
	static int8_t x327 = 3;
	static volatile int64_t x328 = INT64_MAX;
	uint64_t t10 = 98591LLU;

	t10 = ((x325>>(x326&x327))^x328);

	if (t10 != 9223371572287897258LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x345 = 52;
	int8_t x346 = 2;
	int16_t x348 = INT16_MIN;
	int32_t t11 = 122602;

	t11 = ((x345>>(x346&x347))^x348);

	if (t11 != -32755) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x350 = INT64_MIN;
	int16_t x352 = 582;
	static volatile int32_t t12 = 276925;

	t12 = ((x349>>(x350&x351))^x352);

	if (t12 != 697) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x365 = UINT64_MAX;
	uint64_t x366 = 323103098375LLU;
	uint64_t x368 = 14463LLU;
	volatile uint64_t t13 = 1918130569934863LLU;

	t13 = ((x365>>(x366&x367))^x368);

	if (t13 != 18446744073709537152LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x385 = 2543903U;
	uint64_t x386 = 2LLU;
	static int32_t x387 = INT32_MAX;
	volatile uint32_t t14 = 268369301U;

	t14 = ((x385>>(x386&x387))^x388);

	if (t14 != 641976U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x393 = 7890;
	uint32_t x394 = 36U;
	static int32_t x395 = -72739;
	int16_t x396 = -261;
	volatile int32_t t15 = 1503587;

	t15 = ((x393>>(x394&x395))^x396);

	if (t15 != -234) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x449 = INT64_MAX;
	volatile uint16_t x450 = UINT16_MAX;
	volatile uint16_t x451 = 0U;
	uint64_t x452 = UINT64_MAX;
	volatile uint64_t t16 = 327942274638LLU;

	t16 = ((x449>>(x450&x451))^x452);

	if (t16 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x497 = 120;
	uint8_t x498 = 1U;
	int64_t x499 = -188142LL;

	t17 = ((x497>>(x498&x499))^x500);

	if (t17 != 121) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x518 = 1048164383064LLU;
	int8_t x519 = 3;
	int8_t x520 = 21;
	int32_t t18 = 13647176;

	t18 = ((x517>>(x518&x519))^x520);

	if (t18 != 32746) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x546 = INT64_MAX;
	int64_t x547 = INT64_MIN;
	volatile uint8_t x548 = 94U;

	t19 = ((x545>>(x546&x547))^x548);

	if (t19 != 9223372036854775713LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x553 = INT64_MAX;
	static uint16_t x554 = 10U;
	int64_t x555 = -1LL;
	int8_t x556 = INT8_MIN;
	volatile int64_t t20 = -27950158664LL;

	t20 = ((x553>>(x554&x555))^x556);

	if (t20 != -9007199254740865LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x598 = INT64_MIN;
	uint8_t x599 = 63U;
	static int8_t x600 = INT8_MAX;

	t21 = ((x597>>(x598&x599))^x600);

	if (t21 != 92) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x625 = INT16_MAX;
	static int16_t x627 = 19;
	volatile int32_t x628 = INT32_MIN;
	volatile int32_t t22 = 3522;

	t22 = ((x625>>(x626&x627))^x628);

	if (t22 != -2147450881) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x669 = 19;
	uint8_t x670 = 1U;
	volatile int8_t x671 = INT8_MAX;
	int8_t x672 = -1;
	static volatile int32_t t23 = 25833;

	t23 = ((x669>>(x670&x671))^x672);

	if (t23 != -10) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x682 = 1;
	int8_t x684 = INT8_MAX;

	t24 = ((x681>>(x682&x683))^x684);

	if (t24 != 2634294LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x702 = -1;
	static uint16_t x703 = 7U;
	uint8_t x704 = UINT8_MAX;
	uint32_t t25 = 9U;

	t25 = ((x701>>(x702&x703))^x704);

	if (t25 != 505105U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x705 = INT8_MAX;
	static int8_t x706 = INT8_MIN;
	volatile int16_t x707 = 0;
	uint64_t x708 = UINT64_MAX;
	volatile uint64_t t26 = 253LLU;

	t26 = ((x705>>(x706&x707))^x708);

	if (t26 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x721 = 25;
	uint32_t x722 = 28155986U;
	uint8_t x723 = 2U;
	volatile int8_t x724 = INT8_MIN;
	volatile int32_t t27 = 14471348;

	t27 = ((x721>>(x722&x723))^x724);

	if (t27 != -122) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x725 = 11310U;
	int8_t x726 = 0;
	static uint64_t x727 = 124560LLU;
	int32_t x728 = 29;
	static int32_t t28 = -10;

	t28 = ((x725>>(x726&x727))^x728);

	if (t28 != 11315) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x753 = UINT16_MAX;
	uint8_t x754 = 12U;
	int64_t x755 = INT64_MIN;
	int32_t x756 = -5675;
	volatile int32_t t29 = -30790376;

	t29 = ((x753>>(x754&x755))^x756);

	if (t29 != -59862) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x770 = 17U;
	volatile uint16_t x771 = 23U;
	int16_t x772 = INT16_MAX;
	static uint32_t t30 = 681603410U;

	t30 = ((x769>>(x770&x771))^x772);

	if (t30 != 22571U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x773 = 791920221U;
	volatile int64_t x774 = 192LL;
	static int64_t x775 = INT64_MIN;
	static int64_t x776 = -1LL;
	volatile int64_t t31 = -2723965LL;

	t31 = ((x773>>(x774&x775))^x776);

	if (t31 != -791920222LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x777 = INT32_MAX;
	uint16_t x778 = UINT16_MAX;
	uint64_t x780 = UINT64_MAX;
	volatile uint64_t t32 = 33243413LLU;

	t32 = ((x777>>(x778&x779))^x780);

	if (t32 != 18446744073172680704LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x793 = 3U;
	int16_t x794 = INT16_MAX;
	static uint32_t x795 = 6U;
	uint32_t t33 = 58606935U;

	t33 = ((x793>>(x794&x795))^x796);

	if (t33 != 2147483648U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x797 = 23U;
	uint8_t x798 = 1U;
	static int32_t x799 = INT32_MAX;
	uint16_t x800 = 15709U;
	int32_t t34 = -20576569;

	t34 = ((x797>>(x798&x799))^x800);

	if (t34 != 15702) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x853 = 520525363U;
	uint32_t x854 = UINT32_MAX;
	int8_t x855 = 5;
	int64_t t35 = 2082727LL;

	t35 = ((x853>>(x854&x855))^x856);

	if (t35 != 208403912860239386LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x873 = 2U;
	uint16_t x875 = UINT16_MAX;
	volatile int32_t t36 = 3636;

	t36 = ((x873>>(x874&x875))^x876);

	if (t36 != 253) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x889 = 21;
	volatile uint16_t x891 = 1235U;
	int32_t x892 = 1055;
	volatile int32_t t37 = 18885011;

	t37 = ((x889>>(x890&x891))^x892);

	if (t37 != 1034) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x906 = INT16_MIN;
	static uint8_t x907 = 1U;
	volatile int16_t x908 = INT16_MIN;

	t38 = ((x905>>(x906&x907))^x908);

	if (t38 != 18446744073671571649LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x917 = INT16_MAX;
	uint32_t x918 = 1U;
	uint16_t x919 = 0U;
	static int8_t x920 = -1;
	static volatile int32_t t39 = 28;

	t39 = ((x917>>(x918&x919))^x920);

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x969 = 86;
	uint64_t x970 = 154990049867310430LLU;
	int64_t x971 = INT64_MIN;
	int16_t x972 = INT16_MIN;
	int32_t t40 = 28439023;

	t40 = ((x969>>(x970&x971))^x972);

	if (t40 != -32682) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x977 = 50476670LL;
	uint8_t x979 = 29U;
	int8_t x980 = -1;
	int64_t t41 = -855011574036196941LL;

	t41 = ((x977>>(x978&x979))^x980);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1001 = 100142320769133LL;
	int32_t x1002 = 15;
	volatile int32_t x1003 = INT32_MIN;
	int16_t x1004 = -1;
	static int64_t t42 = -682833LL;

	t42 = ((x1001>>(x1002&x1003))^x1004);

	if (t42 != -100142320769134LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1013 = INT32_MAX;
	int32_t x1014 = 176274725;
	volatile int16_t x1015 = 1;
	volatile uint64_t x1016 = UINT64_MAX;

	t43 = ((x1013>>(x1014&x1015))^x1016);

	if (t43 != 18446744072635809792LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x1021 = 124U;
	uint16_t x1022 = 0U;
	uint64_t x1024 = UINT64_MAX;
	static uint64_t t44 = 154730920591381LLU;

	t44 = ((x1021>>(x1022&x1023))^x1024);

	if (t44 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x1033 = 50U;
	int32_t x1034 = 8134856;
	volatile int64_t x1035 = INT64_MIN;
	static uint16_t x1036 = 15586U;
	int32_t t45 = -11;

	t45 = ((x1033>>(x1034&x1035))^x1036);

	if (t45 != 15568) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x1066 = INT32_MIN;
	volatile uint16_t x1067 = 1U;
	int32_t x1068 = INT32_MIN;
	volatile uint64_t t46 = 1030LLU;

	t46 = ((x1065>>(x1066&x1067))^x1068);

	if (t46 != 2147483647LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x1070 = INT32_MIN;
	volatile int8_t x1071 = 1;
	uint16_t x1072 = 778U;
	volatile uint32_t t47 = 721428650U;

	t47 = ((x1069>>(x1070&x1071))^x1072);

	if (t47 != 779U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1081 = 1;
	int8_t x1083 = INT8_MIN;
	int32_t x1084 = 1;
	int32_t t48 = 4;

	t48 = ((x1081>>(x1082&x1083))^x1084);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1093 = 263;
	int16_t x1094 = 50;
	int32_t x1095 = -34;
	int16_t x1096 = -1;

	t49 = ((x1093>>(x1094&x1095))^x1096);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x1146 = INT8_MIN;
	uint8_t x1147 = 19U;
	volatile int8_t x1148 = -4;
	volatile int64_t t50 = 6138084390LL;

	t50 = ((x1145>>(x1146&x1147))^x1148);

	if (t50 != -2302900700119LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x1186 = INT8_MAX;
	uint32_t x1188 = 6676470U;

	t51 = ((x1185>>(x1186&x1187))^x1188);

	if (t51 != 6676468U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x1229 = UINT64_MAX;
	static volatile int32_t x1230 = INT32_MIN;
	uint8_t x1231 = 1U;
	volatile int8_t x1232 = INT8_MAX;
	uint64_t t52 = 28LLU;

	t52 = ((x1229>>(x1230&x1231))^x1232);

	if (t52 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x1233 = UINT16_MAX;
	int64_t x1234 = INT64_MIN;
	uint32_t x1235 = UINT32_MAX;
	int16_t x1236 = -1;
	static int32_t t53 = 370254;

	t53 = ((x1233>>(x1234&x1235))^x1236);

	if (t53 != -65536) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1242 = -5;
	uint16_t x1243 = 16U;
	int32_t x1244 = INT32_MIN;

	t54 = ((x1241>>(x1242&x1243))^x1244);

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1253 = INT8_MAX;
	volatile int16_t x1254 = 379;
	int32_t x1255 = INT32_MIN;
	static volatile int32_t t55 = -154;

	t55 = ((x1253>>(x1254&x1255))^x1256);

	if (t55 != -87806286) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x1277 = 104U;
	uint32_t x1278 = 4891738U;
	uint8_t x1279 = 3U;
	int8_t x1280 = INT8_MIN;
	static int32_t t56 = -727774;

	t56 = ((x1277>>(x1278&x1279))^x1280);

	if (t56 != -102) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x1330 = 3;
	int16_t x1331 = -1637;
	int64_t x1332 = 436395730LL;
	static volatile uint64_t t57 = 77755764LLU;

	t57 = ((x1329>>(x1330&x1331))^x1332);

	if (t57 != 2305843008777298221LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x1333 = UINT64_MAX;
	volatile int32_t x1334 = INT32_MIN;
	volatile uint16_t x1336 = 8367U;
	uint64_t t58 = 64743879LLU;

	t58 = ((x1333>>(x1334&x1335))^x1336);

	if (t58 != 18446744073709543248LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x1341 = 6727929LLU;
	volatile int64_t x1342 = INT64_MAX;
	uint8_t x1343 = 3U;
	int8_t x1344 = -1;
	uint64_t t59 = 1234579133LLU;

	t59 = ((x1341>>(x1342&x1343))^x1344);

	if (t59 != 18446744073708710624LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1353 = INT64_MAX;
	static uint64_t x1354 = UINT64_MAX;
	int8_t x1355 = 0;
	int8_t x1356 = 14;
	volatile int64_t t60 = -1079034007LL;

	t60 = ((x1353>>(x1354&x1355))^x1356);

	if (t60 != 9223372036854775793LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x1361 = 1;
	static int16_t x1363 = -1;
	uint8_t x1364 = 6U;
	volatile int32_t t61 = -184802169;

	t61 = ((x1361>>(x1362&x1363))^x1364);

	if (t61 != 6) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x1369 = UINT32_MAX;
	int32_t x1370 = -4890;
	uint16_t x1371 = 10U;
	int16_t x1372 = -1;
	volatile uint32_t t62 = 47999088U;

	t62 = ((x1369>>(x1370&x1371))^x1372);

	if (t62 != 3221225472U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x1373 = 28U;
	uint64_t x1374 = 157302345689322LLU;
	volatile uint8_t x1375 = 6U;
	int32_t x1376 = INT32_MAX;
	int32_t t63 = -50;

	t63 = ((x1373>>(x1374&x1375))^x1376);

	if (t63 != 2147483640) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x1393 = 8008;
	int8_t x1394 = 0;
	uint16_t x1396 = 306U;
	volatile int32_t t64 = 1;

	t64 = ((x1393>>(x1394&x1395))^x1396);

	if (t64 != 7802) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x1425 = 85115U;
	uint8_t x1426 = 0U;
	int64_t x1427 = -1LL;
	volatile uint32_t t65 = 4U;

	t65 = ((x1425>>(x1426&x1427))^x1428);

	if (t65 != 18495441U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x1441 = INT8_MAX;
	int64_t x1442 = 789LL;
	int64_t x1443 = INT64_MIN;
	static int8_t x1444 = -51;
	volatile int32_t t66 = 137;

	t66 = ((x1441>>(x1442&x1443))^x1444);

	if (t66 != -78) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x1461 = UINT32_MAX;
	uint32_t x1462 = 15U;
	int16_t x1463 = -7510;
	int8_t x1464 = INT8_MIN;
	static volatile uint32_t t67 = 2993761U;

	t67 = ((x1461>>(x1462&x1463))^x1464);

	if (t67 != 4290773119U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x1469 = 0;
	static int8_t x1470 = 29;
	int8_t x1471 = INT8_MIN;
	uint64_t t68 = 2886846LLU;

	t68 = ((x1469>>(x1470&x1471))^x1472);

	if (t68 != 3693673726105162185LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x1505 = INT16_MAX;
	static volatile uint16_t x1506 = 8U;
	volatile uint8_t x1507 = 66U;
	static uint32_t x1508 = 17518U;
	volatile uint32_t t69 = 442851U;

	t69 = ((x1505>>(x1506&x1507))^x1508);

	if (t69 != 15249U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x1529 = INT8_MAX;
	int8_t x1530 = 7;
	int32_t x1531 = INT32_MIN;
	int32_t t70 = 98937;

	t70 = ((x1529>>(x1530&x1531))^x1532);

	if (t70 != -121) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint16_t x1537 = 0U;
	uint16_t x1538 = 9U;
	int16_t x1539 = -1;
	int32_t t71 = 33;

	t71 = ((x1537>>(x1538&x1539))^x1540);

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x1589 = 59442248;
	int8_t x1590 = INT8_MAX;
	int64_t x1591 = INT64_MIN;
	uint8_t x1592 = UINT8_MAX;
	int32_t t72 = -24;

	t72 = ((x1589>>(x1590&x1591))^x1592);

	if (t72 != 59442359) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x1609 = UINT16_MAX;
	static volatile int64_t x1610 = INT64_MIN;
	volatile int16_t x1611 = INT16_MAX;
	int8_t x1612 = 0;
	volatile int32_t t73 = -671933005;

	t73 = ((x1609>>(x1610&x1611))^x1612);

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x1613 = 11U;
	uint64_t x1614 = 12695LLU;
	static int8_t x1615 = 15;
	volatile uint64_t t74 = 6404263314156667313LLU;

	t74 = ((x1613>>(x1614&x1615))^x1616);

	if (t74 != 34468436LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x1621 = UINT16_MAX;
	int64_t x1622 = 852LL;
	int32_t x1624 = -1;
	int32_t t75 = -468377216;

	t75 = ((x1621>>(x1622&x1623))^x1624);

	if (t75 != -65536) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x1665 = 11U;
	int8_t x1667 = INT8_MAX;
	volatile int32_t x1668 = INT32_MAX;
	volatile uint32_t t76 = 300514U;

	t76 = ((x1665>>(x1666&x1667))^x1668);

	if (t76 != 2147483647U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x1673 = UINT8_MAX;
	static int8_t x1674 = 7;
	uint32_t x1675 = UINT32_MAX;
	uint16_t x1676 = 8U;
	int32_t t77 = 715998;

	t77 = ((x1673>>(x1674&x1675))^x1676);

	if (t77 != 9) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x1681 = UINT16_MAX;
	volatile uint8_t x1682 = 34U;
	static uint64_t x1683 = 7167872LLU;
	static int32_t x1684 = -6;
	int32_t t78 = -1;

	t78 = ((x1681>>(x1682&x1683))^x1684);

	if (t78 != -65531) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x1717 = 1;
	static int8_t x1718 = -1;
	uint8_t x1719 = 7U;
	static volatile uint64_t t79 = 121097602497179832LLU;

	t79 = ((x1717>>(x1718&x1719))^x1720);

	if (t79 != 87042338909LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x1737 = 15036U;
	uint32_t x1738 = 37721U;
	static volatile int32_t t80 = -1367;

	t80 = ((x1737>>(x1738&x1739))^x1740);

	if (t80 != -15044) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x1785 = INT64_MAX;
	volatile int16_t x1786 = -208;
	uint8_t x1787 = 83U;
	volatile int32_t x1788 = 7487;
	volatile int64_t t81 = 2LL;

	t81 = ((x1785>>(x1786&x1787))^x1788);

	if (t81 != 140737488347840LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x1789 = 111U;
	int64_t x1790 = 1LL;
	static int64_t x1791 = 834630020497428LL;
	uint64_t x1792 = UINT64_MAX;
	uint64_t t82 = 105590663358009LLU;

	t82 = ((x1789>>(x1790&x1791))^x1792);

	if (t82 != 18446744073709551504LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x1797 = 11U;
	int8_t x1798 = 1;
	int8_t x1799 = INT8_MIN;
	volatile uint8_t x1800 = UINT8_MAX;
	int32_t t83 = 44;

	t83 = ((x1797>>(x1798&x1799))^x1800);

	if (t83 != 244) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x1805 = 13;
	int64_t x1807 = INT64_MIN;
	static int32_t t84 = -193;

	t84 = ((x1805>>(x1806&x1807))^x1808);

	if (t84 != -2776641) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x1809 = INT8_MAX;
	int32_t x1810 = 13;
	static int16_t x1811 = INT16_MIN;
	static int32_t x1812 = INT32_MAX;
	volatile int32_t t85 = -105;

	t85 = ((x1809>>(x1810&x1811))^x1812);

	if (t85 != 2147483520) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x1813 = UINT32_MAX;
	int16_t x1814 = 2;
	int8_t x1815 = INT8_MIN;
	uint64_t x1816 = 4178615314434LLU;

	t86 = ((x1813>>(x1814&x1815))^x1816);

	if (t86 != 4175096076285LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x1829 = UINT64_MAX;
	int64_t x1830 = INT64_MIN;
	int32_t x1832 = -1;
	uint64_t t87 = 147LLU;

	t87 = ((x1829>>(x1830&x1831))^x1832);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x1853 = 103132585853737029LL;
	int16_t x1854 = 0;
	uint64_t x1855 = 3936310599362LLU;
	int64_t x1856 = INT64_MIN;
	volatile int64_t t88 = -300655166912827LL;

	t88 = ((x1853>>(x1854&x1855))^x1856);

	if (t88 != -9120239451001038779LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x1861 = UINT16_MAX;
	int64_t x1862 = 279658306055LL;
	uint16_t x1863 = 194U;
	volatile int64_t x1864 = -3LL;
	int64_t t89 = -234225784LL;

	t89 = ((x1861>>(x1862&x1863))^x1864);

	if (t89 != -16382LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x1893 = 8307492LLU;
	uint16_t x1894 = 1U;
	uint16_t x1895 = UINT16_MAX;
	volatile int8_t x1896 = 26;

	t90 = ((x1893>>(x1894&x1895))^x1896);

	if (t90 != 4153736LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x1897 = 207998U;
	uint64_t x1899 = 95247457992LLU;
	int16_t x1900 = INT16_MAX;
	uint32_t t91 = 2260U;

	t91 = ((x1897>>(x1898&x1899))^x1900);

	if (t91 != 31955U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x1910 = INT16_MAX;
	int16_t x1911 = INT16_MIN;
	uint32_t x1912 = 239120U;

	t92 = ((x1909>>(x1910&x1911))^x1912);

	if (t92 != 2109449339U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x1913 = 1U;
	volatile uint64_t x1914 = 13147891LLU;
	uint32_t x1915 = 11U;
	int32_t x1916 = INT32_MIN;
	static int32_t t93 = INT32_MIN;

	t93 = ((x1913>>(x1914&x1915))^x1916);

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x1917 = 3983U;
	static uint32_t x1918 = UINT32_MAX;
	volatile uint8_t x1919 = 29U;
	int16_t x1920 = -3;
	static int32_t t94 = 45;

	t94 = ((x1917>>(x1918&x1919))^x1920);

	if (t94 != -3) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x1938 = INT32_MIN;
	uint8_t x1939 = UINT8_MAX;
	int64_t x1940 = -7314508155625LL;

	t95 = ((x1937>>(x1938&x1939))^x1940);

	if (t95 != -7314518225566LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x1993 = 22U;
	uint8_t x1994 = 6U;
	static uint16_t x1995 = UINT16_MAX;
	int16_t x1996 = INT16_MAX;
	static volatile int32_t t96 = 14;

	t96 = ((x1993>>(x1994&x1995))^x1996);

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x2021 = 59;
	int32_t x2022 = INT32_MAX;
	volatile int16_t x2023 = 0;
	volatile int8_t x2024 = INT8_MIN;
	volatile int32_t t97 = 7006919;

	t97 = ((x2021>>(x2022&x2023))^x2024);

	if (t97 != -69) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x2025 = UINT32_MAX;
	static int16_t x2026 = INT16_MAX;
	uint32_t x2027 = 31U;

	t98 = ((x2025>>(x2026&x2027))^x2028);

	if (t98 != 1942427U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x2073 = 1568943408047LL;
	int8_t x2074 = -1;
	static uint8_t x2076 = 100U;
	volatile int64_t t99 = -47139173354LL;

	t99 = ((x2073>>(x2074&x2075))^x2076);

	if (t99 != 766085748LL) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x94 = 2035;
uint32_t x127 = UINT32_MAX;
int32_t t2 = -9878;
uint64_t x274 = 0LLU;
int32_t t5 = 98207905;
static int64_t x299 = INT64_MAX;
uint64_t x300 = UINT64_MAX;
uint64_t x312 = 31840565159616LLU;
volatile uint8_t x405 = 0U;
int8_t x407 = INT8_MAX;
uint32_t x421 = UINT32_MAX;
volatile uint16_t x481 = UINT16_MAX;
static int32_t t15 = -151256734;
volatile int16_t x556 = -1;
int32_t x581 = INT32_MAX;
int8_t x666 = INT8_MAX;
volatile uint8_t x668 = 1U;
uint16_t x702 = 3U;
uint16_t x717 = UINT16_MAX;
uint8_t x720 = UINT8_MAX;
int32_t t22 = 28980;
static int16_t x728 = 110;
static int32_t x743 = INT32_MAX;
int32_t t26 = 64976;
uint32_t t27 = 2828U;
volatile int8_t x780 = INT8_MAX;
volatile int32_t x900 = -1;
static uint8_t x920 = 6U;
volatile uint16_t x979 = 7U;
uint64_t x980 = 2180341711234201628LLU;
uint64_t t34 = 2873LLU;
uint64_t t36 = 263446796391354LLU;
volatile int32_t t38 = INT32_MAX;
static volatile uint64_t t39 = 600213245884LLU;
int64_t x1069 = 4441676LL;
uint16_t x1142 = 1984U;
int64_t x1158 = INT64_MIN;
volatile int8_t x1196 = 1;
int32_t x1203 = -1;
uint16_t x1223 = UINT16_MAX;
uint8_t x1243 = 1U;
volatile int8_t x1254 = 13;
int16_t x1255 = 5;
volatile uint64_t x1269 = 3794210LLU;
volatile uint8_t x1270 = 29U;
volatile int16_t x1318 = 191;
static int64_t t53 = 0LL;
volatile uint16_t x1441 = UINT16_MAX;
volatile uint64_t x1485 = 512347595690LLU;
int64_t x1501 = INT64_MAX;
static uint16_t x1502 = UINT16_MAX;
int32_t x1687 = -1;
volatile uint32_t x1741 = UINT32_MAX;
int64_t x1804 = 17LL;
int8_t x1811 = INT8_MIN;
uint32_t x1820 = 2U;
int32_t t66 = 174040;
int16_t x1865 = INT16_MAX;
uint32_t x1868 = 17702U;
int32_t t67 = -6;
int8_t x1872 = INT8_MAX;
volatile int32_t t68 = 42702840;
uint32_t x1874 = 2340502U;
int32_t t69 = -956496476;
uint16_t x1913 = UINT16_MAX;
uint8_t x1914 = 0U;
static int64_t x1915 = -1LL;
int64_t x1916 = -1LL;
uint16_t x1936 = 28U;
uint32_t x1937 = 84778U;
uint64_t x1938 = 9LLU;
uint32_t t72 = 0U;
int64_t x1983 = -1LL;
static volatile uint32_t x2009 = 10U;
volatile uint16_t x2011 = 201U;
uint8_t x2038 = 0U;
int16_t x2069 = 0;
volatile int8_t x2074 = -1;
uint8_t x2076 = UINT8_MAX;
static int32_t t78 = 1341590;
int64_t x2110 = INT64_MIN;
int32_t x2147 = 3967;
static volatile int64_t t80 = 615218LL;
volatile int64_t x2157 = 0LL;
int16_t x2160 = INT16_MIN;
static int32_t x2175 = -4377085;
uint32_t x2182 = UINT32_MAX;
int8_t x2183 = -1;
int32_t x2197 = INT32_MAX;
static int8_t x2202 = INT8_MIN;
static volatile int32_t x2213 = INT32_MAX;
int32_t x2266 = 40;
static volatile int32_t x2281 = 1925289;
int32_t t88 = 1;
static int16_t x2375 = 16;
volatile int32_t t92 = 51;
int32_t x2478 = INT32_MAX;
uint16_t x2519 = 5U;
volatile int32_t t95 = 0;
volatile int8_t x2585 = 34;
int8_t x2588 = -51;
volatile int8_t x2607 = -1;


void f0(void) {
	volatile uint16_t x93 = UINT16_MAX;
	static volatile int32_t x95 = 679410212;
	uint8_t x96 = UINT8_MAX;
	static volatile int32_t t0 = 113;

	t0 = (x93>>(x94%(x95&x96)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x125 = UINT8_MAX;
	uint64_t x126 = UINT64_MAX;
	uint16_t x128 = UINT16_MAX;
	volatile int32_t t1 = -296;

	t1 = (x125>>(x126%(x127&x128)));

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x133 = 5U;
	int8_t x134 = 1;
	int64_t x135 = -1LL;
	int16_t x136 = INT16_MIN;

	t2 = (x133>>(x134%(x135&x136)));

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x265 = 199019965LL;
	int64_t x266 = INT64_MIN;
	int32_t x267 = INT32_MIN;
	int8_t x268 = INT8_MIN;
	int64_t t3 = -122LL;

	t3 = (x265>>(x266%(x267&x268)));

	if (t3 != 199019965LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x273 = 365146990LL;
	int64_t x275 = -1LL;
	uint32_t x276 = UINT32_MAX;
	volatile int64_t t4 = -2LL;

	t4 = (x273>>(x274%(x275&x276)));

	if (t4 != 365146990LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x289 = 1;
	int16_t x290 = INT16_MIN;
	static int8_t x291 = -5;
	uint16_t x292 = 20U;

	t5 = (x289>>(x290%(x291&x292)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x297 = UINT8_MAX;
	int8_t x298 = -1;
	volatile int32_t t6 = -56527713;

	t6 = (x297>>(x298%(x299&x300)));

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x301 = INT64_MAX;
	uint16_t x302 = 0U;
	static uint32_t x303 = 3U;
	int16_t x304 = -1;
	int64_t t7 = INT64_MAX;

	t7 = (x301>>(x302%(x303&x304)));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x309 = 211834556112LL;
	uint32_t x310 = 1U;
	int16_t x311 = INT16_MAX;
	volatile int64_t t8 = -2627268547369634LL;

	t8 = (x309>>(x310%(x311&x312)));

	if (t8 != 105917278056LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x317 = 60506658236157259LLU;
	volatile uint16_t x318 = UINT16_MAX;
	static int64_t x319 = -1LL;
	int8_t x320 = 2;
	volatile uint64_t t9 = 415673639137365707LLU;

	t9 = (x317>>(x318%(x319&x320)));

	if (t9 != 30253329118078629LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x325 = INT16_MAX;
	volatile uint16_t x326 = 15U;
	uint8_t x327 = 5U;
	static volatile int16_t x328 = -1;
	static volatile int32_t t10 = -25;

	t10 = (x325>>(x326%(x327&x328)));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x406 = 6U;
	uint32_t x408 = 3U;
	int32_t t11 = -28195;

	t11 = (x405>>(x406%(x407&x408)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x422 = UINT32_MAX;
	volatile int32_t x423 = INT32_MAX;
	volatile int64_t x424 = -1LL;
	volatile uint32_t t12 = 127685271U;

	t12 = (x421>>(x422%(x423&x424)));

	if (t12 != 2147483647U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x461 = 94186887055516LLU;
	static volatile int16_t x462 = -7;
	uint32_t x463 = 29U;
	int16_t x464 = INT16_MAX;
	volatile uint64_t t13 = 353913042LLU;

	t13 = (x461>>(x462%(x463&x464)));

	if (t13 != 183958763780LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x482 = 1LL;
	static volatile uint16_t x483 = 190U;
	uint64_t x484 = 7940589134228LLU;
	volatile int32_t t14 = -219855304;

	t14 = (x481>>(x482%(x483&x484)));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x501 = INT32_MAX;
	uint64_t x502 = UINT64_MAX;
	int16_t x503 = -1;
	uint8_t x504 = 113U;

	t15 = (x501>>(x502%(x503&x504)));

	if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x521 = 5U;
	int8_t x522 = 46;
	int8_t x523 = 1;
	static int32_t x524 = -1;
	volatile int32_t t16 = -24193;

	t16 = (x521>>(x522%(x523&x524)));

	if (t16 != 5) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x553 = 7;
	uint16_t x554 = 1835U;
	volatile uint8_t x555 = 3U;
	static volatile int32_t t17 = -1776;

	t17 = (x553>>(x554%(x555&x556)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x582 = INT16_MIN;
	volatile int32_t x583 = -1;
	volatile int16_t x584 = INT16_MIN;
	int32_t t18 = INT32_MAX;

	t18 = (x581>>(x582%(x583&x584)));

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x605 = INT16_MAX;
	volatile int64_t x606 = -58258810334253818LL;
	static int32_t x607 = -1;
	int64_t x608 = 2LL;
	static volatile int32_t t19 = -409323;

	t19 = (x605>>(x606%(x607&x608)));

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x665 = UINT8_MAX;
	static int8_t x667 = -1;
	int32_t t20 = 0;

	t20 = (x665>>(x666%(x667&x668)));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x701 = INT32_MAX;
	int16_t x703 = INT16_MIN;
	static uint64_t x704 = 2669835685948394LLU;
	volatile int32_t t21 = 93;

	t21 = (x701>>(x702%(x703&x704)));

	if (t21 != 268435455) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x718 = 22U;
	int32_t x719 = -78;

	t22 = (x717>>(x718%(x719&x720)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x725 = UINT8_MAX;
	int32_t x726 = -2;
	uint64_t x727 = UINT64_MAX;
	static volatile int32_t t23 = 25227527;

	t23 = (x725>>(x726%(x727&x728)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x737 = INT64_MAX;
	uint16_t x738 = 23916U;
	static int32_t x739 = 1;
	int32_t x740 = 3887595;
	int64_t t24 = INT64_MAX;

	t24 = (x737>>(x738%(x739&x740)));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x741 = INT32_MAX;
	uint8_t x742 = 53U;
	uint8_t x744 = 3U;
	volatile int32_t t25 = -192874;

	t25 = (x741>>(x742%(x743&x744)));

	if (t25 != 536870911) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x753 = 73U;
	volatile uint64_t x754 = 957459LLU;
	uint16_t x755 = 203U;
	uint32_t x756 = 3267U;

	t26 = (x753>>(x754%(x755&x756)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x761 = 30050U;
	volatile int16_t x762 = INT16_MAX;
	int16_t x763 = 3;
	static int16_t x764 = -1;

	t27 = (x761>>(x762%(x763&x764)));

	if (t27 != 15025U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x765 = UINT16_MAX;
	int8_t x766 = INT8_MIN;
	volatile uint64_t x767 = 2641670559884930LLU;
	volatile uint8_t x768 = 50U;
	static volatile int32_t t28 = -498732446;

	t28 = (x765>>(x766%(x767&x768)));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint32_t x777 = UINT32_MAX;
	static volatile int16_t x778 = INT16_MIN;
	uint32_t x779 = UINT32_MAX;
	uint32_t t29 = 3161790U;

	t29 = (x777>>(x778%(x779&x780)));

	if (t29 != 262143U) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint16_t x813 = UINT16_MAX;
	int16_t x814 = INT16_MIN;
	uint8_t x815 = 1U;
	int32_t x816 = -8647;
	int32_t t30 = -18164702;

	t30 = (x813>>(x814%(x815&x816)));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x897 = 0;
	int16_t x898 = -1;
	volatile int16_t x899 = -1;
	volatile int32_t t31 = -1;

	t31 = (x897>>(x898%(x899&x900)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x905 = UINT64_MAX;
	uint8_t x906 = 2U;
	volatile int8_t x907 = INT8_MIN;
	uint16_t x908 = 29436U;
	static uint64_t t32 = 287767843097144504LLU;

	t32 = (x905>>(x906%(x907&x908)));

	if (t32 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x917 = UINT16_MAX;
	uint8_t x918 = 46U;
	volatile int32_t x919 = 93487;
	int32_t t33 = -505;

	t33 = (x917>>(x918%(x919&x920)));

	if (t33 != 4095) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x977 = 48216787882256658LLU;
	int16_t x978 = 67;

	t34 = (x977>>(x978%(x979&x980)));

	if (t34 != 6027098485282082LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x981 = 560LLU;
	volatile uint16_t x982 = 0U;
	volatile uint64_t x983 = 2LLU;
	static int32_t x984 = INT32_MAX;
	volatile uint64_t t35 = 11LLU;

	t35 = (x981>>(x982%(x983&x984)));

	if (t35 != 560LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x997 = 3008028938LLU;
	int64_t x998 = 4533965269LL;
	static int8_t x999 = -40;
	int64_t x1000 = -1LL;

	t36 = (x997>>(x998%(x999&x1000)));

	if (t36 != 5LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1025 = UINT32_MAX;
	int8_t x1026 = 16;
	int8_t x1027 = -48;
	static int8_t x1028 = -1;
	uint32_t t37 = 801145U;

	t37 = (x1025>>(x1026%(x1027&x1028)));

	if (t37 != 65535U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1037 = INT32_MAX;
	uint8_t x1038 = UINT8_MAX;
	uint32_t x1039 = 121785U;
	volatile int16_t x1040 = 3;

	t38 = (x1037>>(x1038%(x1039&x1040)));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x1049 = 3503231005974LLU;
	int8_t x1050 = INT8_MAX;
	uint64_t x1051 = 369277577063381LLU;
	int8_t x1052 = INT8_MAX;

	t39 = (x1049>>(x1050%(x1051&x1052)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x1070 = INT64_MAX;
	int8_t x1071 = -1;
	static uint32_t x1072 = 12U;
	int64_t t40 = -512294LL;

	t40 = (x1069>>(x1070%(x1071&x1072)));

	if (t40 != 34700LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1109 = 5;
	int16_t x1110 = 5203;
	static uint16_t x1111 = 204U;
	uint16_t x1112 = 5203U;
	volatile int32_t t41 = -22386303;

	t41 = (x1109>>(x1110%(x1111&x1112)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x1141 = INT64_MAX;
	uint64_t x1143 = UINT64_MAX;
	uint8_t x1144 = 1U;
	int64_t t42 = INT64_MAX;

	t42 = (x1141>>(x1142%(x1143&x1144)));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1145 = 41233U;
	static volatile int8_t x1146 = 1;
	int8_t x1147 = 6;
	static uint8_t x1148 = 10U;
	static uint32_t t43 = 193228U;

	t43 = (x1145>>(x1146%(x1147&x1148)));

	if (t43 != 20616U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1157 = UINT16_MAX;
	uint8_t x1159 = UINT8_MAX;
	uint64_t x1160 = 2LLU;
	int32_t t44 = -47470;

	t44 = (x1157>>(x1158%(x1159&x1160)));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1173 = INT8_MAX;
	volatile int64_t x1174 = INT64_MAX;
	static int64_t x1175 = INT64_MAX;
	int16_t x1176 = -1;
	int32_t t45 = -273851869;

	t45 = (x1173>>(x1174%(x1175&x1176)));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x1189 = 27U;
	uint32_t x1190 = 1465405484U;
	uint32_t x1191 = 1U;
	volatile int32_t x1192 = 15;
	int32_t t46 = -91034;

	t46 = (x1189>>(x1190%(x1191&x1192)));

	if (t46 != 27) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1193 = 7457299470229LLU;
	uint8_t x1194 = 42U;
	int64_t x1195 = INT64_MAX;
	static volatile uint64_t t47 = 10475226004012815LLU;

	t47 = (x1193>>(x1194%(x1195&x1196)));

	if (t47 != 7457299470229LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1201 = 919LLU;
	static volatile uint16_t x1202 = UINT16_MAX;
	volatile uint8_t x1204 = 19U;
	uint64_t t48 = 773236769284122LLU;

	t48 = (x1201>>(x1202%(x1203&x1204)));

	if (t48 != 57LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1221 = 2LLU;
	uint8_t x1222 = 0U;
	int64_t x1224 = -257901012LL;
	volatile uint64_t t49 = 27LLU;

	t49 = (x1221>>(x1222%(x1223&x1224)));

	if (t49 != 2LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x1241 = UINT64_MAX;
	static int16_t x1242 = -13;
	static volatile int8_t x1244 = -1;
	volatile uint64_t t50 = UINT64_MAX;

	t50 = (x1241>>(x1242%(x1243&x1244)));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x1253 = 1002;
	volatile uint16_t x1256 = 3606U;
	volatile int32_t t51 = -30;

	t51 = (x1253>>(x1254%(x1255&x1256)));

	if (t51 != 501) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1271 = -1;
	int16_t x1272 = -1;
	static volatile uint64_t t52 = 1LLU;

	t52 = (x1269>>(x1270%(x1271&x1272)));

	if (t52 != 3794210LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x1317 = 0LL;
	int16_t x1319 = 17;
	static uint64_t x1320 = 29490787LLU;

	t53 = (x1317>>(x1318%(x1319&x1320)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x1365 = UINT32_MAX;
	static uint8_t x1366 = 4U;
	int64_t x1367 = -34LL;
	static int64_t x1368 = INT64_MIN;
	static uint32_t t54 = 244329281U;

	t54 = (x1365>>(x1366%(x1367&x1368)));

	if (t54 != 268435455U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x1442 = 21565U;
	uint16_t x1443 = UINT16_MAX;
	uint8_t x1444 = 1U;
	int32_t t55 = -741390;

	t55 = (x1441>>(x1442%(x1443&x1444)));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x1486 = 459787LLU;
	int16_t x1487 = -1;
	int8_t x1488 = INT8_MAX;
	volatile uint64_t t56 = 194718323439LLU;

	t56 = (x1485>>(x1486%(x1487&x1488)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x1503 = -6386875548050866LL;
	uint8_t x1504 = UINT8_MAX;
	volatile int64_t t57 = 8528297766LL;

	t57 = (x1501>>(x1502%(x1503&x1504)));

	if (t57 != 281474976710655LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x1565 = INT16_MAX;
	int64_t x1566 = INT64_MIN;
	uint8_t x1567 = 3U;
	static uint16_t x1568 = 1U;
	volatile int32_t t58 = 4818016;

	t58 = (x1565>>(x1566%(x1567&x1568)));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x1629 = 4239812101475153767LLU;
	volatile int32_t x1630 = INT32_MIN;
	uint32_t x1631 = 6U;
	volatile int8_t x1632 = 10;
	volatile uint64_t t59 = 45LLU;

	t59 = (x1629>>(x1630%(x1631&x1632)));

	if (t59 != 4239812101475153767LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x1685 = 1;
	uint64_t x1686 = 44670878060213303LLU;
	uint8_t x1688 = 8U;
	volatile int32_t t60 = 25543506;

	t60 = (x1685>>(x1686%(x1687&x1688)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x1705 = 10U;
	static uint8_t x1706 = 7U;
	static int8_t x1707 = INT8_MIN;
	volatile int16_t x1708 = INT16_MIN;
	volatile int32_t t61 = -13069820;

	t61 = (x1705>>(x1706%(x1707&x1708)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x1742 = 3;
	uint32_t x1743 = 139845U;
	volatile int8_t x1744 = INT8_MAX;
	uint32_t t62 = 0U;

	t62 = (x1741>>(x1742%(x1743&x1744)));

	if (t62 != 536870911U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x1789 = INT32_MAX;
	int32_t x1790 = -1;
	static uint64_t x1791 = UINT64_MAX;
	uint8_t x1792 = UINT8_MAX;
	static int32_t t63 = INT32_MAX;

	t63 = (x1789>>(x1790%(x1791&x1792)));

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x1801 = 208U;
	int16_t x1802 = INT16_MIN;
	uint32_t x1803 = 18524350U;
	volatile int32_t t64 = -22766047;

	t64 = (x1801>>(x1802%(x1803&x1804)));

	if (t64 != 208) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x1809 = 4143990LLU;
	int64_t x1810 = INT64_MIN;
	int32_t x1812 = INT32_MIN;
	uint64_t t65 = 1800458484622784LLU;

	t65 = (x1809>>(x1810%(x1811&x1812)));

	if (t65 != 4143990LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x1817 = 1U;
	int64_t x1818 = 67853046437615244LL;
	static uint16_t x1819 = 2U;

	t66 = (x1817>>(x1818%(x1819&x1820)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x1866 = INT8_MIN;
	static int8_t x1867 = 2;

	t67 = (x1865>>(x1866%(x1867&x1868)));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x1869 = 0U;
	volatile uint8_t x1870 = 1U;
	int8_t x1871 = -6;

	t68 = (x1869>>(x1870%(x1871&x1872)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x1873 = 0;
	uint8_t x1875 = UINT8_MAX;
	int8_t x1876 = INT8_MAX;

	t69 = (x1873>>(x1874%(x1875&x1876)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t t70 = 426;

	t70 = (x1913>>(x1914%(x1915&x1916)));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x1933 = UINT8_MAX;
	static volatile uint16_t x1934 = 3318U;
	volatile int8_t x1935 = -1;
	volatile int32_t t71 = 232;

	t71 = (x1933>>(x1934%(x1935&x1936)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x1939 = -1LL;
	static volatile int64_t x1940 = INT64_MAX;

	t72 = (x1937>>(x1938%(x1939&x1940)));

	if (t72 != 165U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x1957 = UINT16_MAX;
	int8_t x1958 = 1;
	uint16_t x1959 = UINT16_MAX;
	int16_t x1960 = INT16_MAX;
	volatile int32_t t73 = -3900;

	t73 = (x1957>>(x1958%(x1959&x1960)));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x1981 = INT8_MAX;
	int8_t x1982 = INT8_MIN;
	int8_t x1984 = INT8_MIN;
	int32_t t74 = -1432986;

	t74 = (x1981>>(x1982%(x1983&x1984)));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x2010 = INT8_MIN;
	volatile uint16_t x2012 = 39U;
	static uint32_t t75 = 382592476U;

	t75 = (x2009>>(x2010%(x2011&x2012)));

	if (t75 != 10U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x2037 = 6205078886348514807LLU;
	volatile int32_t x2039 = INT32_MIN;
	int32_t x2040 = INT32_MIN;
	static volatile uint64_t t76 = 13LLU;

	t76 = (x2037>>(x2038%(x2039&x2040)));

	if (t76 != 6205078886348514807LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x2070 = 6U;
	volatile int64_t x2071 = -51185979135172LL;
	static int32_t x2072 = INT32_MAX;
	volatile int32_t t77 = 30473503;

	t77 = (x2069>>(x2070%(x2071&x2072)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x2073 = 9U;
	uint32_t x2075 = UINT32_MAX;

	t78 = (x2073>>(x2074%(x2075&x2076)));

	if (t78 != 9) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x2109 = 17U;
	static volatile int64_t x2111 = INT64_MIN;
	int16_t x2112 = -48;
	volatile int32_t t79 = 920694651;

	t79 = (x2109>>(x2110%(x2111&x2112)));

	if (t79 != 17) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2145 = 7279809LL;
	static uint8_t x2146 = 8U;
	int8_t x2148 = -1;

	t80 = (x2145>>(x2146%(x2147&x2148)));

	if (t80 != 28436LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x2158 = INT16_MIN;
	static int8_t x2159 = -1;
	static volatile int64_t t81 = -342LL;

	t81 = (x2157>>(x2158%(x2159&x2160)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x2173 = INT64_MAX;
	int32_t x2174 = 1;
	uint8_t x2176 = 103U;
	volatile int64_t t82 = -193LL;

	t82 = (x2173>>(x2174%(x2175&x2176)));

	if (t82 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x2181 = 80700U;
	int32_t x2184 = 35;
	uint32_t t83 = 63U;

	t83 = (x2181>>(x2182%(x2183&x2184)));

	if (t83 != 78U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x2198 = 50U;
	volatile int16_t x2199 = -419;
	int16_t x2200 = 60;
	static int32_t t84 = -2450980;

	t84 = (x2197>>(x2198%(x2199&x2200)));

	if (t84 != 511) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x2201 = 1U;
	static int16_t x2203 = -1;
	int32_t x2204 = -1;
	volatile int32_t t85 = -112;

	t85 = (x2201>>(x2202%(x2203&x2204)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x2214 = -25;
	uint8_t x2215 = 3U;
	int64_t x2216 = -339LL;
	int32_t t86 = INT32_MAX;

	t86 = (x2213>>(x2214%(x2215&x2216)));

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x2265 = 2714U;
	uint64_t x2267 = 3LLU;
	int32_t x2268 = INT32_MAX;
	static int32_t t87 = -26608975;

	t87 = (x2265>>(x2266%(x2267&x2268)));

	if (t87 != 1357) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x2282 = 10U;
	int32_t x2283 = INT32_MIN;
	int32_t x2284 = INT32_MIN;

	t88 = (x2281>>(x2282%(x2283&x2284)));

	if (t88 != 1880) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x2289 = 0;
	uint64_t x2290 = 2391039044671244393LLU;
	int64_t x2291 = -1LL;
	volatile uint16_t x2292 = 1U;
	static volatile int32_t t89 = -945303;

	t89 = (x2289>>(x2290%(x2291&x2292)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x2297 = 75;
	int8_t x2298 = 29;
	int16_t x2299 = INT16_MIN;
	int16_t x2300 = INT16_MIN;
	int32_t t90 = 178127;

	t90 = (x2297>>(x2298%(x2299&x2300)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x2337 = 43;
	int32_t x2338 = INT32_MIN;
	int32_t x2339 = -3524;
	int32_t x2340 = INT32_MIN;
	static int32_t t91 = 29310;

	t91 = (x2337>>(x2338%(x2339&x2340)));

	if (t91 != 43) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x2373 = 334U;
	int16_t x2374 = INT16_MIN;
	int8_t x2376 = -1;

	t92 = (x2373>>(x2374%(x2375&x2376)));

	if (t92 != 334) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x2417 = UINT16_MAX;
	int8_t x2418 = -23;
	int8_t x2419 = -1;
	volatile int16_t x2420 = -1;
	int32_t t93 = 164;

	t93 = (x2417>>(x2418%(x2419&x2420)));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x2477 = INT64_MAX;
	static int64_t x2479 = -867LL;
	uint16_t x2480 = 721U;
	volatile int64_t t94 = 7816265025851723LL;

	t94 = (x2477>>(x2478%(x2479&x2480)));

	if (t94 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x2517 = 158;
	volatile uint16_t x2518 = 13U;
	int16_t x2520 = -1;

	t95 = (x2517>>(x2518%(x2519&x2520)));

	if (t95 != 19) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x2541 = 0U;
	static uint16_t x2542 = 7U;
	int8_t x2543 = INT8_MIN;
	uint64_t x2544 = 32737103LLU;
	volatile int32_t t96 = -173;

	t96 = (x2541>>(x2542%(x2543&x2544)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x2561 = 3438U;
	uint16_t x2562 = 121U;
	int16_t x2563 = 10;
	int32_t x2564 = -127138;
	uint32_t t97 = 873905U;

	t97 = (x2561>>(x2562%(x2563&x2564)));

	if (t97 != 1719U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x2586 = -77667655LL;
	int32_t x2587 = 1;
	static int32_t t98 = -11549;

	t98 = (x2585>>(x2586%(x2587&x2588)));

	if (t98 != 34) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x2605 = 2U;
	int64_t x2606 = 23LL;
	int16_t x2608 = -1;
	volatile int32_t t99 = 16608165;

	t99 = (x2605>>(x2606%(x2607&x2608)));

	if (t99 != 2) { NG(); } else { ; }
	
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


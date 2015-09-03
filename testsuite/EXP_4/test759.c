#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t2 = 4261740862831LLU;
uint16_t x62 = 2164U;
uint64_t x101 = 31522268619407259LLU;
static uint8_t x104 = 24U;
static volatile int32_t x117 = 13579;
static int32_t x270 = INT32_MAX;
volatile int32_t t11 = 837;
uint16_t x274 = UINT16_MAX;
uint32_t x275 = 343825379U;
int64_t t14 = 1662LL;
int16_t x419 = INT16_MIN;
int8_t x436 = INT8_MIN;
int8_t x466 = INT8_MAX;
static int8_t x468 = 1;
uint32_t x476 = 1396500357U;
uint64_t x483 = UINT64_MAX;
volatile int32_t x506 = INT32_MAX;
volatile int16_t x554 = 18;
static int32_t x556 = -1;
int8_t x582 = INT8_MAX;
static int64_t x589 = INT64_MIN;
int32_t x592 = -27853;
static uint64_t x673 = 63698955984227141LLU;
volatile uint64_t x674 = 14459873899024LLU;
static int64_t x675 = INT64_MIN;
uint16_t x707 = UINT16_MAX;
uint32_t x749 = UINT32_MAX;
static int64_t x811 = INT64_MIN;
volatile uint64_t t34 = 216754705645LLU;
volatile int8_t x853 = 3;
int64_t x854 = 3491247867LL;
int16_t x855 = -1;
volatile int64_t t38 = 16677767943LL;
int16_t x946 = 13;
int32_t x947 = INT32_MIN;
static int32_t x948 = INT32_MIN;
int8_t x986 = 18;
uint64_t x1010 = 13LLU;
static int8_t x1031 = INT8_MIN;
int32_t x1151 = -1;
uint64_t t50 = 28732649685332LLU;
int64_t x1209 = -8LL;
uint8_t x1271 = 1U;
static uint16_t x1282 = UINT16_MAX;
volatile int32_t x1306 = INT32_MAX;
uint64_t x1312 = 51846314707LLU;
int32_t t56 = 98902283;
int64_t x1359 = INT64_MAX;
int32_t t58 = -89025;
volatile int32_t t59 = -1;
uint16_t x1413 = UINT16_MAX;
int8_t x1431 = 0;
int32_t x1432 = INT32_MAX;
static uint64_t t62 = 29633LLU;
volatile uint64_t t64 = 24LLU;
int8_t x1531 = INT8_MAX;
volatile uint64_t x1598 = UINT64_MAX;
int16_t x1639 = INT16_MIN;
int16_t x1643 = -1;
volatile int32_t x1688 = -1;
int16_t x1730 = INT16_MAX;
volatile int8_t x1738 = 58;
uint16_t x1739 = UINT16_MAX;
int64_t x1762 = INT64_MAX;
uint8_t x1782 = UINT8_MAX;
int64_t x1789 = -133640097136312594LL;
uint16_t x1791 = 16191U;
int64_t t75 = -8805983LL;
static uint64_t x1822 = UINT64_MAX;
uint16_t x1933 = UINT16_MAX;
volatile uint64_t t79 = 714384988851LLU;
volatile int8_t x1944 = -5;
static uint16_t x1957 = UINT16_MAX;
volatile uint16_t x1973 = 9500U;
volatile int64_t x2025 = INT64_MAX;
int16_t x2026 = INT16_MAX;
int32_t x2043 = 3705984;
volatile uint64_t t90 = 110435008716180357LLU;
volatile uint64_t t92 = 916LLU;
uint64_t x2154 = 172246796315584293LLU;
volatile int8_t x2156 = -1;
uint32_t x2157 = UINT32_MAX;
int16_t x2160 = -3;
uint32_t t96 = 9340U;
int16_t x2170 = 13034;
volatile uint32_t x2180 = 2U;
int8_t x2187 = 5;


void f0(void) {
	static int16_t x37 = -1;
	static int64_t x38 = 215526757LL;
	static uint8_t x39 = UINT8_MAX;
	volatile int32_t x40 = -1;
	static int64_t t0 = -62391033407LL;

	t0 = (x37%(x38>>(x39%x40)));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x45 = INT16_MIN;
	int32_t x46 = 4650158;
	int32_t x47 = 0;
	int32_t x48 = -1;
	volatile int32_t t1 = -23797654;

	t1 = (x45%(x46>>(x47%x48)));

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x49 = 81U;
	volatile uint64_t x50 = UINT64_MAX;
	static int8_t x51 = 40;
	int16_t x52 = -1;

	t2 = (x49%(x50>>(x51%x52)));

	if (t2 != 81LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x61 = 54U;
	int8_t x63 = -1;
	volatile uint32_t x64 = 7U;
	int32_t t3 = 835944513;

	t3 = (x61%(x62>>(x63%x64)));

	if (t3 != 54) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x102 = INT64_MAX;
	uint16_t x103 = 117U;
	volatile uint64_t t4 = 253648LLU;

	t4 = (x101%(x102>>(x103%x104)));

	if (t4 != 1469274332058LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x118 = 11;
	uint32_t x119 = UINT32_MAX;
	int16_t x120 = -1;
	int32_t t5 = -1;

	t5 = (x117%(x118>>(x119%x120)));

	if (t5 != 5) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x145 = UINT16_MAX;
	volatile int64_t x146 = 42358922LL;
	int8_t x147 = INT8_MAX;
	int8_t x148 = -1;
	volatile int64_t t6 = -1658375324982LL;

	t6 = (x145%(x146>>(x147%x148)));

	if (t6 != 65535LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x225 = INT16_MAX;
	static volatile uint64_t x226 = 3119679532580LLU;
	volatile uint32_t x227 = 0U;
	int8_t x228 = INT8_MAX;
	volatile uint64_t t7 = 4742LLU;

	t7 = (x225%(x226>>(x227%x228)));

	if (t7 != 32767LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x237 = 200;
	uint64_t x238 = UINT64_MAX;
	uint8_t x239 = 9U;
	static int8_t x240 = -1;
	static uint64_t t8 = 17745052675507281LLU;

	t8 = (x237%(x238>>(x239%x240)));

	if (t8 != 200LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x249 = INT16_MAX;
	int32_t x250 = 23214197;
	static uint16_t x251 = 162U;
	int16_t x252 = -1;
	volatile int32_t t9 = -7;

	t9 = (x249%(x250>>(x251%x252)));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x253 = INT64_MIN;
	uint32_t x254 = 27899587U;
	volatile int64_t x255 = INT64_MIN;
	int64_t x256 = INT64_MIN;
	int64_t t10 = -2LL;

	t10 = (x253%(x254>>(x255%x256)));

	if (t10 != -27066001LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x269 = 256722;
	volatile int16_t x271 = 0;
	volatile int8_t x272 = 1;

	t11 = (x269%(x270>>(x271%x272)));

	if (t11 != 256722) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x273 = INT8_MIN;
	int16_t x276 = 1;
	static int32_t t12 = 792637450;

	t12 = (x273%(x274>>(x275%x276)));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x321 = 2956;
	uint32_t x322 = 16149477U;
	int32_t x323 = 2420;
	int8_t x324 = -1;
	volatile uint32_t t13 = 26U;

	t13 = (x321%(x322>>(x323%x324)));

	if (t13 != 2956U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x409 = INT64_MIN;
	int64_t x410 = 22929544LL;
	volatile int8_t x411 = -1;
	uint32_t x412 = UINT32_MAX;

	t14 = (x409%(x410>>(x411%x412)));

	if (t14 != -7087704LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x417 = UINT64_MAX;
	uint64_t x418 = UINT64_MAX;
	int8_t x420 = INT8_MIN;
	uint64_t t15 = 109LLU;

	t15 = (x417%(x418>>(x419%x420)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x425 = -1;
	uint32_t x426 = UINT32_MAX;
	static volatile int64_t x427 = INT64_MIN;
	int16_t x428 = -1;
	static uint32_t t16 = 4719373U;

	t16 = (x425%(x426>>(x427%x428)));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x433 = -1;
	static int64_t x434 = INT64_MAX;
	uint8_t x435 = 5U;
	int64_t t17 = 13226655LL;

	t17 = (x433%(x434>>(x435%x436)));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x465 = INT8_MIN;
	static int16_t x467 = INT16_MIN;
	static volatile int32_t t18 = -2;

	t18 = (x465%(x466>>(x467%x468)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x473 = UINT32_MAX;
	static uint64_t x474 = 8431450LLU;
	uint32_t x475 = 5U;
	uint64_t t19 = 8LLU;

	t19 = (x473%(x474>>(x475%x476)));

	if (t19 != 210695LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x481 = INT16_MIN;
	uint32_t x482 = UINT32_MAX;
	int32_t x484 = -1;
	static volatile uint32_t t20 = 289564U;

	t20 = (x481%(x482>>(x483%x484)));

	if (t20 != 4294934528U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x485 = INT8_MIN;
	int32_t x486 = 18350264;
	static int16_t x487 = -1;
	static int8_t x488 = -1;
	volatile int32_t t21 = 241;

	t21 = (x485%(x486>>(x487%x488)));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint16_t x493 = 26702U;
	int64_t x494 = INT64_MAX;
	int16_t x495 = -12;
	static int64_t x496 = -1LL;
	int64_t t22 = -72215280753849322LL;

	t22 = (x493%(x494>>(x495%x496)));

	if (t22 != 26702LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x497 = UINT16_MAX;
	int64_t x498 = INT64_MAX;
	static int32_t x499 = -1;
	uint32_t x500 = 58U;
	static int64_t t23 = 3070826LL;

	t23 = (x497%(x498>>(x499%x500)));

	if (t23 != 65535LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x505 = 4U;
	volatile uint16_t x507 = 169U;
	int8_t x508 = -1;
	volatile int32_t t24 = -7527;

	t24 = (x505%(x506>>(x507%x508)));

	if (t24 != 4) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint64_t x521 = UINT64_MAX;
	int32_t x522 = INT32_MAX;
	static int8_t x523 = -1;
	volatile int32_t x524 = -1;
	static volatile uint64_t t25 = 7997303317255LLU;

	t25 = (x521%(x522>>(x523%x524)));

	if (t25 != 3LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x553 = 0;
	int32_t x555 = INT32_MIN;
	volatile int32_t t26 = 29466966;

	t26 = (x553%(x554>>(x555%x556)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x581 = -1;
	uint16_t x583 = 32616U;
	int64_t x584 = -1LL;
	volatile int32_t t27 = -16;

	t27 = (x581%(x582>>(x583%x584)));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x590 = 1274980185LL;
	int64_t x591 = 0LL;
	int64_t t28 = 3906971707LL;

	t28 = (x589%(x590>>(x591%x592)));

	if (t28 != -884979458LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x676 = INT8_MIN;
	uint64_t t29 = 55456LLU;

	t29 = (x673%(x674>>(x675%x676)));

	if (t29 != 3211459026421LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x693 = INT32_MIN;
	static uint8_t x694 = UINT8_MAX;
	volatile uint32_t x695 = 45427505U;
	static volatile uint16_t x696 = 1U;
	static int32_t t30 = 82447;

	t30 = (x693%(x694>>(x695%x696)));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x701 = INT8_MIN;
	int32_t x702 = INT32_MAX;
	static int8_t x703 = 0;
	static int32_t x704 = 4144531;
	int32_t t31 = 2526;

	t31 = (x701%(x702>>(x703%x704)));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x705 = 1453U;
	volatile uint16_t x706 = 242U;
	int8_t x708 = INT8_MAX;
	static int32_t t32 = -603453;

	t32 = (x705%(x706>>(x707%x708)));

	if (t32 != 13) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x750 = INT8_MAX;
	uint64_t x751 = 3LLU;
	uint32_t x752 = UINT32_MAX;
	uint32_t t33 = 17852883U;

	t33 = (x749%(x750>>(x751%x752)));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x809 = UINT64_MAX;
	uint32_t x810 = 1569731137U;
	volatile int32_t x812 = INT32_MIN;

	t34 = (x809%(x810>>(x811%x812)));

	if (t34 != 1111007588LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x829 = INT64_MAX;
	uint8_t x830 = UINT8_MAX;
	volatile int64_t x831 = INT64_MIN;
	int32_t x832 = INT32_MIN;
	volatile int64_t t35 = 3LL;

	t35 = (x829%(x830>>(x831%x832)));

	if (t35 != 127LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x837 = INT8_MIN;
	static uint32_t x838 = 395U;
	int32_t x839 = -1;
	static volatile int16_t x840 = -1;
	uint32_t t36 = 10U;

	t36 = (x837%(x838>>(x839%x840)));

	if (t36 != 238U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x856 = -1;
	volatile int64_t t37 = -11034664700714LL;

	t37 = (x853%(x854>>(x855%x856)));

	if (t37 != 3LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x897 = INT64_MIN;
	uint32_t x898 = UINT32_MAX;
	uint32_t x899 = UINT32_MAX;
	int64_t x900 = -1LL;

	t38 = (x897%(x898>>(x899%x900)));

	if (t38 != -2147483648LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x937 = INT8_MIN;
	volatile int8_t x938 = INT8_MAX;
	int64_t x939 = 0LL;
	uint32_t x940 = UINT32_MAX;
	static volatile int32_t t39 = -2891;

	t39 = (x937%(x938>>(x939%x940)));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x945 = UINT32_MAX;
	volatile uint32_t t40 = 19U;

	t40 = (x945%(x946>>(x947%x948)));

	if (t40 != 8U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x985 = 59775263507LLU;
	static volatile uint8_t x987 = 3U;
	uint16_t x988 = 12U;
	uint64_t t41 = 50119356276078498LLU;

	t41 = (x985%(x986>>(x987%x988)));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1005 = 0LL;
	uint32_t x1006 = 116910U;
	static volatile int8_t x1007 = INT8_MAX;
	volatile int16_t x1008 = 1;
	volatile int64_t t42 = -9615453212022LL;

	t42 = (x1005%(x1006>>(x1007%x1008)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x1009 = -32;
	volatile int32_t x1011 = INT32_MIN;
	int8_t x1012 = 32;
	volatile uint64_t t43 = 17040319388249883LLU;

	t43 = (x1009%(x1010>>(x1011%x1012)));

	if (t43 != 10LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1017 = -1LL;
	uint16_t x1018 = 10U;
	uint32_t x1019 = 13U;
	static int64_t x1020 = 5LL;
	static volatile int64_t t44 = 10720962803899512LL;

	t44 = (x1017%(x1018>>(x1019%x1020)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x1021 = 504548117LL;
	volatile int64_t x1022 = 103430457300281298LL;
	uint8_t x1023 = 123U;
	volatile int64_t x1024 = -1LL;
	volatile int64_t t45 = 1LL;

	t45 = (x1021%(x1022>>(x1023%x1024)));

	if (t45 != 504548117LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1029 = INT8_MIN;
	int8_t x1030 = INT8_MAX;
	int64_t x1032 = -1LL;
	int32_t t46 = 745;

	t46 = (x1029%(x1030>>(x1031%x1032)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1037 = INT16_MAX;
	int8_t x1038 = INT8_MAX;
	static int32_t x1039 = 7425;
	int16_t x1040 = -11;
	volatile int32_t t47 = -2;

	t47 = (x1037%(x1038>>(x1039%x1040)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x1085 = 30U;
	volatile int64_t x1086 = INT64_MAX;
	volatile uint64_t x1087 = UINT64_MAX;
	static int32_t x1088 = INT32_MAX;
	volatile int64_t t48 = 102824874LL;

	t48 = (x1085%(x1086>>(x1087%x1088)));

	if (t48 != 30LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x1117 = -759;
	uint64_t x1118 = 21413064276948LLU;
	int16_t x1119 = INT16_MIN;
	volatile int16_t x1120 = INT16_MIN;
	volatile uint64_t t49 = 8430412816646534LLU;

	t49 = (x1117%(x1118>>(x1119%x1120)));

	if (t49 != 10177982880349LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1149 = UINT16_MAX;
	volatile uint64_t x1150 = 939LLU;
	int16_t x1152 = -1;

	t50 = (x1149%(x1150>>(x1151%x1152)));

	if (t50 != 744LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x1210 = UINT16_MAX;
	uint16_t x1211 = UINT16_MAX;
	int8_t x1212 = -6;
	volatile int64_t t51 = -15LL;

	t51 = (x1209%(x1210>>(x1211%x1212)));

	if (t51 != -8LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1265 = INT64_MAX;
	uint8_t x1266 = UINT8_MAX;
	static int16_t x1267 = INT16_MIN;
	int64_t x1268 = -1LL;
	int64_t t52 = -79603208622682LL;

	t52 = (x1265%(x1266>>(x1267%x1268)));

	if (t52 != 127LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1269 = INT16_MAX;
	volatile uint16_t x1270 = 747U;
	int16_t x1272 = INT16_MAX;
	static int32_t t53 = -51700;

	t53 = (x1269%(x1270>>(x1271%x1272)));

	if (t53 != 316) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x1281 = INT64_MIN;
	volatile uint16_t x1283 = UINT16_MAX;
	static int16_t x1284 = INT16_MAX;
	int64_t t54 = 568695658428854LL;

	t54 = (x1281%(x1282>>(x1283%x1284)));

	if (t54 != -8LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1305 = 3U;
	int64_t x1307 = 32917308727LL;
	int64_t x1308 = 17LL;
	volatile int32_t t55 = -22;

	t55 = (x1305%(x1306>>(x1307%x1308)));

	if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1309 = INT32_MIN;
	int32_t x1310 = INT32_MAX;
	volatile uint8_t x1311 = 0U;

	t56 = (x1309%(x1310>>(x1311%x1312)));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x1357 = 24U;
	uint8_t x1358 = 52U;
	int32_t x1360 = INT32_MAX;
	volatile uint32_t t57 = 26050U;

	t57 = (x1357%(x1358>>(x1359%x1360)));

	if (t57 != 24U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x1365 = -1;
	static int16_t x1366 = INT16_MAX;
	volatile int8_t x1367 = 0;
	int8_t x1368 = 1;

	t58 = (x1365%(x1366>>(x1367%x1368)));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x1377 = 7244;
	volatile int16_t x1378 = INT16_MAX;
	int32_t x1379 = 19053;
	int8_t x1380 = -1;

	t59 = (x1377%(x1378>>(x1379%x1380)));

	if (t59 != 7244) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x1385 = 544935947605522623LLU;
	static int16_t x1386 = 1;
	uint32_t x1387 = UINT32_MAX;
	static uint8_t x1388 = 1U;
	uint64_t t60 = 47112647323104505LLU;

	t60 = (x1385%(x1386>>(x1387%x1388)));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x1414 = 113296137194773LLU;
	volatile uint8_t x1415 = UINT8_MAX;
	int16_t x1416 = -1;
	uint64_t t61 = 6686965297242LLU;

	t61 = (x1413%(x1414>>(x1415%x1416)));

	if (t61 != 65535LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x1429 = 3;
	static volatile uint64_t x1430 = 16431897582168LLU;

	t62 = (x1429%(x1430>>(x1431%x1432)));

	if (t62 != 3LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x1445 = UINT64_MAX;
	static int8_t x1446 = INT8_MAX;
	static volatile int64_t x1447 = INT64_MIN;
	volatile int64_t x1448 = INT64_MIN;
	volatile uint64_t t63 = 1106925237442717961LLU;

	t63 = (x1445%(x1446>>(x1447%x1448)));

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x1501 = 2550LLU;
	int32_t x1502 = 12;
	int16_t x1503 = INT16_MIN;
	volatile int8_t x1504 = INT8_MIN;

	t64 = (x1501%(x1502>>(x1503%x1504)));

	if (t64 != 6LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x1529 = UINT32_MAX;
	uint8_t x1530 = UINT8_MAX;
	int64_t x1532 = -1LL;
	volatile uint32_t t65 = 306161655U;

	t65 = (x1529%(x1530>>(x1531%x1532)));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x1565 = 1U;
	static int64_t x1566 = 16570423LL;
	uint8_t x1567 = 1U;
	int32_t x1568 = INT32_MIN;
	static volatile int64_t t66 = -2581800770LL;

	t66 = (x1565%(x1566>>(x1567%x1568)));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x1597 = INT16_MAX;
	int16_t x1599 = -479;
	int64_t x1600 = -1LL;
	uint64_t t67 = 18948940LLU;

	t67 = (x1597%(x1598>>(x1599%x1600)));

	if (t67 != 32767LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x1637 = -1;
	uint8_t x1638 = 28U;
	int8_t x1640 = -1;
	volatile int32_t t68 = -935;

	t68 = (x1637%(x1638>>(x1639%x1640)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x1641 = UINT32_MAX;
	uint64_t x1642 = 47083LLU;
	uint32_t x1644 = UINT32_MAX;
	static volatile uint64_t t69 = 25556LLU;

	t69 = (x1641%(x1642>>(x1643%x1644)));

	if (t69 != 8952LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x1685 = -556096633568LL;
	volatile int8_t x1686 = 1;
	int64_t x1687 = -55071559658371033LL;
	int64_t t70 = -121080258511510027LL;

	t70 = (x1685%(x1686>>(x1687%x1688)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x1729 = INT32_MIN;
	volatile uint16_t x1731 = 7U;
	static int32_t x1732 = INT32_MIN;
	static int32_t t71 = 0;

	t71 = (x1729%(x1730>>(x1731%x1732)));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x1737 = INT16_MIN;
	static int8_t x1740 = -1;
	int32_t t72 = 5;

	t72 = (x1737%(x1738>>(x1739%x1740)));

	if (t72 != -56) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x1761 = 3142U;
	int8_t x1763 = -1;
	static uint32_t x1764 = UINT32_MAX;
	static volatile int64_t t73 = 3440360171LL;

	t73 = (x1761%(x1762>>(x1763%x1764)));

	if (t73 != 3142LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x1781 = INT32_MAX;
	uint8_t x1783 = 96U;
	volatile int8_t x1784 = -1;
	int32_t t74 = 2085;

	t74 = (x1781%(x1782>>(x1783%x1784)));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x1790 = 699U;
	volatile int64_t x1792 = -1LL;

	t75 = (x1789%(x1790>>(x1791%x1792)));

	if (t75 != -28LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x1821 = -9;
	int32_t x1823 = INT32_MAX;
	static volatile int16_t x1824 = INT16_MAX;
	volatile uint64_t t76 = 259LLU;

	t76 = (x1821%(x1822>>(x1823%x1824)));

	if (t76 != 9223372036854775800LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x1837 = INT32_MIN;
	uint8_t x1838 = 1U;
	int64_t x1839 = INT64_MIN;
	int16_t x1840 = INT16_MIN;
	static int32_t t77 = -464032188;

	t77 = (x1837%(x1838>>(x1839%x1840)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x1925 = 0;
	static int8_t x1926 = INT8_MAX;
	uint16_t x1927 = UINT16_MAX;
	int16_t x1928 = INT16_MAX;
	int32_t t78 = -91;

	t78 = (x1925%(x1926>>(x1927%x1928)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x1934 = 41117488911LLU;
	uint16_t x1935 = 16323U;
	static uint8_t x1936 = 11U;

	t79 = (x1933%(x1934>>(x1935%x1936)));

	if (t79 != 65535LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x1941 = INT32_MAX;
	uint64_t x1942 = UINT64_MAX;
	int32_t x1943 = INT32_MAX;
	static uint64_t t80 = 338609719603694LLU;

	t80 = (x1941%(x1942>>(x1943%x1944)));

	if (t80 != 2147483647LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x1945 = -1005930;
	static uint32_t x1946 = UINT32_MAX;
	int16_t x1947 = -37;
	static int16_t x1948 = -1;
	volatile uint32_t t81 = 1135160225U;

	t81 = (x1945%(x1946>>(x1947%x1948)));

	if (t81 != 4293961366U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x1958 = 3;
	uint8_t x1959 = 1U;
	static uint64_t x1960 = UINT64_MAX;
	int32_t t82 = 243;

	t82 = (x1957%(x1958>>(x1959%x1960)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x1969 = 401U;
	uint32_t x1970 = 936U;
	int32_t x1971 = 1;
	volatile int16_t x1972 = -1;
	uint32_t t83 = 4739U;

	t83 = (x1969%(x1970>>(x1971%x1972)));

	if (t83 != 401U) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x1974 = INT16_MAX;
	uint8_t x1975 = 1U;
	int32_t x1976 = INT32_MIN;
	int32_t t84 = -126293;

	t84 = (x1973%(x1974>>(x1975%x1976)));

	if (t84 != 9500) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x1981 = INT16_MIN;
	volatile uint16_t x1982 = 13U;
	int16_t x1983 = -1;
	int32_t x1984 = -1;
	volatile int32_t t85 = 44964875;

	t85 = (x1981%(x1982>>(x1983%x1984)));

	if (t85 != -8) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x2021 = 0U;
	int64_t x2022 = INT64_MAX;
	uint16_t x2023 = 29U;
	volatile uint8_t x2024 = UINT8_MAX;
	volatile int64_t t86 = 7190761905545LL;

	t86 = (x2021%(x2022>>(x2023%x2024)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x2027 = 691U;
	int64_t x2028 = 8LL;
	static int64_t t87 = 23802157673309299LL;

	t87 = (x2025%(x2026>>(x2027%x2028)));

	if (t87 != 7LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x2041 = INT32_MAX;
	uint32_t x2042 = UINT32_MAX;
	int8_t x2044 = INT8_MIN;
	uint32_t t88 = 457U;

	t88 = (x2041%(x2042>>(x2043%x2044)));

	if (t88 != 2147483647U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x2049 = INT64_MIN;
	volatile int8_t x2050 = INT8_MAX;
	int64_t x2051 = 1LL;
	int16_t x2052 = INT16_MIN;
	volatile int64_t t89 = -721019733LL;

	t89 = (x2049%(x2050>>(x2051%x2052)));

	if (t89 != -8LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x2057 = 218LLU;
	volatile uint64_t x2058 = UINT64_MAX;
	uint8_t x2059 = 13U;
	volatile int8_t x2060 = INT8_MIN;

	t90 = (x2057%(x2058>>(x2059%x2060)));

	if (t90 != 218LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x2085 = -3;
	uint64_t x2086 = 9789379LLU;
	uint64_t x2087 = UINT64_MAX;
	int32_t x2088 = INT32_MAX;
	static volatile uint64_t t91 = 40648LLU;

	t91 = (x2085%(x2086>>(x2087%x2088)));

	if (t91 != 987517LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x2101 = UINT16_MAX;
	uint64_t x2102 = 444796341767007377LLU;
	static uint64_t x2103 = 17849706632187LLU;
	int8_t x2104 = 22;

	t92 = (x2101%(x2102>>(x2103%x2104)));

	if (t92 != 65535LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x2117 = 241U;
	uint16_t x2118 = 7U;
	int32_t x2119 = 1;
	static uint32_t x2120 = UINT32_MAX;
	uint32_t t93 = 7209U;

	t93 = (x2117%(x2118>>(x2119%x2120)));

	if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x2153 = 4132;
	int8_t x2155 = INT8_MIN;
	volatile uint64_t t94 = 77662LLU;

	t94 = (x2153%(x2154>>(x2155%x2156)));

	if (t94 != 4132LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x2158 = UINT8_MAX;
	volatile uint16_t x2159 = 7U;
	uint32_t t95 = 599U;

	t95 = (x2157%(x2158>>(x2159%x2160)));

	if (t95 != 15U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x2165 = 6632581U;
	uint8_t x2166 = UINT8_MAX;
	int64_t x2167 = INT64_MIN;
	static uint16_t x2168 = 4U;

	t96 = (x2165%(x2166>>(x2167%x2168)));

	if (t96 != 31U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x2169 = INT8_MAX;
	static int64_t x2171 = INT64_MIN;
	int8_t x2172 = -1;
	volatile int32_t t97 = -833;

	t97 = (x2169%(x2170>>(x2171%x2172)));

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x2177 = -1;
	int8_t x2178 = 5;
	static int16_t x2179 = INT16_MIN;
	int32_t t98 = -1709092;

	t98 = (x2177%(x2178>>(x2179%x2180)));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x2185 = 11LLU;
	int16_t x2186 = INT16_MAX;
	int8_t x2188 = 2;
	volatile uint64_t t99 = 582842LLU;

	t99 = (x2185%(x2186>>(x2187%x2188)));

	if (t99 != 11LLU) { NG(); } else { ; }
	
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


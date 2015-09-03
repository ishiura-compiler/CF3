#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x10 = INT32_MIN;
int16_t x12 = -1;
static volatile int32_t t2 = 783948079;
volatile uint16_t x14 = UINT16_MAX;
static volatile int16_t x21 = INT16_MIN;
int32_t x23 = INT32_MAX;
int32_t x25 = INT32_MIN;
int16_t x36 = 26;
static volatile uint16_t x38 = 891U;
volatile uint64_t x40 = UINT64_MAX;
uint64_t t9 = 10LLU;
static int16_t x47 = INT16_MIN;
volatile uint32_t t11 = 139214913U;
volatile int16_t x50 = 5;
int16_t x57 = INT16_MIN;
volatile int8_t x59 = -1;
int16_t x63 = -1;
int16_t x64 = -8;
int32_t t15 = -9696265;
int32_t x69 = INT32_MAX;
uint32_t x71 = 1689728719U;
volatile uint8_t x75 = 7U;
int32_t x76 = INT32_MIN;
int16_t x83 = INT16_MIN;
volatile int64_t x86 = INT64_MIN;
int32_t x87 = INT32_MIN;
int32_t x89 = -1;
static uint64_t x91 = 569842822LLU;
static int64_t x92 = INT64_MAX;
int64_t x93 = INT64_MIN;
static int16_t x94 = INT16_MIN;
uint64_t t23 = 1265446431LLU;
volatile int32_t t24 = -34922645;
int8_t x112 = -1;
int64_t x118 = INT64_MAX;
int32_t x121 = -1;
static int8_t x133 = INT8_MIN;
int64_t x143 = 1453LL;
static int8_t x147 = 5;
volatile int64_t t37 = 1LL;
volatile uint64_t x156 = UINT64_MAX;
int32_t x157 = -1;
int64_t x160 = 258164661512891490LL;
int32_t x162 = INT32_MIN;
int32_t x164 = INT32_MAX;
volatile int32_t t40 = INT32_MIN;
uint16_t x170 = 11U;
volatile uint16_t x176 = UINT16_MAX;
volatile int8_t x178 = 17;
int64_t t44 = 5646767077LL;
int16_t x184 = -11802;
int64_t t47 = 802887172840954068LL;
volatile int32_t x195 = -1;
int8_t x197 = INT8_MIN;
static int64_t t49 = 3933721LL;
int8_t x201 = -2;
int64_t x204 = INT64_MIN;
static int32_t x207 = INT32_MAX;
int16_t x210 = INT16_MIN;
static int8_t x211 = -1;
int32_t t52 = -383;
int32_t x213 = INT32_MIN;
int8_t x220 = -1;
static int16_t x222 = INT16_MIN;
static uint8_t x224 = 12U;
volatile uint32_t t55 = 27718U;
int32_t x227 = INT32_MAX;
int64_t x228 = INT64_MAX;
int32_t x240 = 340129;
volatile int32_t t61 = -15975511;
int64_t x252 = INT64_MAX;
int64_t t62 = -16191472917LL;
int16_t x256 = -1;
static uint16_t x259 = 18118U;
volatile int32_t x260 = -526383;
int64_t x261 = INT64_MIN;
uint16_t x267 = UINT16_MAX;
int8_t x269 = 28;
volatile int32_t x271 = INT32_MIN;
uint16_t x272 = 19357U;
int8_t x279 = -54;
volatile int32_t t69 = -78532336;
volatile uint32_t x302 = 80577U;
uint16_t x304 = UINT16_MAX;
int32_t x307 = INT32_MAX;
static int32_t x310 = INT32_MIN;
static int64_t x317 = 9LL;
int16_t x318 = INT16_MAX;
int8_t x335 = INT8_MIN;
volatile uint32_t x340 = UINT32_MAX;
volatile int16_t x345 = INT16_MAX;
static int32_t x347 = -28272088;
int32_t x351 = -67168307;
volatile uint64_t x353 = 48494487135925932LLU;
volatile int32_t t89 = 442297053;
volatile uint16_t x364 = 63U;
int32_t x376 = INT32_MIN;
static uint8_t x381 = 112U;
uint8_t x391 = UINT8_MAX;
int32_t t98 = 434738704;
uint16_t x398 = 16469U;
volatile int32_t t99 = 710527;


void f0(void) {
	int32_t x1 = 9356546;
	static int32_t x2 = INT32_MIN;
	uint8_t x3 = UINT8_MAX;
	volatile uint16_t x4 = 1947U;
	int32_t t0 = -96;

	t0 = ((x1^(x2<x3))^x4);

	if (t0 != 9355928) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	uint32_t x6 = UINT32_MAX;
	uint16_t x7 = 57U;
	static uint32_t x8 = 10348638U;
	volatile uint32_t t1 = 80920U;

	t1 = ((x5^(x6<x7))^x8);

	if (t1 != 10348705U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int8_t x11 = INT8_MAX;

	t2 = ((x9^(x10<x11))^x12);

	if (t2 != -2147483647) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int16_t x15 = -3;
	int16_t x16 = -6;
	static volatile int32_t t3 = 3866;

	t3 = ((x13^(x14<x15))^x16);

	if (t3 != 32762) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -4411LL;
	static int64_t x18 = -702745700LL;
	uint16_t x19 = 35U;
	int64_t x20 = INT64_MAX;
	int64_t t4 = -7549574794517LL;

	t4 = ((x17^(x18<x19))^x20);

	if (t4 != -9223372036854771397LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 202161085U;
	uint16_t x24 = 1656U;
	int32_t t5 = 68198516;

	t5 = ((x21^(x22<x23))^x24);

	if (t5 != -31111) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = INT32_MIN;
	uint64_t x27 = 927LLU;
	int64_t x28 = INT64_MIN;
	volatile int64_t t6 = -1967253831LL;

	t6 = ((x25^(x26<x27))^x28);

	if (t6 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	int32_t x30 = INT32_MAX;
	uint8_t x31 = 86U;
	volatile int64_t x32 = 37032703LL;
	uint64_t t7 = 116LLU;

	t7 = ((x29^(x30<x31))^x32);

	if (t7 != 18446744073672518912LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = -7792588;
	int16_t x34 = INT16_MIN;
	volatile int32_t x35 = INT32_MAX;
	static volatile int32_t t8 = 453;

	t8 = ((x33^(x34<x35))^x36);

	if (t8 != -7792593) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	int8_t x39 = -22;

	t9 = ((x37^(x38<x39))^x40);

	if (t9 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = -13;
	static int16_t x42 = -1;
	static int32_t x43 = -52836;
	int16_t x44 = -15;
	volatile int32_t t10 = -38;

	t10 = ((x41^(x42<x43))^x44);

	if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	uint8_t x46 = 0U;
	uint32_t x48 = UINT32_MAX;

	t11 = ((x45^(x46<x47))^x48);

	if (t11 != 4294934528U) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = INT32_MIN;
	static uint32_t x51 = 3812761U;
	uint16_t x52 = 4U;
	static volatile int32_t t12 = -776132258;

	t12 = ((x49^(x50<x51))^x52);

	if (t12 != -2147483643) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	volatile int64_t x54 = -2459739728697208491LL;
	uint8_t x55 = 1U;
	static int64_t x56 = INT64_MAX;
	volatile int64_t t13 = -13649LL;

	t13 = ((x53^(x54<x55))^x56);

	if (t13 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = -1LL;
	volatile int32_t x60 = INT32_MIN;
	volatile int32_t t14 = -5246;

	t14 = ((x57^(x58<x59))^x60);

	if (t14 != 2147450880) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MAX;
	int8_t x62 = INT8_MIN;

	t15 = ((x61^(x62<x63))^x64);

	if (t15 != -2147483642) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MIN;
	int8_t x66 = -22;
	int8_t x67 = -1;
	int64_t x68 = -782684362870827126LL;
	int64_t t16 = 30723614069281910LL;

	t16 = ((x65^(x66<x67))^x68);

	if (t16 != 782684362870827019LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x70 = INT8_MIN;
	int64_t x72 = -484747224636288LL;
	static volatile int64_t t17 = -8770951289804433LL;

	t17 = ((x69^(x70<x71))^x72);

	if (t17 != -484749300638849LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MAX;
	volatile int32_t x74 = INT32_MAX;
	int64_t t18 = 5466684800LL;

	t18 = ((x73^(x74<x75))^x76);

	if (t18 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	static int64_t x78 = 641527LL;
	int16_t x79 = -4042;
	int8_t x80 = INT8_MIN;
	int32_t t19 = -925080;

	t19 = ((x77^(x78<x79))^x80);

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	static int64_t x82 = -44395509422661537LL;
	int32_t x84 = INT32_MAX;
	static volatile int32_t t20 = 12;

	t20 = ((x81^(x82<x83))^x84);

	if (t20 != -2147483522) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = 12;
	int32_t x88 = 62473;
	int32_t t21 = -64951;

	t21 = ((x85^(x86<x87))^x88);

	if (t21 != 62468) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = 1622;
	volatile int64_t t22 = 1581988LL;

	t22 = ((x89^(x90<x91))^x92);

	if (t22 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x95 = -46;
	volatile uint64_t x96 = 106058839807LLU;

	t23 = ((x93^(x94<x95))^x96);

	if (t23 != 9223372142913615614LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x97 = 28880U;
	uint8_t x98 = 40U;
	int32_t x99 = INT32_MIN;
	int8_t x100 = -1;

	t24 = ((x97^(x98<x99))^x100);

	if (t24 != -28881) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = -1347;
	static int32_t x102 = -498905;
	int16_t x103 = -1;
	volatile int32_t x104 = -693154324;
	int32_t t25 = 9909640;

	t25 = ((x101^(x102<x103))^x104);

	if (t25 != 693155664) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = 1942;
	uint16_t x106 = 0U;
	static uint64_t x107 = UINT64_MAX;
	int64_t x108 = INT64_MIN;
	int64_t t26 = -18LL;

	t26 = ((x105^(x106<x107))^x108);

	if (t26 != -9223372036854773865LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x109 = 8U;
	uint16_t x110 = UINT16_MAX;
	volatile uint8_t x111 = 62U;
	volatile int32_t t27 = 367;

	t27 = ((x109^(x110<x111))^x112);

	if (t27 != -9) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = -1LL;
	int64_t x114 = INT64_MIN;
	int32_t x115 = -1431611;
	volatile int8_t x116 = INT8_MIN;
	int64_t t28 = 151035937786222LL;

	t28 = ((x113^(x114<x115))^x116);

	if (t28 != 126LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	int64_t x119 = 13629263LL;
	int8_t x120 = INT8_MIN;
	int32_t t29 = -27;

	t29 = ((x117^(x118<x119))^x120);

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x122 = INT8_MIN;
	volatile int64_t x123 = INT64_MIN;
	int32_t x124 = INT32_MIN;
	int32_t t30 = INT32_MAX;

	t30 = ((x121^(x122<x123))^x124);

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = INT8_MIN;
	static int8_t x126 = INT8_MIN;
	uint8_t x127 = UINT8_MAX;
	static volatile int16_t x128 = -227;
	static volatile int32_t t31 = -81482123;

	t31 = ((x125^(x126<x127))^x128);

	if (t31 != 156) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = 836331;
	uint64_t x130 = UINT64_MAX;
	static uint32_t x131 = 1734U;
	int16_t x132 = 2047;
	int32_t t32 = -1;

	t32 = ((x129^(x130<x131))^x132);

	if (t32 != 836884) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x134 = INT32_MIN;
	int64_t x135 = 181136548054539501LL;
	uint16_t x136 = 2810U;
	int32_t t33 = 824;

	t33 = ((x133^(x134<x135))^x136);

	if (t33 != -2693) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = 1;
	int8_t x138 = INT8_MIN;
	int8_t x139 = INT8_MIN;
	uint8_t x140 = 1U;
	int32_t t34 = -3143;

	t34 = ((x137^(x138<x139))^x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;
	int8_t x142 = INT8_MAX;
	static uint32_t x144 = 447U;
	volatile uint32_t t35 = 0U;

	t35 = ((x141^(x142<x143))^x144);

	if (t35 != 4294966849U) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = INT64_MAX;
	int8_t x146 = 27;
	volatile int64_t x148 = -453729LL;
	static int64_t t36 = 467048860LL;

	t36 = ((x145^(x146<x147))^x148);

	if (t36 != -9223372036854322080LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = 60639594189876LL;
	int32_t x150 = INT32_MIN;
	int32_t x151 = INT32_MAX;
	uint16_t x152 = 104U;

	t37 = ((x149^(x150<x151))^x152);

	if (t37 != 60639594189917LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -1;
	uint32_t x154 = 82380U;
	static uint8_t x155 = 89U;
	static volatile uint64_t t38 = 3876735LLU;

	t38 = ((x153^(x154<x155))^x156);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x158 = INT8_MIN;
	int32_t x159 = -1;
	static int64_t t39 = 1694733597700LL;

	t39 = ((x157^(x158<x159))^x160);

	if (t39 != -258164661512891492LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = -1;
	volatile int64_t x163 = -63728165054600LL;

	t40 = ((x161^(x162<x163))^x164);

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x165 = 679179062;
	uint64_t x166 = 403LLU;
	int8_t x167 = INT8_MAX;
	volatile uint32_t x168 = UINT32_MAX;
	static volatile uint32_t t41 = 1912391667U;

	t41 = ((x165^(x166<x167))^x168);

	if (t41 != 3615788233U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -100;
	static volatile int32_t x171 = INT32_MAX;
	int16_t x172 = -6;
	static int32_t t42 = 2187;

	t42 = ((x169^(x170<x171))^x172);

	if (t42 != 103) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = UINT16_MAX;
	uint64_t x174 = UINT64_MAX;
	int64_t x175 = 1454LL;
	int32_t t43 = 595250541;

	t43 = ((x173^(x174<x175))^x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 234U;
	volatile uint32_t x179 = UINT32_MAX;
	static volatile int64_t x180 = INT64_MIN;

	t44 = ((x177^(x178<x179))^x180);

	if (t44 != -9223372036854775573LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 660U;
	int32_t x182 = -58806;
	uint32_t x183 = UINT32_MAX;
	uint32_t t45 = 3473U;

	t45 = ((x181^(x182<x183))^x184);

	if (t45 != 4294955891U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	static int8_t x186 = -5;
	static int64_t x187 = -1LL;
	int64_t x188 = -1LL;
	int64_t t46 = 58746048LL;

	t46 = ((x185^(x186<x187))^x188);

	if (t46 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	uint16_t x190 = UINT16_MAX;
	int32_t x191 = 37504;
	uint16_t x192 = 7U;

	t47 = ((x189^(x190<x191))^x192);

	if (t47 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	volatile int32_t x194 = -187;
	uint16_t x196 = 3949U;
	int32_t t48 = 6889374;

	t48 = ((x193^(x194<x195))^x196);

	if (t48 != -28820) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x198 = 34930U;
	static int16_t x199 = INT16_MAX;
	int64_t x200 = INT64_MIN;

	t49 = ((x197^(x198<x199))^x200);

	if (t49 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x202 = 2225313742399551LLU;
	uint16_t x203 = 23U;
	int64_t t50 = 1198926624LL;

	t50 = ((x201^(x202<x203))^x204);

	if (t50 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x205 = INT8_MIN;
	uint16_t x206 = 52U;
	int16_t x208 = -1;
	int32_t t51 = -2135094;

	t51 = ((x205^(x206<x207))^x208);

	if (t51 != 126) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 182373;
	static uint8_t x212 = 5U;

	t52 = ((x209^(x210<x211))^x212);

	if (t52 != 182369) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x214 = UINT8_MAX;
	int8_t x215 = INT8_MIN;
	int32_t x216 = -1;
	static volatile int32_t t53 = INT32_MAX;

	t53 = ((x213^(x214<x215))^x216);

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -202;
	int8_t x218 = INT8_MAX;
	uint16_t x219 = 481U;
	int32_t t54 = -165;

	t54 = ((x217^(x218<x219))^x220);

	if (t54 != 200) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 1229U;
	int64_t x223 = -1LL;

	t55 = ((x221^(x222<x223))^x224);

	if (t55 != 1216U) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = INT16_MIN;
	int16_t x226 = -53;
	volatile int64_t t56 = -95692261LL;

	t56 = ((x225^(x226<x227))^x228);

	if (t56 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	int32_t x230 = INT32_MAX;
	int8_t x231 = INT8_MAX;
	int64_t x232 = -828LL;
	volatile int64_t t57 = 112988073116365LL;

	t57 = ((x229^(x230<x231))^x232);

	if (t57 != 9223372036854774980LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 21094U;
	int64_t x234 = -1365859964LL;
	int64_t x235 = INT64_MIN;
	int8_t x236 = -1;
	volatile uint32_t t58 = 6U;

	t58 = ((x233^(x234<x235))^x236);

	if (t58 != 4294946201U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MAX;
	static int16_t x238 = INT16_MIN;
	int16_t x239 = INT16_MAX;
	static int32_t t59 = 416038;

	t59 = ((x237^(x238<x239))^x240);

	if (t59 != 2147143519) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x241 = 102043;
	int32_t x242 = 603313921;
	static volatile uint32_t x243 = 110969U;
	int8_t x244 = -3;
	int32_t t60 = -3;

	t60 = ((x241^(x242<x243))^x244);

	if (t60 != -102042) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x245 = 1U;
	int64_t x246 = INT64_MIN;
	int32_t x247 = INT32_MAX;
	int16_t x248 = INT16_MAX;

	t61 = ((x245^(x246<x247))^x248);

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x249 = UINT8_MAX;
	int8_t x250 = INT8_MAX;
	uint8_t x251 = 101U;

	t62 = ((x249^(x250<x251))^x252);

	if (t62 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	int32_t x254 = -1;
	int32_t x255 = INT32_MIN;
	volatile int32_t t63 = 30459;

	t63 = ((x253^(x254<x255))^x256);

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint8_t x257 = UINT8_MAX;
	int32_t x258 = 1;
	int32_t t64 = -543;

	t64 = ((x257^(x258<x259))^x260);

	if (t64 != -526545) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x262 = INT32_MIN;
	int64_t x263 = -1773176166405LL;
	uint16_t x264 = 943U;
	int64_t t65 = 833134LL;

	t65 = ((x261^(x262<x263))^x264);

	if (t65 != -9223372036854774865LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x265 = 17U;
	uint64_t x266 = UINT64_MAX;
	int16_t x268 = -1;
	int32_t t66 = 5;

	t66 = ((x265^(x266<x267))^x268);

	if (t66 != -18) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x270 = INT8_MAX;
	int32_t t67 = 43933;

	t67 = ((x269^(x270<x271))^x272);

	if (t67 != 19329) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MAX;
	int64_t x274 = INT64_MAX;
	uint8_t x275 = 1U;
	static uint16_t x276 = 117U;
	int32_t t68 = -10594;

	t68 = ((x273^(x274<x275))^x276);

	if (t68 != 32650) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	uint8_t x278 = UINT8_MAX;
	int8_t x280 = INT8_MIN;

	t69 = ((x277^(x278<x279))^x280);

	if (t69 != 32640) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 50U;
	int64_t x282 = INT64_MIN;
	uint16_t x283 = 5U;
	int8_t x284 = -1;
	volatile int32_t t70 = -1;

	t70 = ((x281^(x282<x283))^x284);

	if (t70 != -52) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -1;
	static uint32_t x286 = UINT32_MAX;
	int64_t x287 = INT64_MIN;
	uint64_t x288 = 43703689439570LLU;
	volatile uint64_t t71 = 10LLU;

	t71 = ((x285^(x286<x287))^x288);

	if (t71 != 18446700370020112045LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x289 = UINT64_MAX;
	int8_t x290 = 3;
	uint8_t x291 = 1U;
	int64_t x292 = INT64_MIN;
	volatile uint64_t t72 = 7318770168602LLU;

	t72 = ((x289^(x290<x291))^x292);

	if (t72 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MAX;
	int32_t x294 = 3855;
	static int64_t x295 = -1LL;
	static int16_t x296 = INT16_MAX;
	volatile int32_t t73 = 71;

	t73 = ((x293^(x294<x295))^x296);

	if (t73 != 2147450880) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	volatile int8_t x298 = -1;
	static volatile int8_t x299 = INT8_MIN;
	static uint8_t x300 = 3U;
	volatile int32_t t74 = -1;

	t74 = ((x297^(x298<x299))^x300);

	if (t74 != -125) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MAX;
	static uint32_t x303 = 0U;
	volatile int64_t t75 = 361146LL;

	t75 = ((x301^(x302<x303))^x304);

	if (t75 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 18671U;
	int8_t x306 = 38;
	int32_t x308 = INT32_MIN;
	static volatile uint32_t t76 = 157807784U;

	t76 = ((x305^(x306<x307))^x308);

	if (t76 != 2147502318U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	int8_t x311 = -2;
	int8_t x312 = -17;
	int64_t t77 = -6042LL;

	t77 = ((x309^(x310<x311))^x312);

	if (t77 != 9223372036854775790LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MAX;
	int64_t x314 = -3612528993673019976LL;
	volatile int64_t x315 = -240262082170664LL;
	uint16_t x316 = 30U;
	volatile int64_t t78 = 84907016739495LL;

	t78 = ((x313^(x314<x315))^x316);

	if (t78 != 9223372036854775776LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x319 = -24;
	int64_t x320 = -1LL;
	volatile int64_t t79 = 1992877959812093LL;

	t79 = ((x317^(x318<x319))^x320);

	if (t79 != -10LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MAX;
	static uint64_t x322 = 1602629857203599929LLU;
	int8_t x323 = INT8_MAX;
	int16_t x324 = -487;
	volatile int32_t t80 = 56;

	t80 = ((x321^(x322<x323))^x324);

	if (t80 != -2147483162) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x325 = 7625813939089069LLU;
	int64_t x326 = -1669LL;
	int32_t x327 = -14564;
	int16_t x328 = 16;
	static uint64_t t81 = 120521937LLU;

	t81 = ((x325^(x326<x327))^x328);

	if (t81 != 7625813939089085LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = UINT64_MAX;
	static int64_t x330 = 366LL;
	uint32_t x331 = 46821621U;
	int32_t x332 = INT32_MIN;
	volatile uint64_t t82 = 291672160476043LLU;

	t82 = ((x329^(x330<x331))^x332);

	if (t82 != 2147483646LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = -1LL;
	int16_t x334 = INT16_MIN;
	volatile int32_t x336 = -817998;
	int64_t t83 = 1LL;

	t83 = ((x333^(x334<x335))^x336);

	if (t83 != 817996LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MAX;
	volatile int64_t x338 = -1LL;
	volatile int16_t x339 = INT16_MIN;
	volatile uint32_t t84 = 6165036U;

	t84 = ((x337^(x338<x339))^x340);

	if (t84 != 4294934528U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x341 = UINT8_MAX;
	int32_t x342 = INT32_MIN;
	uint64_t x343 = 35689936435753826LLU;
	uint64_t x344 = UINT64_MAX;
	uint64_t t85 = 8LLU;

	t85 = ((x341^(x342<x343))^x344);

	if (t85 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x346 = INT16_MIN;
	int8_t x348 = 0;
	int32_t t86 = -14;

	t86 = ((x345^(x346<x347))^x348);

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = 1975;
	static int16_t x350 = INT16_MIN;
	static uint16_t x352 = 61U;
	volatile int32_t t87 = -21;

	t87 = ((x349^(x350<x351))^x352);

	if (t87 != 1930) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x354 = UINT16_MAX;
	int32_t x355 = INT32_MIN;
	static int32_t x356 = INT32_MIN;
	volatile uint64_t t88 = 30097807411097LLU;

	t88 = ((x353^(x354<x355))^x356);

	if (t88 != 18398249585744885420LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x357 = 117U;
	int8_t x358 = 42;
	int64_t x359 = INT64_MIN;
	uint16_t x360 = UINT16_MAX;

	t89 = ((x357^(x358<x359))^x360);

	if (t89 != 65418) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x361 = UINT32_MAX;
	static int64_t x362 = -89243604LL;
	int16_t x363 = INT16_MIN;
	volatile uint32_t t90 = 302U;

	t90 = ((x361^(x362<x363))^x364);

	if (t90 != 4294967233U) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = INT8_MIN;
	int16_t x366 = INT16_MIN;
	static int8_t x367 = 36;
	int16_t x368 = INT16_MIN;
	int32_t t91 = -34297;

	t91 = ((x365^(x366<x367))^x368);

	if (t91 != 32641) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MIN;
	volatile int64_t x370 = INT64_MIN;
	static int16_t x371 = INT16_MIN;
	volatile uint32_t x372 = 20U;
	uint32_t t92 = 114U;

	t92 = ((x369^(x370<x371))^x372);

	if (t92 != 2147483669U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	uint8_t x374 = UINT8_MAX;
	uint64_t x375 = 4086790764897463LLU;
	volatile int32_t t93 = 3562567;

	t93 = ((x373^(x374<x375))^x376);

	if (t93 != 2147450881) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = INT8_MAX;
	int16_t x378 = 10976;
	int64_t x379 = INT64_MAX;
	static volatile uint16_t x380 = UINT16_MAX;
	volatile int32_t t94 = -17;

	t94 = ((x377^(x378<x379))^x380);

	if (t94 != 65409) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x382 = 103LLU;
	int32_t x383 = -1;
	int16_t x384 = INT16_MIN;
	volatile int32_t t95 = -6520748;

	t95 = ((x381^(x382<x383))^x384);

	if (t95 != -32655) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x385 = UINT16_MAX;
	int64_t x386 = -1LL;
	int16_t x387 = 6641;
	int8_t x388 = INT8_MIN;
	int32_t t96 = 4334;

	t96 = ((x385^(x386<x387))^x388);

	if (t96 != -65410) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = -709;
	int32_t x390 = INT32_MIN;
	static volatile int16_t x392 = 0;
	volatile int32_t t97 = 86880;

	t97 = ((x389^(x390<x391))^x392);

	if (t97 != -710) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -1;
	static uint16_t x394 = UINT16_MAX;
	int16_t x395 = -1;
	static volatile int8_t x396 = -1;

	t98 = ((x393^(x394<x395))^x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = 50;
	int16_t x399 = INT16_MIN;
	int32_t x400 = INT32_MIN;

	t99 = ((x397^(x398<x399))^x400);

	if (t99 != -2147483598) { NG(); } else { ; }
	
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


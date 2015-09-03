#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x9 = -1;
static int16_t x10 = -1854;
int16_t x12 = -3391;
int64_t x13 = 32002466212120959LL;
int64_t x20 = INT64_MIN;
int8_t x21 = -11;
volatile int8_t x23 = INT8_MAX;
static uint64_t x28 = UINT64_MAX;
volatile int32_t x37 = 3;
uint8_t x39 = 1U;
int16_t x46 = INT16_MAX;
uint16_t x60 = 8202U;
volatile int64_t x72 = 2277298088229856643LL;
uint8_t x78 = 13U;
uint32_t x80 = 1148816056U;
volatile uint32_t x82 = 2865763U;
static int64_t t18 = INT64_MIN;
static volatile int8_t x86 = INT8_MIN;
uint64_t x94 = UINT64_MAX;
volatile uint64_t t21 = 7329924LLU;
uint16_t x100 = 2U;
volatile uint64_t t22 = 2LLU;
int8_t x103 = -1;
int64_t t23 = 211028LL;
uint64_t x110 = 61329158LLU;
int8_t x113 = INT8_MIN;
uint16_t x115 = 74U;
volatile int32_t x117 = -18;
int64_t t27 = -802LL;
int16_t x125 = -301;
int64_t t29 = -555901LL;
int32_t x130 = 121;
volatile int64_t t30 = -11LL;
volatile int32_t x133 = 837041397;
int32_t x143 = 1;
int64_t x144 = -1LL;
int64_t t33 = -1583620817844LL;
volatile int32_t x151 = 939667;
int8_t x157 = 1;
int64_t t36 = -1867212084865846LL;
int64_t x172 = 626LL;
uint8_t x176 = UINT8_MAX;
int64_t x180 = -21100164LL;
uint32_t t40 = 927216989U;
static int32_t x192 = INT32_MIN;
uint64_t t42 = UINT64_MAX;
int32_t x205 = INT32_MIN;
static int32_t x206 = 2074;
volatile uint32_t x207 = 42582U;
int32_t x221 = -1;
int64_t x222 = INT64_MIN;
int8_t x229 = INT8_MAX;
uint16_t x232 = UINT16_MAX;
static volatile int64_t t50 = -90046328274497546LL;
int16_t x234 = -1;
volatile uint64_t t52 = 3815088873574273LLU;
uint32_t x254 = 1U;
int64_t x259 = -1LL;
int32_t x260 = -1;
uint64_t t56 = 1LLU;
uint8_t x267 = 30U;
uint32_t x276 = 2935U;
int64_t x277 = -305648858LL;
volatile uint16_t x278 = 0U;
volatile int64_t x286 = INT64_MAX;
volatile int16_t x290 = -1;
int8_t x291 = -1;
uint64_t x292 = 481529LLU;
static int32_t x293 = -127348469;
uint16_t x296 = UINT16_MAX;
int32_t x298 = INT32_MAX;
uint8_t x299 = UINT8_MAX;
volatile int32_t t64 = -56261031;
int16_t x310 = 1648;
int16_t x316 = INT16_MIN;
volatile int64_t t67 = INT64_MIN;
int64_t x317 = INT64_MAX;
uint32_t x322 = 711669U;
uint32_t x326 = 788984U;
volatile int64_t t70 = -878884LL;
int64_t x339 = 105LL;
uint8_t x341 = 3U;
static volatile int8_t x343 = INT8_MIN;
static int32_t x349 = -11967;
int32_t t75 = -240536937;
int8_t x358 = -1;
static uint16_t x365 = UINT16_MAX;
volatile int64_t t79 = INT64_MIN;
volatile int16_t x385 = INT16_MIN;
uint32_t x387 = 1696834U;
int64_t x388 = -32688281332952061LL;
uint32_t x391 = UINT32_MAX;
uint32_t x392 = 7572U;
uint8_t x395 = 1U;
volatile int8_t x396 = -51;
uint8_t x407 = UINT8_MAX;
static int32_t x412 = -6;
static uint32_t x425 = 428995829U;
int16_t x427 = INT16_MIN;
int16_t x430 = 1310;
int64_t x450 = INT64_MIN;
int16_t x451 = INT16_MIN;
volatile uint32_t x454 = 880U;
int16_t x457 = INT16_MIN;
volatile uint64_t t98 = 15062282LLU;
volatile int64_t t99 = 453026171076603513LL;


void f0(void) {
	static uint8_t x1 = 5U;
	static volatile uint8_t x2 = UINT8_MAX;
	int8_t x3 = INT8_MIN;
	static int8_t x4 = INT8_MIN;
	static int32_t t0 = 0;

	t0 = (x1^(x2*(x3/x4)));

	if (t0 != 250) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int16_t x6 = 22;
	int16_t x7 = INT16_MIN;
	uint16_t x8 = UINT16_MAX;
	int32_t t1 = -2067972;

	t1 = (x5^(x6*(x7/x8)));

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x11 = -5;
	volatile int32_t t2 = -30665;

	t2 = (x9^(x10*(x11/x12)));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MIN;
	uint8_t x15 = UINT8_MAX;
	volatile int64_t x16 = -83338518712308LL;
	volatile int64_t t3 = 59808LL;

	t3 = (x13^(x14*(x15/x16)));

	if (t3 != 32002466212120959LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 48;
	uint16_t x18 = UINT16_MAX;
	int32_t x19 = INT32_MIN;
	static volatile int64_t t4 = 8LL;

	t4 = (x17^(x18*(x19/x20)));

	if (t4 != 48LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x22 = 0U;
	uint64_t x24 = 1253378599338648640LLU;
	static volatile uint64_t t5 = 343098581412LLU;

	t5 = (x21^(x22*(x23/x24)));

	if (t5 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 12508U;
	static int32_t x26 = -7165683;
	static int32_t x27 = INT32_MIN;
	uint64_t t6 = 3371636LLU;

	t6 = (x25^(x26*(x27/x28)));

	if (t6 != 12508LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = INT16_MAX;
	int32_t x30 = INT32_MAX;
	int8_t x31 = INT8_MAX;
	volatile int16_t x32 = 760;
	int32_t t7 = -9200415;

	t7 = (x29^(x30*(x31/x32)));

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	volatile uint32_t x34 = 9443U;
	static int64_t x35 = 60512061769311015LL;
	static uint32_t x36 = UINT32_MAX;
	volatile int64_t t8 = 17776048031066LL;

	t8 = (x33^(x34*(x35/x36)));

	if (t8 != -131097476238LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = -7162;
	volatile int16_t x40 = 158;
	int32_t t9 = -800;

	t9 = (x37^(x38*(x39/x40)));

	if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = 1U;
	int16_t x42 = -962;
	int8_t x43 = INT8_MAX;
	uint32_t x44 = 177060856U;
	volatile uint32_t t10 = 1947653U;

	t10 = (x41^(x42*(x43/x44)));

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = INT32_MIN;
	volatile uint16_t x47 = 3U;
	int64_t x48 = -35707LL;
	static int64_t t11 = -4011700167LL;

	t11 = (x45^(x46*(x47/x48)));

	if (t11 != -2147483648LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = UINT16_MAX;
	uint8_t x54 = 2U;
	uint32_t x55 = UINT32_MAX;
	int32_t x56 = -201;
	uint32_t t12 = 2020376718U;

	t12 = (x53^(x54*(x55/x56)));

	if (t12 != 65533U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MAX;
	uint32_t x58 = UINT32_MAX;
	int16_t x59 = -1370;
	uint32_t t13 = 1U;

	t13 = (x57^(x58*(x59/x60)));

	if (t13 != 2147483647U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = UINT16_MAX;
	int64_t x62 = -9783058LL;
	uint32_t x63 = 3594813U;
	uint64_t x64 = 8802347122LLU;
	uint64_t t14 = 438350353LLU;

	t14 = (x61^(x62*(x63/x64)));

	if (t14 != 65535LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x65 = -1LL;
	int32_t x66 = INT32_MIN;
	static int16_t x67 = -3;
	int8_t x68 = INT8_MAX;
	int64_t t15 = 128603331LL;

	t15 = (x65^(x66*(x67/x68)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = 1824800526602LL;
	int64_t x70 = INT64_MIN;
	int32_t x71 = -241;
	volatile int64_t t16 = -507878894638663591LL;

	t16 = (x69^(x70*(x71/x72)));

	if (t16 != 1824800526602LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = INT32_MIN;
	int32_t x79 = 55305;
	uint32_t t17 = 3648U;

	t17 = (x77^(x78*(x79/x80)));

	if (t17 != 2147483648U) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x81 = INT64_MIN;
	volatile int16_t x83 = INT16_MIN;
	volatile int32_t x84 = INT32_MIN;

	t18 = (x81^(x82*(x83/x84)));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = 4LL;
	uint64_t x87 = UINT64_MAX;
	int64_t x88 = INT64_MIN;
	uint64_t t19 = 2176863027975122LLU;

	t19 = (x85^(x86*(x87/x88)));

	if (t19 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = -1;
	volatile int32_t x90 = -1;
	uint16_t x91 = 2U;
	int64_t x92 = INT64_MAX;
	static volatile int64_t t20 = 87577802236712814LL;

	t20 = (x89^(x90*(x91/x92)));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint8_t x93 = 54U;
	volatile int32_t x95 = -5740;
	static uint64_t x96 = UINT64_MAX;

	t21 = (x93^(x94*(x95/x96)));

	if (t21 != 54LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = 5607LLU;
	static int32_t x98 = 0;
	int16_t x99 = -1;

	t22 = (x97^(x98*(x99/x100)));

	if (t22 != 5607LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x101 = -1LL;
	int32_t x102 = 4332766;
	int16_t x104 = INT16_MAX;

	t23 = (x101^(x102*(x103/x104)));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = INT64_MIN;
	int32_t x106 = INT32_MAX;
	int16_t x107 = -1;
	int32_t x108 = INT32_MAX;
	volatile int64_t t24 = INT64_MIN;

	t24 = (x105^(x106*(x107/x108)));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = INT64_MIN;
	int64_t x111 = INT64_MAX;
	static uint64_t x112 = 65336585891264751LLU;
	volatile uint64_t t25 = 19LLU;

	t25 = (x109^(x110*(x111/x112)));

	if (t25 != 9223372045502187086LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x114 = 332939U;
	volatile uint32_t x116 = UINT32_MAX;
	uint32_t t26 = 0U;

	t26 = (x113^(x114*(x115/x116)));

	if (t26 != 4294967168U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x118 = 1U;
	int8_t x119 = -1;
	static int64_t x120 = -1LL;

	t27 = (x117^(x118*(x119/x120)));

	if (t27 != -17LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = 211987849LL;
	uint8_t x122 = UINT8_MAX;
	int16_t x123 = INT16_MIN;
	static uint32_t x124 = 55460959U;
	volatile int64_t t28 = 14LL;

	t28 = (x121^(x122*(x123/x124)));

	if (t28 != 212001082LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x126 = INT32_MIN;
	static int64_t x127 = -1LL;
	static uint8_t x128 = 12U;

	t29 = (x125^(x126*(x127/x128)));

	if (t29 != -301LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x129 = 1;
	static int64_t x131 = -8364470073766LL;
	static volatile int64_t x132 = -1060888112953LL;

	t30 = (x129^(x130*(x131/x132)));

	if (t30 != 846LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x134 = UINT16_MAX;
	int16_t x135 = INT16_MIN;
	uint32_t x136 = UINT32_MAX;
	volatile uint32_t t31 = 17U;

	t31 = (x133^(x134*(x135/x136)));

	if (t31 != 837041397U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = INT64_MAX;
	uint32_t x138 = 887671176U;
	int16_t x139 = 1;
	volatile int8_t x140 = INT8_MIN;
	static volatile int64_t t32 = INT64_MAX;

	t32 = (x137^(x138*(x139/x140)));

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = -1;
	volatile uint8_t x142 = 0U;

	t33 = (x141^(x142*(x143/x144)));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = INT64_MAX;
	int32_t x146 = INT32_MIN;
	uint32_t x147 = UINT32_MAX;
	int8_t x148 = INT8_MIN;
	int64_t t34 = 119LL;

	t34 = (x145^(x146*(x147/x148)));

	if (t34 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = INT16_MAX;
	int8_t x150 = INT8_MIN;
	int8_t x152 = -1;
	int32_t t35 = -7454;

	t35 = (x149^(x150*(x151/x152)));

	if (t35 != 120272511) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x158 = -461483265;
	int64_t x159 = INT64_MIN;
	int64_t x160 = 31197708360426LL;

	t36 = (x157^(x158*(x159/x160)));

	if (t36 != 136433835431131LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x169 = INT16_MAX;
	static int64_t x170 = -1LL;
	int8_t x171 = 0;
	volatile int64_t t37 = 50331746744512LL;

	t37 = (x169^(x170*(x171/x172)));

	if (t37 != 32767LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x173 = INT32_MAX;
	volatile uint64_t x174 = 3305871LLU;
	uint64_t x175 = UINT64_MAX;
	uint64_t t38 = 7729829LLU;

	t38 = (x173^(x174*(x175/x176)));

	if (t38 != 3689348815171420016LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x177 = INT32_MIN;
	static int32_t x178 = 121482423;
	int16_t x179 = INT16_MAX;
	int64_t t39 = -46LL;

	t39 = (x177^(x178*(x179/x180)));

	if (t39 != -2147483648LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = INT32_MIN;
	uint16_t x182 = 4U;
	uint32_t x183 = UINT32_MAX;
	volatile uint32_t x184 = 1914566U;

	t40 = (x181^(x182*(x183/x184)));

	if (t40 != 2147492620U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x185 = -1;
	uint8_t x186 = 1U;
	static int16_t x187 = -1;
	int16_t x188 = INT16_MIN;
	static volatile int32_t t41 = 355;

	t41 = (x185^(x186*(x187/x188)));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = -1;
	int32_t x190 = -75158;
	uint64_t x191 = 367273LLU;

	t42 = (x189^(x190*(x191/x192)));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x197 = 3LLU;
	int16_t x198 = -1;
	int16_t x199 = -972;
	uint8_t x200 = 2U;
	volatile uint64_t t43 = 12574151647624443LLU;

	t43 = (x197^(x198*(x199/x200)));

	if (t43 != 485LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x201 = 280867560144334105LLU;
	volatile uint32_t x202 = 27971U;
	static uint32_t x203 = 64477U;
	volatile uint64_t x204 = 2LLU;
	volatile uint64_t t44 = 47529246916345LLU;

	t44 = (x201^(x202*(x203/x204)));

	if (t44 != 280867560875501139LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x208 = 2;
	volatile uint32_t t45 = 1020U;

	t45 = (x205^(x206*(x207/x208)));

	if (t45 != 2191641182U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x213 = 61429201665179526LL;
	int64_t x214 = INT64_MIN;
	uint16_t x215 = UINT16_MAX;
	int64_t x216 = -24561223LL;
	int64_t t46 = -200LL;

	t46 = (x213^(x214*(x215/x216)));

	if (t46 != 61429201665179526LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x217 = INT64_MIN;
	int16_t x218 = -4;
	uint16_t x219 = UINT16_MAX;
	static int16_t x220 = INT16_MAX;
	static volatile int64_t t47 = 10106561779LL;

	t47 = (x217^(x218*(x219/x220)));

	if (t47 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x223 = 13U;
	int16_t x224 = -12961;
	int64_t t48 = 6243048LL;

	t48 = (x221^(x222*(x223/x224)));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x225 = -1;
	volatile uint64_t x226 = 197220295225LLU;
	int16_t x227 = INT16_MIN;
	uint32_t x228 = 99U;
	volatile uint64_t t49 = 3561155LLU;

	t49 = (x225^(x226*(x227/x228)));

	if (t49 != 9890701097971121790LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x230 = -16170618626114LL;
	uint16_t x231 = 1440U;

	t50 = (x229^(x230*(x231/x232)));

	if (t50 != 127LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = -1;
	volatile uint16_t x235 = 1470U;
	int8_t x236 = INT8_MAX;
	volatile int32_t t51 = -7491921;

	t51 = (x233^(x234*(x235/x236)));

	if (t51 != 10) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x241 = -17;
	volatile int32_t x242 = INT32_MIN;
	volatile int64_t x243 = 37LL;
	uint64_t x244 = 1190610399765629LLU;

	t52 = (x241^(x242*(x243/x244)));

	if (t52 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x245 = -5144278523467LL;
	int16_t x246 = INT16_MIN;
	volatile int8_t x247 = INT8_MIN;
	static uint32_t x248 = 80383524U;
	volatile int64_t t53 = 110LL;

	t53 = (x245^(x246*(x247/x248)));

	if (t53 != -5142166462027LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x253 = 189;
	int8_t x255 = -1;
	int64_t x256 = INT64_MIN;
	volatile int64_t t54 = -52477473924LL;

	t54 = (x253^(x254*(x255/x256)));

	if (t54 != 189LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x257 = INT16_MAX;
	volatile uint64_t x258 = 190827847LLU;
	uint64_t t55 = 282481LLU;

	t55 = (x257^(x258*(x259/x260)));

	if (t55 != 190821048LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x261 = INT64_MIN;
	uint64_t x262 = 29770LLU;
	uint8_t x263 = 0U;
	volatile uint8_t x264 = 47U;

	t56 = (x261^(x262*(x263/x264)));

	if (t56 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x265 = 1361U;
	int8_t x266 = INT8_MIN;
	uint64_t x268 = 31500382568854308LLU;
	uint64_t t57 = 166784413116LLU;

	t57 = (x265^(x266*(x267/x268)));

	if (t57 != 1361LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x273 = INT64_MIN;
	volatile int64_t x274 = 686271541LL;
	int64_t x275 = -1LL;
	int64_t t58 = INT64_MIN;

	t58 = (x273^(x274*(x275/x276)));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x279 = INT64_MIN;
	int8_t x280 = INT8_MIN;
	static int64_t t59 = -251824891661623LL;

	t59 = (x277^(x278*(x279/x280)));

	if (t59 != -305648858LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x281 = INT32_MIN;
	int8_t x282 = 5;
	static uint64_t x283 = 7265LLU;
	int32_t x284 = -16603;
	volatile uint64_t t60 = 3758572560546LLU;

	t60 = (x281^(x282*(x283/x284)));

	if (t60 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x285 = -1;
	int8_t x287 = INT8_MIN;
	static uint8_t x288 = UINT8_MAX;
	static int64_t t61 = 1093210729770LL;

	t61 = (x285^(x286*(x287/x288)));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x289 = 24110U;
	volatile uint64_t t62 = 1LLU;

	t62 = (x289^(x290*(x291/x292)));

	if (t62 != 18446705765021847778LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x294 = INT8_MIN;
	static volatile int16_t x295 = INT16_MAX;
	int32_t t63 = -1;

	t63 = (x293^(x294*(x295/x296)));

	if (t63 != -127348469) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x297 = 8918;
	volatile uint16_t x300 = 1270U;

	t64 = (x297^(x298*(x299/x300)));

	if (t64 != 8918) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x305 = INT32_MAX;
	int8_t x306 = -1;
	static int8_t x307 = INT8_MIN;
	int16_t x308 = INT16_MIN;
	int32_t t65 = INT32_MAX;

	t65 = (x305^(x306*(x307/x308)));

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x309 = 3252;
	uint32_t x311 = 1386U;
	uint8_t x312 = 3U;
	volatile uint32_t t66 = 1718391662U;

	t66 = (x309^(x310*(x311/x312)));

	if (t66 != 758420U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x313 = INT64_MIN;
	int8_t x314 = INT8_MIN;
	uint16_t x315 = 4264U;

	t67 = (x313^(x314*(x315/x316)));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x318 = UINT8_MAX;
	int64_t x319 = 835LL;
	int16_t x320 = INT16_MIN;
	int64_t t68 = INT64_MAX;

	t68 = (x317^(x318*(x319/x320)));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x321 = -1811434322907062LL;
	int8_t x323 = INT8_MIN;
	int32_t x324 = INT32_MIN;
	static volatile int64_t t69 = -1240577300139LL;

	t69 = (x321^(x322*(x323/x324)));

	if (t69 != -1811434322907062LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x325 = INT64_MAX;
	int16_t x327 = INT16_MIN;
	int16_t x328 = -1;

	t70 = (x325^(x326*(x327/x328)));

	if (t70 != 9223372036771151871LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x329 = INT16_MAX;
	uint8_t x330 = UINT8_MAX;
	uint32_t x331 = 7428U;
	static int8_t x332 = INT8_MIN;
	volatile uint32_t t71 = 16288U;

	t71 = (x329^(x330*(x331/x332)));

	if (t71 != 32767U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x337 = 0U;
	static volatile uint64_t x338 = UINT64_MAX;
	int16_t x340 = 1;
	volatile uint64_t t72 = 7627446864396752971LLU;

	t72 = (x337^(x338*(x339/x340)));

	if (t72 != 18446744073709551511LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x342 = UINT32_MAX;
	static int32_t x344 = INT32_MAX;
	volatile uint32_t t73 = 58179U;

	t73 = (x341^(x342*(x343/x344)));

	if (t73 != 3U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x350 = INT32_MIN;
	static int32_t x351 = 66978769;
	uint32_t x352 = 1768U;
	static uint32_t t74 = 156099U;

	t74 = (x349^(x350*(x351/x352)));

	if (t74 != 2147471681U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x353 = 0U;
	volatile int16_t x354 = -8545;
	static int16_t x355 = INT16_MAX;
	volatile uint16_t x356 = 32U;

	t75 = (x353^(x354*(x355/x356)));

	if (t75 != -8741535) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x357 = INT32_MIN;
	volatile uint32_t x359 = 55574U;
	int64_t x360 = INT64_MIN;
	static volatile int64_t t76 = 601395109139058068LL;

	t76 = (x357^(x358*(x359/x360)));

	if (t76 != -2147483648LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x361 = -1;
	int8_t x362 = -1;
	uint8_t x363 = 1U;
	int8_t x364 = INT8_MIN;
	static volatile int32_t t77 = 247;

	t77 = (x361^(x362*(x363/x364)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x366 = INT16_MIN;
	static uint64_t x367 = UINT64_MAX;
	volatile uint32_t x368 = 649305U;
	uint64_t t78 = 11719284679LLU;

	t78 = (x365^(x366*(x367/x368)));

	if (t78 != 17515805747642040319LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x369 = INT64_MIN;
	static uint8_t x370 = UINT8_MAX;
	int64_t x371 = -2024564750006LL;
	int64_t x372 = INT64_MIN;

	t79 = (x369^(x370*(x371/x372)));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x373 = -69850140;
	int64_t x374 = -1LL;
	static int64_t x375 = INT64_MAX;
	static volatile int16_t x376 = 2;
	volatile int64_t t80 = 50548LL;

	t80 = (x373^(x374*(x375/x376)));

	if (t80 != 4611686018357537765LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x377 = INT16_MAX;
	volatile int8_t x378 = INT8_MIN;
	uint8_t x379 = UINT8_MAX;
	static uint16_t x380 = 108U;
	volatile int32_t t81 = 10431800;

	t81 = (x377^(x378*(x379/x380)));

	if (t81 != -32513) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x386 = 1093U;
	int64_t t82 = 1094637491LL;

	t82 = (x385^(x386*(x387/x388)));

	if (t82 != -32768LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x389 = INT32_MIN;
	int8_t x390 = -1;
	volatile uint32_t t83 = 114U;

	t83 = (x389^(x390*(x391/x392)));

	if (t83 != 2146916431U) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x393 = -1;
	int16_t x394 = -8;
	static int32_t t84 = 863;

	t84 = (x393^(x394*(x395/x396)));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x397 = 413;
	static uint8_t x398 = UINT8_MAX;
	static int16_t x399 = -1;
	static volatile int8_t x400 = INT8_MAX;
	int32_t t85 = 26030;

	t85 = (x397^(x398*(x399/x400)));

	if (t85 != 413) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x405 = INT16_MAX;
	int32_t x406 = 456488208;
	int32_t x408 = INT32_MIN;
	volatile int32_t t86 = 454972959;

	t86 = (x405^(x406*(x407/x408)));

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x409 = -1;
	int64_t x410 = -1LL;
	volatile int64_t x411 = -1LL;
	volatile int64_t t87 = -67361LL;

	t87 = (x409^(x410*(x411/x412)));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x413 = -5;
	int64_t x414 = -1LL;
	int32_t x415 = 10;
	static int64_t x416 = INT64_MIN;
	int64_t t88 = -121112970014029162LL;

	t88 = (x413^(x414*(x415/x416)));

	if (t88 != -5LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x417 = 3738702;
	volatile int64_t x418 = 163LL;
	static int64_t x419 = -1LL;
	uint32_t x420 = 80U;
	volatile int64_t t89 = 877115842829214LL;

	t89 = (x417^(x418*(x419/x420)));

	if (t89 != 3738702LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x421 = UINT64_MAX;
	static uint16_t x422 = 6440U;
	static int64_t x423 = -2176051772594071LL;
	int16_t x424 = INT16_MAX;
	volatile uint64_t t90 = 44LLU;

	t90 = (x421^(x422*(x423/x424)));

	if (t90 != 427679476774479LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x426 = INT16_MAX;
	int16_t x428 = 7;
	volatile uint32_t t91 = 156U;

	t91 = (x425^(x426*(x427/x428)));

	if (t91 != 4014630588U) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x429 = INT32_MIN;
	int8_t x431 = INT8_MIN;
	int16_t x432 = INT16_MAX;
	volatile int32_t t92 = INT32_MIN;

	t92 = (x429^(x430*(x431/x432)));

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x437 = 1574620557U;
	static int8_t x438 = -1;
	int32_t x439 = -1;
	static uint64_t x440 = 103691750456LLU;
	static uint64_t t93 = 105088LLU;

	t93 = (x437^(x438*(x439/x440)));

	if (t93 != 18446744072245721948LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x441 = 2LLU;
	volatile int16_t x442 = -889;
	uint32_t x443 = UINT32_MAX;
	static volatile int16_t x444 = INT16_MIN;
	static volatile uint64_t t94 = 630LLU;

	t94 = (x441^(x442*(x443/x444)));

	if (t94 != 4294966405LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x445 = INT16_MIN;
	uint64_t x446 = 24861793LLU;
	int16_t x447 = INT16_MAX;
	static uint64_t x448 = 23818LLU;
	uint64_t t95 = 0LLU;

	t95 = (x445^(x446*(x447/x448)));

	if (t95 != 18446744073684704353LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x449 = INT32_MAX;
	int32_t x452 = INT32_MIN;
	static volatile int64_t t96 = 410936540LL;

	t96 = (x449^(x450*(x451/x452)));

	if (t96 != 2147483647LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x453 = 1079U;
	int32_t x455 = INT32_MIN;
	volatile uint32_t x456 = 82U;
	volatile uint32_t t97 = 53U;

	t97 = (x453^(x454*(x455/x456)));

	if (t97 != 1571329719U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x458 = 660U;
	int8_t x459 = INT8_MAX;
	uint64_t x460 = 2125LLU;

	t98 = (x457^(x458*(x459/x460)));

	if (t98 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint32_t x461 = UINT32_MAX;
	static int64_t x462 = -1LL;
	uint32_t x463 = 4417U;
	int64_t x464 = INT64_MAX;

	t99 = (x461^(x462*(x463/x464)));

	if (t99 != 4294967295LL) { NG(); } else { ; }
	
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


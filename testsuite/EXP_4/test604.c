#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t0 = UINT32_MAX;
static int8_t x8 = -12;
volatile int32_t t1 = 0;
int32_t x26 = 1366404;
int32_t x29 = INT32_MAX;
int32_t t4 = INT32_MAX;
uint16_t x34 = 11U;
int32_t x41 = INT32_MAX;
static volatile uint32_t x67 = 78640U;
volatile int32_t t10 = -654;
static uint32_t t11 = 55U;
uint64_t x73 = 1LLU;
int32_t x78 = -14514;
static volatile int32_t t13 = 9;
int16_t x85 = INT16_MAX;
uint16_t x94 = 2U;
volatile uint16_t x102 = 534U;
volatile int32_t x103 = INT32_MIN;
int64_t x122 = -244189758LL;
int32_t x127 = -1;
uint32_t x129 = 64981343U;
uint8_t x131 = 47U;
static uint32_t x135 = UINT32_MAX;
volatile int32_t x139 = INT32_MAX;
int64_t x144 = 1509599LL;
static int16_t x145 = 50;
int32_t x151 = INT32_MIN;
static uint32_t t27 = 5053U;
int16_t x161 = INT16_MAX;
uint8_t x162 = 11U;
uint32_t x178 = 29416U;
uint16_t x181 = 0U;
volatile int64_t x184 = INT64_MIN;
int32_t t30 = -8311;
uint8_t x190 = 0U;
uint16_t x191 = UINT16_MAX;
volatile int32_t t34 = -644673;
int8_t x205 = INT8_MAX;
int32_t t36 = -1;
uint16_t x226 = UINT16_MAX;
int32_t x227 = INT32_MIN;
int16_t x233 = INT16_MAX;
volatile int32_t x249 = 4958;
uint8_t x250 = 0U;
uint64_t x255 = 1719198590334682091LLU;
static volatile int32_t t43 = 361688;
int8_t x274 = 56;
uint64_t x276 = UINT64_MAX;
uint8_t x297 = UINT8_MAX;
volatile int64_t t46 = INT64_MAX;
int64_t x324 = INT64_MIN;
int32_t x327 = INT32_MIN;
uint8_t x342 = 18U;
uint64_t x344 = 1315LLU;
int32_t t51 = -366877;
int64_t x347 = INT64_MIN;
static uint8_t x349 = 8U;
volatile int32_t t53 = -82113331;
int16_t x354 = -1;
int32_t x360 = 422535273;
static int8_t x367 = -2;
int32_t t56 = -1;
int32_t x371 = INT32_MIN;
int64_t x390 = INT64_MIN;
int8_t x392 = 1;
volatile uint16_t x407 = 62U;
uint16_t x410 = UINT16_MAX;
int64_t x413 = 1451981590305925LL;
volatile int32_t x416 = -20;
int16_t x445 = 451;
static uint64_t x461 = UINT64_MAX;
volatile uint32_t x482 = 68970659U;
uint64_t x505 = 842413675LLU;
volatile int32_t x508 = INT32_MIN;
int64_t x511 = 91LL;
int16_t x515 = INT16_MIN;
int32_t t74 = INT32_MAX;
static int32_t x524 = INT32_MAX;
uint32_t x541 = UINT32_MAX;
volatile int64_t x555 = 3145255608804276203LL;
uint8_t x579 = 2U;
uint16_t x580 = 17310U;
int16_t x604 = INT16_MIN;
volatile int32_t x606 = INT32_MAX;
uint16_t x613 = UINT16_MAX;
uint8_t x619 = UINT8_MAX;
int32_t x621 = 1512;
int16_t x622 = -1;
uint32_t t89 = UINT32_MAX;
volatile int16_t x629 = 1;
volatile int32_t t90 = -318779614;
int8_t x642 = INT8_MIN;
int8_t x659 = INT8_MIN;
int16_t x670 = 15;
int16_t x673 = INT16_MAX;
int64_t x674 = -256328844691326LL;
int16_t x675 = -59;
int32_t x697 = 886677;
int16_t x704 = INT16_MIN;
int32_t t97 = 80122935;
static uint64_t x705 = 125504805LLU;
volatile int32_t x708 = INT32_MIN;
static volatile uint64_t t98 = 9995988LLU;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	volatile int8_t x2 = 0;
	int64_t x3 = INT64_MAX;
	static int32_t x4 = -1;

	t0 = (x1<<(x2==(x3/x4)));

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 418;
	int8_t x6 = INT8_MIN;
	volatile int16_t x7 = -1;

	t1 = (x5<<(x6==(x7/x8)));

	if (t1 != 418) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x21 = UINT16_MAX;
	int8_t x22 = INT8_MIN;
	static volatile int32_t x23 = -3104;
	uint16_t x24 = UINT16_MAX;
	static int32_t t2 = -80972;

	t2 = (x21<<(x22==(x23/x24)));

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x25 = 13421U;
	uint8_t x27 = 9U;
	volatile int64_t x28 = -204225787273534813LL;
	uint32_t t3 = 20297U;

	t3 = (x25<<(x26==(x27/x28)));

	if (t3 != 13421U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x30 = 107865067748LL;
	static int8_t x31 = INT8_MIN;
	static int32_t x32 = INT32_MIN;

	t4 = (x29<<(x30==(x31/x32)));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x33 = 17239U;
	int16_t x35 = INT16_MIN;
	static int32_t x36 = -1;
	static volatile int32_t t5 = -441;

	t5 = (x33<<(x34==(x35/x36)));

	if (t5 != 17239) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x37 = 3U;
	static uint32_t x38 = 9414U;
	volatile int32_t x39 = INT32_MIN;
	static volatile int8_t x40 = 8;
	int32_t t6 = -62;

	t6 = (x37<<(x38==(x39/x40)));

	if (t6 != 3) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x42 = 129281911261475LL;
	int64_t x43 = INT64_MIN;
	int8_t x44 = INT8_MAX;
	volatile int32_t t7 = INT32_MAX;

	t7 = (x41<<(x42==(x43/x44)));

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x49 = 1242;
	static int8_t x50 = 20;
	volatile int16_t x51 = INT16_MIN;
	uint8_t x52 = UINT8_MAX;
	int32_t t8 = -16587938;

	t8 = (x49<<(x50==(x51/x52)));

	if (t8 != 1242) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x53 = 48U;
	volatile int32_t x54 = 13;
	int16_t x55 = -322;
	int64_t x56 = -2908395LL;
	int32_t t9 = 1247085;

	t9 = (x53<<(x54==(x55/x56)));

	if (t9 != 48) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x65 = 3U;
	volatile int16_t x66 = INT16_MIN;
	uint8_t x68 = 34U;

	t10 = (x65<<(x66==(x67/x68)));

	if (t10 != 3) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x69 = 9U;
	int8_t x70 = 29;
	static int32_t x71 = 1;
	int8_t x72 = -60;

	t11 = (x69<<(x70==(x71/x72)));

	if (t11 != 9U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x74 = UINT64_MAX;
	int16_t x75 = INT16_MIN;
	uint8_t x76 = UINT8_MAX;
	volatile uint64_t t12 = 11932308878229LLU;

	t12 = (x73<<(x74==(x75/x76)));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x77 = 73U;
	int64_t x79 = 20646LL;
	volatile uint8_t x80 = UINT8_MAX;

	t13 = (x77<<(x78==(x79/x80)));

	if (t13 != 73) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x86 = -1;
	uint64_t x87 = 29776312078933LLU;
	int64_t x88 = INT64_MAX;
	int32_t t14 = 433;

	t14 = (x85<<(x86==(x87/x88)));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x93 = 1U;
	int64_t x95 = -1LL;
	int32_t x96 = INT32_MIN;
	int32_t t15 = -964003;

	t15 = (x93<<(x94==(x95/x96)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x97 = 450U;
	static uint8_t x98 = 42U;
	volatile int16_t x99 = -1;
	int64_t x100 = INT64_MIN;
	volatile int32_t t16 = -22;

	t16 = (x97<<(x98==(x99/x100)));

	if (t16 != 450) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x101 = INT8_MAX;
	volatile int16_t x104 = INT16_MIN;
	int32_t t17 = 65433;

	t17 = (x101<<(x102==(x103/x104)));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x105 = 7U;
	static int16_t x106 = -1;
	uint8_t x107 = 2U;
	uint64_t x108 = UINT64_MAX;
	uint32_t t18 = 429419307U;

	t18 = (x105<<(x106==(x107/x108)));

	if (t18 != 7U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x121 = 64U;
	uint64_t x123 = UINT64_MAX;
	static int16_t x124 = -1;
	int32_t t19 = 924271725;

	t19 = (x121<<(x122==(x123/x124)));

	if (t19 != 64) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x125 = 349476432;
	static volatile int16_t x126 = INT16_MIN;
	static int32_t x128 = -1;
	static int32_t t20 = 961482;

	t20 = (x125<<(x126==(x127/x128)));

	if (t20 != 349476432) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x130 = 3665;
	uint16_t x132 = 25811U;
	uint32_t t21 = 11U;

	t21 = (x129<<(x130==(x131/x132)));

	if (t21 != 64981343U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x133 = INT16_MAX;
	volatile int64_t x134 = 239780322866LL;
	int32_t x136 = INT32_MIN;
	volatile int32_t t22 = -4;

	t22 = (x133<<(x134==(x135/x136)));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x137 = 7LLU;
	int16_t x138 = -8;
	int8_t x140 = 49;
	volatile uint64_t t23 = 10407005904443LLU;

	t23 = (x137<<(x138==(x139/x140)));

	if (t23 != 7LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x141 = 0U;
	int8_t x142 = INT8_MAX;
	int8_t x143 = 1;
	int32_t t24 = -132350631;

	t24 = (x141<<(x142==(x143/x144)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x146 = INT32_MIN;
	uint32_t x147 = 4U;
	uint64_t x148 = 1LLU;
	int32_t t25 = 12745;

	t25 = (x145<<(x146==(x147/x148)));

	if (t25 != 50) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x149 = UINT32_MAX;
	static uint16_t x150 = UINT16_MAX;
	uint32_t x152 = 86353356U;
	static uint32_t t26 = UINT32_MAX;

	t26 = (x149<<(x150==(x151/x152)));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x153 = 27284079U;
	volatile int64_t x154 = 1597359377026959LL;
	int32_t x155 = INT32_MAX;
	int16_t x156 = -1;

	t27 = (x153<<(x154==(x155/x156)));

	if (t27 != 27284079U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x163 = INT32_MAX;
	int8_t x164 = INT8_MIN;
	int32_t t28 = -62;

	t28 = (x161<<(x162==(x163/x164)));

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x177 = INT64_MAX;
	volatile int64_t x179 = INT64_MAX;
	int8_t x180 = 6;
	volatile int64_t t29 = INT64_MAX;

	t29 = (x177<<(x178==(x179/x180)));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x182 = INT64_MAX;
	volatile int32_t x183 = INT32_MIN;

	t30 = (x181<<(x182==(x183/x184)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x185 = 40;
	static volatile int16_t x186 = 10;
	int32_t x187 = -1;
	uint8_t x188 = UINT8_MAX;
	int32_t t31 = -4356494;

	t31 = (x185<<(x186==(x187/x188)));

	if (t31 != 40) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x189 = 0LL;
	int8_t x192 = INT8_MAX;
	volatile int64_t t32 = 837980LL;

	t32 = (x189<<(x190==(x191/x192)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x193 = 1470U;
	int8_t x194 = 28;
	uint64_t x195 = UINT64_MAX;
	uint32_t x196 = 365821570U;
	volatile uint32_t t33 = 2710851U;

	t33 = (x193<<(x194==(x195/x196)));

	if (t33 != 1470U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x197 = 28;
	uint64_t x198 = 4380LLU;
	int32_t x199 = -1;
	uint64_t x200 = 108LLU;

	t34 = (x197<<(x198==(x199/x200)));

	if (t34 != 28) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x206 = 30U;
	int64_t x207 = INT64_MIN;
	int16_t x208 = INT16_MIN;
	int32_t t35 = 23751239;

	t35 = (x205<<(x206==(x207/x208)));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x217 = 196;
	uint8_t x218 = 30U;
	uint64_t x219 = 4235600828650459LLU;
	int64_t x220 = INT64_MIN;

	t36 = (x217<<(x218==(x219/x220)));

	if (t36 != 196) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x225 = UINT32_MAX;
	int64_t x228 = -1LL;
	static uint32_t t37 = UINT32_MAX;

	t37 = (x225<<(x226==(x227/x228)));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x234 = -1LL;
	int64_t x235 = -93061779LL;
	volatile int8_t x236 = INT8_MIN;
	volatile int32_t t38 = -2715738;

	t38 = (x233<<(x234==(x235/x236)));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x251 = INT64_MAX;
	volatile int64_t x252 = INT64_MAX;
	static int32_t t39 = -300;

	t39 = (x249<<(x250==(x251/x252)));

	if (t39 != 4958) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x253 = 1;
	int8_t x254 = 0;
	int8_t x256 = INT8_MIN;
	int32_t t40 = 20;

	t40 = (x253<<(x254==(x255/x256)));

	if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x257 = UINT16_MAX;
	int16_t x258 = INT16_MIN;
	uint16_t x259 = 9387U;
	int8_t x260 = -1;
	static volatile int32_t t41 = -54;

	t41 = (x257<<(x258==(x259/x260)));

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x265 = UINT32_MAX;
	static int8_t x266 = -1;
	volatile int32_t x267 = INT32_MAX;
	int8_t x268 = INT8_MIN;
	uint32_t t42 = UINT32_MAX;

	t42 = (x265<<(x266==(x267/x268)));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x269 = 69U;
	int8_t x270 = INT8_MAX;
	uint32_t x271 = 235U;
	int32_t x272 = INT32_MIN;

	t43 = (x269<<(x270==(x271/x272)));

	if (t43 != 69) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x273 = INT32_MAX;
	static volatile int16_t x275 = INT16_MAX;
	volatile int32_t t44 = INT32_MAX;

	t44 = (x273<<(x274==(x275/x276)));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x298 = 7;
	volatile uint16_t x299 = 387U;
	static int16_t x300 = 1;
	volatile int32_t t45 = -31951;

	t45 = (x297<<(x298==(x299/x300)));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x313 = INT64_MAX;
	volatile uint8_t x314 = UINT8_MAX;
	int16_t x315 = 0;
	static int8_t x316 = INT8_MAX;

	t46 = (x313<<(x314==(x315/x316)));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x317 = UINT8_MAX;
	int8_t x318 = INT8_MIN;
	static volatile int64_t x319 = -117200445994LL;
	volatile uint32_t x320 = 699756U;
	int32_t t47 = 115531;

	t47 = (x317<<(x318==(x319/x320)));

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x321 = UINT32_MAX;
	uint8_t x322 = 29U;
	uint64_t x323 = 5752340148515LLU;
	volatile uint32_t t48 = UINT32_MAX;

	t48 = (x321<<(x322==(x323/x324)));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x325 = INT64_MAX;
	int64_t x326 = -1LL;
	uint32_t x328 = UINT32_MAX;
	int64_t t49 = INT64_MAX;

	t49 = (x325<<(x326==(x327/x328)));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x333 = INT8_MAX;
	static volatile int64_t x334 = INT64_MIN;
	uint64_t x335 = 78LLU;
	uint8_t x336 = UINT8_MAX;
	static int32_t t50 = -2475;

	t50 = (x333<<(x334==(x335/x336)));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x341 = 464399471;
	volatile int8_t x343 = INT8_MIN;

	t51 = (x341<<(x342==(x343/x344)));

	if (t51 != 464399471) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x345 = UINT32_MAX;
	uint16_t x346 = UINT16_MAX;
	static uint32_t x348 = 709U;
	uint32_t t52 = UINT32_MAX;

	t52 = (x345<<(x346==(x347/x348)));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x350 = 57669493494992LL;
	int16_t x351 = INT16_MIN;
	uint8_t x352 = 2U;

	t53 = (x349<<(x350==(x351/x352)));

	if (t53 != 8) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x353 = UINT8_MAX;
	int16_t x355 = INT16_MIN;
	uint16_t x356 = 22045U;
	static volatile int32_t t54 = -979;

	t54 = (x353<<(x354==(x355/x356)));

	if (t54 != 510) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x357 = 14844772U;
	static volatile int8_t x358 = INT8_MAX;
	int8_t x359 = -1;
	uint32_t t55 = 92144678U;

	t55 = (x357<<(x358==(x359/x360)));

	if (t55 != 14844772U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x365 = UINT8_MAX;
	int32_t x366 = INT32_MIN;
	int32_t x368 = INT32_MIN;

	t56 = (x365<<(x366==(x367/x368)));

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x369 = UINT8_MAX;
	volatile int32_t x370 = INT32_MAX;
	int16_t x372 = INT16_MAX;
	volatile int32_t t57 = 1;

	t57 = (x369<<(x370==(x371/x372)));

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x373 = 167351237490716597LLU;
	int16_t x374 = -1;
	static volatile int16_t x375 = -1;
	volatile uint32_t x376 = 2831931U;
	uint64_t t58 = 169573246619914257LLU;

	t58 = (x373<<(x374==(x375/x376)));

	if (t58 != 167351237490716597LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x389 = INT16_MAX;
	int16_t x391 = INT16_MIN;
	volatile int32_t t59 = 1013840160;

	t59 = (x389<<(x390==(x391/x392)));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x393 = 1169325697751LLU;
	int32_t x394 = -1;
	volatile int32_t x395 = -741;
	static int64_t x396 = INT64_MAX;
	volatile uint64_t t60 = 3LLU;

	t60 = (x393<<(x394==(x395/x396)));

	if (t60 != 1169325697751LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x405 = INT64_MAX;
	static int64_t x406 = 7LL;
	int8_t x408 = INT8_MAX;
	static int64_t t61 = INT64_MAX;

	t61 = (x405<<(x406==(x407/x408)));

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x409 = INT32_MAX;
	uint16_t x411 = 2U;
	uint8_t x412 = 5U;
	static int32_t t62 = INT32_MAX;

	t62 = (x409<<(x410==(x411/x412)));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x414 = INT32_MIN;
	int16_t x415 = INT16_MIN;
	int64_t t63 = -139134481LL;

	t63 = (x413<<(x414==(x415/x416)));

	if (t63 != 1451981590305925LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x429 = INT32_MAX;
	volatile int32_t x430 = -2187;
	static int16_t x431 = -1295;
	volatile int16_t x432 = INT16_MIN;
	int32_t t64 = INT32_MAX;

	t64 = (x429<<(x430==(x431/x432)));

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x441 = UINT32_MAX;
	int64_t x442 = INT64_MIN;
	uint64_t x443 = 0LLU;
	uint16_t x444 = UINT16_MAX;
	volatile uint32_t t65 = UINT32_MAX;

	t65 = (x441<<(x442==(x443/x444)));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x446 = INT8_MIN;
	int64_t x447 = 6413503552184758LL;
	int32_t x448 = INT32_MAX;
	volatile int32_t t66 = 67485881;

	t66 = (x445<<(x446==(x447/x448)));

	if (t66 != 451) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x457 = UINT32_MAX;
	int64_t x458 = -473LL;
	static uint16_t x459 = UINT16_MAX;
	volatile int16_t x460 = -1;
	static uint32_t t67 = UINT32_MAX;

	t67 = (x457<<(x458==(x459/x460)));

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x462 = INT8_MIN;
	static int16_t x463 = INT16_MAX;
	uint16_t x464 = 3128U;
	uint64_t t68 = UINT64_MAX;

	t68 = (x461<<(x462==(x463/x464)));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x477 = INT8_MAX;
	uint8_t x478 = UINT8_MAX;
	int8_t x479 = INT8_MIN;
	int16_t x480 = INT16_MIN;
	volatile int32_t t69 = 20;

	t69 = (x477<<(x478==(x479/x480)));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x481 = 161618425441LL;
	volatile int8_t x483 = INT8_MIN;
	uint16_t x484 = 1U;
	volatile int64_t t70 = -52314384376277438LL;

	t70 = (x481<<(x482==(x483/x484)));

	if (t70 != 161618425441LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x489 = 3723338LL;
	int8_t x490 = INT8_MAX;
	volatile int64_t x491 = INT64_MIN;
	int32_t x492 = INT32_MIN;
	volatile int64_t t71 = 75LL;

	t71 = (x489<<(x490==(x491/x492)));

	if (t71 != 3723338LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x506 = 25929798LLU;
	uint64_t x507 = 45LLU;
	static uint64_t t72 = 3744124271LLU;

	t72 = (x505<<(x506==(x507/x508)));

	if (t72 != 842413675LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x509 = 4504;
	static volatile uint32_t x510 = 0U;
	int32_t x512 = -1;
	volatile int32_t t73 = -55;

	t73 = (x509<<(x510==(x511/x512)));

	if (t73 != 4504) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x513 = INT32_MAX;
	static volatile int64_t x514 = -25LL;
	volatile int32_t x516 = INT32_MIN;

	t74 = (x513<<(x514==(x515/x516)));

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x521 = 117U;
	volatile int64_t x522 = INT64_MIN;
	volatile int16_t x523 = INT16_MAX;
	volatile int32_t t75 = -48630929;

	t75 = (x521<<(x522==(x523/x524)));

	if (t75 != 117) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x542 = INT8_MAX;
	int16_t x543 = INT16_MAX;
	int64_t x544 = -1LL;
	uint32_t t76 = UINT32_MAX;

	t76 = (x541<<(x542==(x543/x544)));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x545 = UINT16_MAX;
	static uint16_t x546 = 123U;
	int32_t x547 = -1;
	static int16_t x548 = -1;
	int32_t t77 = 13320;

	t77 = (x545<<(x546==(x547/x548)));

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x553 = 3699U;
	volatile int8_t x554 = -16;
	static int8_t x556 = -1;
	volatile uint32_t t78 = 0U;

	t78 = (x553<<(x554==(x555/x556)));

	if (t78 != 3699U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x573 = INT8_MAX;
	int8_t x574 = -1;
	uint8_t x575 = 29U;
	int8_t x576 = INT8_MIN;
	int32_t t79 = 2394;

	t79 = (x573<<(x574==(x575/x576)));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x577 = 1;
	static int64_t x578 = -30324110425LL;
	static volatile int32_t t80 = 5;

	t80 = (x577<<(x578==(x579/x580)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x581 = INT16_MAX;
	volatile int64_t x582 = INT64_MIN;
	int64_t x583 = -1LL;
	uint16_t x584 = 2U;
	int32_t t81 = -235849;

	t81 = (x581<<(x582==(x583/x584)));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x589 = 29LLU;
	uint8_t x590 = UINT8_MAX;
	uint32_t x591 = 1581771330U;
	int64_t x592 = INT64_MIN;
	static uint64_t t82 = 488103LLU;

	t82 = (x589<<(x590==(x591/x592)));

	if (t82 != 29LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x601 = 102U;
	int16_t x602 = 1;
	volatile int64_t x603 = 231269560LL;
	int32_t t83 = -5004420;

	t83 = (x601<<(x602==(x603/x604)));

	if (t83 != 102) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x605 = INT8_MAX;
	volatile int16_t x607 = INT16_MIN;
	static uint8_t x608 = 1U;
	int32_t t84 = 26250;

	t84 = (x605<<(x606==(x607/x608)));

	if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x609 = 162820;
	int32_t x610 = INT32_MIN;
	volatile int16_t x611 = INT16_MIN;
	uint64_t x612 = UINT64_MAX;
	static volatile int32_t t85 = 288;

	t85 = (x609<<(x610==(x611/x612)));

	if (t85 != 162820) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x614 = 179936609875776LL;
	static uint16_t x615 = 272U;
	static int8_t x616 = -1;
	volatile int32_t t86 = -1;

	t86 = (x613<<(x614==(x615/x616)));

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x617 = 0U;
	int16_t x618 = 11;
	static volatile int32_t x620 = -1;
	static int32_t t87 = -801518794;

	t87 = (x617<<(x618==(x619/x620)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x623 = UINT64_MAX;
	int16_t x624 = -1;
	int32_t t88 = -31264;

	t88 = (x621<<(x622==(x623/x624)));

	if (t88 != 1512) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x625 = UINT32_MAX;
	volatile int64_t x626 = INT64_MIN;
	uint16_t x627 = 4U;
	static uint64_t x628 = UINT64_MAX;

	t89 = (x625<<(x626==(x627/x628)));

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x630 = -1;
	int32_t x631 = 2113954;
	int8_t x632 = INT8_MIN;

	t90 = (x629<<(x630==(x631/x632)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x641 = 9U;
	volatile int32_t x643 = 57890277;
	volatile uint64_t x644 = UINT64_MAX;
	int32_t t91 = 187;

	t91 = (x641<<(x642==(x643/x644)));

	if (t91 != 9) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x645 = 818U;
	volatile int64_t x646 = INT64_MIN;
	static int16_t x647 = INT16_MIN;
	int32_t x648 = -655548446;
	volatile uint32_t t92 = 224244489U;

	t92 = (x645<<(x646==(x647/x648)));

	if (t92 != 818U) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x657 = INT8_MAX;
	volatile int16_t x658 = -410;
	int8_t x660 = 21;
	volatile int32_t t93 = 28627575;

	t93 = (x657<<(x658==(x659/x660)));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x669 = 120246291392229134LLU;
	uint64_t x671 = 4052725852129LLU;
	int32_t x672 = INT32_MAX;
	static uint64_t t94 = 300347047928LLU;

	t94 = (x669<<(x670==(x671/x672)));

	if (t94 != 120246291392229134LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x676 = 527828U;
	volatile int32_t t95 = -22482;

	t95 = (x673<<(x674==(x675/x676)));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x698 = 12U;
	int8_t x699 = INT8_MAX;
	int8_t x700 = INT8_MAX;
	volatile int32_t t96 = 233117388;

	t96 = (x697<<(x698==(x699/x700)));

	if (t96 != 886677) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x701 = 51;
	static int32_t x702 = -1;
	static int32_t x703 = INT32_MIN;

	t97 = (x701<<(x702==(x703/x704)));

	if (t97 != 51) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x706 = -1;
	static int8_t x707 = INT8_MIN;

	t98 = (x705<<(x706==(x707/x708)));

	if (t98 != 125504805LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x709 = INT16_MAX;
	int64_t x710 = INT64_MIN;
	int32_t x711 = INT32_MAX;
	int16_t x712 = INT16_MIN;
	int32_t t99 = -20136;

	t99 = (x709<<(x710==(x711/x712)));

	if (t99 != 32767) { NG(); } else { ; }
	
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


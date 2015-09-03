#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 2785877433721912LLU;
int64_t x4 = INT64_MAX;
volatile int32_t x5 = INT32_MAX;
uint64_t x22 = 34809802093876LLU;
static volatile uint64_t t2 = 511987322977419700LLU;
int16_t x28 = -30;
volatile int64_t x40 = INT64_MIN;
uint32_t x47 = 617U;
int64_t t12 = -1231932839600425LL;
static volatile int32_t t16 = -37;
int32_t x101 = 443;
int16_t x102 = INT16_MIN;
uint16_t x118 = 3U;
int32_t x120 = -16354962;
int64_t x125 = -1LL;
int64_t t22 = 15020982230832LL;
int64_t x130 = INT64_MIN;
int8_t x133 = 0;
uint16_t x145 = 18352U;
static int8_t x147 = -1;
int32_t t27 = -70007169;
int32_t x164 = INT32_MIN;
int64_t x175 = 7374744LL;
static int16_t x189 = -1;
int64_t x192 = INT64_MAX;
int32_t x198 = -166650;
uint8_t x201 = UINT8_MAX;
static int8_t x206 = 14;
static uint8_t x213 = 4U;
static uint8_t x223 = 5U;
int16_t x224 = INT16_MAX;
int16_t x232 = 216;
uint32_t x233 = 513U;
int64_t x251 = INT64_MIN;
volatile int16_t x253 = INT16_MIN;
volatile uint64_t t44 = 19594492LLU;
static uint16_t x268 = 5U;
int32_t x273 = -1;
int16_t x277 = -1;
uint16_t x280 = 90U;
static int32_t x287 = -1;
int16_t x289 = INT16_MIN;
volatile uint64_t t50 = 902474518382LLU;
int32_t x296 = INT32_MIN;
int64_t x303 = 10235970739LL;
static uint32_t x307 = 9771U;
static int64_t t55 = 51738836LL;
volatile uint32_t x318 = 1694484U;
volatile uint32_t t56 = 23871U;
uint32_t x325 = UINT32_MAX;
uint16_t x329 = 198U;
static uint32_t t59 = 243253003U;
uint32_t x341 = UINT32_MAX;
static int32_t x345 = INT32_MIN;
int32_t x346 = -1;
int16_t x356 = 10854;
int64_t x357 = 847583083285760407LL;
uint8_t x365 = 3U;
int8_t x366 = INT8_MIN;
static volatile int16_t x374 = -164;
static volatile int64_t t65 = -4609014148891054LL;
int32_t x378 = INT32_MIN;
volatile int32_t t66 = -49;
uint16_t x382 = 449U;
static int8_t x383 = INT8_MIN;
volatile int64_t x384 = INT64_MIN;
static volatile int32_t x404 = INT32_MAX;
int32_t t71 = -5732;
static int32_t x408 = INT32_MIN;
static uint16_t x409 = 6011U;
uint32_t x413 = 2370U;
int64_t x416 = -74542529427734312LL;
volatile int64_t t74 = -6248881876027354LL;
uint16_t x417 = 1223U;
volatile uint32_t x420 = 1537639U;
uint8_t x429 = UINT8_MAX;
int32_t t78 = 2465;
int64_t x433 = INT64_MIN;
static int64_t t79 = 1906769256748297LL;
uint64_t x443 = 6360201LLU;
static int8_t x446 = INT8_MAX;
int32_t x448 = 5884389;
static volatile int16_t x461 = INT16_MAX;
uint16_t x469 = 20U;
int32_t x470 = -1;
uint64_t x475 = 17000702800193LLU;
static int64_t x479 = INT64_MIN;
uint8_t x484 = 3U;
int64_t t88 = 22981119308LL;
static volatile uint32_t t89 = 958098U;
int16_t x494 = INT16_MIN;
volatile int16_t x503 = -1;
uint64_t x506 = 1873055909LLU;
int64_t x509 = 2991699138LL;
static volatile int32_t x511 = -1;
static int16_t x512 = -6;
uint64_t x516 = 9LLU;
static int64_t x537 = 2183403293729LL;
static int64_t t97 = 3101205333353LL;
uint32_t x545 = 1067949U;


void f0(void) {
	volatile uint32_t x2 = 3058U;
	int8_t x3 = INT8_MIN;
	uint64_t t0 = 5893190833187165LLU;

	t0 = (x1%((x2-x3)%x4));

	if (t0 != 58LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -1;
	int64_t x7 = INT64_MAX;
	int8_t x8 = 31;
	int64_t t1 = -135293813891762978LL;

	t1 = (x5%((x6-x7)%x8));

	if (t1 != 7LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x21 = 1106326188LLU;
	volatile int16_t x23 = -1;
	volatile uint16_t x24 = UINT16_MAX;

	t2 = (x21%((x22-x23)%x24));

	if (t2 != 12932LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x25 = 43U;
	static uint64_t x26 = 557954995LLU;
	int8_t x27 = -4;
	volatile uint64_t t3 = 2LLU;

	t3 = (x25%((x26-x27)%x28));

	if (t3 != 43LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x37 = INT32_MIN;
	uint8_t x38 = 120U;
	uint8_t x39 = 6U;
	static volatile int64_t t4 = 7LL;

	t4 = (x37%((x38-x39)%x40));

	if (t4 != -98LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x41 = 962584814453LLU;
	int32_t x42 = INT32_MAX;
	uint16_t x43 = 448U;
	uint64_t x44 = 174923954LLU;
	static volatile uint64_t t5 = 7407756145LLU;

	t5 = (x41%((x42-x43)%x44));

	if (t5 != 41722814LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x45 = 5350LLU;
	uint8_t x46 = 2U;
	int8_t x48 = -1;
	uint64_t t6 = 15897268LLU;

	t6 = (x45%((x46-x47)%x48));

	if (t6 != 5350LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x49 = INT64_MIN;
	volatile int8_t x50 = INT8_MIN;
	volatile int64_t x51 = -1LL;
	int64_t x52 = -470665879148LL;
	static volatile int64_t t7 = -664302669692LL;

	t7 = (x49%((x50-x51)%x52));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x53 = 7U;
	volatile uint8_t x54 = 1U;
	uint16_t x55 = 1213U;
	volatile uint16_t x56 = 3009U;
	int32_t t8 = 22260539;

	t8 = (x53%((x54-x55)%x56));

	if (t8 != 7) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x57 = 11;
	int64_t x58 = 3519780882LL;
	uint32_t x59 = 3U;
	static uint8_t x60 = 2U;
	volatile int64_t t9 = 3969461076680LL;

	t9 = (x57%((x58-x59)%x60));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x61 = 7393514U;
	uint8_t x62 = UINT8_MAX;
	uint64_t x63 = UINT64_MAX;
	int8_t x64 = INT8_MAX;
	uint64_t t10 = 6696979369LLU;

	t10 = (x61%((x62-x63)%x64));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x73 = INT32_MAX;
	static uint16_t x74 = UINT16_MAX;
	int64_t x75 = INT64_MAX;
	int32_t x76 = INT32_MAX;
	int64_t t11 = 14698939LL;

	t11 = (x73%((x74-x75)%x76));

	if (t11 != 65534LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x77 = INT64_MIN;
	int32_t x78 = INT32_MAX;
	uint32_t x79 = UINT32_MAX;
	volatile int16_t x80 = 11939;

	t12 = (x77%((x78-x79)%x80));

	if (t12 != -2380LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x81 = -1LL;
	volatile int8_t x82 = -6;
	static uint8_t x83 = 4U;
	uint8_t x84 = 89U;
	static int64_t t13 = -10040740550LL;

	t13 = (x81%((x82-x83)%x84));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x85 = INT64_MIN;
	int16_t x86 = INT16_MIN;
	uint32_t x87 = UINT32_MAX;
	int16_t x88 = INT16_MAX;
	volatile int64_t t14 = -13296940680299LL;

	t14 = (x85%((x86-x87)%x88));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x93 = INT16_MIN;
	uint32_t x94 = UINT32_MAX;
	static int16_t x95 = INT16_MIN;
	static uint16_t x96 = 91U;
	volatile uint32_t t15 = 33067445U;

	t15 = (x93%((x94-x95)%x96));

	if (t15 != 3U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x97 = INT32_MIN;
	int8_t x98 = INT8_MIN;
	int8_t x99 = INT8_MAX;
	static uint8_t x100 = 6U;

	t16 = (x97%((x98-x99)%x100));

	if (t16 != -2) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x103 = 33813LLU;
	volatile uint16_t x104 = UINT16_MAX;
	uint64_t t17 = 0LLU;

	t17 = (x101%((x102-x103)%x104));

	if (t17 != 443LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x105 = UINT16_MAX;
	static int32_t x106 = -1;
	static uint32_t x107 = 19371629U;
	int8_t x108 = INT8_MIN;
	uint32_t t18 = 1324795890U;

	t18 = (x105%((x106-x107)%x108));

	if (t18 != 65535U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x113 = -1;
	uint16_t x114 = UINT16_MAX;
	static int64_t x115 = -1LL;
	int64_t x116 = INT64_MIN;
	volatile int64_t t19 = 887720LL;

	t19 = (x113%((x114-x115)%x116));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x117 = 393U;
	static int8_t x119 = 23;
	volatile uint32_t t20 = 128379815U;

	t20 = (x117%((x118-x119)%x120));

	if (t20 != 393U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x121 = 5188285U;
	static int16_t x122 = -1;
	int32_t x123 = -168546;
	uint16_t x124 = 23U;
	volatile uint32_t t21 = 1736958252U;

	t21 = (x121%((x122-x123)%x124));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x126 = 1153U;
	uint32_t x127 = 611950U;
	int32_t x128 = -123174134;

	t22 = (x125%((x126-x127)%x128));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x129 = INT64_MIN;
	static int8_t x131 = -1;
	static int32_t x132 = INT32_MAX;
	int64_t t23 = 3266786225490LL;

	t23 = (x129%((x130-x131)%x132));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x134 = INT8_MAX;
	int16_t x135 = -1;
	int16_t x136 = INT16_MIN;
	static volatile int32_t t24 = 120;

	t24 = (x133%((x134-x135)%x136));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x146 = 2537102U;
	static int16_t x148 = INT16_MIN;
	volatile uint32_t t25 = 42168U;

	t25 = (x145%((x146-x147)%x148));

	if (t25 != 18352U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x149 = INT16_MIN;
	uint32_t x150 = 7437494U;
	int32_t x151 = INT32_MIN;
	int8_t x152 = INT8_MIN;
	volatile uint32_t t26 = 3U;

	t26 = (x149%((x150-x151)%x152));

	if (t26 != 2140013386U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x153 = INT32_MIN;
	uint16_t x154 = 174U;
	static int16_t x155 = INT16_MIN;
	volatile uint16_t x156 = 439U;

	t27 = (x153%((x154-x155)%x156));

	if (t27 != -9) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x161 = INT64_MIN;
	uint32_t x162 = UINT32_MAX;
	uint8_t x163 = 0U;
	volatile int64_t t28 = 29049LL;

	t28 = (x161%((x162-x163)%x164));

	if (t28 != -2LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x165 = INT8_MAX;
	static int8_t x166 = INT8_MAX;
	int16_t x167 = -1;
	volatile int16_t x168 = 27;
	static volatile int32_t t29 = 81914838;

	t29 = (x165%((x166-x167)%x168));

	if (t29 != 7) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x169 = -1LL;
	static int16_t x170 = -31;
	uint64_t x171 = 215956492023719944LLU;
	uint32_t x172 = 931306U;
	static uint64_t t30 = 13158341085104406LLU;

	t30 = (x169%((x170-x171)%x172));

	if (t30 != 146832LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x173 = 28;
	int32_t x174 = INT32_MAX;
	static uint64_t x176 = 1021606182LLU;
	volatile uint64_t t31 = 14404LLU;

	t31 = (x173%((x174-x175)%x176));

	if (t31 != 28LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x177 = INT64_MIN;
	int8_t x178 = INT8_MIN;
	uint8_t x179 = UINT8_MAX;
	volatile uint8_t x180 = 4U;
	static volatile int64_t t32 = 16176LL;

	t32 = (x177%((x178-x179)%x180));

	if (t32 != -2LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x190 = 90041671217868029LLU;
	int64_t x191 = -32LL;
	volatile uint64_t t33 = 14LLU;

	t33 = (x189%((x190-x191)%x192));

	if (t33 != 78243145264467171LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x197 = -1LL;
	volatile int8_t x199 = INT8_MIN;
	static int32_t x200 = -56971;
	static int64_t t34 = -1078228602519741LL;

	t34 = (x197%((x198-x199)%x200));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x202 = 1952U;
	volatile uint16_t x203 = 13818U;
	int8_t x204 = INT8_MIN;
	uint32_t t35 = 8860U;

	t35 = (x201%((x202-x203)%x204));

	if (t35 != 255U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x205 = INT32_MIN;
	int16_t x207 = 2;
	volatile uint8_t x208 = 56U;
	static volatile int32_t t36 = -2;

	t36 = (x205%((x206-x207)%x208));

	if (t36 != -8) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x209 = -261;
	uint8_t x210 = 16U;
	uint32_t x211 = 92029U;
	int16_t x212 = INT16_MAX;
	volatile uint32_t t37 = 7688007U;

	t37 = (x209%((x210-x211)%x212));

	if (t37 != 3791U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x214 = INT8_MAX;
	volatile int16_t x215 = INT16_MIN;
	uint8_t x216 = 2U;
	static volatile int32_t t38 = 14524452;

	t38 = (x213%((x214-x215)%x216));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x221 = -29;
	int8_t x222 = -1;
	static volatile int32_t t39 = 5366434;

	t39 = (x221%((x222-x223)%x224));

	if (t39 != -5) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x229 = -13138405LL;
	int32_t x230 = -1;
	static uint8_t x231 = 5U;
	static int64_t t40 = 14495846LL;

	t40 = (x229%((x230-x231)%x232));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x234 = -312514675;
	uint32_t x235 = 59661U;
	uint8_t x236 = UINT8_MAX;
	volatile uint32_t t41 = 520156U;

	t41 = (x233%((x234-x235)%x236));

	if (t41 != 63U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x249 = UINT64_MAX;
	int8_t x250 = -23;
	volatile int8_t x252 = INT8_MAX;
	volatile uint64_t t42 = 144466618643366013LLU;

	t42 = (x249%((x250-x251)%x252));

	if (t42 != 15LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x254 = 810079167819LLU;
	uint8_t x255 = UINT8_MAX;
	volatile int32_t x256 = -1;
	uint64_t t43 = 3119LLU;

	t43 = (x253%((x254-x255)%x256));

	if (t43 != 386992530800LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x257 = UINT64_MAX;
	volatile int8_t x258 = INT8_MIN;
	uint16_t x259 = UINT16_MAX;
	static int8_t x260 = -28;

	t44 = (x257%((x258-x259)%x260));

	if (t44 != 2LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x265 = INT32_MIN;
	int8_t x266 = INT8_MIN;
	uint64_t x267 = 4995LLU;
	volatile uint64_t t45 = 264858073535LLU;

	t45 = (x265%((x266-x267)%x268));

	if (t45 != 2LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x274 = 1U;
	volatile int32_t x275 = -1;
	static int8_t x276 = INT8_MIN;
	int32_t t46 = 3375622;

	t46 = (x273%((x274-x275)%x276));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x278 = -1LL;
	static int16_t x279 = 1;
	int64_t t47 = -101935823624LL;

	t47 = (x277%((x278-x279)%x280));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x281 = INT32_MAX;
	uint32_t x282 = UINT32_MAX;
	int16_t x283 = -2;
	volatile int32_t x284 = INT32_MIN;
	volatile uint32_t t48 = 433U;

	t48 = (x281%((x282-x283)%x284));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x285 = -1730749548841849LL;
	uint64_t x286 = 31LLU;
	int32_t x288 = INT32_MIN;
	uint64_t t49 = 0LLU;

	t49 = (x285%((x286-x287)%x288));

	if (t49 != 7LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x290 = INT8_MIN;
	volatile uint64_t x291 = 1966651724LLU;
	static int32_t x292 = INT32_MAX;

	t50 = (x289%((x290-x291)%x292));

	if (t50 != 48146033LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x293 = INT32_MAX;
	static volatile int16_t x294 = -2036;
	static int8_t x295 = INT8_MAX;
	int32_t t51 = -1469813;

	t51 = (x293%((x294-x295)%x296));

	if (t51 != 1009) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x301 = -1LL;
	uint8_t x302 = 27U;
	volatile uint16_t x304 = UINT16_MAX;
	static int64_t t52 = 1253629531379767417LL;

	t52 = (x301%((x302-x303)%x304));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x305 = UINT16_MAX;
	int64_t x306 = -1LL;
	int32_t x308 = INT32_MIN;
	volatile int64_t t53 = 21317773574LL;

	t53 = (x305%((x306-x307)%x308));

	if (t53 != 6903LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x309 = UINT16_MAX;
	int8_t x310 = INT8_MIN;
	int32_t x311 = 327;
	volatile int32_t x312 = INT32_MIN;
	volatile int32_t t54 = 9431;

	t54 = (x309%((x310-x311)%x312));

	if (t54 != 15) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint8_t x313 = 1U;
	int16_t x314 = -1;
	static volatile int64_t x315 = -48934560728763635LL;
	volatile uint16_t x316 = 29620U;

	t55 = (x313%((x314-x315)%x316));

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x317 = INT8_MIN;
	int8_t x319 = -41;
	uint32_t x320 = 58238457U;

	t56 = (x317%((x318-x319)%x320));

	if (t56 != 1040818U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x321 = UINT64_MAX;
	static uint8_t x322 = 121U;
	int32_t x323 = INT32_MAX;
	volatile int32_t x324 = -97848493;
	uint64_t t57 = 453LLU;

	t57 = (x321%((x322-x323)%x324));

	if (t57 != 92665172LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x326 = INT8_MIN;
	uint32_t x327 = 507316739U;
	int8_t x328 = 5;
	volatile uint32_t t58 = 224026229U;

	t58 = (x325%((x326-x327)%x328));

	if (t58 != 3U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x330 = -1;
	uint32_t x331 = 1426438U;
	int16_t x332 = 529;

	t59 = (x329%((x330-x331)%x332));

	if (t59 != 27U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x342 = INT8_MAX;
	volatile int8_t x343 = INT8_MIN;
	uint8_t x344 = 97U;
	volatile uint32_t t60 = 7U;

	t60 = (x341%((x342-x343)%x344));

	if (t60 != 56U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x347 = 236222LLU;
	int16_t x348 = INT16_MAX;
	volatile uint64_t t61 = 360LLU;

	t61 = (x345%((x346-x347)%x348));

	if (t61 != 19598LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x353 = -1;
	int32_t x354 = INT32_MAX;
	int64_t x355 = -1LL;
	int64_t t62 = -522197379LL;

	t62 = (x353%((x354-x355)%x356));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x358 = INT8_MIN;
	static int16_t x359 = -1;
	static uint16_t x360 = 26U;
	int64_t t63 = -3840707197LL;

	t63 = (x357%((x358-x359)%x360));

	if (t63 != 8LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x367 = 49170LLU;
	int64_t x368 = INT64_MIN;
	static volatile uint64_t t64 = 13960LLU;

	t64 = (x365%((x366-x367)%x368));

	if (t64 != 3LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x373 = INT32_MIN;
	static volatile uint8_t x375 = 9U;
	int64_t x376 = INT64_MAX;

	t65 = (x373%((x374-x375)%x376));

	if (t65 != -48LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x377 = INT8_MAX;
	int16_t x379 = INT16_MIN;
	volatile int32_t x380 = INT32_MIN;

	t66 = (x377%((x378-x379)%x380));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x381 = 30;
	volatile int64_t t67 = 355426150221181LL;

	t67 = (x381%((x382-x383)%x384));

	if (t67 != 30LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x385 = INT16_MAX;
	int32_t x386 = -6332;
	int8_t x387 = -1;
	uint32_t x388 = 443U;
	static volatile uint32_t t68 = 12U;

	t68 = (x385%((x386-x387)%x388));

	if (t68 != 119U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x389 = 733503211937565884LLU;
	uint16_t x390 = 63U;
	int8_t x391 = INT8_MAX;
	uint64_t x392 = 66662495294LLU;
	volatile uint64_t t69 = 487037398034270733LLU;

	t69 = (x389%((x390-x391)%x392));

	if (t69 != 4219251004LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x397 = -370;
	int8_t x398 = INT8_MAX;
	int32_t x399 = -330;
	volatile uint64_t x400 = 920LLU;
	uint64_t t70 = 266980544963673LLU;

	t70 = (x397%((x398-x399)%x400));

	if (t70 != 302LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x401 = INT8_MIN;
	int32_t x402 = -33629991;
	int16_t x403 = INT16_MAX;

	t71 = (x401%((x402-x403)%x404));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x405 = 165U;
	static int32_t x406 = -63651;
	uint32_t x407 = 197U;
	uint32_t t72 = 5909136U;

	t72 = (x405%((x406-x407)%x408));

	if (t72 != 165U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x410 = 1319388U;
	uint64_t x411 = UINT64_MAX;
	int8_t x412 = INT8_MAX;
	uint64_t t73 = 490LLU;

	t73 = (x409%((x410-x411)%x412));

	if (t73 != 22LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x414 = -1;
	static volatile uint8_t x415 = 3U;

	t74 = (x413%((x414-x415)%x416));

	if (t74 != 2LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x418 = INT32_MAX;
	uint8_t x419 = 3U;
	volatile uint32_t t75 = 110486U;

	t75 = (x417%((x418-x419)%x420));

	if (t75 != 1223U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x421 = INT64_MAX;
	uint8_t x422 = UINT8_MAX;
	volatile int64_t x423 = -6642537577LL;
	volatile int64_t x424 = INT64_MIN;
	int64_t t76 = 477780807LL;

	t76 = (x421%((x422-x423)%x424));

	if (t76 != 276666943LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x425 = INT16_MIN;
	int32_t x426 = 1;
	volatile int16_t x427 = 3;
	static int64_t x428 = 8200118LL;
	int64_t t77 = -269494041754LL;

	t77 = (x425%((x426-x427)%x428));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x430 = 81U;
	uint16_t x431 = 12846U;
	uint16_t x432 = 72U;

	t78 = (x429%((x430-x431)%x432));

	if (t78 != 3) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x434 = 1;
	static uint16_t x435 = UINT16_MAX;
	static int8_t x436 = -6;

	t79 = (x433%((x434-x435)%x436));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x437 = INT32_MIN;
	static volatile int8_t x438 = -23;
	uint16_t x439 = 2U;
	int16_t x440 = 4;
	volatile int32_t t80 = -1990;

	t80 = (x437%((x438-x439)%x440));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x441 = INT32_MAX;
	int64_t x442 = INT64_MAX;
	int16_t x444 = INT16_MIN;
	volatile uint64_t t81 = 53566405LLU;

	t81 = (x441%((x442-x443)%x444));

	if (t81 != 2147483647LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x445 = 28;
	static int32_t x447 = INT32_MAX;
	int32_t t82 = 38;

	t82 = (x445%((x446-x447)%x448));

	if (t82 != 28) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x453 = INT16_MIN;
	uint8_t x454 = 0U;
	uint64_t x455 = 4424567LLU;
	static uint32_t x456 = UINT32_MAX;
	uint64_t t83 = 291614362930LLU;

	t83 = (x453%((x454-x455)%x456));

	if (t83 != 3337175023LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x462 = -36619055LL;
	int8_t x463 = INT8_MIN;
	int8_t x464 = 18;
	int64_t t84 = -203598723LL;

	t84 = (x461%((x462-x463)%x464));

	if (t84 != 7LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x471 = UINT16_MAX;
	int32_t x472 = 61803573;
	volatile int32_t t85 = -26;

	t85 = (x469%((x470-x471)%x472));

	if (t85 != 20) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x473 = UINT32_MAX;
	uint16_t x474 = 48U;
	int8_t x476 = -1;
	uint64_t t86 = 685099624277305LLU;

	t86 = (x473%((x474-x475)%x476));

	if (t86 != 4294967295LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x477 = 1;
	int8_t x478 = -17;
	int16_t x480 = INT16_MAX;
	volatile int64_t t87 = 815086405558LL;

	t87 = (x477%((x478-x479)%x480));

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x481 = 0U;
	int64_t x482 = -43996034170LL;
	uint8_t x483 = 1U;

	t88 = (x481%((x482-x483)%x484));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x489 = 5U;
	uint32_t x490 = 3U;
	int16_t x491 = -1;
	static uint32_t x492 = 592015647U;

	t89 = (x489%((x490-x491)%x492));

	if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x493 = INT32_MIN;
	int32_t x495 = INT32_MIN;
	int64_t x496 = -3990833619526700LL;
	volatile int64_t t90 = 0LL;

	t90 = (x493%((x494-x495)%x496));

	if (t90 != -32768LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x501 = UINT16_MAX;
	uint64_t x502 = 1384735119874962LLU;
	int64_t x504 = INT64_MAX;
	static uint64_t t91 = 79074432938551551LLU;

	t91 = (x501%((x502-x503)%x504));

	if (t91 != 65535LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x505 = INT8_MIN;
	volatile int64_t x507 = 1091097795505665604LL;
	uint32_t x508 = UINT32_MAX;
	volatile uint64_t t92 = 1397139LLU;

	t92 = (x505%((x506-x507)%x508));

	if (t92 != 105481712LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x510 = 3951373930LL;
	volatile int64_t t93 = -63827878LL;

	t93 = (x509%((x510-x511)%x512));

	if (t93 != 3LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x513 = INT64_MAX;
	volatile int32_t x514 = -368;
	static uint8_t x515 = 0U;
	uint64_t t94 = 4186971903420413LLU;

	t94 = (x513%((x514-x515)%x516));

	if (t94 != 7LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x521 = 3U;
	int32_t x522 = 187914638;
	volatile uint16_t x523 = 13U;
	volatile int16_t x524 = -4;
	volatile int32_t t95 = 7;

	t95 = (x521%((x522-x523)%x524));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x529 = INT32_MIN;
	uint64_t x530 = UINT64_MAX;
	static volatile uint32_t x531 = 6U;
	uint64_t x532 = 843LLU;
	uint64_t t96 = 4205310267LLU;

	t96 = (x529%((x530-x531)%x532));

	if (t96 != 218LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x538 = -226384681LL;
	int32_t x539 = INT32_MAX;
	volatile int64_t x540 = 311292939LL;

	t97 = (x537%((x538-x539)%x540));

	if (t97 != 80713444LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x546 = -1;
	volatile uint64_t x547 = 11LLU;
	volatile uint8_t x548 = UINT8_MAX;
	volatile uint64_t t98 = 675LLU;

	t98 = (x545%((x546-x547)%x548));

	if (t98 != 205LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x549 = INT8_MIN;
	uint8_t x550 = UINT8_MAX;
	int16_t x551 = INT16_MIN;
	uint8_t x552 = 21U;
	volatile int32_t t99 = 14398;

	t99 = (x549%((x550-x551)%x552));

	if (t99 != -7) { NG(); } else { ; }
	
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


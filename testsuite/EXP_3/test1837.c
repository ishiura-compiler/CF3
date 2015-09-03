#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x2 = -1;
uint8_t x8 = UINT8_MAX;
int64_t x11 = INT64_MIN;
static int32_t x18 = -378091;
uint32_t t4 = 23U;
static volatile int64_t t5 = 3LL;
uint64_t x33 = UINT64_MAX;
uint16_t x38 = UINT16_MAX;
static volatile uint8_t x40 = 14U;
static volatile uint64_t t7 = 40650260984377LLU;
volatile uint32_t x43 = UINT32_MAX;
static int32_t x53 = -1;
static volatile int16_t x56 = 1;
int32_t t10 = 16;
int32_t x58 = INT32_MIN;
int16_t x59 = INT16_MIN;
uint32_t t11 = 183U;
int32_t x67 = INT32_MIN;
static int64_t x70 = 309676960LL;
int16_t x85 = 3;
uint64_t x88 = UINT64_MAX;
int16_t x102 = -1422;
static uint8_t x103 = 3U;
int64_t t20 = -116424158LL;
static int16_t x109 = -50;
static uint16_t x111 = 11451U;
int64_t x112 = -81738598967987LL;
uint32_t x114 = 1045065904U;
volatile int64_t x115 = INT64_MIN;
volatile int64_t t22 = 7150796839279464LL;
static volatile uint8_t x132 = UINT8_MAX;
uint16_t x133 = 18522U;
static int64_t x134 = 5827LL;
int16_t x142 = INT16_MIN;
uint64_t x144 = UINT64_MAX;
static int32_t x146 = 478;
volatile uint64_t t27 = 69LLU;
static int32_t x149 = INT32_MIN;
int32_t x151 = INT32_MAX;
uint64_t x168 = UINT64_MAX;
uint16_t x205 = 239U;
int8_t x206 = -1;
int8_t x214 = INT8_MIN;
static volatile int32_t x222 = -6033;
int64_t x225 = -1LL;
int8_t x229 = INT8_MIN;
static int8_t x230 = INT8_MAX;
uint32_t x234 = 1220U;
volatile int64_t x235 = INT64_MIN;
static int32_t x236 = -1;
static int32_t x239 = 28123;
static uint8_t x242 = 42U;
static volatile int8_t x243 = -1;
volatile uint32_t t43 = 455757045U;
uint8_t x245 = 1U;
int32_t x248 = INT32_MAX;
int32_t x253 = 152;
volatile int64_t x264 = INT64_MAX;
volatile int64_t t47 = -2967225232LL;
int8_t x269 = INT8_MAX;
int16_t x275 = -1;
volatile int32_t x282 = -1;
int8_t x285 = -1;
int8_t x286 = INT8_MAX;
int8_t x287 = -1;
static volatile uint64_t t53 = 11121300616948336LLU;
int16_t x293 = -9014;
int64_t x294 = INT64_MAX;
static int64_t x295 = -49595266LL;
uint16_t x297 = UINT16_MAX;
uint8_t x303 = 119U;
uint16_t x307 = UINT16_MAX;
int16_t x323 = -1;
int16_t x330 = INT16_MIN;
uint64_t x343 = 309788017048854922LLU;
volatile int64_t t65 = 169LL;
int64_t x349 = INT64_MAX;
uint64_t x351 = 422020LLU;
uint64_t x352 = UINT64_MAX;
uint32_t x353 = 6309U;
volatile int32_t x354 = INT32_MIN;
int8_t x368 = INT8_MIN;
uint32_t x372 = 21624U;
int64_t t71 = 38159LL;
static volatile int32_t t72 = 330;
static uint64_t x378 = UINT64_MAX;
static uint32_t x399 = 1564U;
uint64_t t80 = 253027832179LLU;
volatile int32_t x417 = -1;
int32_t x419 = -1;
static int8_t x423 = 3;
volatile int64_t t83 = -250461174224419695LL;
int8_t x440 = INT8_MIN;
static uint64_t x441 = 9LLU;
static int8_t x443 = INT8_MIN;
uint64_t t86 = 1568591600120772LLU;
uint32_t x446 = 12846U;
int64_t x449 = -3LL;
static int16_t x452 = -8631;
uint16_t x457 = UINT16_MAX;
uint16_t x458 = 350U;
volatile int32_t t91 = -19079;
int32_t x492 = INT32_MIN;
static volatile int64_t t97 = -3937656701757LL;
static uint8_t x501 = UINT8_MAX;
uint64_t x505 = 2209LLU;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static volatile int32_t x3 = INT32_MIN;
	volatile int32_t x4 = INT32_MIN;
	uint32_t t0 = 107703U;

	t0 = ((x1|x2)/(x3&x4));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 522;
	uint16_t x6 = 1U;
	static volatile int8_t x7 = -1;
	int32_t t1 = -4047984;

	t1 = ((x5|x6)/(x7&x8));

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	int32_t x10 = 14882;
	int16_t x12 = INT16_MIN;
	static volatile int64_t t2 = -3LL;

	t2 = ((x9|x10)/(x11&x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -1;
	uint64_t x19 = 159867824720830671LLU;
	static int16_t x20 = -1;
	uint64_t t3 = 10209LLU;

	t3 = ((x17|x18)/(x19&x20));

	if (t3 != 115LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x21 = INT16_MAX;
	static volatile int32_t x22 = 775945938;
	int32_t x23 = INT32_MIN;
	volatile uint32_t x24 = UINT32_MAX;

	t4 = ((x21|x22)/(x23&x24));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x29 = 22U;
	static volatile int64_t x30 = INT64_MAX;
	static volatile int64_t x31 = -255932456957651LL;
	int16_t x32 = INT16_MIN;

	t5 = ((x29|x30)/(x31&x32));

	if (t5 != -36038LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x34 = 2U;
	int64_t x35 = -30501139LL;
	int8_t x36 = -1;
	volatile uint64_t t6 = 36829042155197LLU;

	t6 = ((x33|x34)/(x35&x36));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x37 = 669680161LLU;
	static int16_t x39 = -6;

	t7 = ((x37|x38)/(x39&x40));

	if (t7 != 66971238LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = -2;
	uint8_t x42 = 0U;
	int8_t x44 = -1;
	uint32_t t8 = 347044939U;

	t8 = ((x41|x42)/(x43&x44));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = -1;
	int8_t x46 = INT8_MAX;
	uint32_t x47 = 1102178U;
	uint64_t x48 = 29278488LLU;
	volatile uint64_t t9 = 141LLU;

	t9 = ((x45|x46)/(x47&x48));

	if (t9 != 16800558180911LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x54 = INT32_MIN;
	int8_t x55 = -1;

	t10 = ((x53|x54)/(x55&x56));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = INT8_MIN;
	uint32_t x60 = 1336382U;

	t11 = ((x57|x58)/(x59&x60));

	if (t11 != 3276U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = INT64_MIN;
	uint64_t x62 = UINT64_MAX;
	int16_t x63 = -343;
	static uint8_t x64 = UINT8_MAX;
	volatile uint64_t t12 = 5669LLU;

	t12 = ((x61|x62)/(x63&x64));

	if (t12 != 109152331797097938LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x65 = 7U;
	volatile uint64_t x66 = 53882LLU;
	int16_t x68 = INT16_MIN;
	volatile uint64_t t13 = 2304LLU;

	t13 = ((x65|x66)/(x67&x68));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = 209LLU;
	static int32_t x71 = -40631992;
	int32_t x72 = -1;
	static uint64_t t14 = 1LLU;

	t14 = ((x69|x70)/(x71&x72));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x86 = 2110881763528LL;
	int64_t x87 = INT64_MAX;
	volatile uint64_t t15 = 54373920014751LLU;

	t15 = ((x85|x86)/(x87&x88));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x89 = INT16_MIN;
	uint32_t x90 = UINT32_MAX;
	int32_t x91 = -1;
	uint8_t x92 = UINT8_MAX;
	volatile uint32_t t16 = 6035U;

	t16 = ((x89|x90)/(x91&x92));

	if (t16 != 16843009U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x93 = UINT8_MAX;
	static uint8_t x94 = 3U;
	int32_t x95 = 1873;
	static volatile uint8_t x96 = UINT8_MAX;
	volatile int32_t t17 = -3;

	t17 = ((x93|x94)/(x95&x96));

	if (t17 != 3) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x97 = 1U;
	int32_t x98 = -132198363;
	int16_t x99 = -1;
	static int32_t x100 = -1;
	volatile int32_t t18 = -127186;

	t18 = ((x97|x98)/(x99&x100));

	if (t18 != 132198363) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x101 = 58U;
	volatile int16_t x104 = INT16_MAX;
	uint32_t t19 = 0U;

	t19 = ((x101|x102)/(x103&x104));

	if (t19 != 1431655294U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x105 = INT32_MIN;
	uint32_t x106 = 5357983U;
	volatile int16_t x107 = INT16_MAX;
	static volatile int64_t x108 = -1LL;

	t20 = ((x105|x106)/(x107&x108));

	if (t20 != 65701LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x110 = INT32_MIN;
	volatile int64_t t21 = -2075313916574779569LL;

	t21 = ((x109|x110)/(x111&x112));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x113 = INT64_MIN;
	static volatile int64_t x116 = -1LL;

	t22 = ((x113|x114)/(x115&x116));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x121 = -3;
	int8_t x122 = -1;
	int64_t x123 = INT64_MIN;
	int16_t x124 = INT16_MIN;
	static int64_t t23 = 223LL;

	t23 = ((x121|x122)/(x123&x124));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x129 = UINT8_MAX;
	int8_t x130 = -39;
	int32_t x131 = 1460953;
	int32_t t24 = -27766635;

	t24 = ((x129|x130)/(x131&x132));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x135 = UINT32_MAX;
	int8_t x136 = -1;
	static volatile int64_t t25 = 22487399296927LL;

	t25 = ((x133|x134)/(x135&x136));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x141 = INT64_MIN;
	int64_t x143 = INT64_MIN;
	uint64_t t26 = 6667148620232174LLU;

	t26 = ((x141|x142)/(x143&x144));

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x145 = -11;
	static int16_t x147 = INT16_MAX;
	static uint64_t x148 = UINT64_MAX;

	t27 = ((x145|x146)/(x147&x148));

	if (t27 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x150 = INT16_MAX;
	int8_t x152 = INT8_MIN;
	int32_t t28 = -325;

	t28 = ((x149|x150)/(x151&x152));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x157 = 285860;
	int16_t x158 = -1;
	static volatile int32_t x159 = INT32_MIN;
	int8_t x160 = -7;
	volatile int32_t t29 = -17321127;

	t29 = ((x157|x158)/(x159&x160));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x165 = -1;
	int16_t x166 = INT16_MIN;
	int64_t x167 = INT64_MAX;
	static uint64_t t30 = 5LLU;

	t30 = ((x165|x166)/(x167&x168));

	if (t30 != 2LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x173 = 8U;
	int32_t x174 = INT32_MAX;
	int16_t x175 = INT16_MIN;
	int64_t x176 = -184208420348LL;
	int64_t t31 = -210963213LL;

	t31 = ((x173|x174)/(x175&x176));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x177 = 1872228298266LLU;
	static int32_t x178 = INT32_MAX;
	static int16_t x179 = INT16_MIN;
	volatile int32_t x180 = -339043;
	uint64_t t32 = 865277323LLU;

	t32 = ((x177|x178)/(x179&x180));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x193 = 1544725855LLU;
	int16_t x194 = INT16_MAX;
	int16_t x195 = INT16_MIN;
	volatile int16_t x196 = -1;
	volatile uint64_t t33 = 33454322LLU;

	t33 = ((x193|x194)/(x195&x196));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x201 = INT32_MIN;
	int8_t x202 = 5;
	uint32_t x203 = 421921384U;
	static uint64_t x204 = UINT64_MAX;
	volatile uint64_t t34 = 75039LLU;

	t34 = ((x201|x202)/(x203&x204));

	if (t34 != 43720808593LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x207 = -1;
	int16_t x208 = INT16_MIN;
	volatile int32_t t35 = -18621338;

	t35 = ((x205|x206)/(x207&x208));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x209 = 113U;
	int16_t x210 = INT16_MIN;
	volatile int32_t x211 = -1;
	uint8_t x212 = 90U;
	int32_t t36 = -1;

	t36 = ((x209|x210)/(x211&x212));

	if (t36 != -362) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x213 = UINT8_MAX;
	uint32_t x215 = 264593327U;
	int64_t x216 = -1LL;
	volatile int64_t t37 = -14139300793430LL;

	t37 = ((x213|x214)/(x215&x216));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x221 = -1LL;
	int64_t x223 = -143366309972345516LL;
	volatile uint64_t x224 = 1982934667695LLU;
	static volatile uint64_t t38 = 88372985LLU;

	t38 = ((x221|x222)/(x223&x224));

	if (t38 != 16176881LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x226 = 29U;
	int64_t x227 = -1LL;
	int8_t x228 = -1;
	volatile int64_t t39 = -53489LL;

	t39 = ((x225|x226)/(x227&x228));

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x231 = -1595;
	int16_t x232 = INT16_MIN;
	volatile int32_t t40 = 543576;

	t40 = ((x229|x230)/(x231&x232));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x233 = INT64_MAX;
	volatile int64_t t41 = -13905LL;

	t41 = ((x233|x234)/(x235&x236));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x237 = UINT8_MAX;
	volatile uint16_t x238 = UINT16_MAX;
	static volatile int8_t x240 = 6;
	int32_t t42 = 113;

	t42 = ((x237|x238)/(x239&x240));

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x241 = 51578337U;
	static volatile int16_t x244 = 8943;

	t43 = ((x241|x242)/(x243&x244));

	if (t43 != 5767U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x246 = 112581789795015LLU;
	static volatile int32_t x247 = INT32_MAX;
	uint64_t t44 = 408772509078293837LLU;

	t44 = ((x245|x246)/(x247&x248));

	if (t44 != 52424LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x254 = INT32_MAX;
	static volatile int16_t x255 = -1696;
	volatile uint8_t x256 = UINT8_MAX;
	volatile int32_t t45 = 18740333;

	t45 = ((x253|x254)/(x255&x256));

	if (t45 != 22369621) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x261 = INT64_MIN;
	uint16_t x262 = UINT16_MAX;
	int32_t x263 = -246215;
	int64_t t46 = 20765850880021124LL;

	t46 = ((x261|x262)/(x263&x264));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x265 = -1LL;
	static uint32_t x266 = 94U;
	uint32_t x267 = UINT32_MAX;
	static int64_t x268 = 601LL;

	t47 = ((x265|x266)/(x267&x268));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x270 = -1;
	volatile uint64_t x271 = 3187211LLU;
	volatile uint64_t x272 = 54366957LLU;
	volatile uint64_t t48 = 27312736791436316LLU;

	t48 = ((x269|x270)/(x271&x272));

	if (t48 != 5802656630558LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x273 = 0U;
	static int16_t x274 = INT16_MIN;
	int32_t x276 = INT32_MIN;
	volatile int32_t t49 = -715659159;

	t49 = ((x273|x274)/(x275&x276));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x277 = INT16_MIN;
	static int16_t x278 = INT16_MIN;
	volatile int16_t x279 = 873;
	static volatile int64_t x280 = 5061328LL;
	int64_t t50 = 25LL;

	t50 = ((x277|x278)/(x279&x280));

	if (t50 != -56LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x281 = 1U;
	int16_t x283 = 7;
	volatile uint64_t x284 = UINT64_MAX;
	volatile uint64_t t51 = 1474473202LLU;

	t51 = ((x281|x282)/(x283&x284));

	if (t51 != 2635249153387078802LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x288 = UINT8_MAX;
	static int32_t t52 = 2688;

	t52 = ((x285|x286)/(x287&x288));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x289 = -1LL;
	static uint64_t x290 = 2865704LLU;
	static volatile uint32_t x291 = 37774U;
	uint64_t x292 = 462910271030510LLU;

	t53 = ((x289|x290)/(x291&x292));

	if (t53 != 560520938125480LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x296 = -1LL;
	static volatile int64_t t54 = -229LL;

	t54 = ((x293|x294)/(x295&x296));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x298 = 3U;
	int32_t x299 = -351671;
	static volatile uint64_t x300 = UINT64_MAX;
	uint64_t t55 = 92825LLU;

	t55 = ((x297|x298)/(x299&x300));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x301 = INT64_MIN;
	uint16_t x302 = 60U;
	static uint16_t x304 = UINT16_MAX;
	volatile int64_t t56 = -17335737LL;

	t56 = ((x301|x302)/(x303&x304));

	if (t56 != -77507328040796434LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x305 = INT64_MIN;
	int16_t x306 = -1;
	int64_t x308 = INT64_MAX;
	volatile int64_t t57 = 1732802LL;

	t57 = ((x305|x306)/(x307&x308));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x309 = INT8_MAX;
	int64_t x310 = -1LL;
	static int16_t x311 = INT16_MAX;
	static int64_t x312 = -1LL;
	static int64_t t58 = 1685LL;

	t58 = ((x309|x310)/(x311&x312));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x313 = -1LL;
	int64_t x314 = INT64_MIN;
	int32_t x315 = INT32_MIN;
	int32_t x316 = INT32_MIN;
	static int64_t t59 = 10044408186779741LL;

	t59 = ((x313|x314)/(x315&x316));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x317 = 29211627U;
	int64_t x318 = -440LL;
	volatile int64_t x319 = INT64_MIN;
	static int8_t x320 = -1;
	int64_t t60 = 155LL;

	t60 = ((x317|x318)/(x319&x320));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x321 = 3LLU;
	volatile uint64_t x322 = 168LLU;
	static int32_t x324 = 416396750;
	volatile uint64_t t61 = 176721177231928LLU;

	t61 = ((x321|x322)/(x323&x324));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x325 = 875U;
	uint8_t x326 = 0U;
	volatile int64_t x327 = -283980934773708158LL;
	static uint8_t x328 = UINT8_MAX;
	volatile int64_t t62 = 4287964250081LL;

	t62 = ((x325|x326)/(x327&x328));

	if (t62 != 6LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x329 = INT8_MAX;
	static int16_t x331 = INT16_MIN;
	volatile int32_t x332 = INT32_MIN;
	int32_t t63 = 6783;

	t63 = ((x329|x330)/(x331&x332));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x341 = 44111;
	int32_t x342 = INT32_MAX;
	static int32_t x344 = -1;
	uint64_t t64 = 11334837LLU;

	t64 = ((x341|x342)/(x343&x344));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x345 = INT16_MAX;
	int64_t x346 = 103971LL;
	int8_t x347 = INT8_MAX;
	int16_t x348 = INT16_MAX;

	t65 = ((x345|x346)/(x347&x348));

	if (t65 != 1032LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x350 = -5;
	volatile uint64_t t66 = 1472219LLU;

	t66 = ((x349|x350)/(x351&x352));

	if (t66 != 43710592089734LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x355 = -1;
	uint32_t x356 = UINT32_MAX;
	uint32_t t67 = 23022U;

	t67 = ((x353|x354)/(x355&x356));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x357 = INT32_MAX;
	static int16_t x358 = INT16_MAX;
	static uint16_t x359 = 10U;
	int32_t x360 = INT32_MAX;
	static int32_t t68 = 1061496547;

	t68 = ((x357|x358)/(x359&x360));

	if (t68 != 214748364) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x361 = 57687708835LLU;
	volatile int64_t x362 = 1282LL;
	uint32_t x363 = UINT32_MAX;
	static int32_t x364 = -536705224;
	volatile uint64_t t69 = 448506LLU;

	t69 = ((x361|x362)/(x363&x364));

	if (t69 != 15LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x365 = INT64_MIN;
	int16_t x366 = INT16_MIN;
	int32_t x367 = INT32_MAX;
	int64_t t70 = -1299986605679338LL;

	t70 = ((x365|x366)/(x367&x368));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x369 = INT64_MAX;
	uint32_t x370 = UINT32_MAX;
	int64_t x371 = -160LL;

	t71 = ((x369|x370)/(x371&x372));

	if (t71 != 427007964669202LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x373 = INT16_MAX;
	static uint16_t x374 = 3U;
	int16_t x375 = -1;
	int16_t x376 = -1;

	t72 = ((x373|x374)/(x375&x376));

	if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x377 = 29467879;
	int32_t x379 = 694581676;
	int8_t x380 = -42;
	uint64_t t73 = 1025170463278LLU;

	t73 = ((x377|x378)/(x379&x380));

	if (t73 != 26558064765LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x385 = INT8_MAX;
	static int16_t x386 = -1;
	uint32_t x387 = UINT32_MAX;
	int16_t x388 = 1;
	static volatile uint32_t t74 = UINT32_MAX;

	t74 = ((x385|x386)/(x387&x388));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x389 = INT32_MAX;
	int8_t x390 = INT8_MAX;
	int32_t x391 = -1;
	int32_t x392 = INT32_MAX;
	static int32_t t75 = 24812;

	t75 = ((x389|x390)/(x391&x392));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x397 = -1;
	int32_t x398 = 28;
	volatile int8_t x400 = INT8_MIN;
	volatile uint32_t t76 = 221U;

	t76 = ((x397|x398)/(x399&x400));

	if (t76 != 2796202U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x401 = -1LL;
	int64_t x402 = -1LL;
	int8_t x403 = INT8_MIN;
	int64_t x404 = -1LL;
	volatile int64_t t77 = 45418951517LL;

	t77 = ((x401|x402)/(x403&x404));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x405 = -1LL;
	int32_t x406 = 27258608;
	int8_t x407 = -1;
	static int64_t x408 = -1LL;
	volatile int64_t t78 = -4109398743LL;

	t78 = ((x405|x406)/(x407&x408));

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x409 = INT8_MIN;
	volatile int16_t x410 = INT16_MIN;
	static volatile uint64_t x411 = UINT64_MAX;
	int32_t x412 = INT32_MAX;
	uint64_t t79 = 9LLU;

	t79 = ((x409|x410)/(x411&x412));

	if (t79 != 8589934595LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x413 = 7345348852LLU;
	uint16_t x414 = 4U;
	int32_t x415 = -1;
	static int64_t x416 = INT64_MIN;

	t80 = ((x413|x414)/(x415&x416));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x418 = UINT32_MAX;
	static int64_t x420 = INT64_MAX;
	int64_t t81 = 14755762454672570LL;

	t81 = ((x417|x418)/(x419&x420));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x421 = 150323734;
	volatile int64_t x422 = INT64_MAX;
	static volatile uint32_t x424 = 68906U;
	volatile int64_t t82 = -6LL;

	t82 = ((x421|x422)/(x423&x424));

	if (t82 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x429 = 2U;
	static int32_t x430 = INT32_MIN;
	uint32_t x431 = UINT32_MAX;
	int64_t x432 = -1LL;

	t83 = ((x429|x430)/(x431&x432));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x433 = INT16_MIN;
	int16_t x434 = -7924;
	uint64_t x435 = 10831LLU;
	int16_t x436 = -1;
	uint64_t t84 = 99LLU;

	t84 = ((x433|x434)/(x435&x436));

	if (t84 != 1703143206879285LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x437 = 4374;
	static int8_t x438 = -1;
	int64_t x439 = INT64_MIN;
	int64_t t85 = -1657115LL;

	t85 = ((x437|x438)/(x439&x440));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x442 = UINT8_MAX;
	int32_t x444 = INT32_MIN;

	t86 = ((x441|x442)/(x443&x444));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x445 = -3;
	uint32_t x447 = UINT32_MAX;
	int8_t x448 = INT8_MIN;
	volatile uint32_t t87 = 132U;

	t87 = ((x445|x446)/(x447&x448));

	if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x450 = INT8_MIN;
	int64_t x451 = INT64_MAX;
	volatile int64_t t88 = 1LL;

	t88 = ((x449|x450)/(x451&x452));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x459 = UINT32_MAX;
	volatile int8_t x460 = -1;
	static uint32_t t89 = 108351759U;

	t89 = ((x457|x458)/(x459&x460));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x461 = INT32_MIN;
	int16_t x462 = -1;
	int8_t x463 = INT8_MAX;
	static int32_t x464 = -6730;
	int32_t t90 = -74;

	t90 = ((x461|x462)/(x463&x464));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x465 = UINT16_MAX;
	uint16_t x466 = 48U;
	uint8_t x467 = UINT8_MAX;
	uint16_t x468 = 8722U;

	t91 = ((x465|x466)/(x467&x468));

	if (t91 != 3640) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x473 = 40778899214240LLU;
	volatile int32_t x474 = -33;
	int16_t x475 = -6;
	uint32_t x476 = 1270626U;
	volatile uint64_t t92 = 472042885LLU;

	t92 = ((x473|x474)/(x475&x476));

	if (t92 != 14517839296307LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x481 = -1;
	volatile int16_t x482 = -1;
	int64_t x483 = -54205386077987200LL;
	volatile int8_t x484 = -1;
	volatile int64_t t93 = 3273LL;

	t93 = ((x481|x482)/(x483&x484));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x485 = -30;
	int32_t x486 = INT32_MIN;
	int64_t x487 = -1LL;
	uint8_t x488 = 111U;
	volatile int64_t t94 = -1495LL;

	t94 = ((x485|x486)/(x487&x488));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x489 = UINT64_MAX;
	uint32_t x490 = UINT32_MAX;
	uint64_t x491 = 31492291005LLU;
	volatile uint64_t t95 = 616649963582945LLU;

	t95 = ((x489|x490)/(x491&x492));

	if (t95 != 613566756LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x493 = 26U;
	uint16_t x494 = 13U;
	int64_t x495 = 22726LL;
	volatile int32_t x496 = INT32_MAX;
	volatile int64_t t96 = -1755726LL;

	t96 = ((x493|x494)/(x495&x496));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x497 = INT8_MIN;
	uint16_t x498 = 62U;
	static int64_t x499 = INT64_MIN;
	static int64_t x500 = INT64_MIN;

	t97 = ((x497|x498)/(x499&x500));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x502 = 11548522U;
	uint64_t x503 = UINT64_MAX;
	static int64_t x504 = -1LL;
	volatile uint64_t t98 = 67846483086LLU;

	t98 = ((x501|x502)/(x503&x504));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x506 = 10648;
	volatile int64_t x507 = -1LL;
	int64_t x508 = 251LL;
	volatile uint64_t t99 = 119LLU;

	t99 = ((x505|x506)/(x507&x508));

	if (t99 != 42LLU) { NG(); } else { ; }
	
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


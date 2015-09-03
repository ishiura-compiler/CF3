#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x4 = INT64_MAX;
int32_t t3 = -1;
int64_t x22 = -1LL;
static int64_t x33 = INT64_MIN;
uint64_t x35 = 829814963034504253LLU;
uint16_t x36 = UINT16_MAX;
volatile int32_t x60 = INT32_MAX;
int32_t t13 = -4;
volatile int32_t t14 = -1;
int32_t x73 = 6421;
int64_t x74 = -220688137370335LL;
int16_t x87 = INT16_MIN;
int64_t x88 = INT64_MIN;
static uint8_t x103 = 12U;
uint8_t x105 = 3U;
int16_t x106 = -7633;
int16_t x111 = INT16_MIN;
int32_t x112 = 2408733;
uint16_t x115 = 1U;
static uint32_t x121 = 4347U;
volatile int32_t t26 = -60258520;
uint32_t x127 = 19291U;
volatile int32_t t27 = -16180;
int16_t x139 = 854;
int64_t x143 = INT64_MIN;
volatile int32_t t30 = -1;
int16_t x149 = -1;
int8_t x154 = 1;
volatile int32_t t33 = -899796;
int32_t x163 = INT32_MAX;
uint64_t x177 = UINT64_MAX;
static volatile int32_t t35 = -44;
volatile int32_t t36 = 422116;
int64_t x202 = -1LL;
int64_t x207 = 1456556251LL;
int32_t t40 = 18723;
int32_t t41 = 4146;
uint16_t x214 = 11088U;
static volatile int16_t x215 = 81;
int64_t x221 = -1LL;
volatile int8_t x227 = -1;
static int64_t x228 = -5464LL;
volatile int32_t t45 = 11;
volatile int16_t x230 = -1;
uint32_t x231 = UINT32_MAX;
int32_t t46 = -281232779;
int32_t x233 = 3533;
int32_t x242 = INT32_MAX;
static volatile uint8_t x243 = 0U;
volatile int32_t x245 = INT32_MIN;
uint16_t x247 = UINT16_MAX;
int8_t x248 = -15;
int32_t t50 = -14205;
volatile int32_t t51 = 4;
volatile int32_t x260 = -1;
uint16_t x262 = UINT16_MAX;
int16_t x263 = -1;
volatile int32_t t55 = 33;
int8_t x274 = INT8_MIN;
int64_t x278 = 142486LL;
int32_t x280 = -1;
volatile uint8_t x285 = UINT8_MAX;
static volatile int64_t x287 = -1LL;
static uint8_t x293 = UINT8_MAX;
volatile int32_t t62 = -18239;
volatile uint8_t x304 = 7U;
uint64_t x314 = UINT64_MAX;
volatile int8_t x316 = -1;
static uint8_t x318 = 59U;
int64_t x322 = 1891932662857992LL;
int8_t x323 = 1;
static int32_t t69 = -18683;
uint64_t x340 = 1100781966706579782LLU;
int64_t x342 = INT64_MAX;
volatile int32_t x359 = INT32_MAX;
int8_t x360 = INT8_MAX;
static int32_t t73 = 2;
int32_t x362 = INT32_MIN;
static volatile int8_t x368 = INT8_MIN;
int32_t x371 = -1127769;
static uint16_t x376 = UINT16_MAX;
int8_t x382 = -3;
int32_t x401 = INT32_MAX;
int8_t x406 = -1;
static int64_t x407 = 10042016043392621LL;
static volatile int32_t t83 = 4;
uint16_t x432 = UINT16_MAX;
int32_t t91 = 43913293;
int64_t x449 = 182069572633LL;
volatile int16_t x451 = INT16_MAX;
int32_t x455 = -1;
int64_t x457 = -75456015115253500LL;
int8_t x470 = INT8_MIN;
static uint64_t x483 = UINT64_MAX;


void f0(void) {
	int8_t x1 = -1;
	static int8_t x2 = 18;
	static int64_t x3 = -1LL;
	int32_t t0 = 128542228;

	t0 = ((x1|x2)==(x3-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -17;
	int8_t x6 = 1;
	static int64_t x7 = INT64_MIN;
	int16_t x8 = -1129;
	volatile int32_t t1 = -807133679;

	t1 = ((x5|x6)==(x7-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = 0;
	static int8_t x10 = 0;
	static int8_t x11 = -1;
	volatile int32_t x12 = INT32_MIN;
	static int32_t t2 = 37884;

	t2 = ((x9|x10)==(x11-x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	int64_t x14 = 273202878289LL;
	int16_t x15 = INT16_MIN;
	int32_t x16 = INT32_MIN;

	t3 = ((x13|x14)==(x15-x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = 529962;
	static int16_t x18 = INT16_MAX;
	uint8_t x19 = 29U;
	int32_t x20 = -1;
	static int32_t t4 = -12268534;

	t4 = ((x17|x18)==(x19-x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 449711006578506068LLU;
	int64_t x23 = 35536778005067LL;
	uint8_t x24 = 3U;
	static volatile int32_t t5 = 784665477;

	t5 = ((x21|x22)==(x23-x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	uint16_t x26 = 0U;
	int64_t x27 = INT64_MAX;
	static uint32_t x28 = 18U;
	volatile int32_t t6 = 1479;

	t6 = ((x25|x26)==(x27-x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -52;
	int32_t x30 = -14216943;
	volatile int32_t x31 = INT32_MIN;
	volatile int8_t x32 = -1;
	int32_t t7 = 28;

	t7 = ((x29|x30)==(x31-x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = INT16_MAX;
	int32_t t8 = 209219;

	t8 = ((x33|x34)==(x35-x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -649;
	int32_t x38 = INT32_MIN;
	static volatile int64_t x39 = 17924424404655054LL;
	static int32_t x40 = INT32_MIN;
	volatile int32_t t9 = -56342;

	t9 = ((x37|x38)==(x39-x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MIN;
	static uint32_t x46 = 50732712U;
	uint32_t x47 = UINT32_MAX;
	int64_t x48 = -131347347056713LL;
	volatile int32_t t10 = 936741;

	t10 = ((x45|x46)==(x47-x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = INT8_MIN;
	static uint16_t x54 = 27644U;
	uint32_t x55 = 1923839636U;
	uint64_t x56 = UINT64_MAX;
	int32_t t11 = 2609;

	t11 = ((x53|x54)==(x55-x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = INT8_MAX;
	int32_t x58 = 19;
	uint32_t x59 = 29U;
	int32_t t12 = 13855754;

	t12 = ((x57|x58)==(x59-x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MAX;
	uint32_t x62 = 1180U;
	int16_t x63 = 1;
	int8_t x64 = INT8_MIN;

	t13 = ((x61|x62)==(x63-x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = INT64_MIN;
	static volatile int32_t x66 = -13884;
	volatile uint16_t x67 = 0U;
	int64_t x68 = 6LL;

	t14 = ((x65|x66)==(x67-x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x69 = INT8_MAX;
	uint32_t x70 = 4425U;
	int64_t x71 = INT64_MIN;
	int32_t x72 = INT32_MIN;
	volatile int32_t t15 = -484225;

	t15 = ((x69|x70)==(x71-x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x75 = INT64_MIN;
	static int32_t x76 = -7;
	int32_t t16 = -2622;

	t16 = ((x73|x74)==(x75-x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x81 = 1523066400LLU;
	int32_t x82 = -1;
	uint64_t x83 = 38487478792LLU;
	int8_t x84 = INT8_MAX;
	volatile int32_t t17 = -148836;

	t17 = ((x81|x82)==(x83-x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = -1;
	uint64_t x86 = 2194629873951219LLU;
	int32_t t18 = -229;

	t18 = ((x85|x86)==(x87-x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x89 = 17U;
	int16_t x90 = -4;
	uint64_t x91 = 13764LLU;
	volatile int8_t x92 = -1;
	int32_t t19 = -16837770;

	t19 = ((x89|x90)==(x91-x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = INT64_MIN;
	int64_t x98 = INT64_MIN;
	volatile int8_t x99 = -1;
	static uint32_t x100 = UINT32_MAX;
	int32_t t20 = -669462436;

	t20 = ((x97|x98)==(x99-x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x101 = -1;
	volatile int16_t x102 = -1;
	uint64_t x104 = 278909833343136LLU;
	int32_t t21 = 3118600;

	t21 = ((x101|x102)==(x103-x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x107 = 1;
	volatile int32_t x108 = -1;
	int32_t t22 = 3091;

	t22 = ((x105|x106)==(x107-x108));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = INT32_MIN;
	int32_t x110 = INT32_MIN;
	volatile int32_t t23 = -33;

	t23 = ((x109|x110)==(x111-x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x113 = UINT8_MAX;
	uint64_t x114 = UINT64_MAX;
	int32_t x116 = -1;
	volatile int32_t t24 = 6;

	t24 = ((x113|x114)==(x115-x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = 181;
	uint64_t x118 = UINT64_MAX;
	int64_t x119 = -1LL;
	static volatile int8_t x120 = -1;
	int32_t t25 = -8454;

	t25 = ((x117|x118)==(x119-x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x122 = INT32_MAX;
	static volatile int16_t x123 = 1;
	int16_t x124 = INT16_MIN;

	t26 = ((x121|x122)==(x123-x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = INT64_MIN;
	static int32_t x126 = -1;
	int64_t x128 = 872020199LL;

	t27 = ((x125|x126)==(x127-x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x133 = INT16_MIN;
	static volatile uint16_t x134 = 215U;
	uint32_t x135 = 352U;
	volatile uint32_t x136 = UINT32_MAX;
	int32_t t28 = -955;

	t28 = ((x133|x134)==(x135-x136));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x137 = 4201114U;
	int8_t x138 = INT8_MIN;
	uint8_t x140 = 11U;
	volatile int32_t t29 = -1834;

	t29 = ((x137|x138)==(x139-x140));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x141 = -92675441;
	volatile uint16_t x142 = UINT16_MAX;
	static int8_t x144 = -1;

	t30 = ((x141|x142)==(x143-x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x145 = 2398LL;
	uint32_t x146 = 21U;
	int64_t x147 = -1LL;
	int32_t x148 = INT32_MIN;
	volatile int32_t t31 = 295573;

	t31 = ((x145|x146)==(x147-x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x150 = INT32_MAX;
	int64_t x151 = INT64_MIN;
	uint64_t x152 = 274231366460427148LLU;
	int32_t t32 = 8;

	t32 = ((x149|x150)==(x151-x152));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x153 = -1;
	int16_t x155 = INT16_MIN;
	int8_t x156 = INT8_MIN;

	t33 = ((x153|x154)==(x155-x156));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x161 = 82276LLU;
	int32_t x162 = -1781;
	volatile uint32_t x164 = UINT32_MAX;
	volatile int32_t t34 = 72;

	t34 = ((x161|x162)==(x163-x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x178 = UINT32_MAX;
	int64_t x179 = INT64_MIN;
	volatile uint64_t x180 = 3LLU;

	t35 = ((x177|x178)==(x179-x180));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x189 = UINT32_MAX;
	int16_t x190 = 1;
	static int8_t x191 = INT8_MIN;
	static volatile int8_t x192 = -5;

	t36 = ((x189|x190)==(x191-x192));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x193 = 169U;
	int32_t x194 = -1;
	int16_t x195 = INT16_MIN;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t37 = -1509765;

	t37 = ((x193|x194)==(x195-x196));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x197 = -12;
	static int64_t x198 = -1LL;
	int16_t x199 = INT16_MAX;
	int64_t x200 = INT64_MAX;
	volatile int32_t t38 = 10;

	t38 = ((x197|x198)==(x199-x200));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x201 = INT64_MIN;
	int16_t x203 = INT16_MAX;
	int8_t x204 = -1;
	static int32_t t39 = -31171977;

	t39 = ((x201|x202)==(x203-x204));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x205 = UINT8_MAX;
	volatile uint32_t x206 = 1212084536U;
	int64_t x208 = -3LL;

	t40 = ((x205|x206)==(x207-x208));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x209 = 3272467981203527140LL;
	uint16_t x210 = 0U;
	uint16_t x211 = UINT16_MAX;
	uint64_t x212 = 0LLU;

	t41 = ((x209|x210)==(x211-x212));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x213 = INT64_MIN;
	int64_t x216 = 7528LL;
	volatile int32_t t42 = -7547;

	t42 = ((x213|x214)==(x215-x216));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x217 = UINT64_MAX;
	static int64_t x218 = INT64_MAX;
	volatile int8_t x219 = -1;
	int64_t x220 = INT64_MIN;
	int32_t t43 = 129949;

	t43 = ((x217|x218)==(x219-x220));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x222 = UINT32_MAX;
	int64_t x223 = -1LL;
	uint32_t x224 = UINT32_MAX;
	volatile int32_t t44 = 0;

	t44 = ((x221|x222)==(x223-x224));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x225 = INT8_MAX;
	volatile int64_t x226 = INT64_MIN;

	t45 = ((x225|x226)==(x227-x228));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x229 = INT64_MIN;
	static int64_t x232 = -9LL;

	t46 = ((x229|x230)==(x231-x232));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x234 = 1364;
	uint8_t x235 = 15U;
	int16_t x236 = INT16_MIN;
	static volatile int32_t t47 = 442;

	t47 = ((x233|x234)==(x235-x236));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x237 = -1LL;
	uint32_t x238 = 12U;
	int32_t x239 = INT32_MIN;
	static int64_t x240 = 2263909716489156341LL;
	volatile int32_t t48 = -1;

	t48 = ((x237|x238)==(x239-x240));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x241 = 13U;
	static int32_t x244 = INT32_MAX;
	volatile int32_t t49 = 139265538;

	t49 = ((x241|x242)==(x243-x244));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x246 = UINT64_MAX;

	t50 = ((x245|x246)==(x247-x248));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x249 = INT32_MIN;
	int16_t x250 = INT16_MIN;
	volatile int16_t x251 = -4168;
	int8_t x252 = 53;

	t51 = ((x249|x250)==(x251-x252));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x253 = -1;
	volatile int16_t x254 = -1;
	uint64_t x255 = 66612518060363970LLU;
	static volatile int8_t x256 = INT8_MIN;
	volatile int32_t t52 = 6;

	t52 = ((x253|x254)==(x255-x256));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x257 = INT16_MIN;
	int8_t x258 = INT8_MIN;
	int64_t x259 = -1783759LL;
	volatile int32_t t53 = 35158;

	t53 = ((x257|x258)==(x259-x260));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x261 = INT16_MAX;
	uint64_t x264 = 5882127405796712LLU;
	static int32_t t54 = -393;

	t54 = ((x261|x262)==(x263-x264));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x265 = 119U;
	uint8_t x266 = 34U;
	int64_t x267 = -14LL;
	int16_t x268 = INT16_MIN;

	t55 = ((x265|x266)==(x267-x268));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x273 = 777U;
	int16_t x275 = -1;
	static uint32_t x276 = 144246290U;
	int32_t t56 = 16771246;

	t56 = ((x273|x274)==(x275-x276));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x277 = 80U;
	int32_t x279 = INT32_MIN;
	volatile int32_t t57 = 12;

	t57 = ((x277|x278)==(x279-x280));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x281 = 15292147638593938LLU;
	int32_t x282 = INT32_MIN;
	volatile int32_t x283 = 122043;
	uint32_t x284 = 7923U;
	volatile int32_t t58 = 7;

	t58 = ((x281|x282)==(x283-x284));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x286 = -8;
	volatile int32_t x288 = INT32_MAX;
	volatile int32_t t59 = 1671116;

	t59 = ((x285|x286)==(x287-x288));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x289 = 1730U;
	static volatile int32_t x290 = 11417;
	int32_t x291 = INT32_MIN;
	uint64_t x292 = 41084077786849640LLU;
	static volatile int32_t t60 = -155099;

	t60 = ((x289|x290)==(x291-x292));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x294 = 97LL;
	int32_t x295 = INT32_MIN;
	static volatile uint64_t x296 = 8296972467780495LLU;
	int32_t t61 = -35843;

	t61 = ((x293|x294)==(x295-x296));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x297 = INT16_MAX;
	int8_t x298 = INT8_MIN;
	int32_t x299 = INT32_MIN;
	uint64_t x300 = UINT64_MAX;

	t62 = ((x297|x298)==(x299-x300));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x301 = -66;
	uint16_t x302 = 3U;
	uint64_t x303 = 40129997LLU;
	volatile int32_t t63 = 1;

	t63 = ((x301|x302)==(x303-x304));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x305 = 1U;
	int64_t x306 = -1LL;
	volatile int8_t x307 = INT8_MAX;
	int16_t x308 = INT16_MIN;
	static int32_t t64 = -193;

	t64 = ((x305|x306)==(x307-x308));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x309 = -1;
	int8_t x310 = 0;
	uint8_t x311 = 1U;
	int16_t x312 = INT16_MAX;
	static volatile int32_t t65 = 91904;

	t65 = ((x309|x310)==(x311-x312));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x313 = INT8_MAX;
	int32_t x315 = -361319329;
	static int32_t t66 = 1097562;

	t66 = ((x313|x314)==(x315-x316));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x317 = INT8_MIN;
	static int64_t x319 = -38242989LL;
	volatile uint8_t x320 = 115U;
	volatile int32_t t67 = -41;

	t67 = ((x317|x318)==(x319-x320));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x321 = INT32_MIN;
	int16_t x324 = INT16_MIN;
	int32_t t68 = 6350975;

	t68 = ((x321|x322)==(x323-x324));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x325 = INT16_MIN;
	static volatile int32_t x326 = -1;
	volatile int8_t x327 = INT8_MAX;
	uint64_t x328 = UINT64_MAX;

	t69 = ((x325|x326)==(x327-x328));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x337 = 22056U;
	uint32_t x338 = 27U;
	int8_t x339 = INT8_MAX;
	volatile int32_t t70 = -70;

	t70 = ((x337|x338)==(x339-x340));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x341 = 886U;
	static volatile uint32_t x343 = UINT32_MAX;
	int8_t x344 = INT8_MAX;
	volatile int32_t t71 = -243;

	t71 = ((x341|x342)==(x343-x344));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x353 = INT8_MIN;
	int32_t x354 = 1;
	uint64_t x355 = 549591512292994351LLU;
	int16_t x356 = -264;
	int32_t t72 = 603306856;

	t72 = ((x353|x354)==(x355-x356));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x357 = 2;
	int64_t x358 = INT64_MIN;

	t73 = ((x357|x358)==(x359-x360));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x361 = 39U;
	int32_t x363 = INT32_MIN;
	int32_t x364 = -872834557;
	int32_t t74 = -23800698;

	t74 = ((x361|x362)==(x363-x364));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x365 = 13838;
	int8_t x366 = 1;
	volatile int8_t x367 = INT8_MAX;
	int32_t t75 = -45;

	t75 = ((x365|x366)==(x367-x368));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x369 = 350630U;
	int16_t x370 = INT16_MIN;
	int16_t x372 = INT16_MIN;
	volatile int32_t t76 = 184314;

	t76 = ((x369|x370)==(x371-x372));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x373 = 1868;
	uint32_t x374 = UINT32_MAX;
	volatile uint8_t x375 = UINT8_MAX;
	volatile int32_t t77 = 8;

	t77 = ((x373|x374)==(x375-x376));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x381 = INT16_MIN;
	static volatile int16_t x383 = INT16_MIN;
	int64_t x384 = INT64_MIN;
	volatile int32_t t78 = 62826;

	t78 = ((x381|x382)==(x383-x384));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x385 = -1;
	int8_t x386 = 47;
	volatile int64_t x387 = 348869745708976LL;
	int8_t x388 = INT8_MAX;
	volatile int32_t t79 = -869951902;

	t79 = ((x385|x386)==(x387-x388));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x393 = INT16_MIN;
	int64_t x394 = 4519576370982807641LL;
	uint32_t x395 = 126020057U;
	static uint8_t x396 = 3U;
	static int32_t t80 = -7;

	t80 = ((x393|x394)==(x395-x396));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x397 = INT16_MIN;
	volatile uint8_t x398 = 0U;
	uint16_t x399 = 1958U;
	static uint16_t x400 = 415U;
	volatile int32_t t81 = 44897;

	t81 = ((x397|x398)==(x399-x400));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x402 = 4LL;
	volatile int64_t x403 = 649984214344854307LL;
	uint8_t x404 = 1U;
	volatile int32_t t82 = 792699;

	t82 = ((x401|x402)==(x403-x404));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x405 = INT8_MAX;
	volatile int64_t x408 = 20667LL;

	t83 = ((x405|x406)==(x407-x408));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x409 = INT8_MIN;
	int8_t x410 = INT8_MIN;
	uint64_t x411 = UINT64_MAX;
	int8_t x412 = INT8_MAX;
	volatile int32_t t84 = 24;

	t84 = ((x409|x410)==(x411-x412));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x413 = -13972;
	int32_t x414 = -1;
	static uint16_t x415 = 39U;
	uint64_t x416 = 6141170LLU;
	static volatile int32_t t85 = 146004;

	t85 = ((x413|x414)==(x415-x416));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x421 = INT16_MIN;
	int8_t x422 = -1;
	static int8_t x423 = INT8_MIN;
	int8_t x424 = INT8_MAX;
	int32_t t86 = 741;

	t86 = ((x421|x422)==(x423-x424));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x425 = 14;
	uint32_t x426 = UINT32_MAX;
	int32_t x427 = 233924;
	uint32_t x428 = 237990U;
	int32_t t87 = 8;

	t87 = ((x425|x426)==(x427-x428));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x429 = UINT64_MAX;
	uint8_t x430 = 7U;
	volatile uint64_t x431 = UINT64_MAX;
	int32_t t88 = -57805944;

	t88 = ((x429|x430)==(x431-x432));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x433 = INT32_MIN;
	int64_t x434 = 3033635594441LL;
	int16_t x435 = -3;
	volatile int8_t x436 = 26;
	volatile int32_t t89 = -25212346;

	t89 = ((x433|x434)==(x435-x436));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x437 = INT64_MIN;
	static int32_t x438 = INT32_MAX;
	uint64_t x439 = 9823436731564843LLU;
	uint8_t x440 = 0U;
	static volatile int32_t t90 = 42758;

	t90 = ((x437|x438)==(x439-x440));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x445 = 7U;
	int16_t x446 = -1;
	int64_t x447 = INT64_MIN;
	static volatile int64_t x448 = INT64_MIN;

	t91 = ((x445|x446)==(x447-x448));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x450 = -1;
	int16_t x452 = -1;
	int32_t t92 = 1;

	t92 = ((x449|x450)==(x451-x452));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x453 = -96;
	volatile int8_t x454 = INT8_MAX;
	volatile uint16_t x456 = 683U;
	volatile int32_t t93 = 36;

	t93 = ((x453|x454)==(x455-x456));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x458 = UINT64_MAX;
	uint16_t x459 = 11611U;
	int64_t x460 = -1LL;
	int32_t t94 = -716;

	t94 = ((x457|x458)==(x459-x460));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x461 = -16;
	uint8_t x462 = UINT8_MAX;
	int8_t x463 = 5;
	int16_t x464 = -5;
	int32_t t95 = 1;

	t95 = ((x461|x462)==(x463-x464));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x465 = 7LL;
	int64_t x466 = -1LL;
	uint64_t x467 = UINT64_MAX;
	int16_t x468 = 9546;
	static int32_t t96 = 162980;

	t96 = ((x465|x466)==(x467-x468));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x469 = INT32_MIN;
	uint16_t x471 = 2417U;
	int32_t x472 = 905246463;
	static int32_t t97 = 34368139;

	t97 = ((x469|x470)==(x471-x472));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x477 = INT32_MIN;
	uint32_t x478 = 258219817U;
	uint16_t x479 = 102U;
	int8_t x480 = INT8_MAX;
	volatile int32_t t98 = -13555;

	t98 = ((x477|x478)==(x479-x480));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x481 = 1;
	int16_t x482 = -1;
	int16_t x484 = INT16_MAX;
	volatile int32_t t99 = 265;

	t99 = ((x481|x482)==(x483-x484));

	if (t99 != 0) { NG(); } else { ; }
	
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


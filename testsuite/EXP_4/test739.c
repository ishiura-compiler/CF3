#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x3 = UINT16_MAX;
int32_t x7 = -308;
int64_t t1 = 8827682402LL;
uint8_t x11 = UINT8_MAX;
static int32_t x19 = INT32_MAX;
int32_t t4 = 287;
volatile uint32_t x23 = UINT32_MAX;
int32_t x43 = INT32_MAX;
int32_t x44 = -16568;
int64_t x45 = -471LL;
uint32_t x52 = UINT32_MAX;
volatile uint32_t t10 = 505U;
static int16_t x58 = INT16_MIN;
int64_t x67 = -1LL;
int16_t x73 = 1508;
uint64_t x74 = 2LLU;
uint8_t x87 = 1U;
volatile int16_t x104 = 160;
int32_t x109 = 131;
uint32_t x111 = UINT32_MAX;
volatile uint32_t t23 = 11U;
int16_t x125 = INT16_MIN;
uint64_t x128 = UINT64_MAX;
static uint8_t x138 = UINT8_MAX;
volatile int64_t t28 = -72861848619132352LL;
volatile int16_t x147 = 43;
uint32_t x160 = 174U;
int16_t x163 = -996;
uint32_t x164 = 6390568U;
volatile int8_t x186 = -28;
int16_t x187 = INT16_MIN;
static int32_t x191 = -1774;
int8_t x192 = INT8_MIN;
volatile int32_t t36 = -95514;
static volatile int64_t t37 = 230556356LL;
int32_t x205 = -3429276;
volatile uint32_t t41 = 49645U;
int32_t x221 = 0;
uint8_t x227 = 8U;
int8_t x229 = INT8_MIN;
uint16_t x244 = 4100U;
uint64_t t47 = 15938342LLU;
uint16_t x245 = 137U;
volatile int8_t x249 = 2;
volatile uint64_t x250 = 4215822177LLU;
uint64_t t49 = 257773LLU;
static int16_t x267 = INT16_MIN;
uint64_t t51 = 196532954824LLU;
volatile int32_t t52 = 24454;
int8_t x281 = -1;
int8_t x293 = INT8_MIN;
volatile int16_t x296 = 24;
int16_t x313 = INT16_MIN;
static volatile int16_t x316 = INT16_MIN;
volatile int8_t x332 = -5;
int8_t x341 = -1;
int32_t x344 = INT32_MIN;
volatile int32_t x351 = -1;
static uint32_t t67 = 553698416U;
int8_t x359 = -51;
int8_t x362 = INT8_MIN;
int8_t x364 = 7;
static int32_t x369 = INT32_MAX;
int16_t x370 = INT16_MIN;
volatile uint64_t x374 = 5619842LLU;
uint32_t x375 = 460544U;
int32_t x376 = -1;
uint64_t x378 = UINT64_MAX;
volatile uint64_t t73 = 16LLU;
int32_t x381 = INT32_MIN;
int8_t x382 = INT8_MIN;
uint64_t x386 = 7435667082LLU;
int8_t x390 = INT8_MIN;
int32_t x395 = INT32_MAX;
uint64_t x408 = 12043423LLU;
volatile uint64_t t79 = 531908060LLU;
int32_t x409 = 974;
int16_t x412 = -865;
volatile int64_t t81 = INT64_MIN;
uint8_t x423 = UINT8_MAX;
int16_t x428 = INT16_MIN;
volatile int16_t x433 = INT16_MIN;
int16_t x451 = INT16_MAX;
volatile uint16_t x452 = 2U;
int32_t x456 = INT32_MAX;
volatile int64_t t89 = 520637254528684LL;
static uint64_t x464 = 4037LLU;
uint16_t x471 = UINT16_MAX;
int16_t x477 = -1;
int64_t t94 = 1146855044160LL;
int8_t x481 = -1;
int64_t x482 = INT64_MAX;
uint32_t x484 = 1700U;
int64_t t95 = 1LL;
volatile uint8_t x492 = 14U;
volatile uint8_t x506 = UINT8_MAX;
uint32_t x512 = UINT32_MAX;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	static uint16_t x2 = 14610U;
	volatile uint8_t x4 = 7U;
	int32_t t0 = -62435;

	t0 = (x1&(x2%(x3%x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	static int64_t x6 = 93191655866672LL;
	int16_t x8 = INT16_MIN;

	t1 = (x5&(x6%(x7%x8)));

	if (t1 != 4LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x9 = INT16_MIN;
	uint32_t x10 = 411575235U;
	int32_t x12 = INT32_MIN;
	volatile uint32_t t2 = 93U;

	t2 = (x9&(x10%(x11%x12)));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 3U;
	static int32_t x14 = INT32_MAX;
	static int16_t x15 = -1;
	static uint8_t x16 = UINT8_MAX;
	static volatile int32_t t3 = 5;

	t3 = (x13&(x14%(x15%x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = UINT16_MAX;
	int32_t x18 = INT32_MIN;
	uint8_t x20 = UINT8_MAX;

	t4 = (x17&(x18%(x19%x20)));

	if (t4 != 65528) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	static int64_t x22 = INT64_MIN;
	int64_t x24 = INT64_MIN;
	static int64_t t5 = -428802427808714809LL;

	t5 = (x21&(x22%(x23%x24)));

	if (t5 != -2147483648LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -1;
	int64_t x30 = -2073LL;
	uint16_t x31 = 5U;
	uint8_t x32 = 2U;
	int64_t t6 = 12674716529405465LL;

	t6 = (x29&(x30%(x31%x32)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MAX;
	static int8_t x34 = -1;
	int8_t x35 = INT8_MIN;
	uint64_t x36 = UINT64_MAX;
	uint64_t t7 = 63659506609221627LLU;

	t7 = (x33&(x34%(x35%x36)));

	if (t7 != 127LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = -1LL;
	volatile int8_t x42 = INT8_MAX;
	int64_t t8 = 590642415599LL;

	t8 = (x41&(x42%(x43%x44)));

	if (t8 != 127LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x46 = INT32_MIN;
	volatile int32_t x47 = -1;
	volatile uint8_t x48 = UINT8_MAX;
	int64_t t9 = 2179487LL;

	t9 = (x45&(x46%(x47%x48)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MIN;
	uint16_t x50 = UINT16_MAX;
	int16_t x51 = 244;

	t10 = (x49&(x50%(x51%x52)));

	if (t10 != 128U) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x53 = -1LL;
	static uint32_t x54 = 0U;
	int8_t x55 = -30;
	volatile int8_t x56 = INT8_MIN;
	volatile int64_t t11 = -150421148188898LL;

	t11 = (x53&(x54%(x55%x56)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = 29;
	int64_t x59 = -1LL;
	int32_t x60 = 45215295;
	int64_t t12 = -1LL;

	t12 = (x57&(x58%(x59%x60)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MAX;
	static int8_t x62 = -1;
	uint64_t x63 = 350599LLU;
	int32_t x64 = -1;
	volatile uint64_t t13 = 5061243LLU;

	t13 = (x61&(x62%(x63%x64)));

	if (t13 != 11014LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x65 = 5746U;
	static int32_t x66 = INT32_MIN;
	static int16_t x68 = -2;
	int64_t t14 = 230604388561LL;

	t14 = (x65&(x66%(x67%x68)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MAX;
	int8_t x70 = 4;
	uint16_t x71 = 275U;
	uint16_t x72 = UINT16_MAX;
	int64_t t15 = -326473059222LL;

	t15 = (x69&(x70%(x71%x72)));

	if (t15 != 4LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x75 = INT32_MIN;
	static uint16_t x76 = UINT16_MAX;
	static volatile uint64_t t16 = 273128153896954LLU;

	t16 = (x73&(x74%(x75%x76)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = INT32_MIN;
	volatile uint32_t x78 = 56695781U;
	uint8_t x79 = UINT8_MAX;
	int64_t x80 = INT64_MIN;
	int64_t t17 = 22LL;

	t17 = (x77&(x78%(x79%x80)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x85 = 67U;
	int16_t x86 = -3;
	uint16_t x88 = UINT16_MAX;
	volatile uint32_t t18 = 93787U;

	t18 = (x85&(x86%(x87%x88)));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = INT16_MIN;
	int16_t x90 = INT16_MIN;
	volatile int64_t x91 = -3668007551051380328LL;
	static int64_t x92 = -38619LL;
	int64_t t19 = 180574353661445LL;

	t19 = (x89&(x90%(x91%x92)));

	if (t19 != -32768LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x97 = 115U;
	int8_t x98 = INT8_MIN;
	static int64_t x99 = INT64_MAX;
	int16_t x100 = INT16_MAX;
	int64_t t20 = 1506255032556992LL;

	t20 = (x97&(x98%(x99%x100)));

	if (t20 != 114LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x101 = 8270794LLU;
	int16_t x102 = -1;
	static int8_t x103 = -1;
	volatile uint64_t t21 = 8276338170502786LLU;

	t21 = (x101&(x102%(x103%x104)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = INT16_MIN;
	static int64_t x106 = -27623LL;
	uint64_t x107 = 40694051276LLU;
	static int16_t x108 = INT16_MIN;
	uint64_t t22 = 7598LLU;

	t22 = (x105&(x106%(x107%x108)));

	if (t22 != 2394095616LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x110 = UINT16_MAX;
	int32_t x112 = INT32_MIN;

	t23 = (x109&(x110%(x111%x112)));

	if (t23 != 131U) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x117 = INT16_MIN;
	int8_t x118 = 19;
	int32_t x119 = -1;
	int16_t x120 = INT16_MAX;
	int32_t t24 = -354052;

	t24 = (x117&(x118%(x119%x120)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x126 = 1;
	static uint32_t x127 = UINT32_MAX;
	uint64_t t25 = 11277942356LLU;

	t25 = (x125&(x126%(x127%x128)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x129 = 14;
	uint32_t x130 = UINT32_MAX;
	uint32_t x131 = 2U;
	static int8_t x132 = INT8_MIN;
	uint32_t t26 = 87446376U;

	t26 = (x129&(x130%(x131%x132)));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x137 = UINT16_MAX;
	int16_t x139 = INT16_MAX;
	int16_t x140 = 63;
	volatile int32_t t27 = -560704;

	t27 = (x137&(x138%(x139%x140)));

	if (t27 != 3) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x141 = 1879285;
	int64_t x142 = INT64_MIN;
	int16_t x143 = -1;
	static int16_t x144 = INT16_MIN;

	t28 = (x141&(x142%(x143%x144)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x145 = INT64_MIN;
	int8_t x146 = INT8_MIN;
	uint32_t x148 = UINT32_MAX;
	volatile int64_t t29 = -2713210166802LL;

	t29 = (x145&(x146%(x147%x148)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x157 = 0U;
	static int8_t x158 = INT8_MAX;
	static int16_t x159 = -23;
	uint32_t t30 = 2731872U;

	t30 = (x157&(x158%(x159%x160)));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x161 = INT16_MAX;
	int16_t x162 = 1;
	uint32_t t31 = 7U;

	t31 = (x161&(x162%(x163%x164)));

	if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x173 = UINT16_MAX;
	uint16_t x174 = 439U;
	volatile int64_t x175 = -915862515286037LL;
	uint16_t x176 = UINT16_MAX;
	volatile int64_t t32 = 0LL;

	t32 = (x173&(x174%(x175%x176)));

	if (t32 != 439LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x177 = INT32_MAX;
	uint32_t x178 = UINT32_MAX;
	volatile int8_t x179 = 5;
	int64_t x180 = -7LL;
	volatile int64_t t33 = -144LL;

	t33 = (x177&(x178%(x179%x180)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x185 = INT16_MAX;
	int32_t x188 = INT32_MIN;
	volatile int32_t t34 = -42;

	t34 = (x185&(x186%(x187%x188)));

	if (t34 != 32740) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x189 = -1;
	volatile int32_t x190 = -1;
	static volatile int32_t t35 = -112861555;

	t35 = (x189&(x190%(x191%x192)));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x193 = UINT16_MAX;
	volatile int8_t x194 = -1;
	int16_t x195 = -1;
	int16_t x196 = INT16_MIN;

	t36 = (x193&(x194%(x195%x196)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x197 = -1LL;
	int64_t x198 = -227656824461984LL;
	static volatile uint32_t x199 = 389U;
	static uint32_t x200 = 8423U;

	t37 = (x197&(x198%(x199%x200)));

	if (t37 != -195LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x201 = -3;
	volatile uint32_t x202 = 100U;
	int8_t x203 = -1;
	uint16_t x204 = 66U;
	uint32_t t38 = 125734U;

	t38 = (x201&(x202%(x203%x204)));

	if (t38 != 100U) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x206 = INT64_MIN;
	int64_t x207 = -1LL;
	int8_t x208 = INT8_MIN;
	static int64_t t39 = -88271040003776714LL;

	t39 = (x205&(x206%(x207%x208)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x209 = UINT8_MAX;
	volatile uint16_t x210 = 32618U;
	int64_t x211 = -1LL;
	volatile int64_t x212 = INT64_MAX;
	static int64_t t40 = 1LL;

	t40 = (x209&(x210%(x211%x212)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x217 = 20990U;
	uint32_t x218 = UINT32_MAX;
	volatile int32_t x219 = -1804;
	int8_t x220 = INT8_MIN;

	t41 = (x217&(x218%(x219%x220)));

	if (t41 != 10U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x222 = UINT16_MAX;
	int64_t x223 = -1LL;
	int16_t x224 = INT16_MIN;
	volatile int64_t t42 = -56167983104949227LL;

	t42 = (x221&(x222%(x223%x224)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x225 = 1;
	int8_t x226 = INT8_MAX;
	volatile int8_t x228 = INT8_MAX;
	int32_t t43 = 13236487;

	t43 = (x225&(x226%(x227%x228)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x230 = 12641;
	uint8_t x231 = 23U;
	int32_t x232 = INT32_MIN;
	volatile int32_t t44 = 52;

	t44 = (x229&(x230%(x231%x232)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x233 = UINT16_MAX;
	int64_t x234 = INT64_MIN;
	uint8_t x235 = 1U;
	uint32_t x236 = 692497127U;
	volatile int64_t t45 = 319664245516920831LL;

	t45 = (x233&(x234%(x235%x236)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x237 = -2;
	int64_t x238 = -14830905802563LL;
	uint64_t x239 = 5683LLU;
	int16_t x240 = INT16_MIN;
	uint64_t t46 = 1806LLU;

	t46 = (x237&(x238%(x239%x240)));

	if (t46 != 5680LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x241 = 64311606825LLU;
	uint8_t x242 = 44U;
	volatile int32_t x243 = INT32_MAX;

	t47 = (x241&(x242%(x243%x244)));

	if (t47 != 40LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x246 = UINT32_MAX;
	uint8_t x247 = UINT8_MAX;
	volatile uint32_t x248 = 43184U;
	uint32_t t48 = 2694U;

	t48 = (x245&(x246%(x247%x248)));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x251 = INT8_MIN;
	static uint8_t x252 = 3U;

	t49 = (x249&(x250%(x251%x252)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x265 = -7;
	static int8_t x266 = INT8_MAX;
	uint64_t x268 = 393158539LLU;
	volatile uint64_t t50 = 990262LLU;

	t50 = (x265&(x266%(x267%x268)));

	if (t50 != 121LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x269 = 10469278LLU;
	int8_t x270 = INT8_MAX;
	int64_t x271 = INT64_MAX;
	int64_t x272 = INT64_MIN;

	t51 = (x269&(x270%(x271%x272)));

	if (t51 != 30LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x277 = 9;
	static int32_t x278 = INT32_MAX;
	int16_t x279 = INT16_MIN;
	uint8_t x280 = 7U;

	t52 = (x277&(x278%(x279%x280)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x282 = -1;
	volatile int32_t x283 = INT32_MAX;
	int32_t x284 = INT32_MIN;
	int32_t t53 = 6;

	t53 = (x281&(x282%(x283%x284)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x289 = UINT64_MAX;
	volatile int32_t x290 = INT32_MIN;
	volatile int64_t x291 = -35983545476966LL;
	int16_t x292 = -11780;
	volatile uint64_t t54 = 26083885LLU;

	t54 = (x289&(x290%(x291%x292)));

	if (t54 != 18446744073709551518LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x294 = 17;
	static int16_t x295 = -5;
	int32_t t55 = -509524239;

	t55 = (x293&(x294%(x295%x296)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x305 = UINT32_MAX;
	uint64_t x306 = UINT64_MAX;
	uint8_t x307 = UINT8_MAX;
	static int8_t x308 = 2;
	static uint64_t t56 = 220LLU;

	t56 = (x305&(x306%(x307%x308)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x314 = INT32_MIN;
	uint8_t x315 = UINT8_MAX;
	int32_t t57 = -956;

	t57 = (x313&(x314%(x315%x316)));

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x317 = UINT32_MAX;
	int8_t x318 = 1;
	uint8_t x319 = 58U;
	static uint64_t x320 = 1661325LLU;
	uint64_t t58 = 639LLU;

	t58 = (x317&(x318%(x319%x320)));

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x321 = -1;
	static uint16_t x322 = 91U;
	volatile uint8_t x323 = 1U;
	int8_t x324 = 7;
	static volatile int32_t t59 = -230;

	t59 = (x321&(x322%(x323%x324)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x325 = 1941621697U;
	int16_t x326 = 1324;
	static uint64_t x327 = 18LLU;
	int16_t x328 = -1;
	volatile uint64_t t60 = 2019LLU;

	t60 = (x325&(x326%(x327%x328)));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x329 = -1;
	int16_t x330 = INT16_MIN;
	int64_t x331 = INT64_MIN;
	volatile int64_t t61 = -831395201430LL;

	t61 = (x329&(x330%(x331%x332)));

	if (t61 != -2LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x333 = 723;
	int8_t x334 = 0;
	int8_t x335 = INT8_MIN;
	static volatile uint32_t x336 = 5833469U;
	uint32_t t62 = 31872594U;

	t62 = (x333&(x334%(x335%x336)));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x337 = INT16_MAX;
	int32_t x338 = INT32_MAX;
	uint64_t x339 = 16573094278736LLU;
	int8_t x340 = INT8_MAX;
	volatile uint64_t t63 = 402089363711038LLU;

	t63 = (x337&(x338%(x339%x340)));

	if (t63 != 31LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x342 = INT64_MAX;
	int64_t x343 = INT64_MAX;
	int64_t t64 = -1LL;

	t64 = (x341&(x342%(x343%x344)));

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x345 = 45517;
	int64_t x346 = -1LL;
	int16_t x347 = INT16_MIN;
	uint64_t x348 = 13LLU;
	volatile uint64_t t65 = 818241LLU;

	t65 = (x345&(x346%(x347%x348)));

	if (t65 != 5LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x349 = INT16_MAX;
	int8_t x350 = INT8_MAX;
	int32_t x352 = 34727;
	volatile int32_t t66 = 335524;

	t66 = (x349&(x350%(x351%x352)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x353 = UINT32_MAX;
	volatile uint8_t x354 = 3U;
	int16_t x355 = -1;
	int32_t x356 = -858;

	t67 = (x353&(x354%(x355%x356)));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x357 = -1;
	int16_t x358 = -10;
	static uint16_t x360 = 7U;
	static volatile int32_t t68 = -1537217;

	t68 = (x357&(x358%(x359%x360)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x361 = -36841182;
	int64_t x363 = INT64_MIN;
	int64_t t69 = 59654362091982LL;

	t69 = (x361&(x362%(x363%x364)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x365 = 7673495U;
	uint32_t x366 = 3044926U;
	static int16_t x367 = 1;
	int64_t x368 = INT64_MIN;
	volatile int64_t t70 = 916648554824834LL;

	t70 = (x365&(x366%(x367%x368)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x371 = INT32_MIN;
	int16_t x372 = -15723;
	int32_t t71 = 151;

	t71 = (x369&(x370%(x371%x372)));

	if (t71 != 2147480052) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x373 = INT32_MAX;
	volatile uint64_t t72 = 3246131210LLU;

	t72 = (x373&(x374%(x375%x376)));

	if (t72 != 93314LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x377 = INT8_MIN;
	int8_t x379 = -31;
	static volatile int16_t x380 = INT16_MIN;

	t73 = (x377&(x378%(x379%x380)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x383 = 10;
	int32_t x384 = INT32_MIN;
	volatile int32_t t74 = INT32_MIN;

	t74 = (x381&(x382%(x383%x384)));

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x385 = INT16_MIN;
	uint16_t x387 = 4081U;
	int64_t x388 = INT64_MIN;
	volatile uint64_t t75 = 114548382775273623LLU;

	t75 = (x385&(x386%(x387%x388)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x389 = INT16_MAX;
	static uint8_t x391 = 26U;
	int16_t x392 = INT16_MIN;
	int32_t t76 = -2;

	t76 = (x389&(x390%(x391%x392)));

	if (t76 != 32744) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x393 = 3117U;
	volatile int64_t x394 = INT64_MIN;
	static volatile int64_t x396 = INT64_MIN;
	volatile int64_t t77 = 1987461567802383LL;

	t77 = (x393&(x394%(x395%x396)));

	if (t77 != 3116LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x401 = 1U;
	int64_t x402 = INT64_MAX;
	int64_t x403 = INT64_MAX;
	uint64_t x404 = 14205643978465LLU;
	static uint64_t t78 = 92LLU;

	t78 = (x401&(x402%(x403%x404)));

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x405 = INT16_MAX;
	int64_t x406 = -1LL;
	static uint16_t x407 = UINT16_MAX;

	t79 = (x405&(x406%(x407%x408)));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x410 = INT32_MIN;
	uint32_t x411 = 24970U;
	volatile uint32_t t80 = 114976U;

	t80 = (x409&(x410%(x411%x412)));

	if (t80 != 396U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x413 = INT64_MIN;
	static int32_t x414 = INT32_MIN;
	int32_t x415 = 1967039;
	static uint16_t x416 = UINT16_MAX;

	t81 = (x413&(x414%(x415%x416)));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x417 = 4834819156LLU;
	volatile int64_t x418 = -1LL;
	uint32_t x419 = 13263946U;
	static uint16_t x420 = UINT16_MAX;
	static volatile uint64_t t82 = 9027943647799607LLU;

	t82 = (x417&(x418%(x419%x420)));

	if (t82 != 4834819156LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x421 = 1981567U;
	uint16_t x422 = 986U;
	int64_t x424 = INT64_MAX;
	int64_t t83 = -234961449858388LL;

	t83 = (x421&(x422%(x423%x424)));

	if (t83 != 93LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x425 = INT32_MIN;
	int64_t x426 = -446735868LL;
	uint64_t x427 = UINT64_MAX;
	uint64_t t84 = 21LLU;

	t84 = (x425&(x426%(x427%x428)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x434 = 49085795LLU;
	int16_t x435 = INT16_MIN;
	int64_t x436 = -1290145LL;
	volatile uint64_t t85 = 48LLU;

	t85 = (x433&(x434%(x435%x436)));

	if (t85 != 49053696LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x437 = -2;
	volatile uint64_t x438 = UINT64_MAX;
	int8_t x439 = INT8_MAX;
	int32_t x440 = -3099;
	uint64_t t86 = 5823LLU;

	t86 = (x437&(x438%(x439%x440)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x441 = -1;
	static uint8_t x442 = 72U;
	volatile uint32_t x443 = 15854437U;
	uint8_t x444 = UINT8_MAX;
	uint32_t t87 = 3U;

	t87 = (x441&(x442%(x443%x444)));

	if (t87 != 5U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x449 = UINT8_MAX;
	static uint16_t x450 = UINT16_MAX;
	volatile int32_t t88 = 119;

	t88 = (x449&(x450%(x451%x452)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x453 = INT8_MIN;
	static int64_t x454 = -82LL;
	int16_t x455 = 458;

	t89 = (x453&(x454%(x455%x456)));

	if (t89 != -128LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x461 = -1;
	int32_t x462 = INT32_MIN;
	volatile int64_t x463 = INT64_MAX;
	static volatile uint64_t t90 = 166194302LLU;

	t90 = (x461&(x462%(x463%x464)));

	if (t90 != 2568LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x465 = 507U;
	int64_t x466 = 975LL;
	int16_t x467 = INT16_MIN;
	volatile int64_t x468 = INT64_MIN;
	volatile int64_t t91 = -185709377LL;

	t91 = (x465&(x466%(x467%x468)));

	if (t91 != 459LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x469 = INT64_MAX;
	int16_t x470 = -2;
	static int64_t x472 = 697370852058LL;
	volatile int64_t t92 = -303309943LL;

	t92 = (x469&(x470%(x471%x472)));

	if (t92 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x473 = INT16_MAX;
	int64_t x474 = -22LL;
	int16_t x475 = -1;
	int16_t x476 = 240;
	volatile int64_t t93 = -7936817643215LL;

	t93 = (x473&(x474%(x475%x476)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x478 = 4LL;
	int32_t x479 = INT32_MIN;
	int32_t x480 = -627438366;

	t94 = (x477&(x478%(x479%x480)));

	if (t94 != 4LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x483 = -358;

	t95 = (x481&(x482%(x483%x484)));

	if (t95 != 161LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x489 = -33;
	int16_t x490 = INT16_MIN;
	static int16_t x491 = INT16_MIN;
	int32_t t96 = -243;

	t96 = (x489&(x490%(x491%x492)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x505 = INT8_MIN;
	int16_t x507 = INT16_MIN;
	static uint32_t x508 = 15U;
	uint32_t t97 = 1065U;

	t97 = (x505&(x506%(x507%x508)));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x509 = UINT8_MAX;
	uint16_t x510 = UINT16_MAX;
	int16_t x511 = INT16_MIN;
	uint32_t t98 = 5U;

	t98 = (x509&(x510%(x511%x512)));

	if (t98 != 255U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x513 = -1;
	uint8_t x514 = UINT8_MAX;
	int32_t x515 = INT32_MIN;
	static int32_t x516 = 370435544;
	volatile int32_t t99 = -10;

	t99 = (x513&(x514%(x515%x516)));

	if (t99 != 255) { NG(); } else { ; }
	
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


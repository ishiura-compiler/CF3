#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = 39946883437LLU;
int64_t x5 = INT64_MIN;
uint32_t x7 = 203U;
uint64_t x15 = UINT64_MAX;
int8_t x33 = INT8_MIN;
int16_t x38 = 29;
int16_t x39 = INT16_MAX;
int64_t x41 = 4394347230LL;
int16_t x45 = INT16_MIN;
int16_t x48 = INT16_MIN;
int64_t t10 = -9471LL;
uint8_t x49 = UINT8_MAX;
uint8_t x52 = 9U;
volatile int32_t t11 = 355;
static uint8_t x57 = UINT8_MAX;
int8_t x60 = 1;
uint32_t x70 = 712521U;
int16_t x72 = 1085;
volatile int8_t x85 = -1;
static int64_t x87 = INT64_MIN;
static volatile int8_t x95 = 16;
uint64_t t20 = 552332946LLU;
int8_t x120 = 1;
uint8_t x122 = 6U;
static int8_t x126 = INT8_MIN;
uint32_t x127 = 162117710U;
volatile int32_t t25 = -53;
static int8_t x136 = -1;
static uint64_t t29 = UINT64_MAX;
int16_t x167 = INT16_MIN;
static volatile uint32_t t32 = 549918U;
volatile int16_t x198 = INT16_MIN;
uint16_t x199 = 459U;
static volatile int64_t x200 = -260573LL;
volatile uint16_t x203 = UINT16_MAX;
volatile int8_t x204 = INT8_MIN;
volatile int32_t t37 = -29786;
int64_t x212 = 21983371139484LL;
int16_t x215 = -352;
int64_t t40 = 7126LL;
int64_t x225 = -268911545LL;
int32_t x228 = INT32_MAX;
uint32_t x229 = UINT32_MAX;
uint8_t x231 = 2U;
int16_t x235 = INT16_MIN;
int64_t t43 = -2006799171LL;
static uint16_t x258 = 7846U;
int64_t x259 = -1968067947921340LL;
static int8_t x260 = -1;
static int8_t x263 = INT8_MAX;
static int64_t x264 = -1LL;
uint64_t x271 = 8130LLU;
uint32_t x286 = UINT32_MAX;
volatile uint64_t t50 = 154447385LLU;
volatile uint16_t x294 = UINT16_MAX;
static int32_t t51 = -257702228;
volatile uint16_t x303 = UINT16_MAX;
uint64_t x305 = 619766525473LLU;
volatile int32_t t55 = -2091;
int32_t t57 = -1982;
int64_t x333 = -4LL;
volatile int64_t t58 = -51493624LL;
int8_t x340 = INT8_MIN;
int16_t x352 = INT16_MIN;
volatile int32_t x355 = -1;
static int16_t x356 = 0;
static volatile int32_t x358 = INT32_MIN;
uint64_t x363 = 16705153909LLU;
int64_t x365 = 51LL;
volatile int8_t x367 = INT8_MIN;
static uint32_t x373 = 388316255U;
uint8_t x392 = 0U;
uint64_t x393 = 21LLU;
uint32_t x405 = 57021U;
volatile uint32_t t71 = 21336397U;
uint64_t x412 = 54849146LLU;
int8_t x415 = INT8_MAX;
int64_t x418 = 1LL;
int64_t x419 = -1LL;
volatile int64_t t74 = -15LL;
int64_t x430 = INT64_MIN;
static int8_t x431 = INT8_MIN;
uint64_t t77 = 8777884618486LLU;
uint64_t x440 = 58002649683LLU;
int64_t x441 = -1LL;
volatile uint8_t x443 = 0U;
static uint16_t x458 = 5U;
uint64_t x459 = UINT64_MAX;
uint64_t x460 = UINT64_MAX;
int32_t x469 = INT32_MIN;
uint8_t x478 = 91U;
int32_t t86 = 3208771;
static int16_t x497 = INT16_MAX;
uint32_t t89 = 31U;
uint16_t x503 = 6U;
int8_t x504 = INT8_MIN;
volatile int32_t t90 = 748966848;
volatile int8_t x522 = INT8_MIN;
int8_t x524 = INT8_MIN;
int8_t x528 = INT8_MAX;
int32_t t94 = 0;
int16_t x529 = INT16_MIN;
volatile uint64_t t95 = 35941527159333LLU;
static int8_t x547 = -1;
int32_t x548 = -1;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int32_t x2 = INT32_MIN;
	int8_t x3 = INT8_MIN;
	static uint64_t t0 = 88935LLU;

	t0 = ((x1&x2)|(x3*x4));

	if (t0 != 18446744073667037568LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = -1;
	int16_t x8 = -1;
	static volatile int64_t t1 = -1275329079949LL;

	t1 = ((x5&x6)|(x7*x8));

	if (t1 != -9223372032559808715LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -32093090543097LL;
	int32_t x10 = INT32_MIN;
	volatile int16_t x11 = INT16_MIN;
	int32_t x12 = 0;
	volatile int64_t t2 = -198676248731LL;

	t2 = ((x9&x10)|(x11*x12));

	if (t2 != -32094143119360LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 5U;
	static uint16_t x14 = UINT16_MAX;
	int32_t x16 = INT32_MAX;
	uint64_t t3 = 4LLU;

	t3 = ((x13&x14)|(x15*x16));

	if (t3 != 18446744071562067973LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MAX;
	int16_t x22 = INT16_MIN;
	volatile int32_t x23 = -1;
	int32_t x24 = 125394;
	volatile int32_t t4 = 122545;

	t4 = ((x21&x22)|(x23*x24));

	if (t4 != -125394) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x25 = UINT64_MAX;
	uint16_t x26 = UINT16_MAX;
	uint32_t x27 = 225U;
	uint64_t x28 = 235LLU;
	uint64_t t5 = 617560LLU;

	t5 = ((x25&x26)|(x27*x28));

	if (t5 != 65535LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MAX;
	static volatile int8_t x30 = INT8_MIN;
	int32_t x31 = 1;
	static int32_t x32 = -3880240;
	int32_t t6 = -198068;

	t6 = ((x29&x30)|(x31*x32));

	if (t6 != -3866672) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x34 = 5U;
	static int64_t x35 = -1LL;
	int32_t x36 = -1;
	volatile int64_t t7 = -107268LL;

	t7 = ((x33&x34)|(x35*x36));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = 3163596;
	uint32_t x40 = UINT32_MAX;
	uint32_t t8 = 12257U;

	t8 = ((x37&x38)|(x39*x40));

	if (t8 != 4294934541U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x42 = 6;
	volatile uint32_t x43 = UINT32_MAX;
	int32_t x44 = 37155949;
	volatile int64_t t9 = -1099686784578003623LL;

	t9 = ((x41&x42)|(x43*x44));

	if (t9 != 4257811351LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x46 = 60;
	static int64_t x47 = 7929LL;

	t10 = ((x45&x46)|(x47*x48));

	if (t10 != -259817472LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x50 = INT32_MAX;
	uint8_t x51 = 2U;

	t11 = ((x49&x50)|(x51*x52));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x53 = -1;
	int16_t x54 = 15500;
	int64_t x55 = INT64_MAX;
	static uint64_t x56 = UINT64_MAX;
	volatile uint64_t t12 = 2003688313299350LLU;

	t12 = ((x53&x54)|(x55*x56));

	if (t12 != 9223372036854791309LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x58 = -18321LL;
	int64_t x59 = 30469221352429564LL;
	int64_t t13 = -1545330044910LL;

	t13 = ((x57&x58)|(x59*x60));

	if (t13 != 30469221352429567LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = 93U;
	int16_t x62 = -1;
	volatile uint16_t x63 = UINT16_MAX;
	int8_t x64 = INT8_MIN;
	volatile int32_t t14 = 89;

	t14 = ((x61&x62)|(x63*x64));

	if (t14 != -8388387) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = -31235055;
	static int8_t x71 = INT8_MIN;
	volatile uint32_t t15 = 459U;

	t15 = ((x69&x70)|(x71*x72));

	if (t15 != 4294960513U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = -1LL;
	int32_t x74 = -6179313;
	int32_t x75 = 1497975;
	int8_t x76 = 34;
	static volatile int64_t t16 = -4LL;

	t16 = ((x73&x74)|(x75*x76));

	if (t16 != -5654577LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = -1;
	static int32_t x78 = INT32_MAX;
	int8_t x79 = INT8_MAX;
	uint16_t x80 = 1U;
	volatile int32_t t17 = INT32_MAX;

	t17 = ((x77&x78)|(x79*x80));

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x86 = UINT64_MAX;
	volatile uint8_t x88 = 1U;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = ((x85&x86)|(x87*x88));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x93 = 22U;
	volatile int8_t x94 = INT8_MAX;
	int32_t x96 = -186541;
	volatile int32_t t19 = 3735;

	t19 = ((x93&x94)|(x95*x96));

	if (t19 != -2984650) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x105 = UINT64_MAX;
	int8_t x106 = INT8_MAX;
	volatile uint32_t x107 = 28630U;
	static int32_t x108 = INT32_MIN;

	t20 = ((x105&x106)|(x107*x108));

	if (t20 != 127LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint16_t x113 = 22035U;
	volatile int16_t x114 = INT16_MAX;
	volatile uint8_t x115 = 39U;
	uint32_t x116 = UINT32_MAX;
	uint32_t t21 = 0U;

	t21 = ((x113&x114)|(x115*x116));

	if (t21 != 4294967259U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x117 = -1;
	volatile int8_t x118 = INT8_MAX;
	int8_t x119 = -1;
	static volatile int32_t t22 = 35;

	t22 = ((x117&x118)|(x119*x120));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x121 = -1784;
	uint64_t x123 = 284631968211725957LLU;
	uint64_t x124 = UINT64_MAX;
	uint64_t t23 = 1028873382266906739LLU;

	t23 = ((x121&x122)|(x123*x124));

	if (t23 != 18162112105497825659LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x125 = 22066U;
	volatile int8_t x128 = INT8_MIN;
	volatile uint32_t t24 = 380399723U;

	t24 = ((x125&x126)|(x127*x128));

	if (t24 != 723771136U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x129 = INT8_MIN;
	volatile uint16_t x130 = UINT16_MAX;
	int16_t x131 = INT16_MIN;
	uint8_t x132 = 0U;

	t25 = ((x129&x130)|(x131*x132));

	if (t25 != 65408) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x133 = INT8_MIN;
	uint8_t x134 = 29U;
	uint32_t x135 = UINT32_MAX;
	volatile uint32_t t26 = 3U;

	t26 = ((x133&x134)|(x135*x136));

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x137 = INT32_MAX;
	uint8_t x138 = 94U;
	uint64_t x139 = 0LLU;
	uint8_t x140 = 67U;
	volatile uint64_t t27 = 20058421032LLU;

	t27 = ((x137&x138)|(x139*x140));

	if (t27 != 94LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x145 = INT16_MIN;
	static int8_t x146 = INT8_MIN;
	static volatile int16_t x147 = INT16_MAX;
	uint32_t x148 = UINT32_MAX;
	uint32_t t28 = 2U;

	t28 = ((x145&x146)|(x147*x148));

	if (t28 != 4294934529U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x149 = -1;
	static int16_t x150 = -1;
	uint64_t x151 = 1647LLU;
	volatile uint64_t x152 = 1999LLU;

	t29 = ((x149&x150)|(x151*x152));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x157 = 3;
	volatile uint8_t x158 = 53U;
	volatile uint64_t x159 = 1276LLU;
	uint32_t x160 = 445U;
	uint64_t t30 = 423663645643LLU;

	t30 = ((x157&x158)|(x159*x160));

	if (t30 != 567821LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x161 = INT8_MIN;
	uint64_t x162 = 655516LLU;
	static volatile int16_t x163 = INT16_MIN;
	static int16_t x164 = 47;
	uint64_t t31 = 196274503257377823LLU;

	t31 = ((x161&x162)|(x163*x164));

	if (t31 != 18446744073708142720LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x165 = INT8_MAX;
	volatile int32_t x166 = -1;
	uint32_t x168 = UINT32_MAX;

	t32 = ((x165&x166)|(x167*x168));

	if (t32 != 32895U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x169 = INT64_MAX;
	uint16_t x170 = 4024U;
	int8_t x171 = 50;
	volatile uint64_t x172 = 531688198541139319LLU;
	volatile uint64_t t33 = 507373587LLU;

	t33 = ((x169&x170)|(x171*x172));

	if (t33 != 8137665853347418046LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x173 = INT32_MAX;
	volatile uint32_t x174 = 89U;
	int64_t x175 = INT64_MAX;
	int64_t x176 = -1LL;
	int64_t t34 = -1LL;

	t34 = ((x173&x174)|(x175*x176));

	if (t34 != -9223372036854775719LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x177 = INT16_MAX;
	int32_t x178 = -2;
	static uint8_t x179 = 6U;
	int16_t x180 = INT16_MIN;
	int32_t t35 = 1;

	t35 = ((x177&x178)|(x179*x180));

	if (t35 != -163842) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x197 = 24U;
	volatile int64_t t36 = -4396153LL;

	t36 = ((x197&x198)|(x199*x200));

	if (t36 != -119603007LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x201 = INT32_MAX;
	static int32_t x202 = INT32_MIN;

	t37 = ((x201&x202)|(x203*x204));

	if (t37 != -8388480) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x205 = INT16_MIN;
	static int16_t x206 = INT16_MIN;
	int16_t x207 = INT16_MIN;
	int16_t x208 = INT16_MAX;
	static volatile int32_t t38 = 11326;

	t38 = ((x205&x206)|(x207*x208));

	if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x209 = 183705;
	volatile uint16_t x210 = 29U;
	volatile int8_t x211 = 20;
	volatile int64_t t39 = -2850285115669380264LL;

	t39 = ((x209&x210)|(x211*x212));

	if (t39 != 439667422789689LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x213 = INT32_MAX;
	int32_t x214 = INT32_MIN;
	int64_t x216 = 532091135105202LL;

	t40 = ((x213&x214)|(x215*x216));

	if (t40 != -187296079557031104LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x226 = UINT64_MAX;
	volatile uint64_t x227 = UINT64_MAX;
	uint64_t t41 = 18516943251921053LLU;

	t41 = ((x225&x226)|(x227*x228));

	if (t41 != 18446744073440640071LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x230 = INT16_MAX;
	int64_t x232 = 16416249LL;
	int64_t t42 = 160355LL;

	t42 = ((x229&x230)|(x231*x232));

	if (t42 != 32833535LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x233 = UINT8_MAX;
	static int64_t x234 = INT64_MAX;
	static volatile uint8_t x236 = 23U;

	t43 = ((x233&x234)|(x235*x236));

	if (t43 != -753409LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x249 = INT16_MIN;
	int8_t x250 = INT8_MIN;
	static int8_t x251 = 4;
	uint64_t x252 = UINT64_MAX;
	volatile uint64_t t44 = 63745784081LLU;

	t44 = ((x249&x250)|(x251*x252));

	if (t44 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x257 = 110U;
	int64_t t45 = 258LL;

	t45 = ((x257&x258)|(x259*x260));

	if (t45 != 1968067947921342LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x261 = 24157884;
	int32_t x262 = -1;
	volatile int64_t t46 = -4048LL;

	t46 = ((x261&x262)|(x263*x264));

	if (t46 != -67LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x265 = -340;
	int16_t x266 = -13572;
	int8_t x267 = INT8_MIN;
	int16_t x268 = -1;
	volatile int32_t t47 = 12731841;

	t47 = ((x265&x266)|(x267*x268));

	if (t47 != -13652) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x269 = 0;
	int16_t x270 = 3189;
	uint16_t x272 = 357U;
	uint64_t t48 = 224011LLU;

	t48 = ((x269&x270)|(x271*x272));

	if (t48 != 2902410LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x273 = 0;
	static int8_t x274 = INT8_MAX;
	volatile int16_t x275 = -1;
	int8_t x276 = INT8_MAX;
	volatile int32_t t49 = -582879698;

	t49 = ((x273&x274)|(x275*x276));

	if (t49 != -127) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x285 = 2U;
	static int32_t x287 = INT32_MIN;
	static uint64_t x288 = 5451260748730719LLU;

	t50 = ((x285&x286)|(x287*x288));

	if (t50 != 13384477436452798466LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x293 = 5U;
	int16_t x295 = 0;
	static uint16_t x296 = 6U;

	t51 = ((x293&x294)|(x295*x296));

	if (t51 != 5) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x297 = 328553;
	static volatile int8_t x298 = -14;
	static int16_t x299 = INT16_MAX;
	int16_t x300 = INT16_MIN;
	volatile int32_t t52 = 511410;

	t52 = ((x297&x298)|(x299*x300));

	if (t52 != -1073380512) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x301 = INT8_MIN;
	static uint16_t x302 = 0U;
	int64_t x304 = 6479LL;
	volatile int64_t t53 = -2354855274713362105LL;

	t53 = ((x301&x302)|(x303*x304));

	if (t53 != 424601265LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x306 = 46U;
	uint64_t x307 = 94622106627LLU;
	uint16_t x308 = UINT16_MAX;
	uint64_t t54 = 5554509691053497LLU;

	t54 = ((x305&x306)|(x307*x308));

	if (t54 != 6201059757800445LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x313 = 7269;
	static uint8_t x314 = UINT8_MAX;
	uint8_t x315 = UINT8_MAX;
	int16_t x316 = -1;

	t55 = ((x313&x314)|(x315*x316));

	if (t55 != -155) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x321 = -1LL;
	int8_t x322 = INT8_MIN;
	int16_t x323 = 1147;
	int8_t x324 = INT8_MIN;
	volatile int64_t t56 = 28747350LL;

	t56 = ((x321&x322)|(x323*x324));

	if (t56 != -128LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x325 = INT16_MAX;
	int8_t x326 = 0;
	static uint8_t x327 = UINT8_MAX;
	int8_t x328 = -1;

	t57 = ((x325&x326)|(x327*x328));

	if (t57 != -255) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x334 = -4;
	static volatile uint16_t x335 = 50U;
	int32_t x336 = 462;

	t58 = ((x333&x334)|(x335*x336));

	if (t58 != -4LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x337 = UINT16_MAX;
	static int64_t x338 = INT64_MAX;
	uint16_t x339 = 7U;
	int64_t t59 = -991061205LL;

	t59 = ((x337&x338)|(x339*x340));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x345 = 4U;
	int32_t x346 = INT32_MIN;
	int64_t x347 = INT64_MIN;
	static uint64_t x348 = 8LLU;
	volatile uint64_t t60 = 249119LLU;

	t60 = ((x345&x346)|(x347*x348));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x349 = UINT32_MAX;
	uint32_t x350 = UINT32_MAX;
	int16_t x351 = INT16_MIN;
	volatile uint32_t t61 = UINT32_MAX;

	t61 = ((x349&x350)|(x351*x352));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x353 = UINT64_MAX;
	static uint16_t x354 = 15609U;
	uint64_t t62 = 5030228454842LLU;

	t62 = ((x353&x354)|(x355*x356));

	if (t62 != 15609LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x357 = UINT16_MAX;
	static int8_t x359 = -1;
	static int8_t x360 = INT8_MIN;
	int32_t t63 = 53;

	t63 = ((x357&x358)|(x359*x360));

	if (t63 != 128) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x361 = 1;
	int16_t x362 = INT16_MIN;
	volatile uint8_t x364 = 12U;
	uint64_t t64 = 1153708619798LLU;

	t64 = ((x361&x362)|(x363*x364));

	if (t64 != 200461846908LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x366 = INT8_MIN;
	static int8_t x368 = -1;
	volatile int64_t t65 = -16087976LL;

	t65 = ((x365&x366)|(x367*x368));

	if (t65 != 128LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x374 = INT64_MIN;
	static volatile int8_t x375 = -1;
	int16_t x376 = INT16_MIN;
	volatile int64_t t66 = 4398635008LL;

	t66 = ((x373&x374)|(x375*x376));

	if (t66 != 32768LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x381 = UINT32_MAX;
	volatile uint8_t x382 = 2U;
	int8_t x383 = -48;
	int8_t x384 = INT8_MAX;
	volatile uint32_t t67 = 146U;

	t67 = ((x381&x382)|(x383*x384));

	if (t67 != 4294961202U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x389 = UINT32_MAX;
	static int8_t x390 = INT8_MIN;
	static uint8_t x391 = UINT8_MAX;
	volatile uint32_t t68 = 2U;

	t68 = ((x389&x390)|(x391*x392));

	if (t68 != 4294967168U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x394 = UINT32_MAX;
	int16_t x395 = -19;
	int64_t x396 = -172183LL;
	static uint64_t t69 = 27LLU;

	t69 = ((x393&x394)|(x395*x396));

	if (t69 != 3271477LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x401 = UINT8_MAX;
	static int64_t x402 = INT64_MIN;
	volatile int8_t x403 = INT8_MAX;
	uint64_t x404 = 50815217LLU;
	uint64_t t70 = 49997643113598471LLU;

	t70 = ((x401&x402)|(x403*x404));

	if (t70 != 6453532559LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x406 = UINT8_MAX;
	volatile int16_t x407 = INT16_MIN;
	uint16_t x408 = 570U;

	t71 = ((x405&x406)|(x407*x408));

	if (t71 != 4276289725U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x409 = 3974831527897007LLU;
	int32_t x410 = 164;
	int8_t x411 = -9;
	volatile uint64_t t72 = 79301734268034995LLU;

	t72 = ((x409&x410)|(x411*x412));

	if (t72 != 18446744073215909302LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x413 = 3LLU;
	static volatile int16_t x414 = -1;
	int8_t x416 = 1;
	volatile uint64_t t73 = 3560LLU;

	t73 = ((x413&x414)|(x415*x416));

	if (t73 != 127LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x417 = INT16_MAX;
	int32_t x420 = 458732448;

	t74 = ((x417&x418)|(x419*x420));

	if (t74 != -458732447LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x421 = -1LL;
	int8_t x422 = INT8_MAX;
	int32_t x423 = 517;
	uint16_t x424 = UINT16_MAX;
	volatile int64_t t75 = -1937028872810LL;

	t75 = ((x421&x422)|(x423*x424));

	if (t75 != 33881599LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x429 = 418901894976236493LLU;
	int32_t x432 = -103;
	static volatile uint64_t t76 = 679795LLU;

	t76 = ((x429&x430)|(x431*x432));

	if (t76 != 13184LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x433 = -5159806005198772LL;
	static int32_t x434 = 46;
	int16_t x435 = -218;
	uint64_t x436 = 1034748626954684LLU;

	t77 = ((x433&x434)|(x435*x436));

	if (t77 != 18221168873033430508LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x437 = 2707;
	volatile int32_t x438 = INT32_MAX;
	static volatile int16_t x439 = INT16_MIN;
	uint64_t t78 = 39806LLU;

	t78 = ((x437&x438)|(x439*x440));

	if (t78 != 18444843442884741779LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x442 = -2191278678768991LL;
	static int8_t x444 = INT8_MAX;
	volatile int64_t t79 = -22549785LL;

	t79 = ((x441&x442)|(x443*x444));

	if (t79 != -2191278678768991LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x453 = 412U;
	int8_t x454 = INT8_MAX;
	volatile int8_t x455 = INT8_MIN;
	int64_t x456 = -300651838LL;
	volatile int64_t t80 = -4177740134LL;

	t80 = ((x453&x454)|(x455*x456));

	if (t80 != 38483435292LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x457 = 51U;
	volatile uint64_t t81 = 27828735LLU;

	t81 = ((x457&x458)|(x459*x460));

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x461 = -1;
	volatile uint64_t x462 = 11775LLU;
	int64_t x463 = -1LL;
	int8_t x464 = -2;
	uint64_t t82 = 26LLU;

	t82 = ((x461&x462)|(x463*x464));

	if (t82 != 11775LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x465 = 30U;
	volatile uint16_t x466 = UINT16_MAX;
	int8_t x467 = INT8_MAX;
	int32_t x468 = -108;
	static volatile uint32_t t83 = 24903U;

	t83 = ((x465&x466)|(x467*x468));

	if (t83 != 4294953598U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x470 = 9U;
	int8_t x471 = -2;
	volatile int64_t x472 = -477404087270640LL;
	int64_t t84 = -222127LL;

	t84 = ((x469&x470)|(x471*x472));

	if (t84 != 954808174541280LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x477 = UINT32_MAX;
	static volatile int64_t x479 = -1LL;
	uint8_t x480 = UINT8_MAX;
	volatile int64_t t85 = -402494650774977358LL;

	t85 = ((x477&x478)|(x479*x480));

	if (t85 != -165LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x485 = 7221;
	int32_t x486 = 785532726;
	volatile uint8_t x487 = UINT8_MAX;
	uint16_t x488 = 0U;

	t86 = ((x485&x486)|(x487*x488));

	if (t86 != 1076) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x489 = -3428;
	uint64_t x490 = UINT64_MAX;
	volatile uint32_t x491 = UINT32_MAX;
	static int64_t x492 = -117246046LL;
	volatile uint64_t t87 = 14059633LLU;

	t87 = ((x489&x490)|(x491*x492));

	if (t87 != 18446744073709550302LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x493 = 3788292LLU;
	int8_t x494 = INT8_MIN;
	static uint64_t x495 = UINT64_MAX;
	static int8_t x496 = -1;
	uint64_t t88 = 543LLU;

	t88 = ((x493&x494)|(x495*x496));

	if (t88 != 3788289LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x498 = -1;
	uint32_t x499 = 225649U;
	volatile uint16_t x500 = 5U;

	t89 = ((x497&x498)|(x499*x500));

	if (t89 != 1146879U) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x501 = INT16_MAX;
	uint16_t x502 = UINT16_MAX;

	t90 = ((x501&x502)|(x503*x504));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x509 = 1LL;
	int64_t x510 = 1030669LL;
	int8_t x511 = -14;
	static int8_t x512 = 2;
	int64_t t91 = -8412131961258444LL;

	t91 = ((x509&x510)|(x511*x512));

	if (t91 != -27LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x517 = 37U;
	static uint8_t x518 = 102U;
	volatile int16_t x519 = 154;
	static uint16_t x520 = UINT16_MAX;
	volatile int32_t t92 = -59;

	t92 = ((x517&x518)|(x519*x520));

	if (t92 != 10092390) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x521 = -555474511946284LL;
	int8_t x523 = INT8_MIN;
	static volatile int64_t t93 = 574758596034LL;

	t93 = ((x521&x522)|(x523*x524));

	if (t93 != -555474511929984LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x525 = 1U;
	static int32_t x526 = INT32_MAX;
	uint16_t x527 = 3U;

	t94 = ((x525&x526)|(x527*x528));

	if (t94 != 381) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x530 = INT64_MIN;
	static uint64_t x531 = UINT64_MAX;
	int64_t x532 = -1LL;

	t95 = ((x529&x530)|(x531*x532));

	if (t95 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x533 = INT64_MIN;
	volatile int16_t x534 = -1287;
	volatile int32_t x535 = -1;
	static uint8_t x536 = 1U;
	int64_t t96 = -3353LL;

	t96 = ((x533&x534)|(x535*x536));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x537 = UINT16_MAX;
	int32_t x538 = INT32_MIN;
	int16_t x539 = -13390;
	uint64_t x540 = 1390430614LLU;
	static volatile uint64_t t97 = 3031348809086679523LLU;

	t97 = ((x537&x538)|(x539*x540));

	if (t97 != 18446725455843630156LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x541 = INT8_MIN;
	int32_t x542 = 213371;
	volatile uint32_t x543 = 871U;
	volatile int16_t x544 = INT16_MAX;
	volatile uint32_t t98 = 2088699544U;

	t98 = ((x541&x542)|(x543*x544));

	if (t98 != 28540313U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x545 = -1;
	volatile int64_t x546 = INT64_MIN;
	int64_t t99 = 19275481LL;

	t99 = ((x545&x546)|(x547*x548));

	if (t99 != -9223372036854775807LL) { NG(); } else { ; }
	
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


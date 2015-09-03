#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = UINT8_MAX;
int8_t x9 = INT8_MIN;
static volatile int16_t x10 = 0;
int8_t x12 = INT8_MIN;
volatile int64_t t3 = 3687137438LL;
int16_t x40 = 5585;
volatile int8_t x41 = INT8_MIN;
volatile int64_t x47 = INT64_MIN;
int64_t t10 = 50986515467810539LL;
int64_t x49 = -4328162329902LL;
static int8_t x50 = 1;
int64_t t11 = 3927273202610720209LL;
static volatile int16_t x53 = -15;
int32_t x61 = -6492840;
int32_t x69 = 17345431;
static uint8_t x70 = 1U;
int64_t x76 = 16965498575LL;
static int32_t x79 = INT32_MAX;
int64_t x83 = 57395710518LL;
static uint32_t x87 = UINT32_MAX;
static int64_t x88 = INT64_MIN;
uint8_t x93 = 11U;
uint8_t x98 = 122U;
int16_t x99 = 1;
volatile int32_t t23 = -119;
static int8_t x102 = -1;
uint8_t x108 = 1U;
volatile uint32_t t25 = 1U;
uint8_t x126 = 2U;
int32_t x137 = 2397576;
uint8_t x139 = UINT8_MAX;
static volatile int64_t x140 = 11411353742744074LL;
uint16_t x157 = UINT16_MAX;
int8_t x160 = INT8_MAX;
volatile int16_t x162 = INT16_MAX;
uint8_t x163 = UINT8_MAX;
int32_t x181 = 860108032;
volatile int32_t x182 = INT32_MIN;
static volatile uint16_t x186 = 251U;
int32_t t39 = 944967;
static int32_t t40 = -8175696;
uint8_t x193 = 110U;
int8_t x199 = -1;
int64_t x201 = 76609LL;
static volatile uint64_t t44 = 1001935LLU;
int8_t x210 = -1;
static volatile uint64_t x213 = UINT64_MAX;
int32_t x221 = -1;
uint32_t x222 = UINT32_MAX;
uint32_t x232 = 48407U;
static uint32_t t50 = 954U;
int64_t x233 = INT64_MIN;
int64_t x236 = 172LL;
uint8_t x241 = UINT8_MAX;
int32_t x244 = -1;
int64_t t55 = -190741894LL;
uint8_t x256 = 15U;
int64_t x257 = 120236108LL;
static uint16_t x267 = 941U;
static volatile uint16_t x269 = 5U;
int16_t x274 = INT16_MIN;
uint8_t x278 = UINT8_MAX;
static volatile int32_t x281 = -1;
int16_t x298 = INT16_MAX;
int64_t x300 = INT64_MIN;
int32_t x307 = -1;
int8_t x308 = -1;
volatile uint64_t t69 = 3906LLU;
static volatile int64_t x309 = -1970491559826984710LL;
int8_t x314 = INT8_MAX;
int64_t x318 = INT64_MIN;
static int64_t x320 = INT64_MAX;
int16_t x326 = -23;
volatile int16_t x340 = INT16_MIN;
uint16_t x341 = UINT16_MAX;
int32_t x362 = INT32_MAX;
uint32_t x369 = UINT32_MAX;
uint32_t t84 = 12113049U;
static volatile int8_t x377 = 4;
int16_t x379 = INT16_MAX;
static int32_t x381 = INT32_MIN;
int32_t x383 = -1;
int64_t t89 = 1017059642754668LL;
uint64_t x394 = UINT64_MAX;
volatile int64_t t92 = -1LL;
int32_t x409 = INT32_MAX;
int64_t t95 = -48393284904573LL;
int64_t x422 = INT64_MIN;
int32_t x424 = INT32_MIN;
volatile int64_t x432 = INT64_MAX;
int32_t t98 = 4;


void f0(void) {
	volatile int64_t x1 = -1LL;
	uint64_t x2 = 35LLU;
	int8_t x3 = INT8_MAX;
	uint64_t t0 = 100127619593LLU;

	t0 = ((x1^x2)&(x3/x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MAX;
	int32_t x6 = -1;
	static int8_t x7 = 60;
	int16_t x8 = 19;
	volatile int64_t t1 = 132LL;

	t1 = ((x5^x6)&(x7/x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x11 = INT8_MAX;
	int32_t t2 = 10333;

	t2 = ((x9^x10)&(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MAX;
	int64_t x14 = -1LL;
	volatile int16_t x15 = INT16_MAX;
	int32_t x16 = 336;

	t3 = ((x13^x14)&(x15/x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = -1509875;
	int8_t x22 = INT8_MIN;
	volatile int16_t x23 = -4;
	int16_t x24 = -8;
	int32_t t4 = -25022836;

	t4 = ((x21^x22)&(x23/x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -1;
	uint8_t x26 = 76U;
	int16_t x27 = -4677;
	uint8_t x28 = 2U;
	volatile int32_t t5 = 0;

	t5 = ((x25^x26)&(x27/x28));

	if (t5 != -2414) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -1597578;
	uint32_t x30 = UINT32_MAX;
	int32_t x31 = INT32_MIN;
	uint16_t x32 = 408U;
	uint32_t t6 = 351U;

	t6 = ((x29^x30)&(x31/x32));

	if (t6 != 532608U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MIN;
	volatile int16_t x34 = INT16_MAX;
	int8_t x35 = -1;
	int64_t x36 = INT64_MIN;
	int64_t t7 = -304756LL;

	t7 = ((x33^x34)&(x35/x36));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	int32_t x38 = -1303020;
	uint64_t x39 = 8033103306904614434LLU;
	volatile uint64_t t8 = 153LLU;

	t8 = ((x37^x38)&(x39/x40));

	if (t8 != 73728LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x42 = INT8_MIN;
	int64_t x43 = INT64_MIN;
	static volatile int32_t x44 = INT32_MAX;
	volatile int64_t t9 = 1379725LL;

	t9 = ((x41^x42)&(x43/x44));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -18845010;
	int16_t x46 = -12852;
	uint16_t x48 = UINT16_MAX;

	t10 = ((x45^x46)&(x47/x48));

	if (t10 != 18841600LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x51 = -1;
	int8_t x52 = INT8_MIN;

	t11 = ((x49^x50)&(x51/x52));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x54 = INT64_MIN;
	int16_t x55 = -41;
	int8_t x56 = INT8_MIN;
	int64_t t12 = -134210101LL;

	t12 = ((x53^x54)&(x55/x56));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x57 = 36403490LLU;
	int64_t x58 = -683LL;
	int8_t x59 = 9;
	int64_t x60 = -1LL;
	volatile uint64_t t13 = 1LLU;

	t13 = ((x57^x58)&(x59/x60));

	if (t13 != 18446744073673147511LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x62 = 160U;
	static uint32_t x63 = 1233816153U;
	int16_t x64 = 17;
	uint32_t t14 = 397U;

	t14 = ((x61^x62)&(x63/x64));

	if (t14 != 68182408U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MIN;
	static int64_t x66 = -3987501LL;
	static uint32_t x67 = 101492267U;
	static volatile int32_t x68 = -1;
	int64_t t15 = 2133286LL;

	t15 = ((x65^x66)&(x67/x68));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x71 = -9;
	int8_t x72 = INT8_MIN;
	int32_t t16 = 18136;

	t16 = ((x69^x70)&(x71/x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MAX;
	int64_t x74 = 11769384LL;
	static int64_t x75 = -4377967290920862LL;
	static volatile int64_t t17 = 1LL;

	t17 = ((x73^x74)&(x75/x76));

	if (t17 != 11536853LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = 605;
	static int8_t x78 = INT8_MIN;
	int32_t x80 = INT32_MIN;
	volatile int32_t t18 = 0;

	t18 = ((x77^x78)&(x79/x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = 5;
	int8_t x82 = -1;
	uint16_t x84 = UINT16_MAX;
	int64_t t19 = -24LL;

	t19 = ((x81^x82)&(x83/x84));

	if (t19 != 875802LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x85 = INT8_MIN;
	int8_t x86 = -1;
	volatile int64_t t20 = 56850761531584LL;

	t20 = ((x85^x86)&(x87/x88));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = 215224060758858LL;
	int64_t x90 = INT64_MIN;
	int8_t x91 = INT8_MIN;
	int16_t x92 = 5;
	volatile int64_t t21 = 298638308552281LL;

	t21 = ((x89^x90)&(x91/x92));

	if (t21 != -9223156812794016958LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x94 = 5U;
	int32_t x95 = INT32_MAX;
	int16_t x96 = 134;
	volatile int32_t t22 = -104047;

	t22 = ((x93^x94)&(x95/x96));

	if (t22 != 12) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = -1;
	uint8_t x100 = 62U;

	t23 = ((x97^x98)&(x99/x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MIN;
	uint16_t x103 = 300U;
	uint64_t x104 = 86843346193183010LLU;
	uint64_t t24 = 8512282266625LLU;

	t24 = ((x101^x102)&(x103/x104));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MIN;
	static int32_t x106 = 903251057;
	volatile uint32_t x107 = 1619588U;

	t25 = ((x105^x106)&(x107/x108));

	if (t25 != 537216U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x113 = 796205315197980906LLU;
	volatile int16_t x114 = INT16_MIN;
	int8_t x115 = -1;
	int16_t x116 = INT16_MIN;
	static uint64_t t26 = 7972450151021755LLU;

	t26 = ((x113^x114)&(x115/x116));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x117 = 10U;
	int8_t x118 = -4;
	uint32_t x119 = 1457U;
	static uint16_t x120 = 60U;
	static volatile uint32_t t27 = 705792954U;

	t27 = ((x117^x118)&(x119/x120));

	if (t27 != 16U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = INT64_MIN;
	static int64_t x122 = -6163857864187379LL;
	volatile int16_t x123 = -7715;
	volatile int16_t x124 = 197;
	int64_t t28 = 36373004367LL;

	t28 = ((x121^x122)&(x123/x124));

	if (t28 != 9217208178990588425LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x125 = 2858673U;
	uint8_t x127 = UINT8_MAX;
	static int8_t x128 = -1;
	uint32_t t29 = 315307911U;

	t29 = ((x125^x126)&(x127/x128));

	if (t29 != 2858497U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x133 = 4195791818744063LL;
	int64_t x134 = -1LL;
	volatile int32_t x135 = -1;
	int16_t x136 = 293;
	volatile int64_t t30 = -1012256160517557636LL;

	t30 = ((x133^x134)&(x135/x136));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x138 = 8;
	static volatile int64_t t31 = -2074530977LL;

	t31 = ((x137^x138)&(x139/x140));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x149 = 0U;
	int16_t x150 = INT16_MAX;
	static int32_t x151 = -38111584;
	volatile int16_t x152 = INT16_MIN;
	volatile int32_t t32 = -14;

	t32 = ((x149^x150)&(x151/x152));

	if (t32 != 1163) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x153 = UINT32_MAX;
	volatile int16_t x154 = INT16_MIN;
	static int16_t x155 = -407;
	int32_t x156 = INT32_MAX;
	uint32_t t33 = 4U;

	t33 = ((x153^x154)&(x155/x156));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x158 = INT32_MAX;
	volatile int64_t x159 = -1LL;
	volatile int64_t t34 = -7942169LL;

	t34 = ((x157^x158)&(x159/x160));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x161 = -1;
	uint64_t x164 = 394LLU;
	uint64_t t35 = 18430LLU;

	t35 = ((x161^x162)&(x163/x164));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x165 = INT32_MAX;
	uint8_t x166 = 10U;
	int8_t x167 = INT8_MAX;
	int64_t x168 = INT64_MIN;
	volatile int64_t t36 = 2295857130LL;

	t36 = ((x165^x166)&(x167/x168));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x177 = 90033U;
	uint64_t x178 = UINT64_MAX;
	int8_t x179 = INT8_MAX;
	int8_t x180 = INT8_MAX;
	volatile uint64_t t37 = 34468553502LLU;

	t37 = ((x177^x178)&(x179/x180));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x183 = -1;
	int64_t x184 = INT64_MAX;
	int64_t t38 = 12LL;

	t38 = ((x181^x182)&(x183/x184));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x185 = INT16_MAX;
	int32_t x187 = INT32_MIN;
	int32_t x188 = INT32_MIN;

	t39 = ((x185^x186)&(x187/x188));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x189 = -2477;
	static volatile int8_t x190 = INT8_MAX;
	int16_t x191 = -1;
	int16_t x192 = INT16_MIN;

	t40 = ((x189^x190)&(x191/x192));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x194 = -7180;
	volatile int8_t x195 = -55;
	int64_t x196 = INT64_MIN;
	int64_t t41 = -1257LL;

	t41 = ((x193^x194)&(x195/x196));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x197 = INT32_MAX;
	volatile int64_t x198 = 15140737291619036LL;
	int8_t x200 = -1;
	int64_t t42 = -98LL;

	t42 = ((x197^x198)&(x199/x200));

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x202 = -4;
	int8_t x203 = INT8_MIN;
	static int32_t x204 = INT32_MIN;
	int64_t t43 = -757LL;

	t43 = ((x201^x202)&(x203/x204));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x205 = -3;
	int16_t x206 = 1083;
	volatile uint64_t x207 = UINT64_MAX;
	static int64_t x208 = -94379898997526700LL;

	t44 = ((x205^x206)&(x207/x208));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x209 = UINT32_MAX;
	volatile uint64_t x211 = 1025213734178213001LLU;
	int64_t x212 = INT64_MIN;
	volatile uint64_t t45 = 4609287982368689LLU;

	t45 = ((x209^x210)&(x211/x212));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x214 = INT16_MIN;
	int32_t x215 = -286631329;
	int64_t x216 = -16245918918851LL;
	uint64_t t46 = 49928485032LLU;

	t46 = ((x213^x214)&(x215/x216));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x217 = INT16_MIN;
	int8_t x218 = INT8_MIN;
	uint8_t x219 = UINT8_MAX;
	int32_t x220 = INT32_MIN;
	static int32_t t47 = 3643876;

	t47 = ((x217^x218)&(x219/x220));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x223 = INT64_MIN;
	static int16_t x224 = INT16_MIN;
	volatile int64_t t48 = 3076080117838540067LL;

	t48 = ((x221^x222)&(x223/x224));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x225 = UINT64_MAX;
	uint16_t x226 = 0U;
	uint64_t x227 = 3562986600646354059LLU;
	static int64_t x228 = 3LL;
	uint64_t t49 = 12726366988LLU;

	t49 = ((x225^x226)&(x227/x228));

	if (t49 != 1187662200215451353LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x229 = INT8_MAX;
	int32_t x230 = INT32_MIN;
	static int8_t x231 = INT8_MIN;

	t50 = ((x229^x230)&(x231/x232));

	if (t50 != 22U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x234 = 0;
	uint8_t x235 = 4U;
	int64_t t51 = -13303LL;

	t51 = ((x233^x234)&(x235/x236));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x237 = 954886U;
	static uint32_t x238 = 173193013U;
	volatile uint16_t x239 = 28931U;
	int32_t x240 = INT32_MAX;
	uint32_t t52 = 71U;

	t52 = ((x237^x238)&(x239/x240));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x242 = 28U;
	int64_t x243 = INT64_MAX;
	static volatile int64_t t53 = 34444380427LL;

	t53 = ((x241^x242)&(x243/x244));

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x245 = INT16_MIN;
	volatile uint32_t x246 = 58391557U;
	uint8_t x247 = 28U;
	static uint64_t x248 = 741734LLU;
	static uint64_t t54 = 2010617519LLU;

	t54 = ((x245^x246)&(x247/x248));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x249 = 1;
	uint8_t x250 = UINT8_MAX;
	int64_t x251 = 12204LL;
	static int8_t x252 = -1;

	t55 = ((x249^x250)&(x251/x252));

	if (t55 != 84LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x253 = UINT16_MAX;
	uint8_t x254 = 2U;
	static int8_t x255 = 0;
	int32_t t56 = 0;

	t56 = ((x253^x254)&(x255/x256));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x258 = INT64_MIN;
	volatile int32_t x259 = INT32_MIN;
	uint16_t x260 = 1608U;
	volatile int64_t t57 = -32469942712257LL;

	t57 = ((x257^x258)&(x259/x260));

	if (t57 != -9223372036734547964LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x261 = -1081237607598935LL;
	int8_t x262 = INT8_MIN;
	int32_t x263 = INT32_MAX;
	uint16_t x264 = UINT16_MAX;
	volatile int64_t t58 = 6223886349615LL;

	t58 = ((x261^x262)&(x263/x264));

	if (t58 != 32768LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x265 = UINT32_MAX;
	int8_t x266 = 14;
	static int8_t x268 = -1;
	uint32_t t59 = 0U;

	t59 = ((x265^x266)&(x267/x268));

	if (t59 != 4294966353U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x270 = 1222U;
	int16_t x271 = INT16_MIN;
	int8_t x272 = INT8_MAX;
	static volatile int32_t t60 = -5;

	t60 = ((x269^x270)&(x271/x272));

	if (t60 != 1218) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x273 = INT32_MAX;
	int64_t x275 = INT64_MAX;
	uint16_t x276 = 1058U;
	int64_t t61 = 825LL;

	t61 = ((x273^x274)&(x275/x276));

	if (t61 != 8717742081338284LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x277 = -5444897LL;
	int64_t x279 = INT64_MIN;
	int32_t x280 = INT32_MIN;
	int64_t t62 = 1736841408LL;

	t62 = ((x277^x278)&(x279/x280));

	if (t62 != 4294967296LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x282 = INT16_MIN;
	uint8_t x283 = 0U;
	int32_t x284 = -82085;
	volatile int32_t t63 = 0;

	t63 = ((x281^x282)&(x283/x284));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x285 = 33U;
	static volatile int32_t x286 = INT32_MAX;
	uint16_t x287 = UINT16_MAX;
	uint16_t x288 = UINT16_MAX;
	int32_t t64 = 0;

	t64 = ((x285^x286)&(x287/x288));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x289 = INT32_MAX;
	int8_t x290 = INT8_MIN;
	static int16_t x291 = INT16_MAX;
	int32_t x292 = 13622;
	volatile int32_t t65 = 79879733;

	t65 = ((x289^x290)&(x291/x292));

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x293 = -1;
	int8_t x294 = -5;
	volatile int8_t x295 = INT8_MAX;
	int16_t x296 = INT16_MAX;
	volatile int32_t t66 = 1;

	t66 = ((x293^x294)&(x295/x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x297 = UINT16_MAX;
	int8_t x299 = INT8_MAX;
	volatile int64_t t67 = -24436016LL;

	t67 = ((x297^x298)&(x299/x300));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x301 = UINT16_MAX;
	volatile int16_t x302 = -1;
	static volatile uint32_t x303 = UINT32_MAX;
	volatile uint16_t x304 = 33U;
	uint32_t t68 = 29138004U;

	t68 = ((x301^x302)&(x303/x304));

	if (t68 != 130088960U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x305 = 2U;
	uint64_t x306 = 16170196LLU;

	t69 = ((x305^x306)&(x307/x308));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x310 = 1U;
	static int8_t x311 = 2;
	int64_t x312 = -3LL;
	int64_t t70 = -5594693616175212LL;

	t70 = ((x309^x310)&(x311/x312));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x313 = INT16_MIN;
	int32_t x315 = INT32_MIN;
	uint32_t x316 = 1430U;
	uint32_t t71 = 2U;

	t71 = ((x313^x314)&(x315/x316));

	if (t71 != 1474600U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x317 = -1;
	int16_t x319 = INT16_MIN;
	static int64_t t72 = 11044577LL;

	t72 = ((x317^x318)&(x319/x320));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x321 = 896U;
	static int16_t x322 = INT16_MIN;
	int32_t x323 = INT32_MIN;
	int64_t x324 = INT64_MIN;
	int64_t t73 = -308446543277LL;

	t73 = ((x321^x322)&(x323/x324));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x325 = 5U;
	int8_t x327 = INT8_MIN;
	int64_t x328 = INT64_MIN;
	volatile int64_t t74 = -925607008LL;

	t74 = ((x325^x326)&(x327/x328));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x329 = -1;
	int16_t x330 = -4757;
	static uint32_t x331 = 4374719U;
	uint8_t x332 = 6U;
	uint32_t t75 = 338U;

	t75 = ((x329^x330)&(x331/x332));

	if (t75 != 20U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x333 = 26541LLU;
	volatile uint32_t x334 = 10U;
	static uint32_t x335 = 6U;
	int16_t x336 = INT16_MIN;
	volatile uint64_t t76 = 101037132346LLU;

	t76 = ((x333^x334)&(x335/x336));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x337 = 1179U;
	int64_t x338 = INT64_MIN;
	uint32_t x339 = 146U;
	static int64_t t77 = -351530212057006752LL;

	t77 = ((x337^x338)&(x339/x340));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x342 = 354796U;
	int32_t x343 = -1;
	int16_t x344 = -3;
	uint32_t t78 = 702496137U;

	t78 = ((x341^x342)&(x343/x344));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x345 = -2379266;
	uint32_t x346 = 1034491734U;
	static int8_t x347 = INT8_MAX;
	int16_t x348 = -22;
	volatile uint32_t t79 = 60612250U;

	t79 = ((x345^x346)&(x347/x348));

	if (t79 != 3262293672U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x349 = -1LL;
	uint8_t x350 = 14U;
	static int16_t x351 = INT16_MIN;
	static volatile uint32_t x352 = UINT32_MAX;
	volatile int64_t t80 = -2906068190777875LL;

	t80 = ((x349^x350)&(x351/x352));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x357 = UINT8_MAX;
	int32_t x358 = INT32_MIN;
	int32_t x359 = 3634958;
	int64_t x360 = INT64_MAX;
	int64_t t81 = 1633021302LL;

	t81 = ((x357^x358)&(x359/x360));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x361 = INT16_MIN;
	int8_t x363 = -1;
	uint64_t x364 = 876906210175015LLU;
	uint64_t t82 = 1020LLU;

	t82 = ((x361^x362)&(x363/x364));

	if (t82 != 21036LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x365 = INT64_MIN;
	uint64_t x366 = UINT64_MAX;
	int32_t x367 = INT32_MIN;
	int64_t x368 = INT64_MIN;
	uint64_t t83 = 227LLU;

	t83 = ((x365^x366)&(x367/x368));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x370 = 0U;
	static int16_t x371 = INT16_MIN;
	int16_t x372 = 185;

	t84 = ((x369^x370)&(x371/x372));

	if (t84 != 4294967119U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x373 = 23U;
	volatile uint8_t x374 = 0U;
	int16_t x375 = -6452;
	int64_t x376 = INT64_MAX;
	int64_t t85 = 12334157065341LL;

	t85 = ((x373^x374)&(x375/x376));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x378 = INT64_MIN;
	int64_t x380 = -1LL;
	static volatile int64_t t86 = INT64_MIN;

	t86 = ((x377^x378)&(x379/x380));

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x382 = INT32_MAX;
	uint8_t x384 = 6U;
	volatile int32_t t87 = -5494;

	t87 = ((x381^x382)&(x383/x384));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x385 = 8U;
	volatile int16_t x386 = 18;
	uint64_t x387 = UINT64_MAX;
	static volatile uint64_t x388 = 71874344494745426LLU;
	static uint64_t t88 = 134194816990539735LLU;

	t88 = ((x385^x386)&(x387/x388));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x389 = 58;
	uint32_t x390 = UINT32_MAX;
	int32_t x391 = INT32_MIN;
	static volatile int64_t x392 = INT64_MAX;

	t89 = ((x389^x390)&(x391/x392));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x393 = 439U;
	int16_t x395 = -7;
	int64_t x396 = 4288484320LL;
	uint64_t t90 = 10847707796276861LLU;

	t90 = ((x393^x394)&(x395/x396));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x397 = -577440LL;
	uint8_t x398 = 0U;
	int16_t x399 = -5;
	int16_t x400 = -1;
	volatile int64_t t91 = -7771003921LL;

	t91 = ((x397^x398)&(x399/x400));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x405 = INT64_MIN;
	volatile int8_t x406 = INT8_MIN;
	volatile uint32_t x407 = UINT32_MAX;
	int8_t x408 = INT8_MIN;

	t92 = ((x405^x406)&(x407/x408));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x410 = INT16_MIN;
	static uint8_t x411 = UINT8_MAX;
	int8_t x412 = INT8_MIN;
	volatile int32_t t93 = -259904340;

	t93 = ((x409^x410)&(x411/x412));

	if (t93 != -2147450881) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x413 = 2U;
	static uint64_t x414 = 6753979868460798087LLU;
	volatile uint64_t x415 = UINT64_MAX;
	static volatile uint16_t x416 = 22U;
	uint64_t t94 = 305950989031511LLU;

	t94 = ((x413^x414)&(x415/x416));

	if (t94 != 694364279738630272LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x417 = -1LL;
	uint32_t x418 = 129369U;
	uint16_t x419 = UINT16_MAX;
	int16_t x420 = INT16_MIN;

	t95 = ((x417^x418)&(x419/x420));

	if (t95 != -129370LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x421 = UINT32_MAX;
	uint8_t x423 = 0U;
	int64_t t96 = -52LL;

	t96 = ((x421^x422)&(x423/x424));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x429 = INT64_MAX;
	volatile uint8_t x430 = 34U;
	volatile int64_t x431 = INT64_MIN;
	volatile int64_t t97 = -626LL;

	t97 = ((x429^x430)&(x431/x432));

	if (t97 != 9223372036854775773LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x433 = INT16_MIN;
	static uint16_t x434 = 15U;
	static int32_t x435 = -1;
	static int8_t x436 = -3;

	t98 = ((x433^x434)&(x435/x436));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x437 = 1U;
	uint8_t x438 = 28U;
	static uint8_t x439 = UINT8_MAX;
	uint64_t x440 = UINT64_MAX;
	uint64_t t99 = 333912LLU;

	t99 = ((x437^x438)&(x439/x440));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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


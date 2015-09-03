#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
static uint32_t x7 = 99U;
uint8_t x11 = UINT8_MAX;
static int32_t x14 = 28074;
int8_t x15 = INT8_MIN;
uint8_t x16 = 14U;
volatile uint32_t t3 = 26U;
uint64_t x20 = UINT64_MAX;
static uint64_t x26 = UINT64_MAX;
int16_t x27 = INT16_MIN;
int8_t x32 = INT8_MAX;
static uint8_t x40 = UINT8_MAX;
static volatile int32_t t10 = -28;
int8_t x45 = -4;
int16_t x48 = -752;
int64_t x55 = INT64_MAX;
int16_t x56 = INT16_MAX;
int32_t x58 = -200116338;
uint64_t x62 = 119LLU;
int64_t x65 = INT64_MIN;
int64_t x66 = INT64_MIN;
static uint16_t x77 = 511U;
int16_t x78 = INT16_MIN;
uint16_t x80 = 17U;
static volatile uint64_t t17 = 49121941679869856LLU;
int32_t t18 = -7994629;
static volatile int64_t x86 = INT64_MIN;
int64_t x93 = INT64_MIN;
uint64_t x95 = UINT64_MAX;
volatile int8_t x96 = -21;
volatile uint64_t t21 = 4831568069503855046LLU;
static int8_t x121 = -3;
volatile uint64_t t26 = 1070342349833LLU;
volatile int64_t t27 = 971946817834LL;
volatile uint16_t x130 = 1U;
volatile int16_t x137 = INT16_MIN;
volatile uint32_t x140 = 102798429U;
int32_t x141 = -1681722;
int32_t x146 = -1;
volatile int32_t x149 = INT32_MIN;
static uint32_t x151 = 30U;
volatile int32_t x161 = INT32_MIN;
uint8_t x162 = UINT8_MAX;
int16_t x163 = -11;
volatile int32_t t36 = -2601487;
volatile int32_t x173 = INT32_MIN;
volatile int32_t t38 = -1294991;
volatile uint16_t x184 = UINT16_MAX;
int16_t x185 = -1;
int16_t x187 = -1;
static int8_t x188 = 0;
static uint32_t x194 = 947103U;
uint16_t x195 = 2540U;
int8_t x199 = -1;
static int16_t x202 = -1458;
int8_t x225 = -13;
uint32_t t47 = 5U;
int16_t x230 = INT16_MIN;
static int64_t x231 = -1LL;
volatile int64_t t48 = -2892LL;
static int64_t x235 = -9553314645273420LL;
int16_t x239 = -3062;
static volatile uint64_t t51 = 87864097LLU;
int32_t x247 = INT32_MIN;
uint64_t x248 = UINT64_MAX;
int16_t x255 = 1;
uint16_t x256 = 59U;
volatile uint8_t x258 = 108U;
volatile int32_t x265 = 31658425;
uint16_t x275 = 208U;
int16_t x276 = INT16_MIN;
int64_t x277 = INT64_MAX;
uint8_t x282 = UINT8_MAX;
int64_t t59 = 424585290767443LL;
int32_t x287 = INT32_MIN;
volatile uint64_t t60 = 1065107732848547LLU;
int8_t x290 = INT8_MIN;
uint32_t x292 = 25045U;
int32_t x306 = -101808763;
int16_t x307 = INT16_MIN;
int8_t x310 = INT8_MAX;
int32_t x317 = 876;
uint32_t t71 = 437263U;
int64_t x337 = INT64_MIN;
volatile int64_t t72 = -5080075LL;
uint64_t x349 = 92LLU;
int8_t x352 = INT8_MIN;
int64_t x354 = -1LL;
int8_t x360 = 22;
int64_t x363 = INT64_MAX;
uint64_t x365 = 2194396502589LLU;
uint32_t x367 = 13U;
int16_t x368 = -1;
static int64_t x374 = INT64_MIN;
static int64_t x376 = -1440764628545810LL;
static volatile int8_t x386 = -36;
static int8_t x393 = INT8_MAX;
int64_t t84 = 35236872LL;
volatile uint32_t t85 = 55701976U;
int16_t x409 = INT16_MAX;
static volatile int64_t t87 = 101770272LL;
uint8_t x414 = 80U;
int16_t x420 = INT16_MIN;
static uint8_t x425 = 46U;
uint64_t x440 = UINT64_MAX;
int32_t x450 = -1;
volatile uint64_t x467 = UINT64_MAX;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	volatile int64_t x2 = 47958053LL;
	volatile int64_t x4 = -10687447LL;
	int64_t t0 = 2LL;

	t0 = ((x1%x2)/(x3-x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1821200903LL;
	int32_t x6 = -1;
	int64_t x8 = 17477265844LL;
	int64_t t1 = -1008840422803028LL;

	t1 = ((x5%x6)/(x7-x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 54;
	static int16_t x10 = INT16_MAX;
	volatile int16_t x12 = -1;
	int32_t t2 = -2;

	t2 = ((x9%x10)/(x11-x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 221905236U;

	t3 = ((x13%x14)/(x15-x16));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 8147U;
	int32_t x18 = INT32_MAX;
	static volatile uint16_t x19 = 998U;
	uint64_t t4 = 43009303231LLU;

	t4 = ((x17%x18)/(x19-x20));

	if (t4 != 8LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -2;
	static uint8_t x22 = 14U;
	volatile uint32_t x23 = 23843937U;
	static volatile int64_t x24 = -1LL;
	volatile int64_t t5 = 190654521LL;

	t5 = ((x21%x22)/(x23-x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	volatile int64_t x28 = 29394LL;
	uint64_t t6 = 0LLU;

	t6 = ((x25%x26)/(x27-x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = 3LLU;
	volatile int32_t x30 = -1;
	uint8_t x31 = 3U;
	volatile uint64_t t7 = 12738742381LLU;

	t7 = ((x29%x30)/(x31-x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 6041818;
	int8_t x34 = INT8_MAX;
	volatile int8_t x35 = INT8_MIN;
	static int32_t x36 = INT32_MIN;
	volatile int32_t t8 = -77752050;

	t8 = ((x33%x34)/(x35-x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	uint32_t x38 = 407U;
	uint32_t x39 = 7389093U;
	static uint32_t t9 = 361440962U;

	t9 = ((x37%x38)/(x39-x40));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -1;
	int16_t x42 = 230;
	int8_t x43 = INT8_MIN;
	int32_t x44 = 4267154;

	t10 = ((x41%x42)/(x43-x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = -6;
	volatile int8_t x47 = -1;
	int32_t t11 = -21056009;

	t11 = ((x45%x46)/(x47-x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = -1;
	volatile int16_t x54 = -1;
	int64_t t12 = -129830696LL;

	t12 = ((x53%x54)/(x55-x56));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = INT8_MIN;
	int64_t x59 = INT64_MIN;
	static volatile int32_t x60 = -1057994687;
	int64_t t13 = 745418LL;

	t13 = ((x57%x58)/(x59-x60));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	int16_t x63 = INT16_MIN;
	uint16_t x64 = 2U;
	volatile uint64_t t14 = 6460020118LLU;

	t14 = ((x61%x62)/(x63-x64));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x67 = 1U;
	int32_t x68 = INT32_MAX;
	volatile int64_t t15 = -55062724LL;

	t15 = ((x65%x66)/(x67-x68));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = 1;
	int16_t x74 = INT16_MAX;
	int8_t x75 = 60;
	static uint32_t x76 = 2918897U;
	static uint32_t t16 = 1528U;

	t16 = ((x73%x74)/(x75-x76));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x79 = UINT64_MAX;

	t17 = ((x77%x78)/(x79-x80));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x81 = INT8_MIN;
	int8_t x82 = INT8_MIN;
	volatile uint16_t x83 = 6540U;
	static volatile int16_t x84 = INT16_MIN;

	t18 = ((x81%x82)/(x83-x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x85 = 49U;
	int8_t x87 = INT8_MAX;
	static int32_t x88 = -24;
	static volatile int64_t t19 = 9645917LL;

	t19 = ((x85%x86)/(x87-x88));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x89 = INT64_MAX;
	volatile int32_t x90 = 109228;
	int8_t x91 = INT8_MIN;
	int8_t x92 = -1;
	int64_t t20 = 525068LL;

	t20 = ((x89%x90)/(x91-x92));

	if (t20 != -445LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x94 = 5202199LLU;

	t21 = ((x93%x94)/(x95-x96));

	if (t21 != 125709LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = INT64_MAX;
	uint16_t x98 = UINT16_MAX;
	int16_t x99 = INT16_MAX;
	int64_t x100 = -1LL;
	int64_t t22 = -908415378589763LL;

	t22 = ((x97%x98)/(x99-x100));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x105 = -1;
	int16_t x106 = INT16_MAX;
	uint64_t x107 = 62428835684899528LLU;
	uint8_t x108 = 54U;
	static volatile uint64_t t23 = 1730926272825340LLU;

	t23 = ((x105%x106)/(x107-x108));

	if (t23 != 295LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x113 = UINT8_MAX;
	int8_t x114 = INT8_MIN;
	static int8_t x115 = INT8_MIN;
	static int8_t x116 = -1;
	volatile int32_t t24 = -15658623;

	t24 = ((x113%x114)/(x115-x116));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x117 = INT16_MIN;
	int16_t x118 = INT16_MIN;
	int32_t x119 = 2880446;
	static int8_t x120 = -18;
	static int32_t t25 = 11043;

	t25 = ((x117%x118)/(x119-x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x122 = INT8_MIN;
	volatile uint64_t x123 = 7194380312192LLU;
	static int32_t x124 = INT32_MAX;

	t26 = ((x121%x122)/(x123-x124));

	if (t26 != 2564814LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x125 = -5;
	int8_t x126 = -1;
	int32_t x127 = INT32_MIN;
	int64_t x128 = -14364256381LL;

	t27 = ((x125%x126)/(x127-x128));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = -4;
	int8_t x131 = -10;
	static int64_t x132 = -1LL;
	int64_t t28 = 411364488018697LL;

	t28 = ((x129%x130)/(x131-x132));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x138 = 69646814122166LL;
	static int32_t x139 = -18459479;
	volatile int64_t t29 = 3441215382366LL;

	t29 = ((x137%x138)/(x139-x140));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x142 = 435730258929036048LL;
	int16_t x143 = INT16_MIN;
	int32_t x144 = 12;
	int64_t t30 = -981726512LL;

	t30 = ((x141%x142)/(x143-x144));

	if (t30 != 51LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = INT8_MIN;
	static int32_t x147 = 2182;
	uint64_t x148 = 48822205LLU;
	uint64_t t31 = 38183526LLU;

	t31 = ((x145%x146)/(x147-x148));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x150 = -1;
	uint32_t x152 = 11016024U;
	uint32_t t32 = 393923U;

	t32 = ((x149%x150)/(x151-x152));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x153 = 1894;
	int32_t x154 = -1602280;
	uint32_t x155 = 936U;
	static uint8_t x156 = 1U;
	uint32_t t33 = 1681100509U;

	t33 = ((x153%x154)/(x155-x156));

	if (t33 != 2U) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x157 = INT16_MAX;
	volatile int32_t x158 = INT32_MIN;
	int16_t x159 = INT16_MAX;
	uint8_t x160 = UINT8_MAX;
	volatile int32_t t34 = -196;

	t34 = ((x157%x158)/(x159-x160));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x164 = INT8_MIN;
	volatile int32_t t35 = 330017020;

	t35 = ((x161%x162)/(x163-x164));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x165 = INT16_MIN;
	int16_t x166 = -1;
	uint8_t x167 = UINT8_MAX;
	static int8_t x168 = INT8_MIN;

	t36 = ((x165%x166)/(x167-x168));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x169 = INT32_MIN;
	uint64_t x170 = 359599616495LLU;
	volatile int16_t x171 = -63;
	int32_t x172 = INT32_MIN;
	volatile uint64_t t37 = 1807451008554835LLU;

	t37 = ((x169%x170)/(x171-x172));

	if (t37 != 31LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x174 = -1;
	static int16_t x175 = INT16_MIN;
	static int32_t x176 = INT32_MIN;

	t38 = ((x173%x174)/(x175-x176));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x181 = -1LL;
	int32_t x182 = 435;
	int8_t x183 = -50;
	static int64_t t39 = 61223842LL;

	t39 = ((x181%x182)/(x183-x184));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x186 = INT32_MAX;
	volatile int32_t t40 = -92;

	t40 = ((x185%x186)/(x187-x188));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x189 = 53U;
	volatile int32_t x190 = -105;
	uint8_t x191 = 1U;
	static int16_t x192 = INT16_MIN;
	volatile int32_t t41 = -49;

	t41 = ((x189%x190)/(x191-x192));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x193 = 0;
	int8_t x196 = -1;
	volatile uint32_t t42 = 5274895U;

	t42 = ((x193%x194)/(x195-x196));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x197 = -1;
	uint32_t x198 = 562484U;
	uint16_t x200 = 8086U;
	volatile uint32_t t43 = 1230269389U;

	t43 = ((x197%x198)/(x199-x200));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x201 = INT8_MIN;
	int64_t x203 = -1630LL;
	uint16_t x204 = 15U;
	volatile int64_t t44 = -9LL;

	t44 = ((x201%x202)/(x203-x204));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x209 = 77U;
	uint32_t x210 = UINT32_MAX;
	uint8_t x211 = UINT8_MAX;
	static int8_t x212 = -1;
	uint32_t t45 = 1703506U;

	t45 = ((x209%x210)/(x211-x212));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x221 = 7777403;
	static int32_t x222 = INT32_MIN;
	volatile int16_t x223 = -14;
	int64_t x224 = 54259039LL;
	int64_t t46 = 115645577LL;

	t46 = ((x221%x222)/(x223-x224));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x226 = -105146547;
	volatile int8_t x227 = 0;
	volatile uint32_t x228 = 28653U;

	t47 = ((x225%x226)/(x227-x228));

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x229 = INT64_MAX;
	int8_t x232 = INT8_MIN;

	t48 = ((x229%x230)/(x231-x232));

	if (t48 != 258LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x233 = 126U;
	volatile int8_t x234 = -1;
	volatile uint8_t x236 = UINT8_MAX;
	int64_t t49 = -851686013154LL;

	t49 = ((x233%x234)/(x235-x236));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x237 = INT8_MIN;
	static volatile int32_t x238 = -388748725;
	static uint8_t x240 = UINT8_MAX;
	volatile int32_t t50 = 0;

	t50 = ((x237%x238)/(x239-x240));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x241 = INT32_MIN;
	int16_t x242 = 250;
	volatile int32_t x243 = -3187705;
	uint64_t x244 = 1LLU;

	t51 = ((x241%x242)/(x243-x244));

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x245 = -1;
	int16_t x246 = INT16_MIN;
	uint64_t t52 = 1694556159314LLU;

	t52 = ((x245%x246)/(x247-x248));

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x253 = INT16_MIN;
	int8_t x254 = 2;
	int32_t t53 = 159;

	t53 = ((x253%x254)/(x255-x256));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x257 = 141U;
	uint32_t x259 = UINT32_MAX;
	static int8_t x260 = INT8_MIN;
	uint32_t t54 = 581U;

	t54 = ((x257%x258)/(x259-x260));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x266 = INT8_MIN;
	static int16_t x267 = INT16_MIN;
	volatile int8_t x268 = INT8_MAX;
	volatile int32_t t55 = -2713;

	t55 = ((x265%x266)/(x267-x268));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x269 = 171585LLU;
	int16_t x270 = INT16_MIN;
	uint64_t x271 = UINT64_MAX;
	uint16_t x272 = 7592U;
	volatile uint64_t t56 = 21LLU;

	t56 = ((x269%x270)/(x271-x272));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x273 = INT16_MIN;
	int8_t x274 = INT8_MAX;
	static int32_t t57 = 465390;

	t57 = ((x273%x274)/(x275-x276));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x278 = INT8_MIN;
	int64_t x279 = INT64_MIN;
	int32_t x280 = -247560145;
	static int64_t t58 = -23914759652627LL;

	t58 = ((x277%x278)/(x279-x280));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x281 = -1;
	volatile int64_t x283 = INT64_MIN;
	int8_t x284 = INT8_MIN;

	t59 = ((x281%x282)/(x283-x284));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x285 = UINT64_MAX;
	int16_t x286 = -1;
	static int16_t x288 = INT16_MIN;

	t60 = ((x285%x286)/(x287-x288));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x289 = -29749544764LL;
	volatile uint64_t x291 = 39LLU;
	static uint64_t t61 = 23127LLU;

	t61 = ((x289%x290)/(x291-x292));

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x293 = 248;
	int8_t x294 = -1;
	int16_t x295 = 1;
	uint16_t x296 = UINT16_MAX;
	static int32_t t62 = -69;

	t62 = ((x293%x294)/(x295-x296));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x297 = INT64_MAX;
	static int32_t x298 = 2587275;
	static int32_t x299 = -1;
	int32_t x300 = -5;
	static int64_t t63 = 8220341LL;

	t63 = ((x297%x298)/(x299-x300));

	if (t63 != 106933LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x301 = 7307U;
	int32_t x302 = INT32_MAX;
	int32_t x303 = -397019545;
	static int16_t x304 = -1;
	int32_t t64 = -113140;

	t64 = ((x301%x302)/(x303-x304));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x305 = -1LL;
	static int16_t x308 = INT16_MAX;
	volatile int64_t t65 = 31474332596LL;

	t65 = ((x305%x306)/(x307-x308));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x309 = INT32_MIN;
	uint32_t x311 = 0U;
	int32_t x312 = 212659469;
	uint32_t t66 = 19U;

	t66 = ((x309%x310)/(x311-x312));

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x313 = INT8_MAX;
	int32_t x314 = INT32_MIN;
	static int8_t x315 = INT8_MIN;
	int32_t x316 = 7;
	int32_t t67 = 174;

	t67 = ((x313%x314)/(x315-x316));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x318 = 46U;
	int16_t x319 = -1;
	int64_t x320 = INT64_MIN;
	volatile int64_t t68 = 910LL;

	t68 = ((x317%x318)/(x319-x320));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x321 = INT32_MAX;
	int16_t x322 = -102;
	static int8_t x323 = -1;
	int64_t x324 = INT64_MIN;
	volatile int64_t t69 = 598284861300545LL;

	t69 = ((x321%x322)/(x323-x324));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x329 = 11;
	volatile int16_t x330 = -1;
	static uint64_t x331 = 69174510864690448LLU;
	uint16_t x332 = 128U;
	volatile uint64_t t70 = 78702290473736LLU;

	t70 = ((x329%x330)/(x331-x332));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x333 = INT8_MIN;
	uint32_t x334 = UINT32_MAX;
	int8_t x335 = INT8_MIN;
	int8_t x336 = -1;

	t71 = ((x333%x334)/(x335-x336));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x338 = INT8_MIN;
	int32_t x339 = -1;
	static int8_t x340 = INT8_MIN;

	t72 = ((x337%x338)/(x339-x340));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x345 = INT32_MIN;
	volatile int64_t x346 = INT64_MIN;
	int64_t x347 = INT64_MAX;
	uint32_t x348 = 26601892U;
	int64_t t73 = -505383857LL;

	t73 = ((x345%x346)/(x347-x348));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x350 = 521U;
	uint16_t x351 = 0U;
	static volatile uint64_t t74 = 17022LLU;

	t74 = ((x349%x350)/(x351-x352));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x353 = INT64_MIN;
	volatile int8_t x355 = INT8_MIN;
	static int16_t x356 = INT16_MAX;
	int64_t t75 = -11323821185151563LL;

	t75 = ((x353%x354)/(x355-x356));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x357 = INT16_MAX;
	int32_t x358 = -1;
	static uint64_t x359 = 76739LLU;
	static volatile uint64_t t76 = 2076LLU;

	t76 = ((x357%x358)/(x359-x360));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x361 = 15713U;
	int32_t x362 = INT32_MAX;
	uint32_t x364 = 375U;
	volatile int64_t t77 = -2769166LL;

	t77 = ((x361%x362)/(x363-x364));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x366 = 1;
	uint64_t t78 = 3598716499045622LLU;

	t78 = ((x365%x366)/(x367-x368));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x373 = INT8_MAX;
	int32_t x375 = INT32_MIN;
	static volatile int64_t t79 = 7425560339LL;

	t79 = ((x373%x374)/(x375-x376));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x377 = 1;
	uint32_t x378 = UINT32_MAX;
	static int32_t x379 = INT32_MIN;
	static int64_t x380 = -132210LL;
	static int64_t t80 = 92617495721295663LL;

	t80 = ((x377%x378)/(x379-x380));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x381 = INT32_MIN;
	static uint32_t x382 = UINT32_MAX;
	uint32_t x383 = 117470U;
	static int8_t x384 = -1;
	volatile uint32_t t81 = 100206U;

	t81 = ((x381%x382)/(x383-x384));

	if (t81 != 18280U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x385 = 215065U;
	static int32_t x387 = -1;
	int64_t x388 = -135961812515LL;
	static volatile int64_t t82 = 3962180743567159LL;

	t82 = ((x385%x386)/(x387-x388));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x394 = 1007196268399LLU;
	int16_t x395 = -37;
	uint64_t x396 = 5LLU;
	volatile uint64_t t83 = 56669896327251LLU;

	t83 = ((x393%x394)/(x395-x396));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x397 = INT64_MAX;
	int32_t x398 = INT32_MAX;
	volatile int64_t x399 = -117LL;
	int32_t x400 = -1;

	t84 = ((x397%x398)/(x399-x400));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x401 = INT16_MAX;
	uint32_t x402 = UINT32_MAX;
	uint8_t x403 = 49U;
	int8_t x404 = 4;

	t85 = ((x401%x402)/(x403-x404));

	if (t85 != 728U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x405 = UINT8_MAX;
	int8_t x406 = -1;
	int32_t x407 = 51;
	volatile int16_t x408 = 11693;
	static volatile int32_t t86 = -1;

	t86 = ((x405%x406)/(x407-x408));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x410 = -1;
	int16_t x411 = INT16_MIN;
	static int64_t x412 = INT64_MIN;

	t87 = ((x409%x410)/(x411-x412));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x413 = INT8_MIN;
	static int64_t x415 = -13102289082LL;
	uint64_t x416 = UINT64_MAX;
	uint64_t t88 = 909201501926618716LLU;

	t88 = ((x413%x414)/(x415-x416));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x417 = INT16_MIN;
	int8_t x418 = -1;
	static int32_t x419 = -1;
	int32_t t89 = 8;

	t89 = ((x417%x418)/(x419-x420));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x421 = INT64_MIN;
	int16_t x422 = INT16_MIN;
	uint32_t x423 = 15U;
	int16_t x424 = -1;
	int64_t t90 = -185978090339LL;

	t90 = ((x421%x422)/(x423-x424));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x426 = 1636U;
	static int8_t x427 = INT8_MIN;
	int16_t x428 = -1;
	int32_t t91 = -4;

	t91 = ((x425%x426)/(x427-x428));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x429 = -841;
	uint16_t x430 = 11U;
	int64_t x431 = -8822549659343LL;
	uint16_t x432 = 12U;
	volatile int64_t t92 = -4059LL;

	t92 = ((x429%x430)/(x431-x432));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x437 = 17165483741671006LLU;
	int32_t x438 = -709961;
	int8_t x439 = INT8_MAX;
	volatile uint64_t t93 = 4131892795260LLU;

	t93 = ((x437%x438)/(x439-x440));

	if (t93 != 134105341731804LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x441 = INT32_MIN;
	uint8_t x442 = 4U;
	int32_t x443 = INT32_MIN;
	uint64_t x444 = UINT64_MAX;
	uint64_t t94 = 7409177253299661607LLU;

	t94 = ((x441%x442)/(x443-x444));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x449 = -20356556251738LL;
	int64_t x451 = -1LL;
	int8_t x452 = INT8_MIN;
	volatile int64_t t95 = 2220428802153LL;

	t95 = ((x449%x450)/(x451-x452));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x453 = INT64_MAX;
	int8_t x454 = INT8_MIN;
	volatile int32_t x455 = INT32_MIN;
	volatile int64_t x456 = -1LL;
	static int64_t t96 = 284894LL;

	t96 = ((x453%x454)/(x455-x456));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x457 = -1;
	int32_t x458 = INT32_MIN;
	uint32_t x459 = UINT32_MAX;
	uint32_t x460 = 759132942U;
	volatile uint32_t t97 = 12896636U;

	t97 = ((x457%x458)/(x459-x460));

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x461 = -1LL;
	int8_t x462 = INT8_MIN;
	int16_t x463 = -1751;
	uint8_t x464 = 0U;
	static int64_t t98 = 144400966057969LL;

	t98 = ((x461%x462)/(x463-x464));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x465 = -1LL;
	static int64_t x466 = 8806107565235754LL;
	int16_t x468 = INT16_MAX;
	uint64_t t99 = 8274198726LLU;

	t99 = ((x465%x466)/(x467-x468));

	if (t99 != 1LLU) { NG(); } else { ; }
	
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


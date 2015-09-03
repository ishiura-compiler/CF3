#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
static int32_t x10 = -8;
volatile int64_t t1 = -129601712226LL;
int32_t x26 = INT32_MIN;
int16_t x27 = INT16_MAX;
static volatile int32_t x31 = INT32_MAX;
int64_t x40 = -57897620LL;
int8_t x45 = -1;
int8_t x55 = INT8_MIN;
uint32_t x59 = 15U;
volatile int64_t x62 = 8204LL;
volatile int32_t x70 = INT32_MIN;
volatile uint64_t t14 = 62LLU;
volatile int64_t x80 = -1LL;
volatile int8_t x82 = -1;
int64_t x83 = -1LL;
int64_t x87 = INT64_MAX;
int64_t t17 = 274LL;
int64_t x98 = 108577735LL;
volatile int64_t t20 = 4042LL;
uint32_t x118 = 11447U;
uint32_t t21 = 2U;
static int64_t x124 = -1LL;
int64_t t22 = 22LL;
uint64_t t23 = 919615096327258LLU;
int8_t x133 = 0;
int32_t x135 = INT32_MIN;
volatile uint8_t x143 = 4U;
static uint8_t x146 = UINT8_MAX;
int8_t x158 = INT8_MIN;
uint8_t x173 = UINT8_MAX;
int32_t x175 = 43495;
uint8_t x176 = UINT8_MAX;
uint32_t x177 = 102U;
static volatile uint32_t t33 = 161560905U;
volatile uint64_t t34 = 11210318999197272LLU;
int16_t x191 = INT16_MAX;
volatile uint64_t t36 = 4520174382512016321LLU;
int64_t x195 = -929499650232258LL;
uint64_t x196 = UINT64_MAX;
static uint64_t x199 = 222153956826272849LLU;
static uint64_t t40 = UINT64_MAX;
int8_t x213 = INT8_MIN;
static int64_t x214 = 18555LL;
uint32_t x250 = 695922100U;
int16_t x253 = INT16_MAX;
static int64_t x264 = INT64_MAX;
int64_t x266 = -1LL;
int16_t x267 = -3132;
static int16_t x270 = -6;
int32_t x288 = -1;
volatile uint32_t t56 = 4621000U;
static uint32_t x290 = 51840227U;
uint8_t x294 = 18U;
static int64_t t58 = 0LL;
int16_t x314 = -1;
static int16_t x319 = -133;
static uint64_t t62 = 2242740798087052LLU;
uint64_t x322 = UINT64_MAX;
int32_t x324 = -2;
volatile uint64_t t63 = 2026708645561LLU;
int32_t t64 = -13;
int16_t x329 = INT16_MAX;
uint16_t x331 = UINT16_MAX;
int32_t x332 = -6;
volatile int32_t x351 = -1;
int64_t x352 = -1LL;
int64_t x353 = INT64_MAX;
int64_t x354 = 4LL;
volatile int64_t t69 = -741442466717LL;
int8_t x368 = -1;
uint32_t x378 = 18U;
volatile int16_t x410 = -464;
int64_t x411 = -7938LL;
uint8_t x436 = UINT8_MAX;
static int16_t x447 = -1;
int16_t x456 = 1;
uint32_t x457 = 417U;
int32_t x467 = -1;
int8_t x468 = INT8_MAX;
volatile int8_t x469 = -3;
volatile uint32_t x470 = UINT32_MAX;
volatile int16_t x472 = INT16_MIN;
volatile uint32_t x498 = UINT32_MAX;
int8_t x512 = INT8_MAX;
uint32_t x520 = 262617U;
uint8_t x522 = UINT8_MAX;
int16_t x524 = INT16_MAX;
static uint64_t t98 = 25157LLU;
int8_t x534 = -2;


void f0(void) {
	int8_t x2 = -1;
	int16_t x3 = -15802;
	static int32_t x4 = -412;
	volatile int32_t t0 = 57976359;

	t0 = (x1^(x2*(x3-x4)));

	if (t0 != -17378) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = 1;
	int64_t x11 = -8LL;
	int16_t x12 = -1;

	t1 = (x9^(x10*(x11-x12)));

	if (t1 != 57LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x13 = 135U;
	int64_t x14 = -54948LL;
	int8_t x15 = -1;
	int16_t x16 = INT16_MIN;
	int64_t t2 = 1767550968988LL;

	t2 = (x13^(x14*(x15-x16)));

	if (t2 != -1800481245LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	int64_t x18 = -3609221LL;
	volatile int64_t x19 = -4LL;
	static int32_t x20 = -1;
	static int64_t t3 = -1466730146931LL;

	t3 = (x17^(x18*(x19-x20)));

	if (t3 != -10827761LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x25 = INT64_MIN;
	uint32_t x28 = 207118U;
	int64_t t4 = -1125382341142LL;

	t4 = (x25^(x26*(x27-x28)));

	if (t4 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x29 = INT64_MIN;
	uint16_t x30 = 11264U;
	volatile uint32_t x32 = 99072877U;
	int64_t t5 = -35212LL;

	t5 = (x29^(x30*(x31-x32)));

	if (t5 != -9223372036120176640LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x33 = INT8_MIN;
	int16_t x34 = INT16_MAX;
	int8_t x35 = -1;
	static uint64_t x36 = 881LLU;
	uint64_t t6 = 947357695938666014LLU;

	t6 = (x33^(x34*(x35-x36)));

	if (t6 != 28900594LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = UINT16_MAX;
	static int32_t x38 = -42959155;
	int64_t x39 = 583283766LL;
	volatile int64_t t7 = -54LL;

	t7 = (x37^(x38*(x39-x40)));

	if (t7 != -27544610544352195LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x46 = 12LLU;
	int16_t x47 = -1;
	int8_t x48 = INT8_MIN;
	volatile uint64_t t8 = 31LLU;

	t8 = (x45^(x46*(x47-x48)));

	if (t8 != 18446744073709550091LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x53 = 41U;
	uint32_t x54 = 7U;
	uint16_t x56 = 0U;
	static uint32_t t9 = 30052U;

	t9 = (x53^(x54*(x55-x56)));

	if (t9 != 4294966441U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x57 = INT64_MAX;
	int32_t x58 = 1432;
	int8_t x60 = -1;
	int64_t t10 = -63LL;

	t10 = (x57^(x58*(x59-x60)));

	if (t10 != 9223372036854752895LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x61 = UINT16_MAX;
	static volatile uint8_t x63 = UINT8_MAX;
	int8_t x64 = -1;
	int64_t t11 = 134LL;

	t11 = (x61^(x62*(x63-x64)));

	if (t11 != 2159615LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x65 = UINT64_MAX;
	int64_t x66 = 11202143LL;
	int32_t x67 = -1;
	int8_t x68 = -1;
	uint64_t t12 = UINT64_MAX;

	t12 = (x65^(x66*(x67-x68)));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x69 = UINT8_MAX;
	static int32_t x71 = INT32_MIN;
	uint64_t x72 = 1712491635435LLU;
	uint64_t t13 = 66319825LLU;

	t13 = (x69^(x70*(x71-x72)));

	if (t13 != 11257399783666483455LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x73 = INT64_MAX;
	volatile int8_t x74 = INT8_MIN;
	int32_t x75 = INT32_MIN;
	uint64_t x76 = 47460886619305874LLU;

	t14 = (x73^(x74*(x75-x76)));

	if (t14 != 3148378274705716991LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x77 = 5U;
	static int64_t x78 = -1LL;
	volatile uint16_t x79 = 14U;
	static volatile int64_t t15 = -6LL;

	t15 = (x77^(x78*(x79-x80)));

	if (t15 != -12LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x81 = 32025288;
	int64_t x84 = INT64_MIN;
	static int64_t t16 = 228052235663396LL;

	t16 = (x81^(x82*(x83-x84)));

	if (t16 != -9223372036822750519LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = INT8_MIN;
	volatile int32_t x86 = -1;
	static uint16_t x88 = 76U;

	t17 = (x85^(x86*(x87-x88)));

	if (t17 != 9223372036854775757LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x97 = 1675784LLU;
	uint16_t x99 = 34U;
	static int16_t x100 = INT16_MIN;
	static volatile uint64_t t18 = 64430080303529LLU;

	t18 = (x97^(x98*(x99-x100)));

	if (t18 != 3561567294054LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x105 = 62U;
	volatile int32_t x106 = INT32_MIN;
	uint16_t x107 = 0U;
	volatile uint64_t x108 = 453907681887LLU;
	uint64_t t19 = 30LLU;

	t19 = (x105^(x106*(x107-x108)));

	if (t19 != 15528632721021599806LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x113 = INT64_MIN;
	int8_t x114 = 36;
	int16_t x115 = INT16_MIN;
	int8_t x116 = 1;

	t20 = (x113^(x114*(x115-x116)));

	if (t20 != 9223372036853596124LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint8_t x117 = UINT8_MAX;
	int32_t x119 = 944317;
	static uint16_t x120 = 31U;

	t21 = (x117^(x118*(x119-x120)));

	if (t21 != 2219307021U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x121 = INT32_MAX;
	int32_t x122 = INT32_MIN;
	int16_t x123 = INT16_MIN;

	t22 = (x121^(x122*(x123-x124)));

	if (t22 != 70368744177663LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x125 = 77696696456LLU;
	int16_t x126 = -88;
	volatile int16_t x127 = INT16_MIN;
	int64_t x128 = -1LL;

	t23 = (x125^(x126*(x127-x128)));

	if (t23 != 77699383072LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x134 = -1LL;
	int8_t x136 = -1;
	int64_t t24 = -2678838412264201993LL;

	t24 = (x133^(x134*(x135-x136)));

	if (t24 != 2147483647LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x137 = INT16_MAX;
	static uint16_t x138 = 99U;
	static volatile uint8_t x139 = 16U;
	uint16_t x140 = 3U;
	int32_t t25 = -362176644;

	t25 = (x137^(x138*(x139-x140)));

	if (t25 != 31480) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x141 = -1LL;
	uint64_t x142 = UINT64_MAX;
	uint16_t x144 = 5225U;
	uint64_t t26 = 3721266237850603264LLU;

	t26 = (x141^(x142*(x143-x144)));

	if (t26 != 18446744073709546394LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x145 = 48;
	static int64_t x147 = -1LL;
	uint32_t x148 = UINT32_MAX;
	int64_t t27 = 1295LL;

	t27 = (x145^(x146*(x147-x148)));

	if (t27 != -1095216660432LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x149 = 1U;
	int64_t x150 = -1LL;
	uint8_t x151 = UINT8_MAX;
	volatile int64_t x152 = 83319827886069996LL;
	volatile int64_t t28 = 179152425920699LL;

	t28 = (x149^(x150*(x151-x152)));

	if (t28 != 83319827886069740LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x157 = -1;
	static uint64_t x159 = 947449LLU;
	uint64_t x160 = 1643345254072LLU;
	volatile uint64_t t29 = 14LLU;

	t29 = (x157^(x158*(x159-x160)));

	if (t29 != 18446533725638303871LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x165 = INT16_MIN;
	int16_t x166 = -10620;
	uint64_t x167 = 32966763115LLU;
	static int32_t x168 = -975;
	uint64_t t30 = 1LLU;

	t30 = (x165^(x166*(x167-x168)));

	if (t30 != 350107034628584LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x169 = 543377U;
	uint32_t x170 = UINT32_MAX;
	int64_t x171 = INT64_MAX;
	uint64_t x172 = 36704907108414738LLU;
	uint64_t t31 = 2LLU;

	t31 = (x169^(x170*(x171-x172)));

	if (t31 != 6542729531822555010LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x174 = INT16_MAX;
	static volatile int32_t t32 = 38835741;

	t32 = (x173^(x174*(x175-x176)));

	if (t32 != 1416845287) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x178 = 10U;
	volatile int32_t x179 = -21;
	int8_t x180 = -11;

	t33 = (x177^(x178*(x179-x180)));

	if (t33 != 4294967290U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x181 = 3369;
	uint64_t x182 = UINT64_MAX;
	int8_t x183 = 1;
	int8_t x184 = INT8_MIN;

	t34 = (x181^(x182*(x183-x184)));

	if (t34 != 18446744073709548118LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x185 = INT8_MAX;
	static int32_t x186 = 3967867;
	int8_t x187 = INT8_MIN;
	volatile int16_t x188 = -1;
	volatile int32_t t35 = 122207;

	t35 = (x185^(x186*(x187-x188)));

	if (t35 != -503919228) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x189 = -1LL;
	uint64_t x190 = 348474374574177LLU;
	uint8_t x192 = UINT8_MAX;

	t36 = (x189^(x190*(x191-x192)));

	if (t36 != 7117145207553908991LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x193 = UINT8_MAX;
	uint16_t x194 = UINT16_MAX;
	volatile uint64_t t37 = 4609081402LLU;

	t37 = (x193^(x194*(x195-x196)));

	if (t37 != 12872216716867243838LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x197 = UINT8_MAX;
	int16_t x198 = -1;
	int8_t x200 = INT8_MAX;
	uint64_t t38 = 250878139LLU;

	t38 = (x197^(x198*(x199-x200)));

	if (t38 != 18224590116883279057LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x201 = INT64_MAX;
	static volatile int16_t x202 = INT16_MAX;
	volatile int64_t x203 = INT64_MIN;
	static volatile int64_t x204 = INT64_MIN;
	static int64_t t39 = INT64_MAX;

	t39 = (x201^(x202*(x203-x204)));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x205 = UINT64_MAX;
	int32_t x206 = INT32_MIN;
	uint32_t x207 = UINT32_MAX;
	int32_t x208 = 339375;

	t40 = (x205^(x206*(x207-x208)));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x209 = INT64_MIN;
	static int64_t x210 = 428LL;
	uint64_t x211 = UINT64_MAX;
	static int8_t x212 = INT8_MIN;
	static uint64_t t41 = 39002975442538LLU;

	t41 = (x209^(x210*(x211-x212)));

	if (t41 != 9223372036854830164LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x215 = 52327368;
	int64_t x216 = -1LL;
	volatile int64_t t42 = -55829999537LL;

	t42 = (x213^(x214*(x215-x216)));

	if (t42 != -970934331885LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x217 = -1;
	volatile int32_t x218 = -2016898;
	int8_t x219 = INT8_MIN;
	volatile int64_t x220 = 37562295LL;
	int64_t t43 = -258655341LL;

	t43 = (x217^(x218*(x219-x220)));

	if (t43 != -75759575823855LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x221 = -5372;
	int32_t x222 = -421;
	volatile uint16_t x223 = 28142U;
	int8_t x224 = INT8_MIN;
	volatile int32_t t44 = -39172010;

	t44 = (x221^(x222*(x223-x224)));

	if (t44 != 11898398) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x225 = 15LLU;
	uint32_t x226 = 198113775U;
	uint8_t x227 = UINT8_MAX;
	volatile int16_t x228 = INT16_MIN;
	volatile uint64_t t45 = 192992114LLU;

	t45 = (x225^(x226*(x227-x228)));

	if (t45 != 1076000030LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x241 = 5712572923478668LLU;
	int16_t x242 = INT16_MAX;
	volatile uint8_t x243 = UINT8_MAX;
	static int64_t x244 = -1LL;
	uint64_t t46 = 355LLU;

	t46 = (x241^(x242*(x243-x244)));

	if (t46 != 5712572919872908LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x245 = INT64_MAX;
	int16_t x246 = INT16_MIN;
	int32_t x247 = -1;
	int16_t x248 = 13037;
	int64_t t47 = -202LL;

	t47 = (x245^(x246*(x247-x248)));

	if (t47 != 9223372036427546623LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint16_t x249 = 0U;
	uint8_t x251 = 5U;
	volatile int16_t x252 = INT16_MIN;
	volatile uint32_t t48 = 5162372U;

	t48 = (x249^(x250*(x251-x252)));

	if (t48 != 1178641540U) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x254 = -1;
	static int64_t x255 = 118952976904LL;
	int64_t x256 = -6123107731062208LL;
	static int64_t t49 = -43600LL;

	t49 = (x253^(x254*(x255-x256)));

	if (t49 != -6123226684055609LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x257 = INT8_MAX;
	static int16_t x258 = INT16_MIN;
	int8_t x259 = -1;
	int8_t x260 = 0;
	volatile int32_t t50 = 35707;

	t50 = (x257^(x258*(x259-x260)));

	if (t50 != 32895) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x261 = INT8_MAX;
	volatile uint64_t x262 = UINT64_MAX;
	int16_t x263 = INT16_MAX;
	uint64_t t51 = 84488623279733LLU;

	t51 = (x261^(x262*(x263-x264)));

	if (t51 != 9223372036854743167LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x265 = INT64_MIN;
	int64_t x268 = 1346809547502LL;
	static int64_t t52 = -34130803274LL;

	t52 = (x265^(x266*(x267-x268)));

	if (t52 != -9223370690045225174LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x269 = -2;
	int64_t x271 = 890279567LL;
	int8_t x272 = INT8_MAX;
	volatile int64_t t53 = 465999037LL;

	t53 = (x269^(x270*(x271-x272)));

	if (t53 != 5341676638LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x273 = -32423694;
	static uint32_t x274 = 8120U;
	uint64_t x275 = 3LLU;
	int16_t x276 = -3045;
	volatile uint64_t t54 = 4112276769134946LLU;

	t54 = (x273^(x274*(x275-x276)));

	if (t54 != 18446744073699649074LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x281 = 1422LL;
	int16_t x282 = 0;
	volatile uint16_t x283 = UINT16_MAX;
	static uint32_t x284 = 174512449U;
	int64_t t55 = 2064028416LL;

	t55 = (x281^(x282*(x283-x284)));

	if (t55 != 1422LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x285 = INT32_MIN;
	volatile int8_t x286 = INT8_MIN;
	static uint32_t x287 = UINT32_MAX;

	t56 = (x285^(x286*(x287-x288)));

	if (t56 != 2147483648U) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x289 = INT64_MIN;
	uint16_t x291 = 3U;
	int8_t x292 = INT8_MIN;
	int64_t t57 = 5LL;

	t57 = (x289^(x290*(x291-x292)));

	if (t57 != -9223372034358673367LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x293 = -1LL;
	int16_t x295 = INT16_MAX;
	int16_t x296 = INT16_MAX;

	t58 = (x293^(x294*(x295-x296)));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x305 = INT8_MAX;
	static int16_t x306 = -3450;
	int32_t x307 = -1;
	int8_t x308 = INT8_MIN;
	volatile int32_t t59 = -25280619;

	t59 = (x305^(x306*(x307-x308)));

	if (t59 != -438267) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x309 = 6126U;
	static int32_t x310 = -647;
	uint8_t x311 = UINT8_MAX;
	uint8_t x312 = 2U;
	uint32_t t60 = 12205U;

	t60 = (x309^(x310*(x311-x312)));

	if (t60 != 4294809467U) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x313 = INT16_MIN;
	volatile int16_t x315 = INT16_MIN;
	int8_t x316 = -1;
	int32_t t61 = -179937773;

	t61 = (x313^(x314*(x315-x316)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x317 = 26476743427430LLU;
	int64_t x318 = -177745406LL;
	uint8_t x320 = UINT8_MAX;

	t62 = (x317^(x318*(x319-x320)));

	if (t62 != 26407980151198LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x321 = INT16_MIN;
	static int64_t x323 = -1LL;

	t63 = (x321^(x322*(x323-x324)));

	if (t63 != 32767LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x325 = INT16_MIN;
	int16_t x326 = INT16_MIN;
	int16_t x327 = -1;
	int8_t x328 = 17;

	t64 = (x325^(x326*(x327-x328)));

	if (t64 != -622592) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x330 = 25U;
	static int32_t t65 = 1883;

	t65 = (x329^(x330*(x331-x332)));

	if (t65 != 1671042) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x337 = -167875578799226LL;
	int32_t x338 = 254212627;
	uint16_t x339 = 3U;
	volatile uint64_t x340 = UINT64_MAX;
	static volatile uint64_t t66 = 4418447246LLU;

	t66 = (x337^(x338*(x339-x340)));

	if (t66 != 18446576197788349386LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x345 = -3202;
	uint64_t x346 = UINT64_MAX;
	int64_t x347 = -1LL;
	uint8_t x348 = 21U;
	uint64_t t67 = 801500898LLU;

	t67 = (x345^(x346*(x347-x348)));

	if (t67 != 18446744073709548392LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x349 = -3;
	int8_t x350 = -1;
	int64_t t68 = -260545305844LL;

	t68 = (x349^(x350*(x351-x352)));

	if (t68 != -3LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x355 = 14;
	int32_t x356 = INT32_MAX;

	t69 = (x353^(x354*(x355-x356)));

	if (t69 != -9223372028264841277LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x357 = INT8_MIN;
	volatile int16_t x358 = -1;
	volatile int32_t x359 = -52544;
	uint32_t x360 = 26032884U;
	uint32_t t70 = 43U;

	t70 = (x357^(x358*(x359-x360)));

	if (t70 != 4268881844U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x361 = INT8_MIN;
	int16_t x362 = INT16_MIN;
	uint32_t x363 = 0U;
	int32_t x364 = INT32_MAX;
	static volatile uint32_t t71 = 2806U;

	t71 = (x361^(x362*(x363-x364)));

	if (t71 != 32640U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x365 = UINT8_MAX;
	static volatile int8_t x366 = 0;
	int32_t x367 = INT32_MIN;
	volatile int32_t t72 = 1;

	t72 = (x365^(x366*(x367-x368)));

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x373 = 133519706186LL;
	int8_t x374 = -5;
	uint16_t x375 = 1815U;
	uint32_t x376 = 57U;
	volatile int64_t t73 = 1560634414LL;

	t73 = (x373^(x374*(x375-x376)));

	if (t73 != 137063224800LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x377 = INT16_MAX;
	volatile uint16_t x379 = UINT16_MAX;
	int16_t x380 = INT16_MIN;
	static uint32_t t74 = 342696U;

	t74 = (x377^(x378*(x379-x380)));

	if (t74 != 1736721U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x381 = -12;
	volatile uint16_t x382 = 21713U;
	static int8_t x383 = 2;
	int16_t x384 = 2;
	volatile int32_t t75 = -2751071;

	t75 = (x381^(x382*(x383-x384)));

	if (t75 != -12) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x385 = -1;
	uint32_t x386 = 733U;
	int16_t x387 = 194;
	int16_t x388 = -1;
	uint32_t t76 = 612U;

	t76 = (x385^(x386*(x387-x388)));

	if (t76 != 4294824360U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x393 = 1U;
	int16_t x394 = -1446;
	int8_t x395 = -14;
	int16_t x396 = INT16_MIN;
	int32_t t77 = -555317;

	t77 = (x393^(x394*(x395-x396)));

	if (t77 != -47362283) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x397 = UINT64_MAX;
	static int64_t x398 = 939178834LL;
	int16_t x399 = INT16_MIN;
	static int8_t x400 = -1;
	volatile uint64_t t78 = 6646554488403056509LLU;

	t78 = (x397^(x398*(x399-x400)));

	if (t78 != 30774072853677LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x409 = UINT64_MAX;
	int32_t x412 = -720;
	volatile uint64_t t79 = 310LLU;

	t79 = (x409^(x410*(x411-x412)));

	if (t79 != 18446744073706202463LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x413 = INT64_MAX;
	static volatile uint64_t x414 = 1942885LLU;
	volatile int32_t x415 = -1;
	int32_t x416 = INT32_MIN;
	volatile uint64_t t80 = 324035LLU;

	t80 = (x413^(x414*(x415-x416)));

	if (t80 != 9219199723089274212LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x417 = 0;
	volatile int64_t x418 = -1LL;
	int8_t x419 = INT8_MAX;
	int64_t x420 = INT64_MAX;
	int64_t t81 = 82470758587363865LL;

	t81 = (x417^(x418*(x419-x420)));

	if (t81 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x421 = -1;
	int8_t x422 = -1;
	int64_t x423 = -170538318LL;
	volatile int64_t x424 = -25582909918034LL;
	volatile int64_t t82 = -13710608653LL;

	t82 = (x421^(x422*(x423-x424)));

	if (t82 != 25582739379715LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x429 = 3;
	uint32_t x430 = 1713U;
	int16_t x431 = INT16_MAX;
	int32_t x432 = INT32_MAX;
	volatile uint32_t t83 = 54U;

	t83 = (x429^(x430*(x431-x432)));

	if (t83 != 2203615235U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x433 = -1;
	static volatile uint8_t x434 = 1U;
	uint8_t x435 = UINT8_MAX;
	volatile int32_t t84 = -54100;

	t84 = (x433^(x434*(x435-x436)));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x437 = -1LL;
	static uint64_t x438 = 0LLU;
	uint16_t x439 = 26036U;
	static int64_t x440 = -1LL;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = (x437^(x438*(x439-x440)));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x445 = 0U;
	int16_t x446 = INT16_MIN;
	uint8_t x448 = 1U;
	static int32_t t86 = -504922590;

	t86 = (x445^(x446*(x447-x448)));

	if (t86 != 65536) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x453 = UINT32_MAX;
	volatile int8_t x454 = 1;
	uint64_t x455 = UINT64_MAX;
	static uint64_t t87 = 172020447481212880LLU;

	t87 = (x453^(x454*(x455-x456)));

	if (t87 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x458 = 253152359476LLU;
	static uint32_t x459 = 25U;
	uint64_t x460 = 2195047960356LLU;
	volatile uint64_t t88 = 5772LLU;

	t88 = (x457^(x458*(x459-x460)));

	if (t88 != 8148155652632933477LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x465 = 13U;
	uint16_t x466 = 84U;
	uint32_t t89 = 7U;

	t89 = (x465^(x466*(x467-x468)));

	if (t89 != 4294956557U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x471 = UINT32_MAX;
	volatile uint32_t t90 = 3496U;

	t90 = (x469^(x470*(x471-x472)));

	if (t90 != 32764U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x481 = 5874907786692LLU;
	static int8_t x482 = INT8_MIN;
	uint16_t x483 = 10673U;
	static int16_t x484 = INT16_MIN;
	volatile uint64_t t91 = 49589LLU;

	t91 = (x481^(x482*(x483-x484)));

	if (t91 != 18446738198804662852LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x493 = -1;
	uint16_t x494 = 6755U;
	int32_t x495 = INT32_MAX;
	volatile uint64_t x496 = 18348976540048LLU;
	uint64_t t92 = 9245LLU;

	t92 = (x493^(x494*(x495-x496)));

	if (t92 != 123932830275988754LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x497 = UINT64_MAX;
	volatile int8_t x499 = INT8_MIN;
	static int32_t x500 = INT32_MIN;
	volatile uint64_t t93 = 388LLU;

	t93 = (x497^(x498*(x499-x500)));

	if (t93 != 18446744071562067839LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x505 = -1;
	uint64_t x506 = UINT64_MAX;
	uint8_t x507 = UINT8_MAX;
	uint64_t x508 = UINT64_MAX;
	volatile uint64_t t94 = 7078272963788491081LLU;

	t94 = (x505^(x506*(x507-x508)));

	if (t94 != 255LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x509 = 4178U;
	uint32_t x510 = 3484878U;
	int32_t x511 = INT32_MAX;
	static volatile uint32_t t95 = 55U;

	t95 = (x509^(x510*(x511-x512)));

	if (t95 != 3848898898U) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x513 = 12858698429LL;
	static volatile uint16_t x514 = 225U;
	int16_t x515 = -1;
	static int8_t x516 = 0;
	static volatile int64_t t96 = 15913LL;

	t96 = (x513^(x514*(x515-x516)));

	if (t96 != -12858698334LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x517 = INT16_MIN;
	int8_t x518 = -1;
	volatile uint32_t x519 = 1163052249U;
	uint32_t t97 = 928016U;

	t97 = (x517^(x518*(x519-x520)));

	if (t97 != 1162788096U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x521 = -1277;
	uint64_t x523 = 625349349723148LLU;

	t98 = (x521^(x522*(x523-x524)));

	if (t98 != 18287279989538503664LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x533 = 20115U;
	int16_t x535 = -1;
	static uint16_t x536 = UINT16_MAX;
	int32_t t99 = -28;

	t99 = (x533^(x534*(x535-x536)));

	if (t99 != 151187) { NG(); } else { ; }
	
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


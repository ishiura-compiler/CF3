#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x3 = 497394;
int64_t t0 = -1LL;
int64_t x6 = -1LL;
uint8_t x11 = UINT8_MAX;
int64_t x20 = -1LL;
volatile uint8_t x33 = UINT8_MAX;
volatile int64_t x37 = -1LL;
static uint16_t x39 = 4147U;
volatile int32_t x41 = -3;
int64_t x43 = INT64_MIN;
uint16_t x50 = UINT16_MAX;
uint32_t x57 = 2088U;
int64_t x61 = -15LL;
int16_t x67 = -1;
uint64_t x71 = 1829989484974LLU;
int16_t x75 = INT16_MIN;
int64_t t16 = -82148LL;
uint64_t x85 = UINT64_MAX;
volatile uint64_t t17 = 959003477228118702LLU;
int16_t x90 = INT16_MIN;
int64_t x96 = INT64_MIN;
int64_t x97 = 227LL;
volatile int8_t x98 = INT8_MIN;
int16_t x99 = INT16_MAX;
uint16_t x100 = UINT16_MAX;
volatile int64_t t22 = 56104LL;
uint64_t x115 = 1LLU;
volatile int8_t x125 = INT8_MIN;
int8_t x128 = INT8_MIN;
int16_t x136 = 1128;
uint64_t t27 = 184LLU;
volatile uint8_t x137 = 4U;
uint64_t t30 = 0LLU;
uint32_t x161 = UINT32_MAX;
static volatile uint32_t x169 = 1U;
int32_t x172 = INT32_MIN;
int32_t x179 = -1;
int64_t x180 = -1LL;
int64_t x181 = -1LL;
volatile uint8_t x185 = 43U;
volatile uint64_t x186 = 40563833LLU;
int16_t x190 = INT16_MAX;
int8_t x199 = INT8_MAX;
int8_t x210 = -4;
static volatile int8_t x211 = INT8_MAX;
static volatile int32_t x212 = INT32_MIN;
uint16_t x218 = 16147U;
uint64_t x220 = 370LLU;
static volatile int64_t x226 = 1879396420LL;
int8_t x229 = INT8_MIN;
int64_t t46 = 87029235020LL;
int64_t x244 = INT64_MAX;
uint32_t x248 = 3U;
volatile int64_t t48 = INT64_MIN;
volatile int64_t t50 = 601795LL;
int8_t x265 = -1;
volatile uint32_t x267 = UINT32_MAX;
static volatile int64_t t51 = -5674764LL;
uint64_t x269 = 24LLU;
int8_t x272 = INT8_MAX;
int64_t x278 = -122095446465896LL;
int64_t t53 = 26LL;
volatile uint64_t t56 = 8392499481630LLU;
int64_t x297 = 1LL;
static uint8_t x300 = 1U;
static uint16_t x303 = UINT16_MAX;
static volatile int8_t x311 = INT8_MIN;
static int8_t x318 = -1;
volatile int16_t x325 = -1;
volatile uint8_t x328 = UINT8_MAX;
static volatile uint32_t t66 = 15064U;
static volatile int32_t t67 = 416047;
uint64_t t68 = 1721387LLU;
uint64_t x354 = UINT64_MAX;
volatile uint8_t x356 = 1U;
int64_t x358 = -1LL;
int64_t t71 = -1307001LL;
static int8_t x374 = INT8_MIN;
int8_t x378 = INT8_MIN;
uint32_t x380 = 3306U;
volatile uint8_t x382 = UINT8_MAX;
volatile int64_t t78 = 904LL;
int32_t t79 = -44837937;
volatile int16_t x402 = INT16_MAX;
uint64_t t81 = 54696515LLU;
int32_t x432 = INT32_MAX;
int16_t x434 = INT16_MIN;
int32_t t87 = 26;
int64_t x442 = 1743712328LL;
int64_t t88 = 224179816LL;
int8_t x446 = INT8_MAX;
static volatile int32_t t93 = 281462;
uint8_t x476 = UINT8_MAX;
int64_t t96 = INT64_MIN;


void f0(void) {
	int16_t x1 = 0;
	uint32_t x2 = 881714U;
	int64_t x4 = INT64_MAX;

	t0 = (x1*(x2+(x3%x4)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint32_t x7 = 11U;
	uint8_t x8 = UINT8_MAX;
	volatile int64_t t1 = -1714111LL;

	t1 = (x5*(x6+(x7%x8)));

	if (t1 != -1280LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int16_t x10 = INT16_MIN;
	int8_t x12 = -5;
	volatile int32_t t2 = 1133629;

	t2 = (x9*(x10+(x11%x12)));

	if (t2 != 32768) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = -7;
	int16_t x14 = INT16_MIN;
	static int64_t x15 = 289LL;
	int32_t x16 = -1;
	volatile int64_t t3 = -279650712183LL;

	t3 = (x13*(x14+(x15%x16)));

	if (t3 != 229376LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	int32_t x18 = -1;
	volatile uint64_t x19 = 71046159LLU;
	volatile uint64_t t4 = 131332032882783LLU;

	t4 = (x17*(x18+(x19%x20)));

	if (t4 != 18446744073638505458LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 79491;
	int32_t x22 = -1;
	int64_t x23 = INT64_MAX;
	uint16_t x24 = UINT16_MAX;
	volatile int64_t t5 = 45479446LL;

	t5 = (x21*(x22+(x23%x24)));

	if (t5 != 2604602106LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x29 = INT8_MAX;
	int64_t x30 = 688624LL;
	uint64_t x31 = UINT64_MAX;
	int8_t x32 = INT8_MAX;
	static volatile uint64_t t6 = 331622877950516190LLU;

	t6 = (x29*(x30+(x31%x32)));

	if (t6 != 87455375LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x34 = 3551U;
	volatile int32_t x35 = INT32_MIN;
	int8_t x36 = -1;
	volatile int32_t t7 = -2;

	t7 = (x33*(x34+(x35%x36)));

	if (t7 != 905505) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x38 = 32544695440305904LLU;
	static int32_t x40 = -1;
	volatile uint64_t t8 = 47421931183224LLU;

	t8 = (x37*(x38+(x39%x40)));

	if (t8 != 18414199378269245712LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x42 = INT32_MAX;
	volatile uint32_t x44 = UINT32_MAX;
	int64_t t9 = -3494431761423313LL;

	t9 = (x41*(x42+(x43%x44)));

	if (t9 != 3LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MIN;
	uint32_t x51 = 672U;
	uint8_t x52 = 1U;
	volatile uint32_t t10 = 4451U;

	t10 = (x49*(x50+(x51%x52)));

	if (t10 != 2147516416U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x58 = INT16_MIN;
	uint16_t x59 = 5275U;
	static volatile int32_t x60 = -63;
	uint32_t t11 = 453630480U;

	t11 = (x57*(x58+(x59%x60)));

	if (t11 != 4226643760U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x62 = 1U;
	uint64_t x63 = UINT64_MAX;
	int64_t x64 = 3686186848786LL;
	uint64_t t12 = 4869482290068783735LLU;

	t12 = (x61*(x62+(x63%x64)));

	if (t12 != 18446692165130192896LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x65 = UINT64_MAX;
	static int8_t x66 = 3;
	volatile uint16_t x68 = 376U;
	static volatile uint64_t t13 = 16679LLU;

	t13 = (x65*(x66+(x67%x68)));

	if (t13 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = INT64_MIN;
	int64_t x70 = 6316732042179160LL;
	int16_t x72 = -50;
	volatile uint64_t t14 = 579980309593886LLU;

	t14 = (x69*(x70+(x71%x72)));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x73 = UINT64_MAX;
	volatile int64_t x74 = INT64_MAX;
	uint32_t x76 = 4U;
	static uint64_t t15 = 184LLU;

	t15 = (x73*(x74+(x75%x76)));

	if (t15 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x81 = -1;
	volatile uint32_t x82 = 523855U;
	volatile int64_t x83 = -1LL;
	uint8_t x84 = 12U;

	t16 = (x81*(x82+(x83%x84)));

	if (t16 != -523854LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x86 = -1;
	static int8_t x87 = INT8_MIN;
	uint64_t x88 = 95163985LLU;

	t17 = (x85*(x86+(x87%x88)));

	if (t17 != 18446744073676094494LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x89 = INT16_MIN;
	volatile int32_t x91 = INT32_MAX;
	volatile int32_t x92 = 5;
	volatile int32_t t18 = 1434;

	t18 = (x89*(x90+(x91%x92)));

	if (t18 != 1073676288) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = INT8_MIN;
	volatile int32_t x94 = 315;
	volatile int8_t x95 = INT8_MAX;
	int64_t t19 = -21480LL;

	t19 = (x93*(x94+(x95%x96)));

	if (t19 != -56576LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t t20 = 15604409838797004LL;

	t20 = (x97*(x98+(x99%x100)));

	if (t20 != 7409053LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = -29;
	static volatile uint64_t x102 = 77844444382LLU;
	int64_t x103 = -1LL;
	int64_t x104 = INT64_MIN;
	uint64_t t21 = 30819LLU;

	t21 = (x101*(x102+(x103%x104)));

	if (t21 != 18446741816220664567LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x109 = -162LL;
	int16_t x110 = INT16_MAX;
	int16_t x111 = -1;
	uint8_t x112 = UINT8_MAX;

	t22 = (x109*(x110+(x111%x112)));

	if (t22 != -5308092LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x113 = INT8_MIN;
	int64_t x114 = INT64_MIN;
	int32_t x116 = 275481402;
	volatile uint64_t t23 = 2019821LLU;

	t23 = (x113*(x114+(x115%x116)));

	if (t23 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x117 = -196;
	uint64_t x118 = 8301329806822761LLU;
	int8_t x119 = 0;
	int32_t x120 = INT32_MIN;
	volatile uint64_t t24 = 100629880100729826LLU;

	t24 = (x117*(x118+(x119%x120)));

	if (t24 != 16819683431572290460LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x121 = UINT16_MAX;
	static volatile int8_t x122 = INT8_MAX;
	static uint16_t x123 = 115U;
	volatile uint32_t x124 = 60432U;
	volatile uint32_t t25 = 361U;

	t25 = (x121*(x122+(x123%x124)));

	if (t25 != 15859470U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x126 = INT8_MIN;
	uint64_t x127 = 565583211935298423LLU;
	volatile uint64_t t26 = 7471593691185271257LLU;

	t26 = (x125*(x126+(x127%x128)));

	if (t26 != 1392325167120024704LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x133 = 1LLU;
	static int16_t x134 = INT16_MIN;
	int64_t x135 = -1LL;

	t27 = (x133*(x134+(x135%x136)));

	if (t27 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x138 = 1LLU;
	uint32_t x139 = 30778U;
	static int8_t x140 = 2;
	volatile uint64_t t28 = 100829855816244741LLU;

	t28 = (x137*(x138+(x139%x140)));

	if (t28 != 4LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x141 = -1LL;
	uint8_t x142 = UINT8_MAX;
	volatile uint64_t x143 = UINT64_MAX;
	static int32_t x144 = 42800;
	uint64_t t29 = 96287LLU;

	t29 = (x141*(x142+(x143%x144)));

	if (t29 != 18446744073709515746LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x149 = 118328U;
	uint8_t x150 = 13U;
	int32_t x151 = INT32_MAX;
	uint64_t x152 = UINT64_MAX;

	t30 = (x149*(x150+(x151%x152)));

	if (t30 != 254107446520480LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x162 = -1;
	volatile int32_t x163 = INT32_MIN;
	int32_t x164 = INT32_MIN;
	uint32_t t31 = 960U;

	t31 = (x161*(x162+(x163%x164)));

	if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x170 = INT64_MIN;
	int32_t x171 = 528387;
	volatile int64_t t32 = 71667160111007830LL;

	t32 = (x169*(x170+(x171%x172)));

	if (t32 != -9223372036854247421LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x173 = UINT16_MAX;
	int32_t x174 = INT32_MIN;
	static int64_t x175 = INT64_MIN;
	int32_t x176 = INT32_MIN;
	int64_t t33 = -46529602LL;

	t33 = (x173*(x174+(x175%x176)));

	if (t33 != -140735340871680LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x177 = -1;
	int32_t x178 = INT32_MIN;
	volatile int64_t t34 = -1235800034903LL;

	t34 = (x177*(x178+(x179%x180)));

	if (t34 != 2147483648LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x182 = INT64_MAX;
	static int8_t x183 = 1;
	static uint64_t x184 = UINT64_MAX;
	uint64_t t35 = 3157369074235562556LLU;

	t35 = (x181*(x182+(x183%x184)));

	if (t35 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x187 = UINT8_MAX;
	int32_t x188 = -1;
	volatile uint64_t t36 = 356LLU;

	t36 = (x185*(x186+(x187%x188)));

	if (t36 != 1744244819LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x189 = 3U;
	uint32_t x191 = UINT32_MAX;
	int64_t x192 = -359748689874816LL;
	int64_t t37 = -1078044864911902LL;

	t37 = (x189*(x190+(x191%x192)));

	if (t37 != 12885000186LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x193 = UINT32_MAX;
	volatile uint32_t x194 = 634761536U;
	int16_t x195 = INT16_MIN;
	volatile uint8_t x196 = 26U;
	volatile uint32_t t38 = 233348494U;

	t38 = (x193*(x194+(x195%x196)));

	if (t38 != 3660205768U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x197 = 1LL;
	int16_t x198 = -9;
	int8_t x200 = INT8_MIN;
	int64_t t39 = -1538LL;

	t39 = (x197*(x198+(x199%x200)));

	if (t39 != 118LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x201 = INT8_MIN;
	volatile int64_t x202 = -1LL;
	int64_t x203 = INT64_MIN;
	int32_t x204 = INT32_MIN;
	volatile int64_t t40 = -85LL;

	t40 = (x201*(x202+(x203%x204)));

	if (t40 != 128LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x209 = 866LL;
	volatile int64_t t41 = -462779053114145308LL;

	t41 = (x209*(x210+(x211%x212)));

	if (t41 != 106518LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x213 = -1;
	volatile int64_t x214 = -1LL;
	int32_t x215 = INT32_MAX;
	int32_t x216 = -2768048;
	int64_t t42 = -1LL;

	t42 = (x213*(x214+(x215%x216)));

	if (t42 != -2246446LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x217 = UINT32_MAX;
	static int64_t x219 = 9297LL;
	static volatile uint64_t t43 = 1494LLU;

	t43 = (x217*(x218+(x219%x220)));

	if (t43 != 69552700375230LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x225 = 872U;
	static uint32_t x227 = 3U;
	uint16_t x228 = 127U;
	int64_t t44 = -77LL;

	t44 = (x225*(x226+(x227%x228)));

	if (t44 != 1638833680856LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x230 = INT8_MIN;
	int64_t x231 = -254568433LL;
	int16_t x232 = -1;
	volatile int64_t t45 = -66012646038416LL;

	t45 = (x229*(x230+(x231%x232)));

	if (t45 != 16384LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x237 = UINT16_MAX;
	int8_t x238 = 2;
	static int64_t x239 = -1903127603LL;
	uint32_t x240 = UINT32_MAX;

	t46 = (x237*(x238+(x239%x240)));

	if (t46 != -124721467331535LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x241 = 6961;
	int64_t x242 = 4794LL;
	static int32_t x243 = -1;
	volatile int64_t t47 = 11979532085605185LL;

	t47 = (x241*(x242+(x243%x244)));

	if (t47 != 33364073LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x245 = 1;
	static int64_t x246 = INT64_MIN;
	int32_t x247 = -1;

	t48 = (x245*(x246+(x247%x248)));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x253 = 0;
	static int16_t x254 = 114;
	int8_t x255 = -1;
	int32_t x256 = INT32_MAX;
	int32_t t49 = 4881403;

	t49 = (x253*(x254+(x255%x256)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x257 = -571LL;
	static int8_t x258 = 51;
	static uint32_t x259 = UINT32_MAX;
	uint16_t x260 = UINT16_MAX;

	t50 = (x257*(x258+(x259%x260)));

	if (t50 != -29121LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x266 = INT64_MIN;
	volatile int64_t x268 = INT64_MIN;

	t51 = (x265*(x266+(x267%x268)));

	if (t51 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x270 = UINT32_MAX;
	int32_t x271 = -1;
	volatile uint64_t t52 = 11880368LLU;

	t52 = (x269*(x270+(x271%x272)));

	if (t52 != 103079215056LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x277 = INT8_MIN;
	int32_t x279 = -11075;
	volatile uint32_t x280 = 66873127U;

	t53 = (x277*(x278+(x279%x280)));

	if (t53 != 15628215217894784LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x281 = -1;
	int8_t x282 = INT8_MIN;
	volatile int16_t x283 = INT16_MIN;
	int16_t x284 = -1;
	volatile int32_t t54 = 8767068;

	t54 = (x281*(x282+(x283%x284)));

	if (t54 != 128) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x289 = -1;
	int8_t x290 = 1;
	uint32_t x291 = UINT32_MAX;
	int64_t x292 = INT64_MIN;
	static volatile int64_t t55 = 10LL;

	t55 = (x289*(x290+(x291%x292)));

	if (t55 != -4294967296LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x293 = INT8_MAX;
	static int32_t x294 = INT32_MAX;
	int64_t x295 = 1748465455302322LL;
	uint64_t x296 = 1007545117974LLU;

	t56 = (x293*(x294+(x295%x296)));

	if (t56 != 47856533837033LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x298 = -1;
	volatile int64_t x299 = -188379740707901LL;
	int64_t t57 = 581650258284320934LL;

	t57 = (x297*(x298+(x299%x300)));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x301 = UINT8_MAX;
	int16_t x302 = INT16_MIN;
	int8_t x304 = INT8_MAX;
	volatile int32_t t58 = -34262;

	t58 = (x301*(x302+(x303%x304)));

	if (t58 != -8355075) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x305 = -1LL;
	int16_t x306 = INT16_MAX;
	volatile int32_t x307 = -1;
	uint32_t x308 = 3073701U;
	static int64_t t59 = -68372329800LL;

	t59 = (x305*(x306+(x307%x308)));

	if (t59 != -1039765LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x309 = -14251538095615LL;
	uint32_t x310 = 946U;
	volatile int64_t x312 = INT64_MIN;
	static volatile int64_t t60 = -866849486920841936LL;

	t60 = (x309*(x310+(x311%x312)));

	if (t60 != -11657758162213070LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x313 = 13251U;
	static int32_t x314 = -1;
	static uint32_t x315 = UINT32_MAX;
	static volatile int32_t x316 = INT32_MIN;
	static volatile uint32_t t61 = 815635925U;

	t61 = (x313*(x314+(x315%x316)));

	if (t61 != 2147457146U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x317 = UINT32_MAX;
	volatile int64_t x319 = INT64_MAX;
	int8_t x320 = -38;
	static volatile int64_t t62 = 4451804197LL;

	t62 = (x317*(x318+(x319%x320)));

	if (t62 != 68719476720LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x321 = -1;
	int64_t x322 = -1LL;
	int16_t x323 = -2;
	static int32_t x324 = INT32_MAX;
	volatile int64_t t63 = 5279LL;

	t63 = (x321*(x322+(x323%x324)));

	if (t63 != 3LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x326 = 84138LLU;
	int32_t x327 = 261538;
	volatile uint64_t t64 = 1416LLU;

	t64 = (x325*(x326+(x327%x328)));

	if (t64 != 18446744073709467315LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x329 = INT8_MIN;
	static uint32_t x330 = 1869654U;
	uint8_t x331 = 2U;
	uint16_t x332 = 1U;
	volatile uint32_t t65 = 630U;

	t65 = (x329*(x330+(x331%x332)));

	if (t65 != 4055651584U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x333 = 240U;
	int8_t x334 = INT8_MAX;
	static int32_t x335 = -1;
	static volatile int8_t x336 = 15;

	t66 = (x333*(x334+(x335%x336)));

	if (t66 != 30240U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x337 = INT16_MIN;
	int8_t x338 = INT8_MAX;
	int16_t x339 = INT16_MIN;
	int32_t x340 = -1633;

	t67 = (x337*(x338+(x339%x340)));

	if (t67 != -622592) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x345 = 432349498LLU;
	int32_t x346 = INT32_MIN;
	int8_t x347 = 1;
	static int8_t x348 = INT8_MAX;

	t68 = (x345*(x346+(x347%x348)));

	if (t68 != 17518280596965892410LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x349 = UINT8_MAX;
	int16_t x350 = -1;
	volatile int64_t x351 = -15LL;
	uint16_t x352 = 8U;
	volatile int64_t t69 = 28637LL;

	t69 = (x349*(x350+(x351%x352)));

	if (t69 != -2040LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x353 = INT8_MIN;
	int32_t x355 = 235;
	static volatile uint64_t t70 = 255343LLU;

	t70 = (x353*(x354+(x355%x356)));

	if (t70 != 128LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x357 = -1;
	int8_t x359 = INT8_MIN;
	int16_t x360 = -3053;

	t71 = (x357*(x358+(x359%x360)));

	if (t71 != 129LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x365 = 9U;
	int16_t x366 = INT16_MIN;
	static volatile int8_t x367 = INT8_MAX;
	uint8_t x368 = 31U;
	int32_t t72 = -15;

	t72 = (x365*(x366+(x367%x368)));

	if (t72 != -294885) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x369 = UINT8_MAX;
	int8_t x370 = -1;
	uint32_t x371 = UINT32_MAX;
	uint16_t x372 = 6U;
	volatile uint32_t t73 = 57693U;

	t73 = (x369*(x370+(x371%x372)));

	if (t73 != 510U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x373 = 264LL;
	static int64_t x375 = INT64_MIN;
	int32_t x376 = -1553475;
	static int64_t t74 = 1259LL;

	t74 = (x373*(x374+(x375%x376)));

	if (t74 != -213479904LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x377 = INT32_MIN;
	int64_t x379 = -1LL;
	static int64_t t75 = 53226919LL;

	t75 = (x377*(x378+(x379%x380)));

	if (t75 != 277025390592LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x381 = 6546822857LLU;
	int16_t x383 = INT16_MIN;
	int16_t x384 = INT16_MIN;
	volatile uint64_t t76 = 498652701409LLU;

	t76 = (x381*(x382+(x383%x384)));

	if (t76 != 1669439828535LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x385 = 48U;
	static int32_t x386 = -1;
	int8_t x387 = INT8_MIN;
	volatile int64_t x388 = -20852680LL;
	volatile int64_t t77 = -1408968569760218086LL;

	t77 = (x385*(x386+(x387%x388)));

	if (t77 != -6192LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x389 = 2;
	uint8_t x390 = 6U;
	static int64_t x391 = INT64_MAX;
	static int32_t x392 = -1;

	t78 = (x389*(x390+(x391%x392)));

	if (t78 != 12LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x393 = 1U;
	int16_t x394 = INT16_MIN;
	static int16_t x395 = INT16_MIN;
	static int16_t x396 = INT16_MAX;

	t79 = (x393*(x394+(x395%x396)));

	if (t79 != -32769) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x397 = 20763867LL;
	int32_t x398 = INT32_MIN;
	uint32_t x399 = 2240U;
	int32_t x400 = -1;
	int64_t t80 = 25265880LL;

	t80 = (x397*(x398+(x399%x400)));

	if (t80 != 44590111362808896LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x401 = INT64_MAX;
	uint64_t x403 = 2382871LLU;
	int32_t x404 = INT32_MAX;

	t81 = (x401*(x402+(x403%x404)));

	if (t81 != 18446744073707135978LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x409 = -1;
	int8_t x410 = INT8_MIN;
	int64_t x411 = -1LL;
	uint16_t x412 = 3U;
	static int64_t t82 = -3359244LL;

	t82 = (x409*(x410+(x411%x412)));

	if (t82 != 129LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x421 = INT16_MIN;
	int16_t x422 = INT16_MIN;
	int16_t x423 = -5;
	int32_t x424 = -545941;
	int32_t t83 = -1826;

	t83 = (x421*(x422+(x423%x424)));

	if (t83 != 1073905664) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x425 = 1760U;
	volatile int32_t x426 = -1904;
	volatile int32_t x427 = -780153;
	uint32_t x428 = 30U;
	volatile uint32_t t84 = 80U;

	t84 = (x425*(x426+(x427%x428)));

	if (t84 != 4291639136U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x429 = UINT32_MAX;
	uint16_t x430 = 80U;
	int8_t x431 = INT8_MIN;
	volatile uint32_t t85 = 224094762U;

	t85 = (x429*(x430+(x431%x432)));

	if (t85 != 48U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x433 = 1;
	int64_t x435 = INT64_MIN;
	int32_t x436 = INT32_MIN;
	int64_t t86 = 12809387867298LL;

	t86 = (x433*(x434+(x435%x436)));

	if (t86 != -32768LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x437 = -101;
	int16_t x438 = -1;
	static int32_t x439 = -1;
	volatile uint8_t x440 = UINT8_MAX;

	t87 = (x437*(x438+(x439%x440)));

	if (t87 != 202) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x441 = INT32_MAX;
	int64_t x443 = -230386LL;
	static uint16_t x444 = 1U;

	t88 = (x441*(x442+(x443%x444)));

	if (t88 != 3744593709452300216LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x445 = 29;
	int64_t x447 = 80015301663944LL;
	static uint8_t x448 = 1U;
	volatile int64_t t89 = 11LL;

	t89 = (x445*(x446+(x447%x448)));

	if (t89 != 3683LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x449 = UINT8_MAX;
	int8_t x450 = INT8_MIN;
	int16_t x451 = 1;
	volatile int64_t x452 = -97874LL;
	static volatile int64_t t90 = -4015083643LL;

	t90 = (x449*(x450+(x451%x452)));

	if (t90 != -32385LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x453 = 33789089U;
	static int32_t x454 = -87;
	uint8_t x455 = UINT8_MAX;
	uint8_t x456 = 2U;
	static uint32_t t91 = 11U;

	t91 = (x453*(x454+(x455%x456)));

	if (t91 != 1389105642U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x461 = INT16_MAX;
	int32_t x462 = INT32_MAX;
	volatile uint8_t x463 = 113U;
	int64_t x464 = 231061510461LL;
	volatile int64_t t92 = 24625106347LL;

	t92 = (x461*(x462+(x463%x464)));

	if (t92 != 70366600363920LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x465 = INT16_MIN;
	int32_t x466 = 0;
	static int32_t x467 = INT32_MIN;
	volatile int16_t x468 = 1;

	t93 = (x465*(x466+(x467%x468)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x469 = INT32_MIN;
	volatile int16_t x470 = INT16_MIN;
	static int64_t x471 = INT64_MIN;
	int8_t x472 = 41;
	static volatile int64_t t94 = 96735227900472571LL;

	t94 = (x469*(x470+(x471%x472)));

	if (t94 != 70385924046848LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x473 = 7;
	int16_t x474 = INT16_MAX;
	uint32_t x475 = 1400006U;
	uint32_t t95 = 157116847U;

	t95 = (x473*(x474+(x475%x476)));

	if (t95 != 229761U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x477 = INT64_MIN;
	uint16_t x478 = 1U;
	int16_t x479 = INT16_MIN;
	int8_t x480 = -1;

	t96 = (x477*(x478+(x479%x480)));

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x481 = 16457U;
	uint64_t x482 = 5131259271LLU;
	int64_t x483 = -1LL;
	uint64_t x484 = 1868419174LLU;
	volatile uint64_t t97 = 5172LLU;

	t97 = (x481*(x482+(x483%x484)));

	if (t97 != 107672723744712LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x489 = INT16_MIN;
	uint16_t x490 = 19086U;
	int64_t x491 = INT64_MIN;
	uint64_t x492 = 50737389853LLU;
	uint64_t t98 = 1167958271023890LLU;

	t98 = (x489*(x490+(x491%x492)));

	if (t98 != 18445966937698729984LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x493 = -1;
	int32_t x494 = INT32_MIN;
	static int8_t x495 = 16;
	int8_t x496 = -3;
	int32_t t99 = INT32_MAX;

	t99 = (x493*(x494+(x495%x496)));

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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


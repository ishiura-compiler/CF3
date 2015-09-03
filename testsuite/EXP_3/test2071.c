#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x8 = UINT8_MAX;
int8_t x16 = 0;
int16_t x22 = INT16_MIN;
int16_t x31 = -201;
uint64_t t7 = 9321LLU;
static uint64_t x41 = UINT64_MAX;
int8_t x42 = INT8_MIN;
int16_t x53 = INT16_MAX;
uint32_t x54 = 1272563466U;
static int16_t x55 = 1;
uint32_t x59 = 118U;
static uint64_t x60 = 26863LLU;
static uint32_t x72 = UINT32_MAX;
static volatile int64_t x78 = INT64_MIN;
uint64_t x94 = 1980913463771LLU;
static int16_t x95 = -1;
uint32_t x98 = UINT32_MAX;
volatile int8_t x107 = INT8_MIN;
int64_t x112 = INT64_MIN;
volatile int32_t x113 = -1;
volatile int64_t x115 = INT64_MIN;
volatile int8_t x117 = 15;
static int64_t x120 = INT64_MIN;
uint32_t x122 = 1662U;
volatile int64_t x124 = INT64_MIN;
int64_t x127 = INT64_MIN;
static int32_t x134 = INT32_MIN;
static int32_t t29 = 10672;
uint16_t x137 = 1U;
volatile int64_t t30 = 685LL;
static int64_t x141 = INT64_MAX;
volatile int8_t x143 = -1;
int32_t x144 = -552096386;
volatile int8_t x146 = INT8_MIN;
uint64_t t32 = 8286LLU;
int8_t x161 = INT8_MIN;
uint32_t x164 = 42U;
volatile uint16_t x180 = UINT16_MAX;
int16_t x187 = INT16_MAX;
int64_t x188 = -80438045954196946LL;
volatile int32_t t46 = 3344702;
static int8_t x205 = -1;
volatile int64_t x209 = 16918346LL;
int32_t x211 = 5;
uint8_t x213 = 2U;
static uint16_t x214 = 22U;
int8_t x215 = -1;
int32_t x217 = -1;
int32_t x218 = INT32_MIN;
static uint64_t x222 = 29LLU;
int8_t x244 = INT8_MIN;
int16_t x245 = INT16_MAX;
uint64_t x246 = UINT64_MAX;
uint64_t t57 = 3666768292427649605LLU;
volatile uint16_t x249 = UINT16_MAX;
volatile int64_t t59 = 1LL;
int8_t x261 = -3;
static volatile uint32_t x282 = UINT32_MAX;
uint32_t x294 = 174006825U;
int16_t x305 = -1;
static int64_t x309 = INT64_MIN;
uint32_t x312 = UINT32_MAX;
static int32_t x315 = -22;
volatile int64_t t72 = 112267664LL;
static uint64_t t73 = 1645917586250491291LLU;
static uint16_t x321 = 23333U;
volatile int32_t x328 = INT32_MIN;
int32_t x330 = INT32_MIN;
static int32_t x334 = INT32_MAX;
static volatile int64_t t77 = -187370928610628LL;
int64_t x337 = INT64_MIN;
int16_t x339 = -963;
uint16_t x340 = UINT16_MAX;
uint64_t x348 = UINT64_MAX;
uint16_t x349 = UINT16_MAX;
volatile uint32_t t82 = 27976214U;
static volatile int64_t t83 = 364716506282430776LL;
uint8_t x367 = 4U;
int8_t x371 = -1;
static volatile int64_t x374 = -1LL;
static volatile int64_t t87 = 2048844LL;
int8_t x380 = INT8_MAX;
int8_t x386 = 4;
uint8_t x389 = UINT8_MAX;
uint32_t x391 = 171113U;
volatile uint32_t t90 = 56115U;
int64_t x409 = INT64_MIN;
uint16_t x418 = 2U;
volatile int8_t x421 = INT8_MIN;
int64_t x427 = -894026125886LL;
int64_t t98 = -4635676517LL;
int32_t t99 = 131833092;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int64_t x2 = INT64_MAX;
	static int32_t x3 = INT32_MAX;
	int64_t x4 = -1LL;
	static volatile int64_t t0 = 1058187469275644669LL;

	t0 = ((x1/x2)/(x3^x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 335;
	int16_t x6 = INT16_MIN;
	int8_t x7 = INT8_MIN;
	int32_t t1 = 215999;

	t1 = ((x5/x6)/(x7^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 12U;
	int32_t x10 = INT32_MIN;
	int64_t x11 = 117339976829234331LL;
	uint8_t x12 = 126U;
	int64_t t2 = -217LL;

	t2 = ((x9/x10)/(x11^x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	int32_t x14 = INT32_MIN;
	static int64_t x15 = -12533178359683LL;
	int64_t t3 = 176260326900LL;

	t3 = ((x13/x14)/(x15^x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int32_t x18 = -517604;
	int64_t x19 = 619215831466773494LL;
	int16_t x20 = INT16_MIN;
	int64_t t4 = -17LL;

	t4 = ((x17/x18)/(x19^x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	volatile int32_t x23 = 41;
	volatile uint8_t x24 = 17U;
	int32_t t5 = -10304820;

	t5 = ((x21/x22)/(x23^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = 1;
	int16_t x30 = -177;
	int8_t x32 = 10;
	static volatile int32_t t6 = 83;

	t6 = ((x29/x30)/(x31^x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	uint32_t x34 = 350350770U;
	uint16_t x35 = UINT16_MAX;
	volatile uint64_t x36 = 351LLU;

	t7 = ((x33/x34)/(x35^x36));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = UINT16_MAX;
	uint8_t x38 = 30U;
	int32_t x39 = INT32_MIN;
	static uint8_t x40 = 0U;
	static volatile int32_t t8 = 8318;

	t8 = ((x37/x38)/(x39^x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x43 = INT8_MIN;
	int32_t x44 = INT32_MIN;
	volatile uint64_t t9 = 22LLU;

	t9 = ((x41/x42)/(x43^x44));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x45 = 122684684920208LLU;
	uint16_t x46 = UINT16_MAX;
	static uint64_t x47 = 2219648LLU;
	volatile int64_t x48 = INT64_MIN;
	uint64_t t10 = 251243LLU;

	t10 = ((x45/x46)/(x47^x48));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = INT8_MIN;
	volatile uint16_t x50 = UINT16_MAX;
	int16_t x51 = -1521;
	uint16_t x52 = UINT16_MAX;
	static int32_t t11 = 0;

	t11 = ((x49/x50)/(x51^x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x56 = INT32_MIN;
	uint32_t t12 = 20U;

	t12 = ((x53/x54)/(x55^x56));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x57 = -369955;
	volatile int64_t x58 = INT64_MIN;
	volatile uint64_t t13 = 45LLU;

	t13 = ((x57/x58)/(x59^x60));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = -1;
	static volatile uint16_t x62 = UINT16_MAX;
	static int64_t x63 = -3LL;
	int16_t x64 = INT16_MAX;
	static volatile int64_t t14 = 453LL;

	t14 = ((x61/x62)/(x63^x64));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x69 = -409427;
	volatile int8_t x70 = INT8_MIN;
	volatile int32_t x71 = 235961;
	volatile uint32_t t15 = 274333275U;

	t15 = ((x69/x70)/(x71^x72));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = 879;
	uint32_t x79 = 65U;
	uint16_t x80 = 1531U;
	static int64_t t16 = 774454880043438LL;

	t16 = ((x77/x78)/(x79^x80));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x81 = UINT32_MAX;
	int8_t x82 = INT8_MIN;
	uint8_t x83 = 0U;
	uint16_t x84 = UINT16_MAX;
	uint32_t t17 = 873695474U;

	t17 = ((x81/x82)/(x83^x84));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x85 = UINT32_MAX;
	int8_t x86 = -8;
	volatile uint64_t x87 = 407865327667936303LLU;
	int16_t x88 = -3;
	volatile uint64_t t18 = 1LLU;

	t18 = ((x85/x86)/(x87^x88));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x89 = UINT64_MAX;
	static int64_t x90 = -28044646869LL;
	uint8_t x91 = UINT8_MAX;
	static volatile uint64_t x92 = 207891636LLU;
	volatile uint64_t t19 = 303519277539LLU;

	t19 = ((x89/x90)/(x91^x92));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x93 = 0;
	int64_t x96 = INT64_MAX;
	volatile uint64_t t20 = 3768977701LLU;

	t20 = ((x93/x94)/(x95^x96));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = INT32_MAX;
	uint64_t x99 = UINT64_MAX;
	uint8_t x100 = 73U;
	static volatile uint64_t t21 = 115643901347LLU;

	t21 = ((x97/x98)/(x99^x100));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x101 = UINT16_MAX;
	static uint8_t x102 = 33U;
	int64_t x103 = -7197686LL;
	int32_t x104 = INT32_MIN;
	int64_t t22 = -63396075LL;

	t22 = ((x101/x102)/(x103^x104));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x105 = 0U;
	int8_t x106 = INT8_MAX;
	static int32_t x108 = INT32_MIN;
	static int32_t t23 = 8343722;

	t23 = ((x105/x106)/(x107^x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = INT8_MIN;
	volatile int16_t x110 = -1;
	static int32_t x111 = INT32_MIN;
	int64_t t24 = 31515395691LL;

	t24 = ((x109/x110)/(x111^x112));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x114 = -1;
	int32_t x116 = INT32_MAX;
	static volatile int64_t t25 = 88LL;

	t25 = ((x113/x114)/(x115^x116));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x118 = 21U;
	uint64_t x119 = UINT64_MAX;
	uint64_t t26 = 1832998397LLU;

	t26 = ((x117/x118)/(x119^x120));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = INT32_MIN;
	uint16_t x123 = 8014U;
	volatile int64_t t27 = -315LL;

	t27 = ((x121/x122)/(x123^x124));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x125 = UINT64_MAX;
	static int32_t x126 = INT32_MAX;
	uint8_t x128 = UINT8_MAX;
	static uint64_t t28 = 3LLU;

	t28 = ((x125/x126)/(x127^x128));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x133 = 3;
	int16_t x135 = INT16_MAX;
	int8_t x136 = -1;

	t29 = ((x133/x134)/(x135^x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x138 = -1;
	static uint32_t x139 = 32517164U;
	int64_t x140 = INT64_MIN;

	t30 = ((x137/x138)/(x139^x140));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x142 = INT64_MIN;
	volatile int64_t t31 = 65941871377LL;

	t31 = ((x141/x142)/(x143^x144));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x145 = UINT64_MAX;
	uint64_t x147 = 7591277LLU;
	static int64_t x148 = INT64_MIN;

	t32 = ((x145/x146)/(x147^x148));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x149 = UINT8_MAX;
	int16_t x150 = INT16_MAX;
	int32_t x151 = INT32_MIN;
	volatile uint64_t x152 = 350007616097219LLU;
	uint64_t t33 = 12731672LLU;

	t33 = ((x149/x150)/(x151^x152));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = INT64_MIN;
	uint32_t x154 = UINT32_MAX;
	volatile uint8_t x155 = 1U;
	int8_t x156 = -1;
	volatile int64_t t34 = 4919689470LL;

	t34 = ((x153/x154)/(x155^x156));

	if (t34 != 1073741824LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = INT8_MAX;
	uint64_t x158 = 342717244450929LLU;
	static uint32_t x159 = 278U;
	uint32_t x160 = 3597737U;
	uint64_t t35 = 19LLU;

	t35 = ((x157/x158)/(x159^x160));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x162 = 34U;
	volatile int8_t x163 = -1;
	volatile uint32_t t36 = 2776U;

	t36 = ((x161/x162)/(x163^x164));

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x165 = -1;
	static int8_t x166 = -1;
	volatile uint8_t x167 = UINT8_MAX;
	static int32_t x168 = INT32_MIN;
	volatile int32_t t37 = 1985;

	t37 = ((x165/x166)/(x167^x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = INT32_MIN;
	volatile int32_t x170 = INT32_MIN;
	static int32_t x171 = INT32_MAX;
	int64_t x172 = 502497311344074533LL;
	volatile int64_t t38 = -2845LL;

	t38 = ((x169/x170)/(x171^x172));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x173 = 3U;
	int16_t x174 = 89;
	int32_t x175 = 9359;
	int64_t x176 = -1LL;
	int64_t t39 = -36571654LL;

	t39 = ((x173/x174)/(x175^x176));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x177 = 11LLU;
	int16_t x178 = -1;
	uint16_t x179 = 5U;
	uint64_t t40 = 130655269003292LLU;

	t40 = ((x177/x178)/(x179^x180));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x181 = -319;
	static uint16_t x182 = 25619U;
	int16_t x183 = -1;
	uint16_t x184 = 5217U;
	static int32_t t41 = 469658934;

	t41 = ((x181/x182)/(x183^x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x185 = 2U;
	static int32_t x186 = INT32_MAX;
	volatile int64_t t42 = -157449579886358152LL;

	t42 = ((x185/x186)/(x187^x188));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = INT64_MAX;
	static uint16_t x190 = 2U;
	int16_t x191 = -1;
	int8_t x192 = INT8_MIN;
	volatile int64_t t43 = 127612479278452LL;

	t43 = ((x189/x190)/(x191^x192));

	if (t43 != 36312488334073920LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x193 = 1128U;
	volatile uint64_t x194 = UINT64_MAX;
	int8_t x195 = -1;
	static int32_t x196 = -28;
	volatile uint64_t t44 = 92LLU;

	t44 = ((x193/x194)/(x195^x196));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = -448;
	uint32_t x198 = 25646970U;
	volatile int32_t x199 = -1;
	int64_t x200 = INT64_MIN;
	volatile int64_t t45 = 15220347666743245LL;

	t45 = ((x197/x198)/(x199^x200));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x201 = 204762283;
	static int8_t x202 = INT8_MIN;
	uint8_t x203 = 24U;
	int16_t x204 = INT16_MIN;

	t46 = ((x201/x202)/(x203^x204));

	if (t46 != 48) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x206 = -1;
	int64_t x207 = INT64_MAX;
	static int16_t x208 = 0;
	static volatile int64_t t47 = 131842479585623LL;

	t47 = ((x205/x206)/(x207^x208));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x210 = 658;
	static uint8_t x212 = 22U;
	volatile int64_t t48 = 166467703872561LL;

	t48 = ((x209/x210)/(x211^x212));

	if (t48 != 1353LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x216 = INT32_MAX;
	int32_t t49 = -377;

	t49 = ((x213/x214)/(x215^x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x219 = INT8_MAX;
	uint32_t x220 = UINT32_MAX;
	volatile uint32_t t50 = 6U;

	t50 = ((x217/x218)/(x219^x220));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x221 = 213LLU;
	uint8_t x223 = 0U;
	volatile int16_t x224 = INT16_MIN;
	volatile uint64_t t51 = 5180947686LLU;

	t51 = ((x221/x222)/(x223^x224));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x225 = 436338U;
	int64_t x226 = -1LL;
	static int16_t x227 = INT16_MIN;
	int32_t x228 = INT32_MIN;
	volatile int64_t t52 = 17LL;

	t52 = ((x225/x226)/(x227^x228));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x229 = INT64_MIN;
	uint16_t x230 = UINT16_MAX;
	volatile int32_t x231 = INT32_MIN;
	int8_t x232 = -1;
	volatile int64_t t53 = 1463723797179097802LL;

	t53 = ((x229/x230)/(x231^x232));

	if (t53 != -65537LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x233 = -143;
	int8_t x234 = INT8_MIN;
	int16_t x235 = -1;
	static uint16_t x236 = 29U;
	volatile int32_t t54 = -23;

	t54 = ((x233/x234)/(x235^x236));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x237 = 1LLU;
	int8_t x238 = INT8_MAX;
	static uint8_t x239 = 3U;
	static int8_t x240 = INT8_MIN;
	volatile uint64_t t55 = 109900471LLU;

	t55 = ((x237/x238)/(x239^x240));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x241 = UINT16_MAX;
	static int16_t x242 = 3899;
	uint64_t x243 = 13LLU;
	uint64_t t56 = 1102368828660LLU;

	t56 = ((x241/x242)/(x243^x244));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x247 = 28615U;
	int64_t x248 = INT64_MAX;

	t57 = ((x245/x246)/(x247^x248));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x250 = 26U;
	static volatile int16_t x251 = -14725;
	int32_t x252 = -29592813;
	int32_t t58 = -7445554;

	t58 = ((x249/x250)/(x251^x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = -10522092;
	int64_t x254 = -1LL;
	int8_t x255 = 28;
	static int32_t x256 = 8244648;

	t59 = ((x253/x254)/(x255^x256));

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x257 = 414452587U;
	int8_t x258 = -1;
	int32_t x259 = INT32_MAX;
	volatile int16_t x260 = INT16_MIN;
	uint32_t t60 = 6U;

	t60 = ((x257/x258)/(x259^x260));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x262 = INT8_MIN;
	static int16_t x263 = INT16_MIN;
	int8_t x264 = INT8_MIN;
	int32_t t61 = 69541;

	t61 = ((x261/x262)/(x263^x264));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x265 = 23U;
	volatile int8_t x266 = INT8_MIN;
	int8_t x267 = INT8_MIN;
	uint64_t x268 = 201238862543LLU;
	static uint64_t t62 = 21074304423986221LLU;

	t62 = ((x265/x266)/(x267^x268));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x269 = -473;
	uint32_t x270 = 764U;
	uint64_t x271 = UINT64_MAX;
	int16_t x272 = INT16_MIN;
	static uint64_t t63 = 4053468243109485465LLU;

	t63 = ((x269/x270)/(x271^x272));

	if (t63 != 171LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x277 = 52;
	int32_t x278 = 249164;
	int16_t x279 = -382;
	int32_t x280 = -1;
	volatile int32_t t64 = 215;

	t64 = ((x277/x278)/(x279^x280));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x281 = -28513243;
	static uint16_t x283 = 38U;
	int64_t x284 = 267923581555075LL;
	volatile int64_t t65 = -101LL;

	t65 = ((x281/x282)/(x283^x284));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x285 = 357LL;
	static volatile int64_t x286 = INT64_MIN;
	static volatile uint8_t x287 = 13U;
	uint64_t x288 = 3214LLU;
	volatile uint64_t t66 = 7555LLU;

	t66 = ((x285/x286)/(x287^x288));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x289 = 810445898874LLU;
	int64_t x290 = INT64_MAX;
	int64_t x291 = 348807654003468LL;
	int64_t x292 = 14491584LL;
	volatile uint64_t t67 = 4037801880748LLU;

	t67 = ((x289/x290)/(x291^x292));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x293 = INT32_MAX;
	int64_t x295 = INT64_MIN;
	uint16_t x296 = 25U;
	int64_t t68 = -1415501144520870LL;

	t68 = ((x293/x294)/(x295^x296));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x301 = INT64_MIN;
	int8_t x302 = INT8_MAX;
	volatile uint32_t x303 = 1961U;
	int8_t x304 = -1;
	static int64_t t69 = -2284498544646547156LL;

	t69 = ((x301/x302)/(x303^x304));

	if (t69 != -16909327LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x306 = UINT32_MAX;
	static volatile uint8_t x307 = 83U;
	int16_t x308 = INT16_MAX;
	uint32_t t70 = 165867083U;

	t70 = ((x305/x306)/(x307^x308));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x310 = INT64_MIN;
	int16_t x311 = INT16_MIN;
	int64_t t71 = -20LL;

	t71 = ((x309/x310)/(x311^x312));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x313 = 554;
	static int32_t x314 = 517565694;
	volatile int64_t x316 = -1LL;

	t72 = ((x313/x314)/(x315^x316));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x317 = 52946LLU;
	uint8_t x318 = 2U;
	static int8_t x319 = INT8_MIN;
	static int8_t x320 = INT8_MAX;

	t73 = ((x317/x318)/(x319^x320));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x322 = -1;
	static int8_t x323 = INT8_MIN;
	static uint16_t x324 = UINT16_MAX;
	volatile int32_t t74 = -121325;

	t74 = ((x321/x322)/(x323^x324));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x325 = 1;
	int64_t x326 = INT64_MIN;
	int16_t x327 = -294;
	volatile int64_t t75 = -233934900167347LL;

	t75 = ((x325/x326)/(x327^x328));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x329 = INT64_MIN;
	int8_t x331 = INT8_MAX;
	static int32_t x332 = INT32_MIN;
	static int64_t t76 = -207LL;

	t76 = ((x329/x330)/(x331^x332));

	if (t76 != -2LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x333 = 949173U;
	uint32_t x335 = 198634U;
	int64_t x336 = INT64_MAX;

	t77 = ((x333/x334)/(x335^x336));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x338 = INT64_MIN;
	volatile int64_t t78 = -216762265523LL;

	t78 = ((x337/x338)/(x339^x340));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x341 = INT32_MIN;
	uint32_t x342 = 219191U;
	int64_t x343 = 7114788165LL;
	int64_t x344 = -237LL;
	volatile int64_t t79 = -2468178400754064987LL;

	t79 = ((x341/x342)/(x343^x344));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x345 = 4;
	volatile uint8_t x346 = 1U;
	volatile uint32_t x347 = 75600U;
	uint64_t t80 = 1942073341LLU;

	t80 = ((x345/x346)/(x347^x348));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x350 = -22;
	volatile uint16_t x351 = UINT16_MAX;
	static volatile int32_t x352 = -1;
	static int32_t t81 = -5005;

	t81 = ((x349/x350)/(x351^x352));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x353 = UINT32_MAX;
	static int16_t x354 = -1;
	uint8_t x355 = UINT8_MAX;
	static uint32_t x356 = UINT32_MAX;

	t82 = ((x353/x354)/(x355^x356));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x357 = INT64_MAX;
	uint8_t x358 = 11U;
	int16_t x359 = -1;
	int8_t x360 = INT8_MIN;

	t83 = ((x357/x358)/(x359^x360));

	if (t83 != 6602270606195258LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x361 = -1260;
	uint32_t x362 = 456U;
	int32_t x363 = -4;
	int64_t x364 = INT64_MIN;
	int64_t t84 = 6009690420140LL;

	t84 = ((x361/x362)/(x363^x364));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x365 = INT8_MIN;
	volatile int32_t x366 = INT32_MIN;
	int32_t x368 = 16108949;
	static volatile int32_t t85 = 133;

	t85 = ((x365/x366)/(x367^x368));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x369 = 23U;
	int64_t x370 = -24815LL;
	static uint64_t x372 = 60138509822LLU;
	static uint64_t t86 = 103637459LLU;

	t86 = ((x369/x370)/(x371^x372));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x373 = UINT8_MAX;
	int8_t x375 = 29;
	int8_t x376 = 10;

	t87 = ((x373/x374)/(x375^x376));

	if (t87 != -11LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x377 = -1;
	volatile int8_t x378 = INT8_MIN;
	volatile uint8_t x379 = 3U;
	volatile int32_t t88 = -62606;

	t88 = ((x377/x378)/(x379^x380));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x385 = -1;
	volatile uint64_t x387 = UINT64_MAX;
	int8_t x388 = INT8_MAX;
	uint64_t t89 = 1329180679922LLU;

	t89 = ((x385/x386)/(x387^x388));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x390 = -113;
	int32_t x392 = INT32_MIN;

	t90 = ((x389/x390)/(x391^x392));

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x393 = 4;
	static int64_t x394 = -1LL;
	volatile int32_t x395 = 345126;
	int32_t x396 = INT32_MIN;
	volatile int64_t t91 = 38077LL;

	t91 = ((x393/x394)/(x395^x396));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x401 = INT16_MAX;
	static int16_t x402 = -1;
	uint16_t x403 = UINT16_MAX;
	int8_t x404 = -1;
	volatile int32_t t92 = -261837;

	t92 = ((x401/x402)/(x403^x404));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x405 = 2U;
	int32_t x406 = INT32_MIN;
	volatile int8_t x407 = -1;
	int32_t x408 = INT32_MAX;
	int32_t t93 = -258907110;

	t93 = ((x405/x406)/(x407^x408));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x410 = 112U;
	static int16_t x411 = INT16_MIN;
	volatile int32_t x412 = INT32_MIN;
	volatile int64_t t94 = 5165169249LL;

	t94 = ((x409/x410)/(x411^x412));

	if (t94 != -38348507LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x413 = UINT32_MAX;
	int8_t x414 = -1;
	int64_t x415 = INT64_MIN;
	int8_t x416 = 2;
	static volatile int64_t t95 = -41480539830LL;

	t95 = ((x413/x414)/(x415^x416));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x417 = 490292U;
	int8_t x419 = -1;
	int8_t x420 = 4;
	uint32_t t96 = 0U;

	t96 = ((x417/x418)/(x419^x420));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x422 = INT32_MIN;
	int32_t x423 = INT32_MAX;
	static int8_t x424 = INT8_MIN;
	volatile int32_t t97 = 75;

	t97 = ((x421/x422)/(x423^x424));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x425 = -1;
	int16_t x426 = INT16_MAX;
	int64_t x428 = INT64_MAX;

	t98 = ((x425/x426)/(x427^x428));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x433 = 3;
	int32_t x434 = INT32_MIN;
	uint8_t x435 = 3U;
	int8_t x436 = INT8_MAX;

	t99 = ((x433/x434)/(x435^x436));

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


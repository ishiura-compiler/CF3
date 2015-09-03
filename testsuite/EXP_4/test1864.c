#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t t1 = -13LL;
int64_t x12 = INT64_MIN;
uint16_t x13 = UINT16_MAX;
int8_t x22 = INT8_MIN;
int32_t x25 = -37712;
int64_t x27 = INT64_MIN;
int32_t x30 = INT32_MIN;
uint16_t x32 = UINT16_MAX;
volatile uint64_t x33 = UINT64_MAX;
int32_t x37 = 17;
int16_t x47 = 0;
int8_t x49 = INT8_MIN;
volatile int64_t x51 = -1LL;
static int8_t x52 = INT8_MAX;
static volatile int32_t x55 = -1;
static uint64_t x60 = 1822158654LLU;
static int32_t x62 = -1;
volatile uint8_t x70 = 2U;
int16_t x72 = -1;
static volatile uint64_t t17 = 4267175324288358LLU;
uint64_t t18 = 255498LLU;
int16_t x82 = INT16_MAX;
volatile int64_t t19 = -477LL;
volatile int32_t x85 = INT32_MIN;
static uint64_t x92 = 159842598LLU;
volatile uint64_t t21 = 2LLU;
volatile int16_t x118 = INT16_MIN;
int8_t x119 = -3;
volatile uint32_t t28 = 1673U;
uint8_t x125 = UINT8_MAX;
int8_t x133 = -11;
volatile int32_t x138 = 122939561;
int16_t x147 = INT16_MAX;
static uint8_t x156 = UINT8_MAX;
int64_t x161 = 1626033405404006LL;
int8_t x163 = -1;
int16_t x167 = -6150;
static volatile int8_t x168 = INT8_MIN;
volatile uint8_t x174 = 3U;
int8_t x175 = INT8_MIN;
int8_t x176 = INT8_MIN;
int8_t x178 = INT8_MAX;
volatile int64_t x180 = INT64_MIN;
static volatile int64_t t41 = 42LL;
int32_t x181 = -1;
int32_t x191 = 4882;
int32_t t44 = 74;
int64_t t45 = -5676871LL;
static uint16_t x198 = UINT16_MAX;
volatile int64_t t46 = -31LL;
int32_t x206 = INT32_MIN;
volatile uint64_t t48 = 8322641710852147964LLU;
static uint8_t x212 = 9U;
int16_t x213 = INT16_MIN;
volatile uint16_t x214 = UINT16_MAX;
volatile int32_t x221 = -730571;
volatile uint8_t x224 = 3U;
uint8_t x226 = UINT8_MAX;
int8_t x230 = INT8_MAX;
uint64_t x233 = 779LLU;
uint16_t x235 = 1552U;
int8_t x236 = INT8_MAX;
static volatile int8_t x240 = INT8_MIN;
volatile uint64_t t56 = 272000507424LLU;
uint8_t x245 = UINT8_MAX;
static int16_t x248 = 2376;
int64_t x257 = 1111899LL;
volatile int64_t t61 = 210254732887498LL;
uint32_t x267 = UINT32_MAX;
uint16_t x272 = 122U;
volatile int16_t x278 = 108;
static int32_t t65 = 2960800;
uint32_t x281 = 32488U;
volatile uint32_t x284 = 77U;
uint32_t t66 = 863192431U;
int32_t x285 = -1;
int32_t x286 = INT32_MAX;
int32_t x291 = INT32_MIN;
int32_t t68 = 350020830;
uint8_t x294 = 5U;
int8_t x298 = -1;
static int64_t x305 = -1LL;
int8_t x306 = -1;
static int16_t x309 = INT16_MAX;
uint64_t t73 = 25701430083LLU;
volatile uint64_t t76 = 120735816860LLU;
static int16_t x335 = INT16_MIN;
int64_t x339 = INT64_MIN;
volatile uint16_t x340 = UINT16_MAX;
volatile int32_t x345 = -1839769;
volatile int32_t t81 = 110066721;
uint64_t x350 = 121875LLU;
int32_t x369 = -32709;
int16_t x370 = -903;
int16_t x371 = -1;
static int32_t t84 = 8080530;
int8_t x376 = INT8_MIN;
int64_t t85 = -994524403591LL;
int8_t x379 = 31;
volatile int64_t x381 = 1566491448LL;
int32_t x385 = -1;
uint16_t x386 = UINT16_MAX;
int8_t x390 = INT8_MIN;
int8_t x391 = -48;
uint32_t t90 = 12968839U;
int32_t t91 = 8186379;
static volatile int64_t x402 = -1LL;
static uint8_t x403 = 15U;
static volatile uint64_t x410 = 5995645710774858LLU;
int8_t x416 = INT8_MIN;
int64_t x417 = -1LL;
static uint16_t x418 = 728U;
uint32_t x425 = 35489U;
uint8_t x427 = 0U;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	static volatile int32_t x2 = 516;
	int32_t x3 = 72624;
	uint64_t x4 = 35410015LLU;
	uint64_t t0 = 1719332272LLU;

	t0 = (x1%(x2+(x3|x4)));

	if (t0 != 255LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -629;
	uint32_t x6 = 7U;
	volatile int64_t x7 = INT64_MAX;
	volatile int16_t x8 = INT16_MIN;

	t1 = (x5%(x6+(x7|x8)));

	if (t1 != -5LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 15110U;
	volatile int32_t x10 = 4240252;
	int8_t x11 = -1;
	volatile int64_t t2 = -2253134994573254170LL;

	t2 = (x9%(x10+(x11|x12)));

	if (t2 != 15110LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x14 = INT64_MIN;
	static volatile uint16_t x15 = 8U;
	volatile uint16_t x16 = 5U;
	int64_t t3 = -838LL;

	t3 = (x13%(x14+(x15|x16)));

	if (t3 != 65535LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	uint64_t x23 = 465428LLU;
	int32_t x24 = INT32_MAX;
	uint64_t t4 = 3446LLU;

	t4 = (x21%(x22+(x23|x24)));

	if (t4 != 66435LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x26 = 116;
	int16_t x28 = INT16_MIN;
	int64_t t5 = 512924791977248LL;

	t5 = (x25%(x26+(x27|x28)));

	if (t5 != -5060LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -2;
	int64_t x31 = INT64_MAX;
	volatile int64_t t6 = 15774LL;

	t6 = (x29%(x30+(x31|x32)));

	if (t6 != -2LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x34 = 444U;
	uint16_t x35 = UINT16_MAX;
	static int64_t x36 = -1LL;
	volatile uint64_t t7 = 6690229LLU;

	t7 = (x33%(x34+(x35|x36)));

	if (t7 != 214LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x38 = INT8_MAX;
	uint16_t x39 = 309U;
	static int8_t x40 = INT8_MIN;
	volatile int32_t t8 = 103;

	t8 = (x37%(x38+(x39|x40)));

	if (t8 != 17) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = -1;
	int32_t x42 = INT32_MIN;
	int64_t x43 = INT64_MAX;
	int64_t x44 = INT64_MIN;
	int64_t t9 = -149190LL;

	t9 = (x41%(x42+(x43|x44)));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x45 = INT16_MAX;
	uint32_t x46 = 75U;
	int16_t x48 = INT16_MAX;
	uint32_t t10 = 35172U;

	t10 = (x45%(x46+(x47|x48)));

	if (t10 != 32767U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x50 = -1;
	int64_t t11 = -104817322LL;

	t11 = (x49%(x50+(x51|x52)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x53 = 0;
	int8_t x54 = -1;
	static volatile int16_t x56 = INT16_MIN;
	int32_t t12 = 2;

	t12 = (x53%(x54+(x55|x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x57 = INT32_MIN;
	uint8_t x58 = UINT8_MAX;
	int64_t x59 = -1LL;
	volatile uint64_t t13 = 2088842LLU;

	t13 = (x57%(x58+(x59|x60)));

	if (t13 != 248LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = UINT16_MAX;
	int16_t x63 = INT16_MIN;
	int16_t x64 = INT16_MIN;
	static int32_t t14 = -1975910;

	t14 = (x61%(x62+(x63|x64)));

	if (t14 != 32766) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = UINT32_MAX;
	volatile uint8_t x66 = UINT8_MAX;
	volatile int16_t x67 = INT16_MIN;
	static int16_t x68 = INT16_MAX;
	volatile uint32_t t15 = 205818152U;

	t15 = (x65%(x66+(x67|x68)));

	if (t15 != 15U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = 12;
	int64_t x71 = INT64_MIN;
	static volatile int64_t t16 = 4053130LL;

	t16 = (x69%(x70+(x71|x72)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -1;
	volatile uint64_t x74 = UINT64_MAX;
	volatile int32_t x75 = INT32_MAX;
	int16_t x76 = INT16_MIN;

	t17 = (x73%(x74+(x75|x76)));

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x77 = INT64_MIN;
	uint64_t x78 = UINT64_MAX;
	int8_t x79 = 63;
	int32_t x80 = -1;

	t18 = (x77%(x78+(x79|x80)));

	if (t18 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = -1113LL;
	int32_t x83 = INT32_MIN;
	static int32_t x84 = INT32_MAX;

	t19 = (x81%(x82+(x83|x84)));

	if (t19 != -1113LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x86 = -24677684875LL;
	static uint64_t x87 = UINT64_MAX;
	uint16_t x88 = 2U;
	uint64_t t20 = 3059798LLU;

	t20 = (x85%(x86+(x87|x88)));

	if (t20 != 22530201228LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x89 = 18572U;
	uint16_t x90 = UINT16_MAX;
	int8_t x91 = INT8_MIN;

	t21 = (x89%(x90+(x91|x92)));

	if (t21 != 18572LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x93 = UINT8_MAX;
	uint32_t x94 = 2264U;
	static uint16_t x95 = 1U;
	int64_t x96 = -1LL;
	volatile int64_t t22 = -3LL;

	t22 = (x93%(x94+(x95|x96)));

	if (t22 != 255LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x97 = -1;
	int16_t x98 = -28;
	int64_t x99 = -1LL;
	int8_t x100 = INT8_MIN;
	static volatile int64_t t23 = -322703758809313LL;

	t23 = (x97%(x98+(x99|x100)));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = 1;
	uint8_t x102 = UINT8_MAX;
	int8_t x103 = INT8_MIN;
	int32_t x104 = -12;
	static volatile int32_t t24 = 6687051;

	t24 = (x101%(x102+(x103|x104)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = -1LL;
	uint16_t x106 = 14893U;
	int64_t x107 = -1LL;
	int64_t x108 = 3796838218540339LL;
	static volatile int64_t t25 = -133705739LL;

	t25 = (x105%(x106+(x107|x108)));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x109 = -3;
	static volatile uint32_t x110 = UINT32_MAX;
	int64_t x111 = -1LL;
	int16_t x112 = -1;
	int64_t t26 = 2195LL;

	t26 = (x109%(x110+(x111|x112)));

	if (t26 != -3LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x117 = -1;
	int64_t x120 = -1LL;
	int64_t t27 = 3118154LL;

	t27 = (x117%(x118+(x119|x120)));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = INT32_MAX;
	int8_t x122 = INT8_MAX;
	uint32_t x123 = 689459U;
	int8_t x124 = INT8_MIN;

	t28 = (x121%(x122+(x123|x124)));

	if (t28 != 47U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x126 = UINT16_MAX;
	uint16_t x127 = 2929U;
	int64_t x128 = 64165772309592480LL;
	int64_t t29 = 301965133426LL;

	t29 = (x125%(x126+(x127|x128)));

	if (t29 != 255LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = -10;
	uint16_t x130 = 8U;
	uint8_t x131 = 28U;
	volatile uint8_t x132 = 36U;
	static int32_t t30 = 5;

	t30 = (x129%(x130+(x131|x132)));

	if (t30 != -10) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x134 = -39LL;
	int32_t x135 = INT32_MIN;
	int8_t x136 = -1;
	static int64_t t31 = 33284341736LL;

	t31 = (x133%(x134+(x135|x136)));

	if (t31 != -11LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x137 = 76U;
	static uint32_t x139 = UINT32_MAX;
	int64_t x140 = 26589250670LL;
	volatile int64_t t32 = -4584LL;

	t32 = (x137%(x138+(x139|x140)));

	if (t32 != 76LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = -1715649;
	static uint32_t x142 = 30992U;
	int8_t x143 = INT8_MAX;
	int32_t x144 = INT32_MAX;
	volatile uint32_t t33 = 191U;

	t33 = (x141%(x142+(x143|x144)));

	if (t33 != 2145737008U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = -2;
	uint16_t x146 = 26154U;
	int32_t x148 = -1;
	static int32_t t34 = -3603;

	t34 = (x145%(x146+(x147|x148)));

	if (t34 != -2) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = INT64_MAX;
	int16_t x150 = INT16_MAX;
	uint8_t x151 = 11U;
	static int8_t x152 = INT8_MIN;
	int64_t t35 = 0LL;

	t35 = (x149%(x150+(x151|x152)));

	if (t35 != 16607LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x153 = 5U;
	int8_t x154 = -7;
	volatile int16_t x155 = -1;
	static int32_t t36 = -122;

	t36 = (x153%(x154+(x155|x156)));

	if (t36 != 5) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = 4;
	static uint32_t x158 = 141411U;
	int64_t x159 = 114456277021196LL;
	int16_t x160 = 85;
	volatile int64_t t37 = 11144114LL;

	t37 = (x157%(x158+(x159|x160)));

	if (t37 != 4LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x162 = 260056894930718679LLU;
	volatile int32_t x164 = INT32_MIN;
	volatile uint64_t t38 = 6871198144835LLU;

	t38 = (x161%(x162+(x163|x164)));

	if (t38 != 1626033405404006LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x165 = -1;
	int16_t x166 = INT16_MIN;
	int32_t t39 = 221;

	t39 = (x165%(x166+(x167|x168)));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x173 = -1;
	static volatile int32_t t40 = -1914;

	t40 = (x173%(x174+(x175|x176)));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x177 = UINT8_MAX;
	uint32_t x179 = 1676119013U;

	t41 = (x177%(x178+(x179|x180)));

	if (t41 != 255LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x182 = -1LL;
	int64_t x183 = 365LL;
	int64_t x184 = INT64_MIN;
	int64_t t42 = 11800LL;

	t42 = (x181%(x182+(x183|x184)));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = 17402338;
	uint8_t x186 = 28U;
	int8_t x187 = -6;
	uint64_t x188 = 510086690LLU;
	uint64_t t43 = 247797531910425LLU;

	t43 = (x185%(x186+(x187|x188)));

	if (t43 != 8LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = INT8_MAX;
	int32_t x190 = INT32_MIN;
	int16_t x192 = 1;

	t44 = (x189%(x190+(x191|x192)));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x193 = INT16_MIN;
	static uint16_t x194 = UINT16_MAX;
	int64_t x195 = INT64_MIN;
	int32_t x196 = INT32_MIN;

	t45 = (x193%(x194+(x195|x196)));

	if (t45 != -32768LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = INT64_MIN;
	volatile int8_t x199 = INT8_MIN;
	int32_t x200 = INT32_MIN;

	t46 = (x197%(x198+(x199|x200)));

	if (t46 != -27525LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x201 = UINT64_MAX;
	int32_t x202 = INT32_MIN;
	int32_t x203 = -1;
	uint32_t x204 = 3U;
	volatile uint64_t t47 = 146233LLU;

	t47 = (x201%(x202+(x203|x204)));

	if (t47 != 3LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x205 = INT64_MIN;
	int32_t x207 = INT32_MIN;
	static uint64_t x208 = UINT64_MAX;

	t48 = (x205%(x206+(x207|x208)));

	if (t48 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x209 = -1;
	int64_t x210 = -1LL;
	int8_t x211 = INT8_MAX;
	int64_t t49 = -222139338058LL;

	t49 = (x209%(x210+(x211|x212)));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x215 = UINT32_MAX;
	int32_t x216 = 218985266;
	volatile uint32_t t50 = 64812U;

	t50 = (x213%(x214+(x215|x216)));

	if (t50 != 32770U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = -8;
	int8_t x218 = -1;
	int32_t x219 = 195505756;
	int16_t x220 = INT16_MIN;
	int32_t t51 = -1;

	t51 = (x217%(x218+(x219|x220)));

	if (t51 != -8) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x222 = INT8_MIN;
	volatile int16_t x223 = 11988;
	int32_t t52 = -8;

	t52 = (x221%(x222+(x223|x224)));

	if (t52 != -6928) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x225 = UINT8_MAX;
	int32_t x227 = INT32_MIN;
	uint32_t x228 = 2353U;
	volatile uint32_t t53 = 14U;

	t53 = (x225%(x226+(x227|x228)));

	if (t53 != 255U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x229 = 1U;
	volatile int32_t x231 = -3;
	int16_t x232 = -1;
	volatile int32_t t54 = -937123056;

	t54 = (x229%(x230+(x231|x232)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x234 = UINT32_MAX;
	volatile uint64_t t55 = 1LLU;

	t55 = (x233%(x234+(x235|x236)));

	if (t55 != 779LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x237 = 1;
	uint64_t x238 = 575684384599312LLU;
	uint16_t x239 = 31U;

	t56 = (x237%(x238+(x239|x240)));

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x241 = INT32_MIN;
	volatile int32_t x242 = 12582207;
	uint8_t x243 = 20U;
	int16_t x244 = 1;
	volatile int32_t t57 = 463100;

	t57 = (x241%(x242+(x243|x244)));

	if (t57 != -8504888) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x246 = 15;
	int32_t x247 = 0;
	static int32_t t58 = -81880271;

	t58 = (x245%(x246+(x247|x248)));

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = INT32_MAX;
	int64_t x254 = INT64_MIN;
	static uint32_t x255 = UINT32_MAX;
	int32_t x256 = -1;
	volatile int64_t t59 = -1LL;

	t59 = (x253%(x254+(x255|x256)));

	if (t59 != 2147483647LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x258 = UINT16_MAX;
	int16_t x259 = INT16_MAX;
	uint64_t x260 = UINT64_MAX;
	uint64_t t60 = 69LLU;

	t60 = (x257%(x258+(x259|x260)));

	if (t60 != 63355LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x261 = INT64_MIN;
	int8_t x262 = -1;
	static volatile uint16_t x263 = UINT16_MAX;
	int8_t x264 = -1;

	t61 = (x261%(x262+(x263|x264)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x265 = 17575111;
	int8_t x266 = -1;
	static volatile int64_t x268 = 40687433958786910LL;
	int64_t t62 = -9378397LL;

	t62 = (x265%(x266+(x267|x268)));

	if (t62 != 17575111LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x269 = INT32_MIN;
	volatile uint16_t x270 = 983U;
	int16_t x271 = -442;
	volatile int32_t t63 = 2858169;

	t63 = (x269%(x270+(x271|x272)));

	if (t63 != -23) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x273 = UINT8_MAX;
	int16_t x274 = INT16_MAX;
	int16_t x275 = INT16_MIN;
	static volatile int64_t x276 = 326LL;
	volatile int64_t t64 = 2501842036609LL;

	t64 = (x273%(x274+(x275|x276)));

	if (t64 != 255LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x277 = -1;
	int16_t x279 = -1;
	uint16_t x280 = UINT16_MAX;

	t65 = (x277%(x278+(x279|x280)));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x282 = -1;
	int32_t x283 = INT32_MAX;

	t66 = (x281%(x282+(x283|x284)));

	if (t66 != 32488U) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x287 = INT64_MIN;
	uint16_t x288 = 65U;
	static int64_t t67 = -5LL;

	t67 = (x285%(x286+(x287|x288)));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x289 = INT32_MAX;
	volatile int16_t x290 = INT16_MIN;
	volatile int32_t x292 = 23653179;

	t68 = (x289%(x290+(x291|x292)));

	if (t68 != 23620410) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x293 = 7LLU;
	static int16_t x295 = -1;
	int16_t x296 = INT16_MIN;
	uint64_t t69 = 84819601LLU;

	t69 = (x293%(x294+(x295|x296)));

	if (t69 != 3LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x297 = 4695U;
	int16_t x299 = -3;
	int64_t x300 = -1LL;
	static volatile int64_t t70 = -852320318390279LL;

	t70 = (x297%(x298+(x299|x300)));

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = INT16_MAX;
	static int64_t x302 = 126061913LL;
	uint64_t x303 = 488993LLU;
	int32_t x304 = INT32_MIN;
	static uint64_t t71 = 2011293573LLU;

	t71 = (x301%(x302+(x303|x304)));

	if (t71 != 32767LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x307 = 7U;
	int8_t x308 = 3;
	int64_t t72 = -2402458085104LL;

	t72 = (x305%(x306+(x307|x308)));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x310 = -1;
	static uint64_t x311 = 2481971LLU;
	uint32_t x312 = 9767U;

	t73 = (x309%(x310+(x311|x312)));

	if (t73 != 32767LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x313 = -52;
	static int32_t x314 = -9103;
	static uint64_t x315 = 27LLU;
	int32_t x316 = -131;
	volatile uint64_t t74 = 1419310752441816LLU;

	t74 = (x313%(x314+(x315|x316)));

	if (t74 != 9180LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint8_t x317 = 44U;
	int8_t x318 = -36;
	uint32_t x319 = 269U;
	int64_t x320 = -1LL;
	static volatile int64_t t75 = 0LL;

	t75 = (x317%(x318+(x319|x320)));

	if (t75 != 7LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x321 = UINT8_MAX;
	uint8_t x322 = 3U;
	static uint64_t x323 = UINT64_MAX;
	uint8_t x324 = 0U;

	t76 = (x321%(x322+(x323|x324)));

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x329 = -1;
	int8_t x330 = INT8_MIN;
	int16_t x331 = INT16_MAX;
	int64_t x332 = INT64_MIN;
	int64_t t77 = -2440LL;

	t77 = (x329%(x330+(x331|x332)));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x333 = 58U;
	int8_t x334 = -1;
	int64_t x336 = INT64_MIN;
	volatile int64_t t78 = 1408LL;

	t78 = (x333%(x334+(x335|x336)));

	if (t78 != 58LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x337 = 208;
	static int16_t x338 = INT16_MAX;
	static int64_t t79 = 925413088LL;

	t79 = (x337%(x338+(x339|x340)));

	if (t79 != 208LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x341 = -1;
	int16_t x342 = INT16_MIN;
	uint16_t x343 = 24U;
	int16_t x344 = INT16_MIN;
	int32_t t80 = -1269886;

	t80 = (x341%(x342+(x343|x344)));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x346 = 3;
	volatile uint8_t x347 = UINT8_MAX;
	static uint8_t x348 = 3U;

	t81 = (x345%(x346+(x347|x348)));

	if (t81 != -229) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x349 = -466053277467495270LL;
	int32_t x351 = INT32_MAX;
	volatile int32_t x352 = 12178;
	uint64_t t82 = 78778381597965LLU;

	t82 = (x349%(x350+(x351|x352)));

	if (t82 != 675869006LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x361 = 1U;
	volatile int32_t x362 = INT32_MAX;
	int64_t x363 = -180LL;
	static uint8_t x364 = 10U;
	volatile int64_t t83 = 924922960252470LL;

	t83 = (x361%(x362+(x363|x364)));

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x372 = 2;

	t84 = (x369%(x370+(x371|x372)));

	if (t84 != -165) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x373 = INT64_MAX;
	uint32_t x374 = 43U;
	int32_t x375 = 15;

	t85 = (x373%(x374+(x375|x376)));

	if (t85 != 2449LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x377 = INT16_MIN;
	int16_t x378 = 775;
	volatile int64_t x380 = INT64_MIN;
	int64_t t86 = -121954415658180LL;

	t86 = (x377%(x378+(x379|x380)));

	if (t86 != -32768LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x382 = INT8_MIN;
	static uint16_t x383 = UINT16_MAX;
	int32_t x384 = INT32_MIN;
	volatile int64_t t87 = 21088007923563LL;

	t87 = (x381%(x382+(x383|x384)));

	if (t87 != 1566491448LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x387 = -193626223026LL;
	uint64_t x388 = 18LLU;
	static volatile uint64_t t88 = 42544414LLU;

	t88 = (x385%(x386+(x387|x388)));

	if (t88 != 193626157474LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x389 = INT32_MIN;
	int32_t x392 = -1718;
	volatile int32_t t89 = 202249;

	t89 = (x389%(x390+(x391|x392)));

	if (t89 != -80) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x393 = 10U;
	static uint32_t x394 = 7U;
	int32_t x395 = INT32_MAX;
	int8_t x396 = 0;

	t90 = (x393%(x394+(x395|x396)));

	if (t90 != 10U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x397 = -677;
	uint8_t x398 = 4U;
	int8_t x399 = INT8_MIN;
	int16_t x400 = INT16_MIN;

	t91 = (x397%(x398+(x399|x400)));

	if (t91 != -57) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x401 = 26U;
	static int64_t x404 = INT64_MAX;
	int64_t t92 = -746403LL;

	t92 = (x401%(x402+(x403|x404)));

	if (t92 != 26LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x405 = 1;
	uint64_t x406 = UINT64_MAX;
	volatile uint64_t x407 = 195171658544531403LLU;
	volatile int16_t x408 = INT16_MAX;
	volatile uint64_t t93 = 887933070673133713LLU;

	t93 = (x405%(x406+(x407|x408)));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x409 = -1;
	static volatile int64_t x411 = 1970002491980042165LL;
	int8_t x412 = -13;
	uint64_t t94 = 66375LLU;

	t94 = (x409%(x410+(x411|x412)));

	if (t94 != 4137867366116091LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x413 = 10268376U;
	static int16_t x414 = 84;
	int8_t x415 = -14;
	volatile uint32_t t95 = 10400U;

	t95 = (x413%(x414+(x415|x416)));

	if (t95 != 6U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x419 = INT32_MIN;
	int64_t x420 = -1LL;
	volatile int64_t t96 = 217833573019LL;

	t96 = (x417%(x418+(x419|x420)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x421 = 302570788;
	static volatile uint32_t x422 = UINT32_MAX;
	uint8_t x423 = 97U;
	static volatile int32_t x424 = -1;
	volatile uint32_t t97 = 369671189U;

	t97 = (x421%(x422+(x423|x424)));

	if (t97 != 302570788U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x426 = 0U;
	int64_t x428 = INT64_MIN;
	volatile int64_t t98 = 5227338LL;

	t98 = (x425%(x426+(x427|x428)));

	if (t98 != 35489LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x429 = UINT16_MAX;
	static volatile int64_t x430 = 57244939666374LL;
	int64_t x431 = -1130208260658LL;
	uint8_t x432 = UINT8_MAX;
	int64_t t99 = 241543LL;

	t99 = (x429%(x430+(x431|x432)));

	if (t99 != 65535LL) { NG(); } else { ; }
	
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


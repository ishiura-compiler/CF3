#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x7 = 191315776U;
volatile uint64_t x14 = UINT64_MAX;
int64_t x19 = INT64_MAX;
static volatile uint64_t x58 = UINT64_MAX;
uint8_t x61 = 9U;
static int16_t x67 = INT16_MIN;
int32_t x73 = 45;
volatile int32_t x75 = -544351;
static volatile int64_t t14 = -16413388LL;
static int64_t x79 = INT64_MIN;
uint8_t x94 = 4U;
int64_t t18 = -489LL;
int8_t x99 = INT8_MIN;
uint64_t t21 = 215700430002079LLU;
static uint64_t x109 = 64359401LLU;
uint32_t x113 = 3U;
static int32_t x114 = -1;
static int8_t x116 = INT8_MIN;
uint16_t x117 = 3U;
volatile uint64_t t24 = 342521286623LLU;
int32_t x122 = 52180;
int8_t x124 = INT8_MIN;
uint32_t x127 = 25U;
volatile int16_t x129 = INT16_MIN;
static uint64_t x152 = UINT64_MAX;
int32_t x153 = INT32_MIN;
volatile uint64_t t32 = 781252046625LLU;
uint64_t x166 = UINT64_MAX;
int32_t x169 = INT32_MIN;
volatile int8_t x192 = INT8_MAX;
uint64_t t41 = 3317900663766LLU;
static volatile int16_t x194 = INT16_MIN;
volatile uint64_t t42 = 23273LLU;
uint32_t x201 = 2U;
int16_t x207 = -1;
volatile uint8_t x208 = 1U;
volatile int32_t t45 = 79;
static volatile int16_t x213 = -1;
int8_t x215 = INT8_MIN;
static int16_t x216 = INT16_MAX;
int8_t x220 = INT8_MIN;
int16_t x226 = INT16_MIN;
static uint64_t x228 = 27624208LLU;
int64_t x233 = -12LL;
static int64_t t51 = 38LL;
int16_t x243 = -1;
int16_t x257 = 1;
int64_t x260 = INT64_MIN;
volatile int32_t x264 = -1;
static int16_t x265 = INT16_MAX;
int8_t x268 = -1;
volatile int32_t t58 = 96888797;
int64_t x273 = INT64_MAX;
static uint16_t x285 = 0U;
int8_t x296 = INT8_MAX;
static volatile int64_t t65 = 3086826138301673LL;
int16_t x299 = 0;
int8_t x308 = 3;
volatile int16_t x314 = INT16_MIN;
volatile int64_t x323 = INT64_MAX;
int8_t x325 = INT8_MIN;
int8_t x327 = INT8_MIN;
uint64_t x345 = UINT64_MAX;
uint32_t x349 = 48U;
volatile int64_t x351 = 944182679298248LL;
int16_t x352 = 2570;
static int8_t x359 = -1;
uint32_t t78 = 929182371U;
uint32_t x363 = UINT32_MAX;
uint16_t x366 = 31U;
volatile uint8_t x370 = UINT8_MAX;
int32_t x371 = 660;
int64_t t81 = -4500554132LL;
int16_t x374 = INT16_MAX;
int16_t x377 = -6173;
static uint16_t x379 = UINT16_MAX;
volatile int64_t t84 = 31694LL;
int8_t x385 = -1;
int32_t x387 = -6;
volatile int64_t t85 = -85901367245LL;
int8_t x389 = 2;
volatile int64_t t87 = -14686808911LL;
int8_t x404 = -1;
int64_t x406 = INT64_MIN;
volatile int16_t x408 = -64;
volatile uint8_t x413 = UINT8_MAX;
int8_t x419 = -56;
uint32_t x426 = 0U;
int32_t x427 = -1;
int64_t x428 = INT64_MIN;
volatile uint64_t x434 = 124698558538831LLU;
volatile int16_t x437 = INT16_MIN;
uint32_t x440 = UINT32_MAX;
static int16_t x452 = INT16_MIN;
uint64_t t99 = 128174LLU;


void f0(void) {
	int32_t x1 = 313;
	int64_t x2 = 663LL;
	volatile int64_t x3 = -12986LL;
	int8_t x4 = INT8_MIN;
	volatile int64_t t0 = 278971047LL;

	t0 = (((x1&x2)*x3)/x4);

	if (t0 != 1724LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MAX;
	static uint16_t x6 = 12353U;
	static int8_t x8 = INT8_MAX;
	volatile uint32_t t1 = 292321808U;

	t1 = (((x5&x6)*x7)/x8);

	if (t1 != 8596599U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x13 = INT64_MIN;
	int64_t x15 = INT64_MAX;
	volatile int64_t x16 = INT64_MIN;
	static uint64_t t2 = 28LLU;

	t2 = (((x13&x14)*x15)/x16);

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MAX;
	int32_t x18 = INT32_MIN;
	int16_t x20 = -1;
	static int64_t t3 = 251190LL;

	t3 = (((x17&x18)*x19)/x20);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = -1;
	static int32_t x26 = -211594996;
	int64_t x27 = -1LL;
	int16_t x28 = INT16_MAX;
	volatile int64_t t4 = 1006346752079526LL;

	t4 = (((x25&x26)*x27)/x28);

	if (t4 != 6457LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x33 = 1722904376U;
	int16_t x34 = -736;
	int32_t x35 = INT32_MAX;
	uint8_t x36 = UINT8_MAX;
	volatile uint32_t t5 = 107956U;

	t5 = (((x33&x34)*x35)/x36);

	if (t5 != 10086523U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x37 = UINT64_MAX;
	int32_t x38 = INT32_MAX;
	int32_t x39 = 602826;
	static volatile uint16_t x40 = 80U;
	uint64_t t6 = 201249271828444443LLU;

	t6 = (((x37&x38)*x39)/x40);

	if (t6 != 16181987212330LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = -613985;
	int8_t x42 = INT8_MAX;
	int64_t x43 = -1LL;
	static uint8_t x44 = 11U;
	int64_t t7 = 301LL;

	t7 = (((x41&x42)*x43)/x44);

	if (t7 != -2LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x45 = -1;
	static uint32_t x46 = 23662173U;
	int8_t x47 = -1;
	uint32_t x48 = UINT32_MAX;
	static uint32_t t8 = 7U;

	t8 = (((x45&x46)*x47)/x48);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x49 = UINT8_MAX;
	volatile uint64_t x50 = UINT64_MAX;
	int64_t x51 = -9817LL;
	int8_t x52 = -15;
	static volatile uint64_t t9 = 10LLU;

	t9 = (((x49&x50)*x51)/x52);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x53 = -112904089;
	int8_t x54 = -1;
	int32_t x55 = 1;
	int64_t x56 = INT64_MAX;
	int64_t t10 = -104727063LL;

	t10 = (((x53&x54)*x55)/x56);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x57 = INT16_MAX;
	static int8_t x59 = 41;
	uint32_t x60 = UINT32_MAX;
	volatile uint64_t t11 = 1711456213266955520LLU;

	t11 = (((x57&x58)*x59)/x60);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x62 = 35383212782952LLU;
	int64_t x63 = INT64_MAX;
	static uint64_t x64 = 1831144259827795709LLU;
	static uint64_t t12 = 136230050747817LLU;

	t12 = (((x61&x62)*x63)/x64);

	if (t12 != 10LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = 603268248;
	int16_t x66 = 9;
	int32_t x68 = -1;
	int32_t t13 = -1406;

	t13 = (((x65&x66)*x67)/x68);

	if (t13 != 262144) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x74 = 336641797LL;
	volatile uint32_t x76 = 479288U;

	t14 = (((x73&x74)*x75)/x76);

	if (t14 != -5LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x77 = INT64_MIN;
	volatile int8_t x78 = 1;
	uint8_t x80 = 62U;
	int64_t t15 = -147977411263LL;

	t15 = (((x77&x78)*x79)/x80);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x85 = 53U;
	volatile int16_t x86 = INT16_MIN;
	int16_t x87 = -1;
	volatile int16_t x88 = INT16_MIN;
	volatile int32_t t16 = 9727;

	t16 = (((x85&x86)*x87)/x88);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x89 = INT32_MIN;
	uint64_t x90 = 8576918151320LLU;
	volatile uint32_t x91 = 1623760U;
	static int32_t x92 = -2740;
	volatile uint64_t t17 = 15500985182LLU;

	t17 = (((x89&x90)*x91)/x92);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = 42745682593227LL;
	int64_t x95 = INT64_MAX;
	int8_t x96 = INT8_MAX;

	t18 = (((x93&x94)*x95)/x96);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x97 = 7U;
	static volatile uint64_t x98 = 95LLU;
	int64_t x100 = INT64_MIN;
	uint64_t t19 = 1112640LLU;

	t19 = (((x97&x98)*x99)/x100);

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x101 = INT16_MAX;
	uint32_t x102 = 1U;
	uint64_t x103 = 3127242592081782LLU;
	volatile int64_t x104 = INT64_MIN;
	static volatile uint64_t t20 = 4587426249867LLU;

	t20 = (((x101&x102)*x103)/x104);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x105 = -1LL;
	volatile uint64_t x106 = 17344LLU;
	static int64_t x107 = -1LL;
	static int32_t x108 = 942201;

	t21 = (((x105&x106)*x107)/x108);

	if (t21 != 19578353317083LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x110 = INT16_MAX;
	int32_t x111 = -1076869;
	int8_t x112 = INT8_MAX;
	volatile uint64_t t22 = 257928175302LLU;

	t22 = (((x109&x110)*x111)/x112);

	if (t22 != 145249953310442346LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x115 = 4;
	static uint32_t t23 = 325U;

	t23 = (((x113&x114)*x115)/x116);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x118 = UINT64_MAX;
	int32_t x119 = -1;
	volatile int16_t x120 = INT16_MIN;

	t24 = (((x117&x118)*x119)/x120);

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x121 = -49760041080775LL;
	static uint32_t x123 = 3909U;
	volatile int64_t t25 = -851814LL;

	t25 = (((x121&x122)*x123)/x124);

	if (t25 != -563384LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x125 = -368189428LL;
	static volatile int64_t x126 = -388508877LL;
	int64_t x128 = INT64_MIN;
	int64_t t26 = 285712466LL;

	t26 = (((x125&x126)*x127)/x128);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x130 = -4;
	volatile int16_t x131 = -1;
	int64_t x132 = INT64_MAX;
	volatile int64_t t27 = -5810657706LL;

	t27 = (((x129&x130)*x131)/x132);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x133 = -1;
	int64_t x134 = -66139576077LL;
	volatile int16_t x135 = INT16_MAX;
	int32_t x136 = -150;
	int64_t t28 = 1LL;

	t28 = (((x133&x134)*x135)/x136);

	if (t28 != 14447969928767LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x141 = 12;
	int32_t x142 = INT32_MIN;
	uint32_t x143 = 227684U;
	int8_t x144 = INT8_MIN;
	volatile uint32_t t29 = 275U;

	t29 = (((x141&x142)*x143)/x144);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x145 = 3U;
	uint32_t x146 = UINT32_MAX;
	static int8_t x147 = INT8_MIN;
	int8_t x148 = 3;
	volatile uint32_t t30 = 258105446U;

	t30 = (((x145&x146)*x147)/x148);

	if (t30 != 1431655637U) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x149 = 28750744438816926LL;
	static int16_t x150 = -1;
	int8_t x151 = -15;
	uint64_t t31 = 383466LLU;

	t31 = (((x149&x150)*x151)/x152);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x154 = 807218311;
	static volatile int64_t x155 = -533696140826LL;
	volatile uint64_t x156 = 1074065LLU;

	t32 = (((x153&x154)*x155)/x156);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x157 = 25U;
	uint16_t x158 = 0U;
	uint32_t x159 = 584629U;
	volatile uint32_t x160 = 3470U;
	uint32_t t33 = 5418523U;

	t33 = (((x157&x158)*x159)/x160);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x161 = UINT8_MAX;
	static uint64_t x162 = 40448184539626874LLU;
	uint8_t x163 = UINT8_MAX;
	static int16_t x164 = INT16_MAX;
	static volatile uint64_t t34 = 851218189154LLU;

	t34 = (((x161&x162)*x163)/x164);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x165 = -1LL;
	static int16_t x167 = -1;
	volatile uint8_t x168 = UINT8_MAX;
	uint64_t t35 = 86876878LLU;

	t35 = (((x165&x166)*x167)/x168);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x170 = INT64_MAX;
	static int8_t x171 = -1;
	int32_t x172 = INT32_MIN;
	int64_t t36 = 12479LL;

	t36 = (((x169&x170)*x171)/x172);

	if (t36 != 4294967295LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x173 = UINT32_MAX;
	uint8_t x174 = 57U;
	static int32_t x175 = INT32_MIN;
	volatile int8_t x176 = 28;
	volatile uint32_t t37 = 301646634U;

	t37 = (((x173&x174)*x175)/x176);

	if (t37 != 76695844U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x177 = -1LL;
	uint16_t x178 = 86U;
	static uint16_t x179 = 14U;
	int32_t x180 = INT32_MIN;
	int64_t t38 = -3154LL;

	t38 = (((x177&x178)*x179)/x180);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x181 = INT32_MIN;
	int64_t x182 = -31875173LL;
	volatile int32_t x183 = -1;
	int64_t x184 = INT64_MAX;
	int64_t t39 = -7351LL;

	t39 = (((x181&x182)*x183)/x184);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x185 = 1U;
	uint8_t x186 = 15U;
	static int8_t x187 = INT8_MIN;
	uint16_t x188 = 2U;
	int32_t t40 = 984762569;

	t40 = (((x185&x186)*x187)/x188);

	if (t40 != -64) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x189 = UINT8_MAX;
	volatile int8_t x190 = INT8_MIN;
	uint64_t x191 = 328LLU;

	t41 = (((x189&x190)*x191)/x192);

	if (t41 != 330LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x193 = 199LLU;
	int8_t x195 = 0;
	int16_t x196 = INT16_MIN;

	t42 = (((x193&x194)*x195)/x196);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x197 = 1059283543923626LL;
	uint16_t x198 = 5358U;
	static int8_t x199 = INT8_MIN;
	static volatile uint64_t x200 = 7257082LLU;
	volatile uint64_t t43 = 10251232381LLU;

	t43 = (((x197&x198)*x199)/x200);

	if (t43 != 2541895499280LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x202 = 1;
	int8_t x203 = 5;
	int64_t x204 = -1LL;
	int64_t t44 = 18773588LL;

	t44 = (((x201&x202)*x203)/x204);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x205 = 6201U;
	int16_t x206 = INT16_MIN;

	t45 = (((x205&x206)*x207)/x208);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x214 = 149;
	int32_t t46 = -18;

	t46 = (((x213&x214)*x215)/x216);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x217 = INT8_MIN;
	uint64_t x218 = UINT64_MAX;
	static int8_t x219 = INT8_MIN;
	volatile uint64_t t47 = 14LLU;

	t47 = (((x217&x218)*x219)/x220);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint8_t x221 = 5U;
	static int16_t x222 = INT16_MAX;
	uint64_t x223 = UINT64_MAX;
	static uint64_t x224 = 7226711879530653LLU;
	volatile uint64_t t48 = 7775590221069680LLU;

	t48 = (((x221&x222)*x223)/x224);

	if (t48 != 2552LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x225 = 5U;
	volatile int16_t x227 = -1;
	static volatile uint64_t t49 = 1521508612399LLU;

	t49 = (((x225&x226)*x227)/x228);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x229 = UINT16_MAX;
	static uint8_t x230 = UINT8_MAX;
	uint16_t x231 = 10U;
	int64_t x232 = INT64_MIN;
	int64_t t50 = -4790228LL;

	t50 = (((x229&x230)*x231)/x232);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x234 = INT8_MAX;
	int16_t x235 = INT16_MAX;
	volatile int64_t x236 = INT64_MIN;

	t51 = (((x233&x234)*x235)/x236);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x237 = INT8_MAX;
	int64_t x238 = INT64_MIN;
	uint32_t x239 = 124U;
	volatile uint32_t x240 = 7907U;
	volatile int64_t t52 = 15547361633908977LL;

	t52 = (((x237&x238)*x239)/x240);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x241 = 105849;
	int64_t x242 = 4374919073443LL;
	int16_t x244 = 15864;
	int64_t t53 = -458022LL;

	t53 = (((x241&x242)*x243)/x244);

	if (t53 != -4LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x245 = INT32_MIN;
	uint8_t x246 = UINT8_MAX;
	int8_t x247 = -1;
	int8_t x248 = 20;
	volatile int32_t t54 = -80272349;

	t54 = (((x245&x246)*x247)/x248);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x253 = -1;
	int16_t x254 = 4;
	volatile uint32_t x255 = 0U;
	uint32_t x256 = 2123152711U;
	static uint32_t t55 = 24561U;

	t55 = (((x253&x254)*x255)/x256);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x258 = 2LLU;
	static int8_t x259 = -1;
	volatile uint64_t t56 = 48578LLU;

	t56 = (((x257&x258)*x259)/x260);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x261 = INT8_MIN;
	int8_t x262 = 10;
	int32_t x263 = INT32_MIN;
	int32_t t57 = -58;

	t57 = (((x261&x262)*x263)/x264);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x266 = INT16_MIN;
	int8_t x267 = -1;

	t58 = (((x265&x266)*x267)/x268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x269 = INT16_MAX;
	int16_t x270 = INT16_MAX;
	int8_t x271 = INT8_MIN;
	volatile int64_t x272 = 1LL;
	static int64_t t59 = -2628LL;

	t59 = (((x269&x270)*x271)/x272);

	if (t59 != -4194176LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x274 = 1;
	uint16_t x275 = UINT16_MAX;
	uint16_t x276 = 1237U;
	static int64_t t60 = 92LL;

	t60 = (((x273&x274)*x275)/x276);

	if (t60 != 52LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x277 = -59;
	volatile int8_t x278 = -29;
	static volatile int8_t x279 = -1;
	int16_t x280 = -1;
	int32_t t61 = 34493;

	t61 = (((x277&x278)*x279)/x280);

	if (t61 != -63) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x281 = INT16_MAX;
	int16_t x282 = INT16_MAX;
	int64_t x283 = -1LL;
	volatile uint16_t x284 = UINT16_MAX;
	int64_t t62 = 166011LL;

	t62 = (((x281&x282)*x283)/x284);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x286 = UINT64_MAX;
	volatile int8_t x287 = INT8_MIN;
	int32_t x288 = -1;
	volatile uint64_t t63 = 915LLU;

	t63 = (((x285&x286)*x287)/x288);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x289 = INT8_MIN;
	volatile int16_t x290 = INT16_MAX;
	uint8_t x291 = 10U;
	static uint64_t x292 = UINT64_MAX;
	volatile uint64_t t64 = 341961LLU;

	t64 = (((x289&x290)*x291)/x292);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x293 = -1LL;
	uint16_t x294 = 54U;
	int16_t x295 = -7;

	t65 = (((x293&x294)*x295)/x296);

	if (t65 != -2LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x297 = 1000644297U;
	uint16_t x298 = UINT16_MAX;
	static int32_t x300 = -91500819;
	static uint32_t t66 = 5U;

	t66 = (((x297&x298)*x299)/x300);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x301 = -52;
	static int8_t x302 = INT8_MAX;
	int32_t x303 = -1;
	volatile uint16_t x304 = 1U;
	volatile int32_t t67 = -11;

	t67 = (((x301&x302)*x303)/x304);

	if (t67 != -76) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x305 = 23U;
	int32_t x306 = INT32_MAX;
	volatile int16_t x307 = -1;
	volatile int32_t t68 = 594;

	t68 = (((x305&x306)*x307)/x308);

	if (t68 != -7) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x309 = UINT8_MAX;
	int64_t x310 = -1LL;
	static int32_t x311 = INT32_MAX;
	int64_t x312 = 660878716LL;
	static volatile int64_t t69 = 3LL;

	t69 = (((x309&x310)*x311)/x312);

	if (t69 != 828LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x313 = 286880629732084LL;
	static int8_t x315 = INT8_MIN;
	int32_t x316 = INT32_MIN;
	static int64_t t70 = 761LL;

	t70 = (((x313&x314)*x315)/x316);

	if (t70 != 17099418LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x321 = -1;
	static int64_t x322 = -1LL;
	uint64_t x324 = 10901LLU;
	uint64_t t71 = 10925713LLU;

	t71 = (((x321&x322)*x323)/x324);

	if (t71 != 846103296656708LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x326 = 3508;
	int16_t x328 = 60;
	volatile int32_t t72 = -43346;

	t72 = (((x325&x326)*x327)/x328);

	if (t72 != -7372) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x333 = -1LL;
	uint16_t x334 = UINT16_MAX;
	static int16_t x335 = -1;
	uint8_t x336 = 29U;
	volatile int64_t t73 = 110213114994898LL;

	t73 = (((x333&x334)*x335)/x336);

	if (t73 != -2259LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x341 = INT32_MIN;
	int8_t x342 = INT8_MAX;
	static uint16_t x343 = 28627U;
	int64_t x344 = -246651056071671128LL;
	volatile int64_t t74 = 8488391949455LL;

	t74 = (((x341&x342)*x343)/x344);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x346 = 11;
	int8_t x347 = INT8_MIN;
	static int32_t x348 = INT32_MIN;
	static uint64_t t75 = 108LLU;

	t75 = (((x345&x346)*x347)/x348);

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x350 = INT64_MIN;
	int64_t t76 = -37122LL;

	t76 = (((x349&x350)*x351)/x352);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x353 = UINT16_MAX;
	static int32_t x354 = INT32_MIN;
	uint16_t x355 = UINT16_MAX;
	uint64_t x356 = 9LLU;
	static volatile uint64_t t77 = 26721547426LLU;

	t77 = (((x353&x354)*x355)/x356);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x357 = 1U;
	volatile uint16_t x358 = 311U;
	volatile int32_t x360 = 1920;

	t78 = (((x357&x358)*x359)/x360);

	if (t78 != 2236962U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x361 = 4U;
	uint32_t x362 = 0U;
	int8_t x364 = -1;
	volatile uint32_t t79 = 14385598U;

	t79 = (((x361&x362)*x363)/x364);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x365 = -2665391;
	static uint32_t x367 = 353345U;
	int32_t x368 = INT32_MAX;
	volatile uint32_t t80 = 439334U;

	t80 = (((x365&x366)*x367)/x368);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x369 = 12;
	int64_t x372 = -7569824010391LL;

	t81 = (((x369&x370)*x371)/x372);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x373 = UINT32_MAX;
	static uint32_t x375 = UINT32_MAX;
	uint8_t x376 = 94U;
	uint32_t t82 = 202628149U;

	t82 = (((x373&x374)*x375)/x376);

	if (t82 != 45690792U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x378 = -30;
	uint8_t x380 = 22U;
	volatile int32_t t83 = -24284567;

	t83 = (((x377&x378)*x379)/x380);

	if (t83 != -18391504) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x381 = INT64_MIN;
	uint8_t x382 = 25U;
	volatile int16_t x383 = 7;
	static int32_t x384 = -10738335;

	t84 = (((x381&x382)*x383)/x384);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x386 = 11522U;
	int64_t x388 = -1000541556LL;

	t85 = (((x385&x386)*x387)/x388);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x390 = 127U;
	int16_t x391 = INT16_MIN;
	static volatile int8_t x392 = -1;
	int32_t t86 = -171138110;

	t86 = (((x389&x390)*x391)/x392);

	if (t86 != 65536) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x397 = 959129U;
	int8_t x398 = INT8_MAX;
	int64_t x399 = -1LL;
	int64_t x400 = -585761LL;

	t87 = (((x397&x398)*x399)/x400);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x401 = -596500;
	int32_t x402 = -1758742;
	static int8_t x403 = -1;
	int32_t t88 = -9;

	t88 = (((x401&x402)*x403)/x404);

	if (t88 != -1826328) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x405 = 52U;
	int8_t x407 = -1;
	int64_t t89 = -772047413765115LL;

	t89 = (((x405&x406)*x407)/x408);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x409 = 1664385;
	int16_t x410 = INT16_MIN;
	int16_t x411 = -1;
	volatile uint32_t x412 = UINT32_MAX;
	volatile uint32_t t90 = 98U;

	t90 = (((x409&x410)*x411)/x412);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x414 = INT32_MIN;
	int8_t x415 = 0;
	static uint64_t x416 = 161959776460757552LLU;
	uint64_t t91 = 7733319LLU;

	t91 = (((x413&x414)*x415)/x416);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x417 = 532003249480LLU;
	int16_t x418 = -1;
	int8_t x420 = INT8_MIN;
	uint64_t t92 = 486LLU;

	t92 = (((x417&x418)*x419)/x420);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x421 = INT64_MIN;
	uint64_t x422 = 82462343256LLU;
	volatile int16_t x423 = 7492;
	uint32_t x424 = 52095761U;
	volatile uint64_t t93 = 74861112LLU;

	t93 = (((x421&x422)*x423)/x424);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x425 = INT64_MIN;
	int64_t t94 = -18380424660LL;

	t94 = (((x425&x426)*x427)/x428);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x433 = 1109696642U;
	int64_t x435 = INT64_MAX;
	uint64_t x436 = 58563421383141LLU;
	volatile uint64_t t95 = 1568018699058LLU;

	t95 = (((x433&x434)*x435)/x436);

	if (t95 != 314987LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x438 = 53U;
	volatile int8_t x439 = INT8_MAX;
	static uint32_t t96 = 6U;

	t96 = (((x437&x438)*x439)/x440);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x441 = 6184U;
	static uint8_t x442 = 68U;
	volatile uint8_t x443 = 125U;
	static int64_t x444 = INT64_MIN;
	int64_t t97 = -5918907LL;

	t97 = (((x441&x442)*x443)/x444);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x445 = 1U;
	static uint16_t x446 = 41U;
	int16_t x447 = -1673;
	volatile int8_t x448 = INT8_MIN;
	volatile uint32_t t98 = 15368U;

	t98 = (((x445&x446)*x447)/x448);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x449 = 994373468146LLU;
	int8_t x450 = 1;
	volatile uint16_t x451 = 1436U;

	t99 = (((x449&x450)*x451)/x452);

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


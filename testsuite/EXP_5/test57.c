#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = 0;
uint16_t x8 = 3U;
volatile int64_t t1 = -120543330329LL;
int16_t x9 = -1;
uint8_t x12 = 23U;
int64_t x14 = INT64_MIN;
uint32_t x15 = 11012U;
volatile int8_t x20 = 4;
int16_t x23 = -1;
volatile int16_t x37 = 0;
volatile int16_t x66 = -1;
int64_t t10 = -114664726969813500LL;
int32_t x70 = 26978616;
uint32_t x72 = 68885U;
static uint8_t x73 = 4U;
uint32_t x80 = 1552375U;
int8_t x96 = INT8_MIN;
int64_t x97 = INT64_MIN;
int16_t x109 = -1;
static int32_t x110 = -134;
int8_t x122 = INT8_MAX;
int32_t x128 = 1029;
int16_t x130 = -163;
volatile int8_t x131 = -22;
volatile int8_t x133 = INT8_MIN;
uint16_t x135 = 2442U;
volatile uint64_t t25 = 109597128388278490LLU;
int8_t x151 = INT8_MIN;
static uint16_t x156 = 5U;
uint8_t x160 = UINT8_MAX;
uint16_t x164 = UINT16_MAX;
volatile int64_t t29 = -65182276LL;
int64_t x168 = INT64_MAX;
uint16_t x174 = UINT16_MAX;
uint64_t x179 = 785992329105976LLU;
volatile int32_t x180 = -1;
static int16_t x186 = -1;
int64_t x190 = INT64_MAX;
int64_t t35 = 1073499472LL;
int8_t x195 = -18;
int64_t t37 = 2728698992817568876LL;
int16_t x210 = INT16_MAX;
uint32_t x212 = 11322U;
static volatile int64_t x225 = INT64_MAX;
static uint8_t x229 = 10U;
int32_t t42 = 717975;
volatile int64_t x253 = -115959433456LL;
int8_t x255 = INT8_MIN;
int32_t x259 = -1;
int8_t x264 = INT8_MIN;
int64_t x270 = INT64_MIN;
int64_t x273 = INT64_MIN;
uint16_t x287 = 11063U;
uint8_t x297 = 2U;
uint64_t t55 = 1055LLU;
volatile int32_t x302 = -7981;
int16_t x303 = -1;
int64_t x311 = -1LL;
int32_t x323 = -1;
int32_t x348 = -1;
volatile int16_t x350 = INT16_MIN;
volatile uint16_t x356 = 32097U;
static int64_t x371 = -588277431486LL;
uint64_t t68 = 782744831817042697LLU;
static uint64_t t69 = 359164279136LLU;
uint16_t x382 = UINT16_MAX;
int64_t x383 = -1LL;
int8_t x391 = INT8_MIN;
uint64_t x393 = UINT64_MAX;
int32_t x395 = INT32_MAX;
int64_t x397 = -1LL;
volatile int64_t t74 = -60265889300977LL;
int32_t x404 = INT32_MAX;
volatile uint64_t x413 = UINT64_MAX;
int64_t x415 = 14232039687530LL;
volatile uint16_t x419 = UINT16_MAX;
int8_t x447 = 0;
uint64_t t80 = 205LLU;
int64_t t82 = -369804158960602533LL;
int64_t t83 = 5988023462102LL;
static int64_t x466 = 898862755945058428LL;
static int64_t x468 = 4982682137190LL;
uint64_t x470 = 275163402LLU;
volatile uint64_t t85 = 2035LLU;
int8_t x480 = INT8_MIN;
uint64_t t88 = 26378853181282753LLU;
int16_t x493 = 0;
volatile int16_t x511 = 0;
uint16_t x525 = 16249U;
uint8_t x535 = 5U;
volatile uint64_t x538 = UINT64_MAX;
static volatile uint64_t t98 = 3017530LLU;
static volatile int32_t x541 = INT32_MIN;
uint64_t t99 = 179LLU;


void f0(void) {
	int8_t x2 = -1;
	int8_t x3 = INT8_MIN;
	static volatile int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 97689;

	t0 = (x1%((x2+x3)%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 1;
	int16_t x6 = INT16_MIN;
	int64_t x7 = 257302452686553LL;

	t1 = (x5%((x6+x7)%x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x10 = INT16_MIN;
	uint32_t x11 = 1999061260U;
	volatile uint32_t t2 = 44999382U;

	t2 = (x9%((x10+x11)%x12));

	if (t2 != 3U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = 92U;
	uint32_t x16 = UINT32_MAX;
	int64_t t3 = 132934156LL;

	t3 = (x13%((x14+x15)%x16));

	if (t3 != 92LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = -1;
	volatile int16_t x18 = -1;
	int8_t x19 = INT8_MIN;
	static volatile int32_t t4 = 64;

	t4 = (x17%((x18+x19)%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	uint32_t x22 = 0U;
	int32_t x24 = 1609369;
	static int64_t t5 = -24706715571LL;

	t5 = (x21%((x22+x23)%x24));

	if (t5 != -248502LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = -31;
	static uint32_t x26 = UINT32_MAX;
	int32_t x27 = INT32_MIN;
	int16_t x28 = INT16_MIN;
	uint32_t t6 = 130411U;

	t6 = (x25%((x26+x27)%x28));

	if (t6 != 2147483618U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x33 = INT32_MIN;
	int16_t x34 = -1;
	static int16_t x35 = INT16_MIN;
	int16_t x36 = INT16_MAX;
	volatile int32_t t7 = -15274;

	t7 = (x33%((x34+x35)%x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x38 = INT16_MIN;
	int8_t x39 = -1;
	static int64_t x40 = INT64_MIN;
	volatile int64_t t8 = -1598348LL;

	t8 = (x37%((x38+x39)%x40));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 176010656U;
	uint8_t x42 = 4U;
	int32_t x43 = INT32_MIN;
	uint32_t x44 = UINT32_MAX;
	uint32_t t9 = 14U;

	t9 = (x41%((x42+x43)%x44));

	if (t9 != 176010656U) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x65 = INT64_MIN;
	int16_t x67 = INT16_MIN;
	int8_t x68 = INT8_MIN;

	t10 = (x65%((x66+x67)%x68));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x69 = UINT32_MAX;
	int64_t x71 = INT64_MIN;
	volatile int64_t t11 = -69355LL;

	t11 = (x69%((x70+x71)%x72));

	if (t11 != 6143LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x74 = UINT32_MAX;
	static int32_t x75 = 14669;
	static volatile uint64_t x76 = 1671457858014658LLU;
	static volatile uint64_t t12 = 1177690LLU;

	t12 = (x73%((x74+x75)%x76));

	if (t12 != 4LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x77 = 7376947944LLU;
	uint8_t x78 = 65U;
	int8_t x79 = -16;
	volatile uint64_t t13 = 12LLU;

	t13 = (x77%((x78+x79)%x80));

	if (t13 != 2LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x85 = INT32_MIN;
	int32_t x86 = 117291;
	volatile int8_t x87 = INT8_MIN;
	int16_t x88 = INT16_MAX;
	static int32_t t14 = 7;

	t14 = (x85%((x86+x87)%x88));

	if (t14 != -7224) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x89 = UINT16_MAX;
	int32_t x90 = 966137134;
	int32_t x91 = INT32_MIN;
	volatile uint64_t x92 = UINT64_MAX;
	uint64_t t15 = 1000818819656026304LLU;

	t15 = (x89%((x90+x91)%x92));

	if (t15 != 65535LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x93 = -1LL;
	uint8_t x94 = UINT8_MAX;
	uint8_t x95 = 0U;
	int64_t t16 = -2331928669LL;

	t16 = (x93%((x94+x95)%x96));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x98 = INT8_MIN;
	volatile uint32_t x99 = UINT32_MAX;
	volatile uint8_t x100 = 5U;
	static volatile int64_t t17 = 1421304875864946860LL;

	t17 = (x97%((x98+x99)%x100));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x105 = -89;
	uint32_t x106 = 125U;
	int32_t x107 = -1;
	int32_t x108 = -1;
	volatile uint32_t t18 = 238U;

	t18 = (x105%((x106+x107)%x108));

	if (t18 != 39U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x111 = 3632LL;
	int64_t x112 = INT64_MAX;
	volatile int64_t t19 = -59036637216LL;

	t19 = (x109%((x110+x111)%x112));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x113 = 4;
	uint64_t x114 = 364LLU;
	int8_t x115 = -1;
	uint32_t x116 = 2110083451U;
	volatile uint64_t t20 = 941LLU;

	t20 = (x113%((x114+x115)%x116));

	if (t20 != 4LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x121 = INT16_MIN;
	int64_t x123 = INT64_MIN;
	uint8_t x124 = 19U;
	int64_t t21 = 461486378436LL;

	t21 = (x121%((x122+x123)%x124));

	if (t21 != -3LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x125 = 7499U;
	int64_t x126 = INT64_MIN;
	int64_t x127 = INT64_MAX;
	volatile int64_t t22 = -14LL;

	t22 = (x125%((x126+x127)%x128));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x129 = 2901239151LLU;
	int16_t x132 = 104;
	static volatile uint64_t t23 = 390LLU;

	t23 = (x129%((x130+x131)%x132));

	if (t23 != 2901239151LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x134 = INT64_MIN;
	static volatile int8_t x136 = INT8_MIN;
	volatile int64_t t24 = 8935001115701291LL;

	t24 = (x133%((x134+x135)%x136));

	if (t24 != -10LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x141 = 15U;
	static int32_t x142 = -1;
	uint64_t x143 = 1840LLU;
	uint16_t x144 = 25789U;

	t25 = (x141%((x142+x143)%x144));

	if (t25 != 15LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x149 = -567127460LL;
	volatile int64_t x150 = -1LL;
	volatile int64_t x152 = 1684LL;
	int64_t t26 = -17293868663281021LL;

	t26 = (x149%((x150+x151)%x152));

	if (t26 != -116LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x153 = -61;
	int16_t x154 = -307;
	static uint8_t x155 = 26U;
	int32_t t27 = 82;

	t27 = (x153%((x154+x155)%x156));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x157 = INT32_MIN;
	static int16_t x158 = -895;
	uint32_t x159 = UINT32_MAX;
	volatile uint32_t t28 = 2171972U;

	t28 = (x157%((x158+x159)%x160));

	if (t28 != 23U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x161 = -1LL;
	static int32_t x162 = INT32_MIN;
	uint8_t x163 = 0U;

	t29 = (x161%((x162+x163)%x164));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x165 = 15LLU;
	static volatile uint32_t x166 = UINT32_MAX;
	int16_t x167 = INT16_MIN;
	static volatile uint64_t t30 = 50452488LLU;

	t30 = (x165%((x166+x167)%x168));

	if (t30 != 15LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x173 = INT16_MIN;
	uint32_t x175 = 15415821U;
	int32_t x176 = INT32_MAX;
	static volatile uint32_t t31 = 886U;

	t31 = (x173%((x174+x175)%x176));

	if (t31 != 6598916U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x177 = INT16_MIN;
	int32_t x178 = -423;
	volatile uint64_t t32 = 1059144262207LLU;

	t32 = (x177%((x178+x179)%x180));

	if (t32 != 290101931295491LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x181 = INT16_MIN;
	uint8_t x182 = UINT8_MAX;
	static uint16_t x183 = UINT16_MAX;
	int32_t x184 = 195;
	int32_t t33 = 119188;

	t33 = (x181%((x182+x183)%x184));

	if (t33 != -68) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x185 = INT8_MIN;
	int8_t x187 = INT8_MIN;
	static uint8_t x188 = 27U;
	int32_t t34 = 842;

	t34 = (x185%((x186+x187)%x188));

	if (t34 != -2) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x189 = -109647076847670312LL;
	int16_t x191 = -1;
	uint32_t x192 = UINT32_MAX;

	t35 = (x189%((x190+x191)%x192));

	if (t35 != -4227558LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x193 = 385161001496LLU;
	volatile int32_t x194 = INT32_MAX;
	int16_t x196 = INT16_MAX;
	static uint64_t t36 = 2217766LLU;

	t36 = (x193%((x194+x195)%x196));

	if (t36 != 8746LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x197 = UINT32_MAX;
	int16_t x198 = INT16_MIN;
	int32_t x199 = -9359373;
	static int64_t x200 = -484831568392963861LL;

	t37 = (x197%((x198+x199)%x200));

	if (t37 != 2758858LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x209 = 157U;
	static volatile int8_t x211 = INT8_MIN;
	static uint32_t t38 = 3830U;

	t38 = (x209%((x210+x211)%x212));

	if (t38 != 157U) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x213 = -1;
	int8_t x214 = INT8_MAX;
	volatile uint16_t x215 = UINT16_MAX;
	volatile int32_t x216 = INT32_MIN;
	volatile int32_t t39 = -15140652;

	t39 = (x213%((x214+x215)%x216));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x217 = 504493;
	int16_t x218 = -1;
	uint8_t x219 = 114U;
	uint16_t x220 = 6081U;
	int32_t t40 = -1474;

	t40 = (x217%((x218+x219)%x220));

	if (t40 != 61) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x226 = INT8_MIN;
	uint8_t x227 = 29U;
	uint16_t x228 = UINT16_MAX;
	volatile int64_t t41 = -5939718LL;

	t41 = (x225%((x226+x227)%x228));

	if (t41 != 7LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x230 = INT32_MAX;
	int16_t x231 = -3;
	int16_t x232 = 112;

	t42 = (x229%((x230+x231)%x232));

	if (t42 != 10) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x233 = INT16_MIN;
	static int16_t x234 = -1;
	volatile int16_t x235 = INT16_MIN;
	int16_t x236 = INT16_MAX;
	int32_t t43 = 3;

	t43 = (x233%((x234+x235)%x236));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x237 = INT8_MIN;
	static volatile uint8_t x238 = 31U;
	int16_t x239 = INT16_MAX;
	int32_t x240 = INT32_MIN;
	volatile int32_t t44 = 4049;

	t44 = (x237%((x238+x239)%x240));

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x241 = INT8_MAX;
	static int64_t x242 = INT64_MIN;
	int16_t x243 = 3045;
	static uint16_t x244 = 2U;
	static int64_t t45 = -12564900373880067LL;

	t45 = (x241%((x242+x243)%x244));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x245 = 230121082;
	uint64_t x246 = 9174223594369665804LLU;
	int32_t x247 = -1;
	int16_t x248 = 7;
	uint64_t t46 = 2086988859489LLU;

	t46 = (x245%((x246+x247)%x248));

	if (t46 != 4LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x249 = -7436343;
	int16_t x250 = INT16_MIN;
	uint32_t x251 = UINT32_MAX;
	int16_t x252 = INT16_MAX;
	uint32_t t47 = 388U;

	t47 = (x249%((x250+x251)%x252));

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x254 = -1;
	static int32_t x256 = 432880060;
	int64_t t48 = -88471LL;

	t48 = (x253%((x254+x255)%x256));

	if (t48 != -112LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x257 = -1160252LL;
	uint8_t x258 = 120U;
	uint8_t x260 = 5U;
	int64_t t49 = -296LL;

	t49 = (x257%((x258+x259)%x260));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x261 = -1LL;
	uint8_t x262 = 7U;
	int8_t x263 = INT8_MIN;
	volatile int64_t t50 = -17068722LL;

	t50 = (x261%((x262+x263)%x264));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x269 = INT32_MIN;
	volatile int8_t x271 = 1;
	int32_t x272 = 27835308;
	volatile int64_t t51 = -3LL;

	t51 = (x269%((x270+x271)%x272));

	if (t51 != -1383881LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x274 = INT8_MIN;
	static int16_t x275 = INT16_MAX;
	uint16_t x276 = 399U;
	volatile int64_t t52 = 512751879LL;

	t52 = (x273%((x274+x275)%x276));

	if (t52 != -128LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x285 = 12864;
	int16_t x286 = -1;
	volatile uint64_t x288 = UINT64_MAX;
	volatile uint64_t t53 = 288923237212LLU;

	t53 = (x285%((x286+x287)%x288));

	if (t53 != 1802LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x289 = INT16_MIN;
	int64_t x290 = -1LL;
	int8_t x291 = INT8_MAX;
	int8_t x292 = INT8_MIN;
	volatile int64_t t54 = -252LL;

	t54 = (x289%((x290+x291)%x292));

	if (t54 != -8LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x298 = -1;
	uint64_t x299 = UINT64_MAX;
	int16_t x300 = -23;

	t55 = (x297%((x298+x299)%x300));

	if (t55 != 2LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x301 = UINT64_MAX;
	int16_t x304 = -2369;
	uint64_t t56 = 801894219195549LLU;

	t56 = (x301%((x302+x303)%x304));

	if (t56 != 874LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x305 = 24U;
	uint8_t x306 = 24U;
	int64_t x307 = INT64_MIN;
	static int64_t x308 = 902163027LL;
	int64_t t57 = 7LL;

	t57 = (x305%((x306+x307)%x308));

	if (t57 != 24LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x309 = 7923019215237LLU;
	int8_t x310 = INT8_MAX;
	uint16_t x312 = 983U;
	uint64_t t58 = 2LLU;

	t58 = (x309%((x310+x311)%x312));

	if (t58 != 105LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x317 = 19U;
	int64_t x318 = INT64_MIN;
	uint16_t x319 = 179U;
	volatile int32_t x320 = -714;
	static int64_t t59 = 106112959848LL;

	t59 = (x317%((x318+x319)%x320));

	if (t59 != 19LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x321 = -1623481;
	static uint16_t x322 = UINT16_MAX;
	int16_t x324 = INT16_MIN;
	int32_t t60 = 111713;

	t60 = (x321%((x322+x323)%x324));

	if (t60 != -17947) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x325 = -1;
	uint8_t x326 = 4U;
	int8_t x327 = -9;
	static uint32_t x328 = 905397524U;
	volatile uint32_t t61 = 2055416U;

	t61 = (x325%((x326+x327)%x328));

	if (t61 != 254704125U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x341 = -88;
	static uint8_t x342 = UINT8_MAX;
	uint8_t x343 = UINT8_MAX;
	int64_t x344 = INT64_MIN;
	static volatile int64_t t62 = 1998914934591LL;

	t62 = (x341%((x342+x343)%x344));

	if (t62 != -88LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x345 = INT64_MIN;
	int32_t x346 = INT32_MAX;
	uint64_t x347 = 19893420024743666LLU;
	uint64_t t63 = 4189418100315304LLU;

	t63 = (x345%((x346+x347)%x348));

	if (t63 != 12717571113529889LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x349 = UINT64_MAX;
	int16_t x351 = INT16_MAX;
	int8_t x352 = INT8_MIN;
	uint64_t t64 = 7417723621554490LLU;

	t64 = (x349%((x350+x351)%x352));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x353 = -6;
	int16_t x354 = INT16_MIN;
	int64_t x355 = INT64_MAX;
	int64_t t65 = -85206799802337LL;

	t65 = (x353%((x354+x355)%x356));

	if (t65 != -6LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x361 = UINT64_MAX;
	static uint16_t x362 = 4834U;
	int16_t x363 = INT16_MAX;
	int8_t x364 = INT8_MIN;
	uint64_t t66 = 119774LLU;

	t66 = (x361%((x362+x363)%x364));

	if (t66 != 60LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x365 = -1;
	int16_t x366 = INT16_MIN;
	int64_t x367 = 3833LL;
	int64_t x368 = INT64_MAX;
	volatile int64_t t67 = 512727LL;

	t67 = (x365%((x366+x367)%x368));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x369 = 413LLU;
	static int32_t x370 = 11166;
	int64_t x372 = -2612992805LL;

	t68 = (x369%((x370+x371)%x372));

	if (t68 != 413LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x373 = INT16_MAX;
	volatile int64_t x374 = -1LL;
	static uint16_t x375 = 0U;
	uint64_t x376 = 63LLU;

	t69 = (x373%((x374+x375)%x376));

	if (t69 != 7LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x377 = UINT32_MAX;
	int32_t x378 = INT32_MIN;
	volatile uint64_t x379 = 84LLU;
	static int64_t x380 = INT64_MAX;
	volatile uint64_t t70 = 8805414638307LLU;

	t70 = (x377%((x378+x379)%x380));

	if (t70 != 4294967295LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x381 = 6146918U;
	int32_t x384 = INT32_MIN;
	static int64_t t71 = 12LL;

	t71 = (x381%((x382+x383)%x384));

	if (t71 != 52256LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x389 = 6;
	uint8_t x390 = UINT8_MAX;
	int32_t x392 = INT32_MAX;
	volatile int32_t t72 = 205741763;

	t72 = (x389%((x390+x391)%x392));

	if (t72 != 6) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x394 = UINT32_MAX;
	volatile uint64_t x396 = 1556837902965292LLU;
	volatile uint64_t t73 = 254LLU;

	t73 = (x393%((x394+x395)%x396));

	if (t73 != 15LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x398 = INT8_MAX;
	volatile int64_t x399 = -1LL;
	int64_t x400 = 4415102269823103LL;

	t74 = (x397%((x398+x399)%x400));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x401 = -1;
	int64_t x402 = 65329100975284675LL;
	int8_t x403 = INT8_MIN;
	volatile int64_t t75 = -278793294503LL;

	t75 = (x401%((x402+x403)%x404));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x414 = UINT16_MAX;
	int64_t x416 = INT64_MAX;
	volatile uint64_t t76 = 728638946150195703LLU;

	t76 = (x413%((x414+x415)%x416));

	if (t76 != 13836132129450LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x417 = -1;
	int64_t x418 = INT64_MIN;
	volatile uint16_t x420 = 92U;
	static int64_t t77 = 957446LL;

	t77 = (x417%((x418+x419)%x420));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x425 = -1;
	static volatile uint32_t x426 = 32962507U;
	int64_t x427 = INT64_MIN;
	uint64_t x428 = 123LLU;
	static volatile uint64_t t78 = 6944611708845LLU;

	t78 = (x425%((x426+x427)%x428));

	if (t78 != 111LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x433 = -64266707003716155LL;
	int8_t x434 = INT8_MIN;
	static int64_t x435 = INT64_MAX;
	int64_t x436 = -32372LL;
	int64_t t79 = -2123102103604988LL;

	t79 = (x433%((x434+x435)%x436));

	if (t79 != -8045LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x445 = 6537650117589942LLU;
	static int8_t x446 = INT8_MIN;
	uint16_t x448 = UINT16_MAX;

	t80 = (x445%((x446+x447)%x448));

	if (t80 != 6537650117589942LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x449 = -2;
	volatile uint32_t x450 = UINT32_MAX;
	static int32_t x451 = INT32_MIN;
	int8_t x452 = INT8_MAX;
	static uint32_t t81 = 32U;

	t81 = (x449%((x450+x451)%x452));

	if (t81 != 2U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x453 = 2509463090734879LL;
	static uint32_t x454 = UINT32_MAX;
	int8_t x455 = INT8_MAX;
	volatile int16_t x456 = INT16_MIN;

	t82 = (x453%((x454+x455)%x456));

	if (t82 != 13LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x457 = INT64_MIN;
	volatile uint32_t x458 = UINT32_MAX;
	static uint16_t x459 = 42U;
	volatile int32_t x460 = -1;

	t83 = (x457%((x458+x459)%x460));

	if (t83 != -8LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x465 = INT8_MIN;
	volatile int64_t x467 = 1435LL;
	int64_t t84 = 3688365507LL;

	t84 = (x465%((x466+x467)%x468));

	if (t84 != -128LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x469 = -1LL;
	int8_t x471 = INT8_MIN;
	uint16_t x472 = 48U;

	t85 = (x469%((x470+x471)%x472));

	if (t85 != 5LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x473 = 0;
	int64_t x474 = -653098363626LL;
	int32_t x475 = INT32_MAX;
	volatile int64_t x476 = -264703844469LL;
	int64_t t86 = 1593LL;

	t86 = (x473%((x474+x475)%x476));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x477 = -1;
	volatile uint32_t x478 = 28017107U;
	int32_t x479 = INT32_MIN;
	static volatile uint32_t t87 = 92U;

	t87 = (x477%((x478+x479)%x480));

	if (t87 != 2119466540U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x481 = -769;
	static uint64_t x482 = 42752144196610LLU;
	static uint32_t x483 = UINT32_MAX;
	int16_t x484 = INT16_MIN;

	t88 = (x481%((x482+x483)%x484));

	if (t88 != 34230151869362LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x485 = INT32_MAX;
	volatile int16_t x486 = -1;
	int16_t x487 = 28;
	uint16_t x488 = 29U;
	volatile int32_t t89 = -4035;

	t89 = (x485%((x486+x487)%x488));

	if (t89 != 10) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x489 = 275649421317LLU;
	volatile uint8_t x490 = 2U;
	volatile int32_t x491 = INT32_MIN;
	int8_t x492 = INT8_MIN;
	uint64_t t90 = 13LLU;

	t90 = (x489%((x490+x491)%x492));

	if (t90 != 275649421317LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x494 = -1;
	static volatile int16_t x495 = INT16_MAX;
	volatile uint64_t x496 = 43728677LLU;
	static volatile uint64_t t91 = 6401663LLU;

	t91 = (x493%((x494+x495)%x496));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x501 = INT16_MIN;
	static int8_t x502 = -63;
	volatile int16_t x503 = INT16_MAX;
	int8_t x504 = INT8_MIN;
	static int32_t t92 = -13951;

	t92 = (x501%((x502+x503)%x504));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x509 = UINT64_MAX;
	static volatile uint16_t x510 = 3401U;
	int16_t x512 = 3467;
	volatile uint64_t t93 = 51526429785951LLU;

	t93 = (x509%((x510+x511)%x512));

	if (t93 != 1555LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x517 = 2U;
	volatile uint32_t x518 = UINT32_MAX;
	int64_t x519 = INT64_MIN;
	uint64_t x520 = 847123005LLU;
	uint64_t t94 = 3245051LLU;

	t94 = (x517%((x518+x519)%x520));

	if (t94 != 2LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x521 = 0;
	static int16_t x522 = INT16_MIN;
	int64_t x523 = -414964386330715LL;
	int64_t x524 = -1666761751602787LL;
	volatile int64_t t95 = 44719LL;

	t95 = (x521%((x522+x523)%x524));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x526 = -3;
	volatile uint64_t x527 = UINT64_MAX;
	uint64_t x528 = 1593989LLU;
	uint64_t t96 = 2515002LLU;

	t96 = (x525%((x526+x527)%x528));

	if (t96 != 16249LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x533 = INT64_MAX;
	volatile int16_t x534 = INT16_MIN;
	static int32_t x536 = 8;
	volatile int64_t t97 = -1166168LL;

	t97 = (x533%((x534+x535)%x536));

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x537 = INT16_MIN;
	int16_t x539 = 1770;
	static int8_t x540 = INT8_MAX;

	t98 = (x537%((x538+x539)%x540));

	if (t98 != 100LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x542 = INT16_MIN;
	int16_t x543 = 373;
	uint64_t x544 = 93637110LLU;

	t99 = (x541%((x542+x543)%x544));

	if (t99 != 8773715LLU) { NG(); } else { ; }
	
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


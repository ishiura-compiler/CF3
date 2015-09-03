#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = -6;
int16_t x14 = 0;
int16_t x16 = 774;
uint64_t x19 = 0LLU;
int32_t x27 = INT32_MIN;
uint8_t x37 = 1U;
int32_t t10 = 198401458;
static int32_t t12 = -249;
int64_t x56 = 5369LL;
int8_t x57 = -1;
static volatile int32_t t14 = -95;
static int16_t x62 = 19;
static int64_t x63 = INT64_MAX;
static int32_t t17 = 228599244;
int64_t x73 = -1LL;
volatile uint16_t x80 = UINT16_MAX;
volatile int32_t x90 = INT32_MIN;
volatile int16_t x96 = INT16_MIN;
volatile int8_t x98 = INT8_MIN;
int16_t x109 = INT16_MIN;
int64_t x115 = -1LL;
int32_t t26 = 64;
int16_t x118 = 783;
uint64_t x123 = 155205389LLU;
volatile uint8_t x129 = 41U;
uint32_t x131 = UINT32_MAX;
static int16_t x132 = INT16_MAX;
int64_t x136 = INT64_MIN;
int8_t x138 = INT8_MIN;
int64_t x146 = INT64_MIN;
uint32_t x155 = 31U;
volatile uint32_t x157 = 6002605U;
int32_t x158 = -1;
int8_t x169 = -1;
uint64_t x170 = UINT64_MAX;
volatile int8_t x191 = 1;
static volatile uint16_t x199 = 1823U;
uint8_t x211 = 1U;
int16_t x221 = -5;
volatile int32_t t46 = -10047;
static int32_t t47 = 22;
int32_t x239 = 24861;
uint32_t x241 = UINT32_MAX;
static int64_t x243 = -1LL;
int64_t x244 = -1LL;
static int8_t x247 = INT8_MIN;
int32_t x248 = INT32_MAX;
volatile int32_t t51 = -3282760;
int8_t x259 = INT8_MAX;
static int32_t t53 = -1;
int8_t x265 = 50;
int16_t x267 = INT16_MAX;
static int32_t t54 = 9443373;
int64_t x271 = INT64_MAX;
int8_t x276 = INT8_MAX;
int32_t t56 = 202;
volatile int64_t x285 = INT64_MIN;
volatile int32_t t58 = -799;
int32_t x300 = INT32_MAX;
int8_t x304 = INT8_MIN;
int16_t x316 = -1;
volatile int32_t t65 = -43;
int64_t x325 = INT64_MIN;
int8_t x328 = -31;
volatile int32_t t67 = -205;
int32_t x334 = -854;
volatile int64_t x336 = -30340190639LL;
int8_t x338 = -22;
static int32_t t71 = -1058;
int16_t x364 = -1;
int16_t x369 = INT16_MAX;
static int32_t x373 = INT32_MAX;
int16_t x374 = INT16_MIN;
int16_t x380 = INT16_MIN;
int8_t x386 = INT8_MAX;
int32_t t79 = 925009598;
int64_t x396 = INT64_MAX;
int16_t x399 = INT16_MAX;
static int32_t x402 = -1;
int32_t t83 = 232841;
volatile int64_t x434 = INT64_MIN;
volatile int32_t t89 = -896;
int16_t x441 = 7;
uint32_t x455 = 43U;
static int32_t t94 = -411499180;
volatile uint64_t x467 = UINT64_MAX;
uint32_t x468 = 8057U;
int32_t x476 = -1;
int32_t t96 = 137106331;
volatile int32_t t98 = -1526;


void f0(void) {
	static volatile uint64_t x1 = 7220603095717069LLU;
	uint16_t x2 = 5U;
	uint8_t x3 = 37U;
	uint16_t x4 = 104U;
	static int32_t t0 = -536199;

	t0 = ((x1+x2)==(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x6 = 18300U;
	volatile int8_t x7 = INT8_MAX;
	volatile uint32_t x8 = UINT32_MAX;
	int32_t t1 = -1436739;

	t1 = ((x5+x6)==(x7%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = 771762845LL;
	int64_t x10 = INT64_MIN;
	int8_t x11 = INT8_MIN;
	int64_t x12 = INT64_MIN;
	volatile int32_t t2 = -1;

	t2 = ((x9+x10)==(x11%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = 114U;
	uint64_t x15 = 14359LLU;
	volatile int32_t t3 = 6978;

	t3 = ((x13+x14)==(x15%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	int16_t x18 = INT16_MIN;
	int16_t x20 = INT16_MIN;
	static int32_t t4 = -952;

	t4 = ((x17+x18)==(x19%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int8_t x22 = -1;
	int8_t x23 = INT8_MIN;
	int8_t x24 = -11;
	static int32_t t5 = -1;

	t5 = ((x21+x22)==(x23%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MAX;
	int8_t x26 = INT8_MIN;
	int8_t x28 = -1;
	int32_t t6 = 12195;

	t6 = ((x25+x26)==(x27%x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	static volatile uint32_t x30 = 246U;
	int64_t x31 = -1LL;
	int32_t x32 = INT32_MIN;
	volatile int32_t t7 = 116176228;

	t7 = ((x29+x30)==(x31%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	volatile uint64_t x34 = 239040620396LLU;
	int16_t x35 = -81;
	int8_t x36 = INT8_MIN;
	static int32_t t8 = -931;

	t8 = ((x33+x34)==(x35%x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x38 = INT64_MIN;
	int64_t x39 = -1LL;
	int8_t x40 = -8;
	volatile int32_t t9 = 1;

	t9 = ((x37+x38)==(x39%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = 0;
	uint64_t x42 = 24756844014832402LLU;
	static int64_t x43 = INT64_MAX;
	static int32_t x44 = INT32_MIN;

	t10 = ((x41+x42)==(x43%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	static uint8_t x46 = 5U;
	uint64_t x47 = 188LLU;
	int8_t x48 = INT8_MIN;
	static int32_t t11 = 114249;

	t11 = ((x45+x46)==(x47%x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x49 = INT16_MAX;
	int8_t x50 = -1;
	int16_t x51 = INT16_MIN;
	int8_t x52 = INT8_MIN;

	t12 = ((x49+x50)==(x51%x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	int32_t x54 = -1;
	static int16_t x55 = 3;
	int32_t t13 = 213611329;

	t13 = ((x53+x54)==(x55%x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x58 = INT8_MAX;
	uint8_t x59 = 14U;
	uint8_t x60 = 117U;

	t14 = ((x57+x58)==(x59%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = 123061U;
	int16_t x64 = INT16_MIN;
	volatile int32_t t15 = -545563902;

	t15 = ((x61+x62)==(x63%x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 2U;
	int32_t x66 = 253;
	int64_t x67 = INT64_MAX;
	int64_t x68 = -5824LL;
	volatile int32_t t16 = 4610;

	t16 = ((x65+x66)==(x67%x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = -476987925569400450LL;
	int16_t x70 = -3;
	int64_t x71 = INT64_MIN;
	int16_t x72 = INT16_MIN;

	t17 = ((x69+x70)==(x71%x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x74 = INT16_MIN;
	static volatile uint64_t x75 = 31088581189266LLU;
	int32_t x76 = INT32_MAX;
	volatile int32_t t18 = -28;

	t18 = ((x73+x74)==(x75%x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x77 = UINT32_MAX;
	int16_t x78 = 5253;
	static uint16_t x79 = 3U;
	static int32_t t19 = -15740756;

	t19 = ((x77+x78)==(x79%x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x85 = INT32_MIN;
	int64_t x86 = INT64_MAX;
	int8_t x87 = -24;
	volatile uint64_t x88 = 2993747953998380808LLU;
	volatile int32_t t20 = -1721059;

	t20 = ((x85+x86)==(x87%x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x89 = INT64_MAX;
	int16_t x91 = INT16_MAX;
	volatile int8_t x92 = INT8_MAX;
	static int32_t t21 = 1034498990;

	t21 = ((x89+x90)==(x91%x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x93 = INT16_MIN;
	volatile int8_t x94 = 4;
	int32_t x95 = 6390994;
	int32_t t22 = 383805184;

	t22 = ((x93+x94)==(x95%x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x97 = 13LLU;
	int8_t x99 = INT8_MAX;
	int64_t x100 = INT64_MIN;
	volatile int32_t t23 = -217;

	t23 = ((x97+x98)==(x99%x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x101 = INT16_MIN;
	uint32_t x102 = 368042U;
	uint16_t x103 = UINT16_MAX;
	int8_t x104 = INT8_MIN;
	int32_t t24 = -1751;

	t24 = ((x101+x102)==(x103%x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x110 = INT16_MIN;
	volatile int16_t x111 = -10498;
	int16_t x112 = -1;
	int32_t t25 = 452;

	t25 = ((x109+x110)==(x111%x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x113 = INT16_MAX;
	static int16_t x114 = INT16_MIN;
	int32_t x116 = INT32_MAX;

	t26 = ((x113+x114)==(x115%x116));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x117 = 4084U;
	int16_t x119 = -1;
	volatile uint32_t x120 = 22413190U;
	volatile int32_t t27 = -757;

	t27 = ((x117+x118)==(x119%x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x121 = 123U;
	static int16_t x122 = INT16_MAX;
	int8_t x124 = -9;
	volatile int32_t t28 = -247810731;

	t28 = ((x121+x122)==(x123%x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x130 = INT8_MIN;
	int32_t t29 = -30;

	t29 = ((x129+x130)==(x131%x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x133 = 99607839522963181LLU;
	static int32_t x134 = -69;
	int32_t x135 = INT32_MIN;
	volatile int32_t t30 = -1;

	t30 = ((x133+x134)==(x135%x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x137 = 2U;
	volatile int64_t x139 = -1LL;
	static volatile int64_t x140 = -323345352LL;
	int32_t t31 = -6346;

	t31 = ((x137+x138)==(x139%x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = INT32_MIN;
	uint8_t x142 = 0U;
	uint16_t x143 = UINT16_MAX;
	static int64_t x144 = -1LL;
	int32_t t32 = 105281;

	t32 = ((x141+x142)==(x143%x144));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x145 = 18221U;
	int8_t x147 = -56;
	uint64_t x148 = UINT64_MAX;
	volatile int32_t t33 = -675682;

	t33 = ((x145+x146)==(x147%x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x149 = 334377LLU;
	int8_t x150 = -1;
	int64_t x151 = INT64_MIN;
	volatile int32_t x152 = 48845;
	static volatile int32_t t34 = -484012;

	t34 = ((x149+x150)==(x151%x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x153 = UINT8_MAX;
	int32_t x154 = INT32_MIN;
	uint32_t x156 = 106147140U;
	static volatile int32_t t35 = 101;

	t35 = ((x153+x154)==(x155%x156));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x159 = 45762346394LLU;
	static int32_t x160 = INT32_MIN;
	int32_t t36 = 2;

	t36 = ((x157+x158)==(x159%x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = 4691;
	static uint32_t x166 = UINT32_MAX;
	int8_t x167 = -1;
	int64_t x168 = INT64_MAX;
	int32_t t37 = -37872957;

	t37 = ((x165+x166)==(x167%x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x171 = 1268;
	uint64_t x172 = UINT64_MAX;
	volatile int32_t t38 = -234224;

	t38 = ((x169+x170)==(x171%x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x173 = INT16_MIN;
	volatile int32_t x174 = INT32_MAX;
	uint32_t x175 = UINT32_MAX;
	int32_t x176 = INT32_MAX;
	int32_t t39 = -19;

	t39 = ((x173+x174)==(x175%x176));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x185 = -1;
	int8_t x186 = 0;
	volatile int32_t x187 = INT32_MIN;
	uint64_t x188 = UINT64_MAX;
	static int32_t t40 = 10385913;

	t40 = ((x185+x186)==(x187%x188));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x189 = UINT16_MAX;
	int8_t x190 = INT8_MAX;
	int32_t x192 = INT32_MAX;
	volatile int32_t t41 = -19;

	t41 = ((x189+x190)==(x191%x192));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x193 = INT32_MIN;
	static int16_t x194 = 6;
	uint8_t x195 = 9U;
	int32_t x196 = INT32_MIN;
	volatile int32_t t42 = -3891429;

	t42 = ((x193+x194)==(x195%x196));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x197 = 534376315LL;
	uint8_t x198 = 99U;
	int16_t x200 = -3;
	volatile int32_t t43 = -7;

	t43 = ((x197+x198)==(x199%x200));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x205 = 56LL;
	static volatile int32_t x206 = -9643310;
	int32_t x207 = -3396;
	volatile int32_t x208 = -1;
	volatile int32_t t44 = 15;

	t44 = ((x205+x206)==(x207%x208));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x209 = 2;
	int8_t x210 = INT8_MAX;
	uint16_t x212 = 18830U;
	volatile int32_t t45 = -1183;

	t45 = ((x209+x210)==(x211%x212));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x222 = -40303LL;
	int32_t x223 = INT32_MIN;
	static int8_t x224 = 1;

	t46 = ((x221+x222)==(x223%x224));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x225 = INT8_MAX;
	uint8_t x226 = 1U;
	volatile uint16_t x227 = 2347U;
	int8_t x228 = INT8_MIN;

	t47 = ((x225+x226)==(x227%x228));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x229 = 1562341185357345LLU;
	static int16_t x230 = INT16_MIN;
	uint16_t x231 = 5U;
	int64_t x232 = INT64_MIN;
	static volatile int32_t t48 = 64849;

	t48 = ((x229+x230)==(x231%x232));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x237 = -668;
	static int64_t x238 = -5LL;
	int64_t x240 = -1LL;
	volatile int32_t t49 = -557760;

	t49 = ((x237+x238)==(x239%x240));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x242 = 159891LLU;
	int32_t t50 = 3366186;

	t50 = ((x241+x242)==(x243%x244));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x245 = 8587649610LLU;
	static volatile int32_t x246 = 390932;

	t51 = ((x245+x246)==(x247%x248));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x249 = -20;
	int16_t x250 = 10;
	volatile int32_t x251 = -3;
	static uint16_t x252 = UINT16_MAX;
	int32_t t52 = 114368622;

	t52 = ((x249+x250)==(x251%x252));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x257 = 496U;
	volatile uint16_t x258 = UINT16_MAX;
	int8_t x260 = -1;

	t53 = ((x257+x258)==(x259%x260));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x266 = 1121990434859333LL;
	uint64_t x268 = 905230LLU;

	t54 = ((x265+x266)==(x267%x268));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x269 = 25U;
	volatile int16_t x270 = INT16_MIN;
	int64_t x272 = 10786781348419021LL;
	static volatile int32_t t55 = 0;

	t55 = ((x269+x270)==(x271%x272));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x273 = INT64_MIN;
	volatile int8_t x274 = INT8_MAX;
	volatile int32_t x275 = -51;

	t56 = ((x273+x274)==(x275%x276));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x281 = INT16_MAX;
	volatile uint16_t x282 = 18976U;
	int64_t x283 = INT64_MAX;
	int64_t x284 = 2552063633163623LL;
	int32_t t57 = 2;

	t57 = ((x281+x282)==(x283%x284));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x286 = 102U;
	static int64_t x287 = 2LL;
	uint64_t x288 = 5273708LLU;

	t58 = ((x285+x286)==(x287%x288));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x289 = 4;
	int64_t x290 = INT64_MIN;
	uint8_t x291 = UINT8_MAX;
	static uint32_t x292 = 59U;
	int32_t t59 = -600;

	t59 = ((x289+x290)==(x291%x292));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x297 = -54214610900692LL;
	uint32_t x298 = 5547423U;
	volatile uint8_t x299 = 11U;
	int32_t t60 = -1954;

	t60 = ((x297+x298)==(x299%x300));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x301 = 16U;
	static uint8_t x302 = 61U;
	uint64_t x303 = 133686854LLU;
	static volatile int32_t t61 = 39558;

	t61 = ((x301+x302)==(x303%x304));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x305 = UINT16_MAX;
	uint32_t x306 = 5U;
	int64_t x307 = INT64_MIN;
	static uint64_t x308 = 60LLU;
	volatile int32_t t62 = 0;

	t62 = ((x305+x306)==(x307%x308));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x309 = -29;
	volatile int16_t x310 = INT16_MIN;
	volatile uint64_t x311 = 27352242081569997LLU;
	uint64_t x312 = 834556237998459LLU;
	int32_t t63 = -5;

	t63 = ((x309+x310)==(x311%x312));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x313 = 43702;
	int8_t x314 = -1;
	uint8_t x315 = 1U;
	volatile int32_t t64 = -92982;

	t64 = ((x313+x314)==(x315%x316));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x321 = 146U;
	int64_t x322 = 160340202LL;
	volatile int8_t x323 = 0;
	static int32_t x324 = -1;

	t65 = ((x321+x322)==(x323%x324));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x326 = INT16_MAX;
	static int64_t x327 = -1LL;
	int32_t t66 = 14526;

	t66 = ((x325+x326)==(x327%x328));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x329 = INT8_MIN;
	static int16_t x330 = -6;
	volatile int16_t x331 = INT16_MIN;
	uint8_t x332 = 1U;

	t67 = ((x329+x330)==(x331%x332));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x333 = UINT8_MAX;
	uint16_t x335 = 29642U;
	static int32_t t68 = -24255024;

	t68 = ((x333+x334)==(x335%x336));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x337 = 295779253134969081LLU;
	int8_t x339 = 0;
	uint16_t x340 = UINT16_MAX;
	volatile int32_t t69 = 471;

	t69 = ((x337+x338)==(x339%x340));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x345 = UINT64_MAX;
	volatile uint16_t x346 = 702U;
	volatile int8_t x347 = INT8_MAX;
	int16_t x348 = INT16_MAX;
	int32_t t70 = 57166;

	t70 = ((x345+x346)==(x347%x348));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x349 = -1;
	int64_t x350 = -114LL;
	int64_t x351 = INT64_MAX;
	int16_t x352 = INT16_MIN;

	t71 = ((x349+x350)==(x351%x352));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x353 = INT64_MIN;
	int32_t x354 = 3728817;
	uint64_t x355 = 26LLU;
	static int8_t x356 = INT8_MIN;
	static int32_t t72 = -5454;

	t72 = ((x353+x354)==(x355%x356));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x361 = 2056302767LLU;
	volatile int32_t x362 = INT32_MIN;
	int16_t x363 = -1;
	volatile int32_t t73 = -345505930;

	t73 = ((x361+x362)==(x363%x364));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x370 = 2U;
	uint16_t x371 = 11688U;
	int16_t x372 = INT16_MIN;
	volatile int32_t t74 = 27677074;

	t74 = ((x369+x370)==(x371%x372));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x375 = INT8_MIN;
	static volatile int16_t x376 = INT16_MIN;
	int32_t t75 = 14537832;

	t75 = ((x373+x374)==(x375%x376));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x377 = UINT16_MAX;
	volatile int16_t x378 = -1;
	int16_t x379 = INT16_MIN;
	volatile int32_t t76 = -5;

	t76 = ((x377+x378)==(x379%x380));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x381 = INT16_MIN;
	volatile int64_t x382 = -89500005164345LL;
	uint32_t x383 = 85680U;
	int8_t x384 = 44;
	static int32_t t77 = 0;

	t77 = ((x381+x382)==(x383%x384));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x385 = -1;
	int16_t x387 = INT16_MIN;
	volatile int8_t x388 = INT8_MIN;
	int32_t t78 = 5920533;

	t78 = ((x385+x386)==(x387%x388));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x389 = 4U;
	static int8_t x390 = INT8_MAX;
	int32_t x391 = INT32_MAX;
	int32_t x392 = -1;

	t79 = ((x389+x390)==(x391%x392));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x393 = -1;
	static int32_t x394 = INT32_MAX;
	int8_t x395 = INT8_MIN;
	volatile int32_t t80 = -215643334;

	t80 = ((x393+x394)==(x395%x396));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x397 = -1;
	int64_t x398 = INT64_MAX;
	volatile int32_t x400 = INT32_MIN;
	static int32_t t81 = 951354;

	t81 = ((x397+x398)==(x399%x400));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x401 = -1;
	static volatile uint64_t x403 = 15367119135LLU;
	uint8_t x404 = 2U;
	volatile int32_t t82 = 398;

	t82 = ((x401+x402)==(x403%x404));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x405 = INT32_MIN;
	uint8_t x406 = UINT8_MAX;
	int16_t x407 = -1;
	static volatile uint64_t x408 = UINT64_MAX;

	t83 = ((x405+x406)==(x407%x408));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x409 = UINT32_MAX;
	uint16_t x410 = UINT16_MAX;
	int16_t x411 = INT16_MIN;
	static int32_t x412 = -294;
	volatile int32_t t84 = 148670;

	t84 = ((x409+x410)==(x411%x412));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x417 = 816874685U;
	int64_t x418 = INT64_MIN;
	volatile int16_t x419 = INT16_MAX;
	int8_t x420 = -1;
	volatile int32_t t85 = -8065;

	t85 = ((x417+x418)==(x419%x420));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x421 = UINT64_MAX;
	int32_t x422 = -8331568;
	int16_t x423 = INT16_MIN;
	int8_t x424 = 1;
	volatile int32_t t86 = -7520428;

	t86 = ((x421+x422)==(x423%x424));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x429 = -1;
	uint8_t x430 = 1U;
	int16_t x431 = -1;
	static int8_t x432 = -7;
	int32_t t87 = -716;

	t87 = ((x429+x430)==(x431%x432));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x433 = 700446682283LL;
	int32_t x435 = INT32_MAX;
	uint16_t x436 = 3U;
	volatile int32_t t88 = -10860518;

	t88 = ((x433+x434)==(x435%x436));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x437 = UINT32_MAX;
	int16_t x438 = INT16_MIN;
	int64_t x439 = INT64_MIN;
	static int16_t x440 = -1;

	t89 = ((x437+x438)==(x439%x440));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x442 = 28U;
	int64_t x443 = 285428137721160LL;
	int16_t x444 = 196;
	int32_t t90 = 0;

	t90 = ((x441+x442)==(x443%x444));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x445 = INT16_MAX;
	uint64_t x446 = 90390016232530LLU;
	volatile uint16_t x447 = 54U;
	int16_t x448 = -69;
	static volatile int32_t t91 = 2110317;

	t91 = ((x445+x446)==(x447%x448));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x453 = 1U;
	static uint32_t x454 = UINT32_MAX;
	static volatile int32_t x456 = INT32_MIN;
	volatile int32_t t92 = -40824;

	t92 = ((x453+x454)==(x455%x456));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x457 = 26U;
	int64_t x458 = INT64_MIN;
	int16_t x459 = INT16_MAX;
	int8_t x460 = INT8_MIN;
	static int32_t t93 = -7138741;

	t93 = ((x457+x458)==(x459%x460));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x461 = 1678139658433LLU;
	int32_t x462 = INT32_MAX;
	int64_t x463 = INT64_MIN;
	static int8_t x464 = -1;

	t94 = ((x461+x462)==(x463%x464));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x465 = 5342490U;
	volatile uint8_t x466 = 0U;
	static volatile int32_t t95 = -4;

	t95 = ((x465+x466)==(x467%x468));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x473 = INT8_MIN;
	int8_t x474 = -1;
	int32_t x475 = -1;

	t96 = ((x473+x474)==(x475%x476));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x477 = 2193691045847698LLU;
	int16_t x478 = -1;
	int8_t x479 = 37;
	int8_t x480 = INT8_MIN;
	volatile int32_t t97 = -2;

	t97 = ((x477+x478)==(x479%x480));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x481 = 4489;
	int8_t x482 = INT8_MIN;
	static int16_t x483 = 3219;
	volatile int8_t x484 = -1;

	t98 = ((x481+x482)==(x483%x484));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x485 = INT8_MAX;
	int16_t x486 = INT16_MIN;
	int8_t x487 = INT8_MIN;
	uint64_t x488 = 6840LLU;
	volatile int32_t t99 = -17553;

	t99 = ((x485+x486)==(x487%x488));

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


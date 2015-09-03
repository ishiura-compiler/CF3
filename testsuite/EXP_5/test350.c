#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x2 = 1;
uint32_t x20 = 47839584U;
uint32_t t2 = 1316647951U;
volatile int32_t t3 = -505045;
uint64_t x27 = 1LLU;
uint64_t x32 = UINT64_MAX;
int64_t t6 = -1940880518081403LL;
int16_t x50 = 718;
uint64_t t8 = 60436965LLU;
int32_t x59 = INT32_MAX;
int8_t x71 = INT8_MIN;
int16_t x73 = INT16_MAX;
volatile uint64_t t12 = 32823366618447172LLU;
int32_t x78 = -1;
int32_t x80 = -1;
static int64_t t13 = 2598LL;
static int64_t x87 = -49474LL;
uint16_t x100 = 4416U;
volatile int32_t t16 = -13351765;
uint32_t x101 = 30U;
static int8_t x104 = 54;
volatile uint64_t t18 = UINT64_MAX;
int8_t x111 = INT8_MAX;
uint32_t x133 = UINT32_MAX;
int16_t x136 = -1;
uint64_t t22 = UINT64_MAX;
uint16_t x138 = UINT16_MAX;
uint64_t t24 = 56717781949365LLU;
int64_t x145 = -137219383643417162LL;
uint8_t x146 = 0U;
volatile int64_t x153 = -8529889999LL;
uint16_t x154 = 215U;
int64_t t26 = -2284254086572200LL;
int16_t x159 = INT16_MIN;
uint64_t x160 = 462299LLU;
uint64_t t28 = UINT64_MAX;
uint8_t x170 = 2U;
volatile int8_t x174 = INT8_MAX;
volatile int32_t x181 = INT32_MAX;
volatile int16_t x182 = 1;
int16_t x183 = -1;
static volatile uint32_t t32 = UINT32_MAX;
volatile uint64_t t33 = 237642552726LLU;
int32_t x201 = INT32_MIN;
volatile int16_t x207 = INT16_MAX;
int8_t x208 = 20;
volatile int8_t x209 = INT8_MIN;
static uint16_t x210 = 3796U;
int32_t x216 = -1;
static volatile uint64_t t39 = 18173968774LLU;
uint64_t x222 = 920809LLU;
volatile int64_t t41 = -388315189175896591LL;
static int8_t x230 = -26;
static uint8_t x232 = UINT8_MAX;
int8_t x239 = INT8_MIN;
volatile uint8_t x244 = 10U;
int32_t t44 = -510366;
int16_t x245 = INT16_MIN;
volatile int64_t t45 = 427187037345067LL;
volatile int16_t x251 = 9;
int16_t x258 = INT16_MAX;
int32_t x260 = -211595076;
int8_t x263 = INT8_MIN;
uint8_t x267 = 0U;
int16_t x272 = INT16_MAX;
volatile int16_t x283 = INT16_MAX;
int32_t x285 = INT32_MIN;
static volatile uint32_t t54 = 669400U;
uint64_t t55 = 21954156LLU;
int8_t x294 = INT8_MIN;
int16_t x297 = 914;
static uint64_t x299 = 879673747980959199LLU;
volatile int32_t x301 = -1;
int8_t x325 = INT8_MAX;
static int8_t x329 = -1;
static int16_t x339 = 4281;
int16_t x341 = INT16_MAX;
int64_t t68 = -165990983775LL;
static int16_t x351 = INT16_MAX;
int16_t x352 = INT16_MIN;
int8_t x359 = -1;
uint32_t x365 = UINT32_MAX;
int16_t x367 = INT16_MAX;
int16_t x368 = 930;
uint32_t t72 = UINT32_MAX;
int64_t x375 = -1LL;
int16_t x386 = 93;
static volatile uint16_t x400 = UINT16_MAX;
int8_t x402 = INT8_MIN;
int32_t x405 = INT32_MIN;
uint64_t t80 = UINT64_MAX;
int16_t x416 = INT16_MIN;
int16_t x423 = -40;
uint8_t x426 = 35U;
int64_t x429 = 755617669LL;
uint8_t x430 = 1U;
uint64_t x432 = 601923385492646400LLU;
uint16_t x433 = UINT16_MAX;
volatile uint64_t t88 = 952020LLU;
uint64_t t89 = 1681117816668368LLU;
int16_t x454 = INT16_MIN;
uint32_t x467 = 7843U;
static volatile uint64_t x471 = UINT64_MAX;
uint64_t x478 = 7LLU;
int8_t x480 = -11;
uint16_t x483 = 1U;
int64_t t96 = 98197080576643LL;
static int64_t x485 = -4385091538464648LL;
static int32_t x494 = INT32_MIN;
int32_t t98 = -4555;
uint8_t x501 = UINT8_MAX;
uint64_t x504 = UINT64_MAX;


void f0(void) {
	int32_t x1 = -7247608;
	static volatile int8_t x3 = INT8_MAX;
	int16_t x4 = INT16_MAX;
	volatile int32_t t0 = 235810585;

	t0 = (x1|((x2*x3)+x4));

	if (t0 != -7214722) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = -156431LL;
	static int16_t x10 = -31;
	uint32_t x11 = UINT32_MAX;
	int16_t x12 = INT16_MAX;
	volatile int64_t t1 = 1888359086LL;

	t1 = (x9|((x10*x11)+x12));

	if (t1 != -156417LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x17 = INT32_MIN;
	volatile int8_t x18 = -7;
	static uint8_t x19 = UINT8_MAX;

	t2 = (x17|((x18*x19)+x20));

	if (t2 != 2195321447U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x21 = UINT16_MAX;
	uint16_t x22 = 550U;
	uint8_t x23 = 17U;
	int16_t x24 = -1;

	t3 = (x21|((x22*x23)+x24));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = -1LL;
	int32_t x26 = -108317;
	int8_t x28 = INT8_MIN;
	uint64_t t4 = UINT64_MAX;

	t4 = (x25|((x26*x27)+x28));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = INT8_MIN;
	uint16_t x30 = 497U;
	volatile uint64_t x31 = 9331LLU;
	volatile uint64_t t5 = 1426294728478658LLU;

	t5 = (x29|((x30*x31)+x32));

	if (t5 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = -7275;
	int64_t x34 = -1LL;
	volatile int16_t x35 = INT16_MIN;
	volatile int8_t x36 = -1;

	t6 = (x33|((x34*x35)+x36));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = -1;
	static int8_t x38 = 12;
	static uint16_t x39 = UINT16_MAX;
	int16_t x40 = INT16_MIN;
	int32_t t7 = 1;

	t7 = (x37|((x38*x39)+x40));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = INT8_MAX;
	int8_t x51 = 3;
	uint64_t x52 = UINT64_MAX;

	t8 = (x49|((x50*x51)+x52));

	if (t8 != 2175LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = INT16_MIN;
	uint32_t x54 = UINT32_MAX;
	static int32_t x55 = -213011;
	int64_t x56 = 1LL;
	int64_t t9 = -128646LL;

	t9 = (x53|((x54*x55)+x56));

	if (t9 != -16364LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x57 = 11U;
	int64_t x58 = 213LL;
	int32_t x60 = INT32_MAX;
	int64_t t10 = -28448581155301LL;

	t10 = (x57|((x58*x59)+x60));

	if (t10 != 459561500459LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x69 = INT32_MIN;
	int8_t x70 = INT8_MAX;
	static uint64_t x72 = 999568044LLU;
	volatile uint64_t t11 = 181404053611115120LLU;

	t11 = (x69|((x70*x71)+x72));

	if (t11 != 18446744072561619756LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x74 = UINT64_MAX;
	int32_t x75 = INT32_MIN;
	int64_t x76 = INT64_MAX;

	t12 = (x73|((x74*x75)+x76));

	if (t12 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x77 = INT64_MIN;
	static int8_t x79 = 1;

	t13 = (x77|((x78*x79)+x80));

	if (t13 != -2LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x85 = 1;
	int64_t x86 = -35894238057580LL;
	static int64_t x88 = INT64_MIN;
	int64_t t14 = 63131570176842LL;

	t14 = (x85|((x86*x87)+x88));

	if (t14 != -7447540503194062887LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x89 = 703819LL;
	int8_t x90 = INT8_MIN;
	volatile uint16_t x91 = 14958U;
	static uint8_t x92 = 8U;
	int64_t t15 = 21530576503797LL;

	t15 = (x89|((x90*x91)+x92));

	if (t15 != -1376949LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x97 = 1104183;
	volatile uint16_t x98 = UINT16_MAX;
	volatile int16_t x99 = -1;

	t16 = (x97|((x98*x99)+x100));

	if (t16 != -9865) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x102 = INT8_MIN;
	static int8_t x103 = INT8_MIN;
	static volatile uint32_t t17 = 6166U;

	t17 = (x101|((x102*x103)+x104));

	if (t17 != 16446U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x105 = INT64_MAX;
	volatile uint64_t x106 = 9433424998LLU;
	int64_t x107 = -1LL;
	static uint32_t x108 = 202334496U;

	t18 = (x105|((x106*x107)+x108));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x109 = UINT8_MAX;
	int16_t x110 = 6349;
	volatile int8_t x112 = -1;
	int32_t t19 = 32;

	t19 = (x109|((x110*x111)+x112));

	if (t19 != 806399) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x121 = UINT32_MAX;
	volatile int8_t x122 = INT8_MIN;
	uint8_t x123 = 31U;
	int32_t x124 = INT32_MAX;
	static volatile uint32_t t20 = UINT32_MAX;

	t20 = (x121|((x122*x123)+x124));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x125 = INT32_MIN;
	int64_t x126 = -1LL;
	int64_t x127 = 749565258LL;
	int16_t x128 = INT16_MAX;
	int64_t t21 = -1LL;

	t21 = (x125|((x126*x127)+x128));

	if (t21 != -749532491LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x134 = UINT8_MAX;
	uint64_t x135 = UINT64_MAX;

	t22 = (x133|((x134*x135)+x136));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x137 = INT8_MAX;
	uint8_t x139 = UINT8_MAX;
	int32_t x140 = INT32_MIN;
	int32_t t23 = -19;

	t23 = (x137|((x138*x139)+x140));

	if (t23 != -2130772097) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x141 = INT64_MIN;
	uint64_t x142 = UINT64_MAX;
	uint16_t x143 = 1U;
	int8_t x144 = INT8_MIN;

	t24 = (x141|((x142*x143)+x144));

	if (t24 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x147 = INT16_MIN;
	int16_t x148 = -1;
	volatile int64_t t25 = 9344LL;

	t25 = (x145|((x146*x147)+x148));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x155 = 3533U;
	uint8_t x156 = 97U;

	t26 = (x153|((x154*x155)+x156));

	if (t26 != -8529135683LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x157 = UINT8_MAX;
	int8_t x158 = INT8_MIN;
	static volatile uint64_t t27 = 567060750330621LLU;

	t27 = (x157|((x158*x159)+x160));

	if (t27 != 4656639LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x161 = INT16_MIN;
	int32_t x162 = 26925;
	static uint64_t x163 = 0LLU;
	uint16_t x164 = UINT16_MAX;

	t28 = (x161|((x162*x163)+x164));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x169 = INT32_MAX;
	uint8_t x171 = 0U;
	uint64_t x172 = 0LLU;
	volatile uint64_t t29 = 8091LLU;

	t29 = (x169|((x170*x171)+x172));

	if (t29 != 2147483647LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x173 = 831917870531666614LL;
	uint8_t x175 = UINT8_MAX;
	uint8_t x176 = 16U;
	int64_t t30 = -228LL;

	t30 = (x173|((x174*x175)+x176));

	if (t30 != 831917870531673783LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x184 = INT16_MAX;
	int32_t t31 = INT32_MAX;

	t31 = (x181|((x182*x183)+x184));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x189 = UINT8_MAX;
	uint32_t x190 = UINT32_MAX;
	uint16_t x191 = 77U;
	uint32_t x192 = UINT32_MAX;

	t32 = (x189|((x190*x191)+x192));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x193 = 167LLU;
	static uint8_t x194 = UINT8_MAX;
	static volatile int8_t x195 = 3;
	uint32_t x196 = 105721749U;

	t33 = (x193|((x194*x195)+x196));

	if (t33 != 105722551LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x197 = INT16_MIN;
	int32_t x198 = -1;
	static int8_t x199 = INT8_MIN;
	static int8_t x200 = -1;
	volatile int32_t t34 = 265872970;

	t34 = (x197|((x198*x199)+x200));

	if (t34 != -32641) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x202 = 112252405387742LLU;
	static int16_t x203 = -1;
	uint16_t x204 = UINT16_MAX;
	uint64_t t35 = 3136585569218LLU;

	t35 = (x201|((x202*x203)+x204));

	if (t35 != 18446744072421994017LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x205 = UINT16_MAX;
	uint32_t x206 = 22763U;
	uint32_t t36 = 301031U;

	t36 = (x205|((x206*x207)+x208));

	if (t36 != 745930751U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x211 = UINT32_MAX;
	volatile uint8_t x212 = UINT8_MAX;
	volatile uint32_t t37 = 143152U;

	t37 = (x209|((x210*x211)+x212));

	if (t37 != 4294967211U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x213 = INT64_MIN;
	static volatile int32_t x214 = -214724;
	static uint64_t x215 = 3927LLU;
	uint64_t t38 = 966623541085251LLU;

	t38 = (x213|((x214*x215)+x216));

	if (t38 != 18446744072866330467LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x217 = 426297LLU;
	int64_t x218 = INT64_MAX;
	uint64_t x219 = 370309691LLU;
	int16_t x220 = 0;

	t39 = (x217|((x218*x219)+x220));

	if (t39 != 9223372036484597245LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x221 = INT16_MAX;
	uint8_t x223 = 76U;
	volatile int8_t x224 = INT8_MIN;
	uint64_t t40 = 146838986964161482LLU;

	t40 = (x221|((x222*x223)+x224));

	if (t40 != 69992447LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x225 = INT64_MIN;
	volatile int8_t x226 = -1;
	volatile int64_t x227 = -24710293LL;
	int32_t x228 = INT32_MIN;

	t41 = (x225|((x226*x227)+x228));

	if (t41 != -2122773355LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x229 = 2;
	uint8_t x231 = 3U;
	static volatile int32_t t42 = 16807465;

	t42 = (x229|((x230*x231)+x232));

	if (t42 != 179) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x237 = -27;
	volatile int64_t x238 = -104683LL;
	int32_t x240 = -1;
	int64_t t43 = -32548437LL;

	t43 = (x237|((x238*x239)+x240));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x241 = INT8_MAX;
	static int16_t x242 = -1;
	int16_t x243 = 393;

	t44 = (x241|((x242*x243)+x244));

	if (t44 != -257) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x246 = INT16_MIN;
	volatile uint16_t x247 = 2U;
	int64_t x248 = INT64_MAX;

	t45 = (x245|((x246*x247)+x248));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x249 = INT32_MAX;
	volatile uint64_t x250 = UINT64_MAX;
	int16_t x252 = -1;
	uint64_t t46 = UINT64_MAX;

	t46 = (x249|((x250*x251)+x252));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x257 = 7898;
	volatile int16_t x259 = -1;
	static volatile int32_t t47 = 7;

	t47 = (x257|((x258*x259)+x260));

	if (t47 != -211624193) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x261 = -1;
	int8_t x262 = INT8_MIN;
	uint64_t x264 = 156412867613LLU;
	static uint64_t t48 = UINT64_MAX;

	t48 = (x261|((x262*x263)+x264));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x265 = -1159;
	volatile uint32_t x266 = UINT32_MAX;
	int8_t x268 = INT8_MIN;
	static uint32_t t49 = 0U;

	t49 = (x265|((x266*x267)+x268));

	if (t49 != 4294967289U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x269 = 402;
	static volatile uint8_t x270 = 60U;
	int8_t x271 = -1;
	int32_t t50 = -85880;

	t50 = (x269|((x270*x271)+x272));

	if (t50 != 32723) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x273 = 3815;
	volatile uint16_t x274 = 15U;
	int16_t x275 = INT16_MAX;
	int64_t x276 = INT64_MIN;
	volatile int64_t t51 = -82062986258660270LL;

	t51 = (x273|((x274*x275)+x276));

	if (t51 != -9223372036854284297LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x277 = -1;
	volatile uint32_t x278 = 15782663U;
	int16_t x279 = INT16_MIN;
	int16_t x280 = INT16_MIN;
	uint32_t t52 = UINT32_MAX;

	t52 = (x277|((x278*x279)+x280));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x281 = -5178112833796537LL;
	static uint64_t x282 = 296804881100268416LLU;
	int16_t x284 = INT16_MAX;
	uint64_t t53 = 7917LLU;

	t53 = (x281|((x282*x283)+x284));

	if (t53 != 18446140285998030463LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x286 = 126U;
	int16_t x287 = INT16_MIN;
	volatile uint32_t x288 = 30U;

	t54 = (x285|((x286*x287)+x288));

	if (t54 != 4290838558U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x289 = 1210U;
	int8_t x290 = INT8_MIN;
	uint8_t x291 = 23U;
	volatile uint64_t x292 = 117988LLU;

	t55 = (x289|((x290*x291)+x292));

	if (t55 != 116222LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x293 = -1;
	int16_t x295 = 16254;
	int32_t x296 = INT32_MAX;
	static volatile int32_t t56 = 10;

	t56 = (x293|((x294*x295)+x296));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x298 = UINT64_MAX;
	int16_t x300 = INT16_MAX;
	uint64_t t57 = 515468343173001LLU;

	t57 = (x297|((x298*x299)+x300));

	if (t57 != 17567070325728625586LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x302 = UINT8_MAX;
	int8_t x303 = INT8_MIN;
	uint8_t x304 = 21U;
	volatile int32_t t58 = 1648;

	t58 = (x301|((x302*x303)+x304));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x305 = 3U;
	int16_t x306 = INT16_MIN;
	int8_t x307 = -1;
	int16_t x308 = -1;
	volatile int32_t t59 = -1;

	t59 = (x305|((x306*x307)+x308));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x309 = 801LLU;
	volatile uint64_t x310 = 206LLU;
	uint16_t x311 = 1U;
	volatile int32_t x312 = INT32_MIN;
	uint64_t t60 = 109527750241LLU;

	t60 = (x309|((x310*x311)+x312));

	if (t60 != 18446744071562068975LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x313 = -10;
	uint16_t x314 = 2U;
	uint16_t x315 = 1046U;
	static int8_t x316 = -3;
	volatile int32_t t61 = -62489417;

	t61 = (x313|((x314*x315)+x316));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x317 = 0;
	int32_t x318 = INT32_MAX;
	static int16_t x319 = -1;
	uint8_t x320 = UINT8_MAX;
	int32_t t62 = -1;

	t62 = (x317|((x318*x319)+x320));

	if (t62 != -2147483392) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x321 = INT8_MIN;
	volatile uint16_t x322 = UINT16_MAX;
	int16_t x323 = -1;
	volatile int32_t x324 = INT32_MAX;
	static volatile int32_t t63 = -1;

	t63 = (x321|((x322*x323)+x324));

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x326 = 0;
	volatile int16_t x327 = -12;
	uint64_t x328 = UINT64_MAX;
	volatile uint64_t t64 = UINT64_MAX;

	t64 = (x325|((x326*x327)+x328));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x330 = INT16_MIN;
	int8_t x331 = -8;
	uint8_t x332 = 0U;
	volatile int32_t t65 = -14795;

	t65 = (x329|((x330*x331)+x332));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x333 = INT64_MIN;
	int16_t x334 = -28;
	int8_t x335 = INT8_MIN;
	int16_t x336 = INT16_MAX;
	int64_t t66 = 150297358148675LL;

	t66 = (x333|((x334*x335)+x336));

	if (t66 != -9223372036854739457LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x337 = -1;
	uint64_t x338 = UINT64_MAX;
	static volatile int64_t x340 = INT64_MIN;
	volatile uint64_t t67 = UINT64_MAX;

	t67 = (x337|((x338*x339)+x340));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x342 = 1539546U;
	int64_t x343 = -878232944LL;
	uint32_t x344 = UINT32_MAX;

	t68 = (x341|((x342*x343)+x344));

	if (t68 != -1352075721015297LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x349 = 79U;
	static uint8_t x350 = 26U;
	static int32_t t69 = 19906300;

	t69 = (x349|((x350*x351)+x352));

	if (t69 != 819183) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x353 = INT32_MAX;
	uint64_t x354 = 569LLU;
	uint32_t x355 = 42399619U;
	volatile int64_t x356 = INT64_MIN;
	uint64_t t70 = 16095924960622LLU;

	t70 = (x353|((x354*x355)+x356));

	if (t70 != 9223372062624579583LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x357 = -1176LL;
	static int64_t x358 = -1LL;
	int64_t x360 = INT64_MIN;
	int64_t t71 = 441146721197LL;

	t71 = (x357|((x358*x359)+x360));

	if (t71 != -1175LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x366 = 26551U;

	t72 = (x365|((x366*x367)+x368));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x373 = UINT8_MAX;
	int16_t x374 = INT16_MIN;
	int32_t x376 = INT32_MIN;
	int64_t t73 = -6LL;

	t73 = (x373|((x374*x375)+x376));

	if (t73 != -2147450625LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x385 = 10;
	volatile uint16_t x387 = UINT16_MAX;
	int8_t x388 = INT8_MAX;
	static int32_t t74 = 1;

	t74 = (x385|((x386*x387)+x388));

	if (t74 != 6094890) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x389 = 1621LLU;
	static int64_t x390 = -1LL;
	volatile uint64_t x391 = 4325567306259LLU;
	int8_t x392 = -1;
	volatile uint64_t t75 = 225311LLU;

	t75 = (x389|((x390*x391)+x392));

	if (t75 != 18446739748142245885LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x393 = INT32_MIN;
	int16_t x394 = INT16_MAX;
	int8_t x395 = INT8_MIN;
	volatile int16_t x396 = 226;
	static int32_t t76 = -951849464;

	t76 = (x393|((x394*x395)+x396));

	if (t76 != -4193950) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x397 = INT8_MAX;
	static uint32_t x398 = UINT32_MAX;
	static uint64_t x399 = UINT64_MAX;
	volatile uint64_t t77 = 1753211LLU;

	t77 = (x397|((x398*x399)+x400));

	if (t77 != 18446744069414649983LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x401 = 0U;
	uint16_t x403 = 13U;
	int8_t x404 = INT8_MIN;
	int32_t t78 = -28074048;

	t78 = (x401|((x402*x403)+x404));

	if (t78 != -1792) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x406 = INT8_MIN;
	int64_t x407 = -1LL;
	int64_t x408 = -1LL;
	int64_t t79 = -472031653LL;

	t79 = (x405|((x406*x407)+x408));

	if (t79 != -2147483521LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x409 = -1;
	int32_t x410 = INT32_MIN;
	uint64_t x411 = UINT64_MAX;
	uint32_t x412 = UINT32_MAX;

	t80 = (x409|((x410*x411)+x412));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x413 = INT64_MIN;
	static int16_t x414 = INT16_MIN;
	static volatile int16_t x415 = INT16_MAX;
	volatile int64_t t81 = 36195303LL;

	t81 = (x413|((x414*x415)+x416));

	if (t81 != -1073741824LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x417 = INT32_MAX;
	volatile uint8_t x418 = UINT8_MAX;
	volatile int32_t x419 = -1;
	int32_t x420 = -1;
	int32_t t82 = 39708;

	t82 = (x417|((x418*x419)+x420));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x421 = -1;
	volatile int8_t x422 = INT8_MIN;
	uint16_t x424 = UINT16_MAX;
	volatile int32_t t83 = -55921641;

	t83 = (x421|((x422*x423)+x424));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x425 = INT8_MIN;
	volatile int32_t x427 = -1;
	int32_t x428 = 1;
	volatile int32_t t84 = -70;

	t84 = (x425|((x426*x427)+x428));

	if (t84 != -34) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x431 = 0;
	volatile uint64_t t85 = 847LLU;

	t85 = (x429|((x430*x431)+x432));

	if (t85 != 601923386180628357LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x434 = -49;
	static int8_t x435 = INT8_MIN;
	int64_t x436 = INT64_MIN;
	volatile int64_t t86 = 13LL;

	t86 = (x433|((x434*x435)+x436));

	if (t86 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x437 = UINT32_MAX;
	uint16_t x438 = UINT16_MAX;
	uint64_t x439 = 1227LLU;
	volatile int8_t x440 = -1;
	uint64_t t87 = 165660218018LLU;

	t87 = (x437|((x438*x439)+x440));

	if (t87 != 4294967295LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x441 = 1;
	int16_t x442 = 1;
	uint8_t x443 = 118U;
	uint64_t x444 = UINT64_MAX;

	t88 = (x441|((x442*x443)+x444));

	if (t88 != 117LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x449 = 7LL;
	static volatile uint32_t x450 = 1U;
	uint16_t x451 = 0U;
	uint64_t x452 = 1596014957930944LLU;

	t89 = (x449|((x450*x451)+x452));

	if (t89 != 1596014957930951LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x453 = 9929050870309559LLU;
	uint16_t x455 = 1U;
	int64_t x456 = -118161670940416LL;
	uint64_t t90 = 746606LLU;

	t90 = (x453|((x454*x455)+x456));

	if (t90 != 18446698905142295479LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x461 = UINT16_MAX;
	int16_t x462 = INT16_MIN;
	static uint16_t x463 = 126U;
	int32_t x464 = INT32_MAX;
	static volatile int32_t t91 = -181835;

	t91 = (x461|((x462*x463)+x464));

	if (t91 != 2143354879) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x465 = 1;
	static int64_t x466 = 0LL;
	uint64_t x468 = 3LLU;
	volatile uint64_t t92 = 45LLU;

	t92 = (x465|((x466*x467)+x468));

	if (t92 != 3LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x469 = INT64_MIN;
	uint16_t x470 = UINT16_MAX;
	int16_t x472 = INT16_MIN;
	volatile uint64_t t93 = 296535020962816320LLU;

	t93 = (x469|((x470*x471)+x472));

	if (t93 != 18446744073709453313LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x473 = INT8_MIN;
	volatile int16_t x474 = 33;
	static int16_t x475 = 126;
	uint64_t x476 = 183459590869LLU;
	uint64_t t94 = 250939864274536LLU;

	t94 = (x473|((x474*x475)+x476));

	if (t94 != 18446744073709551507LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x477 = -1;
	int32_t x479 = 952;
	static uint64_t t95 = UINT64_MAX;

	t95 = (x477|((x478*x479)+x480));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x481 = 0;
	int64_t x482 = -1LL;
	int8_t x484 = 0;

	t96 = (x481|((x482*x483)+x484));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x486 = UINT64_MAX;
	volatile int16_t x487 = INT16_MIN;
	static uint16_t x488 = 1U;
	uint64_t t97 = 45215291173869LLU;

	t97 = (x485|((x486*x487)+x488));

	if (t97 != 18442358982171086969LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x493 = -971;
	static volatile int8_t x495 = 0;
	int16_t x496 = INT16_MIN;

	t98 = (x493|((x494*x495)+x496));

	if (t98 != -971) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x502 = -1;
	volatile int8_t x503 = INT8_MAX;
	uint64_t t99 = UINT64_MAX;

	t99 = (x501|((x502*x503)+x504));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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


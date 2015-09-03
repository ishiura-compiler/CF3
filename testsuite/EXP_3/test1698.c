#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = UINT8_MAX;
int64_t x4 = INT64_MIN;
static int16_t x5 = INT16_MIN;
uint16_t x8 = 53U;
int32_t t2 = -21236084;
int64_t x13 = 3579LL;
uint64_t x14 = 289624427780229LLU;
uint8_t x15 = UINT8_MAX;
int64_t x16 = INT64_MIN;
static int32_t t4 = -10;
uint16_t x21 = UINT16_MAX;
uint32_t x33 = UINT32_MAX;
static int8_t x36 = INT8_MAX;
int32_t t12 = -6903;
int64_t x58 = -1LL;
int16_t x65 = 562;
int8_t x67 = INT8_MIN;
int32_t t15 = -106647601;
int32_t x69 = INT32_MIN;
uint64_t x72 = UINT64_MAX;
int64_t x83 = INT64_MIN;
uint32_t x86 = 445981584U;
int8_t x94 = -1;
static uint8_t x101 = UINT8_MAX;
int8_t x104 = 2;
int32_t t22 = 945;
uint8_t x119 = 98U;
int32_t t27 = -62;
volatile int64_t x127 = INT64_MAX;
int32_t t28 = 118019;
uint64_t x130 = 6945LLU;
static int16_t x139 = -1;
int16_t x152 = 673;
int32_t x154 = -1;
volatile uint8_t x155 = 10U;
static uint8_t x156 = 1U;
static int16_t x157 = INT16_MIN;
int32_t x159 = INT32_MAX;
static uint16_t x163 = UINT16_MAX;
int16_t x172 = -1;
uint8_t x173 = 106U;
int32_t x174 = -14827;
int32_t x178 = INT32_MIN;
int32_t x180 = INT32_MIN;
volatile int32_t x187 = INT32_MIN;
static volatile int8_t x205 = 2;
uint8_t x215 = 46U;
uint8_t x221 = UINT8_MAX;
volatile uint64_t x224 = 716LLU;
volatile uint8_t x225 = UINT8_MAX;
volatile int16_t x227 = INT16_MAX;
int32_t t48 = 13;
uint8_t x231 = 18U;
int8_t x235 = INT8_MIN;
int32_t t51 = 8762404;
int32_t x247 = INT32_MAX;
static int32_t t52 = 0;
int64_t x251 = 549600216408983319LL;
uint16_t x252 = UINT16_MAX;
volatile int16_t x258 = -43;
volatile int32_t t54 = 6;
int64_t x270 = -1LL;
volatile int32_t t58 = -3;
uint8_t x281 = 2U;
int32_t x288 = INT32_MAX;
static volatile int16_t x291 = INT16_MIN;
static uint64_t x303 = UINT64_MAX;
int32_t t63 = 52170;
volatile int8_t x305 = INT8_MIN;
static uint32_t x308 = 118810947U;
uint32_t x317 = 0U;
int32_t x324 = INT32_MAX;
int16_t x325 = -1;
volatile int32_t t69 = -2;
int32_t x343 = -106463;
volatile int32_t t71 = 17112;
uint32_t x349 = 6896245U;
int32_t x351 = -1;
uint8_t x358 = 42U;
volatile int32_t t76 = 470;
static volatile int32_t t77 = -216;
uint16_t x373 = 212U;
int32_t x379 = -1;
static int16_t x382 = -603;
int64_t x383 = INT64_MIN;
int64_t x384 = 121699871001394LL;
volatile uint32_t x385 = UINT32_MAX;
static int16_t x388 = 489;
int32_t t82 = -15;
int64_t x396 = 58LL;
static int64_t x399 = INT64_MAX;
uint32_t x412 = UINT32_MAX;
uint32_t x414 = UINT32_MAX;
static int8_t x417 = -58;
uint32_t x418 = 5217825U;
volatile int32_t t88 = 11;
int8_t x425 = -7;
volatile int32_t t90 = -81;
int64_t x433 = -1740162878662921025LL;
int8_t x437 = INT8_MAX;
int64_t x442 = INT64_MAX;
static int16_t x446 = INT16_MIN;
static volatile int8_t x448 = -1;
uint32_t x459 = 694231U;
uint64_t x460 = UINT64_MAX;
uint8_t x464 = UINT8_MAX;
volatile uint8_t x467 = 6U;


void f0(void) {
	int16_t x1 = -47;
	static volatile uint64_t x3 = UINT64_MAX;
	int32_t t0 = 420;

	t0 = ((x1+x2)==(x3&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x6 = 209206896652201LLU;
	int16_t x7 = -10;
	static int32_t t1 = -26;

	t1 = ((x5+x6)==(x7&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 2U;
	static int8_t x10 = 25;
	int64_t x11 = INT64_MIN;
	uint8_t x12 = 40U;

	t2 = ((x9+x10)==(x11&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t t3 = -30;

	t3 = ((x13+x14)==(x15&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int16_t x18 = INT16_MIN;
	uint64_t x19 = UINT64_MAX;
	volatile uint16_t x20 = 3U;

	t4 = ((x17+x18)==(x19&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = -1LL;
	volatile int64_t x23 = INT64_MIN;
	uint8_t x24 = 6U;
	int32_t t5 = -542564;

	t5 = ((x21+x22)==(x23&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int16_t x26 = INT16_MIN;
	static int8_t x27 = INT8_MAX;
	uint16_t x28 = 96U;
	int32_t t6 = 5142703;

	t6 = ((x25+x26)==(x27&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	int8_t x30 = INT8_MAX;
	int64_t x31 = 302704638720LL;
	static int8_t x32 = INT8_MIN;
	int32_t t7 = -14817915;

	t7 = ((x29+x30)==(x31&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x34 = 5U;
	int16_t x35 = INT16_MAX;
	int32_t t8 = -6687;

	t8 = ((x33+x34)==(x35&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MIN;
	uint64_t x42 = 5910958977422LLU;
	int8_t x43 = INT8_MIN;
	static uint64_t x44 = 3381927233LLU;
	volatile int32_t t9 = -213889;

	t9 = ((x41+x42)==(x43&x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = 27U;
	static uint64_t x46 = UINT64_MAX;
	int8_t x47 = -1;
	int16_t x48 = -1;
	static int32_t t10 = 88;

	t10 = ((x45+x46)==(x47&x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x49 = 4293179862245343LLU;
	static volatile int64_t x50 = 722LL;
	static uint32_t x51 = UINT32_MAX;
	int64_t x52 = -1LL;
	int32_t t11 = 363403;

	t11 = ((x49+x50)==(x51&x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x53 = INT16_MIN;
	int64_t x54 = -1LL;
	uint8_t x55 = 10U;
	volatile int64_t x56 = INT64_MAX;

	t12 = ((x53+x54)==(x55&x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = -1LL;
	volatile uint16_t x59 = UINT16_MAX;
	int32_t x60 = -110975;
	static int32_t t13 = -10;

	t13 = ((x57+x58)==(x59&x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = -1;
	volatile int8_t x62 = -1;
	int8_t x63 = 1;
	uint8_t x64 = UINT8_MAX;
	int32_t t14 = 15329042;

	t14 = ((x61+x62)==(x63&x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x66 = -1;
	static int64_t x68 = INT64_MAX;

	t15 = ((x65+x66)==(x67&x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x70 = 0U;
	volatile uint8_t x71 = 2U;
	volatile int32_t t16 = -449605879;

	t16 = ((x69+x70)==(x71&x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = 26319341U;
	int16_t x78 = 12072;
	volatile int8_t x79 = INT8_MIN;
	int8_t x80 = INT8_MIN;
	static volatile int32_t t17 = -16036;

	t17 = ((x77+x78)==(x79&x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = INT16_MIN;
	static int16_t x82 = 91;
	static int32_t x84 = INT32_MIN;
	volatile int32_t t18 = -1269;

	t18 = ((x81+x82)==(x83&x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = INT8_MIN;
	uint64_t x87 = UINT64_MAX;
	volatile int16_t x88 = 1;
	volatile int32_t t19 = -11263356;

	t19 = ((x85+x86)==(x87&x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = INT8_MAX;
	int64_t x95 = 1952377193270LL;
	int64_t x96 = 31822807135390LL;
	volatile int32_t t20 = 550365;

	t20 = ((x93+x94)==(x95&x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x97 = 1U;
	static int64_t x98 = -5333532892546LL;
	uint8_t x99 = 0U;
	int8_t x100 = -1;
	int32_t t21 = 511145386;

	t21 = ((x97+x98)==(x99&x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x102 = 1U;
	int64_t x103 = -1LL;

	t22 = ((x101+x102)==(x103&x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = INT8_MAX;
	uint32_t x106 = UINT32_MAX;
	int16_t x107 = -4022;
	int16_t x108 = INT16_MAX;
	int32_t t23 = 1;

	t23 = ((x105+x106)==(x107&x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x109 = UINT32_MAX;
	int16_t x110 = INT16_MAX;
	uint16_t x111 = 228U;
	volatile uint32_t x112 = 116U;
	volatile int32_t t24 = -1071228855;

	t24 = ((x109+x110)==(x111&x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x113 = INT8_MIN;
	int8_t x114 = -33;
	int8_t x115 = INT8_MIN;
	int16_t x116 = -1;
	volatile int32_t t25 = -871290;

	t25 = ((x113+x114)==(x115&x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x117 = -1009234LL;
	int8_t x118 = INT8_MIN;
	static uint64_t x120 = UINT64_MAX;
	int32_t t26 = 110;

	t26 = ((x117+x118)==(x119&x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x121 = INT8_MIN;
	static int32_t x122 = -1;
	uint64_t x123 = 759732596028709584LLU;
	uint64_t x124 = UINT64_MAX;

	t27 = ((x121+x122)==(x123&x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x125 = 2U;
	volatile int64_t x126 = -11915351367LL;
	int64_t x128 = -1LL;

	t28 = ((x125+x126)==(x127&x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x129 = 3U;
	uint16_t x131 = 93U;
	uint16_t x132 = 69U;
	volatile int32_t t29 = -682792288;

	t29 = ((x129+x130)==(x131&x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x133 = 16U;
	uint8_t x134 = UINT8_MAX;
	static int32_t x135 = INT32_MIN;
	int16_t x136 = INT16_MIN;
	volatile int32_t t30 = -799671821;

	t30 = ((x133+x134)==(x135&x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x137 = 173874688U;
	int16_t x138 = 539;
	volatile uint8_t x140 = 25U;
	int32_t t31 = -5634620;

	t31 = ((x137+x138)==(x139&x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x141 = UINT64_MAX;
	volatile int64_t x142 = -526558097156347603LL;
	static uint64_t x143 = 1003LLU;
	uint32_t x144 = UINT32_MAX;
	static int32_t t32 = 155767;

	t32 = ((x141+x142)==(x143&x144));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = INT8_MIN;
	int8_t x150 = 25;
	uint64_t x151 = 2618392880113205057LLU;
	int32_t t33 = 15;

	t33 = ((x149+x150)==(x151&x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = 37327519982LL;
	volatile int32_t t34 = -7;

	t34 = ((x153+x154)==(x155&x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x158 = INT8_MIN;
	uint16_t x160 = 117U;
	volatile int32_t t35 = -58650;

	t35 = ((x157+x158)==(x159&x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = -24;
	int32_t x162 = 314036;
	static int64_t x164 = -1LL;
	volatile int32_t t36 = 5079;

	t36 = ((x161+x162)==(x163&x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = INT16_MAX;
	int64_t x166 = INT64_MIN;
	volatile int16_t x167 = INT16_MIN;
	static uint16_t x168 = UINT16_MAX;
	int32_t t37 = -1;

	t37 = ((x165+x166)==(x167&x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x169 = INT16_MAX;
	int64_t x170 = 2079LL;
	volatile int16_t x171 = -5;
	static int32_t t38 = -1232464;

	t38 = ((x169+x170)==(x171&x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x175 = INT16_MIN;
	uint8_t x176 = UINT8_MAX;
	volatile int32_t t39 = 13;

	t39 = ((x173+x174)==(x175&x176));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = INT32_MAX;
	volatile uint16_t x179 = UINT16_MAX;
	volatile int32_t t40 = 124;

	t40 = ((x177+x178)==(x179&x180));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x185 = -1;
	int64_t x186 = -1LL;
	static int32_t x188 = INT32_MIN;
	static volatile int32_t t41 = -852;

	t41 = ((x185+x186)==(x187&x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x193 = 773;
	uint16_t x194 = UINT16_MAX;
	uint16_t x195 = UINT16_MAX;
	int32_t x196 = -401;
	static volatile int32_t t42 = 26647;

	t42 = ((x193+x194)==(x195&x196));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x206 = -1LL;
	static int16_t x207 = 1565;
	uint64_t x208 = 647748383808347078LLU;
	static int32_t t43 = -5;

	t43 = ((x205+x206)==(x207&x208));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x209 = UINT8_MAX;
	static int32_t x210 = -650669257;
	int32_t x211 = INT32_MIN;
	uint8_t x212 = 123U;
	int32_t t44 = -4126134;

	t44 = ((x209+x210)==(x211&x212));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x213 = INT16_MAX;
	static int32_t x214 = -1;
	uint64_t x216 = 47LLU;
	int32_t t45 = 1191363;

	t45 = ((x213+x214)==(x215&x216));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x217 = -19514LL;
	int64_t x218 = -3441777743297LL;
	uint16_t x219 = UINT16_MAX;
	uint16_t x220 = 2U;
	volatile int32_t t46 = 28837;

	t46 = ((x217+x218)==(x219&x220));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x222 = -1;
	static uint16_t x223 = 828U;
	static int32_t t47 = 28927412;

	t47 = ((x221+x222)==(x223&x224));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x226 = INT8_MAX;
	int16_t x228 = -25;

	t48 = ((x225+x226)==(x227&x228));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x229 = -23;
	int32_t x230 = -1;
	int64_t x232 = -1LL;
	int32_t t49 = 160382;

	t49 = ((x229+x230)==(x231&x232));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x233 = INT16_MAX;
	int8_t x234 = 1;
	static int16_t x236 = INT16_MIN;
	volatile int32_t t50 = -41264932;

	t50 = ((x233+x234)==(x235&x236));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x241 = UINT32_MAX;
	int32_t x242 = 5547333;
	uint32_t x243 = UINT32_MAX;
	uint16_t x244 = 0U;

	t51 = ((x241+x242)==(x243&x244));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x245 = 725U;
	uint32_t x246 = 1690U;
	static int8_t x248 = INT8_MIN;

	t52 = ((x245+x246)==(x247&x248));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x249 = 5911U;
	int8_t x250 = -1;
	static volatile int32_t t53 = -8;

	t53 = ((x249+x250)==(x251&x252));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x257 = 12;
	int64_t x259 = -567609938648620846LL;
	volatile int64_t x260 = INT64_MIN;

	t54 = ((x257+x258)==(x259&x260));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x265 = INT16_MIN;
	uint16_t x266 = 363U;
	int64_t x267 = INT64_MAX;
	static int8_t x268 = -1;
	int32_t t55 = -86586;

	t55 = ((x265+x266)==(x267&x268));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x269 = 4375759169691232002LLU;
	int8_t x271 = 5;
	static int64_t x272 = INT64_MIN;
	volatile int32_t t56 = -1601772;

	t56 = ((x269+x270)==(x271&x272));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x273 = 5U;
	uint16_t x274 = 504U;
	int64_t x275 = -1LL;
	static int64_t x276 = INT64_MIN;
	volatile int32_t t57 = -4;

	t57 = ((x273+x274)==(x275&x276));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x277 = -6;
	volatile int16_t x278 = -995;
	static int16_t x279 = INT16_MAX;
	static int8_t x280 = 1;

	t58 = ((x277+x278)==(x279&x280));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x282 = INT16_MIN;
	volatile int8_t x283 = -55;
	uint16_t x284 = 114U;
	volatile int32_t t59 = 4429858;

	t59 = ((x281+x282)==(x283&x284));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x285 = -295;
	int8_t x286 = 3;
	static volatile uint64_t x287 = 36955626955LLU;
	volatile int32_t t60 = 15;

	t60 = ((x285+x286)==(x287&x288));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x289 = -36;
	int16_t x290 = -1;
	static int32_t x292 = INT32_MIN;
	volatile int32_t t61 = 38606908;

	t61 = ((x289+x290)==(x291&x292));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x293 = 228442935721LLU;
	int16_t x294 = INT16_MIN;
	static int32_t x295 = INT32_MIN;
	volatile int64_t x296 = 165452LL;
	int32_t t62 = -9;

	t62 = ((x293+x294)==(x295&x296));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x301 = 1;
	int16_t x302 = -4220;
	int32_t x304 = INT32_MAX;

	t63 = ((x301+x302)==(x303&x304));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x306 = UINT16_MAX;
	int8_t x307 = INT8_MAX;
	int32_t t64 = 35844;

	t64 = ((x305+x306)==(x307&x308));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x309 = INT16_MIN;
	uint32_t x310 = 12111U;
	int64_t x311 = -1LL;
	uint16_t x312 = 2020U;
	volatile int32_t t65 = 0;

	t65 = ((x309+x310)==(x311&x312));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x318 = -1;
	int16_t x319 = INT16_MIN;
	uint8_t x320 = 1U;
	volatile int32_t t66 = -1321696;

	t66 = ((x317+x318)==(x319&x320));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x321 = 194131172924418LLU;
	static int64_t x322 = INT64_MAX;
	static int8_t x323 = 15;
	int32_t t67 = -452;

	t67 = ((x321+x322)==(x323&x324));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x326 = -12;
	int16_t x327 = INT16_MIN;
	int8_t x328 = INT8_MAX;
	int32_t t68 = -1;

	t68 = ((x325+x326)==(x327&x328));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x329 = INT64_MAX;
	int8_t x330 = INT8_MIN;
	uint32_t x331 = UINT32_MAX;
	volatile uint32_t x332 = 240620U;

	t69 = ((x329+x330)==(x331&x332));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x337 = UINT16_MAX;
	int16_t x338 = INT16_MIN;
	volatile int64_t x339 = INT64_MAX;
	volatile int16_t x340 = 1;
	int32_t t70 = 24;

	t70 = ((x337+x338)==(x339&x340));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x341 = -1;
	static int64_t x342 = INT64_MAX;
	static volatile uint32_t x344 = UINT32_MAX;

	t71 = ((x341+x342)==(x343&x344));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x350 = -1;
	static int32_t x352 = INT32_MAX;
	int32_t t72 = 0;

	t72 = ((x349+x350)==(x351&x352));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x353 = INT16_MIN;
	uint32_t x354 = UINT32_MAX;
	uint64_t x355 = 31769075915328LLU;
	volatile uint8_t x356 = UINT8_MAX;
	int32_t t73 = -110222;

	t73 = ((x353+x354)==(x355&x356));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x357 = -1;
	uint8_t x359 = UINT8_MAX;
	int64_t x360 = INT64_MIN;
	int32_t t74 = 48;

	t74 = ((x357+x358)==(x359&x360));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x361 = UINT8_MAX;
	uint64_t x362 = UINT64_MAX;
	uint16_t x363 = 24160U;
	int8_t x364 = INT8_MIN;
	static volatile int32_t t75 = 96953341;

	t75 = ((x361+x362)==(x363&x364));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x365 = 348;
	int32_t x366 = INT32_MIN;
	int16_t x367 = 1;
	int64_t x368 = INT64_MAX;

	t76 = ((x365+x366)==(x367&x368));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x369 = 33113417U;
	int32_t x370 = -3;
	static int64_t x371 = INT64_MAX;
	volatile int16_t x372 = 9;

	t77 = ((x369+x370)==(x371&x372));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x374 = -1LL;
	int32_t x375 = -1;
	static uint64_t x376 = 63832699LLU;
	volatile int32_t t78 = -4041;

	t78 = ((x373+x374)==(x375&x376));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x377 = 1U;
	static int16_t x378 = -18;
	uint8_t x380 = UINT8_MAX;
	static int32_t t79 = -2526;

	t79 = ((x377+x378)==(x379&x380));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x381 = 154U;
	int32_t t80 = -1802297;

	t80 = ((x381+x382)==(x383&x384));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x386 = INT8_MIN;
	uint16_t x387 = 10727U;
	volatile int32_t t81 = -8;

	t81 = ((x385+x386)==(x387&x388));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x389 = 0;
	int8_t x390 = INT8_MIN;
	int64_t x391 = -982510743481113LL;
	int16_t x392 = 81;

	t82 = ((x389+x390)==(x391&x392));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x393 = -1;
	int64_t x394 = 7420424714LL;
	uint16_t x395 = 19U;
	int32_t t83 = 3067466;

	t83 = ((x393+x394)==(x395&x396));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x397 = 1540U;
	int32_t x398 = -325046;
	static int32_t x400 = INT32_MIN;
	int32_t t84 = 0;

	t84 = ((x397+x398)==(x399&x400));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x405 = INT64_MIN;
	uint64_t x406 = 1LLU;
	int8_t x407 = 0;
	static int32_t x408 = -1;
	volatile int32_t t85 = 130;

	t85 = ((x405+x406)==(x407&x408));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x409 = 5U;
	int64_t x410 = INT64_MIN;
	static volatile int8_t x411 = INT8_MAX;
	static int32_t t86 = 11;

	t86 = ((x409+x410)==(x411&x412));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x413 = 24913221509LLU;
	uint32_t x415 = 40U;
	static int16_t x416 = INT16_MAX;
	static volatile int32_t t87 = 2151;

	t87 = ((x413+x414)==(x415&x416));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x419 = INT32_MAX;
	int32_t x420 = INT32_MAX;

	t88 = ((x417+x418)==(x419&x420));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x421 = 32;
	uint64_t x422 = 146840058183LLU;
	int32_t x423 = INT32_MIN;
	int8_t x424 = INT8_MAX;
	volatile int32_t t89 = -3807;

	t89 = ((x421+x422)==(x423&x424));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x426 = -1LL;
	int16_t x427 = INT16_MAX;
	int8_t x428 = INT8_MIN;

	t90 = ((x425+x426)==(x427&x428));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x429 = 45U;
	static uint32_t x430 = 38092U;
	uint64_t x431 = UINT64_MAX;
	uint16_t x432 = UINT16_MAX;
	int32_t t91 = 808;

	t91 = ((x429+x430)==(x431&x432));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x434 = 51;
	static int8_t x435 = INT8_MAX;
	uint16_t x436 = 3998U;
	volatile int32_t t92 = 1038950989;

	t92 = ((x433+x434)==(x435&x436));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x438 = -1;
	uint16_t x439 = UINT16_MAX;
	volatile uint32_t x440 = 6051U;
	int32_t t93 = -167275;

	t93 = ((x437+x438)==(x439&x440));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x441 = -8;
	int64_t x443 = INT64_MAX;
	int32_t x444 = -21;
	int32_t t94 = -1;

	t94 = ((x441+x442)==(x443&x444));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x445 = UINT8_MAX;
	int16_t x447 = INT16_MAX;
	int32_t t95 = -8;

	t95 = ((x445+x446)==(x447&x448));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x453 = INT32_MAX;
	uint64_t x454 = UINT64_MAX;
	volatile int64_t x455 = -481114LL;
	int8_t x456 = 0;
	volatile int32_t t96 = 1109274;

	t96 = ((x453+x454)==(x455&x456));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x457 = 7226242290579LLU;
	uint8_t x458 = 31U;
	volatile int32_t t97 = 23;

	t97 = ((x457+x458)==(x459&x460));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x461 = INT16_MIN;
	static int8_t x462 = INT8_MIN;
	uint8_t x463 = 8U;
	volatile int32_t t98 = 1011555;

	t98 = ((x461+x462)==(x463&x464));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x465 = INT32_MAX;
	int64_t x466 = INT64_MIN;
	int8_t x468 = -1;
	static volatile int32_t t99 = -1;

	t99 = ((x465+x466)==(x467&x468));

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


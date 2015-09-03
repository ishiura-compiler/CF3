#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint8_t x2 = 0U;
int16_t x11 = 3;
static int16_t x13 = 0;
int16_t x14 = INT16_MIN;
volatile uint32_t x21 = UINT32_MAX;
static uint64_t x23 = UINT64_MAX;
uint8_t x26 = 4U;
int32_t x36 = -1113;
int16_t x38 = -1;
static int8_t x39 = -1;
int64_t x40 = -1LL;
static int64_t x45 = -1LL;
uint8_t x47 = 60U;
volatile int64_t t8 = 1777473838697LL;
int8_t x71 = INT8_MIN;
int8_t x72 = 2;
int8_t x79 = INT8_MIN;
uint16_t x80 = 23U;
int64_t t14 = 339372LL;
static int32_t x90 = -1;
volatile int64_t x91 = -66056289457774LL;
volatile int64_t t16 = -55998672LL;
int16_t x96 = -16;
int32_t x102 = INT32_MIN;
uint32_t t19 = 19U;
volatile uint64_t t20 = 89962LLU;
int8_t x113 = INT8_MAX;
uint64_t x116 = 2237393113245058405LLU;
volatile int8_t x124 = -1;
static volatile uint64_t t23 = 11129080063LLU;
static volatile int8_t x127 = -2;
int8_t x128 = INT8_MIN;
volatile int64_t t27 = -12900746279065417LL;
uint16_t x156 = UINT16_MAX;
static int64_t x170 = INT64_MIN;
volatile int64_t t30 = 51727239LL;
uint8_t x175 = UINT8_MAX;
int8_t x179 = INT8_MAX;
int64_t t32 = -7175LL;
static uint32_t x184 = UINT32_MAX;
volatile int64_t t33 = 1810126LL;
static int32_t x194 = INT32_MIN;
int16_t x195 = -1;
int16_t x196 = -109;
uint8_t x198 = UINT8_MAX;
int16_t x202 = 3;
uint8_t x207 = 0U;
uint64_t x219 = 264000992342LLU;
uint8_t x229 = 1U;
uint32_t x234 = 14U;
static int16_t x246 = INT16_MIN;
int32_t x250 = INT32_MIN;
volatile uint32_t t45 = 7U;
volatile int32_t x253 = INT32_MAX;
static uint64_t x255 = UINT64_MAX;
uint32_t x260 = UINT32_MAX;
volatile int64_t t47 = 26130LL;
uint32_t x269 = 1598466U;
static int64_t t50 = -4886353705LL;
uint8_t x277 = 37U;
uint32_t t52 = 72516U;
volatile int32_t t54 = 3587156;
int64_t x290 = -1LL;
uint16_t x293 = 9352U;
volatile int64_t t56 = -1181986051LL;
volatile int64_t x324 = INT64_MIN;
int8_t x331 = 1;
uint32_t x333 = UINT32_MAX;
static uint16_t x336 = 51U;
uint8_t x351 = 109U;
static int16_t x357 = -1;
uint8_t x368 = 5U;
uint32_t x371 = 1512242U;
int16_t x374 = -1;
static uint32_t x377 = 0U;
uint32_t x379 = 214U;
volatile uint32_t t70 = 59247U;
int64_t x381 = 23LL;
static volatile int16_t x384 = 126;
volatile int64_t x394 = -1LL;
volatile int64_t t73 = 71138602LL;
int8_t x401 = INT8_MAX;
int8_t x402 = INT8_MIN;
uint32_t x404 = 3066793U;
int16_t x408 = -3483;
uint8_t x410 = 5U;
uint64_t x411 = UINT64_MAX;
int16_t x412 = INT16_MAX;
volatile uint64_t t77 = 544264993469271960LLU;
uint16_t x429 = UINT16_MAX;
uint32_t x432 = 410816U;
volatile uint32_t t80 = 2U;
static int8_t x455 = INT8_MIN;
static uint64_t t84 = 142063617735476901LLU;
int8_t x475 = 0;
uint32_t x500 = 13U;
volatile uint32_t t91 = 10484253U;
volatile int32_t t92 = -2182466;
int8_t x509 = INT8_MIN;
static int64_t x524 = INT64_MAX;
static uint32_t x526 = 71297173U;
static int32_t x527 = 49;
uint16_t x531 = UINT16_MAX;
uint32_t x544 = 239130U;
int8_t x545 = INT8_MIN;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int16_t x3 = INT16_MIN;
	uint8_t x4 = UINT8_MAX;
	int32_t t0 = 1;

	t0 = ((x1-x2)&(x3*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = 750437456LL;
	uint16_t x10 = 11U;
	int32_t x12 = 7965;
	static int64_t t1 = 145260515LL;

	t1 = ((x9-x10)&(x11*x12));

	if (t1 != 17477LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x15 = INT8_MAX;
	int16_t x16 = 25;
	volatile int32_t t2 = -265934;

	t2 = ((x13-x14)&(x15*x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x22 = UINT32_MAX;
	uint8_t x24 = UINT8_MAX;
	uint64_t t3 = 2045328757411314LLU;

	t3 = ((x21-x22)&(x23*x24));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = INT64_MAX;
	volatile int8_t x27 = 2;
	uint8_t x28 = 3U;
	int64_t t4 = -2838905922709322953LL;

	t4 = ((x25-x26)&(x27*x28));

	if (t4 != 2LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = 192944558721LLU;
	static int16_t x30 = INT16_MIN;
	uint64_t x31 = 712856250LLU;
	int16_t x32 = INT16_MIN;
	uint64_t t5 = 3708336LLU;

	t5 = ((x29-x30)&(x31*x32));

	if (t5 != 1142947840LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = INT8_MAX;
	int32_t x34 = INT32_MAX;
	uint8_t x35 = 0U;
	static volatile int32_t t6 = 1;

	t6 = ((x33-x34)&(x35*x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x37 = INT8_MAX;
	volatile int64_t t7 = 136445903954508LL;

	t7 = ((x37-x38)&(x39*x40));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x46 = INT64_MAX;
	uint8_t x48 = 8U;

	t8 = ((x45-x46)&(x47*x48));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x53 = 4U;
	int64_t x54 = 55LL;
	volatile uint32_t x55 = UINT32_MAX;
	volatile int32_t x56 = INT32_MAX;
	int64_t t9 = 27LL;

	t9 = ((x53-x54)&(x55*x56));

	if (t9 != 2147483649LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x57 = UINT64_MAX;
	static volatile int32_t x58 = -99;
	int8_t x59 = INT8_MAX;
	volatile uint64_t x60 = 34LLU;
	uint64_t t10 = 1611973186815895LLU;

	t10 = ((x57-x58)&(x59*x60));

	if (t10 != 66LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x65 = 4U;
	int64_t x66 = -1LL;
	int16_t x67 = 81;
	static int8_t x68 = INT8_MAX;
	static volatile int64_t t11 = -111017622641564LL;

	t11 = ((x65-x66)&(x67*x68));

	if (t11 != 5LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x69 = 33477561U;
	uint8_t x70 = UINT8_MAX;
	uint32_t t12 = 927U;

	t12 = ((x69-x70)&(x71*x72));

	if (t12 != 33477120U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x77 = 254507888446LL;
	int16_t x78 = -1;
	volatile int64_t t13 = 12445LL;

	t13 = ((x77-x78)&(x79*x80));

	if (t13 != 254507885568LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x81 = -3476828795LL;
	int32_t x82 = INT32_MAX;
	int8_t x83 = -16;
	static int8_t x84 = 1;

	t14 = ((x81-x82)&(x83*x84));

	if (t14 != -5624312448LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x85 = 1U;
	volatile uint16_t x86 = 666U;
	int16_t x87 = 3;
	uint64_t x88 = UINT64_MAX;
	volatile uint64_t t15 = 118473075LLU;

	t15 = ((x85-x86)&(x87*x88));

	if (t15 != 18446744073709550949LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x89 = -535337429468LL;
	static uint32_t x92 = 1754U;

	t16 = ((x89-x90)&(x91*x92));

	if (t16 != -115863232081554940LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x93 = INT16_MIN;
	volatile uint32_t x94 = 1005697474U;
	static volatile int8_t x95 = 1;
	uint32_t t17 = 855U;

	t17 = ((x93-x94)&(x95*x96));

	if (t17 != 3289237040U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x97 = INT8_MIN;
	int32_t x98 = -29;
	static volatile uint8_t x99 = 47U;
	volatile int8_t x100 = INT8_MIN;
	volatile int32_t t18 = -54799864;

	t18 = ((x97-x98)&(x99*x100));

	if (t18 != -6016) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x101 = -5;
	volatile uint32_t x103 = UINT32_MAX;
	int16_t x104 = INT16_MIN;

	t19 = ((x101-x102)&(x103*x104));

	if (t19 != 32768U) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x109 = -1;
	int16_t x110 = INT16_MIN;
	static uint64_t x111 = 4186848724720203419LLU;
	uint64_t x112 = 612063LLU;

	t20 = ((x109-x110)&(x111*x112));

	if (t20 != 8965LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x114 = UINT8_MAX;
	int16_t x115 = -1;
	uint64_t t21 = 122322126LLU;

	t21 = ((x113-x114)&(x115*x116));

	if (t21 != 16209350960464493184LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x117 = 2U;
	int8_t x118 = -2;
	uint8_t x119 = 7U;
	static int32_t x120 = -2;
	volatile int32_t t22 = 1;

	t22 = ((x117-x118)&(x119*x120));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x121 = 30;
	static int16_t x122 = -1;
	uint64_t x123 = 2209783132770605732LLU;

	t23 = ((x121-x122)&(x123*x124));

	if (t23 != 28LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x125 = -4LL;
	int8_t x126 = INT8_MIN;
	int64_t t24 = 453LL;

	t24 = ((x125-x126)&(x127*x128));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x133 = INT64_MIN;
	volatile uint8_t x134 = 0U;
	volatile int8_t x135 = -1;
	static int16_t x136 = -1;
	volatile int64_t t25 = -5446714935758150LL;

	t25 = ((x133-x134)&(x135*x136));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x137 = INT8_MIN;
	static int16_t x138 = INT16_MIN;
	int16_t x139 = INT16_MIN;
	uint32_t x140 = 8U;
	static uint32_t t26 = 125330241U;

	t26 = ((x137-x138)&(x139*x140));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x149 = -12LL;
	int8_t x150 = INT8_MIN;
	volatile int64_t x151 = -1LL;
	int32_t x152 = -657380214;

	t27 = ((x149-x150)&(x151*x152));

	if (t27 != 116LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x153 = 26448396LL;
	static int64_t x154 = -1LL;
	static uint8_t x155 = 0U;
	static int64_t t28 = -953762169970897961LL;

	t28 = ((x153-x154)&(x155*x156));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x165 = 2004407LLU;
	int8_t x166 = -18;
	uint64_t x167 = 134LLU;
	volatile uint32_t x168 = UINT32_MAX;
	uint64_t t29 = 166LLU;

	t29 = ((x165-x166)&(x167*x168));

	if (t29 != 2004296LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x169 = -1;
	int8_t x171 = -1;
	volatile int8_t x172 = INT8_MIN;

	t30 = ((x169-x170)&(x171*x172));

	if (t30 != 128LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x173 = -1;
	int16_t x174 = INT16_MIN;
	volatile int32_t x176 = -199009;
	volatile int32_t t31 = -409129;

	t31 = ((x173-x174)&(x175*x176));

	if (t31 != 10337) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x177 = UINT8_MAX;
	int8_t x178 = INT8_MAX;
	int64_t x180 = -66265542529712LL;

	t32 = ((x177-x178)&(x179*x180));

	if (t32 != 128LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x181 = UINT8_MAX;
	int8_t x182 = -10;
	int64_t x183 = -1LL;

	t33 = ((x181-x182)&(x183*x184));

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x193 = -658LL;
	static volatile int64_t t34 = 1261142LL;

	t34 = ((x193-x194)&(x195*x196));

	if (t34 != 108LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x197 = 4030LLU;
	int32_t x199 = INT32_MAX;
	uint32_t x200 = UINT32_MAX;
	uint64_t t35 = 17932LLU;

	t35 = ((x197-x198)&(x199*x200));

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x201 = -73;
	static uint16_t x203 = 222U;
	int64_t x204 = -413213LL;
	volatile int64_t t36 = -11094043022LL;

	t36 = ((x201-x202)&(x203*x204));

	if (t36 != -91733360LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x205 = INT8_MAX;
	uint64_t x206 = 491048477051874590LLU;
	static volatile int64_t x208 = -1LL;
	volatile uint64_t t37 = 1239996543LLU;

	t37 = ((x205-x206)&(x207*x208));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x209 = -22;
	volatile int8_t x210 = -1;
	int32_t x211 = INT32_MIN;
	int64_t x212 = -1LL;
	static volatile int64_t t38 = 182368003637034LL;

	t38 = ((x209-x210)&(x211*x212));

	if (t38 != 2147483648LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x213 = INT32_MAX;
	uint32_t x214 = 1U;
	int32_t x215 = 76;
	int16_t x216 = 5;
	uint32_t t39 = 31544U;

	t39 = ((x213-x214)&(x215*x216));

	if (t39 != 380U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x217 = -1;
	uint64_t x218 = UINT64_MAX;
	volatile int8_t x220 = -6;
	volatile uint64_t t40 = 1619496843404LLU;

	t40 = ((x217-x218)&(x219*x220));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x225 = UINT16_MAX;
	volatile uint32_t x226 = UINT32_MAX;
	int64_t x227 = INT64_MAX;
	int8_t x228 = 0;
	int64_t t41 = 61643527LL;

	t41 = ((x225-x226)&(x227*x228));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x230 = 4223622118LLU;
	int32_t x231 = INT32_MAX;
	uint32_t x232 = 388763204U;
	uint64_t t42 = 921806757LLU;

	t42 = ((x229-x230)&(x231*x232));

	if (t42 != 4235288LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x233 = 1;
	int8_t x235 = 1;
	static uint8_t x236 = 55U;
	static volatile uint32_t t43 = 1050524876U;

	t43 = ((x233-x234)&(x235*x236));

	if (t43 != 51U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x245 = INT16_MAX;
	uint16_t x247 = 18794U;
	volatile uint16_t x248 = 7825U;
	int32_t t44 = 369528;

	t44 = ((x245-x246)&(x247*x248));

	if (t44 != 266) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x249 = -15;
	volatile int32_t x251 = INT32_MAX;
	uint32_t x252 = 13U;

	t45 = ((x249-x250)&(x251*x252));

	if (t45 != 2147483633U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x254 = INT32_MAX;
	volatile int16_t x256 = -37;
	static volatile uint64_t t46 = 15386049285LLU;

	t46 = ((x253-x254)&(x255*x256));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x257 = 7U;
	static int64_t x258 = INT64_MAX;
	int8_t x259 = 9;

	t47 = ((x257-x258)&(x259*x260));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x261 = INT16_MIN;
	volatile uint8_t x262 = 0U;
	int32_t x263 = 27;
	uint8_t x264 = 2U;
	static int32_t t48 = 6;

	t48 = ((x261-x262)&(x263*x264));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x265 = UINT16_MAX;
	int32_t x266 = -8132;
	int8_t x267 = INT8_MIN;
	int16_t x268 = INT16_MIN;
	volatile int32_t t49 = 604590867;

	t49 = ((x265-x266)&(x267*x268));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x270 = INT64_MAX;
	int32_t x271 = -1;
	volatile int16_t x272 = -1;

	t50 = ((x269-x270)&(x271*x272));

	if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x273 = INT64_MIN;
	int8_t x274 = INT8_MIN;
	uint64_t x275 = UINT64_MAX;
	static volatile uint64_t x276 = 398811450719864LLU;
	static uint64_t t51 = 432875666LLU;

	t51 = ((x273-x274)&(x275*x276));

	if (t51 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x278 = 45;
	uint32_t x279 = 82204U;
	volatile int32_t x280 = INT32_MAX;

	t52 = ((x277-x278)&(x279*x280));

	if (t52 != 4294885088U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x281 = INT16_MIN;
	int8_t x282 = 1;
	uint64_t x283 = UINT64_MAX;
	int32_t x284 = 74598;
	uint64_t t53 = 12LLU;

	t53 = ((x281-x282)&(x283*x284));

	if (t53 != 18446744073709444250LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x285 = INT32_MIN;
	static int16_t x286 = -941;
	int16_t x287 = INT16_MIN;
	static int8_t x288 = -1;

	t54 = ((x285-x286)&(x287*x288));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x289 = INT32_MIN;
	volatile int8_t x291 = INT8_MIN;
	static uint16_t x292 = 1904U;
	volatile int64_t t55 = 250LL;

	t55 = ((x289-x290)&(x291*x292));

	if (t55 != -2147483648LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x294 = 61LL;
	volatile int64_t x295 = -2135251028746873316LL;
	int64_t x296 = -1LL;

	t56 = ((x293-x294)&(x295*x296));

	if (t56 != 8256LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x297 = -5;
	uint32_t x298 = 1307836215U;
	int64_t x299 = 1651197240655167LL;
	uint64_t x300 = 568647436540902661LLU;
	uint64_t t57 = 4846848542785662LLU;

	t57 = ((x297-x298)&(x299*x300));

	if (t57 != 2987130880LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x313 = UINT16_MAX;
	int64_t x314 = INT64_MAX;
	uint16_t x315 = UINT16_MAX;
	int8_t x316 = 1;
	int64_t t58 = 32LL;

	t58 = ((x313-x314)&(x315*x316));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x321 = 9;
	uint32_t x322 = UINT32_MAX;
	static volatile uint64_t x323 = 7LLU;
	volatile uint64_t t59 = 4386272254LLU;

	t59 = ((x321-x322)&(x323*x324));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x329 = 1;
	uint32_t x330 = 296354U;
	static int8_t x332 = INT8_MAX;
	uint32_t t60 = 299124U;

	t60 = ((x329-x330)&(x331*x332));

	if (t60 != 95U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x334 = 372288716LLU;
	int32_t x335 = -60;
	volatile uint64_t t61 = 13923745LLU;

	t61 = ((x333-x334)&(x335*x336));

	if (t61 != 3922677760LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x341 = -2LL;
	uint8_t x342 = UINT8_MAX;
	static int16_t x343 = -845;
	uint16_t x344 = 135U;
	volatile int64_t t62 = -113LL;

	t62 = ((x341-x342)&(x343*x344));

	if (t62 != -114075LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x345 = 14;
	volatile int8_t x346 = INT8_MIN;
	int32_t x347 = 168;
	volatile int64_t x348 = -65622720373LL;
	static int64_t t63 = -720996781571896LL;

	t63 = ((x345-x346)&(x347*x348));

	if (t63 != 8LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x349 = -912;
	int32_t x350 = INT32_MIN;
	static int16_t x352 = INT16_MAX;
	volatile int32_t t64 = -48445737;

	t64 = ((x349-x350)&(x351*x352));

	if (t64 != 3570704) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x358 = 501106629029344LLU;
	volatile int8_t x359 = -1;
	static uint32_t x360 = 202050U;
	static uint64_t t65 = 3539662770616431LLU;

	t65 = ((x357-x358)&(x359*x360));

	if (t65 != 90227230LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x361 = 0U;
	int8_t x362 = INT8_MAX;
	uint8_t x363 = 21U;
	uint64_t x364 = 263132339326965878LLU;
	volatile uint64_t t66 = 15165709602845LLU;

	t66 = ((x361-x362)&(x363*x364));

	if (t66 != 5525779125866283392LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x365 = INT8_MIN;
	uint64_t x366 = 16234124LLU;
	int16_t x367 = INT16_MIN;
	uint64_t t67 = 1806932514571966LLU;

	t67 = ((x365-x366)&(x367*x368));

	if (t67 != 18446744073693298688LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x369 = 7U;
	uint64_t x370 = UINT64_MAX;
	uint32_t x372 = UINT32_MAX;
	volatile uint64_t t68 = 945363858LLU;

	t68 = ((x369-x370)&(x371*x372));

	if (t68 != 8LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x373 = -5;
	uint8_t x375 = 58U;
	volatile int16_t x376 = INT16_MIN;
	int32_t t69 = -1;

	t69 = ((x373-x374)&(x375*x376));

	if (t69 != -1900544) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x378 = -1;
	int8_t x380 = INT8_MIN;

	t70 = ((x377-x378)&(x379*x380));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint16_t x382 = 1877U;
	uint8_t x383 = 9U;
	int64_t t71 = -241385452660578878LL;

	t71 = ((x381-x382)&(x383*x384));

	if (t71 != 66LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x385 = -2;
	volatile int8_t x386 = INT8_MIN;
	int16_t x387 = INT16_MAX;
	static uint64_t x388 = 274316LLU;
	volatile uint64_t t72 = 178780606060792LLU;

	t72 = ((x385-x386)&(x387*x388));

	if (t72 != 116LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x393 = UINT8_MAX;
	int32_t x395 = -1;
	int16_t x396 = -1;

	t73 = ((x393-x394)&(x395*x396));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x397 = 1U;
	uint8_t x398 = UINT8_MAX;
	uint8_t x399 = 1U;
	static volatile uint8_t x400 = UINT8_MAX;
	volatile int32_t t74 = -3318;

	t74 = ((x397-x398)&(x399*x400));

	if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x403 = INT16_MAX;
	static volatile uint32_t t75 = 1055U;

	t75 = ((x401-x402)&(x403*x404));

	if (t75 != 87U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x405 = INT8_MIN;
	int16_t x406 = INT16_MAX;
	volatile int8_t x407 = INT8_MAX;
	int32_t t76 = -1;

	t76 = ((x405-x406)&(x407*x408));

	if (t76 != -442367) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x409 = INT16_MIN;

	t77 = ((x409-x410)&(x411*x412));

	if (t77 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x421 = UINT8_MAX;
	static uint8_t x422 = 0U;
	uint8_t x423 = UINT8_MAX;
	static uint32_t x424 = 243160U;
	static uint32_t t78 = 140683809U;

	t78 = ((x421-x422)&(x423*x424));

	if (t78 != 40U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x425 = 8U;
	volatile uint64_t x426 = 504055LLU;
	static volatile uint16_t x427 = UINT16_MAX;
	volatile uint16_t x428 = 7613U;
	static uint64_t t79 = 28366969LLU;

	t79 = ((x425-x426)&(x427*x428));

	if (t79 != 498614785LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x430 = INT16_MIN;
	static uint16_t x431 = 6U;

	t80 = ((x429-x430)&(x431*x432));

	if (t80 != 72832U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x445 = 0;
	int32_t x446 = INT32_MAX;
	uint8_t x447 = 81U;
	static int32_t x448 = -1;
	int32_t t81 = 271;

	t81 = ((x445-x446)&(x447*x448));

	if (t81 != -2147483647) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x449 = INT64_MIN;
	static int64_t x450 = INT64_MIN;
	int8_t x451 = 1;
	volatile int32_t x452 = INT32_MAX;
	int64_t t82 = 29614785847204313LL;

	t82 = ((x449-x450)&(x451*x452));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x453 = INT16_MAX;
	static uint64_t x454 = 472840345029095LLU;
	int8_t x456 = 0;
	volatile uint64_t t83 = 66LLU;

	t83 = ((x453-x454)&(x455*x456));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x465 = INT16_MIN;
	int16_t x466 = INT16_MIN;
	uint16_t x467 = 4U;
	uint64_t x468 = 1149739441LLU;

	t84 = ((x465-x466)&(x467*x468));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x469 = 21;
	static volatile int8_t x470 = -1;
	volatile int32_t x471 = -1;
	volatile uint16_t x472 = 2829U;
	volatile int32_t t85 = 29287;

	t85 = ((x469-x470)&(x471*x472));

	if (t85 != 18) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x473 = INT8_MIN;
	int32_t x474 = INT32_MIN;
	static int32_t x476 = -13535577;
	int32_t t86 = 50;

	t86 = ((x473-x474)&(x475*x476));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x481 = 4;
	static int32_t x482 = 0;
	int32_t x483 = 774;
	volatile int16_t x484 = 87;
	int32_t t87 = 680467;

	t87 = ((x481-x482)&(x483*x484));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x485 = -1;
	static int64_t x486 = 0LL;
	int16_t x487 = 876;
	volatile uint64_t x488 = 224692LLU;
	volatile uint64_t t88 = 20294173LLU;

	t88 = ((x485-x486)&(x487*x488));

	if (t88 != 196830192LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x489 = -4;
	int16_t x490 = 0;
	uint32_t x491 = 529U;
	int32_t x492 = INT32_MAX;
	static uint32_t t89 = 1648143U;

	t89 = ((x489-x490)&(x491*x492));

	if (t89 != 2147483116U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x497 = -3829887987418285220LL;
	static uint64_t x498 = 7LLU;
	int64_t x499 = -1LL;
	volatile uint64_t t90 = 5755LLU;

	t90 = ((x497-x498)&(x499*x500));

	if (t90 != 14616856086291266385LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x501 = -1;
	volatile uint8_t x502 = 2U;
	uint32_t x503 = 748U;
	static volatile int16_t x504 = 105;

	t91 = ((x501-x502)&(x503*x504));

	if (t91 != 78540U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x505 = UINT8_MAX;
	int8_t x506 = INT8_MIN;
	int16_t x507 = 320;
	int8_t x508 = INT8_MIN;

	t92 = ((x505-x506)&(x507*x508));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x510 = -14454;
	int64_t x511 = INT64_MAX;
	int16_t x512 = -1;
	int64_t t93 = -49258393376821LL;

	t93 = ((x509-x510)&(x511*x512));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x517 = -19;
	int16_t x518 = 278;
	uint16_t x519 = UINT16_MAX;
	int16_t x520 = INT16_MIN;
	int32_t t94 = -67645;

	t94 = ((x517-x518)&(x519*x520));

	if (t94 != -2147450880) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x521 = -1;
	static int16_t x522 = INT16_MIN;
	uint64_t x523 = 2577051549970235LLU;
	volatile uint64_t t95 = 123442LLU;

	t95 = ((x521-x522)&(x523*x524));

	if (t95 != 20677LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x525 = INT16_MIN;
	static int8_t x528 = 2;
	volatile uint32_t t96 = 185296588U;

	t96 = ((x525-x526)&(x527*x528));

	if (t96 != 98U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x529 = 4581;
	int16_t x530 = -1;
	static volatile uint32_t x532 = 114513584U;
	volatile uint32_t t97 = 3771U;

	t97 = ((x529-x530)&(x531*x532));

	if (t97 != 320U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x541 = 34355U;
	int32_t x542 = INT32_MIN;
	uint64_t x543 = 526620015451253119LLU;
	uint64_t t98 = 7506LLU;

	t98 = ((x541-x542)&(x543*x544));

	if (t98 != 32802LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x546 = 9581U;
	int64_t x547 = INT64_MAX;
	uint64_t x548 = 477839133032505LLU;
	static volatile uint64_t t99 = 432392321375LLU;

	t99 = ((x545-x546)&(x547*x548));

	if (t99 != 1748441603LLU) { NG(); } else { ; }
	
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


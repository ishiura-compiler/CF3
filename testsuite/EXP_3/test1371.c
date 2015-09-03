#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = INT16_MIN;
int32_t x22 = -1;
int16_t x48 = INT16_MIN;
int8_t x64 = INT8_MIN;
uint64_t x86 = 7235108621184779294LLU;
static int8_t x88 = INT8_MAX;
uint64_t x113 = 32782214LLU;
volatile int64_t x114 = 1564346249655LL;
static int16_t x134 = INT16_MIN;
int64_t x139 = INT64_MAX;
static volatile int16_t x141 = INT16_MIN;
int16_t x142 = INT16_MIN;
volatile int32_t t17 = -31895234;
static volatile int64_t x157 = 82213748857177169LL;
static uint16_t x158 = UINT16_MAX;
static uint16_t x160 = 2U;
volatile int64_t t20 = 107275LL;
static volatile int8_t x171 = INT8_MIN;
int8_t x174 = -1;
uint32_t x183 = 128U;
volatile int16_t x184 = 2608;
int64_t x189 = -1LL;
static volatile int64_t x196 = -1LL;
static uint64_t x207 = 5255995976LLU;
int8_t x215 = -1;
volatile uint32_t x230 = UINT32_MAX;
int64_t x231 = INT64_MAX;
static uint32_t x232 = 380U;
static uint32_t t32 = 20287U;
int64_t t33 = 205145089726719LL;
volatile int32_t x252 = 12357182;
int8_t x262 = -1;
int8_t x302 = 0;
static volatile int32_t x303 = -34334819;
int16_t x312 = INT16_MAX;
static uint32_t x337 = 24234830U;
int32_t x339 = -1;
int8_t x350 = -2;
int32_t x351 = INT32_MIN;
static int8_t x354 = INT8_MIN;
uint32_t x356 = UINT32_MAX;
volatile int32_t t44 = 48445150;
int16_t x363 = 1;
int64_t x364 = INT64_MIN;
static int16_t x386 = 1;
uint16_t x404 = 498U;
int32_t t49 = -1;
volatile int32_t t50 = -96527;
uint64_t x409 = UINT64_MAX;
static int32_t x444 = INT32_MAX;
static uint8_t x448 = UINT8_MAX;
int16_t x449 = -337;
int64_t x485 = INT64_MAX;
static int8_t x489 = INT8_MIN;
volatile int64_t x490 = -1321114396LL;
int32_t x495 = -1;
static int32_t x502 = INT32_MIN;
static volatile int64_t t62 = -23396LL;
uint16_t x512 = UINT16_MAX;
volatile int32_t t64 = -196;
static int16_t x518 = -1;
uint16_t x525 = UINT16_MAX;
uint8_t x528 = UINT8_MAX;
uint16_t x564 = UINT16_MAX;
volatile int16_t x568 = INT16_MIN;
static int64_t x573 = -1LL;
int64_t x576 = -1LL;
static volatile int32_t t74 = -2134;
int16_t x594 = INT16_MIN;
int8_t x595 = -1;
volatile int8_t x596 = -1;
uint64_t t77 = 1362211822685LLU;
int64_t x601 = 49422LL;
volatile int8_t x604 = INT8_MAX;
volatile uint64_t t79 = 8786769396967847LLU;
int64_t x611 = -119158LL;
int8_t x615 = INT8_MAX;
int32_t x616 = -1;
int64_t t81 = 25057549369228LL;
uint64_t x626 = UINT64_MAX;
int8_t x628 = 1;
volatile uint64_t t82 = 603107395280LLU;
static volatile uint64_t x640 = 10031057519872LLU;
uint64_t t84 = 27850LLU;
static uint64_t x644 = 3352211LLU;
volatile int32_t x646 = INT32_MIN;
static int8_t x647 = INT8_MAX;
static uint8_t x648 = UINT8_MAX;
uint64_t x649 = 69617249150815412LLU;
uint8_t x665 = 1U;
uint8_t x671 = 7U;
uint8_t x675 = 0U;
volatile int32_t t91 = -8;
int16_t x691 = -868;
uint32_t x692 = 2U;
int8_t x700 = INT8_MIN;
volatile int32_t t99 = 504972100;


void f0(void) {
	int16_t x5 = INT16_MAX;
	static int16_t x6 = INT16_MIN;
	static volatile uint32_t x7 = 1962U;
	static int32_t t0 = -1;

	t0 = ((x5-x6)<<(x7<x8));

	if (t0 != 131070) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x21 = 15;
	int8_t x23 = INT8_MAX;
	static volatile int64_t x24 = INT64_MIN;
	volatile int32_t t1 = -16798;

	t1 = ((x21-x22)<<(x23<x24));

	if (t1 != 16) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x29 = INT32_MAX;
	uint8_t x30 = 56U;
	static volatile int16_t x31 = -1;
	uint64_t x32 = 14581233293LLU;
	static int32_t t2 = -12783128;

	t2 = ((x29-x30)<<(x31<x32));

	if (t2 != 2147483591) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x33 = 1U;
	int8_t x34 = INT8_MIN;
	uint16_t x35 = 7U;
	volatile uint64_t x36 = 3584423LLU;
	static int32_t t3 = -419100536;

	t3 = ((x33-x34)<<(x35<x36));

	if (t3 != 258) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x37 = INT16_MAX;
	static volatile uint32_t x38 = 2609998U;
	int64_t x39 = INT64_MIN;
	int32_t x40 = -1;
	uint32_t t4 = 103983460U;

	t4 = ((x37-x38)<<(x39<x40));

	if (t4 != 4289812834U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x45 = 40843U;
	static int16_t x46 = INT16_MAX;
	int32_t x47 = INT32_MIN;
	volatile uint32_t t5 = 186620821U;

	t5 = ((x45-x46)<<(x47<x48));

	if (t5 != 16152U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x49 = 1;
	volatile int8_t x50 = INT8_MIN;
	int64_t x51 = -1LL;
	int64_t x52 = -1LL;
	static volatile int32_t t6 = -1;

	t6 = ((x49-x50)<<(x51<x52));

	if (t6 != 129) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x61 = -1;
	uint64_t x62 = 280878LLU;
	uint8_t x63 = 21U;
	static volatile uint64_t t7 = 483744401215342LLU;

	t7 = ((x61-x62)<<(x63<x64));

	if (t7 != 18446744073709270737LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x85 = 60;
	uint32_t x87 = 2375703U;
	volatile uint64_t t8 = 9673750294LLU;

	t8 = ((x85-x86)<<(x87<x88));

	if (t8 != 11211635452524772382LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x97 = INT16_MAX;
	volatile uint64_t x98 = UINT64_MAX;
	static int32_t x99 = 494986436;
	uint16_t x100 = UINT16_MAX;
	static uint64_t t9 = 25LLU;

	t9 = ((x97-x98)<<(x99<x100));

	if (t9 != 32768LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x115 = INT64_MIN;
	int64_t x116 = -17530LL;
	static uint64_t t10 = 1LLU;

	t10 = ((x113-x114)<<(x115<x116));

	if (t10 != 18446740945082616734LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x117 = 385U;
	volatile int32_t x118 = INT32_MAX;
	int8_t x119 = INT8_MAX;
	int16_t x120 = -1;
	volatile uint32_t t11 = 124394732U;

	t11 = ((x117-x118)<<(x119<x120));

	if (t11 != 2147484034U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x121 = 844258604062146LL;
	static int16_t x122 = INT16_MIN;
	int16_t x123 = -62;
	static uint32_t x124 = UINT32_MAX;
	volatile int64_t t12 = -258998LL;

	t12 = ((x121-x122)<<(x123<x124));

	if (t12 != 1688517208189828LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x125 = INT8_MAX;
	int16_t x126 = INT16_MIN;
	static uint16_t x127 = 966U;
	uint32_t x128 = 43871U;
	int32_t t13 = -57207780;

	t13 = ((x125-x126)<<(x127<x128));

	if (t13 != 65790) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x133 = 123148314101LLU;
	int8_t x135 = 27;
	volatile int32_t x136 = INT32_MIN;
	volatile uint64_t t14 = 2045503153LLU;

	t14 = ((x133-x134)<<(x135<x136));

	if (t14 != 123148346869LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x137 = 1116701LLU;
	volatile int8_t x138 = -4;
	int32_t x140 = INT32_MAX;
	uint64_t t15 = 57923LLU;

	t15 = ((x137-x138)<<(x139<x140));

	if (t15 != 1116705LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x143 = 82U;
	uint8_t x144 = UINT8_MAX;
	int32_t t16 = 25597580;

	t16 = ((x141-x142)<<(x143<x144));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x145 = -13;
	int16_t x146 = INT16_MIN;
	int32_t x147 = -1;
	int64_t x148 = -1765760120LL;

	t17 = ((x145-x146)<<(x147<x148));

	if (t17 != 32755) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x153 = INT8_MAX;
	uint64_t x154 = 198667LLU;
	volatile int32_t x155 = INT32_MIN;
	static int64_t x156 = INT64_MIN;
	volatile uint64_t t18 = 31031LLU;

	t18 = ((x153-x154)<<(x155<x156));

	if (t18 != 18446744073709353076LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x159 = INT32_MIN;
	int64_t t19 = -9187463802329767LL;

	t19 = ((x157-x158)<<(x159<x160));

	if (t19 != 164427497714223268LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x165 = -425620939LL;
	int32_t x166 = INT32_MIN;
	int16_t x167 = -1;
	int64_t x168 = INT64_MIN;

	t20 = ((x165-x166)<<(x167<x168));

	if (t20 != 1721862709LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x169 = -1;
	uint32_t x170 = UINT32_MAX;
	static int64_t x172 = INT64_MIN;
	volatile uint32_t t21 = 5898U;

	t21 = ((x169-x170)<<(x171<x172));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x173 = 1;
	int64_t x175 = INT64_MAX;
	uint32_t x176 = 0U;
	volatile int32_t t22 = 96321;

	t22 = ((x173-x174)<<(x175<x176));

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x181 = UINT64_MAX;
	uint16_t x182 = 1537U;
	static volatile uint64_t t23 = 105LLU;

	t23 = ((x181-x182)<<(x183<x184));

	if (t23 != 18446744073709548540LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x185 = UINT8_MAX;
	int8_t x186 = INT8_MAX;
	static int8_t x187 = INT8_MAX;
	volatile int32_t x188 = INT32_MAX;
	int32_t t24 = 186070090;

	t24 = ((x185-x186)<<(x187<x188));

	if (t24 != 256) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x190 = -3836;
	int64_t x191 = INT64_MAX;
	volatile int16_t x192 = -1;
	volatile int64_t t25 = 0LL;

	t25 = ((x189-x190)<<(x191<x192));

	if (t25 != 3835LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x193 = INT8_MIN;
	volatile int64_t x194 = INT64_MIN;
	int64_t x195 = 60937LL;
	volatile int64_t t26 = 2LL;

	t26 = ((x193-x194)<<(x195<x196));

	if (t26 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint8_t x197 = 10U;
	int64_t x198 = -1LL;
	uint64_t x199 = 817LLU;
	static int64_t x200 = INT64_MAX;
	int64_t t27 = 1744527406995647548LL;

	t27 = ((x197-x198)<<(x199<x200));

	if (t27 != 22LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x205 = INT8_MAX;
	int16_t x206 = -1;
	uint16_t x208 = 3U;
	volatile int32_t t28 = -90883130;

	t28 = ((x205-x206)<<(x207<x208));

	if (t28 != 128) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x209 = -3;
	static int8_t x210 = INT8_MIN;
	int16_t x211 = -1;
	static int64_t x212 = -1LL;
	volatile int32_t t29 = 188072997;

	t29 = ((x209-x210)<<(x211<x212));

	if (t29 != 125) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x213 = -1;
	volatile uint64_t x214 = UINT64_MAX;
	volatile uint8_t x216 = 25U;
	uint64_t t30 = 18LLU;

	t30 = ((x213-x214)<<(x215<x216));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x221 = 9809985U;
	int32_t x222 = INT32_MAX;
	uint64_t x223 = 337960700396LLU;
	uint32_t x224 = 47109949U;
	static volatile uint32_t t31 = 10U;

	t31 = ((x221-x222)<<(x223<x224));

	if (t31 != 2157293634U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x229 = 39;

	t32 = ((x229-x230)<<(x231<x232));

	if (t32 != 40U) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x241 = 1;
	static volatile int64_t x242 = -4070936072082112297LL;
	volatile int8_t x243 = -1;
	volatile int64_t x244 = INT64_MIN;

	t33 = ((x241-x242)<<(x243<x244));

	if (t33 != 4070936072082112298LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x245 = INT8_MAX;
	volatile uint8_t x246 = 77U;
	static uint64_t x247 = 979721412LLU;
	int8_t x248 = INT8_MAX;
	static int32_t t34 = -611087;

	t34 = ((x245-x246)<<(x247<x248));

	if (t34 != 50) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x249 = UINT64_MAX;
	volatile uint64_t x250 = 8394704261898618LLU;
	volatile uint64_t x251 = UINT64_MAX;
	volatile uint64_t t35 = 0LLU;

	t35 = ((x249-x250)<<(x251<x252));

	if (t35 != 18438349369447652997LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x253 = 110390;
	volatile int64_t x254 = -1LL;
	int8_t x255 = 1;
	int32_t x256 = -1;
	volatile int64_t t36 = -145363614097496LL;

	t36 = ((x253-x254)<<(x255<x256));

	if (t36 != 110391LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x261 = 15U;
	int64_t x263 = INT64_MIN;
	int32_t x264 = 2084;
	static int32_t t37 = 1212;

	t37 = ((x261-x262)<<(x263<x264));

	if (t37 != 32) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x273 = -1;
	uint32_t x274 = 6U;
	static volatile int32_t x275 = -535204589;
	uint32_t x276 = UINT32_MAX;
	volatile uint32_t t38 = 1721U;

	t38 = ((x273-x274)<<(x275<x276));

	if (t38 != 4294967282U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x301 = 4585418U;
	int32_t x304 = -6935941;
	uint32_t t39 = 32815870U;

	t39 = ((x301-x302)<<(x303<x304));

	if (t39 != 9170836U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x309 = 27U;
	int64_t x310 = -10490LL;
	static uint16_t x311 = 0U;
	int64_t t40 = -22LL;

	t40 = ((x309-x310)<<(x311<x312));

	if (t40 != 21034LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x321 = 33164856148LLU;
	int16_t x322 = INT16_MIN;
	uint64_t x323 = 3409LLU;
	volatile int32_t x324 = INT32_MIN;
	volatile uint64_t t41 = 1552153843861238LLU;

	t41 = ((x321-x322)<<(x323<x324));

	if (t41 != 66329777832LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x338 = 77U;
	static volatile int32_t x340 = 1108;
	uint32_t t42 = 332689588U;

	t42 = ((x337-x338)<<(x339<x340));

	if (t42 != 48469506U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x349 = UINT8_MAX;
	int16_t x352 = 10;
	static volatile int32_t t43 = 355576;

	t43 = ((x349-x350)<<(x351<x352));

	if (t43 != 514) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x353 = UINT8_MAX;
	static int64_t x355 = INT64_MIN;

	t44 = ((x353-x354)<<(x355<x356));

	if (t44 != 766) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x361 = 2177705575LLU;
	int64_t x362 = -1LL;
	volatile uint64_t t45 = 86664906LLU;

	t45 = ((x361-x362)<<(x363<x364));

	if (t45 != 2177705576LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x377 = 1505516LLU;
	int8_t x378 = INT8_MIN;
	volatile int8_t x379 = -11;
	int32_t x380 = INT32_MAX;
	volatile uint64_t t46 = 1293167LLU;

	t46 = ((x377-x378)<<(x379<x380));

	if (t46 != 3011288LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x381 = 2650U;
	static uint8_t x382 = 30U;
	static int64_t x383 = -8518322620029LL;
	int64_t x384 = INT64_MIN;
	volatile int32_t t47 = 988581980;

	t47 = ((x381-x382)<<(x383<x384));

	if (t47 != 2620) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x385 = 1U;
	int64_t x387 = INT64_MIN;
	static uint32_t x388 = 64U;
	static int32_t t48 = -565689045;

	t48 = ((x385-x386)<<(x387<x388));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x401 = UINT16_MAX;
	volatile int16_t x402 = INT16_MIN;
	int64_t x403 = INT64_MAX;

	t49 = ((x401-x402)<<(x403<x404));

	if (t49 != 98303) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x405 = UINT8_MAX;
	static int32_t x406 = -1;
	uint32_t x407 = 537357U;
	uint64_t x408 = 7979181302539LLU;

	t50 = ((x405-x406)<<(x407<x408));

	if (t50 != 512) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x410 = 30U;
	uint8_t x411 = 41U;
	static int64_t x412 = -1LL;
	volatile uint64_t t51 = 105866LLU;

	t51 = ((x409-x410)<<(x411<x412));

	if (t51 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x421 = -1;
	int32_t x422 = -10;
	int64_t x423 = -1LL;
	volatile int64_t x424 = INT64_MIN;
	volatile int32_t t52 = 31423;

	t52 = ((x421-x422)<<(x423<x424));

	if (t52 != 9) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x425 = INT16_MIN;
	int16_t x426 = INT16_MIN;
	static int64_t x427 = INT64_MAX;
	int8_t x428 = 0;
	int32_t t53 = 3812457;

	t53 = ((x425-x426)<<(x427<x428));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x433 = -1;
	int8_t x434 = INT8_MIN;
	uint64_t x435 = 1629187397339384LLU;
	static volatile int32_t x436 = 20660899;
	int32_t t54 = 331698;

	t54 = ((x433-x434)<<(x435<x436));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x441 = 4;
	volatile uint32_t x442 = UINT32_MAX;
	int64_t x443 = INT64_MIN;
	static uint32_t t55 = 1U;

	t55 = ((x441-x442)<<(x443<x444));

	if (t55 != 10U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x445 = 0U;
	int16_t x446 = INT16_MIN;
	uint16_t x447 = 827U;
	int32_t t56 = 85;

	t56 = ((x445-x446)<<(x447<x448));

	if (t56 != 32768) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x450 = INT32_MIN;
	uint64_t x451 = UINT64_MAX;
	int64_t x452 = INT64_MIN;
	static volatile int32_t t57 = -4068666;

	t57 = ((x449-x450)<<(x451<x452));

	if (t57 != 2147483311) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x453 = 0U;
	int8_t x454 = INT8_MIN;
	volatile uint64_t x455 = 3292112486LLU;
	int32_t x456 = INT32_MIN;
	volatile int32_t t58 = -13008281;

	t58 = ((x453-x454)<<(x455<x456));

	if (t58 != 256) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x486 = 3962645796486LLU;
	static int16_t x487 = INT16_MIN;
	int8_t x488 = 3;
	volatile uint64_t t59 = 51833480155710035LLU;

	t59 = ((x485-x486)<<(x487<x488));

	if (t59 != 18446736148417958642LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint16_t x491 = UINT16_MAX;
	int16_t x492 = INT16_MAX;
	int64_t t60 = 1082LL;

	t60 = ((x489-x490)<<(x491<x492));

	if (t60 != 1321114268LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x493 = -1LL;
	int64_t x494 = INT64_MIN;
	int8_t x496 = -7;
	static volatile int64_t t61 = INT64_MAX;

	t61 = ((x493-x494)<<(x495<x496));

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x501 = -156109LL;
	int32_t x503 = INT32_MIN;
	int8_t x504 = INT8_MAX;

	t62 = ((x501-x502)<<(x503<x504));

	if (t62 != 4294655078LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x509 = 309U;
	static int32_t x510 = -470596;
	static int8_t x511 = -5;
	static uint32_t t63 = 24616306U;

	t63 = ((x509-x510)<<(x511<x512));

	if (t63 != 941810U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x513 = 3U;
	volatile int8_t x514 = 1;
	static int64_t x515 = -1715LL;
	static int8_t x516 = -1;

	t64 = ((x513-x514)<<(x515<x516));

	if (t64 != 4) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x517 = INT8_MAX;
	int8_t x519 = INT8_MIN;
	uint16_t x520 = UINT16_MAX;
	int32_t t65 = 882517853;

	t65 = ((x517-x518)<<(x519<x520));

	if (t65 != 256) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x521 = 1U;
	int16_t x522 = -13;
	static uint8_t x523 = 26U;
	int16_t x524 = 1174;
	volatile int32_t t66 = -1;

	t66 = ((x521-x522)<<(x523<x524));

	if (t66 != 28) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x526 = 3;
	uint16_t x527 = 46U;
	volatile int32_t t67 = 460485308;

	t67 = ((x525-x526)<<(x527<x528));

	if (t67 != 131064) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x529 = -1LL;
	int32_t x530 = INT32_MIN;
	uint32_t x531 = 2388U;
	int8_t x532 = 0;
	volatile int64_t t68 = 1LL;

	t68 = ((x529-x530)<<(x531<x532));

	if (t68 != 2147483647LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x533 = 864;
	static volatile int8_t x534 = INT8_MAX;
	uint64_t x535 = UINT64_MAX;
	int64_t x536 = -1LL;
	volatile int32_t t69 = -451;

	t69 = ((x533-x534)<<(x535<x536));

	if (t69 != 737) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x561 = INT8_MIN;
	static volatile int64_t x562 = -62321780838LL;
	static int8_t x563 = INT8_MAX;
	static int64_t t70 = 40LL;

	t70 = ((x561-x562)<<(x563<x564));

	if (t70 != 124643561420LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x565 = -6;
	volatile int64_t x566 = -616593009LL;
	uint64_t x567 = UINT64_MAX;
	static volatile int64_t t71 = 12LL;

	t71 = ((x565-x566)<<(x567<x568));

	if (t71 != 616593003LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x569 = -14;
	static int64_t x570 = INT64_MIN;
	int64_t x571 = -1LL;
	int8_t x572 = -2;
	static int64_t t72 = 8093538LL;

	t72 = ((x569-x570)<<(x571<x572));

	if (t72 != 9223372036854775794LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x574 = -1LL;
	static uint32_t x575 = 1467582637U;
	static volatile int64_t t73 = -1145427203083313141LL;

	t73 = ((x573-x574)<<(x575<x576));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x581 = 1010;
	uint16_t x582 = 703U;
	int16_t x583 = INT16_MIN;
	volatile int32_t x584 = INT32_MIN;

	t74 = ((x581-x582)<<(x583<x584));

	if (t74 != 307) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x585 = 1867798U;
	int16_t x586 = -1;
	int8_t x587 = INT8_MAX;
	int64_t x588 = INT64_MAX;
	uint32_t t75 = 11972240U;

	t75 = ((x585-x586)<<(x587<x588));

	if (t75 != 3735598U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x589 = UINT8_MAX;
	int32_t x590 = -1;
	volatile uint64_t x591 = 53923LLU;
	volatile int8_t x592 = INT8_MIN;
	volatile int32_t t76 = -20;

	t76 = ((x589-x590)<<(x591<x592));

	if (t76 != 512) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x593 = UINT64_MAX;

	t77 = ((x593-x594)<<(x595<x596));

	if (t77 != 32767LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x602 = INT16_MIN;
	volatile int32_t x603 = INT32_MIN;
	static volatile int64_t t78 = -24369461326404LL;

	t78 = ((x601-x602)<<(x603<x604));

	if (t78 != 164380LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x605 = INT32_MAX;
	uint64_t x606 = UINT64_MAX;
	volatile uint8_t x607 = 39U;
	volatile uint8_t x608 = 25U;

	t79 = ((x605-x606)<<(x607<x608));

	if (t79 != 2147483648LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x609 = 3041134LLU;
	int64_t x610 = INT64_MIN;
	int64_t x612 = INT64_MAX;
	uint64_t t80 = 37813579243LLU;

	t80 = ((x609-x610)<<(x611<x612));

	if (t80 != 6082268LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x613 = -1LL;
	int8_t x614 = INT8_MIN;

	t81 = ((x613-x614)<<(x615<x616));

	if (t81 != 127LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x625 = INT32_MIN;
	uint8_t x627 = 2U;

	t82 = ((x625-x626)<<(x627<x628));

	if (t82 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x629 = 3183129487961LL;
	int16_t x630 = INT16_MIN;
	int16_t x631 = INT16_MIN;
	int16_t x632 = -1;
	static int64_t t83 = 4203884LL;

	t83 = ((x629-x630)<<(x631<x632));

	if (t83 != 6366259041458LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x637 = 105LLU;
	int64_t x638 = INT64_MIN;
	int32_t x639 = INT32_MIN;

	t84 = ((x637-x638)<<(x639<x640));

	if (t84 != 9223372036854775913LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x641 = INT32_MAX;
	uint16_t x642 = 63U;
	static int8_t x643 = INT8_MIN;
	static volatile int32_t t85 = 935149641;

	t85 = ((x641-x642)<<(x643<x644));

	if (t85 != 2147483584) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x645 = UINT64_MAX;
	volatile uint64_t t86 = 41068533899029381LLU;

	t86 = ((x645-x646)<<(x647<x648));

	if (t86 != 4294967294LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x650 = INT16_MIN;
	int32_t x651 = 0;
	int8_t x652 = 5;
	volatile uint64_t t87 = 24531LLU;

	t87 = ((x649-x650)<<(x651<x652));

	if (t87 != 139234498301696360LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x661 = -1;
	uint64_t x662 = 28742665LLU;
	volatile int64_t x663 = INT64_MIN;
	uint8_t x664 = UINT8_MAX;
	uint64_t t88 = 297629109240969140LLU;

	t88 = ((x661-x662)<<(x663<x664));

	if (t88 != 18446744073652066284LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x666 = 50104690U;
	int8_t x667 = INT8_MIN;
	uint8_t x668 = 12U;
	volatile uint32_t t89 = 465U;

	t89 = ((x665-x666)<<(x667<x668));

	if (t89 != 4194757918U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x669 = INT8_MIN;
	uint64_t x670 = 4229107827935117796LLU;
	int32_t x672 = 44;
	static volatile uint64_t t90 = 2160309807001375249LLU;

	t90 = ((x669-x670)<<(x671<x672));

	if (t90 != 9988528417839315768LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x673 = -1;
	int8_t x674 = -1;
	static int64_t x676 = 14LL;

	t91 = ((x673-x674)<<(x675<x676));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x681 = INT32_MIN;
	static uint32_t x682 = UINT32_MAX;
	static int32_t x683 = 627;
	uint16_t x684 = 12921U;
	volatile uint32_t t92 = 1U;

	t92 = ((x681-x682)<<(x683<x684));

	if (t92 != 2U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x685 = 3;
	int8_t x686 = -16;
	int16_t x687 = -1;
	int16_t x688 = -1;
	int32_t t93 = -9207809;

	t93 = ((x685-x686)<<(x687<x688));

	if (t93 != 19) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x689 = 99U;
	static uint8_t x690 = 1U;
	int32_t t94 = 1123;

	t94 = ((x689-x690)<<(x691<x692));

	if (t94 != 98) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x697 = UINT16_MAX;
	int16_t x698 = INT16_MAX;
	uint8_t x699 = 90U;
	static volatile int32_t t95 = -3883;

	t95 = ((x697-x698)<<(x699<x700));

	if (t95 != 32768) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x709 = INT8_MAX;
	int8_t x710 = INT8_MAX;
	volatile int32_t x711 = INT32_MIN;
	int32_t x712 = INT32_MIN;
	volatile int32_t t96 = -94148;

	t96 = ((x709-x710)<<(x711<x712));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x713 = UINT32_MAX;
	int16_t x714 = 0;
	int64_t x715 = INT64_MIN;
	int32_t x716 = -13023779;
	volatile uint32_t t97 = 940453U;

	t97 = ((x713-x714)<<(x715<x716));

	if (t97 != 4294967294U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x717 = 3883286785LL;
	int32_t x718 = 3;
	int32_t x719 = INT32_MAX;
	volatile int16_t x720 = 5;
	volatile int64_t t98 = 1760LL;

	t98 = ((x717-x718)<<(x719<x720));

	if (t98 != 3883286782LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x729 = 943U;
	volatile uint8_t x730 = 1U;
	uint16_t x731 = UINT16_MAX;
	static int16_t x732 = INT16_MIN;

	t99 = ((x729-x730)<<(x731<x732));

	if (t99 != 942) { NG(); } else { ; }
	
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


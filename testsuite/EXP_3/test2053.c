#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x5 = INT16_MIN;
volatile int64_t x9 = INT64_MAX;
uint8_t x22 = 6U;
int64_t x27 = -1LL;
static int16_t x38 = INT16_MIN;
int32_t x48 = 917909121;
uint8_t x50 = UINT8_MAX;
uint32_t x58 = 1378911705U;
static volatile int32_t x64 = -749;
int16_t x67 = -16153;
volatile uint16_t x69 = 207U;
uint16_t x72 = 21167U;
volatile uint64_t t16 = 88110219221605LLU;
uint32_t t17 = 1893259698U;
int32_t x88 = INT32_MIN;
uint8_t x92 = 1U;
uint16_t x106 = 3747U;
static int32_t x107 = INT32_MIN;
uint8_t x108 = 19U;
volatile int64_t t22 = -193LL;
int8_t x117 = 44;
int16_t x118 = -1;
static int32_t x119 = INT32_MAX;
static int16_t x120 = INT16_MAX;
volatile uint8_t x121 = UINT8_MAX;
int8_t x130 = -1;
int8_t x134 = -1;
static volatile uint64_t t27 = 204617594680480LLU;
uint8_t x141 = 0U;
int32_t x144 = INT32_MAX;
int16_t x150 = -20;
volatile int8_t x163 = INT8_MIN;
static uint16_t x167 = UINT16_MAX;
int16_t x169 = -1;
static int64_t x170 = -1LL;
int8_t x172 = 0;
uint64_t t36 = 256357973112LLU;
int64_t x195 = -1LL;
static volatile int16_t x211 = -1;
volatile int64_t x212 = INT64_MIN;
int64_t t40 = 6004344479LL;
static int64_t x220 = -1LL;
volatile int64_t t44 = 24752692119LL;
static volatile int32_t x260 = INT32_MIN;
static int8_t x264 = INT8_MAX;
uint64_t x267 = 559947625286LLU;
volatile int32_t x273 = INT32_MIN;
uint16_t x279 = UINT16_MAX;
uint8_t x281 = UINT8_MAX;
int32_t x289 = INT32_MIN;
uint32_t t59 = 2919U;
uint64_t x296 = UINT64_MAX;
volatile int64_t x300 = -17949848068384203LL;
volatile int16_t x308 = INT16_MIN;
uint32_t x312 = 473697U;
volatile int32_t x314 = -1;
volatile int32_t t65 = -969;
int32_t x318 = -1;
int16_t x319 = 40;
static volatile int32_t x322 = -1;
static volatile int32_t x336 = -7437037;
static int16_t x342 = INT16_MAX;
uint64_t x344 = 216636LLU;
volatile int32_t x346 = INT32_MAX;
static volatile int32_t x350 = INT32_MIN;
volatile uint64_t t72 = UINT64_MAX;
volatile int8_t x357 = -1;
uint16_t x360 = UINT16_MAX;
uint32_t x362 = 2U;
volatile uint64_t x366 = 94451458LLU;
volatile int16_t x367 = -11;
int8_t x368 = -1;
int32_t x370 = 625;
int64_t x375 = INT64_MIN;
uint64_t x386 = UINT64_MAX;
int64_t x387 = -136117621977050LL;
int8_t x388 = -5;
int64_t x390 = 292LL;
int32_t x398 = -1;
int64_t x399 = INT64_MIN;
uint8_t x411 = 2U;
uint64_t x412 = 10LLU;
static int16_t x417 = -52;
int64_t x420 = -785LL;
int16_t x424 = INT16_MIN;
uint64_t t89 = 356946173720LLU;
uint64_t x428 = 4136469LLU;
volatile int64_t x431 = INT64_MIN;
uint64_t t91 = 2833097328693LLU;
uint64_t x438 = 163268146729522LLU;
int16_t x442 = -1;
int64_t t94 = 0LL;
volatile uint32_t x445 = UINT32_MAX;
int64_t t95 = 4287523097LL;
volatile int16_t x450 = -1;
uint64_t x452 = UINT64_MAX;
uint64_t x458 = 11706LLU;
uint8_t x460 = 53U;


void f0(void) {
	uint16_t x1 = 1U;
	uint8_t x2 = UINT8_MAX;
	uint16_t x3 = 864U;
	uint32_t x4 = 0U;
	static uint32_t t0 = 7913U;

	t0 = ((x1-x2)|(x3^x4));

	if (t0 != 4294967138U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = 0LL;
	volatile int8_t x7 = INT8_MAX;
	int64_t x8 = -1LL;
	static int64_t t1 = 1LL;

	t1 = ((x5-x6)|(x7^x8));

	if (t1 != -128LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x10 = UINT16_MAX;
	int32_t x11 = -1;
	int32_t x12 = INT32_MIN;
	static volatile int64_t t2 = INT64_MAX;

	t2 = ((x9-x10)|(x11^x12));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 17644632;
	volatile uint64_t x14 = 32957020278655307LLU;
	int16_t x15 = INT16_MIN;
	int64_t x16 = -1424091190008LL;
	volatile uint64_t t3 = 15LLU;

	t3 = ((x13-x14)|(x15^x16));

	if (t3 != 18413787088076930829LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 1340839349U;
	volatile uint32_t x18 = 14280220U;
	volatile int64_t x19 = INT64_MIN;
	int16_t x20 = INT16_MIN;
	int64_t t4 = 189LL;

	t4 = ((x17-x18)|(x19^x20));

	if (t4 != 9223372036854755225LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	static volatile int16_t x23 = INT16_MIN;
	static volatile int64_t x24 = INT64_MIN;
	volatile int64_t t5 = 8531498416LL;

	t5 = ((x21-x22)|(x23^x24));

	if (t5 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1934;
	int8_t x26 = -1;
	int32_t x28 = -4;
	volatile int64_t t6 = -26179LL;

	t6 = ((x25-x26)|(x27^x28));

	if (t6 != -1933LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 5U;
	uint32_t x30 = 256752384U;
	uint64_t x31 = UINT64_MAX;
	int8_t x32 = 7;
	uint64_t t7 = 122015807LLU;

	t7 = ((x29-x30)|(x31^x32));

	if (t7 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	volatile int64_t x34 = -1LL;
	int64_t x35 = INT64_MIN;
	static int64_t x36 = -1LL;
	volatile int64_t t8 = INT64_MAX;

	t8 = ((x33-x34)|(x35^x36));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -27;
	int8_t x39 = 7;
	int64_t x40 = INT64_MIN;
	static int64_t t9 = -104LL;

	t9 = ((x37-x38)|(x39^x40));

	if (t9 != -9223372036854743065LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MIN;
	volatile uint64_t x46 = 56937034794LLU;
	uint32_t x47 = 4773168U;
	volatile uint64_t t10 = 72155LLU;

	t10 = ((x45-x46)|(x47^x48));

	if (t10 != 18446744014636973047LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MAX;
	int16_t x51 = INT16_MIN;
	static int8_t x52 = INT8_MAX;
	static volatile int32_t t11 = 27314;

	t11 = ((x49-x50)|(x51^x52));

	if (t11 != -129) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x53 = UINT32_MAX;
	int64_t x54 = -1LL;
	uint16_t x55 = 1417U;
	int64_t x56 = INT64_MIN;
	int64_t t12 = -601781700721051LL;

	t12 = ((x53-x54)|(x55^x56));

	if (t12 != -9223372032559807095LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x57 = UINT64_MAX;
	uint64_t x59 = 11716145182LLU;
	int64_t x60 = -113134929738LL;
	uint64_t t13 = 10657LLU;

	t13 = ((x57-x58)|(x59^x60));

	if (t13 != 18446744072635808430LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 25U;
	int16_t x62 = INT16_MIN;
	static uint32_t x63 = UINT32_MAX;
	uint32_t t14 = 40U;

	t14 = ((x61-x62)|(x63^x64));

	if (t14 != 33533U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	volatile int32_t x66 = -70762;
	static volatile uint64_t x68 = UINT64_MAX;
	uint64_t t15 = 71385143359698882LLU;

	t15 = ((x65-x66)|(x67^x68));

	if (t15 != 18446744071562149754LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x70 = 43292638690LLU;
	volatile uint16_t x71 = UINT16_MAX;

	t16 = ((x69-x70)|(x71^x72));

	if (t16 != 18446744030416924669LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x77 = -1;
	volatile int8_t x78 = INT8_MIN;
	static uint16_t x79 = 0U;
	volatile uint32_t x80 = 5040U;

	t17 = ((x77-x78)|(x79^x80));

	if (t17 != 5119U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = 565899;
	static uint64_t x86 = 15737415446727611LLU;
	uint16_t x87 = UINT16_MAX;
	uint64_t t18 = 348601447704749LLU;

	t18 = ((x85-x86)|(x87^x88));

	if (t18 != 18446744073418506239LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = INT32_MIN;
	uint32_t x90 = 1656722U;
	uint8_t x91 = UINT8_MAX;
	volatile uint32_t t19 = 167428U;

	t19 = ((x89-x90)|(x91^x92));

	if (t19 != 2145827070U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x101 = 6U;
	volatile int32_t x102 = -681;
	int32_t x103 = -350122772;
	int32_t x104 = INT32_MIN;
	int32_t t20 = -49825621;

	t20 = ((x101-x102)|(x103^x104));

	if (t20 != 1797361391) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x105 = -1;
	volatile int32_t t21 = -11019752;

	t21 = ((x105-x106)|(x107^x108));

	if (t21 != -3745) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x109 = 1U;
	int32_t x110 = INT32_MIN;
	int32_t x111 = INT32_MIN;
	int64_t x112 = 28153397837564LL;

	t22 = ((x109-x110)|(x111^x112));

	if (t22 != -28149328445699LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t t23 = 0;

	t23 = ((x117-x118)|(x119^x120));

	if (t23 != 2147450925) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x122 = UINT32_MAX;
	int8_t x123 = -1;
	int8_t x124 = -48;
	static volatile uint32_t t24 = 1U;

	t24 = ((x121-x122)|(x123^x124));

	if (t24 != 303U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x125 = UINT64_MAX;
	int16_t x126 = INT16_MIN;
	static int16_t x127 = -238;
	uint32_t x128 = UINT32_MAX;
	static volatile uint64_t t25 = 21727LLU;

	t25 = ((x125-x126)|(x127^x128));

	if (t25 != 32767LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x129 = UINT16_MAX;
	int8_t x131 = INT8_MIN;
	int32_t x132 = -1;
	volatile int32_t t26 = -12146;

	t26 = ((x129-x130)|(x131^x132));

	if (t26 != 65663) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x133 = 6326;
	static uint64_t x135 = UINT64_MAX;
	uint64_t x136 = 9596235LLU;

	t27 = ((x133-x134)|(x135^x136));

	if (t27 != 18446744073699957431LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x137 = -1;
	int16_t x138 = INT16_MIN;
	static uint8_t x139 = 6U;
	int32_t x140 = INT32_MIN;
	volatile int32_t t28 = -257446;

	t28 = ((x137-x138)|(x139^x140));

	if (t28 != -2147450881) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x142 = 12U;
	static int16_t x143 = INT16_MIN;
	volatile int32_t t29 = 73;

	t29 = ((x141-x142)|(x143^x144));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x145 = 4U;
	uint64_t x146 = 533940655692LLU;
	uint8_t x147 = 5U;
	static int16_t x148 = INT16_MIN;
	volatile uint64_t t30 = 121264LLU;

	t30 = ((x145-x146)|(x147^x148));

	if (t30 != 18446744073709529533LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x149 = INT32_MIN;
	int16_t x151 = INT16_MIN;
	static int64_t x152 = INT64_MAX;
	int64_t t31 = 875954LL;

	t31 = ((x149-x150)|(x151^x152));

	if (t31 != -2147450881LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x153 = INT64_MIN;
	static int16_t x154 = INT16_MIN;
	uint64_t x155 = 3250391031534696532LLU;
	int64_t x156 = INT64_MAX;
	static volatile uint64_t t32 = 40195884947301679LLU;

	t32 = ((x153-x154)|(x155^x156));

	if (t32 != 15196353042174887851LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x161 = 1;
	int8_t x162 = -1;
	static int16_t x164 = INT16_MAX;
	int32_t t33 = 6;

	t33 = ((x161-x162)|(x163^x164));

	if (t33 != -32641) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x165 = INT16_MIN;
	int64_t x166 = -129848026750434LL;
	uint8_t x168 = 1U;
	static volatile int64_t t34 = -4606736975LL;

	t34 = ((x165-x166)|(x167^x168));

	if (t34 != 129848026726398LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x171 = INT8_MAX;
	volatile int64_t t35 = 264901084574133LL;

	t35 = ((x169-x170)|(x171^x172));

	if (t35 != 127LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x177 = -1;
	static int64_t x178 = 527919LL;
	uint64_t x179 = 8514058817997376LLU;
	uint8_t x180 = 11U;

	t36 = ((x177-x178)|(x179^x180));

	if (t36 != 18446744073709026267LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x193 = 3U;
	int8_t x194 = -1;
	int8_t x196 = -8;
	volatile int64_t t37 = -5LL;

	t37 = ((x193-x194)|(x195^x196));

	if (t37 != 7LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x197 = 5170;
	int8_t x198 = INT8_MAX;
	uint64_t x199 = 6474240714LLU;
	uint16_t x200 = 4587U;
	uint64_t t38 = 30744344932597LLU;

	t38 = ((x197-x198)|(x199^x200));

	if (t38 != 6474240947LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x201 = 8070007327LL;
	uint32_t x202 = 7215701U;
	static int16_t x203 = INT16_MIN;
	static uint8_t x204 = 2U;
	volatile int64_t t39 = 1299724666920LL;

	t39 = ((x201-x202)|(x203^x204));

	if (t39 != -4150LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x209 = -1;
	int32_t x210 = INT32_MAX;

	t40 = ((x209-x210)|(x211^x212));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x213 = INT64_MIN;
	static int8_t x214 = INT8_MIN;
	uint32_t x215 = 7384356U;
	int16_t x216 = -1;
	int64_t t41 = 1874644945LL;

	t41 = ((x213-x214)|(x215^x216));

	if (t41 != -9223372032567192869LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x217 = 3945U;
	int32_t x218 = -1559;
	uint32_t x219 = UINT32_MAX;
	int64_t t42 = 1LL;

	t42 = ((x217-x218)|(x219^x220));

	if (t42 != -4294961792LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x221 = 1778115U;
	uint8_t x222 = UINT8_MAX;
	uint8_t x223 = 30U;
	int64_t x224 = INT64_MIN;
	volatile int64_t t43 = 324LL;

	t43 = ((x221-x222)|(x223^x224));

	if (t43 != -9223372036852997922LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x225 = -1;
	int32_t x226 = INT32_MIN;
	static volatile int16_t x227 = -1;
	int64_t x228 = -1LL;

	t44 = ((x225-x226)|(x227^x228));

	if (t44 != 2147483647LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x229 = INT16_MIN;
	int64_t x230 = 14773001440LL;
	volatile int32_t x231 = 182;
	uint8_t x232 = 15U;
	static int64_t t45 = 242226257180238094LL;

	t45 = ((x229-x230)|(x231^x232));

	if (t45 != -14773034055LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x233 = -59LL;
	int32_t x234 = -28529480;
	volatile uint8_t x235 = 9U;
	static int16_t x236 = -1;
	int64_t t46 = 0LL;

	t46 = ((x233-x234)|(x235^x236));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x237 = UINT64_MAX;
	int8_t x238 = -4;
	static int64_t x239 = INT64_MAX;
	static int8_t x240 = -1;
	volatile uint64_t t47 = 3136290LLU;

	t47 = ((x237-x238)|(x239^x240));

	if (t47 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x241 = 15U;
	int8_t x242 = INT8_MIN;
	int8_t x243 = -5;
	int8_t x244 = INT8_MIN;
	static int32_t t48 = 30037638;

	t48 = ((x241-x242)|(x243^x244));

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x245 = -490002950733LL;
	int32_t x246 = INT32_MIN;
	volatile int16_t x247 = 344;
	int32_t x248 = INT32_MAX;
	int64_t t49 = 44LL;

	t49 = ((x245-x246)|(x247^x248));

	if (t49 != -487478788169LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x253 = INT32_MIN;
	int8_t x254 = -6;
	volatile int64_t x255 = -9612LL;
	volatile int8_t x256 = -12;
	volatile int64_t t50 = -6598LL;

	t50 = ((x253-x254)|(x255^x256));

	if (t50 != -2147474042LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x257 = UINT64_MAX;
	volatile int8_t x258 = INT8_MIN;
	uint8_t x259 = 2U;
	volatile uint64_t t51 = 2LLU;

	t51 = ((x257-x258)|(x259^x260));

	if (t51 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x261 = -1LL;
	int16_t x262 = -167;
	uint64_t x263 = 3873752168451116LLU;
	uint64_t t52 = 1LLU;

	t52 = ((x261-x262)|(x263^x264));

	if (t52 != 3873752168451319LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x265 = INT16_MIN;
	int32_t x266 = 3416;
	static int8_t x268 = 3;
	volatile uint64_t t53 = 11289LLU;

	t53 = ((x265-x266)|(x267^x268));

	if (t53 != 18446744073709548525LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x269 = -1;
	int64_t x270 = 8105127501446LL;
	int32_t x271 = 23049;
	static int8_t x272 = INT8_MAX;
	volatile int64_t t54 = -312LL;

	t54 = ((x269-x270)|(x271^x272));

	if (t54 != -8105127478401LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x274 = INT64_MIN;
	uint32_t x275 = UINT32_MAX;
	int16_t x276 = -1;
	volatile int64_t t55 = 35LL;

	t55 = ((x273-x274)|(x275^x276));

	if (t55 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x277 = 115662702500073LLU;
	static int32_t x278 = 46780742;
	int16_t x280 = INT16_MAX;
	uint64_t t56 = 21008781802309LLU;

	t56 = ((x277-x278)|(x279^x280));

	if (t56 != 115662655752099LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x282 = 9U;
	static volatile int8_t x283 = -1;
	int16_t x284 = -276;
	volatile int32_t t57 = -39659;

	t57 = ((x281-x282)|(x283^x284));

	if (t57 != 503) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x285 = INT8_MAX;
	uint32_t x286 = 157368207U;
	int8_t x287 = INT8_MAX;
	static int32_t x288 = -69;
	uint32_t t58 = 0U;

	t58 = ((x285-x286)|(x287^x288));

	if (t58 != 4294967284U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x290 = 270913U;
	static uint32_t x291 = UINT32_MAX;
	int16_t x292 = INT16_MAX;

	t59 = ((x289-x290)|(x291^x292));

	if (t59 != 4294958527U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x293 = INT16_MIN;
	uint8_t x294 = UINT8_MAX;
	int64_t x295 = INT64_MIN;
	volatile uint64_t t60 = UINT64_MAX;

	t60 = ((x293-x294)|(x295^x296));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x297 = -1;
	uint8_t x298 = 0U;
	static uint64_t x299 = UINT64_MAX;
	uint64_t t61 = UINT64_MAX;

	t61 = ((x297-x298)|(x299^x300));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x301 = -1;
	uint64_t x302 = 15726062260231LLU;
	int8_t x303 = INT8_MAX;
	int16_t x304 = -1;
	uint64_t t62 = 6756469825751129LLU;

	t62 = ((x301-x302)|(x303^x304));

	if (t62 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x305 = 51U;
	int32_t x306 = -1;
	volatile uint8_t x307 = 0U;
	int32_t t63 = 3896;

	t63 = ((x305-x306)|(x307^x308));

	if (t63 != -32716) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x309 = INT8_MIN;
	uint32_t x310 = 3U;
	uint16_t x311 = 11U;
	static volatile uint32_t t64 = 0U;

	t64 = ((x309-x310)|(x311^x312));

	if (t64 != 4294967167U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x313 = INT32_MIN;
	int16_t x315 = INT16_MIN;
	uint16_t x316 = 197U;

	t65 = ((x313-x314)|(x315^x316));

	if (t65 != -32571) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x317 = -1LL;
	int32_t x320 = -47;
	volatile int64_t t66 = -86931823376LL;

	t66 = ((x317-x318)|(x319^x320));

	if (t66 != -7LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x321 = -1;
	static int32_t x323 = INT32_MIN;
	int64_t x324 = INT64_MIN;
	volatile int64_t t67 = 36590797905787097LL;

	t67 = ((x321-x322)|(x323^x324));

	if (t67 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x329 = 0;
	int64_t x330 = -1LL;
	int8_t x331 = INT8_MAX;
	int64_t x332 = INT64_MIN;
	volatile int64_t t68 = -8085128LL;

	t68 = ((x329-x330)|(x331^x332));

	if (t68 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x333 = UINT8_MAX;
	volatile int16_t x334 = INT16_MIN;
	static volatile uint64_t x335 = 2146183125312447LLU;
	uint64_t t69 = 1LLU;

	t69 = ((x333-x334)|(x335^x336));

	if (t69 != 18444597890585241343LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x341 = INT64_MAX;
	volatile int16_t x343 = INT16_MIN;
	uint64_t t70 = 494205414LLU;

	t70 = ((x341-x342)|(x343^x344));

	if (t70 != 18446744073709538876LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x345 = 27;
	static uint8_t x347 = 2U;
	uint8_t x348 = 3U;
	static int32_t t71 = -416043650;

	t71 = ((x345-x346)|(x347^x348));

	if (t71 != -2147483619) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x349 = -51;
	uint8_t x351 = 0U;
	uint64_t x352 = UINT64_MAX;

	t72 = ((x349-x350)|(x351^x352));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x353 = INT32_MIN;
	static uint64_t x354 = 11LLU;
	int8_t x355 = 1;
	static volatile int64_t x356 = INT64_MAX;
	static uint64_t t73 = UINT64_MAX;

	t73 = ((x353-x354)|(x355^x356));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x358 = 7334;
	int16_t x359 = INT16_MIN;
	int32_t t74 = 4691094;

	t74 = ((x357-x358)|(x359^x360));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x361 = INT16_MAX;
	static int32_t x363 = -1;
	uint16_t x364 = 3U;
	uint32_t t75 = 106270U;

	t75 = ((x361-x362)|(x363^x364));

	if (t75 != 4294967293U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x365 = 8U;
	volatile uint64_t t76 = 236LLU;

	t76 = ((x365-x366)|(x367^x368));

	if (t76 != 18446744073615100174LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x369 = INT8_MIN;
	int32_t x371 = -2007532;
	volatile uint32_t x372 = 476000U;
	uint32_t t77 = 44937115U;

	t77 = ((x369-x370)|(x371^x372));

	if (t77 != 4294966655U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x373 = -116LL;
	int32_t x374 = -1;
	int16_t x376 = INT16_MIN;
	volatile int64_t t78 = -1319479813LL;

	t78 = ((x373-x374)|(x375^x376));

	if (t78 != -115LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x377 = UINT16_MAX;
	int16_t x378 = -2580;
	int16_t x379 = INT16_MIN;
	int64_t x380 = INT64_MIN;
	int64_t t79 = 19177833475585234LL;

	t79 = ((x377-x378)|(x379^x380));

	if (t79 != 9223372036854745619LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x381 = UINT16_MAX;
	uint32_t x382 = 777735581U;
	uint16_t x383 = UINT16_MAX;
	static uint64_t x384 = 2949LLU;
	volatile uint64_t t80 = 24984LLU;

	t80 = ((x381-x382)|(x383^x384));

	if (t80 != 3517314682LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x385 = UINT8_MAX;
	static volatile uint64_t t81 = 983721578LLU;

	t81 = ((x385-x386)|(x387^x388));

	if (t81 != 136117621977053LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x389 = INT32_MIN;
	static int64_t x391 = INT64_MIN;
	uint16_t x392 = 5985U;
	int64_t t82 = -14284193LL;

	t82 = ((x389-x390)|(x391^x392));

	if (t82 != -2147483651LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x393 = INT8_MAX;
	static int8_t x394 = -10;
	int16_t x395 = 135;
	int16_t x396 = -1;
	volatile int32_t t83 = -11;

	t83 = ((x393-x394)|(x395^x396));

	if (t83 != -7) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x397 = 1;
	uint8_t x400 = 76U;
	volatile int64_t t84 = -29877388LL;

	t84 = ((x397-x398)|(x399^x400));

	if (t84 != -9223372036854775730LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x401 = -1LL;
	uint16_t x402 = 0U;
	int16_t x403 = 1;
	volatile int16_t x404 = -1;
	int64_t t85 = 50007LL;

	t85 = ((x401-x402)|(x403^x404));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x405 = 1;
	volatile uint8_t x406 = 1U;
	static uint32_t x407 = 17333463U;
	volatile int16_t x408 = INT16_MIN;
	uint32_t t86 = 953U;

	t86 = ((x405-x406)|(x407^x408));

	if (t86 != 4277664983U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x409 = 11436558U;
	uint32_t x410 = 1139U;
	uint64_t t87 = 145954360878146LLU;

	t87 = ((x409-x410)|(x411^x412));

	if (t87 != 11435419LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x418 = 190094U;
	uint16_t x419 = 24909U;
	volatile int64_t t88 = -1980LL;

	t88 = ((x417-x418)|(x419^x420));

	if (t88 != -25154LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x421 = 164747747263718LL;
	uint64_t x422 = 13978697LLU;
	int32_t x423 = INT32_MIN;

	t89 = ((x421-x422)|(x423^x424));

	if (t89 != 164748503005341LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x425 = INT8_MIN;
	static int64_t x426 = INT64_MIN;
	volatile int16_t x427 = 16090;
	volatile uint64_t t90 = 35823473043LLU;

	t90 = ((x425-x426)|(x427^x428));

	if (t90 != 9223372036854775759LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x429 = -590519863LL;
	volatile int64_t x430 = -729487770822LL;
	uint64_t x432 = 129373427532343759LLU;

	t91 = ((x429-x430)|(x431^x432));

	if (t91 != 9352746055222554575LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x433 = -1;
	static uint8_t x434 = 2U;
	volatile int32_t x435 = -1;
	uint16_t x436 = 1776U;
	int32_t t92 = 18931139;

	t92 = ((x433-x434)|(x435^x436));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x437 = INT16_MIN;
	static volatile int32_t x439 = INT32_MIN;
	volatile int8_t x440 = -1;
	static uint64_t t93 = 3LLU;

	t93 = ((x437-x438)|(x439^x440));

	if (t93 != 18446580806970245119LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x441 = INT64_MIN;
	int16_t x443 = INT16_MAX;
	volatile uint16_t x444 = UINT16_MAX;

	t94 = ((x441-x442)|(x443^x444));

	if (t94 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x446 = -1;
	uint16_t x447 = 184U;
	int64_t x448 = -1LL;

	t95 = ((x445-x446)|(x447^x448));

	if (t95 != -185LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x449 = 146898965820LLU;
	int8_t x451 = -1;
	volatile uint64_t t96 = 3547481543632LLU;

	t96 = ((x449-x450)|(x451^x452));

	if (t96 != 146898965821LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x453 = -1LL;
	volatile int16_t x454 = INT16_MAX;
	int8_t x455 = 1;
	static int32_t x456 = -355584;
	static int64_t t97 = 121603491278080252LL;

	t97 = ((x453-x454)|(x455^x456));

	if (t97 != -27903LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x457 = -31;
	int32_t x459 = INT32_MIN;
	uint64_t t98 = 1031828966LLU;

	t98 = ((x457-x458)|(x459^x460));

	if (t98 != 18446744073709539895LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x461 = 13877U;
	int64_t x462 = INT64_MAX;
	uint16_t x463 = 555U;
	int64_t x464 = INT64_MIN;
	int64_t t99 = 65226737404687970LL;

	t99 = ((x461-x462)|(x463^x464));

	if (t99 != -9223372036854761921LL) { NG(); } else { ; }
	
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


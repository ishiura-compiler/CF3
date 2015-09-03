#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t4 = 160LLU;
static uint8_t x33 = UINT8_MAX;
int64_t x43 = -15664226LL;
uint32_t t9 = 6687U;
uint32_t x60 = 17U;
static uint16_t x70 = 2564U;
volatile int64_t t13 = 7060138568881LL;
int32_t x76 = INT32_MIN;
static int32_t t14 = -1;
int16_t x79 = INT16_MAX;
int16_t x80 = INT16_MIN;
int16_t x82 = INT16_MAX;
volatile uint32_t t18 = 8U;
uint8_t x97 = UINT8_MAX;
uint64_t t22 = 271502401304LLU;
volatile uint64_t x121 = UINT64_MAX;
volatile uint8_t x127 = 15U;
static volatile int64_t t29 = 24253381034392LL;
uint64_t x146 = 570828LLU;
int64_t x150 = -73LL;
uint64_t x152 = 681849LLU;
int32_t t32 = 9;
volatile int8_t x158 = -1;
static int32_t t33 = -1;
int32_t x161 = -2;
volatile int8_t x165 = 6;
static int8_t x180 = INT8_MIN;
volatile uint32_t t37 = 1481702U;
int16_t x185 = INT16_MIN;
int8_t x186 = 3;
static int64_t x188 = -1LL;
static uint32_t x194 = UINT32_MAX;
int8_t x197 = INT8_MIN;
int8_t x198 = INT8_MIN;
volatile int16_t x199 = INT16_MIN;
static volatile int32_t t40 = 0;
uint32_t x216 = 26U;
uint32_t x222 = UINT32_MAX;
static int16_t x231 = INT16_MIN;
uint16_t x232 = 910U;
int32_t x234 = -1;
int16_t x238 = -6332;
int64_t t51 = 2740576LL;
int32_t x256 = INT32_MAX;
int16_t x258 = -12253;
int16_t x262 = -47;
int32_t x263 = -46032;
uint32_t x266 = 1U;
uint64_t x267 = UINT64_MAX;
uint8_t x270 = 7U;
volatile uint64_t t56 = 1718053918651016LLU;
volatile int64_t x273 = INT64_MAX;
volatile int32_t x279 = INT32_MIN;
uint8_t x283 = 52U;
int64_t t59 = 10157757333LL;
int8_t x287 = -1;
int32_t x289 = 3360861;
int16_t x291 = INT16_MIN;
int8_t x304 = INT8_MAX;
int8_t x311 = INT8_MIN;
volatile uint64_t x317 = 8136128284914781689LLU;
uint64_t x319 = UINT64_MAX;
uint32_t x320 = 1983U;
int8_t x323 = INT8_MIN;
volatile uint64_t t67 = 50442684501161359LLU;
volatile int32_t t68 = -467;
int8_t x333 = INT8_MIN;
int16_t x335 = 0;
uint32_t x341 = UINT32_MAX;
int32_t x343 = INT32_MAX;
static int32_t t73 = -33;
int64_t x359 = -4619LL;
int16_t x369 = INT16_MIN;
int8_t x371 = INT8_MAX;
int16_t x372 = -1;
int64_t x374 = INT64_MIN;
uint64_t x376 = UINT64_MAX;
int8_t x381 = -1;
uint64_t x382 = 143576044669656LLU;
int8_t x385 = INT8_MIN;
int64_t x386 = INT64_MIN;
int64_t x392 = -1LL;
volatile uint64_t x393 = 10275449406LLU;
static int32_t x395 = 236;
int64_t x400 = -1537832160130779LL;
static volatile int64_t x419 = INT64_MIN;
int64_t x428 = INT64_MIN;
static int8_t x431 = 2;
uint8_t x436 = 1U;
static int32_t x452 = 578050534;
uint32_t x462 = 82U;
volatile uint32_t t97 = 2060623U;
int32_t x474 = -13;
volatile int16_t x475 = 268;
volatile uint32_t t99 = 351U;


void f0(void) {
	int32_t x1 = 59418180;
	int16_t x2 = -1;
	uint64_t x3 = 6542506350334997LLU;
	int64_t x4 = INT64_MIN;
	int32_t t0 = 10648;

	t0 = ((x1-x2)|(x3<=x4));

	if (t0 != 59418181) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int32_t x6 = -1;
	uint64_t x7 = 757307029236617897LLU;
	static uint64_t x8 = UINT64_MAX;
	volatile int32_t t1 = 951;

	t1 = ((x5-x6)|(x7<=x8));

	if (t1 != -127) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x9 = UINT8_MAX;
	int8_t x10 = 1;
	static volatile int8_t x11 = -1;
	uint16_t x12 = 23090U;
	int32_t t2 = 32379634;

	t2 = ((x9-x10)|(x11<=x12));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x21 = 545193878U;
	int8_t x22 = INT8_MIN;
	int16_t x23 = INT16_MIN;
	uint16_t x24 = 2U;
	volatile uint32_t t3 = 229980167U;

	t3 = ((x21-x22)|(x23<=x24));

	if (t3 != 545194007U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x29 = 151773202U;
	uint64_t x30 = UINT64_MAX;
	uint8_t x31 = 66U;
	uint64_t x32 = UINT64_MAX;

	t4 = ((x29-x30)|(x31<=x32));

	if (t4 != 151773203LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x34 = 1874;
	uint32_t x35 = 60U;
	uint32_t x36 = 23U;
	int32_t t5 = -38607095;

	t5 = ((x33-x34)|(x35<=x36));

	if (t5 != -1619) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = -1;
	uint8_t x38 = 36U;
	int8_t x39 = 3;
	int8_t x40 = 1;
	volatile int32_t t6 = -94757;

	t6 = ((x37-x38)|(x39<=x40));

	if (t6 != -37) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x41 = INT8_MIN;
	int16_t x42 = -1;
	static int16_t x44 = -1;
	static int32_t t7 = 749;

	t7 = ((x41-x42)|(x43<=x44));

	if (t7 != -127) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x45 = 120040570911LLU;
	static uint64_t x46 = UINT64_MAX;
	int16_t x47 = INT16_MIN;
	volatile uint16_t x48 = UINT16_MAX;
	static uint64_t t8 = 26LLU;

	t8 = ((x45-x46)|(x47<=x48));

	if (t8 != 120040570913LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x49 = 27U;
	uint32_t x50 = 6376U;
	int8_t x51 = 3;
	int16_t x52 = INT16_MIN;

	t9 = ((x49-x50)|(x51<=x52));

	if (t9 != 4294960947U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x57 = INT16_MIN;
	uint16_t x58 = UINT16_MAX;
	int16_t x59 = INT16_MIN;
	int32_t t10 = -9786;

	t10 = ((x57-x58)|(x59<=x60));

	if (t10 != -98303) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x61 = -434;
	int8_t x62 = INT8_MIN;
	uint8_t x63 = UINT8_MAX;
	int64_t x64 = -719LL;
	int32_t t11 = -898421591;

	t11 = ((x61-x62)|(x63<=x64));

	if (t11 != -306) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x65 = -1LL;
	uint32_t x66 = UINT32_MAX;
	int32_t x67 = -407;
	int64_t x68 = -1LL;
	int64_t t12 = -1511LL;

	t12 = ((x65-x66)|(x67<=x68));

	if (t12 != -4294967295LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x69 = 47420LL;
	uint8_t x71 = 2U;
	volatile uint16_t x72 = 1274U;

	t13 = ((x69-x70)|(x71<=x72));

	if (t13 != 44857LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x73 = 1;
	int16_t x74 = -1;
	int32_t x75 = -35415737;

	t14 = ((x73-x74)|(x75<=x76));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x77 = UINT32_MAX;
	uint8_t x78 = 88U;
	uint32_t t15 = 134993U;

	t15 = ((x77-x78)|(x79<=x80));

	if (t15 != 4294967207U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x81 = UINT16_MAX;
	int32_t x83 = INT32_MAX;
	uint16_t x84 = UINT16_MAX;
	static volatile int32_t t16 = -214012;

	t16 = ((x81-x82)|(x83<=x84));

	if (t16 != 32768) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x85 = -1LL;
	static int32_t x86 = INT32_MIN;
	int16_t x87 = INT16_MIN;
	uint16_t x88 = UINT16_MAX;
	int64_t t17 = 2971542810162353LL;

	t17 = ((x85-x86)|(x87<=x88));

	if (t17 != 2147483647LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x89 = 1230071U;
	static uint32_t x90 = 1536027U;
	int32_t x91 = INT32_MIN;
	static int16_t x92 = INT16_MIN;

	t18 = ((x89-x90)|(x91<=x92));

	if (t18 != 4294661341U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x98 = -9;
	uint64_t x99 = 24123LLU;
	int32_t x100 = INT32_MIN;
	static int32_t t19 = -9;

	t19 = ((x97-x98)|(x99<=x100));

	if (t19 != 265) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = INT8_MAX;
	int64_t x102 = -1LL;
	static uint8_t x103 = UINT8_MAX;
	volatile int16_t x104 = INT16_MIN;
	volatile int64_t t20 = -265983LL;

	t20 = ((x101-x102)|(x103<=x104));

	if (t20 != 128LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x105 = -145;
	int32_t x106 = INT32_MIN;
	static int16_t x107 = INT16_MIN;
	static int32_t x108 = INT32_MIN;
	static volatile int32_t t21 = -28798;

	t21 = ((x105-x106)|(x107<=x108));

	if (t21 != 2147483503) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x109 = 129504889450231LLU;
	int64_t x110 = -1LL;
	int32_t x111 = INT32_MIN;
	static int64_t x112 = -47847918LL;

	t22 = ((x109-x110)|(x111<=x112));

	if (t22 != 129504889450233LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x113 = INT8_MIN;
	uint16_t x114 = UINT16_MAX;
	volatile int8_t x115 = -1;
	int8_t x116 = INT8_MAX;
	volatile int32_t t23 = -51206867;

	t23 = ((x113-x114)|(x115<=x116));

	if (t23 != -65663) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = 4928;
	int16_t x118 = INT16_MIN;
	int32_t x119 = INT32_MAX;
	uint16_t x120 = 432U;
	volatile int32_t t24 = 967695552;

	t24 = ((x117-x118)|(x119<=x120));

	if (t24 != 37696) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x122 = -1342502;
	uint64_t x123 = 55393842081790602LLU;
	uint8_t x124 = UINT8_MAX;
	volatile uint64_t t25 = 22170658705271LLU;

	t25 = ((x121-x122)|(x123<=x124));

	if (t25 != 1342501LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x125 = 2981831648470670LLU;
	int16_t x126 = -217;
	int16_t x128 = INT16_MIN;
	volatile uint64_t t26 = 899580837LLU;

	t26 = ((x125-x126)|(x127<=x128));

	if (t26 != 2981831648470887LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x133 = -15491;
	uint16_t x134 = UINT16_MAX;
	uint16_t x135 = 1763U;
	int8_t x136 = -1;
	int32_t t27 = 978921848;

	t27 = ((x133-x134)|(x135<=x136));

	if (t27 != -81026) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x137 = INT32_MIN;
	uint64_t x138 = UINT64_MAX;
	volatile int16_t x139 = INT16_MAX;
	uint8_t x140 = 6U;
	volatile uint64_t t28 = 3852710074LLU;

	t28 = ((x137-x138)|(x139<=x140));

	if (t28 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x141 = 10U;
	int64_t x142 = -48LL;
	uint16_t x143 = 85U;
	int8_t x144 = -1;

	t29 = ((x141-x142)|(x143<=x144));

	if (t29 != 58LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x145 = 278219LL;
	int32_t x147 = -1;
	static int8_t x148 = 0;
	uint64_t t30 = 1LLU;

	t30 = ((x145-x146)|(x147<=x148));

	if (t30 != 18446744073709259007LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x149 = -25125502;
	int64_t x151 = INT64_MIN;
	static volatile int64_t t31 = -243LL;

	t31 = ((x149-x150)|(x151<=x152));

	if (t31 != -25125429LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x153 = 956U;
	static int16_t x154 = -1;
	int32_t x155 = INT32_MIN;
	static int8_t x156 = INT8_MAX;

	t32 = ((x153-x154)|(x155<=x156));

	if (t32 != 957) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x157 = 30U;
	int32_t x159 = INT32_MIN;
	static int8_t x160 = 1;

	t33 = ((x157-x158)|(x159<=x160));

	if (t33 != 31) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x162 = 1U;
	uint32_t x163 = 14U;
	uint32_t x164 = UINT32_MAX;
	static volatile int32_t t34 = -135316987;

	t34 = ((x161-x162)|(x163<=x164));

	if (t34 != -3) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x166 = -273591584391963LL;
	volatile uint32_t x167 = 552542U;
	int16_t x168 = -1;
	volatile int64_t t35 = 5751879464618LL;

	t35 = ((x165-x166)|(x167<=x168));

	if (t35 != 273591584391969LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x177 = -1;
	int32_t x178 = INT32_MIN;
	uint16_t x179 = 26U;
	int32_t t36 = INT32_MAX;

	t36 = ((x177-x178)|(x179<=x180));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x181 = -5;
	uint32_t x182 = 15895840U;
	int16_t x183 = INT16_MIN;
	int16_t x184 = 19;

	t37 = ((x181-x182)|(x183<=x184));

	if (t37 != 4279071451U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x187 = INT16_MAX;
	int32_t t38 = 52231;

	t38 = ((x185-x186)|(x187<=x188));

	if (t38 != -32771) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x193 = -242;
	int32_t x195 = INT32_MAX;
	int64_t x196 = INT64_MIN;
	uint32_t t39 = 181112559U;

	t39 = ((x193-x194)|(x195<=x196));

	if (t39 != 4294967055U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x200 = -1;

	t40 = ((x197-x198)|(x199<=x200));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x209 = INT64_MIN;
	static int32_t x210 = INT32_MIN;
	static uint64_t x211 = UINT64_MAX;
	int16_t x212 = -1804;
	volatile int64_t t41 = -573356540990LL;

	t41 = ((x209-x210)|(x211<=x212));

	if (t41 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x213 = -99;
	int32_t x214 = 64471;
	volatile int8_t x215 = INT8_MIN;
	int32_t t42 = 36897;

	t42 = ((x213-x214)|(x215<=x216));

	if (t42 != -64570) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x217 = 0;
	volatile int8_t x218 = INT8_MIN;
	int8_t x219 = INT8_MIN;
	static int64_t x220 = INT64_MIN;
	int32_t t43 = -3202;

	t43 = ((x217-x218)|(x219<=x220));

	if (t43 != 128) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x221 = UINT32_MAX;
	static volatile int8_t x223 = 2;
	int32_t x224 = -1;
	volatile uint32_t t44 = 9U;

	t44 = ((x221-x222)|(x223<=x224));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x225 = UINT32_MAX;
	static uint32_t x226 = 1680457U;
	int8_t x227 = INT8_MIN;
	static uint16_t x228 = 29U;
	uint32_t t45 = 1458463U;

	t45 = ((x225-x226)|(x227<=x228));

	if (t45 != 4293286839U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x229 = INT8_MIN;
	volatile uint64_t x230 = UINT64_MAX;
	volatile uint64_t t46 = 14027628361781359LLU;

	t46 = ((x229-x230)|(x231<=x232));

	if (t46 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x233 = -3;
	static volatile int8_t x235 = -1;
	uint32_t x236 = 2298U;
	int32_t t47 = 121385795;

	t47 = ((x233-x234)|(x235<=x236));

	if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x237 = INT64_MIN;
	int8_t x239 = 0;
	static uint16_t x240 = 42U;
	int64_t t48 = -1403912LL;

	t48 = ((x237-x238)|(x239<=x240));

	if (t48 != -9223372036854769475LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x241 = 0U;
	volatile uint32_t x242 = 39943760U;
	int64_t x243 = -810200447LL;
	int32_t x244 = 2;
	static uint32_t t49 = 131915698U;

	t49 = ((x241-x242)|(x243<=x244));

	if (t49 != 4255023537U) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x245 = -1;
	uint16_t x246 = 4363U;
	volatile int64_t x247 = -1LL;
	static int16_t x248 = -1;
	int32_t t50 = -2;

	t50 = ((x245-x246)|(x247<=x248));

	if (t50 != -4363) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x249 = -177598450327437LL;
	int64_t x250 = -1LL;
	static uint64_t x251 = UINT64_MAX;
	int16_t x252 = INT16_MIN;

	t51 = ((x249-x250)|(x251<=x252));

	if (t51 != -177598450327436LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x253 = 1611543690780512LLU;
	uint64_t x254 = 189728LLU;
	int16_t x255 = INT16_MIN;
	volatile uint64_t t52 = 201LLU;

	t52 = ((x253-x254)|(x255<=x256));

	if (t52 != 1611543690590785LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x257 = 562805U;
	static int64_t x259 = INT64_MIN;
	volatile int16_t x260 = INT16_MIN;
	uint32_t t53 = 25U;

	t53 = ((x257-x258)|(x259<=x260));

	if (t53 != 575059U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x261 = UINT16_MAX;
	static int64_t x264 = INT64_MIN;
	int32_t t54 = 396857;

	t54 = ((x261-x262)|(x263<=x264));

	if (t54 != 65582) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x265 = INT32_MAX;
	int64_t x268 = INT64_MAX;
	uint32_t t55 = 4358018U;

	t55 = ((x265-x266)|(x267<=x268));

	if (t55 != 2147483646U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x269 = 49312552LLU;
	int16_t x271 = INT16_MAX;
	int8_t x272 = -2;

	t56 = ((x269-x270)|(x271<=x272));

	if (t56 != 49312545LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x274 = INT32_MAX;
	volatile int32_t x275 = INT32_MIN;
	uint64_t x276 = 2140872156968639141LLU;
	static int64_t t57 = -554646LL;

	t57 = ((x273-x274)|(x275<=x276));

	if (t57 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x277 = INT32_MIN;
	int16_t x278 = -20;
	static uint32_t x280 = UINT32_MAX;
	int32_t t58 = -245301;

	t58 = ((x277-x278)|(x279<=x280));

	if (t58 != -2147483627) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x281 = 83U;
	static int64_t x282 = -1LL;
	volatile int16_t x284 = -15371;

	t59 = ((x281-x282)|(x283<=x284));

	if (t59 != 84LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x285 = 11U;
	volatile uint8_t x286 = 37U;
	int32_t x288 = -1;
	volatile int32_t t60 = -7485;

	t60 = ((x285-x286)|(x287<=x288));

	if (t60 != -25) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x290 = INT8_MIN;
	static uint16_t x292 = 1050U;
	int32_t t61 = 14193402;

	t61 = ((x289-x290)|(x291<=x292));

	if (t61 != 3360989) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x297 = UINT32_MAX;
	static uint64_t x298 = UINT64_MAX;
	int16_t x299 = INT16_MIN;
	volatile int64_t x300 = INT64_MIN;
	volatile uint64_t t62 = 165071187511LLU;

	t62 = ((x297-x298)|(x299<=x300));

	if (t62 != 4294967296LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x301 = INT32_MAX;
	int64_t x302 = -1272575975LL;
	int32_t x303 = INT32_MIN;
	volatile int64_t t63 = 3440LL;

	t63 = ((x301-x302)|(x303<=x304));

	if (t63 != 3420059623LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x309 = 0;
	uint64_t x310 = 23468166429058LLU;
	int32_t x312 = INT32_MIN;
	volatile uint64_t t64 = 15034093738LLU;

	t64 = ((x309-x310)|(x311<=x312));

	if (t64 != 18446720605543122558LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x313 = -1LL;
	int8_t x314 = -20;
	int8_t x315 = INT8_MAX;
	uint32_t x316 = UINT32_MAX;
	int64_t t65 = -65701774LL;

	t65 = ((x313-x314)|(x315<=x316));

	if (t65 != 19LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x318 = 1U;
	uint64_t t66 = 112665LLU;

	t66 = ((x317-x318)|(x319<=x320));

	if (t66 != 8136128284914781688LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x321 = -1;
	uint64_t x322 = UINT64_MAX;
	static int64_t x324 = INT64_MIN;

	t67 = ((x321-x322)|(x323<=x324));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x325 = 5U;
	uint8_t x326 = 87U;
	static int64_t x327 = INT64_MAX;
	uint32_t x328 = 707629912U;

	t68 = ((x325-x326)|(x327<=x328));

	if (t68 != -82) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x329 = -1;
	static volatile int64_t x330 = INT64_MAX;
	volatile int8_t x331 = INT8_MAX;
	int16_t x332 = INT16_MIN;
	int64_t t69 = INT64_MIN;

	t69 = ((x329-x330)|(x331<=x332));

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x334 = INT16_MIN;
	volatile int64_t x336 = INT64_MAX;
	volatile int32_t t70 = -716285797;

	t70 = ((x333-x334)|(x335<=x336));

	if (t70 != 32641) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x337 = INT8_MIN;
	uint8_t x338 = UINT8_MAX;
	int16_t x339 = INT16_MIN;
	int32_t x340 = INT32_MAX;
	int32_t t71 = -27;

	t71 = ((x337-x338)|(x339<=x340));

	if (t71 != -383) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x342 = INT16_MIN;
	int32_t x344 = INT32_MIN;
	volatile uint32_t t72 = 176565U;

	t72 = ((x341-x342)|(x343<=x344));

	if (t72 != 32767U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x345 = INT16_MIN;
	static int32_t x346 = -1;
	volatile int8_t x347 = INT8_MAX;
	int16_t x348 = INT16_MAX;

	t73 = ((x345-x346)|(x347<=x348));

	if (t73 != -32767) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x349 = 17U;
	volatile uint8_t x350 = UINT8_MAX;
	uint8_t x351 = 2U;
	volatile int64_t x352 = INT64_MIN;
	static volatile int32_t t74 = 2;

	t74 = ((x349-x350)|(x351<=x352));

	if (t74 != -238) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x353 = 169327079804956LLU;
	int16_t x354 = INT16_MIN;
	int64_t x355 = INT64_MAX;
	int32_t x356 = INT32_MIN;
	static uint64_t t75 = 274497966991257LLU;

	t75 = ((x353-x354)|(x355<=x356));

	if (t75 != 169327079837724LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x357 = UINT32_MAX;
	static int8_t x358 = -1;
	uint8_t x360 = UINT8_MAX;
	volatile uint32_t t76 = 176U;

	t76 = ((x357-x358)|(x359<=x360));

	if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x361 = INT16_MIN;
	uint8_t x362 = 28U;
	int64_t x363 = INT64_MIN;
	int16_t x364 = -3;
	volatile int32_t t77 = -1;

	t77 = ((x361-x362)|(x363<=x364));

	if (t77 != -32795) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x365 = INT8_MIN;
	static int64_t x366 = INT64_MIN;
	uint16_t x367 = 7U;
	volatile int64_t x368 = 3648552LL;
	volatile int64_t t78 = 3LL;

	t78 = ((x365-x366)|(x367<=x368));

	if (t78 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x370 = INT32_MIN;
	int32_t t79 = -17172;

	t79 = ((x369-x370)|(x371<=x372));

	if (t79 != 2147450880) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x373 = INT64_MIN;
	int8_t x375 = INT8_MIN;
	volatile int64_t t80 = -302666135640LL;

	t80 = ((x373-x374)|(x375<=x376));

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x383 = -62352971807LL;
	static int16_t x384 = 2;
	volatile uint64_t t81 = 50292689190587740LLU;

	t81 = ((x381-x382)|(x383<=x384));

	if (t81 != 18446600497664881959LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x387 = 1083;
	static int16_t x388 = INT16_MIN;
	volatile int64_t t82 = 5904427599142999LL;

	t82 = ((x385-x386)|(x387<=x388));

	if (t82 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x389 = INT32_MIN;
	int64_t x390 = -1LL;
	static int16_t x391 = INT16_MIN;
	int64_t t83 = -1729366646463923LL;

	t83 = ((x389-x390)|(x391<=x392));

	if (t83 != -2147483647LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x394 = 0;
	int64_t x396 = INT64_MIN;
	uint64_t t84 = 22LLU;

	t84 = ((x393-x394)|(x395<=x396));

	if (t84 != 10275449406LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x397 = 1U;
	uint16_t x398 = 35U;
	static uint8_t x399 = 7U;
	volatile int32_t t85 = 459;

	t85 = ((x397-x398)|(x399<=x400));

	if (t85 != -34) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x409 = INT64_MIN;
	int64_t x410 = -1LL;
	volatile uint8_t x411 = UINT8_MAX;
	int64_t x412 = 259421365219LL;
	int64_t t86 = 10678875044699LL;

	t86 = ((x409-x410)|(x411<=x412));

	if (t86 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x417 = INT32_MIN;
	static uint32_t x418 = UINT32_MAX;
	static uint32_t x420 = 692U;
	static uint32_t t87 = 26108235U;

	t87 = ((x417-x418)|(x419<=x420));

	if (t87 != 2147483649U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x425 = 38U;
	int8_t x426 = -3;
	int8_t x427 = INT8_MAX;
	static volatile int32_t t88 = 17;

	t88 = ((x425-x426)|(x427<=x428));

	if (t88 != 41) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x429 = -31;
	int8_t x430 = 27;
	int8_t x432 = 7;
	static int32_t t89 = -2354152;

	t89 = ((x429-x430)|(x431<=x432));

	if (t89 != -57) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x433 = 11;
	int32_t x434 = -1;
	int16_t x435 = INT16_MAX;
	volatile int32_t t90 = -1265;

	t90 = ((x433-x434)|(x435<=x436));

	if (t90 != 12) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x437 = INT32_MIN;
	uint32_t x438 = 444469698U;
	uint8_t x439 = 0U;
	int8_t x440 = 4;
	volatile uint32_t t91 = 19U;

	t91 = ((x437-x438)|(x439<=x440));

	if (t91 != 1703013951U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x441 = INT32_MIN;
	uint32_t x442 = UINT32_MAX;
	int64_t x443 = INT64_MIN;
	int16_t x444 = INT16_MIN;
	uint32_t t92 = 1680533409U;

	t92 = ((x441-x442)|(x443<=x444));

	if (t92 != 2147483649U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x445 = INT32_MAX;
	static uint16_t x446 = UINT16_MAX;
	static uint64_t x447 = UINT64_MAX;
	uint32_t x448 = UINT32_MAX;
	static volatile int32_t t93 = -27;

	t93 = ((x445-x446)|(x447<=x448));

	if (t93 != 2147418112) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x449 = INT16_MAX;
	volatile uint32_t x450 = UINT32_MAX;
	uint16_t x451 = UINT16_MAX;
	uint32_t t94 = 6U;

	t94 = ((x449-x450)|(x451<=x452));

	if (t94 != 32769U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x453 = INT8_MIN;
	int64_t x454 = INT64_MIN;
	uint64_t x455 = 179845520538347LLU;
	static volatile uint32_t x456 = UINT32_MAX;
	volatile int64_t t95 = -137354691936038LL;

	t95 = ((x453-x454)|(x455<=x456));

	if (t95 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x461 = 1U;
	volatile uint16_t x463 = 4U;
	int32_t x464 = INT32_MIN;
	volatile uint32_t t96 = 154177357U;

	t96 = ((x461-x462)|(x463<=x464));

	if (t96 != 4294967215U) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x465 = INT32_MIN;
	uint32_t x466 = 10U;
	int64_t x467 = 223LL;
	volatile int32_t x468 = INT32_MIN;

	t97 = ((x465-x466)|(x467<=x468));

	if (t97 != 2147483638U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x469 = 65279789U;
	uint64_t x470 = 148724LLU;
	int16_t x471 = -1;
	static int64_t x472 = INT64_MAX;
	uint64_t t98 = 4437LLU;

	t98 = ((x469-x470)|(x471<=x472));

	if (t98 != 65131065LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x473 = UINT32_MAX;
	volatile uint16_t x476 = UINT16_MAX;

	t99 = ((x473-x474)|(x475<=x476));

	if (t99 != 13U) { NG(); } else { ; }
	
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


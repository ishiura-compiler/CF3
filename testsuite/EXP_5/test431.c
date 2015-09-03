#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x13 = 28747014;
static int16_t x14 = INT16_MAX;
int8_t x29 = -1;
static int32_t t4 = 27;
int64_t x33 = INT64_MIN;
int16_t x36 = INT16_MAX;
volatile int64_t t5 = INT64_MIN;
static volatile int32_t t6 = 1;
int16_t x44 = INT16_MIN;
int32_t x47 = -213418;
volatile int8_t x52 = 0;
int32_t t9 = INT32_MIN;
volatile int32_t t10 = -1;
int16_t x57 = 1016;
int64_t x60 = INT64_MIN;
static uint16_t x61 = 581U;
volatile int64_t x70 = 5976LL;
int16_t x72 = INT16_MIN;
static volatile uint32_t x75 = UINT32_MAX;
static int32_t t15 = 190;
int32_t x89 = INT32_MAX;
int32_t t16 = INT32_MAX;
static int8_t x102 = INT8_MAX;
static int32_t x118 = -6;
volatile int8_t x120 = INT8_MIN;
uint64_t x131 = 2930112738184LLU;
int16_t x138 = INT16_MIN;
int8_t x140 = INT8_MAX;
int64_t x154 = 1069472652430385LL;
int64_t x180 = -2013228818LL;
uint16_t x183 = UINT16_MAX;
int16_t x200 = INT16_MAX;
uint8_t x204 = 7U;
static int32_t x225 = -1;
int32_t t37 = -2;
static int32_t t38 = -2594;
int32_t x236 = INT32_MIN;
int32_t x239 = INT32_MIN;
int64_t x248 = INT64_MIN;
int32_t t42 = 124217940;
int32_t x252 = INT32_MAX;
volatile int64_t t43 = 2144652197138LL;
uint8_t x256 = 27U;
static int64_t t46 = -1059370172LL;
volatile uint8_t x274 = 52U;
volatile int64_t x277 = INT64_MIN;
uint64_t x281 = 8078744LLU;
int8_t x305 = -1;
static volatile int32_t t55 = 855385832;
int32_t t56 = 2551857;
volatile int32_t x326 = INT32_MAX;
uint64_t x333 = 6269424446597245LLU;
int64_t x341 = -25149789281LL;
uint8_t x342 = 63U;
static int8_t x343 = INT8_MIN;
int64_t x346 = 1LL;
static int8_t x366 = INT8_MIN;
uint32_t x367 = 1916U;
uint32_t x372 = UINT32_MAX;
int8_t x375 = INT8_MIN;
int32_t x380 = INT32_MIN;
volatile int16_t x382 = INT16_MAX;
uint64_t x383 = 29935769288LLU;
static int16_t x387 = 539;
volatile int64_t x396 = INT64_MIN;
volatile int32_t t73 = 207154495;
uint8_t x401 = 3U;
static volatile int8_t x402 = -4;
uint8_t x407 = 4U;
volatile int32_t x414 = INT32_MIN;
static uint64_t x415 = 7701152268LLU;
uint16_t x420 = 4U;
volatile int32_t x422 = 10103834;
int16_t x425 = -15;
int8_t x427 = INT8_MAX;
int8_t x430 = INT8_MAX;
volatile uint16_t x431 = 78U;
uint16_t x438 = 2U;
int16_t x439 = INT16_MAX;
volatile uint16_t x444 = 6189U;
int64_t t84 = INT64_MAX;
volatile int8_t x451 = -1;
volatile int32_t t87 = INT32_MIN;
volatile uint16_t x464 = 1505U;
static volatile int32_t t88 = INT32_MAX;
volatile int8_t x480 = -1;
volatile int32_t t92 = -28263;
int16_t x500 = INT16_MIN;
int8_t x501 = INT8_MAX;
uint64_t x502 = 478LLU;
int64_t x510 = INT64_MIN;
static uint8_t x511 = 1U;
volatile int32_t t97 = 712532;
int8_t x517 = -1;
volatile int32_t x518 = INT32_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static int32_t x2 = INT32_MIN;
	uint32_t x3 = UINT32_MAX;
	int64_t x4 = 1948072LL;
	int32_t t0 = -1;

	t0 = (x1-((x2*x3)==x4));

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x15 = -1;
	int16_t x16 = -100;
	volatile int32_t t1 = 24010;

	t1 = (x13-((x14*x15)==x16));

	if (t1 != 28747014) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = INT16_MIN;
	uint64_t x18 = 45LLU;
	uint16_t x19 = UINT16_MAX;
	uint16_t x20 = UINT16_MAX;
	int32_t t2 = -283019;

	t2 = (x17-((x18*x19)==x20));

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = INT16_MIN;
	int8_t x22 = 30;
	volatile int8_t x23 = 3;
	int64_t x24 = -1LL;
	volatile int32_t t3 = -4;

	t3 = (x21-((x22*x23)==x24));

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x30 = INT8_MAX;
	uint16_t x31 = 65U;
	uint8_t x32 = 81U;

	t4 = (x29-((x30*x31)==x32));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x34 = UINT8_MAX;
	uint32_t x35 = UINT32_MAX;

	t5 = (x33-((x34*x35)==x36));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x37 = 7153;
	int16_t x38 = INT16_MAX;
	uint32_t x39 = 1U;
	static volatile int64_t x40 = INT64_MIN;

	t6 = (x37-((x38*x39)==x40));

	if (t6 != 7153) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x41 = INT16_MIN;
	int8_t x42 = -1;
	static uint16_t x43 = 6U;
	volatile int32_t t7 = -77103561;

	t7 = (x41-((x42*x43)==x44));

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = -1;
	uint32_t x46 = 10500716U;
	volatile uint64_t x48 = UINT64_MAX;
	int32_t t8 = -3;

	t8 = (x45-((x46*x47)==x48));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x49 = INT32_MIN;
	static uint64_t x50 = UINT64_MAX;
	int8_t x51 = 2;

	t9 = (x49-((x50*x51)==x52));

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x53 = UINT16_MAX;
	volatile uint64_t x54 = UINT64_MAX;
	int8_t x55 = 3;
	static volatile uint8_t x56 = 115U;

	t10 = (x53-((x54*x55)==x56));

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x58 = INT8_MAX;
	int8_t x59 = -1;
	int32_t t11 = 202175737;

	t11 = (x57-((x58*x59)==x60));

	if (t11 != 1016) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x62 = INT8_MAX;
	uint8_t x63 = 43U;
	static uint32_t x64 = UINT32_MAX;
	int32_t t12 = -1982943;

	t12 = (x61-((x62*x63)==x64));

	if (t12 != 581) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x69 = INT32_MIN;
	volatile int32_t x71 = INT32_MIN;
	volatile int32_t t13 = INT32_MIN;

	t13 = (x69-((x70*x71)==x72));

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x73 = 17705492807477LLU;
	int32_t x74 = 36608716;
	uint32_t x76 = 701U;
	volatile uint64_t t14 = 25755872437474LLU;

	t14 = (x73-((x74*x75)==x76));

	if (t14 != 17705492807477LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x85 = 48;
	int8_t x86 = -1;
	int16_t x87 = INT16_MAX;
	int16_t x88 = INT16_MIN;

	t15 = (x85-((x86*x87)==x88));

	if (t15 != 48) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x90 = INT16_MIN;
	int16_t x91 = 4;
	int32_t x92 = -1621;

	t16 = (x89-((x90*x91)==x92));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x93 = INT16_MIN;
	static int8_t x94 = INT8_MIN;
	uint32_t x95 = 8090559U;
	volatile int64_t x96 = INT64_MIN;
	static volatile int32_t t17 = -3594194;

	t17 = (x93-((x94*x95)==x96));

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x101 = INT8_MIN;
	volatile int32_t x103 = 14088;
	int32_t x104 = INT32_MIN;
	int32_t t18 = -1;

	t18 = (x101-((x102*x103)==x104));

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x105 = 3LLU;
	uint16_t x106 = 35U;
	int64_t x107 = 567415LL;
	uint8_t x108 = UINT8_MAX;
	uint64_t t19 = 96LLU;

	t19 = (x105-((x106*x107)==x108));

	if (t19 != 3LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x109 = INT16_MAX;
	uint32_t x110 = UINT32_MAX;
	volatile uint16_t x111 = 6838U;
	int16_t x112 = INT16_MIN;
	volatile int32_t t20 = 190424;

	t20 = (x109-((x110*x111)==x112));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x117 = 23U;
	static int16_t x119 = INT16_MIN;
	uint32_t t21 = 1U;

	t21 = (x117-((x118*x119)==x120));

	if (t21 != 23U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x129 = -56672330069277LL;
	static volatile uint8_t x130 = 87U;
	int64_t x132 = INT64_MIN;
	volatile int64_t t22 = -1027439243012000LL;

	t22 = (x129-((x130*x131)==x132));

	if (t22 != -56672330069277LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x133 = 33U;
	int16_t x134 = INT16_MIN;
	int64_t x135 = -1LL;
	int64_t x136 = INT64_MIN;
	volatile int32_t t23 = -485751;

	t23 = (x133-((x134*x135)==x136));

	if (t23 != 33) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x137 = UINT8_MAX;
	volatile uint32_t x139 = 15U;
	volatile int32_t t24 = -13572;

	t24 = (x137-((x138*x139)==x140));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x141 = 784754LL;
	int64_t x142 = 14021671879862LL;
	uint8_t x143 = 53U;
	volatile int8_t x144 = 1;
	static volatile int64_t t25 = 45399256966LL;

	t25 = (x141-((x142*x143)==x144));

	if (t25 != 784754LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x153 = -179;
	int16_t x155 = -1;
	uint32_t x156 = UINT32_MAX;
	int32_t t26 = 74279;

	t26 = (x153-((x154*x155)==x156));

	if (t26 != -179) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x157 = INT64_MIN;
	int16_t x158 = INT16_MAX;
	int8_t x159 = -15;
	uint64_t x160 = 7615038015LLU;
	volatile int64_t t27 = INT64_MIN;

	t27 = (x157-((x158*x159)==x160));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x161 = INT32_MIN;
	int32_t x162 = -2310;
	static uint32_t x163 = 829787U;
	int16_t x164 = -1;
	int32_t t28 = INT32_MIN;

	t28 = (x161-((x162*x163)==x164));

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x177 = INT16_MIN;
	uint16_t x178 = 113U;
	int8_t x179 = 59;
	static int32_t t29 = -1;

	t29 = (x177-((x178*x179)==x180));

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x181 = -1;
	uint64_t x182 = UINT64_MAX;
	uint32_t x184 = 0U;
	volatile int32_t t30 = -11682422;

	t30 = (x181-((x182*x183)==x184));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x189 = INT32_MIN;
	volatile uint8_t x190 = UINT8_MAX;
	uint8_t x191 = UINT8_MAX;
	uint8_t x192 = UINT8_MAX;
	volatile int32_t t31 = INT32_MIN;

	t31 = (x189-((x190*x191)==x192));

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x193 = UINT16_MAX;
	static int32_t x194 = -1;
	uint64_t x195 = 97LLU;
	int64_t x196 = 477054016405077LL;
	volatile int32_t t32 = -3530;

	t32 = (x193-((x194*x195)==x196));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x197 = 58;
	int32_t x198 = INT32_MAX;
	int8_t x199 = 0;
	volatile int32_t t33 = -35870;

	t33 = (x197-((x198*x199)==x200));

	if (t33 != 58) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x201 = 185475801254744LLU;
	volatile uint8_t x202 = 1U;
	volatile int8_t x203 = 0;
	uint64_t t34 = 1LLU;

	t34 = (x201-((x202*x203)==x204));

	if (t34 != 185475801254744LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x209 = INT16_MIN;
	int64_t x210 = -1LL;
	int16_t x211 = INT16_MIN;
	int8_t x212 = -1;
	volatile int32_t t35 = 42407;

	t35 = (x209-((x210*x211)==x212));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x213 = INT16_MAX;
	static uint16_t x214 = 28U;
	volatile uint16_t x215 = 4107U;
	uint16_t x216 = UINT16_MAX;
	volatile int32_t t36 = 57609;

	t36 = (x213-((x214*x215)==x216));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x226 = UINT64_MAX;
	volatile int32_t x227 = -1;
	static int8_t x228 = INT8_MIN;

	t37 = (x225-((x226*x227)==x228));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x229 = 3;
	static uint32_t x230 = 16U;
	volatile int64_t x231 = 6413202250582LL;
	int16_t x232 = INT16_MIN;

	t38 = (x229-((x230*x231)==x232));

	if (t38 != 3) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x233 = 1LLU;
	uint64_t x234 = 470144239LLU;
	static uint8_t x235 = 8U;
	uint64_t t39 = 7380684525984LLU;

	t39 = (x233-((x234*x235)==x236));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x237 = 9U;
	int64_t x238 = 55LL;
	int64_t x240 = INT64_MIN;
	int32_t t40 = -10;

	t40 = (x237-((x238*x239)==x240));

	if (t40 != 9) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x241 = UINT32_MAX;
	int16_t x242 = 6;
	static int32_t x243 = -1;
	int8_t x244 = -1;
	static uint32_t t41 = UINT32_MAX;

	t41 = (x241-((x242*x243)==x244));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x245 = 10U;
	int32_t x246 = INT32_MAX;
	uint32_t x247 = UINT32_MAX;

	t42 = (x245-((x246*x247)==x248));

	if (t42 != 10) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x249 = -1LL;
	int32_t x250 = -1;
	volatile int32_t x251 = -391356;

	t43 = (x249-((x250*x251)==x252));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x253 = UINT8_MAX;
	uint32_t x254 = 8466767U;
	int32_t x255 = INT32_MIN;
	int32_t t44 = 284803;

	t44 = (x253-((x254*x255)==x256));

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x257 = UINT16_MAX;
	static int8_t x258 = INT8_MIN;
	uint16_t x259 = 202U;
	volatile int8_t x260 = -1;
	volatile int32_t t45 = 103426;

	t45 = (x257-((x258*x259)==x260));

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x269 = 2LL;
	uint32_t x270 = UINT32_MAX;
	uint32_t x271 = 1U;
	int64_t x272 = 2411LL;

	t46 = (x269-((x270*x271)==x272));

	if (t46 != 2LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x273 = -1;
	int8_t x275 = 0;
	static volatile int16_t x276 = 3099;
	int32_t t47 = 61787230;

	t47 = (x273-((x274*x275)==x276));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x278 = 42U;
	uint32_t x279 = 3375U;
	uint16_t x280 = 572U;
	int64_t t48 = INT64_MIN;

	t48 = (x277-((x278*x279)==x280));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint8_t x282 = 1U;
	uint8_t x283 = 51U;
	uint16_t x284 = UINT16_MAX;
	uint64_t t49 = 187587172LLU;

	t49 = (x281-((x282*x283)==x284));

	if (t49 != 8078744LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x293 = -13;
	volatile int16_t x294 = 1284;
	int16_t x295 = INT16_MIN;
	int32_t x296 = -1;
	volatile int32_t t50 = -8602;

	t50 = (x293-((x294*x295)==x296));

	if (t50 != -13) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x297 = -1;
	uint16_t x298 = UINT16_MAX;
	uint32_t x299 = UINT32_MAX;
	int8_t x300 = -1;
	volatile int32_t t51 = -2;

	t51 = (x297-((x298*x299)==x300));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x301 = 4U;
	static int32_t x302 = -815;
	uint64_t x303 = UINT64_MAX;
	int8_t x304 = INT8_MIN;
	volatile uint32_t t52 = 2753009U;

	t52 = (x301-((x302*x303)==x304));

	if (t52 != 4U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x306 = -1;
	volatile int8_t x307 = -1;
	static uint8_t x308 = 92U;
	int32_t t53 = 206426;

	t53 = (x305-((x306*x307)==x308));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x309 = 2037U;
	static uint8_t x310 = 1U;
	int16_t x311 = -58;
	int64_t x312 = INT64_MIN;
	static volatile int32_t t54 = 18;

	t54 = (x309-((x310*x311)==x312));

	if (t54 != 2037) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x313 = 2;
	static int8_t x314 = INT8_MIN;
	volatile uint8_t x315 = UINT8_MAX;
	static int32_t x316 = INT32_MAX;

	t55 = (x313-((x314*x315)==x316));

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x321 = 2U;
	uint8_t x322 = 0U;
	uint16_t x323 = UINT16_MAX;
	int16_t x324 = INT16_MAX;

	t56 = (x321-((x322*x323)==x324));

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x325 = -452;
	int16_t x327 = 0;
	static int32_t x328 = INT32_MIN;
	int32_t t57 = 224;

	t57 = (x325-((x326*x327)==x328));

	if (t57 != -452) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x334 = -14009;
	uint32_t x335 = 191U;
	int64_t x336 = INT64_MIN;
	static uint64_t t58 = 46693735835LLU;

	t58 = (x333-((x334*x335)==x336));

	if (t58 != 6269424446597245LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x337 = INT64_MIN;
	static int32_t x338 = INT32_MIN;
	uint64_t x339 = 56198521LLU;
	volatile int64_t x340 = -414249LL;
	int64_t t59 = INT64_MIN;

	t59 = (x337-((x338*x339)==x340));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x344 = INT32_MAX;
	volatile int64_t t60 = -46784251374LL;

	t60 = (x341-((x342*x343)==x344));

	if (t60 != -25149789281LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x345 = INT16_MAX;
	int32_t x347 = -70;
	int16_t x348 = INT16_MAX;
	int32_t t61 = 0;

	t61 = (x345-((x346*x347)==x348));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x353 = INT64_MAX;
	uint64_t x354 = 126868996697488LLU;
	int32_t x355 = INT32_MAX;
	static volatile uint16_t x356 = 0U;
	volatile int64_t t62 = INT64_MAX;

	t62 = (x353-((x354*x355)==x356));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x357 = INT16_MIN;
	int16_t x358 = 0;
	int64_t x359 = INT64_MIN;
	uint32_t x360 = 1406U;
	volatile int32_t t63 = -341;

	t63 = (x357-((x358*x359)==x360));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x361 = 3623LLU;
	volatile uint16_t x362 = 2U;
	volatile uint16_t x363 = 0U;
	volatile int64_t x364 = -1LL;
	static uint64_t t64 = 14527672550462LLU;

	t64 = (x361-((x362*x363)==x364));

	if (t64 != 3623LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x365 = INT16_MAX;
	static uint8_t x368 = 27U;
	volatile int32_t t65 = -57085661;

	t65 = (x365-((x366*x367)==x368));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x369 = INT16_MIN;
	uint64_t x370 = 1877943849638273020LLU;
	static uint32_t x371 = 24314679U;
	int32_t t66 = 227586;

	t66 = (x369-((x370*x371)==x372));

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x373 = INT8_MIN;
	volatile int32_t x374 = -1;
	int32_t x376 = INT32_MAX;
	int32_t t67 = -37;

	t67 = (x373-((x374*x375)==x376));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x377 = INT32_MAX;
	int16_t x378 = INT16_MIN;
	uint8_t x379 = 44U;
	volatile int32_t t68 = INT32_MAX;

	t68 = (x377-((x378*x379)==x380));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x381 = INT32_MIN;
	static volatile int32_t x384 = -44014205;
	volatile int32_t t69 = INT32_MIN;

	t69 = (x381-((x382*x383)==x384));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x385 = INT16_MIN;
	uint64_t x386 = UINT64_MAX;
	int64_t x388 = INT64_MIN;
	static int32_t t70 = -28096670;

	t70 = (x385-((x386*x387)==x388));

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x389 = UINT8_MAX;
	uint32_t x390 = 1829266U;
	int64_t x391 = -1LL;
	int8_t x392 = INT8_MAX;
	int32_t t71 = -1588;

	t71 = (x389-((x390*x391)==x392));

	if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x393 = 125933152U;
	volatile uint32_t x394 = UINT32_MAX;
	volatile uint8_t x395 = 119U;
	volatile uint32_t t72 = 82515U;

	t72 = (x393-((x394*x395)==x396));

	if (t72 != 125933152U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x397 = UINT16_MAX;
	static int16_t x398 = INT16_MAX;
	static uint32_t x399 = UINT32_MAX;
	int16_t x400 = -362;

	t73 = (x397-((x398*x399)==x400));

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x403 = INT8_MIN;
	int64_t x404 = -1LL;
	static int32_t t74 = 1718695;

	t74 = (x401-((x402*x403)==x404));

	if (t74 != 3) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x405 = INT8_MAX;
	int32_t x406 = -21192336;
	int8_t x408 = 0;
	int32_t t75 = -135553;

	t75 = (x405-((x406*x407)==x408));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x409 = 14583984U;
	static int16_t x410 = INT16_MIN;
	uint32_t x411 = 0U;
	int32_t x412 = INT32_MIN;
	static volatile uint32_t t76 = 235237594U;

	t76 = (x409-((x410*x411)==x412));

	if (t76 != 14583984U) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x413 = INT16_MIN;
	int8_t x416 = INT8_MIN;
	int32_t t77 = -27249;

	t77 = (x413-((x414*x415)==x416));

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x417 = 65196732216LL;
	int8_t x418 = 2;
	int16_t x419 = INT16_MIN;
	int64_t t78 = 541LL;

	t78 = (x417-((x418*x419)==x420));

	if (t78 != 65196732216LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x421 = 80;
	uint8_t x423 = 1U;
	int8_t x424 = -1;
	volatile int32_t t79 = 142225607;

	t79 = (x421-((x422*x423)==x424));

	if (t79 != 80) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x426 = INT16_MIN;
	int64_t x428 = -1LL;
	int32_t t80 = -6061911;

	t80 = (x425-((x426*x427)==x428));

	if (t80 != -15) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x429 = INT8_MIN;
	static int8_t x432 = 14;
	int32_t t81 = -27232;

	t81 = (x429-((x430*x431)==x432));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x437 = 20956378LLU;
	int32_t x440 = INT32_MAX;
	uint64_t t82 = 7181585953LLU;

	t82 = (x437-((x438*x439)==x440));

	if (t82 != 20956378LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x441 = INT64_MIN;
	uint16_t x442 = UINT16_MAX;
	uint8_t x443 = UINT8_MAX;
	int64_t t83 = INT64_MIN;

	t83 = (x441-((x442*x443)==x444));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x445 = INT64_MAX;
	uint64_t x446 = 101121532448575628LLU;
	uint64_t x447 = UINT64_MAX;
	int8_t x448 = -1;

	t84 = (x445-((x446*x447)==x448));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x449 = INT8_MIN;
	int8_t x450 = INT8_MIN;
	uint32_t x452 = UINT32_MAX;
	int32_t t85 = -767;

	t85 = (x449-((x450*x451)==x452));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x453 = INT8_MIN;
	volatile int64_t x454 = -78765755669464LL;
	uint64_t x455 = 27469264207LLU;
	uint32_t x456 = 434282404U;
	static volatile int32_t t86 = -6589807;

	t86 = (x453-((x454*x455)==x456));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x457 = INT32_MIN;
	int8_t x458 = INT8_MAX;
	int16_t x459 = -5352;
	static volatile int16_t x460 = INT16_MIN;

	t87 = (x457-((x458*x459)==x460));

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x461 = INT32_MAX;
	int32_t x462 = -1;
	static volatile int16_t x463 = 109;

	t88 = (x461-((x462*x463)==x464));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x465 = INT64_MIN;
	static int64_t x466 = 51522103268721LL;
	int16_t x467 = -1;
	int16_t x468 = 30;
	int64_t t89 = INT64_MIN;

	t89 = (x465-((x466*x467)==x468));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x469 = UINT16_MAX;
	int64_t x470 = 40421215461754LL;
	uint64_t x471 = 890806LLU;
	uint16_t x472 = UINT16_MAX;
	int32_t t90 = -1758;

	t90 = (x469-((x470*x471)==x472));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x477 = INT32_MIN;
	int32_t x478 = INT32_MIN;
	uint64_t x479 = 342723257LLU;
	volatile int32_t t91 = INT32_MIN;

	t91 = (x477-((x478*x479)==x480));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x481 = 5;
	int16_t x482 = INT16_MIN;
	static int8_t x483 = INT8_MIN;
	uint64_t x484 = UINT64_MAX;

	t92 = (x481-((x482*x483)==x484));

	if (t92 != 5) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x493 = 9U;
	volatile uint64_t x494 = 4746169LLU;
	int8_t x495 = -8;
	uint64_t x496 = UINT64_MAX;
	int32_t t93 = 197966;

	t93 = (x493-((x494*x495)==x496));

	if (t93 != 9) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x497 = 33789793LLU;
	int8_t x498 = -1;
	int16_t x499 = -30;
	static volatile uint64_t t94 = 2013594496107757LLU;

	t94 = (x497-((x498*x499)==x500));

	if (t94 != 33789793LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x503 = UINT32_MAX;
	int32_t x504 = -2376;
	int32_t t95 = -37439667;

	t95 = (x501-((x502*x503)==x504));

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x505 = 613;
	int32_t x506 = 190;
	int16_t x507 = -13;
	uint16_t x508 = 1U;
	volatile int32_t t96 = -138884821;

	t96 = (x505-((x506*x507)==x508));

	if (t96 != 613) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x509 = UINT16_MAX;
	uint8_t x512 = UINT8_MAX;

	t97 = (x509-((x510*x511)==x512));

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x513 = 51;
	int8_t x514 = -1;
	uint8_t x515 = UINT8_MAX;
	volatile uint64_t x516 = 3335LLU;
	volatile int32_t t98 = -611;

	t98 = (x513-((x514*x515)==x516));

	if (t98 != 51) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x519 = -1;
	uint32_t x520 = 399660U;
	static int32_t t99 = -602572;

	t99 = (x517-((x518*x519)==x520));

	if (t99 != -1) { NG(); } else { ; }
	
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


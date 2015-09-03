#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x3 = -1;
int32_t t0 = 995;
uint64_t x13 = UINT64_MAX;
uint32_t x23 = 876U;
volatile uint8_t x30 = 63U;
int32_t x33 = -5710662;
int64_t x36 = -971138096744120488LL;
int32_t t8 = -257770410;
int8_t x41 = INT8_MIN;
volatile uint8_t x50 = UINT8_MAX;
int32_t t10 = 148;
volatile int32_t t12 = -31863839;
int16_t x61 = INT16_MIN;
int8_t x62 = INT8_MIN;
static int8_t x75 = -1;
int32_t x77 = 2;
uint8_t x84 = 3U;
static int32_t x105 = INT32_MIN;
int32_t t22 = 6;
static volatile int32_t t23 = 11075;
uint32_t x117 = 20U;
uint64_t x121 = UINT64_MAX;
int32_t t26 = 13510;
int16_t x128 = INT16_MAX;
uint8_t x139 = 89U;
static int64_t x146 = INT64_MIN;
int16_t x148 = INT16_MIN;
volatile int32_t t31 = 15211570;
int32_t t32 = -193;
uint16_t x153 = 212U;
volatile int32_t t33 = 1198;
static int32_t x159 = INT32_MAX;
volatile int32_t t35 = -6084;
uint32_t x177 = 949055U;
uint8_t x178 = 55U;
int8_t x179 = -1;
volatile uint64_t x180 = UINT64_MAX;
int16_t x181 = INT16_MIN;
volatile int8_t x204 = -15;
int8_t x207 = INT8_MIN;
volatile uint8_t x209 = UINT8_MAX;
int32_t t46 = -31329311;
int32_t x219 = INT32_MIN;
static volatile int32_t t47 = -413;
int8_t x224 = INT8_MAX;
int64_t x228 = INT64_MIN;
int16_t x235 = -1;
int32_t t51 = 976766;
volatile int16_t x239 = 3116;
volatile uint32_t x244 = 16U;
int8_t x246 = INT8_MAX;
int8_t x251 = 0;
uint16_t x261 = UINT16_MAX;
static int16_t x273 = INT16_MAX;
int32_t x281 = -1;
int8_t x285 = -1;
int8_t x286 = INT8_MIN;
static int16_t x287 = INT16_MIN;
int32_t t63 = -30114;
uint32_t x289 = 1664U;
uint8_t x290 = UINT8_MAX;
uint16_t x291 = 27U;
volatile uint16_t x293 = UINT16_MAX;
volatile int8_t x294 = 0;
int16_t x298 = -1;
static int8_t x321 = -1;
int16_t x326 = 20;
int8_t x327 = -11;
static volatile int16_t x334 = 683;
int32_t t75 = -105;
uint64_t x347 = 28LLU;
volatile int32_t t76 = -4525316;
int32_t x352 = INT32_MAX;
int32_t t78 = -1268856;
int32_t t79 = -227780153;
int32_t t80 = 817;
uint32_t x367 = 20U;
static volatile int32_t t84 = -109195847;
int64_t x388 = 281501LL;
int64_t x389 = -1LL;
int64_t x402 = INT64_MIN;
uint8_t x407 = 5U;
volatile int64_t x409 = -3249810792LL;
uint16_t x411 = UINT16_MAX;
uint32_t x423 = 209538014U;
static int32_t t94 = 5551292;
volatile int32_t x434 = INT32_MIN;
int64_t x436 = -1LL;
volatile int16_t x437 = INT16_MAX;
int32_t x443 = INT32_MAX;
int32_t x447 = INT32_MIN;


void f0(void) {
	int64_t x1 = 188776850085985LL;
	static int64_t x2 = -205LL;
	int32_t x4 = INT32_MAX;

	t0 = ((x1-x2)==(x3|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int8_t x6 = -9;
	int16_t x7 = -1;
	uint16_t x8 = UINT16_MAX;
	static int32_t t1 = -63;

	t1 = ((x5-x6)==(x7|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int32_t x10 = INT32_MIN;
	uint8_t x11 = 0U;
	static uint8_t x12 = 19U;
	static volatile int32_t t2 = 465;

	t2 = ((x9-x10)==(x11|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = UINT32_MAX;
	int8_t x15 = INT8_MAX;
	volatile uint8_t x16 = 12U;
	static volatile int32_t t3 = 4012498;

	t3 = ((x13-x14)==(x15|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = UINT32_MAX;
	int32_t x18 = -1;
	int64_t x19 = -3182LL;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = -3658;

	t4 = ((x17-x18)==(x19|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 5641U;
	volatile uint16_t x22 = 2725U;
	volatile int32_t x24 = INT32_MIN;
	int32_t t5 = 283534886;

	t5 = ((x21-x22)==(x23|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 3672595U;
	uint8_t x31 = 1U;
	static uint32_t x32 = 5392625U;
	int32_t t6 = 4290208;

	t6 = ((x29-x30)==(x31|x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x34 = -10569;
	int64_t x35 = INT64_MIN;
	int32_t t7 = 168172025;

	t7 = ((x33-x34)==(x35|x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = INT16_MIN;
	static int32_t x38 = -244475;
	int16_t x39 = INT16_MIN;
	static int8_t x40 = INT8_MIN;

	t8 = ((x37-x38)==(x39|x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x42 = 315U;
	static uint32_t x43 = UINT32_MAX;
	int8_t x44 = 1;
	volatile int32_t t9 = 2436;

	t9 = ((x41-x42)==(x43|x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x49 = INT64_MAX;
	static volatile uint64_t x51 = 14104178768LLU;
	int8_t x52 = INT8_MIN;

	t10 = ((x49-x50)==(x51|x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = UINT32_MAX;
	int8_t x54 = INT8_MIN;
	int8_t x55 = 0;
	volatile int32_t x56 = -1;
	static volatile int32_t t11 = 86;

	t11 = ((x53-x54)==(x55|x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x57 = UINT64_MAX;
	int32_t x58 = INT32_MIN;
	volatile uint16_t x59 = 329U;
	int64_t x60 = -1LL;

	t12 = ((x57-x58)==(x59|x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x63 = INT8_MIN;
	static int8_t x64 = 1;
	int32_t t13 = 428066;

	t13 = ((x61-x62)==(x63|x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = INT8_MIN;
	uint32_t x66 = 1U;
	uint8_t x67 = 0U;
	uint64_t x68 = 2LLU;
	static volatile int32_t t14 = -235126;

	t14 = ((x65-x66)==(x67|x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = -1394424;
	static int16_t x70 = INT16_MIN;
	uint16_t x71 = 1734U;
	int8_t x72 = -1;
	volatile int32_t t15 = -372059;

	t15 = ((x69-x70)==(x71|x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x73 = 68603LLU;
	int64_t x74 = -1LL;
	int32_t x76 = INT32_MAX;
	volatile int32_t t16 = 245983796;

	t16 = ((x73-x74)==(x75|x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x78 = INT16_MIN;
	static uint8_t x79 = UINT8_MAX;
	static int64_t x80 = -185829915864531LL;
	volatile int32_t t17 = 43;

	t17 = ((x77-x78)==(x79|x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x81 = 50;
	int32_t x82 = INT32_MAX;
	uint32_t x83 = 506072004U;
	volatile int32_t t18 = 2;

	t18 = ((x81-x82)==(x83|x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x89 = UINT8_MAX;
	volatile int64_t x90 = 6490996LL;
	int16_t x91 = INT16_MAX;
	int8_t x92 = INT8_MAX;
	volatile int32_t t19 = 13922751;

	t19 = ((x89-x90)==(x91|x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x97 = 15;
	int64_t x98 = -1LL;
	uint16_t x99 = UINT16_MAX;
	int64_t x100 = INT64_MAX;
	static int32_t t20 = 150057981;

	t20 = ((x97-x98)==(x99|x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x101 = 6U;
	uint8_t x102 = 22U;
	static int64_t x103 = INT64_MIN;
	uint64_t x104 = UINT64_MAX;
	volatile int32_t t21 = -463844;

	t21 = ((x101-x102)==(x103|x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x106 = -1;
	static volatile int64_t x107 = 157482210391740LL;
	int32_t x108 = INT32_MIN;

	t22 = ((x105-x106)==(x107|x108));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x109 = 15909110;
	int32_t x110 = INT32_MAX;
	static int32_t x111 = -1;
	int8_t x112 = INT8_MIN;

	t23 = ((x109-x110)==(x111|x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x113 = UINT8_MAX;
	int8_t x114 = INT8_MIN;
	volatile int16_t x115 = -417;
	int64_t x116 = -1LL;
	int32_t t24 = -6814700;

	t24 = ((x113-x114)==(x115|x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x118 = UINT64_MAX;
	static uint8_t x119 = 14U;
	uint16_t x120 = 19035U;
	volatile int32_t t25 = -22;

	t25 = ((x117-x118)==(x119|x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x122 = INT16_MIN;
	int16_t x123 = 21;
	uint16_t x124 = 162U;

	t26 = ((x121-x122)==(x123|x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x125 = 83U;
	int64_t x126 = -65223LL;
	static int64_t x127 = -1LL;
	static int32_t t27 = -13291;

	t27 = ((x125-x126)==(x127|x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x129 = INT32_MIN;
	int64_t x130 = INT64_MIN;
	volatile int64_t x131 = 354628LL;
	int8_t x132 = INT8_MIN;
	int32_t t28 = 49;

	t28 = ((x129-x130)==(x131|x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x133 = UINT16_MAX;
	static uint8_t x134 = UINT8_MAX;
	volatile int64_t x135 = INT64_MIN;
	static uint32_t x136 = UINT32_MAX;
	volatile int32_t t29 = -34694513;

	t29 = ((x133-x134)==(x135|x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x137 = UINT16_MAX;
	volatile int64_t x138 = -1LL;
	volatile int16_t x140 = INT16_MIN;
	int32_t t30 = -1445;

	t30 = ((x137-x138)==(x139|x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = -2;
	int16_t x147 = INT16_MAX;

	t31 = ((x145-x146)==(x147|x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x149 = 204LLU;
	static int16_t x150 = INT16_MIN;
	volatile uint16_t x151 = UINT16_MAX;
	int8_t x152 = INT8_MIN;

	t32 = ((x149-x150)==(x151|x152));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x154 = -1;
	uint8_t x155 = 6U;
	volatile uint32_t x156 = UINT32_MAX;

	t33 = ((x153-x154)==(x155|x156));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x157 = 10U;
	static int16_t x158 = 0;
	int16_t x160 = INT16_MIN;
	int32_t t34 = -260552950;

	t34 = ((x157-x158)==(x159|x160));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x161 = 0U;
	uint8_t x162 = 8U;
	int8_t x163 = -1;
	uint8_t x164 = 9U;

	t35 = ((x161-x162)==(x163|x164));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x165 = INT16_MAX;
	volatile int64_t x166 = -1LL;
	volatile int16_t x167 = -1;
	int64_t x168 = -1LL;
	volatile int32_t t36 = -11830586;

	t36 = ((x165-x166)==(x167|x168));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x173 = INT64_MIN;
	int32_t x174 = -656456964;
	uint32_t x175 = 1488658U;
	volatile int32_t x176 = 7078771;
	volatile int32_t t37 = -101831;

	t37 = ((x173-x174)==(x175|x176));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t t38 = -3226208;

	t38 = ((x177-x178)==(x179|x180));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x182 = -52;
	int8_t x183 = -1;
	static volatile int16_t x184 = -1;
	int32_t t39 = 3369584;

	t39 = ((x181-x182)==(x183|x184));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x185 = -1;
	int32_t x186 = INT32_MIN;
	uint8_t x187 = 14U;
	uint16_t x188 = 4U;
	int32_t t40 = 257623231;

	t40 = ((x185-x186)==(x187|x188));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x189 = 33;
	int8_t x190 = INT8_MAX;
	int8_t x191 = -4;
	volatile int32_t x192 = -450;
	static int32_t t41 = -463;

	t41 = ((x189-x190)==(x191|x192));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x193 = INT16_MIN;
	uint8_t x194 = UINT8_MAX;
	uint16_t x195 = 65U;
	int16_t x196 = INT16_MAX;
	volatile int32_t t42 = 8604;

	t42 = ((x193-x194)==(x195|x196));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x201 = UINT64_MAX;
	int16_t x202 = -1;
	volatile uint32_t x203 = 771716U;
	int32_t t43 = 96;

	t43 = ((x201-x202)==(x203|x204));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x205 = -1;
	int64_t x206 = INT64_MAX;
	volatile int32_t x208 = INT32_MIN;
	volatile int32_t t44 = 226;

	t44 = ((x205-x206)==(x207|x208));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x210 = 0U;
	static volatile int64_t x211 = -1LL;
	uint16_t x212 = 20U;
	volatile int32_t t45 = -186;

	t45 = ((x209-x210)==(x211|x212));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x213 = INT32_MIN;
	volatile uint64_t x214 = 81LLU;
	volatile int32_t x215 = -1;
	int8_t x216 = -1;

	t46 = ((x213-x214)==(x215|x216));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x217 = INT8_MAX;
	int32_t x218 = -1;
	int16_t x220 = 117;

	t47 = ((x217-x218)==(x219|x220));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x221 = UINT16_MAX;
	volatile uint16_t x222 = 1450U;
	uint32_t x223 = 2U;
	int32_t t48 = 1152782;

	t48 = ((x221-x222)==(x223|x224));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x225 = 32U;
	int64_t x226 = -1LL;
	int32_t x227 = -147340;
	volatile int32_t t49 = 43312;

	t49 = ((x225-x226)==(x227|x228));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x229 = INT64_MAX;
	uint64_t x230 = UINT64_MAX;
	static int32_t x231 = -1;
	int8_t x232 = -1;
	int32_t t50 = 30184276;

	t50 = ((x229-x230)==(x231|x232));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x233 = 92U;
	volatile int8_t x234 = INT8_MIN;
	int8_t x236 = INT8_MAX;

	t51 = ((x233-x234)==(x235|x236));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x237 = 58U;
	int64_t x238 = INT64_MAX;
	int64_t x240 = INT64_MIN;
	volatile int32_t t52 = -285;

	t52 = ((x237-x238)==(x239|x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = 4;
	int16_t x242 = -1;
	int64_t x243 = INT64_MAX;
	volatile int32_t t53 = -2055562;

	t53 = ((x241-x242)==(x243|x244));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x245 = UINT32_MAX;
	int16_t x247 = -1;
	int8_t x248 = INT8_MAX;
	static volatile int32_t t54 = 4008;

	t54 = ((x245-x246)==(x247|x248));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint32_t x249 = 45396301U;
	int32_t x250 = INT32_MIN;
	uint8_t x252 = 1U;
	volatile int32_t t55 = 9644;

	t55 = ((x249-x250)==(x251|x252));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x253 = 296U;
	static int64_t x254 = INT64_MAX;
	uint16_t x255 = 25U;
	int16_t x256 = INT16_MIN;
	int32_t t56 = -128047;

	t56 = ((x253-x254)==(x255|x256));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = -1;
	uint64_t x258 = 1LLU;
	static uint64_t x259 = UINT64_MAX;
	int64_t x260 = INT64_MIN;
	volatile int32_t t57 = -460240058;

	t57 = ((x257-x258)==(x259|x260));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x262 = -1;
	uint64_t x263 = UINT64_MAX;
	volatile int16_t x264 = 422;
	int32_t t58 = -16347656;

	t58 = ((x261-x262)==(x263|x264));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x265 = -1;
	int32_t x266 = -16;
	static volatile uint16_t x267 = UINT16_MAX;
	uint16_t x268 = 742U;
	static int32_t t59 = 16;

	t59 = ((x265-x266)==(x267|x268));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x274 = 1;
	uint64_t x275 = 469LLU;
	uint32_t x276 = 2014110U;
	volatile int32_t t60 = 48078;

	t60 = ((x273-x274)==(x275|x276));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x277 = 0LLU;
	int8_t x278 = INT8_MIN;
	uint16_t x279 = UINT16_MAX;
	volatile int8_t x280 = INT8_MAX;
	int32_t t61 = 35526;

	t61 = ((x277-x278)==(x279|x280));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x282 = INT16_MIN;
	uint64_t x283 = 1754LLU;
	static int32_t x284 = INT32_MIN;
	int32_t t62 = 1051564892;

	t62 = ((x281-x282)==(x283|x284));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x288 = INT32_MIN;

	t63 = ((x285-x286)==(x287|x288));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x292 = 14LLU;
	int32_t t64 = 4020710;

	t64 = ((x289-x290)==(x291|x292));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x295 = INT32_MAX;
	static int16_t x296 = -6;
	int32_t t65 = -865;

	t65 = ((x293-x294)==(x295|x296));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x297 = -1;
	int32_t x299 = -42;
	uint8_t x300 = UINT8_MAX;
	int32_t t66 = -1;

	t66 = ((x297-x298)==(x299|x300));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x301 = 347321236LLU;
	uint32_t x302 = UINT32_MAX;
	int8_t x303 = INT8_MIN;
	static int64_t x304 = -1LL;
	int32_t t67 = -747095;

	t67 = ((x301-x302)==(x303|x304));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x305 = 7U;
	uint16_t x306 = 5426U;
	int32_t x307 = INT32_MIN;
	uint32_t x308 = 254834879U;
	static int32_t t68 = 7;

	t68 = ((x305-x306)==(x307|x308));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x309 = 678;
	int16_t x310 = INT16_MAX;
	int8_t x311 = -2;
	int64_t x312 = INT64_MAX;
	int32_t t69 = 1032957327;

	t69 = ((x309-x310)==(x311|x312));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x313 = 296;
	volatile int8_t x314 = 1;
	volatile uint32_t x315 = 11272U;
	static int64_t x316 = INT64_MIN;
	int32_t t70 = 1;

	t70 = ((x313-x314)==(x315|x316));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x317 = INT32_MIN;
	int8_t x318 = INT8_MIN;
	volatile uint16_t x319 = UINT16_MAX;
	volatile uint8_t x320 = UINT8_MAX;
	int32_t t71 = 6555;

	t71 = ((x317-x318)==(x319|x320));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x322 = INT32_MIN;
	int16_t x323 = INT16_MAX;
	int16_t x324 = 30;
	static int32_t t72 = 0;

	t72 = ((x321-x322)==(x323|x324));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x325 = 1U;
	static volatile int32_t x328 = INT32_MAX;
	int32_t t73 = 91629767;

	t73 = ((x325-x326)==(x327|x328));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x333 = 970U;
	int64_t x335 = INT64_MIN;
	static volatile uint16_t x336 = 30U;
	int32_t t74 = 26;

	t74 = ((x333-x334)==(x335|x336));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x337 = 24131U;
	int8_t x338 = -1;
	int32_t x339 = 64;
	int8_t x340 = 3;

	t75 = ((x337-x338)==(x339|x340));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x345 = UINT32_MAX;
	int8_t x346 = -2;
	uint16_t x348 = UINT16_MAX;

	t76 = ((x345-x346)==(x347|x348));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x349 = UINT32_MAX;
	volatile uint8_t x350 = 9U;
	volatile int8_t x351 = INT8_MAX;
	volatile int32_t t77 = -4058;

	t77 = ((x349-x350)==(x351|x352));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x353 = -1LL;
	uint16_t x354 = 1038U;
	static uint32_t x355 = UINT32_MAX;
	volatile int64_t x356 = INT64_MAX;

	t78 = ((x353-x354)==(x355|x356));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x357 = INT16_MIN;
	int8_t x358 = INT8_MIN;
	int16_t x359 = INT16_MIN;
	volatile uint8_t x360 = UINT8_MAX;

	t79 = ((x357-x358)==(x359|x360));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x361 = 44;
	volatile int32_t x362 = -194;
	int16_t x363 = -1;
	int32_t x364 = INT32_MAX;

	t80 = ((x361-x362)==(x363|x364));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x365 = UINT8_MAX;
	static volatile uint32_t x366 = 11846566U;
	volatile uint32_t x368 = 915U;
	int32_t t81 = -909910628;

	t81 = ((x365-x366)==(x367|x368));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x369 = INT16_MIN;
	int64_t x370 = -6082085780LL;
	uint8_t x371 = UINT8_MAX;
	int8_t x372 = -1;
	int32_t t82 = -2;

	t82 = ((x369-x370)==(x371|x372));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x377 = -1;
	static int64_t x378 = INT64_MIN;
	int8_t x379 = INT8_MIN;
	int64_t x380 = INT64_MAX;
	int32_t t83 = -141;

	t83 = ((x377-x378)==(x379|x380));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x381 = 193636685672LL;
	static int16_t x382 = -1;
	int8_t x383 = 22;
	int32_t x384 = 12;

	t84 = ((x381-x382)==(x383|x384));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x385 = 2290904;
	int8_t x386 = -1;
	volatile int16_t x387 = -1;
	volatile int32_t t85 = -485;

	t85 = ((x385-x386)==(x387|x388));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x390 = 4U;
	int16_t x391 = -1;
	volatile uint16_t x392 = 15U;
	int32_t t86 = 2;

	t86 = ((x389-x390)==(x391|x392));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x393 = 113LLU;
	int8_t x394 = -1;
	volatile int64_t x395 = 6060282742577783LL;
	int16_t x396 = -1;
	static int32_t t87 = 51814;

	t87 = ((x393-x394)==(x395|x396));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x401 = 7144986171780LLU;
	uint64_t x403 = UINT64_MAX;
	int8_t x404 = INT8_MIN;
	int32_t t88 = -127;

	t88 = ((x401-x402)==(x403|x404));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x405 = 79590178485612LL;
	int16_t x406 = INT16_MAX;
	int16_t x408 = 13;
	int32_t t89 = -17;

	t89 = ((x405-x406)==(x407|x408));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x410 = -1LL;
	volatile uint16_t x412 = 3U;
	volatile int32_t t90 = -523738;

	t90 = ((x409-x410)==(x411|x412));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x413 = INT16_MIN;
	volatile int32_t x414 = INT32_MIN;
	volatile uint64_t x415 = UINT64_MAX;
	volatile uint8_t x416 = 0U;
	int32_t t91 = 0;

	t91 = ((x413-x414)==(x415|x416));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x417 = 0U;
	int16_t x418 = -1;
	volatile uint32_t x419 = 99463928U;
	static uint32_t x420 = 70788875U;
	volatile int32_t t92 = 1335038;

	t92 = ((x417-x418)==(x419|x420));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x421 = INT16_MIN;
	volatile int8_t x422 = INT8_MIN;
	uint8_t x424 = UINT8_MAX;
	int32_t t93 = -2150;

	t93 = ((x421-x422)==(x423|x424));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x425 = UINT64_MAX;
	uint32_t x426 = 167011U;
	static int64_t x427 = -1LL;
	int32_t x428 = -1;

	t94 = ((x425-x426)==(x427|x428));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x429 = UINT8_MAX;
	volatile uint32_t x430 = 2U;
	uint32_t x431 = 22U;
	static int16_t x432 = -1;
	volatile int32_t t95 = -209148468;

	t95 = ((x429-x430)==(x431|x432));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x433 = INT64_MIN;
	static volatile int32_t x435 = INT32_MAX;
	static int32_t t96 = 4534046;

	t96 = ((x433-x434)==(x435|x436));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x438 = 81U;
	static uint64_t x439 = 92665079515LLU;
	static int8_t x440 = INT8_MAX;
	volatile int32_t t97 = -26703644;

	t97 = ((x437-x438)==(x439|x440));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x441 = 2LLU;
	uint8_t x442 = 20U;
	static volatile int64_t x444 = INT64_MAX;
	static int32_t t98 = -534774198;

	t98 = ((x441-x442)==(x443|x444));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x445 = INT8_MIN;
	uint32_t x446 = 37078199U;
	uint16_t x448 = UINT16_MAX;
	static volatile int32_t t99 = -1520;

	t99 = ((x445-x446)==(x447|x448));

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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x10 = UINT32_MAX;
int64_t x25 = INT64_MIN;
int64_t x28 = INT64_MIN;
volatile int16_t x36 = 4623;
int32_t t6 = 244;
volatile int32_t t7 = 7360125;
uint8_t x50 = 26U;
volatile int16_t x51 = 12;
uint8_t x52 = 49U;
int32_t t9 = -193;
int8_t x56 = INT8_MAX;
volatile int32_t t10 = -2;
int8_t x57 = INT8_MIN;
uint32_t x59 = 24602102U;
volatile int8_t x60 = 0;
int32_t x62 = INT32_MAX;
int16_t x71 = INT16_MAX;
volatile int32_t t15 = -21090174;
volatile int64_t x84 = INT64_MAX;
static int64_t x86 = INT64_MIN;
uint32_t x87 = UINT32_MAX;
uint8_t x89 = 1U;
static int32_t x94 = -1;
uint32_t x95 = 1681390U;
static int16_t x97 = 29;
volatile int16_t x98 = 5;
static volatile int8_t x101 = -1;
int32_t t23 = 4468;
static int32_t x114 = INT32_MIN;
int16_t x121 = INT16_MIN;
static uint16_t x122 = 3U;
int32_t t27 = -28045;
int32_t x129 = -56473458;
volatile uint16_t x135 = 4183U;
static int32_t t31 = 97656497;
uint32_t x142 = 36441U;
int8_t x143 = INT8_MIN;
volatile uint16_t x150 = 3404U;
static uint64_t x152 = 51071719324032650LLU;
int64_t x153 = INT64_MIN;
volatile uint8_t x155 = 1U;
int32_t x157 = INT32_MIN;
static int32_t x158 = INT32_MIN;
uint64_t x160 = 445LLU;
static int32_t t36 = 402747562;
volatile uint8_t x177 = UINT8_MAX;
static int32_t x184 = INT32_MIN;
int16_t x200 = -1;
int32_t t45 = 87;
uint16_t x209 = 48U;
static volatile int32_t t48 = 10;
int8_t x215 = 1;
static volatile int32_t t49 = 8273623;
static int16_t x220 = INT16_MAX;
uint8_t x221 = UINT8_MAX;
int32_t x231 = INT32_MAX;
volatile int32_t t53 = 2;
static volatile uint16_t x233 = 11802U;
int16_t x234 = INT16_MIN;
volatile int32_t x235 = -1;
volatile int32_t x245 = -15;
static int32_t x247 = INT32_MIN;
volatile int32_t t56 = -25415;
volatile int32_t t57 = -28435;
int32_t t61 = -3;
int32_t x273 = INT32_MIN;
static int32_t t62 = -7942727;
static volatile int32_t x279 = -1;
int32_t t63 = -1;
static volatile uint64_t x282 = UINT64_MAX;
volatile int32_t t65 = 473395485;
uint8_t x300 = 6U;
int64_t x303 = -3366322937LL;
int32_t t67 = -3427;
volatile int64_t x308 = INT64_MIN;
static int32_t x309 = INT32_MIN;
volatile int32_t x311 = -106476;
static volatile int16_t x313 = INT16_MAX;
static int16_t x318 = INT16_MAX;
volatile uint16_t x320 = UINT16_MAX;
volatile int32_t t71 = -7124;
static int16_t x336 = INT16_MAX;
volatile int8_t x338 = INT8_MIN;
int64_t x339 = INT64_MAX;
static int8_t x343 = INT8_MAX;
volatile int16_t x345 = 4931;
static volatile int32_t t79 = -126;
static uint32_t x353 = 704252942U;
int32_t x356 = INT32_MIN;
int32_t t80 = -10902;
static volatile int16_t x357 = -1;
int16_t x369 = INT16_MIN;
volatile int32_t t84 = -10;
static int16_t x373 = INT16_MIN;
static int16_t x379 = -1;
uint8_t x380 = 53U;
static volatile int32_t t86 = -62242194;
uint32_t x384 = 231U;
int32_t t87 = 151919;
uint16_t x388 = 3U;
volatile int32_t t88 = 8111;
static volatile int64_t x393 = -6758905LL;
int64_t x408 = INT64_MIN;
uint64_t x409 = UINT64_MAX;
uint8_t x412 = UINT8_MAX;
volatile uint8_t x415 = UINT8_MAX;
volatile int32_t t95 = -84;
volatile int8_t x417 = INT8_MIN;
volatile uint16_t x418 = 0U;
int32_t t96 = 6814;
volatile int32_t t97 = -800509477;
int32_t x428 = -7367;
static uint8_t x429 = UINT8_MAX;
int32_t x432 = INT32_MIN;
volatile int32_t t99 = -57070;


void f0(void) {
	int64_t x1 = -1LL;
	static uint16_t x2 = 270U;
	int32_t x3 = -1;
	int16_t x4 = INT16_MAX;
	static int32_t t0 = 453956393;

	t0 = (((x1-x2)|x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	static int64_t x6 = INT64_MIN;
	static int32_t x7 = -183;
	volatile int32_t x8 = 3906559;
	volatile int32_t t1 = 22;

	t1 = (((x5-x6)|x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -10573;
	int64_t x11 = -5LL;
	int32_t x12 = INT32_MAX;
	volatile int32_t t2 = -2778;

	t2 = (((x9-x10)|x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	int32_t x14 = -1;
	int8_t x15 = INT8_MAX;
	volatile int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 1864800;

	t3 = (((x13-x14)|x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x21 = -1;
	int32_t x22 = -62980;
	volatile int64_t x23 = INT64_MIN;
	int16_t x24 = INT16_MIN;
	volatile int32_t t4 = 732661;

	t4 = (((x21-x22)|x23)<x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x26 = 84348LLU;
	int16_t x27 = INT16_MAX;
	int32_t t5 = 83643226;

	t5 = (((x25-x26)|x27)<x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = 2558658LLU;
	int32_t x34 = 14754;
	int8_t x35 = -17;

	t6 = (((x33-x34)|x35)<x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = -13187549LL;
	uint32_t x38 = 21U;
	int32_t x39 = INT32_MAX;
	uint16_t x40 = UINT16_MAX;

	t7 = (((x37-x38)|x39)<x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x41 = INT32_MIN;
	int8_t x42 = -1;
	uint64_t x43 = UINT64_MAX;
	int16_t x44 = -1;
	int32_t t8 = -714;

	t8 = (((x41-x42)|x43)<x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x49 = 1827212543LL;

	t9 = (((x49-x50)|x51)<x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x53 = INT16_MIN;
	int32_t x54 = -1;
	static uint16_t x55 = UINT16_MAX;

	t10 = (((x53-x54)|x55)<x56);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x58 = 100U;
	static int32_t t11 = 11935;

	t11 = (((x57-x58)|x59)<x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x61 = UINT32_MAX;
	volatile int16_t x63 = 327;
	uint32_t x64 = 3U;
	int32_t t12 = 1;

	t12 = (((x61-x62)|x63)<x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x65 = 1617U;
	static uint16_t x66 = 117U;
	int16_t x67 = INT16_MIN;
	volatile int64_t x68 = -1LL;
	static volatile int32_t t13 = -31084340;

	t13 = (((x65-x66)|x67)<x68);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x69 = INT64_MIN;
	int64_t x70 = INT64_MIN;
	static uint32_t x72 = 1722U;
	int32_t t14 = -5;

	t14 = (((x69-x70)|x71)<x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x73 = 80U;
	static int64_t x74 = INT64_MAX;
	static uint8_t x75 = 63U;
	uint16_t x76 = UINT16_MAX;

	t15 = (((x73-x74)|x75)<x76);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x77 = INT16_MAX;
	int16_t x78 = 1;
	int32_t x79 = -2496;
	int16_t x80 = -1;
	static int32_t t16 = -48940;

	t16 = (((x77-x78)|x79)<x80);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x81 = -1;
	volatile int64_t x82 = -1LL;
	int32_t x83 = INT32_MIN;
	volatile int32_t t17 = -94671;

	t17 = (((x81-x82)|x83)<x84);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = -1;
	uint16_t x88 = 1U;
	static int32_t t18 = 105;

	t18 = (((x85-x86)|x87)<x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x90 = -1;
	int32_t x91 = -28094;
	volatile uint16_t x92 = 14872U;
	volatile int32_t t19 = -110;

	t19 = (((x89-x90)|x91)<x92);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x93 = -291306LL;
	int32_t x96 = INT32_MIN;
	volatile int32_t t20 = 707582454;

	t20 = (((x93-x94)|x95)<x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x99 = -4LL;
	volatile uint8_t x100 = UINT8_MAX;
	int32_t t21 = -581;

	t21 = (((x97-x98)|x99)<x100);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x102 = UINT16_MAX;
	int64_t x103 = 27204268LL;
	uint16_t x104 = UINT16_MAX;
	int32_t t22 = -25;

	t22 = (((x101-x102)|x103)<x104);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = INT8_MIN;
	uint16_t x106 = 9U;
	volatile int16_t x107 = 5311;
	uint32_t x108 = UINT32_MAX;

	t23 = (((x105-x106)|x107)<x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = INT8_MAX;
	uint8_t x110 = 0U;
	int8_t x111 = -50;
	volatile uint64_t x112 = 1LLU;
	int32_t t24 = 216087968;

	t24 = (((x109-x110)|x111)<x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x113 = -221;
	int8_t x115 = INT8_MAX;
	int16_t x116 = 6;
	int32_t t25 = 1;

	t25 = (((x113-x114)|x115)<x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x117 = UINT32_MAX;
	uint16_t x118 = 589U;
	uint8_t x119 = 4U;
	int8_t x120 = INT8_MIN;
	static volatile int32_t t26 = -1227;

	t26 = (((x117-x118)|x119)<x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x123 = -1;
	int8_t x124 = -1;

	t27 = (((x121-x122)|x123)<x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x125 = INT32_MIN;
	static int8_t x126 = -1;
	uint8_t x127 = 14U;
	int64_t x128 = INT64_MIN;
	int32_t t28 = -4;

	t28 = (((x125-x126)|x127)<x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x130 = 9;
	static int32_t x131 = INT32_MIN;
	static uint16_t x132 = 102U;
	int32_t t29 = 19;

	t29 = (((x129-x130)|x131)<x132);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x133 = UINT16_MAX;
	static int64_t x134 = INT64_MAX;
	static volatile uint32_t x136 = 274130076U;
	int32_t t30 = -4943;

	t30 = (((x133-x134)|x135)<x136);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x137 = -102;
	int64_t x138 = -1LL;
	volatile int8_t x139 = 5;
	int16_t x140 = 83;

	t31 = (((x137-x138)|x139)<x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x141 = 2720360723004577LLU;
	int8_t x144 = 16;
	volatile int32_t t32 = -161;

	t32 = (((x141-x142)|x143)<x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x145 = UINT64_MAX;
	uint16_t x146 = 13U;
	int16_t x147 = -2784;
	static uint16_t x148 = 7257U;
	volatile int32_t t33 = 7934;

	t33 = (((x145-x146)|x147)<x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x149 = INT8_MIN;
	uint16_t x151 = UINT16_MAX;
	static volatile int32_t t34 = 200184039;

	t34 = (((x149-x150)|x151)<x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x154 = INT8_MIN;
	volatile int16_t x156 = -27;
	volatile int32_t t35 = 846056289;

	t35 = (((x153-x154)|x155)<x156);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x159 = UINT64_MAX;

	t36 = (((x157-x158)|x159)<x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x165 = INT16_MIN;
	uint32_t x166 = 250U;
	static int16_t x167 = 99;
	volatile int32_t x168 = -14492994;
	volatile int32_t t37 = -250080791;

	t37 = (((x165-x166)|x167)<x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = INT32_MIN;
	static volatile uint32_t x170 = UINT32_MAX;
	static uint64_t x171 = 10832LLU;
	uint8_t x172 = 1U;
	static volatile int32_t t38 = -761421;

	t38 = (((x169-x170)|x171)<x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = INT16_MIN;
	volatile uint32_t x174 = 6534980U;
	volatile int16_t x175 = -488;
	int32_t x176 = INT32_MIN;
	volatile int32_t t39 = -348593;

	t39 = (((x173-x174)|x175)<x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x178 = 602895893486087272LL;
	static uint64_t x179 = 335569795532LLU;
	uint16_t x180 = 166U;
	int32_t t40 = -1343632;

	t40 = (((x177-x178)|x179)<x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x181 = -2;
	int64_t x182 = 3723465089LL;
	int64_t x183 = INT64_MIN;
	static int32_t t41 = -735596220;

	t41 = (((x181-x182)|x183)<x184);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x185 = UINT16_MAX;
	uint64_t x186 = 29LLU;
	static int8_t x187 = 1;
	int8_t x188 = INT8_MAX;
	int32_t t42 = 15;

	t42 = (((x185-x186)|x187)<x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x189 = INT32_MAX;
	static int8_t x190 = INT8_MAX;
	static int16_t x191 = INT16_MIN;
	uint32_t x192 = 62448049U;
	int32_t t43 = -90;

	t43 = (((x189-x190)|x191)<x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x193 = 1;
	static int16_t x194 = 10;
	uint32_t x195 = 58U;
	int64_t x196 = -677LL;
	volatile int32_t t44 = 26;

	t44 = (((x193-x194)|x195)<x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = -697;
	uint8_t x198 = UINT8_MAX;
	int16_t x199 = INT16_MIN;

	t45 = (((x197-x198)|x199)<x200);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x201 = UINT32_MAX;
	int8_t x202 = -1;
	volatile int64_t x203 = INT64_MAX;
	uint64_t x204 = UINT64_MAX;
	volatile int32_t t46 = 1365140;

	t46 = (((x201-x202)|x203)<x204);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x205 = UINT16_MAX;
	static uint16_t x206 = UINT16_MAX;
	static volatile int32_t x207 = INT32_MIN;
	static int32_t x208 = 0;
	int32_t t47 = -1889926;

	t47 = (((x205-x206)|x207)<x208);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x210 = -540315196;
	int16_t x211 = -1;
	static uint32_t x212 = UINT32_MAX;

	t48 = (((x209-x210)|x211)<x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x213 = 3560610815783959066LLU;
	static int64_t x214 = INT64_MIN;
	int16_t x216 = 4160;

	t49 = (((x213-x214)|x215)<x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x217 = 1U;
	int8_t x218 = 0;
	static int16_t x219 = INT16_MIN;
	volatile int32_t t50 = -631220545;

	t50 = (((x217-x218)|x219)<x220);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x222 = INT16_MAX;
	uint8_t x223 = 0U;
	volatile int8_t x224 = INT8_MAX;
	int32_t t51 = -393;

	t51 = (((x221-x222)|x223)<x224);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x225 = -1LL;
	volatile int64_t x226 = INT64_MAX;
	int8_t x227 = -1;
	int32_t x228 = 1;
	int32_t t52 = 9787;

	t52 = (((x225-x226)|x227)<x228);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x229 = INT64_MAX;
	static int64_t x230 = 553004567683085LL;
	static volatile int32_t x232 = INT32_MIN;

	t53 = (((x229-x230)|x231)<x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x236 = INT8_MAX;
	int32_t t54 = -227335021;

	t54 = (((x233-x234)|x235)<x236);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x241 = UINT32_MAX;
	int16_t x242 = INT16_MIN;
	volatile int64_t x243 = -13187973LL;
	static volatile int16_t x244 = -1104;
	int32_t t55 = -1022809;

	t55 = (((x241-x242)|x243)<x244);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x246 = UINT16_MAX;
	static int64_t x248 = -137576LL;

	t56 = (((x245-x246)|x247)<x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x249 = INT16_MIN;
	int32_t x250 = -2254;
	static volatile int64_t x251 = -1LL;
	int8_t x252 = INT8_MAX;

	t57 = (((x249-x250)|x251)<x252);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x253 = 2;
	static int16_t x254 = -12177;
	uint8_t x255 = UINT8_MAX;
	static volatile uint8_t x256 = 0U;
	volatile int32_t t58 = 445637447;

	t58 = (((x253-x254)|x255)<x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x257 = 5760U;
	int64_t x258 = -4876297LL;
	int16_t x259 = INT16_MIN;
	volatile uint64_t x260 = UINT64_MAX;
	volatile int32_t t59 = 3;

	t59 = (((x257-x258)|x259)<x260);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x261 = UINT64_MAX;
	volatile int16_t x262 = -1;
	int8_t x263 = -1;
	static int32_t x264 = -438;
	volatile int32_t t60 = -166192;

	t60 = (((x261-x262)|x263)<x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x269 = -1;
	int8_t x270 = INT8_MIN;
	int64_t x271 = 124746331LL;
	uint32_t x272 = 2U;

	t61 = (((x269-x270)|x271)<x272);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x274 = 31LLU;
	static int32_t x275 = INT32_MAX;
	volatile int8_t x276 = 0;

	t62 = (((x273-x274)|x275)<x276);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x277 = 112U;
	static int64_t x278 = -1LL;
	uint16_t x280 = UINT16_MAX;

	t63 = (((x277-x278)|x279)<x280);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x281 = -1;
	volatile int64_t x283 = INT64_MAX;
	volatile int64_t x284 = INT64_MAX;
	int32_t t64 = -2106315;

	t64 = (((x281-x282)|x283)<x284);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x285 = UINT16_MAX;
	static uint16_t x286 = 31U;
	static uint16_t x287 = 24016U;
	int32_t x288 = INT32_MIN;

	t65 = (((x285-x286)|x287)<x288);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x297 = UINT32_MAX;
	uint8_t x298 = UINT8_MAX;
	uint32_t x299 = 2U;
	volatile int32_t t66 = -3;

	t66 = (((x297-x298)|x299)<x300);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x301 = INT32_MIN;
	int32_t x302 = INT32_MIN;
	volatile uint32_t x304 = 59687U;

	t67 = (((x301-x302)|x303)<x304);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x305 = INT16_MAX;
	int16_t x306 = INT16_MIN;
	int8_t x307 = -1;
	int32_t t68 = -3379;

	t68 = (((x305-x306)|x307)<x308);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x310 = 0U;
	uint64_t x312 = UINT64_MAX;
	static int32_t t69 = 221259597;

	t69 = (((x309-x310)|x311)<x312);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x314 = 28801107061735LLU;
	int64_t x315 = INT64_MIN;
	static int16_t x316 = 1;
	int32_t t70 = -444;

	t70 = (((x313-x314)|x315)<x316);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x317 = -1;
	static int32_t x319 = -812149;

	t71 = (((x317-x318)|x319)<x320);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x321 = INT64_MIN;
	volatile int16_t x322 = -1;
	int32_t x323 = INT32_MAX;
	int16_t x324 = INT16_MAX;
	static int32_t t72 = 4;

	t72 = (((x321-x322)|x323)<x324);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x325 = 323U;
	int16_t x326 = INT16_MIN;
	int16_t x327 = -4699;
	int16_t x328 = -1;
	volatile int32_t t73 = -9;

	t73 = (((x325-x326)|x327)<x328);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = INT16_MIN;
	uint16_t x330 = 1U;
	static uint64_t x331 = 84099951627123245LLU;
	int64_t x332 = INT64_MAX;
	volatile int32_t t74 = -388;

	t74 = (((x329-x330)|x331)<x332);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x333 = INT64_MIN;
	int16_t x334 = INT16_MIN;
	int64_t x335 = 4280569588531914048LL;
	int32_t t75 = 2621;

	t75 = (((x333-x334)|x335)<x336);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x337 = UINT8_MAX;
	int16_t x340 = INT16_MIN;
	int32_t t76 = 1;

	t76 = (((x337-x338)|x339)<x340);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x341 = 3816;
	int16_t x342 = 0;
	static volatile int64_t x344 = INT64_MIN;
	int32_t t77 = 118238879;

	t77 = (((x341-x342)|x343)<x344);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x346 = -5;
	static volatile int16_t x347 = INT16_MIN;
	int64_t x348 = -26897743LL;
	volatile int32_t t78 = 12;

	t78 = (((x345-x346)|x347)<x348);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x349 = 26;
	uint16_t x350 = 5U;
	uint8_t x351 = 100U;
	int8_t x352 = 12;

	t79 = (((x349-x350)|x351)<x352);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x354 = 2U;
	static int16_t x355 = -3;

	t80 = (((x353-x354)|x355)<x356);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x358 = INT8_MIN;
	uint16_t x359 = 10U;
	volatile uint64_t x360 = 316354654706LLU;
	static int32_t t81 = -11;

	t81 = (((x357-x358)|x359)<x360);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x361 = INT8_MAX;
	int16_t x362 = INT16_MIN;
	int16_t x363 = 23;
	int32_t x364 = -1;
	volatile int32_t t82 = 772243707;

	t82 = (((x361-x362)|x363)<x364);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x365 = INT16_MIN;
	int32_t x366 = INT32_MIN;
	static volatile int64_t x367 = -1LL;
	uint8_t x368 = UINT8_MAX;
	int32_t t83 = -3823468;

	t83 = (((x365-x366)|x367)<x368);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x370 = INT16_MAX;
	int32_t x371 = -1;
	uint16_t x372 = 24962U;

	t84 = (((x369-x370)|x371)<x372);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x374 = -57;
	uint64_t x375 = 15907953LLU;
	int32_t x376 = -1440108;
	volatile int32_t t85 = 102968;

	t85 = (((x373-x374)|x375)<x376);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x377 = INT8_MIN;
	int16_t x378 = INT16_MIN;

	t86 = (((x377-x378)|x379)<x380);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x381 = 11LLU;
	uint32_t x382 = 161625U;
	int64_t x383 = INT64_MIN;

	t87 = (((x381-x382)|x383)<x384);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x385 = 5782880U;
	static uint8_t x386 = 2U;
	static volatile int16_t x387 = INT16_MIN;

	t88 = (((x385-x386)|x387)<x388);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x389 = INT16_MIN;
	int16_t x390 = 45;
	int32_t x391 = INT32_MAX;
	int64_t x392 = INT64_MIN;
	static volatile int32_t t89 = -28;

	t89 = (((x389-x390)|x391)<x392);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x394 = INT64_MIN;
	volatile int8_t x395 = INT8_MIN;
	int16_t x396 = -6;
	volatile int32_t t90 = 3759;

	t90 = (((x393-x394)|x395)<x396);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x397 = INT16_MIN;
	volatile uint16_t x398 = UINT16_MAX;
	static int8_t x399 = INT8_MIN;
	int8_t x400 = 3;
	volatile int32_t t91 = 1;

	t91 = (((x397-x398)|x399)<x400);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint32_t x401 = 13U;
	uint16_t x402 = 1U;
	int8_t x403 = -1;
	int64_t x404 = INT64_MIN;
	volatile int32_t t92 = -78223;

	t92 = (((x401-x402)|x403)<x404);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x405 = -3620;
	uint64_t x406 = 7033667908LLU;
	uint32_t x407 = 101910593U;
	int32_t t93 = 10873;

	t93 = (((x405-x406)|x407)<x408);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x410 = 18U;
	int64_t x411 = INT64_MIN;
	volatile int32_t t94 = 3822056;

	t94 = (((x409-x410)|x411)<x412);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x413 = INT16_MIN;
	uint64_t x414 = UINT64_MAX;
	int64_t x416 = 811LL;

	t95 = (((x413-x414)|x415)<x416);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x419 = 3;
	uint64_t x420 = 782916407LLU;

	t96 = (((x417-x418)|x419)<x420);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x421 = INT8_MIN;
	volatile uint8_t x422 = 13U;
	int64_t x423 = INT64_MIN;
	static volatile int32_t x424 = INT32_MIN;

	t97 = (((x421-x422)|x423)<x424);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x425 = 2;
	int16_t x426 = -1;
	volatile int64_t x427 = INT64_MIN;
	int32_t t98 = -2930;

	t98 = (((x425-x426)|x427)<x428);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x430 = 255U;
	int16_t x431 = INT16_MAX;

	t99 = (((x429-x430)|x431)<x432);

	if (t99 != 1) { NG(); } else { ; }
	
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


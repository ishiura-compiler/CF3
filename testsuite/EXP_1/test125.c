#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t2 = -1818857;
int32_t t4 = 31;
int8_t x21 = INT8_MIN;
int32_t x28 = INT32_MIN;
static volatile int64_t x31 = -1LL;
int16_t x32 = -1;
volatile uint8_t x36 = UINT8_MAX;
uint32_t x39 = UINT32_MAX;
int32_t t9 = 869301;
uint64_t x41 = 1LLU;
int8_t x49 = INT8_MIN;
int16_t x50 = -3281;
int16_t x52 = INT16_MIN;
int32_t t12 = -3;
int64_t x53 = INT64_MIN;
int8_t x60 = INT8_MAX;
static int16_t x63 = 10;
int8_t x76 = INT8_MIN;
int16_t x78 = 2355;
int64_t x80 = -6599286774709728LL;
int8_t x86 = -1;
int32_t x87 = -1;
volatile int32_t t21 = -177227189;
int16_t x95 = 0;
int8_t x111 = INT8_MAX;
static int32_t x112 = -458605519;
int32_t t27 = 1;
uint16_t x123 = 221U;
static int32_t t29 = 285019;
int8_t x132 = INT8_MAX;
int64_t x139 = -11544924LL;
int8_t x147 = INT8_MIN;
volatile int16_t x149 = -6;
int32_t t35 = -178758957;
uint16_t x155 = 11U;
int32_t x159 = 784747522;
int16_t x160 = -1;
uint8_t x161 = 115U;
int16_t x168 = 29;
static volatile int32_t t40 = 2987;
volatile uint8_t x180 = UINT8_MAX;
int8_t x189 = INT8_MAX;
volatile int64_t x190 = INT64_MIN;
static volatile int32_t t45 = 4;
static int16_t x198 = INT16_MIN;
int8_t x200 = 1;
int32_t x212 = -1;
uint16_t x217 = 9U;
volatile int32_t x242 = -1;
static volatile uint16_t x249 = 10436U;
int8_t x250 = INT8_MAX;
static int32_t x251 = INT32_MIN;
uint32_t x252 = 54U;
int32_t t55 = -997783372;
uint8_t x267 = UINT8_MAX;
static uint64_t x270 = 1LLU;
uint16_t x272 = 30011U;
static int32_t t61 = 244;
int64_t x285 = INT64_MAX;
static int32_t t63 = -254;
static int32_t x290 = 218080619;
int64_t x291 = -1LL;
int8_t x298 = INT8_MIN;
int64_t x299 = INT64_MAX;
int32_t x304 = INT32_MIN;
volatile uint32_t x306 = UINT32_MAX;
int16_t x315 = INT16_MIN;
volatile int32_t t69 = 34;
int8_t x324 = -12;
int32_t t71 = -1;
volatile int8_t x332 = -35;
static volatile int32_t t74 = 0;
int16_t x342 = -167;
int8_t x349 = -1;
uint16_t x353 = 4240U;
int32_t x354 = -827497;
int16_t x355 = INT16_MIN;
volatile uint8_t x360 = 26U;
volatile int64_t x365 = -1LL;
uint64_t x368 = 118057LLU;
int16_t x369 = -10;
static int16_t x370 = INT16_MIN;
static int32_t t82 = 12079077;
volatile int8_t x376 = -1;
static int8_t x377 = INT8_MAX;
volatile int32_t t84 = 1;
static volatile int32_t t86 = 2023643;
int16_t x389 = -73;
int32_t t89 = -1397;
static int64_t x408 = -76956061159306LL;
static int16_t x409 = INT16_MAX;
uint32_t x412 = UINT32_MAX;
int8_t x418 = -1;
static int8_t x419 = -1;
int32_t t94 = -24;
volatile int8_t x421 = INT8_MIN;
uint64_t x427 = UINT64_MAX;
static volatile int32_t t97 = 0;
int64_t x433 = -1LL;
int32_t x436 = INT32_MIN;
uint64_t x438 = 28217LLU;


void f0(void) {
	uint32_t x1 = 1244078524U;
	uint16_t x2 = UINT16_MAX;
	uint64_t x3 = 11658617LLU;
	static uint32_t x4 = UINT32_MAX;
	static volatile int32_t t0 = 0;

	t0 = (((x1+x2)<=x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 1;
	volatile int32_t x6 = -4;
	int32_t x7 = INT32_MAX;
	uint32_t x8 = UINT32_MAX;
	volatile int32_t t1 = -761708;

	t1 = (((x5+x6)<=x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 30521;
	int8_t x10 = -46;
	static int8_t x11 = INT8_MIN;
	uint16_t x12 = 26U;

	t2 = (((x9+x10)<=x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	volatile int32_t x14 = 56325;
	static int64_t x15 = 182022996692228LL;
	static uint64_t x16 = 1900LLU;
	int32_t t3 = -113563;

	t3 = (((x13+x14)<=x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = 61U;
	int64_t x18 = INT64_MIN;
	int64_t x19 = 43661LL;
	int64_t x20 = -3990714243LL;

	t4 = (((x17+x18)<=x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x22 = INT16_MIN;
	static int64_t x23 = 100257574209413LL;
	static volatile int16_t x24 = INT16_MIN;
	int32_t t5 = 173542163;

	t5 = (((x21+x22)<=x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int8_t x26 = 5;
	int32_t x27 = -1;
	static int32_t t6 = 346960;

	t6 = (((x25+x26)<=x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MIN;
	static int64_t x30 = INT64_MAX;
	volatile int32_t t7 = -3065;

	t7 = (((x29+x30)<=x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	int32_t x34 = 299247;
	uint16_t x35 = 5U;
	static int32_t t8 = -43;

	t8 = (((x33+x34)<=x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 0U;
	int32_t x38 = -52;
	uint8_t x40 = 3U;

	t9 = (((x37+x38)<=x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = INT16_MIN;
	int32_t x43 = INT32_MIN;
	volatile int32_t x44 = INT32_MIN;
	volatile int32_t t10 = -7833;

	t10 = (((x41+x42)<=x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	int64_t x46 = -80001576894521596LL;
	int8_t x47 = INT8_MAX;
	volatile uint64_t x48 = 1885774931272431420LLU;
	int32_t t11 = 70;

	t11 = (((x45+x46)<=x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x51 = -1;

	t12 = (((x49+x50)<=x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x54 = INT8_MAX;
	int64_t x55 = INT64_MIN;
	int8_t x56 = INT8_MAX;
	int32_t t13 = 40271881;

	t13 = (((x53+x54)<=x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	int16_t x58 = INT16_MAX;
	int8_t x59 = 1;
	volatile int32_t t14 = -459179094;

	t14 = (((x57+x58)<=x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = INT32_MIN;
	uint16_t x62 = 1685U;
	uint16_t x64 = UINT16_MAX;
	static volatile int32_t t15 = 461;

	t15 = (((x61+x62)<=x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x65 = UINT8_MAX;
	static int8_t x66 = INT8_MAX;
	uint8_t x67 = 61U;
	volatile uint16_t x68 = UINT16_MAX;
	int32_t t16 = -352260;

	t16 = (((x65+x66)<=x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x69 = UINT8_MAX;
	int64_t x70 = -13162522599449458LL;
	int64_t x71 = INT64_MIN;
	static uint16_t x72 = 0U;
	volatile int32_t t17 = -41107;

	t17 = (((x69+x70)<=x71)==x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x73 = UINT16_MAX;
	int64_t x74 = -1LL;
	uint16_t x75 = 1339U;
	int32_t t18 = -4038;

	t18 = (((x73+x74)<=x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 29U;
	static volatile int32_t x79 = -1651723;
	volatile int32_t t19 = 0;

	t19 = (((x77+x78)<=x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	int32_t x82 = 53147;
	int8_t x83 = INT8_MIN;
	int16_t x84 = -1;
	volatile int32_t t20 = 4908720;

	t20 = (((x81+x82)<=x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 0U;
	static uint16_t x88 = 1U;

	t21 = (((x85+x86)<=x87)==x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 1;
	int32_t x90 = -1;
	uint16_t x91 = UINT16_MAX;
	int32_t x92 = INT32_MIN;
	int32_t t22 = 319;

	t22 = (((x89+x90)<=x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = 53557;
	static int16_t x94 = -1;
	static int8_t x96 = 10;
	int32_t t23 = -819301207;

	t23 = (((x93+x94)<=x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 15U;
	int64_t x98 = 46440LL;
	static volatile int8_t x99 = INT8_MIN;
	int8_t x100 = -1;
	volatile int32_t t24 = -2;

	t24 = (((x97+x98)<=x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = INT16_MIN;
	int64_t x102 = INT64_MAX;
	uint32_t x103 = 39046U;
	int64_t x104 = -1LL;
	volatile int32_t t25 = -715;

	t25 = (((x101+x102)<=x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x105 = 11LLU;
	uint64_t x106 = 75644040153467403LLU;
	int8_t x107 = 3;
	int64_t x108 = INT64_MIN;
	int32_t t26 = 182388;

	t26 = (((x105+x106)<=x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x109 = 12937724663779919LLU;
	int8_t x110 = INT8_MAX;

	t27 = (((x109+x110)<=x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x117 = 417U;
	volatile uint8_t x118 = 22U;
	int32_t x119 = INT32_MIN;
	int16_t x120 = 52;
	int32_t t28 = 771576631;

	t28 = (((x117+x118)<=x119)==x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x121 = UINT16_MAX;
	uint64_t x122 = UINT64_MAX;
	uint32_t x124 = UINT32_MAX;

	t29 = (((x121+x122)<=x123)==x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = UINT8_MAX;
	uint16_t x126 = UINT16_MAX;
	static uint8_t x127 = 106U;
	static int16_t x128 = INT16_MAX;
	volatile int32_t t30 = 1;

	t30 = (((x125+x126)<=x127)==x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = -1;
	uint64_t x130 = 2612320734035018594LLU;
	int16_t x131 = -2;
	volatile int32_t t31 = -639545;

	t31 = (((x129+x130)<=x131)==x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = 186722880LL;
	int8_t x134 = -2;
	uint64_t x135 = UINT64_MAX;
	int16_t x136 = -1;
	int32_t t32 = 300;

	t32 = (((x133+x134)<=x135)==x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x137 = -366460627063LL;
	int32_t x138 = -1;
	volatile uint8_t x140 = 5U;
	int32_t t33 = 18763;

	t33 = (((x137+x138)<=x139)==x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = INT16_MIN;
	int16_t x146 = INT16_MIN;
	uint8_t x148 = UINT8_MAX;
	int32_t t34 = -23087907;

	t34 = (((x145+x146)<=x147)==x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x150 = 1497;
	uint16_t x151 = 6541U;
	static int8_t x152 = 0;

	t35 = (((x149+x150)<=x151)==x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x153 = UINT32_MAX;
	int8_t x154 = -1;
	static int32_t x156 = INT32_MAX;
	volatile int32_t t36 = -3;

	t36 = (((x153+x154)<=x155)==x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x157 = UINT16_MAX;
	volatile uint16_t x158 = UINT16_MAX;
	int32_t t37 = 8;

	t37 = (((x157+x158)<=x159)==x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x162 = -1;
	uint8_t x163 = 7U;
	volatile uint8_t x164 = 55U;
	static volatile int32_t t38 = 56560453;

	t38 = (((x161+x162)<=x163)==x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x165 = INT32_MIN;
	int16_t x166 = INT16_MAX;
	static uint8_t x167 = 41U;
	static int32_t t39 = 487;

	t39 = (((x165+x166)<=x167)==x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = 1;
	static int32_t x170 = -96;
	int16_t x171 = 5;
	int64_t x172 = INT64_MIN;

	t40 = (((x169+x170)<=x171)==x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x173 = UINT16_MAX;
	uint8_t x174 = 10U;
	int32_t x175 = -1;
	static volatile int64_t x176 = INT64_MIN;
	int32_t t41 = 15203;

	t41 = (((x173+x174)<=x175)==x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = UINT32_MAX;
	uint16_t x178 = UINT16_MAX;
	int8_t x179 = INT8_MIN;
	int32_t t42 = 0;

	t42 = (((x177+x178)<=x179)==x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x185 = INT32_MIN;
	volatile int16_t x186 = 26;
	static uint16_t x187 = UINT16_MAX;
	int8_t x188 = 3;
	static int32_t t43 = -65300;

	t43 = (((x185+x186)<=x187)==x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x191 = INT8_MIN;
	uint8_t x192 = 81U;
	volatile int32_t t44 = 78124005;

	t44 = (((x189+x190)<=x191)==x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = INT32_MAX;
	int64_t x194 = -27LL;
	int8_t x195 = -15;
	static int16_t x196 = -1;

	t45 = (((x193+x194)<=x195)==x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = INT8_MIN;
	static volatile int8_t x199 = 1;
	volatile int32_t t46 = -62590;

	t46 = (((x197+x198)<=x199)==x200);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x209 = 11220116195994074LLU;
	int8_t x210 = INT8_MIN;
	static uint64_t x211 = 7900LLU;
	volatile int32_t t47 = -3479;

	t47 = (((x209+x210)<=x211)==x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x213 = -1089LL;
	int32_t x214 = INT32_MIN;
	static volatile uint8_t x215 = UINT8_MAX;
	uint64_t x216 = 4LLU;
	volatile int32_t t48 = 806;

	t48 = (((x213+x214)<=x215)==x216);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x218 = 1U;
	int32_t x219 = -1;
	uint32_t x220 = UINT32_MAX;
	volatile int32_t t49 = -264096233;

	t49 = (((x217+x218)<=x219)==x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x225 = UINT32_MAX;
	int8_t x226 = INT8_MIN;
	uint8_t x227 = UINT8_MAX;
	static int8_t x228 = -1;
	volatile int32_t t50 = -135860202;

	t50 = (((x225+x226)<=x227)==x228);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x233 = 204LLU;
	static uint16_t x234 = 11U;
	volatile int64_t x235 = -1LL;
	int8_t x236 = -1;
	volatile int32_t t51 = 3185458;

	t51 = (((x233+x234)<=x235)==x236);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x237 = 55055409;
	volatile uint16_t x238 = UINT16_MAX;
	static volatile uint16_t x239 = 3U;
	int16_t x240 = -1;
	static int32_t t52 = 1;

	t52 = (((x237+x238)<=x239)==x240);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x241 = 387;
	int64_t x243 = INT64_MIN;
	static uint64_t x244 = UINT64_MAX;
	static int32_t t53 = -60;

	t53 = (((x241+x242)<=x243)==x244);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x245 = 45U;
	int32_t x246 = INT32_MIN;
	int32_t x247 = INT32_MIN;
	uint32_t x248 = UINT32_MAX;
	volatile int32_t t54 = -6;

	t54 = (((x245+x246)<=x247)==x248);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {


	t55 = (((x249+x250)<=x251)==x252);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x253 = INT64_MIN;
	uint8_t x254 = UINT8_MAX;
	int64_t x255 = INT64_MIN;
	volatile uint8_t x256 = 0U;
	static int32_t t56 = 135442627;

	t56 = (((x253+x254)<=x255)==x256);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x257 = UINT64_MAX;
	static uint64_t x258 = 10LLU;
	volatile int64_t x259 = INT64_MAX;
	int32_t x260 = -1;
	int32_t t57 = 621;

	t57 = (((x257+x258)<=x259)==x260);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x265 = -1;
	int16_t x266 = -170;
	uint8_t x268 = 2U;
	volatile int32_t t58 = -58694;

	t58 = (((x265+x266)<=x267)==x268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x269 = INT32_MIN;
	int16_t x271 = INT16_MIN;
	int32_t t59 = -6310524;

	t59 = (((x269+x270)<=x271)==x272);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x273 = UINT32_MAX;
	int8_t x274 = INT8_MAX;
	uint32_t x275 = 597425U;
	int8_t x276 = INT8_MIN;
	volatile int32_t t60 = 3456885;

	t60 = (((x273+x274)<=x275)==x276);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x277 = -31;
	uint32_t x278 = 22U;
	int8_t x279 = INT8_MAX;
	volatile int64_t x280 = -1LL;

	t61 = (((x277+x278)<=x279)==x280);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x281 = 1;
	int8_t x282 = -1;
	int16_t x283 = 32;
	int16_t x284 = -6241;
	volatile int32_t t62 = 1;

	t62 = (((x281+x282)<=x283)==x284);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x286 = -1;
	static int8_t x287 = -5;
	uint8_t x288 = 1U;

	t63 = (((x285+x286)<=x287)==x288);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x289 = INT16_MIN;
	uint32_t x292 = UINT32_MAX;
	int32_t t64 = 7;

	t64 = (((x289+x290)<=x291)==x292);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x297 = INT8_MAX;
	int16_t x300 = INT16_MAX;
	int32_t t65 = 7245;

	t65 = (((x297+x298)<=x299)==x300);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x301 = 6461LLU;
	int8_t x302 = -1;
	int16_t x303 = INT16_MAX;
	static volatile int32_t t66 = 14;

	t66 = (((x301+x302)<=x303)==x304);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x305 = INT32_MIN;
	int8_t x307 = INT8_MIN;
	int16_t x308 = -1;
	int32_t t67 = 8;

	t67 = (((x305+x306)<=x307)==x308);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x309 = -7865677603408LL;
	uint16_t x310 = 27U;
	volatile int8_t x311 = 0;
	uint64_t x312 = UINT64_MAX;
	volatile int32_t t68 = -28749424;

	t68 = (((x309+x310)<=x311)==x312);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x313 = INT32_MIN;
	static volatile uint16_t x314 = 2485U;
	static int16_t x316 = INT16_MIN;

	t69 = (((x313+x314)<=x315)==x316);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x317 = 6528U;
	volatile uint32_t x318 = 63U;
	volatile uint16_t x319 = UINT16_MAX;
	static uint8_t x320 = 82U;
	static volatile int32_t t70 = -400246548;

	t70 = (((x317+x318)<=x319)==x320);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x321 = 96U;
	volatile int64_t x322 = -1558254359459895LL;
	static volatile uint64_t x323 = 9045LLU;

	t71 = (((x321+x322)<=x323)==x324);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x329 = 9535U;
	static int8_t x330 = INT8_MIN;
	uint64_t x331 = 16139548LLU;
	volatile int32_t t72 = 20803;

	t72 = (((x329+x330)<=x331)==x332);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x333 = INT8_MAX;
	int32_t x334 = -1;
	int16_t x335 = -51;
	int64_t x336 = INT64_MIN;
	int32_t t73 = -165848578;

	t73 = (((x333+x334)<=x335)==x336);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x337 = 1U;
	uint64_t x338 = UINT64_MAX;
	int8_t x339 = INT8_MIN;
	int8_t x340 = -1;

	t74 = (((x337+x338)<=x339)==x340);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x341 = 2843U;
	uint8_t x343 = 0U;
	uint16_t x344 = UINT16_MAX;
	volatile int32_t t75 = -30312;

	t75 = (((x341+x342)<=x343)==x344);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x345 = INT64_MIN;
	static int8_t x346 = 13;
	int8_t x347 = -1;
	int64_t x348 = 16358171952LL;
	static volatile int32_t t76 = 7375754;

	t76 = (((x345+x346)<=x347)==x348);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x350 = INT16_MAX;
	int16_t x351 = 3;
	int64_t x352 = -1LL;
	int32_t t77 = 2797;

	t77 = (((x349+x350)<=x351)==x352);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x356 = 71717337379449524LLU;
	static int32_t t78 = -4915;

	t78 = (((x353+x354)<=x355)==x356);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x357 = 9U;
	uint8_t x358 = 8U;
	uint16_t x359 = 4U;
	int32_t t79 = -292279231;

	t79 = (((x357+x358)<=x359)==x360);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x361 = -1;
	int64_t x362 = -1LL;
	volatile uint16_t x363 = UINT16_MAX;
	static volatile int8_t x364 = INT8_MIN;
	static int32_t t80 = -7;

	t80 = (((x361+x362)<=x363)==x364);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x366 = -1;
	static int8_t x367 = INT8_MIN;
	static volatile int32_t t81 = -290;

	t81 = (((x365+x366)<=x367)==x368);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x371 = 5U;
	int16_t x372 = INT16_MAX;

	t82 = (((x369+x370)<=x371)==x372);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x373 = 34615127799LL;
	int8_t x374 = 1;
	uint8_t x375 = UINT8_MAX;
	volatile int32_t t83 = 410061;

	t83 = (((x373+x374)<=x375)==x376);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x378 = UINT32_MAX;
	volatile int32_t x379 = -97;
	static uint8_t x380 = 22U;

	t84 = (((x377+x378)<=x379)==x380);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x381 = 9415220LLU;
	uint16_t x382 = 1830U;
	int16_t x383 = 7578;
	uint32_t x384 = 210865895U;
	volatile int32_t t85 = 198;

	t85 = (((x381+x382)<=x383)==x384);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x385 = 457054452;
	int64_t x386 = -24809LL;
	int64_t x387 = INT64_MAX;
	static uint64_t x388 = 1LLU;

	t86 = (((x385+x386)<=x387)==x388);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x390 = UINT64_MAX;
	uint32_t x391 = UINT32_MAX;
	int16_t x392 = -938;
	static volatile int32_t t87 = 1;

	t87 = (((x389+x390)<=x391)==x392);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x393 = -1;
	int8_t x394 = INT8_MAX;
	static volatile int16_t x395 = INT16_MAX;
	int16_t x396 = -4;
	static volatile int32_t t88 = -473893009;

	t88 = (((x393+x394)<=x395)==x396);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x397 = INT8_MIN;
	uint64_t x398 = UINT64_MAX;
	uint64_t x399 = UINT64_MAX;
	static volatile uint32_t x400 = 6668126U;

	t89 = (((x397+x398)<=x399)==x400);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x401 = INT16_MIN;
	static uint16_t x402 = UINT16_MAX;
	int32_t x403 = INT32_MIN;
	uint8_t x404 = 1U;
	int32_t t90 = -261893566;

	t90 = (((x401+x402)<=x403)==x404);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x405 = UINT64_MAX;
	static uint16_t x406 = 13056U;
	int64_t x407 = INT64_MAX;
	static volatile int32_t t91 = -37;

	t91 = (((x405+x406)<=x407)==x408);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x410 = -1;
	volatile uint32_t x411 = 814601U;
	volatile int32_t t92 = -4077770;

	t92 = (((x409+x410)<=x411)==x412);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x413 = -1;
	static uint8_t x414 = 7U;
	int32_t x415 = -1;
	int8_t x416 = 0;
	static int32_t t93 = 12991;

	t93 = (((x413+x414)<=x415)==x416);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x417 = -25;
	static uint64_t x420 = 74484441894951224LLU;

	t94 = (((x417+x418)<=x419)==x420);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x422 = 1;
	int8_t x423 = -5;
	uint16_t x424 = 337U;
	static volatile int32_t t95 = 1339460;

	t95 = (((x421+x422)<=x423)==x424);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x425 = -1LL;
	int8_t x426 = -2;
	int8_t x428 = -1;
	static volatile int32_t t96 = -62582527;

	t96 = (((x425+x426)<=x427)==x428);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x429 = 0U;
	volatile int8_t x430 = 6;
	uint64_t x431 = 0LLU;
	int64_t x432 = 17183LL;

	t97 = (((x429+x430)<=x431)==x432);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x434 = UINT8_MAX;
	static int8_t x435 = -11;
	static int32_t t98 = 3900784;

	t98 = (((x433+x434)<=x435)==x436);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x437 = 0LLU;
	static volatile int64_t x439 = INT64_MIN;
	static uint16_t x440 = UINT16_MAX;
	volatile int32_t t99 = 1;

	t99 = (((x437+x438)<=x439)==x440);

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


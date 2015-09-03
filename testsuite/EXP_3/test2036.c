#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x1 = UINT32_MAX;
static int32_t x17 = INT32_MAX;
int16_t x19 = INT16_MIN;
int16_t x21 = INT16_MIN;
int16_t x27 = 1;
int32_t t7 = -60;
static uint16_t x58 = 61U;
int64_t x65 = INT64_MIN;
int16_t x68 = -43;
uint16_t x71 = 2U;
int32_t x79 = -1;
static volatile int32_t t16 = 159751358;
int8_t x99 = INT8_MAX;
volatile int32_t t22 = -12;
static volatile uint64_t x107 = 2544724LLU;
uint32_t x108 = 3076U;
static int8_t x111 = INT8_MAX;
int8_t x113 = -1;
volatile int32_t t27 = 860490055;
static int8_t x132 = INT8_MAX;
int32_t t30 = 32824308;
int16_t x159 = INT16_MIN;
uint8_t x166 = 75U;
int16_t x170 = -1;
static int64_t x171 = -546672537012478216LL;
volatile int64_t x174 = -1LL;
int8_t x177 = 26;
int16_t x179 = INT16_MIN;
int32_t x184 = -2;
static int32_t t38 = 42985;
volatile int32_t t39 = -2704891;
int16_t x193 = 4;
volatile uint64_t x198 = 71226837565002420LLU;
volatile int16_t x199 = INT16_MIN;
static int16_t x203 = INT16_MIN;
static uint16_t x210 = UINT16_MAX;
static volatile int64_t x221 = -1LL;
uint64_t x225 = UINT64_MAX;
uint16_t x227 = 6U;
uint32_t x238 = 143417U;
volatile uint64_t x242 = 12632968LLU;
static volatile int32_t t52 = -72262095;
static volatile int16_t x246 = -1;
volatile int64_t x249 = -143103LL;
volatile uint8_t x257 = 11U;
static uint8_t x263 = 0U;
int8_t x275 = -1;
static volatile uint32_t x283 = UINT32_MAX;
static volatile int16_t x284 = INT16_MIN;
int16_t x293 = 46;
static int16_t x296 = INT16_MIN;
volatile uint16_t x305 = UINT16_MAX;
static int64_t x307 = 49833LL;
volatile int32_t t68 = -1182;
static int8_t x327 = INT8_MIN;
volatile int32_t t70 = 101461;
uint32_t x329 = 90U;
volatile int32_t t71 = 752415;
int16_t x336 = INT16_MIN;
static volatile int8_t x337 = INT8_MIN;
int64_t x344 = INT64_MAX;
int32_t t75 = 723040;
static uint8_t x367 = UINT8_MAX;
volatile int32_t t78 = 0;
static int8_t x375 = -1;
uint16_t x380 = UINT16_MAX;
uint64_t x382 = 1794LLU;
int8_t x395 = INT8_MIN;
static volatile int32_t x397 = INT32_MAX;
static volatile int8_t x399 = INT8_MIN;
static volatile uint64_t x407 = 6665LLU;
static int32_t x410 = INT32_MIN;
int32_t x412 = -1682398;
int8_t x416 = -1;
volatile int16_t x418 = 8;
int16_t x423 = INT16_MAX;
uint16_t x428 = UINT16_MAX;
uint16_t x431 = 20U;
uint32_t x441 = UINT32_MAX;
static volatile int32_t x443 = INT32_MIN;
int32_t t95 = -37844440;
volatile uint64_t x446 = UINT64_MAX;
int16_t x447 = INT16_MAX;
volatile int8_t x451 = -1;
static int32_t t97 = 0;
int64_t x454 = 53108LL;
int32_t t98 = -120098;
static int32_t x459 = 18699;
static int32_t t99 = 2846961;


void f0(void) {
	uint64_t x2 = 13680408360296413LLU;
	int8_t x3 = 40;
	int8_t x4 = -1;
	int32_t t0 = 25232;

	t0 = ((x1+x2)==(x3^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	volatile int16_t x6 = -1;
	int64_t x7 = INT64_MIN;
	int64_t x8 = INT64_MIN;
	int32_t t1 = 3;

	t1 = ((x5+x6)==(x7^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	int16_t x10 = -1;
	int8_t x11 = INT8_MAX;
	int32_t x12 = INT32_MAX;
	int32_t t2 = -13;

	t2 = ((x9+x10)==(x11^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 60275295LLU;
	volatile int16_t x14 = -735;
	static int64_t x15 = -1LL;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 80129640;

	t3 = ((x13+x14)==(x15^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = 0LLU;
	volatile int8_t x20 = -2;
	volatile int32_t t4 = 216025;

	t4 = ((x17+x18)==(x19^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x22 = UINT16_MAX;
	volatile int16_t x23 = INT16_MAX;
	static volatile uint32_t x24 = UINT32_MAX;
	static volatile int32_t t5 = -38;

	t5 = ((x21+x22)==(x23^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	uint16_t x26 = 71U;
	int8_t x28 = -1;
	int32_t t6 = 3318460;

	t6 = ((x25+x26)==(x27^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -1;
	int16_t x34 = 70;
	int32_t x35 = 11402;
	uint64_t x36 = UINT64_MAX;

	t7 = ((x33+x34)==(x35^x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MAX;
	int64_t x38 = INT64_MIN;
	static int64_t x39 = 1389371LL;
	static int16_t x40 = INT16_MIN;
	int32_t t8 = -784;

	t8 = ((x37+x38)==(x39^x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x41 = UINT64_MAX;
	int32_t x42 = 339;
	int64_t x43 = INT64_MIN;
	volatile int64_t x44 = INT64_MAX;
	volatile int32_t t9 = -7;

	t9 = ((x41+x42)==(x43^x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = UINT8_MAX;
	uint16_t x46 = 40U;
	int16_t x47 = INT16_MAX;
	uint8_t x48 = UINT8_MAX;
	static int32_t t10 = 1;

	t10 = ((x45+x46)==(x47^x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x53 = -1;
	int8_t x54 = INT8_MIN;
	volatile uint8_t x55 = UINT8_MAX;
	static uint32_t x56 = UINT32_MAX;
	static volatile int32_t t11 = 58051;

	t11 = ((x53+x54)==(x55^x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = 187184;
	uint32_t x59 = 2961U;
	static uint8_t x60 = 1U;
	volatile int32_t t12 = 967508;

	t12 = ((x57+x58)==(x59^x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = -10;
	int8_t x62 = INT8_MAX;
	volatile int64_t x63 = INT64_MIN;
	uint32_t x64 = 91488931U;
	int32_t t13 = 1;

	t13 = ((x61+x62)==(x63^x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x66 = 614U;
	int64_t x67 = -11842644268456987LL;
	static volatile int32_t t14 = -858;

	t14 = ((x65+x66)==(x67^x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MAX;
	int8_t x70 = 23;
	static int16_t x72 = 251;
	int32_t t15 = 1;

	t15 = ((x69+x70)==(x71^x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = 10;
	uint32_t x78 = 49U;
	static int16_t x80 = 24;

	t16 = ((x77+x78)==(x79^x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x81 = 6842663U;
	volatile uint32_t x82 = 28695U;
	static volatile int64_t x83 = -1LL;
	volatile int64_t x84 = 403470032805883LL;
	volatile int32_t t17 = -121659413;

	t17 = ((x81+x82)==(x83^x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x85 = 15U;
	volatile int16_t x86 = INT16_MAX;
	int8_t x87 = -44;
	static int16_t x88 = 5;
	static volatile int32_t t18 = -93;

	t18 = ((x85+x86)==(x87^x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x89 = 482U;
	int32_t x90 = 31;
	static volatile int32_t x91 = 3;
	int64_t x92 = INT64_MIN;
	int32_t t19 = -169310;

	t19 = ((x89+x90)==(x91^x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = INT8_MIN;
	int64_t x94 = -900611602392LL;
	volatile uint32_t x95 = UINT32_MAX;
	int8_t x96 = INT8_MAX;
	volatile int32_t t20 = -59;

	t20 = ((x93+x94)==(x95^x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = -1;
	uint16_t x98 = UINT16_MAX;
	static int8_t x100 = -1;
	static int32_t t21 = -2854488;

	t21 = ((x97+x98)==(x99^x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = INT64_MIN;
	int64_t x102 = 26266LL;
	static uint64_t x103 = UINT64_MAX;
	volatile int16_t x104 = INT16_MIN;

	t22 = ((x101+x102)==(x103^x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = INT8_MIN;
	int16_t x106 = INT16_MIN;
	volatile int32_t t23 = -2;

	t23 = ((x105+x106)==(x107^x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x109 = -1;
	static int16_t x110 = INT16_MIN;
	int32_t x112 = INT32_MIN;
	int32_t t24 = 909;

	t24 = ((x109+x110)==(x111^x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x114 = UINT8_MAX;
	uint16_t x115 = UINT16_MAX;
	volatile int32_t x116 = INT32_MIN;
	int32_t t25 = -3632;

	t25 = ((x113+x114)==(x115^x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x117 = 143U;
	int16_t x118 = 7;
	uint64_t x119 = UINT64_MAX;
	int16_t x120 = -28;
	int32_t t26 = 687399323;

	t26 = ((x117+x118)==(x119^x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x121 = -1;
	static volatile int64_t x122 = INT64_MAX;
	int64_t x123 = -1LL;
	int8_t x124 = -1;

	t27 = ((x121+x122)==(x123^x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x129 = UINT32_MAX;
	uint16_t x130 = 13U;
	static uint32_t x131 = 718475U;
	volatile int32_t t28 = 2824195;

	t28 = ((x129+x130)==(x131^x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x133 = INT64_MAX;
	static uint64_t x134 = 16217440635992498LLU;
	int64_t x135 = -1LL;
	uint16_t x136 = 30U;
	int32_t t29 = 968437;

	t29 = ((x133+x134)==(x135^x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x141 = INT16_MAX;
	int16_t x142 = INT16_MIN;
	int8_t x143 = -1;
	uint64_t x144 = 0LLU;

	t30 = ((x141+x142)==(x143^x144));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x145 = 16852191760883LLU;
	volatile int32_t x146 = -6;
	int32_t x147 = -707;
	int8_t x148 = INT8_MIN;
	int32_t t31 = 4092825;

	t31 = ((x145+x146)==(x147^x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x149 = UINT32_MAX;
	static int16_t x150 = INT16_MIN;
	static volatile uint16_t x151 = UINT16_MAX;
	int16_t x152 = INT16_MIN;
	int32_t t32 = -94;

	t32 = ((x149+x150)==(x151^x152));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x157 = 37U;
	int32_t x158 = -742;
	int64_t x160 = INT64_MAX;
	int32_t t33 = 0;

	t33 = ((x157+x158)==(x159^x160));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x165 = 41158;
	volatile int8_t x167 = 21;
	volatile int16_t x168 = INT16_MAX;
	int32_t t34 = -1;

	t34 = ((x165+x166)==(x167^x168));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x169 = INT8_MIN;
	volatile int16_t x172 = INT16_MIN;
	volatile int32_t t35 = -500;

	t35 = ((x169+x170)==(x171^x172));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x173 = 232416LL;
	static int8_t x175 = INT8_MIN;
	static uint32_t x176 = 30815968U;
	volatile int32_t t36 = -339655;

	t36 = ((x173+x174)==(x175^x176));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x178 = UINT16_MAX;
	volatile int16_t x180 = INT16_MIN;
	volatile int32_t t37 = 11202;

	t37 = ((x177+x178)==(x179^x180));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x181 = 1U;
	static uint32_t x182 = UINT32_MAX;
	static uint32_t x183 = 7294672U;

	t38 = ((x181+x182)==(x183^x184));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x185 = 390295131;
	uint64_t x186 = UINT64_MAX;
	static volatile int32_t x187 = 4707472;
	uint8_t x188 = 0U;

	t39 = ((x185+x186)==(x187^x188));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x189 = 399U;
	uint8_t x190 = 23U;
	int32_t x191 = INT32_MIN;
	int16_t x192 = INT16_MIN;
	static int32_t t40 = -2739312;

	t40 = ((x189+x190)==(x191^x192));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x194 = 92669249;
	int32_t x195 = 836;
	int16_t x196 = INT16_MIN;
	int32_t t41 = -929716;

	t41 = ((x193+x194)==(x195^x196));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x197 = 120058619256638890LLU;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t42 = -7;

	t42 = ((x197+x198)==(x199^x200));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x201 = INT16_MIN;
	int16_t x202 = INT16_MIN;
	int32_t x204 = -1;
	volatile int32_t t43 = 4;

	t43 = ((x201+x202)==(x203^x204));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x205 = 302LLU;
	uint8_t x206 = 3U;
	volatile int8_t x207 = INT8_MIN;
	int32_t x208 = INT32_MIN;
	static volatile int32_t t44 = -19021781;

	t44 = ((x205+x206)==(x207^x208));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x209 = -1;
	int16_t x211 = INT16_MAX;
	int32_t x212 = INT32_MIN;
	volatile int32_t t45 = -1510;

	t45 = ((x209+x210)==(x211^x212));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x217 = -539896LL;
	uint8_t x218 = 56U;
	uint8_t x219 = 9U;
	int16_t x220 = INT16_MAX;
	int32_t t46 = -664;

	t46 = ((x217+x218)==(x219^x220));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x222 = INT32_MIN;
	volatile uint16_t x223 = UINT16_MAX;
	int16_t x224 = INT16_MIN;
	volatile int32_t t47 = 6692529;

	t47 = ((x221+x222)==(x223^x224));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x226 = 2137U;
	static uint16_t x228 = UINT16_MAX;
	volatile int32_t t48 = -445320764;

	t48 = ((x225+x226)==(x227^x228));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x229 = INT8_MIN;
	static int64_t x230 = -1LL;
	uint16_t x231 = UINT16_MAX;
	static volatile int64_t x232 = -1LL;
	static int32_t t49 = -62;

	t49 = ((x229+x230)==(x231^x232));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x233 = 1;
	int8_t x234 = INT8_MAX;
	static uint16_t x235 = UINT16_MAX;
	static volatile int64_t x236 = -4035LL;
	static volatile int32_t t50 = 102;

	t50 = ((x233+x234)==(x235^x236));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x237 = UINT64_MAX;
	int64_t x239 = INT64_MIN;
	static volatile int64_t x240 = -1LL;
	int32_t t51 = 60;

	t51 = ((x237+x238)==(x239^x240));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x241 = INT8_MAX;
	volatile int8_t x243 = -1;
	int8_t x244 = INT8_MIN;

	t52 = ((x241+x242)==(x243^x244));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x245 = UINT16_MAX;
	int64_t x247 = INT64_MAX;
	int8_t x248 = 47;
	int32_t t53 = 1;

	t53 = ((x245+x246)==(x247^x248));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x250 = INT16_MIN;
	uint8_t x251 = 14U;
	volatile int8_t x252 = -14;
	int32_t t54 = 452015;

	t54 = ((x249+x250)==(x251^x252));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x253 = INT16_MIN;
	int32_t x254 = 951;
	int64_t x255 = INT64_MIN;
	volatile int64_t x256 = 26021546682077095LL;
	static volatile int32_t t55 = -224385847;

	t55 = ((x253+x254)==(x255^x256));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x258 = UINT16_MAX;
	int64_t x259 = INT64_MIN;
	int16_t x260 = -1040;
	volatile int32_t t56 = 26013406;

	t56 = ((x257+x258)==(x259^x260));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x261 = INT8_MIN;
	volatile int32_t x262 = 191146594;
	volatile int8_t x264 = -2;
	volatile int32_t t57 = -805467;

	t57 = ((x261+x262)==(x263^x264));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x265 = UINT16_MAX;
	int64_t x266 = -1LL;
	int16_t x267 = -1;
	volatile int8_t x268 = INT8_MAX;
	int32_t t58 = 355222;

	t58 = ((x265+x266)==(x267^x268));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x269 = -10;
	uint16_t x270 = 584U;
	volatile int8_t x271 = INT8_MIN;
	uint64_t x272 = 934LLU;
	volatile int32_t t59 = -19;

	t59 = ((x269+x270)==(x271^x272));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x273 = INT32_MAX;
	int32_t x274 = -1;
	int8_t x276 = INT8_MIN;
	volatile int32_t t60 = 6753967;

	t60 = ((x273+x274)==(x275^x276));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x277 = 6297LLU;
	volatile uint8_t x278 = UINT8_MAX;
	uint8_t x279 = 26U;
	int8_t x280 = 1;
	int32_t t61 = 351;

	t61 = ((x277+x278)==(x279^x280));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x281 = INT16_MIN;
	int32_t x282 = INT32_MAX;
	int32_t t62 = -521;

	t62 = ((x281+x282)==(x283^x284));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x285 = 1;
	int16_t x286 = INT16_MIN;
	volatile int64_t x287 = INT64_MIN;
	int8_t x288 = -1;
	int32_t t63 = 103;

	t63 = ((x285+x286)==(x287^x288));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x289 = -1LL;
	static volatile uint16_t x290 = 63U;
	int32_t x291 = INT32_MIN;
	static int64_t x292 = -2374607573LL;
	int32_t t64 = 3982;

	t64 = ((x289+x290)==(x291^x292));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x294 = 206U;
	int8_t x295 = INT8_MAX;
	volatile int32_t t65 = -36821;

	t65 = ((x293+x294)==(x295^x296));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x297 = UINT8_MAX;
	int16_t x298 = 106;
	int64_t x299 = -1LL;
	int64_t x300 = -10LL;
	int32_t t66 = -338;

	t66 = ((x297+x298)==(x299^x300));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x306 = UINT16_MAX;
	volatile uint64_t x308 = UINT64_MAX;
	int32_t t67 = -3915653;

	t67 = ((x305+x306)==(x307^x308));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x313 = -17588LL;
	uint32_t x314 = UINT32_MAX;
	static uint16_t x315 = UINT16_MAX;
	volatile int32_t x316 = -1;

	t68 = ((x313+x314)==(x315^x316));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x321 = UINT8_MAX;
	volatile uint8_t x322 = 21U;
	uint32_t x323 = 2432501U;
	int32_t x324 = INT32_MIN;
	volatile int32_t t69 = -13;

	t69 = ((x321+x322)==(x323^x324));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x325 = 68722386486971LL;
	int8_t x326 = INT8_MIN;
	uint16_t x328 = 15302U;

	t70 = ((x325+x326)==(x327^x328));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x330 = -959;
	int32_t x331 = INT32_MAX;
	volatile uint64_t x332 = 5LLU;

	t71 = ((x329+x330)==(x331^x332));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x333 = -1;
	volatile uint16_t x334 = UINT16_MAX;
	uint32_t x335 = 25276879U;
	volatile int32_t t72 = -23827;

	t72 = ((x333+x334)==(x335^x336));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x338 = INT8_MAX;
	int64_t x339 = -48LL;
	static volatile uint8_t x340 = 1U;
	int32_t t73 = -13341;

	t73 = ((x337+x338)==(x339^x340));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x341 = 0;
	int16_t x342 = INT16_MIN;
	int8_t x343 = INT8_MIN;
	static volatile int32_t t74 = -3893348;

	t74 = ((x341+x342)==(x343^x344));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x349 = INT32_MAX;
	int16_t x350 = INT16_MIN;
	int16_t x351 = INT16_MIN;
	int64_t x352 = -1864016LL;

	t75 = ((x349+x350)==(x351^x352));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x353 = 538247688728226148LLU;
	int64_t x354 = -1LL;
	uint32_t x355 = UINT32_MAX;
	int16_t x356 = INT16_MAX;
	static volatile int32_t t76 = -15;

	t76 = ((x353+x354)==(x355^x356));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x361 = INT8_MIN;
	int16_t x362 = 2335;
	static volatile int8_t x363 = INT8_MIN;
	volatile uint32_t x364 = UINT32_MAX;
	int32_t t77 = 3874;

	t77 = ((x361+x362)==(x363^x364));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x365 = INT16_MAX;
	int16_t x366 = INT16_MIN;
	int32_t x368 = INT32_MIN;

	t78 = ((x365+x366)==(x367^x368));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x373 = INT32_MAX;
	volatile uint32_t x374 = 2449940U;
	static uint32_t x376 = 13014U;
	static volatile int32_t t79 = 18195;

	t79 = ((x373+x374)==(x375^x376));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x377 = 83U;
	int16_t x378 = INT16_MIN;
	int32_t x379 = INT32_MAX;
	static int32_t t80 = -20;

	t80 = ((x377+x378)==(x379^x380));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x381 = INT8_MIN;
	uint16_t x383 = 0U;
	int32_t x384 = INT32_MIN;
	int32_t t81 = 624;

	t81 = ((x381+x382)==(x383^x384));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x389 = 433U;
	uint8_t x390 = UINT8_MAX;
	static uint8_t x391 = 23U;
	uint32_t x392 = 117046906U;
	int32_t t82 = -13798;

	t82 = ((x389+x390)==(x391^x392));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x393 = 621774U;
	volatile int32_t x394 = INT32_MIN;
	int64_t x396 = INT64_MAX;
	volatile int32_t t83 = 671175560;

	t83 = ((x393+x394)==(x395^x396));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x398 = -1;
	static int64_t x400 = INT64_MIN;
	int32_t t84 = 2;

	t84 = ((x397+x398)==(x399^x400));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x401 = INT16_MIN;
	uint16_t x402 = 209U;
	static volatile int16_t x403 = INT16_MAX;
	uint64_t x404 = 2205106659LLU;
	volatile int32_t t85 = 110;

	t85 = ((x401+x402)==(x403^x404));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x405 = 1790U;
	static uint64_t x406 = UINT64_MAX;
	uint32_t x408 = UINT32_MAX;
	static int32_t t86 = 1335789;

	t86 = ((x405+x406)==(x407^x408));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x409 = UINT64_MAX;
	int8_t x411 = INT8_MAX;
	int32_t t87 = -279231;

	t87 = ((x409+x410)==(x411^x412));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x413 = 270979LLU;
	int16_t x414 = -1;
	volatile int8_t x415 = -1;
	static volatile int32_t t88 = -199;

	t88 = ((x413+x414)==(x415^x416));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x417 = INT16_MIN;
	int8_t x419 = INT8_MIN;
	uint8_t x420 = 6U;
	int32_t t89 = -3499715;

	t89 = ((x417+x418)==(x419^x420));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x421 = 51U;
	volatile uint64_t x422 = 1044135797427319817LLU;
	int32_t x424 = 517;
	int32_t t90 = -450;

	t90 = ((x421+x422)==(x423^x424));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x425 = -1LL;
	int32_t x426 = INT32_MIN;
	uint64_t x427 = UINT64_MAX;
	volatile int32_t t91 = -8926;

	t91 = ((x425+x426)==(x427^x428));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x429 = 24U;
	static int8_t x430 = INT8_MIN;
	volatile int8_t x432 = INT8_MIN;
	int32_t t92 = 23932;

	t92 = ((x429+x430)==(x431^x432));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x433 = 1;
	int64_t x434 = INT64_MIN;
	int64_t x435 = INT64_MIN;
	volatile int64_t x436 = INT64_MAX;
	volatile int32_t t93 = -15787033;

	t93 = ((x433+x434)==(x435^x436));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x437 = INT16_MIN;
	int8_t x438 = -1;
	int8_t x439 = -42;
	static int8_t x440 = INT8_MIN;
	volatile int32_t t94 = 1;

	t94 = ((x437+x438)==(x439^x440));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x442 = 11U;
	int8_t x444 = INT8_MIN;

	t95 = ((x441+x442)==(x443^x444));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x445 = INT64_MIN;
	volatile uint8_t x448 = UINT8_MAX;
	int32_t t96 = -18972;

	t96 = ((x445+x446)==(x447^x448));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x449 = -1;
	int32_t x450 = -840;
	uint64_t x452 = 292924706354LLU;

	t97 = ((x449+x450)==(x451^x452));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x453 = INT32_MIN;
	int8_t x455 = INT8_MAX;
	uint16_t x456 = UINT16_MAX;

	t98 = ((x453+x454)==(x455^x456));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x457 = -20;
	int32_t x458 = -129;
	uint8_t x460 = 35U;

	t99 = ((x457+x458)==(x459^x460));

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


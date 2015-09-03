#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x9 = -7;
int16_t x10 = -82;
int64_t x12 = -1LL;
int16_t x13 = INT16_MAX;
uint8_t x17 = UINT8_MAX;
int32_t t5 = -745669235;
static int16_t x27 = -1915;
int16_t x29 = INT16_MIN;
volatile uint16_t x42 = UINT16_MAX;
uint8_t x45 = 64U;
volatile uint16_t x48 = 6214U;
uint64_t x52 = UINT64_MAX;
volatile int16_t x57 = -1;
int16_t x60 = INT16_MIN;
volatile uint16_t x61 = 407U;
static int64_t x63 = INT64_MAX;
uint8_t x64 = 14U;
static int16_t x66 = INT16_MIN;
int32_t x73 = INT32_MIN;
int32_t x78 = INT32_MIN;
volatile int8_t x83 = 1;
uint8_t x85 = UINT8_MAX;
uint64_t x86 = 5248LLU;
int64_t x90 = 2305152461164LL;
static uint64_t x93 = 4824862533031721316LLU;
volatile int32_t t23 = -425716140;
int64_t x104 = INT64_MIN;
int64_t x116 = 0LL;
static uint16_t x119 = 8U;
uint16_t x121 = UINT16_MAX;
int16_t x122 = INT16_MAX;
int32_t x123 = INT32_MIN;
int32_t t28 = -654933;
volatile int16_t x129 = 24;
static int8_t x130 = 1;
int32_t t33 = -3;
uint64_t x149 = UINT64_MAX;
volatile int32_t x163 = 31982;
static volatile int64_t x166 = INT64_MAX;
uint64_t x183 = 57100LLU;
int32_t t39 = -100;
volatile int32_t t40 = -50;
static int8_t x191 = 2;
volatile int16_t x195 = 3;
int32_t t42 = INT32_MIN;
static volatile int32_t t44 = -1018;
volatile int32_t x212 = -1;
volatile int32_t t45 = -2;
static volatile uint32_t x215 = 2186570U;
int8_t x219 = -1;
volatile int64_t t47 = INT64_MIN;
static uint64_t x223 = 8398910189LLU;
uint8_t x224 = UINT8_MAX;
volatile int8_t x230 = -11;
static volatile int16_t x234 = -566;
static int16_t x237 = INT16_MIN;
static uint8_t x239 = UINT8_MAX;
volatile int64_t t51 = INT64_MIN;
int32_t x253 = -1;
int64_t x256 = INT64_MAX;
volatile uint32_t t54 = 26961U;
int32_t t55 = 69381;
int8_t x266 = INT8_MIN;
int32_t x274 = -1;
static uint16_t x279 = UINT16_MAX;
uint32_t x283 = 2945U;
volatile int32_t t60 = -212160891;
static volatile int32_t t61 = 25;
volatile int32_t x300 = 19644790;
static uint8_t x301 = 0U;
volatile int32_t x302 = INT32_MAX;
int32_t t63 = -339;
int8_t x311 = 14;
volatile int32_t t65 = -147025583;
int32_t t66 = 814381987;
uint16_t x326 = 1608U;
static int8_t x330 = 1;
int8_t x338 = -5;
static uint8_t x341 = 46U;
static int64_t x343 = -120853522841LL;
static uint8_t x348 = UINT8_MAX;
int32_t t73 = 1;
uint8_t x349 = 1U;
uint64_t x354 = 905513795709086LLU;
volatile int8_t x367 = -1;
int8_t x369 = INT8_MAX;
int32_t x374 = -34918272;
volatile uint8_t x376 = 3U;
volatile int8_t x390 = -1;
uint32_t x392 = UINT32_MAX;
int8_t x394 = INT8_MIN;
int8_t x397 = 1;
uint64_t x398 = 49003500LLU;
int32_t t84 = 83;
int8_t x403 = INT8_MIN;
uint8_t x418 = UINT8_MAX;
int16_t x419 = INT16_MAX;
volatile int32_t x420 = -1;
int64_t x429 = 423186947494558018LL;
uint32_t x430 = UINT32_MAX;
int16_t x431 = 76;
uint32_t x433 = 223U;
int16_t x434 = -1;
volatile uint16_t x438 = 7451U;
int8_t x441 = INT8_MIN;
volatile uint32_t x444 = UINT32_MAX;
int64_t x454 = INT64_MAX;
static uint64_t x457 = UINT64_MAX;
int8_t x458 = -1;
uint64_t x459 = 2113749957646298499LLU;
int32_t x464 = -6708260;
volatile uint8_t x468 = UINT8_MAX;


void f0(void) {
	int64_t x1 = -1LL;
	uint8_t x2 = 0U;
	volatile int64_t x3 = INT64_MAX;
	static volatile int64_t x4 = -1LL;
	static int64_t t0 = 208174010618LL;

	t0 = (((x1+x2)<=x3)*x4);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	static int8_t x6 = INT8_MIN;
	volatile int32_t x7 = 3719;
	uint16_t x8 = UINT16_MAX;
	static int32_t t1 = 0;

	t1 = (((x5+x6)<=x7)*x8);

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x11 = -5;
	int64_t t2 = 56175736304578973LL;

	t2 = (((x9+x10)<=x11)*x12);

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = 143873723860604LLU;
	volatile int64_t x15 = INT64_MIN;
	uint64_t x16 = UINT64_MAX;
	volatile uint64_t t3 = UINT64_MAX;

	t3 = (((x13+x14)<=x15)*x16);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = 435969397LLU;
	uint8_t x19 = UINT8_MAX;
	int32_t x20 = INT32_MIN;
	static volatile int32_t t4 = 7;

	t4 = (((x17+x18)<=x19)*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -1;
	volatile int8_t x22 = INT8_MIN;
	int16_t x23 = INT16_MIN;
	volatile uint8_t x24 = UINT8_MAX;

	t5 = (((x21+x22)<=x23)*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MIN;
	int64_t x26 = INT64_MAX;
	volatile uint64_t x28 = UINT64_MAX;
	volatile uint64_t t6 = 113172LLU;

	t6 = (((x25+x26)<=x27)*x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x30 = -1;
	uint32_t x31 = 869U;
	int16_t x32 = 23;
	int32_t t7 = 2;

	t7 = (((x29+x30)<=x31)*x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 63342LLU;
	static uint64_t x34 = 1013667671442294191LLU;
	static volatile int8_t x35 = -1;
	uint8_t x36 = 2U;
	volatile int32_t t8 = -774566;

	t8 = (((x33+x34)<=x35)*x36);

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x37 = -1703026889230314LL;
	volatile int8_t x38 = INT8_MIN;
	static int32_t x39 = INT32_MIN;
	int16_t x40 = -1;
	volatile int32_t t9 = -1270;

	t9 = (((x37+x38)<=x39)*x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 3135758152100133LLU;
	uint32_t x43 = UINT32_MAX;
	static uint16_t x44 = 208U;
	volatile int32_t t10 = -2;

	t10 = (((x41+x42)<=x43)*x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = INT16_MAX;
	uint16_t x47 = UINT16_MAX;
	int32_t t11 = 13611690;

	t11 = (((x45+x46)<=x47)*x48);

	if (t11 != 6214) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = 44U;
	int64_t x50 = -11228592613335LL;
	int16_t x51 = INT16_MAX;
	static uint64_t t12 = UINT64_MAX;

	t12 = (((x49+x50)<=x51)*x52);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x58 = 1552;
	static volatile int32_t x59 = INT32_MAX;
	static volatile int32_t t13 = -1716682;

	t13 = (((x57+x58)<=x59)*x60);

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x62 = INT64_MIN;
	volatile int32_t t14 = -43;

	t14 = (((x61+x62)<=x63)*x64);

	if (t14 != 14) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = -1;
	uint64_t x67 = 50571133920891LLU;
	int32_t x68 = INT32_MAX;
	int32_t t15 = 15458385;

	t15 = (((x65+x66)<=x67)*x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x69 = 6;
	static int64_t x70 = INT64_MIN;
	int64_t x71 = INT64_MIN;
	volatile int16_t x72 = INT16_MAX;
	volatile int32_t t16 = 82613;

	t16 = (((x69+x70)<=x71)*x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x74 = INT32_MAX;
	volatile uint8_t x75 = 15U;
	static uint32_t x76 = 2463518U;
	uint32_t t17 = 118871347U;

	t17 = (((x73+x74)<=x75)*x76);

	if (t17 != 2463518U) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x77 = INT8_MAX;
	int16_t x79 = -1;
	static volatile int8_t x80 = -1;
	volatile int32_t t18 = 34391;

	t18 = (((x77+x78)<=x79)*x80);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x81 = -1LL;
	static int8_t x82 = 1;
	int8_t x84 = -1;
	int32_t t19 = 3043529;

	t19 = (((x81+x82)<=x83)*x84);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x87 = -1;
	int16_t x88 = INT16_MAX;
	volatile int32_t t20 = 565;

	t20 = (((x85+x86)<=x87)*x88);

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x89 = -7;
	static uint64_t x91 = 980LLU;
	uint8_t x92 = 2U;
	volatile int32_t t21 = -3813997;

	t21 = (((x89+x90)<=x91)*x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x94 = 1;
	int8_t x95 = INT8_MAX;
	int32_t x96 = INT32_MIN;
	int32_t t22 = 11164100;

	t22 = (((x93+x94)<=x95)*x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x97 = -1;
	int64_t x98 = -478LL;
	volatile uint16_t x99 = 106U;
	static int32_t x100 = -1;

	t23 = (((x97+x98)<=x99)*x100);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = INT32_MAX;
	uint64_t x102 = 5253558178LLU;
	uint32_t x103 = 560688761U;
	int64_t t24 = 19481309LL;

	t24 = (((x101+x102)<=x103)*x104);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = 3873311326742667LL;
	uint8_t x110 = 2U;
	int64_t x111 = 23LL;
	static int16_t x112 = -15;
	volatile int32_t t25 = 13;

	t25 = (((x109+x110)<=x111)*x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = -1LL;
	volatile int16_t x114 = INT16_MIN;
	int32_t x115 = 1;
	static int64_t t26 = 29667LL;

	t26 = (((x113+x114)<=x115)*x116);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = -439493481614071689LL;
	int8_t x118 = INT8_MIN;
	int64_t x120 = -1LL;
	static volatile int64_t t27 = -3494492486826LL;

	t27 = (((x117+x118)<=x119)*x120);

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x124 = -5;

	t28 = (((x121+x122)<=x123)*x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = -13321345002LL;
	uint64_t x126 = 11176552LLU;
	volatile uint64_t x127 = 618509LLU;
	int32_t x128 = INT32_MAX;
	static int32_t t29 = 1111117;

	t29 = (((x125+x126)<=x127)*x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x131 = -1;
	static int8_t x132 = INT8_MAX;
	int32_t t30 = -1;

	t30 = (((x129+x130)<=x131)*x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x133 = -1;
	uint8_t x134 = 11U;
	int32_t x135 = INT32_MIN;
	int64_t x136 = INT64_MAX;
	static volatile int64_t t31 = -1412524178LL;

	t31 = (((x133+x134)<=x135)*x136);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x137 = -27;
	int8_t x138 = INT8_MAX;
	int16_t x139 = INT16_MIN;
	uint8_t x140 = 52U;
	static volatile int32_t t32 = 12605;

	t32 = (((x137+x138)<=x139)*x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint16_t x141 = UINT16_MAX;
	int64_t x142 = INT64_MIN;
	static int16_t x143 = 506;
	uint16_t x144 = 575U;

	t33 = (((x141+x142)<=x143)*x144);

	if (t33 != 575) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x150 = 98074649959LLU;
	volatile uint16_t x151 = UINT16_MAX;
	int16_t x152 = -3524;
	int32_t t34 = -47288;

	t34 = (((x149+x150)<=x151)*x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = 3;
	int64_t x154 = -1LL;
	int16_t x155 = INT16_MIN;
	int32_t x156 = INT32_MIN;
	volatile int32_t t35 = 1;

	t35 = (((x153+x154)<=x155)*x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x161 = INT8_MAX;
	int16_t x162 = -241;
	int16_t x164 = 0;
	int32_t t36 = 238234248;

	t36 = (((x161+x162)<=x163)*x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x165 = UINT64_MAX;
	int32_t x167 = -1;
	int16_t x168 = INT16_MIN;
	int32_t t37 = 44;

	t37 = (((x165+x166)<=x167)*x168);

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x177 = -148245140LL;
	int16_t x178 = 58;
	static uint64_t x179 = UINT64_MAX;
	static int8_t x180 = INT8_MAX;
	int32_t t38 = -1405523;

	t38 = (((x177+x178)<=x179)*x180);

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x181 = 272240893744LLU;
	uint32_t x182 = 9U;
	int8_t x184 = -1;

	t39 = (((x181+x182)<=x183)*x184);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x185 = 25019;
	int16_t x186 = INT16_MAX;
	int8_t x187 = INT8_MAX;
	int16_t x188 = -8;

	t40 = (((x185+x186)<=x187)*x188);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x189 = 2U;
	int64_t x190 = INT64_MIN;
	int32_t x192 = 628717295;
	static volatile int32_t t41 = -462112;

	t41 = (((x189+x190)<=x191)*x192);

	if (t41 != 628717295) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x193 = INT64_MIN;
	int16_t x194 = 0;
	volatile int32_t x196 = INT32_MIN;

	t42 = (((x193+x194)<=x195)*x196);

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x197 = -1;
	uint16_t x198 = 813U;
	uint8_t x199 = 13U;
	int64_t x200 = INT64_MAX;
	int64_t t43 = -14359652239LL;

	t43 = (((x197+x198)<=x199)*x200);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x205 = 14592U;
	int32_t x206 = INT32_MAX;
	int8_t x207 = INT8_MIN;
	int32_t x208 = -1;

	t44 = (((x205+x206)<=x207)*x208);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x209 = -1;
	volatile int8_t x210 = INT8_MAX;
	static volatile uint64_t x211 = UINT64_MAX;

	t45 = (((x209+x210)<=x211)*x212);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x213 = UINT16_MAX;
	int16_t x214 = -980;
	int32_t x216 = -1;
	volatile int32_t t46 = 2310119;

	t46 = (((x213+x214)<=x215)*x216);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x217 = 62886486U;
	int8_t x218 = INT8_MAX;
	static volatile int64_t x220 = INT64_MIN;

	t47 = (((x217+x218)<=x219)*x220);

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x221 = INT16_MIN;
	uint16_t x222 = 28U;
	volatile int32_t t48 = -4923763;

	t48 = (((x221+x222)<=x223)*x224);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x229 = INT16_MIN;
	static int16_t x231 = INT16_MIN;
	int8_t x232 = INT8_MIN;
	volatile int32_t t49 = 57179;

	t49 = (((x229+x230)<=x231)*x232);

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x233 = -1LL;
	int64_t x235 = -1LL;
	int64_t x236 = INT64_MAX;
	static int64_t t50 = INT64_MAX;

	t50 = (((x233+x234)<=x235)*x236);

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x238 = INT8_MIN;
	volatile int64_t x240 = INT64_MIN;

	t51 = (((x237+x238)<=x239)*x240);

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x241 = 11546;
	static volatile int64_t x242 = INT64_MIN;
	int32_t x243 = -1;
	int8_t x244 = -19;
	int32_t t52 = -2;

	t52 = (((x241+x242)<=x243)*x244);

	if (t52 != -19) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x254 = UINT32_MAX;
	int32_t x255 = INT32_MAX;
	static volatile int64_t t53 = 4616646008728LL;

	t53 = (((x253+x254)<=x255)*x256);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x257 = UINT16_MAX;
	uint32_t x258 = 3727U;
	int8_t x259 = -1;
	uint32_t x260 = 452U;

	t54 = (((x257+x258)<=x259)*x260);

	if (t54 != 452U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x261 = 0;
	static int64_t x262 = 994703689543570LL;
	int8_t x263 = -9;
	int32_t x264 = 3300;

	t55 = (((x261+x262)<=x263)*x264);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x265 = 43856518298707743LL;
	uint64_t x267 = 1LLU;
	volatile int64_t x268 = INT64_MAX;
	volatile int64_t t56 = -59152606648LL;

	t56 = (((x265+x266)<=x267)*x268);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x273 = 23U;
	int32_t x275 = -1;
	int16_t x276 = INT16_MAX;
	int32_t t57 = 3;

	t57 = (((x273+x274)<=x275)*x276);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x277 = -29;
	int16_t x278 = INT16_MIN;
	static int32_t x280 = -155048;
	int32_t t58 = 423;

	t58 = (((x277+x278)<=x279)*x280);

	if (t58 != -155048) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x281 = -1286334083250LL;
	static volatile int8_t x282 = INT8_MAX;
	uint32_t x284 = 1U;
	volatile uint32_t t59 = 0U;

	t59 = (((x281+x282)<=x283)*x284);

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x289 = 13986144201912078LL;
	int64_t x290 = -9758280LL;
	static int8_t x291 = INT8_MIN;
	uint8_t x292 = 3U;

	t60 = (((x289+x290)<=x291)*x292);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x293 = 28;
	static int32_t x294 = INT32_MIN;
	static int64_t x295 = INT64_MIN;
	volatile int8_t x296 = 0;

	t61 = (((x293+x294)<=x295)*x296);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x297 = 8LLU;
	volatile int32_t x298 = -1;
	uint64_t x299 = 37871314LLU;
	volatile int32_t t62 = -235373;

	t62 = (((x297+x298)<=x299)*x300);

	if (t62 != 19644790) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x303 = 5U;
	volatile int32_t x304 = 235;

	t63 = (((x301+x302)<=x303)*x304);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x305 = 405U;
	int8_t x306 = -1;
	uint16_t x307 = UINT16_MAX;
	int16_t x308 = INT16_MIN;
	volatile int32_t t64 = 987860072;

	t64 = (((x305+x306)<=x307)*x308);

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x309 = UINT32_MAX;
	uint64_t x310 = 524376297940861151LLU;
	int8_t x312 = -24;

	t65 = (((x309+x310)<=x311)*x312);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x313 = 13;
	uint16_t x314 = 2U;
	int16_t x315 = 0;
	int8_t x316 = INT8_MIN;

	t66 = (((x313+x314)<=x315)*x316);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x317 = -838;
	volatile int16_t x318 = INT16_MIN;
	uint8_t x319 = 3U;
	int8_t x320 = -10;
	int32_t t67 = -4;

	t67 = (((x317+x318)<=x319)*x320);

	if (t67 != -10) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x321 = INT16_MIN;
	static uint64_t x322 = UINT64_MAX;
	static volatile int64_t x323 = INT64_MAX;
	int64_t x324 = -1LL;
	volatile int64_t t68 = 41LL;

	t68 = (((x321+x322)<=x323)*x324);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x325 = 1178;
	int8_t x327 = -1;
	volatile uint32_t x328 = 7338698U;
	volatile uint32_t t69 = 266500482U;

	t69 = (((x325+x326)<=x327)*x328);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x329 = 10U;
	static uint64_t x331 = 42LLU;
	int32_t x332 = INT32_MIN;
	volatile int32_t t70 = INT32_MIN;

	t70 = (((x329+x330)<=x331)*x332);

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x337 = INT8_MIN;
	int32_t x339 = INT32_MAX;
	int8_t x340 = 23;
	static int32_t t71 = -70;

	t71 = (((x337+x338)<=x339)*x340);

	if (t71 != 23) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x342 = -1;
	int8_t x344 = INT8_MIN;
	int32_t t72 = 743925572;

	t72 = (((x341+x342)<=x343)*x344);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x345 = -24958690;
	int32_t x346 = -421;
	volatile int8_t x347 = INT8_MIN;

	t73 = (((x345+x346)<=x347)*x348);

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x350 = INT32_MIN;
	uint32_t x351 = 53283357U;
	static int16_t x352 = INT16_MIN;
	static int32_t t74 = -10944;

	t74 = (((x349+x350)<=x351)*x352);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x353 = INT32_MIN;
	uint64_t x355 = 10634290548LLU;
	int64_t x356 = INT64_MIN;
	int64_t t75 = -89332823LL;

	t75 = (((x353+x354)<=x355)*x356);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x361 = INT8_MIN;
	int16_t x362 = INT16_MAX;
	int32_t x363 = INT32_MIN;
	int32_t x364 = INT32_MAX;
	volatile int32_t t76 = 1;

	t76 = (((x361+x362)<=x363)*x364);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x365 = 1011LL;
	uint16_t x366 = 325U;
	volatile int64_t x368 = INT64_MAX;
	int64_t t77 = 93083971LL;

	t77 = (((x365+x366)<=x367)*x368);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x370 = 1U;
	uint64_t x371 = 5556923LLU;
	volatile uint16_t x372 = 19130U;
	volatile int32_t t78 = 162055;

	t78 = (((x369+x370)<=x371)*x372);

	if (t78 != 19130) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x373 = -4053530;
	uint64_t x375 = 111591298LLU;
	int32_t t79 = -3962678;

	t79 = (((x373+x374)<=x375)*x376);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x377 = 5578528426772LL;
	static int8_t x378 = INT8_MAX;
	int32_t x379 = INT32_MIN;
	int32_t x380 = INT32_MIN;
	volatile int32_t t80 = 12;

	t80 = (((x377+x378)<=x379)*x380);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x381 = INT16_MAX;
	volatile int16_t x382 = -1;
	int8_t x383 = -1;
	volatile int8_t x384 = INT8_MIN;
	int32_t t81 = -2;

	t81 = (((x381+x382)<=x383)*x384);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x389 = 8U;
	int64_t x391 = INT64_MIN;
	volatile uint32_t t82 = 7046515U;

	t82 = (((x389+x390)<=x391)*x392);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x393 = -1;
	int32_t x395 = 245356;
	int8_t x396 = INT8_MIN;
	volatile int32_t t83 = -6523;

	t83 = (((x393+x394)<=x395)*x396);

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x399 = 15868;
	static int16_t x400 = -1;

	t84 = (((x397+x398)<=x399)*x400);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x401 = 0;
	int64_t x402 = INT64_MAX;
	volatile int16_t x404 = INT16_MIN;
	int32_t t85 = 724283;

	t85 = (((x401+x402)<=x403)*x404);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x409 = 3U;
	uint32_t x410 = 173413U;
	uint8_t x411 = UINT8_MAX;
	volatile uint32_t x412 = 13U;
	static uint32_t t86 = 10299U;

	t86 = (((x409+x410)<=x411)*x412);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x413 = INT16_MIN;
	uint16_t x414 = 2U;
	volatile uint32_t x415 = 241U;
	uint16_t x416 = UINT16_MAX;
	int32_t t87 = -251;

	t87 = (((x413+x414)<=x415)*x416);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x417 = INT8_MIN;
	int32_t t88 = -42927;

	t88 = (((x417+x418)<=x419)*x420);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x421 = 1U;
	int64_t x422 = INT64_MIN;
	int32_t x423 = -6;
	int32_t x424 = 3537;
	volatile int32_t t89 = 58299292;

	t89 = (((x421+x422)<=x423)*x424);

	if (t89 != 3537) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x425 = -1;
	static int32_t x426 = -1;
	static int16_t x427 = 2968;
	int32_t x428 = INT32_MIN;
	volatile int32_t t90 = INT32_MIN;

	t90 = (((x425+x426)<=x427)*x428);

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x432 = 0;
	int32_t t91 = 11;

	t91 = (((x429+x430)<=x431)*x432);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x435 = 12645889514260170LLU;
	static volatile int8_t x436 = -1;
	static int32_t t92 = 21603169;

	t92 = (((x433+x434)<=x435)*x436);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x437 = INT16_MAX;
	int64_t x439 = 3488356913816198LL;
	uint16_t x440 = 138U;
	static int32_t t93 = -27;

	t93 = (((x437+x438)<=x439)*x440);

	if (t93 != 138) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x442 = 69286318610994LL;
	uint64_t x443 = UINT64_MAX;
	volatile uint32_t t94 = UINT32_MAX;

	t94 = (((x441+x442)<=x443)*x444);

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x449 = INT8_MIN;
	uint8_t x450 = 42U;
	volatile int8_t x451 = INT8_MIN;
	int8_t x452 = 1;
	int32_t t95 = 860304688;

	t95 = (((x449+x450)<=x451)*x452);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x453 = -1;
	volatile uint16_t x455 = UINT16_MAX;
	int64_t x456 = INT64_MAX;
	volatile int64_t t96 = 489447799409998LL;

	t96 = (((x453+x454)<=x455)*x456);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x460 = 3U;
	volatile int32_t t97 = 1705524;

	t97 = (((x457+x458)<=x459)*x460);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x461 = INT8_MIN;
	int16_t x462 = INT16_MIN;
	static uint8_t x463 = 16U;
	volatile int32_t t98 = 793;

	t98 = (((x461+x462)<=x463)*x464);

	if (t98 != -6708260) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x465 = -69430LL;
	static volatile int8_t x466 = -1;
	uint32_t x467 = UINT32_MAX;
	volatile int32_t t99 = -5796114;

	t99 = (((x465+x466)<=x467)*x468);

	if (t99 != 255) { NG(); } else { ; }
	
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


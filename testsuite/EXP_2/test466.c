#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = 409896;
uint8_t x11 = UINT8_MAX;
int8_t x12 = INT8_MIN;
int64_t x13 = -4341842135812215LL;
static int64_t x27 = -1LL;
int32_t t5 = -15845;
int16_t x29 = INT16_MAX;
static int8_t x38 = 7;
int64_t t7 = -3816762062116827936LL;
int8_t x50 = INT8_MAX;
uint32_t x54 = 1964292683U;
int8_t x56 = 19;
int8_t x76 = INT8_MAX;
static int8_t x79 = -41;
int32_t t13 = 35853800;
static int32_t x86 = INT32_MAX;
int16_t x90 = INT16_MIN;
int64_t x92 = 24479268LL;
static uint16_t x95 = 1112U;
int16_t x102 = INT16_MAX;
int16_t x103 = INT16_MIN;
int32_t t17 = 92587;
static volatile int64_t x108 = INT64_MAX;
int8_t x111 = 0;
int32_t x126 = INT32_MIN;
volatile int64_t x143 = 763088661406LL;
uint32_t x148 = 86U;
volatile uint32_t t27 = 7717U;
volatile uint64_t x161 = 22790738901376LLU;
int16_t x165 = -30;
uint32_t x166 = 5503998U;
uint16_t x168 = UINT16_MAX;
int8_t x169 = -59;
int8_t x184 = INT8_MIN;
static uint16_t x186 = 27229U;
volatile int8_t x187 = -8;
volatile int64_t x189 = 3LL;
static int64_t x228 = -1LL;
static int64_t x229 = -1LL;
volatile uint32_t x242 = 1907384U;
int32_t t44 = -475068;
static uint8_t x247 = 47U;
int8_t x249 = INT8_MIN;
static uint16_t x260 = 7U;
int32_t t48 = 1;
static uint16_t x276 = 6956U;
int64_t x278 = -2236829LL;
volatile uint8_t x290 = 0U;
volatile uint16_t x302 = 1U;
uint16_t x307 = UINT16_MAX;
uint64_t x319 = 631235518LLU;
uint32_t x321 = 1634117009U;
uint32_t x322 = 213U;
int32_t x324 = INT32_MAX;
int32_t t60 = -870727;
uint64_t t61 = 392LLU;
uint32_t x358 = 295779U;
int8_t x361 = -1;
int32_t t66 = 111;
uint64_t x378 = 406LLU;
uint64_t x384 = 210486LLU;
uint32_t x395 = 998516U;
uint64_t t72 = 9176LLU;
int64_t x404 = -4895455616LL;
uint16_t x410 = UINT16_MAX;
static volatile int32_t t75 = 1;
uint16_t x428 = 27243U;
static int8_t x434 = INT8_MAX;
static uint32_t x436 = 1472723415U;
int8_t x437 = INT8_MIN;
volatile int8_t x440 = -3;
uint64_t x448 = UINT64_MAX;
static int64_t x453 = -1731480898502528655LL;
volatile int8_t x459 = INT8_MIN;
int16_t x463 = 1027;
uint32_t t84 = 690974U;
static int16_t x470 = -17;
int32_t t86 = -2;
static volatile int16_t x481 = INT16_MAX;
volatile int32_t t89 = -616;
uint8_t x503 = 1U;
int32_t x504 = INT32_MAX;
int8_t x510 = INT8_MIN;
static int16_t x512 = 37;
static volatile int32_t t95 = 107915;
int16_t x513 = INT16_MIN;
volatile int32_t t97 = -22;
int64_t x535 = INT64_MAX;


void f0(void) {
	volatile int8_t x6 = INT8_MAX;
	int16_t x7 = -2849;
	int8_t x8 = -8;
	int32_t t0 = -2;

	t0 = ((x5<=(x6*x7))&x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MIN;
	volatile int32_t x10 = 5315066;
	int32_t t1 = 4824272;

	t1 = ((x9<=(x10*x11))&x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x14 = 53U;
	volatile uint64_t x15 = 85LLU;
	uint8_t x16 = 0U;
	int32_t t2 = -172;

	t2 = ((x13<=(x14*x15))&x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x17 = INT64_MIN;
	int16_t x18 = -4461;
	int8_t x19 = -1;
	int16_t x20 = INT16_MIN;
	int32_t t3 = 19670;

	t3 = ((x17<=(x18*x19))&x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = UINT32_MAX;
	int32_t x22 = -1;
	volatile uint32_t x23 = 48U;
	uint64_t x24 = UINT64_MAX;
	volatile uint64_t t4 = 270050244086996137LLU;

	t4 = ((x21<=(x22*x23))&x24);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x25 = UINT64_MAX;
	static uint8_t x26 = UINT8_MAX;
	int8_t x28 = -15;

	t5 = ((x25<=(x26*x27))&x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x30 = UINT32_MAX;
	int8_t x31 = -41;
	int8_t x32 = 1;
	static int32_t t6 = -22;

	t6 = ((x29<=(x30*x31))&x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x37 = INT16_MIN;
	static int32_t x39 = 116163;
	int64_t x40 = 19055LL;

	t7 = ((x37<=(x38*x39))&x40);

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x41 = UINT8_MAX;
	int64_t x42 = INT64_MIN;
	uint64_t x43 = 5786963621LLU;
	uint64_t x44 = UINT64_MAX;
	volatile uint64_t t8 = 106153337LLU;

	t8 = ((x41<=(x42*x43))&x44);

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = INT16_MAX;
	int16_t x51 = INT16_MIN;
	volatile int8_t x52 = INT8_MIN;
	int32_t t9 = -174620;

	t9 = ((x49<=(x50*x51))&x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x53 = INT16_MAX;
	int64_t x55 = -1LL;
	int32_t t10 = -52;

	t10 = ((x53<=(x54*x55))&x56);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x57 = INT64_MIN;
	volatile int16_t x58 = -15;
	uint32_t x59 = UINT32_MAX;
	uint32_t x60 = 216366111U;
	volatile uint32_t t11 = 0U;

	t11 = ((x57<=(x58*x59))&x60);

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x73 = 1565876;
	volatile int64_t x74 = -1LL;
	int32_t x75 = -4510399;
	static volatile int32_t t12 = 1;

	t12 = ((x73<=(x74*x75))&x76);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x77 = INT64_MAX;
	uint32_t x78 = UINT32_MAX;
	uint16_t x80 = 13092U;

	t13 = ((x77<=(x78*x79))&x80);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x85 = INT32_MIN;
	static uint64_t x87 = UINT64_MAX;
	uint64_t x88 = UINT64_MAX;
	static uint64_t t14 = 24774LLU;

	t14 = ((x85<=(x86*x87))&x88);

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x89 = INT32_MIN;
	int16_t x91 = 0;
	volatile int64_t t15 = -114671432561164831LL;

	t15 = ((x89<=(x90*x91))&x92);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x93 = INT32_MIN;
	uint64_t x94 = 419419001972037227LLU;
	volatile uint64_t x96 = 881887826986LLU;
	volatile uint64_t t16 = 90697LLU;

	t16 = ((x93<=(x94*x95))&x96);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x101 = INT64_MIN;
	int16_t x104 = -1;

	t17 = ((x101<=(x102*x103))&x104);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x105 = UINT8_MAX;
	static volatile uint64_t x106 = 57945937944642358LLU;
	uint64_t x107 = UINT64_MAX;
	static volatile int64_t t18 = -494448235LL;

	t18 = ((x105<=(x106*x107))&x108);

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x109 = 1U;
	int8_t x110 = -2;
	uint8_t x112 = UINT8_MAX;
	volatile int32_t t19 = -3403;

	t19 = ((x109<=(x110*x111))&x112);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x113 = -1LL;
	int64_t x114 = -57198618LL;
	int8_t x115 = INT8_MAX;
	static int64_t x116 = INT64_MAX;
	int64_t t20 = -87240390833116981LL;

	t20 = ((x113<=(x114*x115))&x116);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x117 = INT16_MAX;
	uint32_t x118 = UINT32_MAX;
	uint16_t x119 = 2U;
	int16_t x120 = -1;
	int32_t t21 = -5426798;

	t21 = ((x117<=(x118*x119))&x120);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x121 = INT32_MIN;
	static int16_t x122 = INT16_MIN;
	uint32_t x123 = 555U;
	static int64_t x124 = -1LL;
	int64_t t22 = -199LL;

	t22 = ((x121<=(x122*x123))&x124);

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x125 = 15783U;
	uint32_t x127 = 3U;
	int16_t x128 = -1;
	volatile int32_t t23 = 1;

	t23 = ((x125<=(x126*x127))&x128);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x133 = 1U;
	int32_t x134 = -1;
	uint64_t x135 = 21098387LLU;
	static uint64_t x136 = UINT64_MAX;
	uint64_t t24 = 548915915410485LLU;

	t24 = ((x133<=(x134*x135))&x136);

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x137 = 12596;
	volatile uint32_t x138 = UINT32_MAX;
	int32_t x139 = INT32_MIN;
	int32_t x140 = INT32_MAX;
	int32_t t25 = 17;

	t25 = ((x137<=(x138*x139))&x140);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x141 = -11452;
	uint16_t x142 = 12U;
	int8_t x144 = INT8_MIN;
	volatile int32_t t26 = 60462;

	t26 = ((x141<=(x142*x143))&x144);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x145 = 21U;
	int8_t x146 = 0;
	int16_t x147 = INT16_MIN;

	t27 = ((x145<=(x146*x147))&x148);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x153 = 7U;
	int64_t x154 = -1LL;
	int8_t x155 = -1;
	volatile int64_t x156 = INT64_MAX;
	volatile int64_t t28 = -12175LL;

	t28 = ((x153<=(x154*x155))&x156);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x157 = -1;
	int16_t x158 = INT16_MAX;
	int8_t x159 = -1;
	uint8_t x160 = 0U;
	int32_t t29 = 4696273;

	t29 = ((x157<=(x158*x159))&x160);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x162 = 1U;
	uint8_t x163 = 55U;
	int16_t x164 = -1;
	int32_t t30 = -430603829;

	t30 = ((x161<=(x162*x163))&x164);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x167 = 212710LLU;
	int32_t t31 = -537551;

	t31 = ((x165<=(x166*x167))&x168);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x170 = 1U;
	uint16_t x171 = 13034U;
	int32_t x172 = INT32_MIN;
	int32_t t32 = -1245;

	t32 = ((x169<=(x170*x171))&x172);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x181 = INT16_MAX;
	volatile uint64_t x182 = 12514949063209266LLU;
	int8_t x183 = INT8_MIN;
	volatile int32_t t33 = -55669767;

	t33 = ((x181<=(x182*x183))&x184);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x185 = 37U;
	int8_t x188 = -4;
	volatile int32_t t34 = -579424809;

	t34 = ((x185<=(x186*x187))&x188);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x190 = UINT64_MAX;
	volatile uint16_t x191 = UINT16_MAX;
	volatile uint32_t x192 = 207U;
	static volatile uint32_t t35 = 22349433U;

	t35 = ((x189<=(x190*x191))&x192);

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x197 = INT32_MIN;
	int16_t x198 = INT16_MIN;
	int64_t x199 = -2LL;
	static int16_t x200 = INT16_MIN;
	volatile int32_t t36 = -5;

	t36 = ((x197<=(x198*x199))&x200);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x201 = -426;
	volatile int8_t x202 = INT8_MIN;
	int16_t x203 = INT16_MAX;
	int64_t x204 = INT64_MIN;
	volatile int64_t t37 = 7052485LL;

	t37 = ((x201<=(x202*x203))&x204);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x209 = INT32_MIN;
	int8_t x210 = INT8_MIN;
	int8_t x211 = INT8_MIN;
	static volatile uint16_t x212 = 2248U;
	static int32_t t38 = 844;

	t38 = ((x209<=(x210*x211))&x212);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x213 = -394093065;
	uint8_t x214 = 6U;
	static int16_t x215 = -5;
	uint64_t x216 = 343809233165LLU;
	uint64_t t39 = 67008LLU;

	t39 = ((x213<=(x214*x215))&x216);

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x221 = 27U;
	uint32_t x222 = 1U;
	int8_t x223 = INT8_MIN;
	int64_t x224 = 6730107228524524LL;
	volatile int64_t t40 = -1337958453437LL;

	t40 = ((x221<=(x222*x223))&x224);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x225 = UINT64_MAX;
	int8_t x226 = -1;
	int8_t x227 = -1;
	volatile int64_t t41 = -9054571LL;

	t41 = ((x225<=(x226*x227))&x228);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x230 = UINT8_MAX;
	int16_t x231 = INT16_MAX;
	int64_t x232 = 93639LL;
	volatile int64_t t42 = -2LL;

	t42 = ((x229<=(x230*x231))&x232);

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x237 = 117261U;
	static uint16_t x238 = 9U;
	uint8_t x239 = 1U;
	static int32_t x240 = 314248315;
	volatile int32_t t43 = 741393477;

	t43 = ((x237<=(x238*x239))&x240);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x241 = 108U;
	static uint16_t x243 = 6U;
	int32_t x244 = INT32_MAX;

	t44 = ((x241<=(x242*x243))&x244);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x245 = 169227423110647644LLU;
	int8_t x246 = -1;
	int8_t x248 = INT8_MIN;
	int32_t t45 = 7306251;

	t45 = ((x245<=(x246*x247))&x248);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x250 = UINT32_MAX;
	volatile int16_t x251 = 3;
	uint64_t x252 = UINT64_MAX;
	static volatile uint64_t t46 = 26277136953LLU;

	t46 = ((x249<=(x250*x251))&x252);

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x253 = 0;
	volatile int8_t x254 = INT8_MIN;
	int16_t x255 = INT16_MIN;
	static int16_t x256 = INT16_MIN;
	int32_t t47 = -11358380;

	t47 = ((x253<=(x254*x255))&x256);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x257 = 1;
	uint32_t x258 = UINT32_MAX;
	uint8_t x259 = 99U;

	t48 = ((x257<=(x258*x259))&x260);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x269 = INT64_MIN;
	static uint16_t x270 = 3580U;
	int64_t x271 = 19864938314304LL;
	int8_t x272 = -9;
	volatile int32_t t49 = 122538798;

	t49 = ((x269<=(x270*x271))&x272);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x273 = 2U;
	uint16_t x274 = UINT16_MAX;
	volatile uint32_t x275 = 24U;
	int32_t t50 = 83;

	t50 = ((x273<=(x274*x275))&x276);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x277 = -4;
	uint64_t x279 = UINT64_MAX;
	static int32_t x280 = INT32_MIN;
	static int32_t t51 = -8391;

	t51 = ((x277<=(x278*x279))&x280);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x285 = -166;
	static uint32_t x286 = 7712361U;
	uint32_t x287 = 54470U;
	static uint64_t x288 = 508LLU;
	uint64_t t52 = 6659050971898126LLU;

	t52 = ((x285<=(x286*x287))&x288);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x289 = 17948U;
	uint8_t x291 = 12U;
	static int64_t x292 = -1LL;
	int64_t t53 = 24916015LL;

	t53 = ((x289<=(x290*x291))&x292);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x297 = 137U;
	volatile int16_t x298 = 28;
	uint64_t x299 = 393LLU;
	int8_t x300 = INT8_MIN;
	volatile int32_t t54 = 11;

	t54 = ((x297<=(x298*x299))&x300);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x301 = INT32_MIN;
	uint8_t x303 = 7U;
	static int64_t x304 = INT64_MIN;
	int64_t t55 = 7990302850878757LL;

	t55 = ((x301<=(x302*x303))&x304);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x305 = 24U;
	volatile uint32_t x306 = UINT32_MAX;
	volatile int16_t x308 = -458;
	volatile int32_t t56 = -1;

	t56 = ((x305<=(x306*x307))&x308);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x313 = UINT64_MAX;
	int32_t x314 = INT32_MIN;
	static int8_t x315 = 1;
	static volatile int64_t x316 = INT64_MIN;
	int64_t t57 = 849931775852984LL;

	t57 = ((x313<=(x314*x315))&x316);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x317 = INT8_MIN;
	int16_t x318 = -1;
	static int8_t x320 = 3;
	int32_t t58 = 0;

	t58 = ((x317<=(x318*x319))&x320);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x323 = INT32_MIN;
	static int32_t t59 = -9;

	t59 = ((x321<=(x322*x323))&x324);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x325 = INT64_MIN;
	int16_t x326 = -1;
	int64_t x327 = -8236051612227LL;
	uint16_t x328 = 4116U;

	t60 = ((x325<=(x326*x327))&x328);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x329 = 34762966LLU;
	uint64_t x330 = 3752045LLU;
	uint32_t x331 = 8U;
	uint64_t x332 = UINT64_MAX;

	t61 = ((x329<=(x330*x331))&x332);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x333 = 11U;
	static int32_t x334 = 175;
	uint8_t x335 = UINT8_MAX;
	static volatile uint16_t x336 = 16U;
	static int32_t t62 = 8;

	t62 = ((x333<=(x334*x335))&x336);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x353 = -1;
	int8_t x354 = -3;
	uint16_t x355 = 3258U;
	static uint8_t x356 = 1U;
	int32_t t63 = -923;

	t63 = ((x353<=(x354*x355))&x356);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x357 = -1;
	static int8_t x359 = INT8_MAX;
	int32_t x360 = INT32_MIN;
	volatile int32_t t64 = -25587138;

	t64 = ((x357<=(x358*x359))&x360);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x362 = INT16_MIN;
	static int32_t x363 = -3327;
	int64_t x364 = INT64_MIN;
	int64_t t65 = 3984018061LL;

	t65 = ((x361<=(x362*x363))&x364);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x365 = INT32_MAX;
	int64_t x366 = -28932852LL;
	static volatile int8_t x367 = -1;
	int16_t x368 = INT16_MIN;

	t66 = ((x365<=(x366*x367))&x368);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x369 = -5;
	static volatile uint64_t x370 = UINT64_MAX;
	int8_t x371 = 0;
	uint8_t x372 = UINT8_MAX;
	volatile int32_t t67 = -43;

	t67 = ((x369<=(x370*x371))&x372);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x373 = 9LLU;
	int64_t x374 = 20LL;
	int32_t x375 = INT32_MAX;
	uint32_t x376 = 2233824U;
	uint32_t t68 = 667513545U;

	t68 = ((x373<=(x374*x375))&x376);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x377 = 11024;
	int64_t x379 = INT64_MIN;
	static volatile int64_t x380 = 0LL;
	volatile int64_t t69 = 3185504341193848006LL;

	t69 = ((x377<=(x378*x379))&x380);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x381 = -1;
	static int16_t x382 = INT16_MIN;
	static volatile uint32_t x383 = UINT32_MAX;
	volatile uint64_t t70 = 7190LLU;

	t70 = ((x381<=(x382*x383))&x384);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x385 = -1;
	int16_t x386 = INT16_MIN;
	uint32_t x387 = 12U;
	int32_t x388 = 109;
	int32_t t71 = -601551343;

	t71 = ((x385<=(x386*x387))&x388);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x393 = UINT16_MAX;
	uint64_t x394 = 511927624299LLU;
	static volatile uint64_t x396 = UINT64_MAX;

	t72 = ((x393<=(x394*x395))&x396);

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x397 = UINT16_MAX;
	static uint32_t x398 = 7414876U;
	int16_t x399 = INT16_MIN;
	volatile int16_t x400 = INT16_MAX;
	volatile int32_t t73 = -311;

	t73 = ((x397<=(x398*x399))&x400);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x401 = -67749996730LL;
	static int16_t x402 = INT16_MAX;
	static int8_t x403 = INT8_MIN;
	volatile int64_t t74 = -4130021762195012LL;

	t74 = ((x401<=(x402*x403))&x404);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x409 = INT16_MIN;
	int64_t x411 = 1LL;
	int16_t x412 = -160;

	t75 = ((x409<=(x410*x411))&x412);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x413 = -1;
	uint16_t x414 = UINT16_MAX;
	uint32_t x415 = 30U;
	int8_t x416 = 1;
	int32_t t76 = 221;

	t76 = ((x413<=(x414*x415))&x416);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x421 = 8294886508942LLU;
	volatile uint16_t x422 = 4377U;
	static int32_t x423 = -28302;
	int16_t x424 = INT16_MIN;
	static volatile int32_t t77 = 394362;

	t77 = ((x421<=(x422*x423))&x424);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x425 = INT16_MIN;
	int16_t x426 = INT16_MAX;
	volatile int32_t x427 = -1;
	int32_t t78 = -14;

	t78 = ((x425<=(x426*x427))&x428);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x433 = 90163U;
	uint32_t x435 = UINT32_MAX;
	uint32_t t79 = 550852959U;

	t79 = ((x433<=(x434*x435))&x436);

	if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x438 = 14731837U;
	static volatile int8_t x439 = INT8_MIN;
	int32_t t80 = -3239;

	t80 = ((x437<=(x438*x439))&x440);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x445 = INT32_MIN;
	int32_t x446 = 0;
	volatile int64_t x447 = INT64_MIN;
	volatile uint64_t t81 = 27LLU;

	t81 = ((x445<=(x446*x447))&x448);

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x454 = INT64_MAX;
	int8_t x455 = -1;
	uint8_t x456 = 15U;
	int32_t t82 = -3179786;

	t82 = ((x453<=(x454*x455))&x456);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x457 = UINT32_MAX;
	static int16_t x458 = INT16_MIN;
	uint16_t x460 = UINT16_MAX;
	int32_t t83 = -18;

	t83 = ((x457<=(x458*x459))&x460);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x461 = INT8_MIN;
	int16_t x462 = INT16_MAX;
	static uint32_t x464 = 7542U;

	t84 = ((x461<=(x462*x463))&x464);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x469 = UINT64_MAX;
	uint16_t x471 = 1U;
	static int64_t x472 = -4146162658LL;
	volatile int64_t t85 = -935354283561865LL;

	t85 = ((x469<=(x470*x471))&x472);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x473 = INT16_MAX;
	static uint8_t x474 = 3U;
	int16_t x475 = 192;
	int16_t x476 = INT16_MIN;

	t86 = ((x473<=(x474*x475))&x476);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x477 = 114593349907683LLU;
	uint32_t x478 = 271533744U;
	static uint64_t x479 = 158183619LLU;
	volatile int8_t x480 = INT8_MIN;
	volatile int32_t t87 = 1;

	t87 = ((x477<=(x478*x479))&x480);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x482 = -1;
	static uint64_t x483 = 1879720029095094063LLU;
	int8_t x484 = INT8_MIN;
	int32_t t88 = -4159666;

	t88 = ((x481<=(x482*x483))&x484);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x485 = -1;
	int8_t x486 = INT8_MIN;
	int8_t x487 = -30;
	volatile int8_t x488 = INT8_MIN;

	t89 = ((x485<=(x486*x487))&x488);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x489 = 1LL;
	uint16_t x490 = UINT16_MAX;
	uint64_t x491 = 31006454LLU;
	static uint8_t x492 = 2U;
	int32_t t90 = -2180767;

	t90 = ((x489<=(x490*x491))&x492);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x493 = 108574412U;
	int16_t x494 = -1;
	int32_t x495 = INT32_MAX;
	volatile int32_t x496 = -229;
	volatile int32_t t91 = 237613;

	t91 = ((x493<=(x494*x495))&x496);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x497 = INT32_MIN;
	static int8_t x498 = -1;
	int16_t x499 = INT16_MIN;
	volatile int64_t x500 = -1909575864867811474LL;
	volatile int64_t t92 = -11082209323032LL;

	t92 = ((x497<=(x498*x499))&x500);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x501 = -13684;
	static volatile int32_t x502 = INT32_MIN;
	volatile int32_t t93 = 46;

	t93 = ((x501<=(x502*x503))&x504);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x505 = 328152168069943LLU;
	uint32_t x506 = 2U;
	uint64_t x507 = 15472175978074283LLU;
	int16_t x508 = -1;
	static volatile int32_t t94 = 67;

	t94 = ((x505<=(x506*x507))&x508);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x509 = INT8_MIN;
	int8_t x511 = INT8_MIN;

	t95 = ((x509<=(x510*x511))&x512);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x514 = -1LL;
	static uint64_t x515 = 14133137618LLU;
	uint64_t x516 = 107589288526595LLU;
	uint64_t t96 = 26934584664133841LLU;

	t96 = ((x513<=(x514*x515))&x516);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x517 = INT64_MIN;
	volatile int32_t x518 = 342975;
	int32_t x519 = -1;
	int32_t x520 = 1783;

	t97 = ((x517<=(x518*x519))&x520);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x521 = INT64_MAX;
	int8_t x522 = 24;
	int32_t x523 = 303;
	static uint64_t x524 = UINT64_MAX;
	volatile uint64_t t98 = 2120041344013LLU;

	t98 = ((x521<=(x522*x523))&x524);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x533 = -1LL;
	volatile int32_t x534 = -1;
	int8_t x536 = INT8_MIN;
	int32_t t99 = -479864513;

	t99 = ((x533<=(x534*x535))&x536);

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


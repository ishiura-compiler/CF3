#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t3 = 54;
uint32_t x39 = UINT32_MAX;
int16_t x43 = INT16_MIN;
volatile uint32_t x48 = UINT32_MAX;
volatile int32_t t6 = -2;
static int32_t x52 = INT32_MIN;
uint8_t x54 = 31U;
int32_t x56 = 2770100;
uint64_t x63 = 8706372213658LLU;
int16_t x69 = -1;
volatile int32_t t10 = 0;
int16_t x74 = -1;
int32_t x89 = -82406;
int16_t x90 = 0;
volatile int32_t x92 = INT32_MAX;
static int32_t t13 = 61628576;
uint8_t x95 = UINT8_MAX;
volatile int32_t t15 = -629;
volatile uint64_t x105 = UINT64_MAX;
volatile uint32_t x106 = 2074617089U;
uint8_t x107 = 0U;
volatile uint64_t x116 = 13283219579056651LLU;
volatile int32_t t18 = -28929611;
volatile uint16_t x122 = 11U;
volatile int16_t x123 = INT16_MAX;
static int16_t x128 = INT16_MIN;
volatile int32_t t23 = 1;
int16_t x138 = INT16_MIN;
static uint8_t x145 = UINT8_MAX;
int64_t x161 = INT64_MAX;
volatile int32_t x185 = 868;
int32_t x195 = -188;
static volatile int8_t x196 = INT8_MIN;
int8_t x198 = -46;
volatile int16_t x202 = INT16_MIN;
int8_t x219 = INT8_MIN;
volatile int32_t t38 = 108;
int8_t x233 = INT8_MIN;
volatile int64_t x240 = -1LL;
uint16_t x242 = 0U;
int32_t x244 = -1;
static int32_t t44 = -104268908;
volatile int32_t t45 = -2;
uint16_t x256 = UINT16_MAX;
static int32_t x259 = 1;
static int8_t x271 = -1;
static int32_t t49 = -24;
int16_t x277 = -457;
volatile int32_t t50 = 60836490;
int32_t t51 = -28548806;
int32_t x288 = INT32_MAX;
uint64_t x292 = 108373LLU;
int32_t t54 = 527712;
volatile int64_t x313 = INT64_MIN;
int32_t t59 = -1396;
static int16_t x337 = -1;
int8_t x343 = INT8_MIN;
uint16_t x345 = UINT16_MAX;
uint8_t x346 = UINT8_MAX;
volatile int32_t x347 = 14;
uint8_t x348 = 59U;
volatile int32_t t63 = 7577344;
volatile int32_t t65 = -3334;
static uint32_t x365 = UINT32_MAX;
static int16_t x369 = -1;
static int32_t t68 = 14420589;
static uint8_t x375 = 1U;
volatile int32_t t69 = 17140;
static int16_t x378 = INT16_MIN;
volatile int32_t t70 = 3505896;
uint16_t x383 = 1U;
volatile int16_t x389 = INT16_MIN;
int16_t x392 = INT16_MIN;
static int32_t x394 = INT32_MIN;
int16_t x396 = -525;
int16_t x397 = INT16_MIN;
int16_t x398 = INT16_MIN;
int16_t x399 = INT16_MIN;
int16_t x401 = -1;
uint32_t x403 = 16994390U;
int8_t x409 = -1;
uint8_t x410 = UINT8_MAX;
int64_t x412 = INT64_MIN;
volatile uint16_t x425 = 1427U;
int16_t x429 = INT16_MIN;
int32_t t80 = -141;
uint64_t x434 = UINT64_MAX;
volatile int32_t t81 = 820;
int16_t x439 = -1;
static volatile int32_t t83 = 257997;
int32_t t84 = 261288;
int32_t x454 = -1;
int32_t t85 = 7616;
int32_t x464 = -1;
volatile int32_t t87 = 32670849;
uint64_t x466 = 5972LLU;
uint16_t x468 = 66U;
volatile int32_t t88 = 43938466;
int32_t x471 = INT32_MAX;
static int16_t x472 = -1;
uint16_t x476 = UINT16_MAX;
static int16_t x483 = -1;
int32_t x486 = 1;
int16_t x497 = -775;
static uint16_t x505 = 21637U;
int32_t x524 = -5;


void f0(void) {
	int16_t x1 = 8483;
	int16_t x2 = INT16_MIN;
	static int16_t x3 = 77;
	int16_t x4 = -1;
	volatile int32_t t0 = -938546804;

	t0 = (x1<((x2*x3)+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x5 = INT8_MIN;
	volatile int64_t x6 = 760034057912LL;
	int16_t x7 = INT16_MAX;
	uint8_t x8 = 22U;
	volatile int32_t t1 = 18789;

	t1 = (x5<((x6*x7)+x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x25 = INT64_MIN;
	volatile int8_t x26 = INT8_MIN;
	uint32_t x27 = 374865115U;
	volatile int64_t x28 = 153010730LL;
	int32_t t2 = -4;

	t2 = (x25<((x26*x27)+x28));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x29 = INT8_MAX;
	int32_t x30 = -1;
	volatile uint32_t x31 = UINT32_MAX;
	uint32_t x32 = 628758653U;

	t3 = (x29<((x30*x31)+x32));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x37 = 1;
	int32_t x38 = -1;
	int16_t x40 = INT16_MAX;
	int32_t t4 = 184176717;

	t4 = (x37<((x38*x39)+x40));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x41 = -208;
	int16_t x42 = 7;
	int8_t x44 = 1;
	int32_t t5 = -1354107;

	t5 = (x41<((x42*x43)+x44));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x45 = UINT16_MAX;
	uint64_t x46 = 52048562225693194LLU;
	int32_t x47 = -3800043;

	t6 = (x45<((x46*x47)+x48));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x49 = -4903;
	int64_t x50 = -1615062464LL;
	int16_t x51 = INT16_MIN;
	volatile int32_t t7 = 337;

	t7 = (x49<((x50*x51)+x52));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x53 = INT32_MAX;
	static int16_t x55 = INT16_MIN;
	int32_t t8 = 2;

	t8 = (x53<((x54*x55)+x56));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x61 = UINT64_MAX;
	int8_t x62 = 48;
	static int32_t x64 = INT32_MIN;
	static volatile int32_t t9 = 20413066;

	t9 = (x61<((x62*x63)+x64));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x70 = UINT16_MAX;
	uint64_t x71 = UINT64_MAX;
	int32_t x72 = INT32_MIN;

	t10 = (x69<((x70*x71)+x72));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x73 = 177LL;
	int16_t x75 = INT16_MIN;
	static uint8_t x76 = 1U;
	int32_t t11 = -1662;

	t11 = (x73<((x74*x75)+x76));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x81 = -1;
	static uint64_t x82 = UINT64_MAX;
	static int8_t x83 = -56;
	int32_t x84 = -59;
	int32_t t12 = 2057;

	t12 = (x81<((x82*x83)+x84));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x91 = 753294;

	t13 = (x89<((x90*x91)+x92));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x93 = INT8_MAX;
	volatile uint16_t x94 = UINT16_MAX;
	int64_t x96 = 3220662LL;
	int32_t t14 = -504025;

	t14 = (x93<((x94*x95)+x96));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x101 = UINT16_MAX;
	uint64_t x102 = UINT64_MAX;
	static uint8_t x103 = 3U;
	volatile int32_t x104 = -38510459;

	t15 = (x101<((x102*x103)+x104));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x108 = -759;
	static int32_t t16 = -377070284;

	t16 = (x105<((x106*x107)+x108));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x109 = 0;
	int64_t x110 = 89743867127742LL;
	int32_t x111 = -1;
	volatile int32_t x112 = INT32_MIN;
	volatile int32_t t17 = 8279447;

	t17 = (x109<((x110*x111)+x112));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x113 = -172;
	static int32_t x114 = -1;
	int8_t x115 = INT8_MAX;

	t18 = (x113<((x114*x115)+x116));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x117 = 459U;
	volatile int8_t x118 = INT8_MIN;
	int16_t x119 = 7989;
	int8_t x120 = INT8_MAX;
	int32_t t19 = -224;

	t19 = (x117<((x118*x119)+x120));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x121 = 1297943LLU;
	int64_t x124 = -394845592205808LL;
	int32_t t20 = -15364;

	t20 = (x121<((x122*x123)+x124));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x125 = INT64_MIN;
	static volatile int8_t x126 = 32;
	volatile uint64_t x127 = 201LLU;
	int32_t t21 = 7229287;

	t21 = (x125<((x126*x127)+x128));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x129 = INT32_MIN;
	int32_t x130 = -1;
	volatile int64_t x131 = -105848456819LL;
	static int16_t x132 = -403;
	int32_t t22 = 7928614;

	t22 = (x129<((x130*x131)+x132));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x133 = 210684525342LLU;
	static uint32_t x134 = 1024080727U;
	static int32_t x135 = 3539445;
	int64_t x136 = INT64_MIN;

	t23 = (x133<((x134*x135)+x136));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x137 = UINT16_MAX;
	uint16_t x139 = 15U;
	int64_t x140 = -1LL;
	volatile int32_t t24 = 0;

	t24 = (x137<((x138*x139)+x140));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x141 = UINT32_MAX;
	int16_t x142 = -1;
	uint32_t x143 = UINT32_MAX;
	volatile uint16_t x144 = 25237U;
	volatile int32_t t25 = -1050240433;

	t25 = (x141<((x142*x143)+x144));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x146 = UINT64_MAX;
	int16_t x147 = INT16_MIN;
	int64_t x148 = 20849202616376LL;
	int32_t t26 = 1;

	t26 = (x145<((x146*x147)+x148));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x153 = 637LL;
	int16_t x154 = 28;
	static uint8_t x155 = 113U;
	int32_t x156 = INT32_MIN;
	volatile int32_t t27 = 227344982;

	t27 = (x153<((x154*x155)+x156));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x157 = 2U;
	int16_t x158 = INT16_MAX;
	volatile int16_t x159 = INT16_MIN;
	int16_t x160 = INT16_MAX;
	volatile int32_t t28 = -679;

	t28 = (x157<((x158*x159)+x160));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x162 = 3U;
	static int8_t x163 = -1;
	uint8_t x164 = 64U;
	volatile int32_t t29 = 0;

	t29 = (x161<((x162*x163)+x164));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x165 = 13;
	static uint64_t x166 = UINT64_MAX;
	int64_t x167 = INT64_MIN;
	int32_t x168 = INT32_MIN;
	volatile int32_t t30 = 0;

	t30 = (x165<((x166*x167)+x168));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x169 = INT8_MAX;
	uint64_t x170 = UINT64_MAX;
	static volatile int64_t x171 = INT64_MIN;
	static int8_t x172 = INT8_MIN;
	int32_t t31 = -1;

	t31 = (x169<((x170*x171)+x172));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x173 = 0U;
	volatile uint16_t x174 = 39U;
	int8_t x175 = INT8_MIN;
	static uint16_t x176 = UINT16_MAX;
	volatile int32_t t32 = -374;

	t32 = (x173<((x174*x175)+x176));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x181 = 10U;
	static uint64_t x182 = 741052LLU;
	int64_t x183 = INT64_MAX;
	volatile int32_t x184 = INT32_MAX;
	int32_t t33 = -1345;

	t33 = (x181<((x182*x183)+x184));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x186 = 163LLU;
	int16_t x187 = -1;
	int16_t x188 = -1;
	volatile int32_t t34 = 305148670;

	t34 = (x185<((x186*x187)+x188));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x193 = INT8_MAX;
	static int8_t x194 = -1;
	static volatile int32_t t35 = 4158737;

	t35 = (x193<((x194*x195)+x196));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x197 = UINT8_MAX;
	int16_t x199 = 87;
	volatile uint16_t x200 = 21109U;
	int32_t t36 = 1056138760;

	t36 = (x197<((x198*x199)+x200));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x201 = -17;
	int32_t x203 = -55356;
	int8_t x204 = -1;
	volatile int32_t t37 = -43428074;

	t37 = (x201<((x202*x203)+x204));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x217 = 80U;
	volatile uint16_t x218 = 0U;
	int8_t x220 = 4;

	t38 = (x217<((x218*x219)+x220));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x221 = 421145;
	static int16_t x222 = 1;
	uint16_t x223 = UINT16_MAX;
	static int8_t x224 = INT8_MIN;
	int32_t t39 = 7136;

	t39 = (x221<((x222*x223)+x224));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x225 = 63036670824696LLU;
	int16_t x226 = INT16_MIN;
	int16_t x227 = INT16_MIN;
	static volatile int16_t x228 = INT16_MAX;
	volatile int32_t t40 = 2;

	t40 = (x225<((x226*x227)+x228));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x229 = INT16_MAX;
	int8_t x230 = -1;
	int8_t x231 = 0;
	static uint16_t x232 = 5U;
	int32_t t41 = 116;

	t41 = (x229<((x230*x231)+x232));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x234 = -1;
	int8_t x235 = INT8_MAX;
	static int16_t x236 = -1;
	int32_t t42 = -349;

	t42 = (x233<((x234*x235)+x236));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x237 = 8U;
	int8_t x238 = -13;
	int32_t x239 = 92;
	volatile int32_t t43 = -1;

	t43 = (x237<((x238*x239)+x240));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x241 = -1LL;
	int32_t x243 = -96986074;

	t44 = (x241<((x242*x243)+x244));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x245 = INT8_MIN;
	int64_t x246 = INT64_MIN;
	volatile uint64_t x247 = 24038853LLU;
	uint16_t x248 = 525U;

	t45 = (x245<((x246*x247)+x248));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x253 = -1054026560072664389LL;
	static volatile int8_t x254 = INT8_MIN;
	static volatile int16_t x255 = 1;
	volatile int32_t t46 = 78152;

	t46 = (x253<((x254*x255)+x256));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x257 = -31;
	static uint16_t x258 = 19U;
	uint8_t x260 = 0U;
	static int32_t t47 = -272150;

	t47 = (x257<((x258*x259)+x260));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x261 = INT32_MIN;
	volatile int16_t x262 = INT16_MAX;
	uint8_t x263 = UINT8_MAX;
	int64_t x264 = -1LL;
	volatile int32_t t48 = 1115199;

	t48 = (x261<((x262*x263)+x264));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x269 = -29365835612934LL;
	static volatile uint32_t x270 = UINT32_MAX;
	uint64_t x272 = 2047384LLU;

	t49 = (x269<((x270*x271)+x272));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x278 = INT8_MIN;
	volatile int16_t x279 = -312;
	uint16_t x280 = 4U;

	t50 = (x277<((x278*x279)+x280));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x281 = INT32_MAX;
	int16_t x282 = -1;
	uint64_t x283 = UINT64_MAX;
	int64_t x284 = INT64_MIN;

	t51 = (x281<((x282*x283)+x284));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x285 = INT32_MIN;
	uint64_t x286 = 34LLU;
	int64_t x287 = 3LL;
	volatile int32_t t52 = -34646;

	t52 = (x285<((x286*x287)+x288));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x289 = 6078582856245007545LLU;
	int8_t x290 = INT8_MAX;
	static volatile uint64_t x291 = UINT64_MAX;
	int32_t t53 = -1;

	t53 = (x289<((x290*x291)+x292));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x293 = INT32_MIN;
	int16_t x294 = -1;
	volatile uint64_t x295 = UINT64_MAX;
	static int16_t x296 = INT16_MAX;

	t54 = (x293<((x294*x295)+x296));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x297 = INT64_MIN;
	int8_t x298 = INT8_MIN;
	uint32_t x299 = 8310002U;
	uint8_t x300 = 0U;
	int32_t t55 = 0;

	t55 = (x297<((x298*x299)+x300));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x305 = INT64_MIN;
	int32_t x306 = -833;
	int8_t x307 = INT8_MIN;
	volatile uint16_t x308 = 6U;
	static int32_t t56 = -3;

	t56 = (x305<((x306*x307)+x308));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x314 = 0U;
	volatile int16_t x315 = -13;
	volatile int32_t x316 = INT32_MAX;
	volatile int32_t t57 = -8;

	t57 = (x313<((x314*x315)+x316));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x317 = UINT32_MAX;
	static volatile uint64_t x318 = 123562880897LLU;
	uint64_t x319 = UINT64_MAX;
	volatile int64_t x320 = INT64_MAX;
	volatile int32_t t58 = -83192;

	t58 = (x317<((x318*x319)+x320));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x321 = INT8_MAX;
	int32_t x322 = INT32_MIN;
	int64_t x323 = 0LL;
	int16_t x324 = INT16_MIN;

	t59 = (x321<((x322*x323)+x324));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x329 = 14U;
	int32_t x330 = 1;
	int32_t x331 = INT32_MIN;
	volatile int16_t x332 = INT16_MAX;
	static volatile int32_t t60 = -405;

	t60 = (x329<((x330*x331)+x332));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x338 = 418U;
	static uint32_t x339 = 1348U;
	static int16_t x340 = INT16_MAX;
	int32_t t61 = -10;

	t61 = (x337<((x338*x339)+x340));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x341 = 42815046U;
	int32_t x342 = -100757;
	volatile int16_t x344 = 1750;
	int32_t t62 = -26;

	t62 = (x341<((x342*x343)+x344));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {


	t63 = (x345<((x346*x347)+x348));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x349 = 58;
	volatile uint32_t x350 = UINT32_MAX;
	volatile uint64_t x351 = 1773317911970LLU;
	volatile uint8_t x352 = 0U;
	volatile int32_t t64 = 454900330;

	t64 = (x349<((x350*x351)+x352));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x353 = INT16_MAX;
	uint32_t x354 = 5910U;
	volatile uint64_t x355 = 22241518077LLU;
	int32_t x356 = INT32_MIN;

	t65 = (x353<((x354*x355)+x356));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x357 = -7;
	int16_t x358 = INT16_MIN;
	uint64_t x359 = UINT64_MAX;
	int8_t x360 = INT8_MAX;
	volatile int32_t t66 = -203655374;

	t66 = (x357<((x358*x359)+x360));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x366 = 3;
	volatile int8_t x367 = INT8_MAX;
	volatile int64_t x368 = -81773325689003LL;
	int32_t t67 = -15251;

	t67 = (x365<((x366*x367)+x368));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x370 = UINT8_MAX;
	static uint64_t x371 = UINT64_MAX;
	uint32_t x372 = UINT32_MAX;

	t68 = (x369<((x370*x371)+x372));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x373 = INT64_MIN;
	volatile int16_t x374 = INT16_MIN;
	uint16_t x376 = UINT16_MAX;

	t69 = (x373<((x374*x375)+x376));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x377 = INT32_MAX;
	volatile int16_t x379 = INT16_MIN;
	int32_t x380 = 28;

	t70 = (x377<((x378*x379)+x380));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x381 = 1U;
	static int64_t x382 = -1LL;
	static uint32_t x384 = 0U;
	static volatile int32_t t71 = 4711;

	t71 = (x381<((x382*x383)+x384));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x390 = 34;
	int32_t x391 = -1;
	int32_t t72 = 1831;

	t72 = (x389<((x390*x391)+x392));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x393 = 1U;
	uint64_t x395 = UINT64_MAX;
	static int32_t t73 = -1007;

	t73 = (x393<((x394*x395)+x396));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x400 = INT8_MIN;
	static volatile int32_t t74 = 15;

	t74 = (x397<((x398*x399)+x400));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x402 = 1U;
	int8_t x404 = INT8_MIN;
	volatile int32_t t75 = -2;

	t75 = (x401<((x402*x403)+x404));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x405 = INT16_MIN;
	uint8_t x406 = UINT8_MAX;
	uint32_t x407 = 49589U;
	int8_t x408 = INT8_MIN;
	int32_t t76 = 3524;

	t76 = (x405<((x406*x407)+x408));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x411 = UINT8_MAX;
	int32_t t77 = 490;

	t77 = (x409<((x410*x411)+x412));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x417 = 468;
	int8_t x418 = 8;
	static int64_t x419 = -1LL;
	static uint32_t x420 = 118U;
	volatile int32_t t78 = 502;

	t78 = (x417<((x418*x419)+x420));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x426 = -8747493;
	uint8_t x427 = 9U;
	uint8_t x428 = UINT8_MAX;
	volatile int32_t t79 = 28122;

	t79 = (x425<((x426*x427)+x428));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x430 = 1461061725649LLU;
	int64_t x431 = INT64_MAX;
	int32_t x432 = INT32_MIN;

	t80 = (x429<((x430*x431)+x432));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x433 = INT32_MIN;
	int32_t x435 = INT32_MIN;
	volatile int32_t x436 = INT32_MIN;

	t81 = (x433<((x434*x435)+x436));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x437 = -1LL;
	volatile uint64_t x438 = 3685113672035536314LLU;
	static uint8_t x440 = 1U;
	int32_t t82 = -146608;

	t82 = (x437<((x438*x439)+x440));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x441 = UINT8_MAX;
	uint32_t x442 = 1992885U;
	int8_t x443 = INT8_MIN;
	uint64_t x444 = UINT64_MAX;

	t83 = (x441<((x442*x443)+x444));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x449 = INT32_MAX;
	uint64_t x450 = 10103817617LLU;
	static int8_t x451 = INT8_MAX;
	int8_t x452 = INT8_MIN;

	t84 = (x449<((x450*x451)+x452));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x453 = -1;
	int8_t x455 = INT8_MIN;
	int16_t x456 = -1;

	t85 = (x453<((x454*x455)+x456));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x457 = INT32_MIN;
	uint8_t x458 = 24U;
	uint16_t x459 = 13U;
	static volatile int64_t x460 = -1LL;
	int32_t t86 = 38503807;

	t86 = (x457<((x458*x459)+x460));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x461 = INT16_MIN;
	volatile int8_t x462 = INT8_MIN;
	int16_t x463 = INT16_MIN;

	t87 = (x461<((x462*x463)+x464));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x465 = UINT32_MAX;
	static int64_t x467 = 17139414909LL;

	t88 = (x465<((x466*x467)+x468));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x469 = 121847821U;
	uint8_t x470 = 0U;
	volatile int32_t t89 = 888470;

	t89 = (x469<((x470*x471)+x472));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x473 = INT32_MIN;
	uint8_t x474 = 3U;
	uint32_t x475 = UINT32_MAX;
	volatile int32_t t90 = -46;

	t90 = (x473<((x474*x475)+x476));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x481 = 146551989642806LL;
	int16_t x482 = -1;
	int32_t x484 = 168;
	static int32_t t91 = -34;

	t91 = (x481<((x482*x483)+x484));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x485 = INT64_MIN;
	static uint16_t x487 = 6U;
	uint8_t x488 = UINT8_MAX;
	volatile int32_t t92 = -3476210;

	t92 = (x485<((x486*x487)+x488));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x498 = UINT32_MAX;
	uint8_t x499 = 101U;
	int32_t x500 = 745179;
	volatile int32_t t93 = 27;

	t93 = (x497<((x498*x499)+x500));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x501 = 14446696U;
	volatile int32_t x502 = INT32_MAX;
	uint64_t x503 = 53LLU;
	int16_t x504 = INT16_MIN;
	volatile int32_t t94 = 0;

	t94 = (x501<((x502*x503)+x504));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x506 = -1;
	static uint32_t x507 = 63U;
	volatile int32_t x508 = INT32_MIN;
	volatile int32_t t95 = 113328;

	t95 = (x505<((x506*x507)+x508));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x509 = INT64_MAX;
	uint64_t x510 = UINT64_MAX;
	static int64_t x511 = -1LL;
	uint32_t x512 = 13938U;
	int32_t t96 = 60;

	t96 = (x509<((x510*x511)+x512));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x513 = UINT8_MAX;
	static volatile int16_t x514 = INT16_MAX;
	uint16_t x515 = 1359U;
	int64_t x516 = 82098451234611915LL;
	static volatile int32_t t97 = 504;

	t97 = (x513<((x514*x515)+x516));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x517 = INT64_MIN;
	volatile uint64_t x518 = 763LLU;
	int16_t x519 = INT16_MIN;
	volatile uint8_t x520 = UINT8_MAX;
	static int32_t t98 = 10;

	t98 = (x517<((x518*x519)+x520));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x521 = INT32_MIN;
	int32_t x522 = INT32_MAX;
	volatile uint32_t x523 = 64826397U;
	volatile int32_t t99 = 11;

	t99 = (x521<((x522*x523)+x524));

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


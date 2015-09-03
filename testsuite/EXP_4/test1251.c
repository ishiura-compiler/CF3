#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x2 = 262187191;
uint64_t x6 = 4529719928907529858LLU;
uint32_t t2 = 1487U;
volatile uint16_t x30 = 125U;
int16_t x47 = 98;
volatile int32_t t5 = -181575232;
uint64_t t8 = 5911LLU;
int8_t x110 = INT8_MAX;
static int8_t x114 = 1;
uint8_t x125 = UINT8_MAX;
int16_t x144 = INT16_MAX;
uint32_t x152 = 235183U;
volatile uint64_t x154 = 976715433220648259LLU;
static volatile int8_t x166 = INT8_MAX;
static int32_t x167 = -1;
uint64_t x168 = 11377163130861017LLU;
int32_t x180 = INT32_MAX;
uint16_t x182 = UINT16_MAX;
int16_t x183 = INT16_MIN;
volatile uint16_t x187 = UINT16_MAX;
volatile uint8_t x206 = UINT8_MAX;
volatile int32_t t25 = -893536;
uint64_t x214 = 8116315177807722069LLU;
int32_t x241 = -37;
int64_t x245 = -353854741LL;
volatile uint32_t x255 = 14997548U;
static int32_t t31 = -11852653;
uint64_t x259 = 454507101LLU;
static volatile int32_t x260 = INT32_MIN;
static volatile uint32_t t33 = 8812551U;
int32_t x266 = 14162;
static volatile int64_t x268 = INT64_MIN;
int8_t x277 = INT8_MIN;
uint16_t x282 = 3U;
int64_t x283 = -95226997LL;
static int32_t x284 = INT32_MIN;
volatile int16_t x307 = INT16_MIN;
int8_t x308 = INT8_MIN;
static volatile uint32_t x313 = 91188818U;
uint32_t x314 = UINT32_MAX;
int8_t x322 = INT8_MAX;
int8_t x323 = 5;
uint32_t x342 = 7144U;
volatile int64_t t45 = 859LL;
int8_t x359 = INT8_MAX;
volatile uint64_t t51 = 6139750432LLU;
uint8_t x426 = 15U;
int64_t x433 = -20911592366LL;
static volatile int64_t x449 = -1819LL;
int32_t x450 = 105;
int64_t x455 = -523108233679627338LL;
int8_t x456 = INT8_MIN;
int32_t x484 = -15167;
int16_t x511 = -1;
static int32_t x512 = INT32_MIN;
int32_t x539 = 19573475;
volatile uint32_t x544 = UINT32_MAX;
static int16_t x549 = INT16_MAX;
int16_t x550 = 0;
int16_t x569 = -7;
int32_t x570 = 7;
int16_t x571 = INT16_MIN;
int32_t t69 = -1;
static int16_t x576 = -1;
int16_t x588 = -1;
static volatile uint64_t x603 = 2LLU;
volatile int8_t x613 = INT8_MIN;
volatile uint32_t x614 = 908535U;
volatile uint32_t t75 = 51919U;
static int32_t x678 = 173;
uint32_t x686 = 24352U;
uint8_t x693 = UINT8_MAX;
static int32_t x715 = 242;
int64_t x716 = 8113LL;
uint64_t t89 = 113192743LLU;
static int64_t x736 = 103139408409130LL;
int8_t x738 = INT8_MAX;
volatile int8_t x740 = INT8_MAX;
static int32_t t91 = -5716715;
volatile uint64_t x774 = 15645563LLU;
static uint8_t x786 = UINT8_MAX;
volatile uint32_t x790 = 1964718U;
volatile int32_t t96 = -714308987;
uint32_t x808 = UINT32_MAX;
int16_t x811 = INT16_MIN;


void f0(void) {
	volatile int64_t x1 = -1LL;
	volatile uint16_t x3 = UINT16_MAX;
	int64_t x4 = -3754049612878948LL;
	volatile int64_t t0 = 6283026LL;

	t0 = (x1*(x2<<(x3==x4)));

	if (t0 != -262187191LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	volatile int8_t x7 = INT8_MIN;
	volatile int64_t x8 = 206681281609492167LL;
	volatile uint64_t t1 = 1779871619617604LLU;

	t1 = (x5*(x6<<(x7==x8)));

	if (t1 != 12734702822914785280LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x13 = UINT32_MAX;
	uint8_t x14 = 26U;
	static uint32_t x15 = 1U;
	int64_t x16 = -32537752LL;

	t2 = (x13*(x14<<(x15==x16)));

	if (t2 != 4294967270U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x29 = 2094581U;
	int64_t x31 = -380267056647766510LL;
	volatile int32_t x32 = 15;
	volatile uint32_t t3 = 591645251U;

	t3 = (x29*(x30<<(x31==x32)));

	if (t3 != 261822625U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x45 = 2U;
	uint64_t x46 = 1166856660LLU;
	int64_t x48 = INT64_MAX;
	uint64_t t4 = 15835923850110LLU;

	t4 = (x45*(x46<<(x47==x48)));

	if (t4 != 2333713320LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x57 = INT16_MAX;
	uint8_t x58 = UINT8_MAX;
	uint8_t x59 = 20U;
	int64_t x60 = INT64_MIN;

	t5 = (x57*(x58<<(x59==x60)));

	if (t5 != 8355585) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x61 = -6670;
	static uint32_t x62 = 16152U;
	int16_t x63 = INT16_MIN;
	int32_t x64 = 52228;
	static uint32_t t6 = 7072661U;

	t6 = (x61*(x62<<(x63==x64)));

	if (t6 != 4187233456U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x85 = 75;
	int64_t x86 = 1132388230352625LL;
	int16_t x87 = -16;
	static int16_t x88 = INT16_MIN;
	volatile int64_t t7 = 6LL;

	t7 = (x85*(x86<<(x87==x88)));

	if (t7 != 84929117276446875LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x93 = 692414427587LLU;
	int64_t x94 = 10116890206LL;
	static int8_t x95 = INT8_MIN;
	int8_t x96 = 0;

	t8 = (x93*(x94<<(x95==x96)));

	if (t8 != 13764737012096450458LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x97 = -1;
	uint32_t x98 = 71U;
	static volatile uint32_t x99 = 699960512U;
	int32_t x100 = 464929;
	static volatile uint32_t t9 = 18489867U;

	t9 = (x97*(x98<<(x99==x100)));

	if (t9 != 4294967225U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x109 = INT16_MIN;
	static int8_t x111 = -1;
	uint64_t x112 = UINT64_MAX;
	volatile int32_t t10 = -507735037;

	t10 = (x109*(x110<<(x111==x112)));

	if (t10 != -8323072) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x113 = INT64_MAX;
	uint64_t x115 = 46272376995998LLU;
	static volatile uint16_t x116 = 1U;
	volatile int64_t t11 = INT64_MAX;

	t11 = (x113*(x114<<(x115==x116)));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x121 = UINT16_MAX;
	int16_t x122 = 1;
	int64_t x123 = -401385629069LL;
	uint32_t x124 = UINT32_MAX;
	volatile int32_t t12 = 123553110;

	t12 = (x121*(x122<<(x123==x124)));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x126 = UINT16_MAX;
	volatile int8_t x127 = INT8_MIN;
	int64_t x128 = -1LL;
	static int32_t t13 = 246341;

	t13 = (x125*(x126<<(x127==x128)));

	if (t13 != 16711425) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x129 = 127;
	uint32_t x130 = 10563957U;
	int8_t x131 = INT8_MIN;
	uint8_t x132 = UINT8_MAX;
	uint32_t t14 = 58U;

	t14 = (x129*(x130<<(x131==x132)));

	if (t14 != 1341622539U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x141 = UINT8_MAX;
	uint8_t x142 = UINT8_MAX;
	uint64_t x143 = 9140LLU;
	volatile int32_t t15 = 0;

	t15 = (x141*(x142<<(x143==x144)));

	if (t15 != 65025) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x149 = INT8_MIN;
	int16_t x150 = 433;
	volatile uint8_t x151 = 95U;
	volatile int32_t t16 = -26;

	t16 = (x149*(x150<<(x151==x152)));

	if (t16 != -55424) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x153 = UINT8_MAX;
	uint16_t x155 = 7420U;
	int8_t x156 = INT8_MIN;
	uint64_t t17 = 3712187644731683875LLU;

	t17 = (x153*(x154<<(x155==x156)));

	if (t17 != 9254762513041135037LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x165 = -1;
	int32_t t18 = 6;

	t18 = (x165*(x166<<(x167==x168)));

	if (t18 != -127) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x177 = 56U;
	volatile int8_t x178 = INT8_MAX;
	int32_t x179 = -1389844;
	static volatile uint32_t t19 = 114755U;

	t19 = (x177*(x178<<(x179==x180)));

	if (t19 != 7112U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x181 = 1U;
	uint64_t x184 = 197296040120LLU;
	static uint32_t t20 = 50422035U;

	t20 = (x181*(x182<<(x183==x184)));

	if (t20 != 65535U) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x185 = INT8_MAX;
	static uint16_t x186 = 71U;
	int8_t x188 = -1;
	int32_t t21 = 1;

	t21 = (x185*(x186<<(x187==x188)));

	if (t21 != 9017) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x189 = 1;
	int16_t x190 = INT16_MAX;
	int32_t x191 = -1;
	int8_t x192 = -1;
	int32_t t22 = -178833225;

	t22 = (x189*(x190<<(x191==x192)));

	if (t22 != 65534) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x193 = INT8_MAX;
	int32_t x194 = 1674001;
	int8_t x195 = -1;
	int8_t x196 = 1;
	volatile int32_t t23 = 61887926;

	t23 = (x193*(x194<<(x195==x196)));

	if (t23 != 212598127) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x205 = -6;
	int64_t x207 = 2031269LL;
	int64_t x208 = -48574LL;
	static volatile int32_t t24 = -2057;

	t24 = (x205*(x206<<(x207==x208)));

	if (t24 != -1530) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x209 = INT8_MIN;
	static uint8_t x210 = 2U;
	uint8_t x211 = 4U;
	uint32_t x212 = 26U;

	t25 = (x209*(x210<<(x211==x212)));

	if (t25 != -256) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x213 = -12781;
	static uint16_t x215 = 1877U;
	int64_t x216 = INT64_MAX;
	uint64_t t26 = 547024123344891323LLU;

	t26 = (x213*(x214<<(x215==x216)));

	if (t26 != 9864382982022524495LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x225 = 4;
	uint16_t x226 = 2U;
	uint32_t x227 = 3U;
	volatile int8_t x228 = INT8_MAX;
	volatile int32_t t27 = 0;

	t27 = (x225*(x226<<(x227==x228)));

	if (t27 != 8) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x233 = 1;
	volatile uint16_t x234 = 99U;
	int16_t x235 = -1;
	int16_t x236 = INT16_MIN;
	volatile int32_t t28 = -379331;

	t28 = (x233*(x234<<(x235==x236)));

	if (t28 != 99) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x242 = UINT64_MAX;
	uint64_t x243 = 943322326654901774LLU;
	uint64_t x244 = 6521LLU;
	uint64_t t29 = 9LLU;

	t29 = (x241*(x242<<(x243==x244)));

	if (t29 != 37LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x246 = 60U;
	static int64_t x247 = -1LL;
	static uint32_t x248 = 42U;
	volatile int64_t t30 = 393034414LL;

	t30 = (x245*(x246<<(x247==x248)));

	if (t30 != -21231284460LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x253 = INT8_MIN;
	int8_t x254 = INT8_MAX;
	uint32_t x256 = UINT32_MAX;

	t31 = (x253*(x254<<(x255==x256)));

	if (t31 != -16256) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x257 = -1;
	int64_t x258 = 81436604437652406LL;
	static int64_t t32 = -249LL;

	t32 = (x257*(x258<<(x259==x260)));

	if (t32 != -81436604437652406LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x261 = 1U;
	uint32_t x262 = 197U;
	int16_t x263 = -1;
	int64_t x264 = INT64_MIN;

	t33 = (x261*(x262<<(x263==x264)));

	if (t33 != 197U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x265 = 0;
	uint16_t x267 = UINT16_MAX;
	volatile int32_t t34 = -100;

	t34 = (x265*(x266<<(x267==x268)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x278 = UINT64_MAX;
	static uint16_t x279 = UINT16_MAX;
	volatile uint8_t x280 = 25U;
	uint64_t t35 = 503820798794538867LLU;

	t35 = (x277*(x278<<(x279==x280)));

	if (t35 != 128LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x281 = 7U;
	volatile uint32_t t36 = 86U;

	t36 = (x281*(x282<<(x283==x284)));

	if (t36 != 21U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x285 = 1449648599U;
	int16_t x286 = 1468;
	int16_t x287 = 1;
	static volatile int64_t x288 = -1LL;
	volatile uint32_t t37 = 3716U;

	t37 = (x285*(x286<<(x287==x288)));

	if (t37 != 2075331812U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x297 = 17U;
	int32_t x298 = 19225;
	volatile int16_t x299 = 11;
	int32_t x300 = 87387;
	int32_t t38 = 13;

	t38 = (x297*(x298<<(x299==x300)));

	if (t38 != 326825) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x305 = INT8_MIN;
	int16_t x306 = 125;
	int32_t t39 = 6;

	t39 = (x305*(x306<<(x307==x308)));

	if (t39 != -16000) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x309 = -1;
	uint64_t x310 = 6521LLU;
	int64_t x311 = -1634848LL;
	int64_t x312 = 44044450LL;
	volatile uint64_t t40 = 5700975279LLU;

	t40 = (x309*(x310<<(x311==x312)));

	if (t40 != 18446744073709545095LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x315 = -268118245LL;
	int16_t x316 = INT16_MAX;
	static volatile uint32_t t41 = 94U;

	t41 = (x313*(x314<<(x315==x316)));

	if (t41 != 4203778478U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x317 = 4856;
	uint8_t x318 = UINT8_MAX;
	volatile int8_t x319 = INT8_MIN;
	volatile uint64_t x320 = 6738096LLU;
	static volatile int32_t t42 = 1943;

	t42 = (x317*(x318<<(x319==x320)));

	if (t42 != 1238280) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x321 = 71888927413002752LLU;
	int32_t x324 = -3360;
	uint64_t t43 = 2905598870LLU;

	t43 = (x321*(x322<<(x323==x324)));

	if (t43 != 9129893781451349504LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x325 = -1;
	int64_t x326 = INT64_MAX;
	int8_t x327 = INT8_MIN;
	int8_t x328 = 1;
	int64_t t44 = -1266858LL;

	t44 = (x325*(x326<<(x327==x328)));

	if (t44 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x341 = -1LL;
	int8_t x343 = INT8_MAX;
	uint16_t x344 = 9U;

	t45 = (x341*(x342<<(x343==x344)));

	if (t45 != -7144LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x353 = 4148;
	volatile int64_t x354 = 1800LL;
	int8_t x355 = INT8_MIN;
	static int8_t x356 = -50;
	volatile int64_t t46 = -58033433328776LL;

	t46 = (x353*(x354<<(x355==x356)));

	if (t46 != 7466400LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x357 = 162U;
	int8_t x358 = 26;
	int32_t x360 = -38128492;
	volatile uint32_t t47 = 4385U;

	t47 = (x357*(x358<<(x359==x360)));

	if (t47 != 4212U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x373 = 60U;
	uint8_t x374 = UINT8_MAX;
	volatile uint32_t x375 = 37U;
	int32_t x376 = INT32_MIN;
	volatile int32_t t48 = -6444;

	t48 = (x373*(x374<<(x375==x376)));

	if (t48 != 15300) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x377 = -1;
	int16_t x378 = 238;
	int64_t x379 = -37834338587524LL;
	uint16_t x380 = UINT16_MAX;
	static volatile int32_t t49 = -37;

	t49 = (x377*(x378<<(x379==x380)));

	if (t49 != -238) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x401 = -1;
	uint16_t x402 = 17U;
	int8_t x403 = -1;
	static uint8_t x404 = UINT8_MAX;
	volatile int32_t t50 = 969800392;

	t50 = (x401*(x402<<(x403==x404)));

	if (t50 != -17) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x417 = 1U;
	uint64_t x418 = 24LLU;
	volatile uint32_t x419 = UINT32_MAX;
	uint32_t x420 = 930U;

	t51 = (x417*(x418<<(x419==x420)));

	if (t51 != 24LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x425 = INT16_MAX;
	int8_t x427 = 47;
	static uint16_t x428 = 12U;
	int32_t t52 = 401604212;

	t52 = (x425*(x426<<(x427==x428)));

	if (t52 != 491505) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x434 = 77714U;
	int64_t x435 = INT64_MIN;
	int64_t x436 = INT64_MIN;
	static int64_t t53 = -6033371146886146LL;

	t53 = (x433*(x434<<(x435==x436)));

	if (t53 != -3250246978262648LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x437 = 1192284U;
	uint32_t x438 = UINT32_MAX;
	volatile uint16_t x439 = UINT16_MAX;
	uint16_t x440 = 909U;
	static uint32_t t54 = 3485491U;

	t54 = (x437*(x438<<(x439==x440)));

	if (t54 != 4293775012U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x445 = 247U;
	uint64_t x446 = UINT64_MAX;
	uint8_t x447 = UINT8_MAX;
	int64_t x448 = 3790231865231039576LL;
	volatile uint64_t t55 = 510211768288553877LLU;

	t55 = (x445*(x446<<(x447==x448)));

	if (t55 != 18446744073709551369LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x451 = INT64_MAX;
	volatile int8_t x452 = -53;
	static int64_t t56 = 35404LL;

	t56 = (x449*(x450<<(x451==x452)));

	if (t56 != -190995LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x453 = UINT8_MAX;
	static uint16_t x454 = 331U;
	static volatile int32_t t57 = -1;

	t57 = (x453*(x454<<(x455==x456)));

	if (t57 != 84405) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x461 = -454485;
	uint8_t x462 = 36U;
	uint8_t x463 = 7U;
	int32_t x464 = INT32_MIN;
	int32_t t58 = 15701718;

	t58 = (x461*(x462<<(x463==x464)));

	if (t58 != -16361460) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x465 = 7;
	int8_t x466 = INT8_MAX;
	static int16_t x467 = INT16_MIN;
	volatile uint32_t x468 = UINT32_MAX;
	int32_t t59 = -7824;

	t59 = (x465*(x466<<(x467==x468)));

	if (t59 != 889) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x477 = INT16_MAX;
	int8_t x478 = 2;
	static uint64_t x479 = 5778421808LLU;
	int64_t x480 = INT64_MIN;
	static volatile int32_t t60 = 57;

	t60 = (x477*(x478<<(x479==x480)));

	if (t60 != 65534) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x481 = 2U;
	uint32_t x482 = UINT32_MAX;
	volatile uint32_t x483 = UINT32_MAX;
	volatile uint32_t t61 = 132015161U;

	t61 = (x481*(x482<<(x483==x484)));

	if (t61 != 4294967294U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x489 = INT8_MAX;
	int16_t x490 = INT16_MAX;
	int16_t x491 = INT16_MIN;
	uint32_t x492 = 402678U;
	int32_t t62 = 1189765;

	t62 = (x489*(x490<<(x491==x492)));

	if (t62 != 4161409) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x493 = 2047;
	int16_t x494 = INT16_MAX;
	volatile int8_t x495 = -2;
	int32_t x496 = 141062073;
	int32_t t63 = -7782;

	t63 = (x493*(x494<<(x495==x496)));

	if (t63 != 67074049) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x509 = INT16_MIN;
	uint64_t x510 = 946654858036542LLU;
	volatile uint64_t t64 = 27510294946800LLU;

	t64 = (x509*(x510<<(x511==x512)));

	if (t64 != 5873501759277694976LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x525 = INT16_MIN;
	int16_t x526 = 2025;
	int64_t x527 = 2023222511899LL;
	int8_t x528 = INT8_MIN;
	volatile int32_t t65 = 15833;

	t65 = (x525*(x526<<(x527==x528)));

	if (t65 != -66355200) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x537 = 1350942519U;
	static uint8_t x538 = 3U;
	uint32_t x540 = 13657U;
	volatile uint32_t t66 = 104053U;

	t66 = (x537*(x538<<(x539==x540)));

	if (t66 != 4052827557U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x541 = INT16_MIN;
	volatile uint64_t x542 = 450487780210811691LLU;
	int64_t x543 = 24695904824483LL;
	volatile uint64_t t67 = 34720252635753LLU;

	t67 = (x541*(x542<<(x543==x544)));

	if (t67 != 14258421093473353728LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x551 = 34704754327368LLU;
	uint8_t x552 = 85U;
	volatile int32_t t68 = -389138539;

	t68 = (x549*(x550<<(x551==x552)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x572 = INT16_MAX;

	t69 = (x569*(x570<<(x571==x572)));

	if (t69 != -49) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x573 = INT8_MAX;
	static volatile uint64_t x574 = 1323957168LLU;
	int8_t x575 = -1;
	static uint64_t t70 = 141463947913LLU;

	t70 = (x573*(x574<<(x575==x576)));

	if (t70 != 336285120672LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x585 = INT8_MAX;
	uint32_t x586 = 19U;
	uint64_t x587 = 104762379500LLU;
	uint32_t t71 = 2U;

	t71 = (x585*(x586<<(x587==x588)));

	if (t71 != 2413U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x589 = UINT64_MAX;
	int8_t x590 = INT8_MAX;
	uint32_t x591 = 1604183993U;
	int16_t x592 = -1;
	uint64_t t72 = 15531273892LLU;

	t72 = (x589*(x590<<(x591==x592)));

	if (t72 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x597 = 1;
	uint64_t x598 = UINT64_MAX;
	int64_t x599 = 124340299118492LL;
	int8_t x600 = INT8_MIN;
	volatile uint64_t t73 = UINT64_MAX;

	t73 = (x597*(x598<<(x599==x600)));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x601 = 2335U;
	int16_t x602 = INT16_MAX;
	int32_t x604 = INT32_MIN;
	uint32_t t74 = 3U;

	t74 = (x601*(x602<<(x603==x604)));

	if (t74 != 76510945U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x615 = UINT64_MAX;
	int8_t x616 = INT8_MAX;

	t75 = (x613*(x614<<(x615==x616)));

	if (t75 != 4178674816U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x617 = -1;
	uint32_t x618 = 508U;
	static int64_t x619 = 119LL;
	uint32_t x620 = UINT32_MAX;
	uint32_t t76 = 610445U;

	t76 = (x617*(x618<<(x619==x620)));

	if (t76 != 4294966788U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x621 = INT64_MIN;
	uint64_t x622 = 30216LLU;
	int8_t x623 = INT8_MIN;
	int8_t x624 = INT8_MIN;
	static uint64_t t77 = 912340092861961LLU;

	t77 = (x621*(x622<<(x623==x624)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x625 = -1LL;
	uint16_t x626 = 441U;
	volatile uint16_t x627 = 3171U;
	int32_t x628 = 843490;
	volatile int64_t t78 = -127802267656875LL;

	t78 = (x625*(x626<<(x627==x628)));

	if (t78 != -441LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x633 = 27840U;
	uint64_t x634 = UINT64_MAX;
	int16_t x635 = -5991;
	volatile int64_t x636 = -1LL;
	volatile uint64_t t79 = 345983451LLU;

	t79 = (x633*(x634<<(x635==x636)));

	if (t79 != 18446744073709523776LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x641 = INT8_MIN;
	int8_t x642 = INT8_MAX;
	int8_t x643 = -1;
	uint8_t x644 = UINT8_MAX;
	volatile int32_t t80 = 54472;

	t80 = (x641*(x642<<(x643==x644)));

	if (t80 != -16256) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x653 = -1;
	uint8_t x654 = 11U;
	uint16_t x655 = 3U;
	uint16_t x656 = UINT16_MAX;
	int32_t t81 = -10;

	t81 = (x653*(x654<<(x655==x656)));

	if (t81 != -11) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x677 = INT16_MAX;
	int16_t x679 = -1;
	int32_t x680 = INT32_MAX;
	int32_t t82 = -60998;

	t82 = (x677*(x678<<(x679==x680)));

	if (t82 != 5668691) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x681 = UINT16_MAX;
	int8_t x682 = 0;
	uint16_t x683 = 73U;
	volatile int8_t x684 = 0;
	int32_t t83 = 5;

	t83 = (x681*(x682<<(x683==x684)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x685 = INT8_MAX;
	volatile int8_t x687 = -1;
	static int8_t x688 = -1;
	uint32_t t84 = 2594318U;

	t84 = (x685*(x686<<(x687==x688)));

	if (t84 != 6185408U) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x689 = INT8_MIN;
	int8_t x690 = 5;
	int16_t x691 = INT16_MIN;
	static int32_t x692 = 617;
	int32_t t85 = 7;

	t85 = (x689*(x690<<(x691==x692)));

	if (t85 != -640) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x694 = INT16_MAX;
	static uint8_t x695 = 1U;
	volatile int64_t x696 = 8067853377LL;
	static volatile int32_t t86 = 52800;

	t86 = (x693*(x694<<(x695==x696)));

	if (t86 != 8355585) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x705 = UINT32_MAX;
	volatile uint32_t x706 = UINT32_MAX;
	int16_t x707 = INT16_MIN;
	volatile int16_t x708 = INT16_MIN;
	uint32_t t87 = 3560332U;

	t87 = (x705*(x706<<(x707==x708)));

	if (t87 != 2U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x713 = -1147732LL;
	volatile int16_t x714 = 825;
	static volatile int64_t t88 = 84903174939LL;

	t88 = (x713*(x714<<(x715==x716)));

	if (t88 != -946878900LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x729 = INT64_MAX;
	uint64_t x730 = 114881519099LLU;
	int64_t x731 = INT64_MIN;
	static uint64_t x732 = 2112330497761LLU;

	t89 = (x729*(x730<<(x731==x732)));

	if (t89 != 9223371921973256709LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x733 = -1LL;
	static volatile uint32_t x734 = UINT32_MAX;
	uint64_t x735 = UINT64_MAX;
	volatile int64_t t90 = -4194684LL;

	t90 = (x733*(x734<<(x735==x736)));

	if (t90 != -4294967295LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x737 = -26;
	static int8_t x739 = INT8_MIN;

	t91 = (x737*(x738<<(x739==x740)));

	if (t91 != -3302) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x757 = 10U;
	uint64_t x758 = 24925243888LLU;
	volatile int32_t x759 = INT32_MAX;
	int64_t x760 = -1LL;
	volatile uint64_t t92 = 4147277803048969776LLU;

	t92 = (x757*(x758<<(x759==x760)));

	if (t92 != 249252438880LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x773 = 2526992LLU;
	volatile int32_t x775 = -1;
	volatile uint8_t x776 = 0U;
	uint64_t t93 = 530261148958259050LLU;

	t93 = (x773*(x774<<(x775==x776)));

	if (t93 != 39536212536496LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x785 = INT16_MIN;
	int64_t x787 = -24889102LL;
	uint8_t x788 = 2U;
	volatile int32_t t94 = -883893000;

	t94 = (x785*(x786<<(x787==x788)));

	if (t94 != -8355840) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x789 = 717215901U;
	uint8_t x791 = UINT8_MAX;
	uint8_t x792 = UINT8_MAX;
	volatile uint32_t t95 = 746896533U;

	t95 = (x789*(x790<<(x791==x792)));

	if (t95 != 3815709036U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x793 = INT8_MIN;
	int32_t x794 = 7351768;
	static int8_t x795 = INT8_MIN;
	int64_t x796 = -24600508LL;

	t96 = (x793*(x794<<(x795==x796)));

	if (t96 != -941026304) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x797 = -1;
	volatile uint16_t x798 = UINT16_MAX;
	static int64_t x799 = INT64_MIN;
	int32_t x800 = -1;
	volatile int32_t t97 = 16;

	t97 = (x797*(x798<<(x799==x800)));

	if (t97 != -65535) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x805 = INT32_MIN;
	uint64_t x806 = 314576831LLU;
	volatile int32_t x807 = INT32_MIN;
	volatile uint64_t t98 = 27721539848257742LLU;

	t98 = (x805*(x806<<(x807==x808)));

	if (t98 != 17771195473097392128LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x809 = 5834U;
	uint32_t x810 = 8U;
	volatile int64_t x812 = 179015606962881038LL;
	volatile uint32_t t99 = 5697U;

	t99 = (x809*(x810<<(x811==x812)));

	if (t99 != 46672U) { NG(); } else { ; }
	
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


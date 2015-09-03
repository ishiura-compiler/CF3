#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x2 = 1849258531U;
int32_t t0 = -10363515;
int8_t x10 = -1;
static volatile int32_t t2 = -386;
int32_t x18 = 1;
int64_t x21 = 1107565334381633LL;
static int64_t x32 = INT64_MAX;
int32_t t6 = 0;
volatile uint8_t x33 = UINT8_MAX;
int32_t t7 = -13;
int16_t x40 = -7320;
uint8_t x51 = 8U;
static uint16_t x68 = 17U;
volatile int32_t t15 = 176767533;
int32_t x69 = 15794;
volatile int32_t t16 = 2;
int8_t x74 = -54;
int16_t x81 = -8893;
uint16_t x83 = 8398U;
int64_t x88 = INT64_MAX;
volatile int32_t t20 = 1;
volatile int8_t x91 = -14;
uint16_t x109 = 1U;
int8_t x110 = INT8_MIN;
int32_t t26 = -187;
volatile int32_t t29 = 1025634451;
uint32_t x129 = 670516U;
int16_t x130 = -1;
uint8_t x132 = 1U;
uint8_t x133 = UINT8_MAX;
int64_t x135 = INT64_MAX;
int32_t t33 = -1;
static int8_t x141 = 0;
int32_t x148 = 563794;
volatile int64_t x157 = INT64_MAX;
volatile int64_t x159 = 526628LL;
uint32_t x160 = 87U;
static volatile int32_t t39 = -102;
int32_t x181 = 0;
uint64_t x182 = UINT64_MAX;
int8_t x184 = INT8_MIN;
volatile int32_t t42 = 224642713;
int32_t t45 = -1027929;
uint64_t x205 = 3876746465LLU;
static int64_t x207 = -7577183035641007LL;
int32_t x209 = -1;
static int8_t x212 = -1;
int64_t x217 = -1LL;
int16_t x219 = -7;
int64_t x222 = INT64_MIN;
volatile int8_t x224 = 3;
int16_t x236 = 85;
int32_t t53 = 26;
int32_t x250 = INT32_MIN;
volatile int32_t t56 = 7618200;
volatile int8_t x260 = 55;
uint16_t x271 = 40U;
int8_t x286 = INT8_MIN;
int32_t t65 = 619;
static int32_t t67 = 14723;
static uint16_t x301 = 422U;
volatile int32_t x312 = 6123;
volatile int32_t t69 = -448;
uint32_t x314 = UINT32_MAX;
int64_t x320 = INT64_MIN;
volatile int32_t x322 = INT32_MAX;
uint8_t x325 = 43U;
static int8_t x328 = INT8_MIN;
uint8_t x341 = UINT8_MAX;
volatile int32_t t77 = 562662;
int32_t x347 = -19;
uint64_t x348 = UINT64_MAX;
static int64_t x349 = INT64_MIN;
uint8_t x351 = 1U;
int32_t t79 = 20;
uint32_t x358 = 11873179U;
static int64_t x362 = INT64_MIN;
static int32_t x364 = -1;
volatile uint16_t x373 = 473U;
static int16_t x378 = -407;
int8_t x380 = INT8_MIN;
volatile uint64_t x383 = 9710895233174772LLU;
volatile int16_t x384 = -235;
uint8_t x394 = 1U;
static int32_t x399 = INT32_MIN;
int64_t x407 = -1980992016684918LL;
static int16_t x408 = INT16_MAX;
volatile int32_t t90 = -1411360;
int16_t x425 = -2714;
volatile int8_t x431 = INT8_MAX;
int16_t x433 = 0;
volatile int32_t t93 = 9590554;
int8_t x438 = INT8_MIN;
uint64_t x441 = UINT64_MAX;
volatile int32_t x450 = INT32_MIN;
volatile int16_t x453 = INT16_MIN;
volatile uint8_t x456 = 14U;
volatile int32_t t98 = 521999;


void f0(void) {
	int8_t x1 = 5;
	volatile int8_t x3 = -1;
	uint64_t x4 = UINT64_MAX;

	t0 = ((x1+x2)<(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	uint8_t x6 = 5U;
	int32_t x7 = INT32_MIN;
	int64_t x8 = INT64_MIN;
	volatile int32_t t1 = 701757960;

	t1 = ((x5+x6)<(x7/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 30U;
	int8_t x11 = INT8_MIN;
	uint64_t x12 = UINT64_MAX;

	t2 = ((x9+x10)<(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	uint32_t x14 = 189979U;
	uint64_t x15 = 1059211728138068939LLU;
	uint8_t x16 = 4U;
	int32_t t3 = -98489;

	t3 = ((x13+x14)<(x15/x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = 57;
	int64_t x19 = INT64_MAX;
	int16_t x20 = INT16_MIN;
	int32_t t4 = 365;

	t4 = ((x17+x18)<(x19/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = 10400;
	int64_t x23 = 107LL;
	int32_t x24 = -432;
	int32_t t5 = -4;

	t5 = ((x21+x22)<(x23/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 0U;
	volatile int64_t x30 = 3103706649582705660LL;
	int32_t x31 = INT32_MIN;

	t6 = ((x29+x30)<(x31/x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x34 = 1;
	static int8_t x35 = INT8_MIN;
	int8_t x36 = -3;

	t7 = ((x33+x34)<(x35/x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 1U;
	volatile int32_t x38 = INT32_MIN;
	volatile uint64_t x39 = UINT64_MAX;
	int32_t t8 = -852406;

	t8 = ((x37+x38)<(x39/x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x41 = -580413120;
	volatile int32_t x42 = INT32_MAX;
	volatile uint16_t x43 = 15U;
	uint32_t x44 = 723331U;
	int32_t t9 = -1;

	t9 = ((x41+x42)<(x43/x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x45 = INT8_MIN;
	int16_t x46 = -1;
	volatile int8_t x47 = -1;
	int16_t x48 = -1;
	volatile int32_t t10 = -3;

	t10 = ((x45+x46)<(x47/x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -1LL;
	int16_t x50 = INT16_MIN;
	int32_t x52 = -14286040;
	static int32_t t11 = -419169929;

	t11 = ((x49+x50)<(x51/x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x53 = INT64_MIN;
	uint32_t x54 = 8397576U;
	uint64_t x55 = 445243632963139344LLU;
	volatile int8_t x56 = -61;
	static volatile int32_t t12 = -2550836;

	t12 = ((x53+x54)<(x55/x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = 191081039379LLU;
	static uint16_t x58 = 48U;
	volatile int32_t x59 = 45337;
	volatile int8_t x60 = -4;
	static volatile int32_t t13 = -1;

	t13 = ((x57+x58)<(x59/x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x61 = 3U;
	int64_t x62 = 3581154231312LL;
	int64_t x63 = INT64_MIN;
	uint64_t x64 = UINT64_MAX;
	volatile int32_t t14 = 2951;

	t14 = ((x61+x62)<(x63/x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MAX;
	volatile uint8_t x66 = 41U;
	static uint8_t x67 = UINT8_MAX;

	t15 = ((x65+x66)<(x67/x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x70 = 26U;
	volatile uint64_t x71 = UINT64_MAX;
	static uint32_t x72 = UINT32_MAX;

	t16 = ((x69+x70)<(x71/x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -4;
	static volatile int64_t x75 = INT64_MAX;
	volatile int64_t x76 = INT64_MIN;
	volatile int32_t t17 = -10465;

	t17 = ((x73+x74)<(x75/x76));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = -82990109;
	volatile int64_t x78 = 2871210549506209006LL;
	uint64_t x79 = UINT64_MAX;
	int8_t x80 = -1;
	static volatile int32_t t18 = -4032;

	t18 = ((x77+x78)<(x79/x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x82 = 43LLU;
	int32_t x84 = 66520;
	static volatile int32_t t19 = 176;

	t19 = ((x81+x82)<(x83/x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = UINT64_MAX;
	uint64_t x86 = 413LLU;
	int32_t x87 = -1;

	t20 = ((x85+x86)<(x87/x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = -1;
	int16_t x90 = INT16_MIN;
	static volatile int8_t x92 = INT8_MIN;
	volatile int32_t t21 = -13288816;

	t21 = ((x89+x90)<(x91/x92));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x93 = UINT32_MAX;
	uint32_t x94 = 374595243U;
	int16_t x95 = 0;
	uint32_t x96 = 32583U;
	volatile int32_t t22 = -2141;

	t22 = ((x93+x94)<(x95/x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x97 = INT16_MIN;
	volatile int16_t x98 = INT16_MAX;
	static uint64_t x99 = 3020802666060LLU;
	int32_t x100 = INT32_MIN;
	int32_t t23 = -368506894;

	t23 = ((x97+x98)<(x99/x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = -4441;
	int64_t x102 = 28433762613832380LL;
	int32_t x103 = -1;
	static int16_t x104 = -20;
	volatile int32_t t24 = 16398;

	t24 = ((x101+x102)<(x103/x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = -1;
	int8_t x106 = -1;
	static int16_t x107 = INT16_MIN;
	uint32_t x108 = 655U;
	static int32_t t25 = -564638767;

	t25 = ((x105+x106)<(x107/x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x111 = INT16_MIN;
	static volatile uint16_t x112 = UINT16_MAX;

	t26 = ((x109+x110)<(x111/x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MIN;
	int64_t x114 = INT64_MAX;
	int32_t x115 = INT32_MIN;
	static volatile int32_t x116 = 19739;
	static int32_t t27 = -586;

	t27 = ((x113+x114)<(x115/x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x117 = -1LL;
	int16_t x118 = INT16_MIN;
	int32_t x119 = INT32_MAX;
	int64_t x120 = -1482395826398253LL;
	volatile int32_t t28 = -1749080;

	t28 = ((x117+x118)<(x119/x120));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = -3;
	int64_t x122 = 16029970113674460LL;
	volatile uint32_t x123 = 859580U;
	int16_t x124 = 2;

	t29 = ((x121+x122)<(x123/x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x125 = INT16_MAX;
	static uint8_t x126 = UINT8_MAX;
	volatile int8_t x127 = INT8_MAX;
	uint32_t x128 = UINT32_MAX;
	volatile int32_t t30 = -2388509;

	t30 = ((x125+x126)<(x127/x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x131 = -1;
	volatile int32_t t31 = 3332066;

	t31 = ((x129+x130)<(x131/x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x134 = 17642U;
	int64_t x136 = INT64_MIN;
	int32_t t32 = -135;

	t32 = ((x133+x134)<(x135/x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x137 = INT16_MAX;
	int64_t x138 = 2511LL;
	uint16_t x139 = UINT16_MAX;
	int16_t x140 = INT16_MIN;

	t33 = ((x137+x138)<(x139/x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x142 = -1;
	volatile int16_t x143 = INT16_MIN;
	uint64_t x144 = 497073915435LLU;
	volatile int32_t t34 = 5158398;

	t34 = ((x141+x142)<(x143/x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = 481027U;
	int32_t x146 = 68233894;
	static volatile int16_t x147 = INT16_MIN;
	volatile int32_t t35 = -291;

	t35 = ((x145+x146)<(x147/x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = INT32_MAX;
	volatile int64_t x154 = -1LL;
	int16_t x155 = -1;
	int16_t x156 = -1;
	int32_t t36 = -148077436;

	t36 = ((x153+x154)<(x155/x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x158 = -1LL;
	volatile int32_t t37 = -11056348;

	t37 = ((x157+x158)<(x159/x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x161 = 102U;
	uint8_t x162 = UINT8_MAX;
	int8_t x163 = INT8_MIN;
	uint64_t x164 = 1598144231528073LLU;
	volatile int32_t t38 = 43149964;

	t38 = ((x161+x162)<(x163/x164));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x165 = 43U;
	int16_t x166 = INT16_MAX;
	int64_t x167 = INT64_MAX;
	volatile int16_t x168 = INT16_MIN;

	t39 = ((x165+x166)<(x167/x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x169 = INT64_MIN;
	uint16_t x170 = 7U;
	static uint32_t x171 = UINT32_MAX;
	int64_t x172 = -56146LL;
	volatile int32_t t40 = -7430810;

	t40 = ((x169+x170)<(x171/x172));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = -62;
	int32_t x178 = INT32_MAX;
	volatile int32_t x179 = INT32_MIN;
	int64_t x180 = 14501951010282LL;
	volatile int32_t t41 = -16505718;

	t41 = ((x177+x178)<(x179/x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x183 = INT32_MAX;

	t42 = ((x181+x182)<(x183/x184));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = 51;
	int8_t x186 = INT8_MIN;
	int16_t x187 = 96;
	int8_t x188 = INT8_MIN;
	volatile int32_t t43 = -563935241;

	t43 = ((x185+x186)<(x187/x188));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = -1;
	int16_t x190 = 1996;
	static volatile uint16_t x191 = 22819U;
	int16_t x192 = -34;
	int32_t t44 = 1;

	t44 = ((x189+x190)<(x191/x192));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x193 = UINT8_MAX;
	static int8_t x194 = INT8_MIN;
	int16_t x195 = 4853;
	volatile uint64_t x196 = 3678463311737575780LLU;

	t45 = ((x193+x194)<(x195/x196));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x206 = 26451U;
	static volatile int16_t x208 = -1;
	int32_t t46 = -55033;

	t46 = ((x205+x206)<(x207/x208));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x210 = 20127821764420LLU;
	uint32_t x211 = 4097U;
	volatile int32_t t47 = -392061;

	t47 = ((x209+x210)<(x211/x212));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x213 = -62;
	volatile uint32_t x214 = 13U;
	int8_t x215 = INT8_MIN;
	int16_t x216 = 16;
	int32_t t48 = -32477;

	t48 = ((x213+x214)<(x215/x216));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x218 = 1;
	int16_t x220 = -1199;
	volatile int32_t t49 = -6;

	t49 = ((x217+x218)<(x219/x220));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x221 = 3U;
	int16_t x223 = 656;
	int32_t t50 = 63;

	t50 = ((x221+x222)<(x223/x224));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x229 = UINT64_MAX;
	volatile uint16_t x230 = 158U;
	volatile int16_t x231 = INT16_MAX;
	int64_t x232 = -63158LL;
	int32_t t51 = 611;

	t51 = ((x229+x230)<(x231/x232));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x233 = UINT8_MAX;
	volatile int64_t x234 = INT64_MIN;
	int32_t x235 = 10;
	int32_t t52 = -583;

	t52 = ((x233+x234)<(x235/x236));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x237 = -1LL;
	uint8_t x238 = UINT8_MAX;
	static int64_t x239 = INT64_MIN;
	uint32_t x240 = 19U;

	t53 = ((x237+x238)<(x239/x240));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x245 = -7674;
	int64_t x246 = 2941492417642LL;
	int32_t x247 = INT32_MAX;
	uint32_t x248 = 1290U;
	volatile int32_t t54 = 1545210;

	t54 = ((x245+x246)<(x247/x248));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x249 = INT64_MAX;
	uint64_t x251 = 254906741466LLU;
	int32_t x252 = -1;
	static volatile int32_t t55 = -26203;

	t55 = ((x249+x250)<(x251/x252));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x253 = UINT64_MAX;
	volatile int16_t x254 = -1;
	static uint8_t x255 = 18U;
	int32_t x256 = INT32_MIN;

	t56 = ((x253+x254)<(x255/x256));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x257 = UINT16_MAX;
	int8_t x258 = INT8_MIN;
	volatile int8_t x259 = INT8_MAX;
	volatile int32_t t57 = -1430;

	t57 = ((x257+x258)<(x259/x260));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x261 = 39LLU;
	uint32_t x262 = 5322389U;
	uint64_t x263 = 108826668505993LLU;
	int8_t x264 = INT8_MAX;
	int32_t t58 = -1310845;

	t58 = ((x261+x262)<(x263/x264));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x265 = INT8_MIN;
	static uint16_t x266 = 2658U;
	int8_t x267 = INT8_MIN;
	int8_t x268 = INT8_MIN;
	int32_t t59 = -932734960;

	t59 = ((x265+x266)<(x267/x268));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x269 = UINT64_MAX;
	uint64_t x270 = UINT64_MAX;
	int32_t x272 = -1;
	int32_t t60 = 86;

	t60 = ((x269+x270)<(x271/x272));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x273 = 2984490119559LLU;
	int64_t x274 = INT64_MIN;
	int32_t x275 = INT32_MIN;
	volatile int16_t x276 = -38;
	volatile int32_t t61 = -5;

	t61 = ((x273+x274)<(x275/x276));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x277 = -4515317214LL;
	static volatile uint64_t x278 = 9LLU;
	volatile uint16_t x279 = UINT16_MAX;
	volatile uint16_t x280 = UINT16_MAX;
	static volatile int32_t t62 = 5243998;

	t62 = ((x277+x278)<(x279/x280));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x281 = UINT32_MAX;
	uint64_t x282 = 19LLU;
	int16_t x283 = -6;
	volatile int32_t x284 = INT32_MIN;
	int32_t t63 = -1538;

	t63 = ((x281+x282)<(x283/x284));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x285 = INT64_MAX;
	int32_t x287 = INT32_MIN;
	uint8_t x288 = UINT8_MAX;
	int32_t t64 = -7110;

	t64 = ((x285+x286)<(x287/x288));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x289 = INT8_MIN;
	int8_t x290 = INT8_MAX;
	int32_t x291 = 676;
	int32_t x292 = 42;

	t65 = ((x289+x290)<(x291/x292));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x293 = INT64_MAX;
	uint64_t x294 = 1727207769434873280LLU;
	static volatile uint32_t x295 = 1475611463U;
	int32_t x296 = INT32_MIN;
	volatile int32_t t66 = 87235;

	t66 = ((x293+x294)<(x295/x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x297 = -8619;
	uint64_t x298 = 2275922046LLU;
	int16_t x299 = -6;
	uint16_t x300 = UINT16_MAX;

	t67 = ((x297+x298)<(x299/x300));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x302 = INT32_MIN;
	uint64_t x303 = 1042LLU;
	volatile int8_t x304 = INT8_MIN;
	int32_t t68 = -49840306;

	t68 = ((x301+x302)<(x303/x304));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x309 = INT8_MAX;
	int32_t x310 = INT32_MIN;
	uint8_t x311 = 0U;

	t69 = ((x309+x310)<(x311/x312));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x313 = INT64_MIN;
	int8_t x315 = INT8_MIN;
	uint16_t x316 = UINT16_MAX;
	static volatile int32_t t70 = -969414466;

	t70 = ((x313+x314)<(x315/x316));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x317 = 16237555;
	int32_t x318 = -1;
	int32_t x319 = INT32_MAX;
	int32_t t71 = 1005015292;

	t71 = ((x317+x318)<(x319/x320));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x321 = INT64_MIN;
	int16_t x323 = INT16_MIN;
	uint16_t x324 = UINT16_MAX;
	volatile int32_t t72 = -144447265;

	t72 = ((x321+x322)<(x323/x324));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x326 = 0;
	static int8_t x327 = -45;
	int32_t t73 = 753;

	t73 = ((x325+x326)<(x327/x328));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x329 = 21U;
	volatile int64_t x330 = -1LL;
	uint16_t x331 = UINT16_MAX;
	static uint32_t x332 = 12573U;
	volatile int32_t t74 = -40352917;

	t74 = ((x329+x330)<(x331/x332));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x333 = -1;
	int16_t x334 = INT16_MAX;
	volatile uint64_t x335 = 9735152392175167LLU;
	uint32_t x336 = 65187U;
	static volatile int32_t t75 = 11588915;

	t75 = ((x333+x334)<(x335/x336));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x337 = 0U;
	int8_t x338 = INT8_MAX;
	uint16_t x339 = 556U;
	int8_t x340 = INT8_MAX;
	static int32_t t76 = 100414;

	t76 = ((x337+x338)<(x339/x340));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x342 = 125296871367053366LLU;
	uint8_t x343 = 2U;
	int16_t x344 = INT16_MIN;

	t77 = ((x341+x342)<(x343/x344));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x345 = INT8_MIN;
	int8_t x346 = 12;
	volatile int32_t t78 = 3;

	t78 = ((x345+x346)<(x347/x348));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x350 = 15496;
	uint8_t x352 = UINT8_MAX;

	t79 = ((x349+x350)<(x351/x352));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x357 = INT8_MIN;
	uint8_t x359 = 127U;
	int16_t x360 = INT16_MAX;
	static int32_t t80 = -154756401;

	t80 = ((x357+x358)<(x359/x360));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x361 = 12770682867LLU;
	uint32_t x363 = 995U;
	volatile int32_t t81 = -10;

	t81 = ((x361+x362)<(x363/x364));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x365 = INT32_MAX;
	static int32_t x366 = -32;
	static int8_t x367 = INT8_MAX;
	int16_t x368 = INT16_MAX;
	static volatile int32_t t82 = -3167427;

	t82 = ((x365+x366)<(x367/x368));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x374 = -1;
	volatile uint64_t x375 = UINT64_MAX;
	int32_t x376 = INT32_MIN;
	volatile int32_t t83 = 613002502;

	t83 = ((x373+x374)<(x375/x376));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x377 = 133U;
	static int32_t x379 = INT32_MIN;
	volatile int32_t t84 = -2;

	t84 = ((x377+x378)<(x379/x380));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x381 = 13;
	uint64_t x382 = UINT64_MAX;
	static volatile int32_t t85 = 3884;

	t85 = ((x381+x382)<(x383/x384));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x385 = INT8_MAX;
	uint32_t x386 = UINT32_MAX;
	int16_t x387 = 17;
	int32_t x388 = INT32_MIN;
	int32_t t86 = -40;

	t86 = ((x385+x386)<(x387/x388));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x393 = 657;
	int32_t x395 = INT32_MAX;
	uint64_t x396 = UINT64_MAX;
	volatile int32_t t87 = 165034;

	t87 = ((x393+x394)<(x395/x396));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x397 = UINT64_MAX;
	int16_t x398 = 4289;
	static int8_t x400 = INT8_MIN;
	int32_t t88 = 12798;

	t88 = ((x397+x398)<(x399/x400));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x405 = INT8_MIN;
	volatile int16_t x406 = INT16_MIN;
	volatile int32_t t89 = 1;

	t89 = ((x405+x406)<(x407/x408));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x409 = 12625755839703098LLU;
	volatile int64_t x410 = -99090837423LL;
	volatile int16_t x411 = 5;
	volatile uint32_t x412 = 3286U;

	t90 = ((x409+x410)<(x411/x412));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x426 = -23;
	uint16_t x427 = 54U;
	uint16_t x428 = 5649U;
	int32_t t91 = -1356;

	t91 = ((x425+x426)<(x427/x428));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x429 = INT16_MAX;
	uint32_t x430 = 1158688668U;
	volatile int16_t x432 = -45;
	volatile int32_t t92 = -4;

	t92 = ((x429+x430)<(x431/x432));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x434 = UINT16_MAX;
	uint8_t x435 = 1U;
	uint64_t x436 = 5224944375369LLU;

	t93 = ((x433+x434)<(x435/x436));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x437 = INT8_MAX;
	static volatile int32_t x439 = -150;
	int32_t x440 = -1;
	static int32_t t94 = -69746986;

	t94 = ((x437+x438)<(x439/x440));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x442 = 5314109505LLU;
	uint64_t x443 = 7215582418LLU;
	int8_t x444 = INT8_MIN;
	int32_t t95 = 209;

	t95 = ((x441+x442)<(x443/x444));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x445 = UINT8_MAX;
	int32_t x446 = -1;
	uint64_t x447 = UINT64_MAX;
	int16_t x448 = INT16_MAX;
	int32_t t96 = 109;

	t96 = ((x445+x446)<(x447/x448));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x449 = INT32_MAX;
	int8_t x451 = INT8_MAX;
	uint16_t x452 = UINT16_MAX;
	static int32_t t97 = -218996;

	t97 = ((x449+x450)<(x451/x452));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x454 = 6U;
	volatile int16_t x455 = INT16_MIN;

	t98 = ((x453+x454)<(x455/x456));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x457 = INT8_MIN;
	uint16_t x458 = 376U;
	int8_t x459 = INT8_MIN;
	int64_t x460 = INT64_MIN;
	int32_t t99 = -17383456;

	t99 = ((x457+x458)<(x459/x460));

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


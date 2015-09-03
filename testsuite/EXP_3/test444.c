#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = UINT64_MAX;
volatile uint64_t t0 = UINT64_MAX;
int8_t x9 = -24;
static int16_t x16 = -6;
static int8_t x28 = INT8_MAX;
int8_t x32 = INT8_MIN;
static int16_t x37 = INT16_MIN;
int16_t x42 = -1;
uint64_t x53 = UINT64_MAX;
static int8_t x54 = 1;
int64_t x79 = 27689688LL;
volatile int32_t x81 = -3;
volatile int16_t x88 = -1;
int64_t x90 = INT64_MAX;
volatile int8_t x93 = INT8_MIN;
volatile int32_t t18 = -11310;
static int8_t x112 = INT8_MIN;
int32_t x116 = -1;
static volatile int64_t x118 = -7072030782LL;
volatile int16_t x123 = -1;
uint8_t x128 = 8U;
int8_t x132 = INT8_MIN;
int64_t x133 = -34576627193004107LL;
uint16_t x139 = UINT16_MAX;
volatile uint32_t t29 = 5242901U;
int16_t x155 = INT16_MIN;
volatile int64_t x156 = 1LL;
static int8_t x173 = INT8_MAX;
int32_t x178 = -1;
int16_t x183 = INT16_MIN;
uint32_t x184 = 331294172U;
static uint8_t x193 = 95U;
uint16_t x199 = 83U;
int32_t t39 = 17282552;
static int16_t x205 = INT16_MIN;
int32_t t43 = 2;
static int16_t x222 = 1;
int32_t x233 = INT32_MIN;
uint8_t x235 = 3U;
volatile int32_t x239 = -1;
int64_t t47 = 195270703621565LL;
int16_t x254 = INT16_MIN;
int64_t x257 = INT64_MIN;
static volatile uint64_t x269 = 78680337142LLU;
static uint16_t x271 = UINT16_MAX;
static int8_t x272 = -1;
uint8_t x273 = UINT8_MAX;
volatile uint64_t t53 = 9741LLU;
uint64_t x281 = UINT64_MAX;
int16_t x297 = INT16_MAX;
uint16_t x299 = 2U;
uint32_t x300 = 64803U;
static volatile uint32_t t58 = 1005035U;
int16_t x304 = 3;
static uint16_t x307 = 8U;
int32_t t60 = 399971;
uint32_t x309 = UINT32_MAX;
int16_t x310 = 2050;
uint8_t x312 = 0U;
static uint32_t x313 = UINT32_MAX;
int64_t x326 = 553767986LL;
static int32_t t63 = -2;
uint64_t x329 = 33LLU;
int32_t x331 = -630441;
volatile int32_t t64 = 0;
volatile uint64_t t65 = 2894001LLU;
static int8_t x337 = 24;
uint32_t x338 = 547636U;
uint32_t x350 = 0U;
int16_t x351 = 0;
volatile int32_t x352 = 1;
int16_t x363 = -1499;
int32_t x389 = -1;
int16_t x396 = -12;
static uint16_t x400 = 6U;
uint64_t x401 = 1491238208129LLU;
uint8_t x402 = UINT8_MAX;
static int8_t x403 = 2;
volatile int32_t t75 = -27;
volatile int8_t x418 = 29;
volatile uint8_t x419 = UINT8_MAX;
uint64_t x420 = 64487755752928LLU;
int32_t x436 = -1;
static int8_t x439 = -1;
int16_t x446 = -1;
int32_t x478 = INT32_MIN;
int32_t x482 = INT32_MAX;
volatile uint64_t t88 = 97163LLU;
volatile int8_t x499 = -38;
static int32_t x501 = -1;
volatile int32_t x512 = -241554;
int8_t x514 = INT8_MAX;
int8_t x516 = INT8_MAX;
int32_t t95 = -5666;
uint16_t x518 = UINT16_MAX;
int32_t x527 = INT32_MIN;
uint64_t t98 = 2161510294888LLU;


void f0(void) {
	static uint64_t x1 = 8959322781927LLU;
	volatile int16_t x2 = 2;
	volatile int64_t x4 = -1LL;

	t0 = ((x1<x2)-(x3*x4));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x10 = 30U;
	static uint32_t x11 = 676755U;
	volatile int32_t x12 = 237847247;
	volatile uint32_t t1 = 1U;

	t1 = ((x9<x10)-(x11*x12));

	if (t1 != 2470676004U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 2504925LLU;
	volatile int8_t x14 = -1;
	int8_t x15 = INT8_MAX;
	int32_t t2 = 59425627;

	t2 = ((x13<x14)-(x15*x16));

	if (t2 != 763) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x17 = -1;
	int16_t x18 = INT16_MAX;
	uint16_t x19 = 2060U;
	int64_t x20 = -10025805375LL;
	static int64_t t3 = -6207870331LL;

	t3 = ((x17<x18)-(x19*x20));

	if (t3 != 20653159072501LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x21 = -1LL;
	static int8_t x22 = INT8_MIN;
	static uint64_t x23 = UINT64_MAX;
	static int32_t x24 = -1289706;
	volatile uint64_t t4 = 1773377182LLU;

	t4 = ((x21<x22)-(x23*x24));

	if (t4 != 18446744073708261910LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -1LL;
	uint64_t x26 = 73732034LLU;
	int64_t x27 = -168428806LL;
	volatile int64_t t5 = 1876463333LL;

	t5 = ((x25<x26)-(x27*x28));

	if (t5 != 21390458362LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	int16_t x30 = INT16_MAX;
	int64_t x31 = -66392LL;
	volatile int64_t t6 = 11LL;

	t6 = ((x29<x30)-(x31*x32));

	if (t6 != -8498175LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x38 = 6U;
	static int64_t x39 = -1LL;
	static uint8_t x40 = UINT8_MAX;
	int64_t t7 = 2650366617741930LL;

	t7 = ((x37<x38)-(x39*x40));

	if (t7 != 256LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = -1LL;
	static uint16_t x43 = UINT16_MAX;
	static uint64_t x44 = 80LLU;
	volatile uint64_t t8 = 9LLU;

	t8 = ((x41<x42)-(x43*x44));

	if (t8 != 18446744073704308816LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = 3U;
	volatile int32_t x46 = -1;
	int8_t x47 = INT8_MIN;
	int64_t x48 = -1LL;
	volatile int64_t t9 = -10841126665420LL;

	t9 = ((x45<x46)-(x47*x48));

	if (t9 != -127LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x49 = 5U;
	int16_t x50 = -1;
	volatile uint32_t x51 = UINT32_MAX;
	int8_t x52 = 23;
	volatile uint32_t t10 = 6025680U;

	t10 = ((x49<x50)-(x51*x52));

	if (t10 != 23U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x55 = 16697U;
	volatile uint8_t x56 = 13U;
	int32_t t11 = 78116226;

	t11 = ((x53<x54)-(x55*x56));

	if (t11 != -217061) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x69 = 33U;
	int64_t x70 = INT64_MAX;
	uint32_t x71 = 58230459U;
	volatile int32_t x72 = -1;
	volatile uint32_t t12 = 334225U;

	t12 = ((x69<x70)-(x71*x72));

	if (t12 != 58230460U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x73 = -11;
	volatile uint64_t x74 = 603524490LLU;
	int32_t x75 = 1844;
	volatile int16_t x76 = 2;
	static int32_t t13 = 13334;

	t13 = ((x73<x74)-(x75*x76));

	if (t13 != -3688) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x77 = 121;
	int8_t x78 = -1;
	uint32_t x80 = 14126U;
	int64_t t14 = -17LL;

	t14 = ((x77<x78)-(x79*x80));

	if (t14 != -391144532688LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x82 = 824313875301LLU;
	static int64_t x83 = -248150607380598500LL;
	int8_t x84 = -1;
	static int64_t t15 = -15727638450659591LL;

	t15 = ((x81<x82)-(x83*x84));

	if (t15 != -248150607380598500LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x85 = INT8_MIN;
	static int32_t x86 = -1;
	uint8_t x87 = 92U;
	int32_t t16 = -277;

	t16 = ((x85<x86)-(x87*x88));

	if (t16 != 93) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x89 = 0;
	static uint16_t x91 = 61U;
	int32_t x92 = 45531;
	volatile int32_t t17 = -266637660;

	t17 = ((x89<x90)-(x91*x92));

	if (t17 != -2777390) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x94 = 61828976620016002LL;
	int8_t x95 = -1;
	int16_t x96 = INT16_MIN;

	t18 = ((x93<x94)-(x95*x96));

	if (t18 != -32767) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x109 = UINT64_MAX;
	uint32_t x110 = 2U;
	static int16_t x111 = INT16_MIN;
	volatile int32_t t19 = 5949;

	t19 = ((x109<x110)-(x111*x112));

	if (t19 != -4194304) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x113 = -14883LL;
	static int32_t x114 = INT32_MAX;
	int32_t x115 = -1;
	int32_t t20 = 45;

	t20 = ((x113<x114)-(x115*x116));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x117 = -2877563;
	int64_t x119 = -1LL;
	int64_t x120 = 23599134839088220LL;
	volatile int64_t t21 = 91LL;

	t21 = ((x117<x118)-(x119*x120));

	if (t21 != 23599134839088220LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x121 = INT8_MAX;
	volatile int16_t x122 = -320;
	volatile uint64_t x124 = UINT64_MAX;
	uint64_t t22 = UINT64_MAX;

	t22 = ((x121<x122)-(x123*x124));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x125 = INT16_MIN;
	int16_t x126 = -1;
	int8_t x127 = -1;
	static volatile int32_t t23 = -95377715;

	t23 = ((x125<x126)-(x127*x128));

	if (t23 != 9) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x129 = INT32_MAX;
	static int8_t x130 = -1;
	uint64_t x131 = 6238785810LLU;
	uint64_t t24 = 3368079411614239226LLU;

	t24 = ((x129<x130)-(x131*x132));

	if (t24 != 798564583680LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x134 = INT8_MAX;
	volatile uint64_t x135 = 2165712371317LLU;
	int16_t x136 = INT16_MAX;
	uint64_t t25 = 28017LLU;

	t25 = ((x133<x134)-(x135*x136));

	if (t25 != 18375780176438607478LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x137 = 0U;
	volatile int32_t x138 = INT32_MIN;
	int16_t x140 = -57;
	int32_t t26 = 846603;

	t26 = ((x137<x138)-(x139*x140));

	if (t26 != 3735495) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x141 = 3258;
	int8_t x142 = INT8_MIN;
	static uint8_t x143 = 28U;
	int64_t x144 = 210359867467099579LL;
	int64_t t27 = -7744188744109LL;

	t27 = ((x141<x142)-(x143*x144));

	if (t27 != -5890076289078788212LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x145 = 0;
	uint16_t x146 = 1340U;
	int16_t x147 = INT16_MIN;
	static uint16_t x148 = UINT16_MAX;
	int32_t t28 = 2;

	t28 = ((x145<x146)-(x147*x148));

	if (t28 != 2147450881) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x149 = INT32_MIN;
	uint8_t x150 = 57U;
	uint8_t x151 = 32U;
	uint32_t x152 = 64U;

	t29 = ((x149<x150)-(x151*x152));

	if (t29 != 4294965249U) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x153 = 9913920LL;
	uint32_t x154 = 28U;
	volatile int64_t t30 = -1LL;

	t30 = ((x153<x154)-(x155*x156));

	if (t30 != 32768LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x161 = INT8_MAX;
	volatile uint16_t x162 = 80U;
	uint64_t x163 = UINT64_MAX;
	static volatile uint8_t x164 = UINT8_MAX;
	static volatile uint64_t t31 = 14623243250LLU;

	t31 = ((x161<x162)-(x163*x164));

	if (t31 != 255LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x174 = INT8_MAX;
	volatile int16_t x175 = INT16_MIN;
	uint64_t x176 = 1222982771489285LLU;
	uint64_t t32 = 528997340LLU;

	t32 = ((x173<x174)-(x175*x176));

	if (t32 != 3181211308741787648LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x177 = INT32_MAX;
	uint64_t x179 = 85365652586LLU;
	int16_t x180 = 1;
	volatile uint64_t t33 = 1093982LLU;

	t33 = ((x177<x178)-(x179*x180));

	if (t33 != 18446743988343899030LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x181 = -1LL;
	int64_t x182 = -143418541LL;
	uint32_t t34 = 147151U;

	t34 = ((x181<x182)-(x183*x184));

	if (t34 != 2465071104U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x185 = INT16_MAX;
	int8_t x186 = INT8_MAX;
	volatile int16_t x187 = INT16_MIN;
	uint8_t x188 = 1U;
	int32_t t35 = -122;

	t35 = ((x185<x186)-(x187*x188));

	if (t35 != 32768) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x189 = INT16_MIN;
	static volatile uint16_t x190 = 6760U;
	int32_t x191 = -1;
	volatile int8_t x192 = INT8_MIN;
	volatile int32_t t36 = 3386767;

	t36 = ((x189<x190)-(x191*x192));

	if (t36 != -127) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x194 = UINT32_MAX;
	static int8_t x195 = 1;
	volatile uint32_t x196 = 0U;
	volatile uint32_t t37 = 16U;

	t37 = ((x193<x194)-(x195*x196));

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x197 = -1LL;
	int16_t x198 = INT16_MIN;
	uint64_t x200 = UINT64_MAX;
	volatile uint64_t t38 = 8225813858689LLU;

	t38 = ((x197<x198)-(x199*x200));

	if (t38 != 83LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x201 = -1;
	int8_t x202 = INT8_MIN;
	static int32_t x203 = -1;
	static uint16_t x204 = 606U;

	t39 = ((x201<x202)-(x203*x204));

	if (t39 != 606) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x206 = 13719027384455387LLU;
	int8_t x207 = 62;
	uint16_t x208 = 896U;
	static int32_t t40 = 12906;

	t40 = ((x205<x206)-(x207*x208));

	if (t40 != -55552) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x209 = -1;
	uint16_t x210 = 6U;
	int64_t x211 = -6194790LL;
	volatile uint64_t x212 = 1LLU;
	uint64_t t41 = 44660LLU;

	t41 = ((x209<x210)-(x211*x212));

	if (t41 != 6194791LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x213 = 2849LL;
	uint8_t x214 = UINT8_MAX;
	uint16_t x215 = 0U;
	int64_t x216 = -1LL;
	volatile int64_t t42 = 214675209968LL;

	t42 = ((x213<x214)-(x215*x216));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x217 = INT32_MIN;
	int64_t x218 = INT64_MAX;
	uint16_t x219 = UINT16_MAX;
	volatile uint8_t x220 = 38U;

	t43 = ((x217<x218)-(x219*x220));

	if (t43 != -2490329) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x221 = UINT64_MAX;
	int64_t x223 = -1LL;
	uint16_t x224 = 3882U;
	volatile int64_t t44 = 4318698429456149LL;

	t44 = ((x221<x222)-(x223*x224));

	if (t44 != 3882LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x229 = INT8_MAX;
	volatile int32_t x230 = 26872327;
	static uint8_t x231 = UINT8_MAX;
	uint64_t x232 = 12048173304LLU;
	volatile uint64_t t45 = 235410LLU;

	t45 = ((x229<x230)-(x231*x232));

	if (t45 != 18446741001425359097LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x234 = INT32_MAX;
	static uint64_t x236 = UINT64_MAX;
	uint64_t t46 = 273308216267927LLU;

	t46 = ((x233<x234)-(x235*x236));

	if (t46 != 4LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x237 = 10625U;
	static int32_t x238 = -3657;
	int64_t x240 = -1LL;

	t47 = ((x237<x238)-(x239*x240));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x249 = UINT16_MAX;
	static volatile int32_t x250 = -1;
	int16_t x251 = INT16_MAX;
	volatile uint64_t x252 = UINT64_MAX;
	uint64_t t48 = 198LLU;

	t48 = ((x249<x250)-(x251*x252));

	if (t48 != 32767LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x253 = 15603643U;
	int16_t x255 = -4;
	static int16_t x256 = 1;
	volatile int32_t t49 = 1160;

	t49 = ((x253<x254)-(x255*x256));

	if (t49 != 5) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x258 = -91348978601LL;
	uint32_t x259 = UINT32_MAX;
	static int32_t x260 = INT32_MIN;
	volatile uint32_t t50 = 0U;

	t50 = ((x257<x258)-(x259*x260));

	if (t50 != 2147483649U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x261 = INT16_MIN;
	int64_t x262 = 7587LL;
	static int8_t x263 = INT8_MAX;
	uint16_t x264 = 26U;
	volatile int32_t t51 = -7669128;

	t51 = ((x261<x262)-(x263*x264));

	if (t51 != -3301) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x270 = UINT16_MAX;
	int32_t t52 = 142181579;

	t52 = ((x269<x270)-(x271*x272));

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x274 = -6818;
	int8_t x275 = 2;
	uint64_t x276 = 253063320410654LLU;

	t53 = ((x273<x274)-(x275*x276));

	if (t53 != 18446237947068730308LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x277 = INT64_MIN;
	static uint16_t x278 = 302U;
	int16_t x279 = 1;
	volatile int16_t x280 = -4948;
	volatile int32_t t54 = -9;

	t54 = ((x277<x278)-(x279*x280));

	if (t54 != 4949) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x282 = 5619U;
	int8_t x283 = INT8_MIN;
	int8_t x284 = -21;
	int32_t t55 = 5628;

	t55 = ((x281<x282)-(x283*x284));

	if (t55 != -2688) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x285 = INT64_MAX;
	uint8_t x286 = 25U;
	int16_t x287 = INT16_MAX;
	int32_t x288 = 212;
	int32_t t56 = -15;

	t56 = ((x285<x286)-(x287*x288));

	if (t56 != -6946604) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x289 = INT32_MAX;
	int8_t x290 = -1;
	volatile uint32_t x291 = UINT32_MAX;
	int32_t x292 = -1;
	volatile uint32_t t57 = UINT32_MAX;

	t57 = ((x289<x290)-(x291*x292));

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x298 = 0U;

	t58 = ((x297<x298)-(x299*x300));

	if (t58 != 4294837690U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x301 = 2U;
	static int16_t x302 = 89;
	int8_t x303 = -1;
	int32_t t59 = 1;

	t59 = ((x301<x302)-(x303*x304));

	if (t59 != 4) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x305 = INT32_MAX;
	int16_t x306 = -1;
	uint16_t x308 = 2U;

	t60 = ((x305<x306)-(x307*x308));

	if (t60 != -16) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x311 = INT32_MIN;
	static volatile int32_t t61 = -5;

	t61 = ((x309<x310)-(x311*x312));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x314 = 0U;
	int16_t x315 = 12;
	int64_t x316 = -107LL;
	static volatile int64_t t62 = 157LL;

	t62 = ((x313<x314)-(x315*x316));

	if (t62 != 1284LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x325 = 2367U;
	static uint16_t x327 = 5U;
	int16_t x328 = -1;

	t63 = ((x325<x326)-(x327*x328));

	if (t63 != 6) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x330 = 0;
	int8_t x332 = INT8_MIN;

	t64 = ((x329<x330)-(x331*x332));

	if (t64 != -80696448) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x333 = INT32_MAX;
	volatile int64_t x334 = INT64_MIN;
	int32_t x335 = -301241;
	uint64_t x336 = UINT64_MAX;

	t65 = ((x333<x334)-(x335*x336));

	if (t65 != 18446744073709250375LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x339 = 0U;
	uint8_t x340 = 0U;
	volatile int32_t t66 = -1729;

	t66 = ((x337<x338)-(x339*x340));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x349 = 662;
	static volatile int32_t t67 = 204;

	t67 = ((x349<x350)-(x351*x352));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x353 = -1LL;
	static int64_t x354 = -1LL;
	static int16_t x355 = INT16_MIN;
	static int16_t x356 = -1;
	int32_t t68 = -38982;

	t68 = ((x353<x354)-(x355*x356));

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x361 = -1;
	volatile int32_t x362 = -1;
	uint32_t x364 = 116155U;
	volatile uint32_t t69 = 33649U;

	t69 = ((x361<x362)-(x363*x364));

	if (t69 != 174116345U) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x377 = INT16_MIN;
	uint64_t x378 = 7LLU;
	int64_t x379 = -1LL;
	uint64_t x380 = UINT64_MAX;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = ((x377<x378)-(x379*x380));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x390 = INT32_MIN;
	static volatile int16_t x391 = INT16_MIN;
	uint32_t x392 = UINT32_MAX;
	volatile uint32_t t71 = 110118U;

	t71 = ((x389<x390)-(x391*x392));

	if (t71 != 4294934528U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x393 = INT32_MIN;
	int32_t x394 = INT32_MAX;
	uint8_t x395 = 29U;
	int32_t t72 = -9370175;

	t72 = ((x393<x394)-(x395*x396));

	if (t72 != 349) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x397 = 4U;
	int64_t x398 = -670861421912375826LL;
	int32_t x399 = -1;
	int32_t t73 = -5;

	t73 = ((x397<x398)-(x399*x400));

	if (t73 != 6) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x404 = 3841U;
	int32_t t74 = 53315067;

	t74 = ((x401<x402)-(x403*x404));

	if (t74 != -7682) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x409 = -1;
	int64_t x410 = -404059LL;
	uint16_t x411 = 2964U;
	static uint8_t x412 = 113U;

	t75 = ((x409<x410)-(x411*x412));

	if (t75 != -334932) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x413 = INT16_MIN;
	static uint16_t x414 = UINT16_MAX;
	volatile uint32_t x415 = UINT32_MAX;
	static uint64_t x416 = 385LLU;
	uint64_t t76 = 3839765588702017LLU;

	t76 = ((x413<x414)-(x415*x416));

	if (t76 != 18446742420147143042LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x417 = -3289019LL;
	uint64_t t77 = 447796585621LLU;

	t77 = ((x417<x418)-(x419*x420));

	if (t77 != 18430299695992554977LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x425 = INT8_MIN;
	uint16_t x426 = 8047U;
	int16_t x427 = 146;
	static uint8_t x428 = 72U;
	volatile int32_t t78 = -2;

	t78 = ((x425<x426)-(x427*x428));

	if (t78 != -10511) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x433 = INT64_MAX;
	int32_t x434 = INT32_MIN;
	int32_t x435 = 84424588;
	int32_t t79 = -62392920;

	t79 = ((x433<x434)-(x435*x436));

	if (t79 != 84424588) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x437 = 10494242U;
	volatile uint16_t x438 = 10065U;
	volatile int32_t x440 = 3680;
	int32_t t80 = -3259;

	t80 = ((x437<x438)-(x439*x440));

	if (t80 != 3680) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x445 = INT8_MIN;
	volatile int8_t x447 = 7;
	uint64_t x448 = 62926925730038652LLU;
	static uint64_t t81 = 259244305575683LLU;

	t81 = ((x445<x446)-(x447*x448));

	if (t81 != 18006255593599281053LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x449 = INT16_MIN;
	int8_t x450 = INT8_MIN;
	static int16_t x451 = INT16_MIN;
	int8_t x452 = INT8_MIN;
	static volatile int32_t t82 = -6;

	t82 = ((x449<x450)-(x451*x452));

	if (t82 != -4194303) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x461 = INT16_MAX;
	volatile int8_t x462 = INT8_MIN;
	volatile uint32_t x463 = UINT32_MAX;
	int8_t x464 = INT8_MIN;
	volatile uint32_t t83 = 99165055U;

	t83 = ((x461<x462)-(x463*x464));

	if (t83 != 4294967168U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x465 = UINT32_MAX;
	uint16_t x466 = 407U;
	uint64_t x467 = 16597LLU;
	static int64_t x468 = -1LL;
	uint64_t t84 = 403754972LLU;

	t84 = ((x465<x466)-(x467*x468));

	if (t84 != 16597LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x473 = 118U;
	int16_t x474 = INT16_MAX;
	static volatile uint32_t x475 = 503881106U;
	int16_t x476 = -1;
	uint32_t t85 = 37716U;

	t85 = ((x473<x474)-(x475*x476));

	if (t85 != 503881107U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x477 = INT8_MAX;
	static int8_t x479 = -18;
	uint16_t x480 = UINT16_MAX;
	int32_t t86 = -127066768;

	t86 = ((x477<x478)-(x479*x480));

	if (t86 != 1179630) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x481 = 1830609LLU;
	uint32_t x483 = 13225483U;
	int32_t x484 = -1;
	uint32_t t87 = 1359U;

	t87 = ((x481<x482)-(x483*x484));

	if (t87 != 13225484U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x485 = INT8_MAX;
	volatile int8_t x486 = 13;
	volatile uint64_t x487 = UINT64_MAX;
	int64_t x488 = INT64_MIN;

	t88 = ((x485<x486)-(x487*x488));

	if (t88 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x489 = 1022U;
	int16_t x490 = -174;
	static int32_t x491 = -1;
	static int16_t x492 = 13612;
	int32_t t89 = 1399173;

	t89 = ((x489<x490)-(x491*x492));

	if (t89 != 13613) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x493 = 1511;
	uint8_t x494 = 9U;
	uint32_t x495 = 23U;
	volatile int32_t x496 = INT32_MIN;
	uint32_t t90 = 98037676U;

	t90 = ((x493<x494)-(x495*x496));

	if (t90 != 2147483648U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x497 = -2LL;
	uint64_t x498 = 3278764694029763408LLU;
	int32_t x500 = -1;
	volatile int32_t t91 = -465670;

	t91 = ((x497<x498)-(x499*x500));

	if (t91 != -38) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x502 = 1294;
	int8_t x503 = INT8_MAX;
	static volatile uint16_t x504 = UINT16_MAX;
	volatile int32_t t92 = -1;

	t92 = ((x501<x502)-(x503*x504));

	if (t92 != -8322944) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x505 = 87506082029653392LLU;
	static int32_t x506 = 1;
	int64_t x507 = 2003073LL;
	int8_t x508 = -3;
	volatile int64_t t93 = -525595981568837306LL;

	t93 = ((x505<x506)-(x507*x508));

	if (t93 != 6009219LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x509 = INT8_MIN;
	int64_t x510 = INT64_MIN;
	static int8_t x511 = 12;
	volatile int32_t t94 = 124365923;

	t94 = ((x509<x510)-(x511*x512));

	if (t94 != 2898648) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x513 = -283902;
	volatile int8_t x515 = -59;

	t95 = ((x513<x514)-(x515*x516));

	if (t95 != 7494) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x517 = UINT16_MAX;
	int16_t x519 = -1;
	int64_t x520 = INT64_MAX;
	int64_t t96 = INT64_MAX;

	t96 = ((x517<x518)-(x519*x520));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x521 = -1;
	int64_t x522 = INT64_MAX;
	int16_t x523 = -2386;
	int16_t x524 = -1;
	volatile int32_t t97 = -200835;

	t97 = ((x521<x522)-(x523*x524));

	if (t97 != -2385) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint64_t x525 = 287282428LLU;
	uint8_t x526 = 12U;
	volatile uint64_t x528 = 108158101366478340LLU;

	t98 = ((x525<x526)-(x527*x528));

	if (t98 != 3297702561615708160LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x529 = INT32_MIN;
	uint8_t x530 = 0U;
	static int8_t x531 = -1;
	uint64_t x532 = 204LLU;
	uint64_t t99 = 96100367148298LLU;

	t99 = ((x529<x530)-(x531*x532));

	if (t99 != 205LLU) { NG(); } else { ; }
	
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


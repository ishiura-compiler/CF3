#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -969;
int8_t x8 = 0;
volatile int32_t t3 = 462827255;
uint64_t x29 = 59438308160LLU;
int64_t x32 = 307437161393242430LL;
volatile int64_t x36 = INT64_MIN;
volatile int16_t x43 = INT16_MAX;
uint64_t x61 = UINT64_MAX;
static int16_t x62 = 1;
static int8_t x63 = INT8_MIN;
volatile int32_t t10 = 31;
int16_t x73 = -1;
static int32_t x83 = -949;
int8_t x86 = INT8_MIN;
int32_t t15 = -59;
int16_t x98 = -1;
int64_t x103 = -1LL;
volatile int16_t x107 = INT16_MAX;
int32_t t20 = -201430310;
volatile int16_t x109 = -1997;
int64_t x116 = 7237LL;
uint64_t x132 = 3334587366822LLU;
static uint16_t x140 = 0U;
static uint32_t x149 = 12U;
static int32_t t26 = 61285;
static int32_t x166 = INT32_MIN;
uint64_t x168 = 390840LLU;
int32_t t28 = -706292;
int32_t t31 = 110851138;
int16_t x181 = INT16_MIN;
volatile int8_t x183 = INT8_MIN;
int16_t x188 = -1;
static uint8_t x190 = 1U;
int32_t x191 = 246959845;
int16_t x192 = 226;
int32_t x197 = INT32_MIN;
static uint32_t x200 = 6334U;
static volatile int32_t t36 = -6376;
int64_t x207 = 11LL;
uint8_t x210 = 10U;
volatile uint64_t x221 = 16LLU;
int64_t x225 = INT64_MIN;
int32_t t43 = -6;
int16_t x243 = -1;
uint32_t x249 = UINT32_MAX;
static volatile uint32_t x252 = UINT32_MAX;
volatile int8_t x254 = -1;
int16_t x258 = -70;
int32_t x262 = -1;
uint8_t x275 = UINT8_MAX;
uint64_t x277 = 3LLU;
int32_t x281 = INT32_MAX;
int64_t x284 = INT64_MAX;
static int32_t t54 = -6998855;
volatile int64_t x289 = -2199910053LL;
uint32_t x294 = 1263046376U;
static int16_t x295 = INT16_MAX;
int8_t x297 = 0;
int64_t x304 = INT64_MIN;
uint8_t x306 = UINT8_MAX;
int32_t t60 = 56;
uint32_t x309 = UINT32_MAX;
int8_t x318 = 0;
int32_t t62 = 2;
int64_t x323 = INT64_MIN;
volatile int8_t x331 = -3;
uint8_t x334 = 55U;
volatile int32_t t66 = 176108;
static int32_t x351 = -1;
int64_t x353 = 1435852029995LL;
volatile int32_t t68 = -960073;
int32_t t69 = 26;
int32_t x363 = INT32_MIN;
volatile int8_t x380 = 59;
static uint16_t x412 = 58U;
int32_t t77 = 1497998;
int32_t x418 = -1;
uint16_t x419 = UINT16_MAX;
static uint8_t x420 = 6U;
static int32_t t78 = 430257;
int64_t x425 = INT64_MAX;
int64_t x427 = INT64_MIN;
int16_t x429 = INT16_MIN;
static uint16_t x431 = 1952U;
int32_t t81 = 2;
static volatile uint64_t x433 = UINT64_MAX;
static volatile int32_t x434 = -1;
volatile uint32_t x439 = 690937660U;
static volatile int32_t t83 = -465;
uint32_t x443 = 293U;
volatile int32_t t84 = 526;
volatile int32_t t85 = 1;
int32_t x449 = INT32_MIN;
volatile int8_t x459 = INT8_MIN;
volatile uint8_t x461 = 32U;
uint8_t x462 = 19U;
volatile int32_t t90 = -11;
volatile int32_t t91 = -6511600;
uint16_t x483 = 174U;
int16_t x496 = INT16_MAX;
int64_t x498 = 4014978726335685LL;
int32_t x499 = INT32_MIN;
uint16_t x513 = 6240U;
uint32_t x514 = 85U;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int32_t x2 = INT32_MIN;
	volatile int32_t x3 = INT32_MAX;
	int16_t x4 = INT16_MIN;

	t0 = ((x1+x2)==(x3+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int8_t x6 = -63;
	volatile int8_t x7 = 0;
	volatile int32_t t1 = -6;

	t1 = ((x5+x6)==(x7+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -621645LL;
	int8_t x10 = INT8_MIN;
	static int8_t x11 = -16;
	int64_t x12 = -1LL;
	int32_t t2 = -44183;

	t2 = ((x9+x10)==(x11+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 246280345845038LL;
	uint8_t x14 = 27U;
	int16_t x15 = 69;
	uint8_t x16 = 59U;

	t3 = ((x13+x14)==(x15+x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = -1;
	int16_t x18 = INT16_MIN;
	int8_t x19 = 57;
	uint16_t x20 = UINT16_MAX;
	int32_t t4 = 85;

	t4 = ((x17+x18)==(x19+x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x30 = 0U;
	uint8_t x31 = 6U;
	volatile int32_t t5 = 4862;

	t5 = ((x29+x30)==(x31+x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = -45353650160158LL;
	int16_t x34 = INT16_MAX;
	static uint64_t x35 = 3371443453255299297LLU;
	int32_t t6 = -905624;

	t6 = ((x33+x34)==(x35+x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = INT32_MAX;
	int8_t x42 = INT8_MIN;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t7 = 73088272;

	t7 = ((x41+x42)==(x43+x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x53 = -6;
	uint8_t x54 = 6U;
	uint32_t x55 = UINT32_MAX;
	int32_t x56 = INT32_MIN;
	volatile int32_t t8 = 522810509;

	t8 = ((x53+x54)==(x55+x56));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x57 = 3060796479057LLU;
	int8_t x58 = INT8_MIN;
	int8_t x59 = INT8_MIN;
	int16_t x60 = -1;
	int32_t t9 = 880;

	t9 = ((x57+x58)==(x59+x60));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x64 = 1013517883774314LLU;

	t10 = ((x61+x62)==(x63+x64));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x69 = -1;
	int8_t x70 = INT8_MIN;
	static uint16_t x71 = UINT16_MAX;
	int32_t x72 = INT32_MIN;
	volatile int32_t t11 = -2695996;

	t11 = ((x69+x70)==(x71+x72));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x74 = 2U;
	uint32_t x75 = 2741939U;
	uint64_t x76 = 613645415LLU;
	static int32_t t12 = -812;

	t12 = ((x73+x74)==(x75+x76));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x77 = INT8_MAX;
	static int64_t x78 = INT64_MIN;
	int32_t x79 = INT32_MIN;
	volatile int64_t x80 = -1LL;
	volatile int32_t t13 = 601669175;

	t13 = ((x77+x78)==(x79+x80));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x81 = INT8_MIN;
	static int32_t x82 = -1;
	static int8_t x84 = -1;
	int32_t t14 = -10235;

	t14 = ((x81+x82)==(x83+x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x85 = UINT16_MAX;
	uint16_t x87 = 1863U;
	volatile uint32_t x88 = UINT32_MAX;

	t15 = ((x85+x86)==(x87+x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x89 = -1LL;
	volatile uint64_t x90 = 117945788519LLU;
	int32_t x91 = INT32_MIN;
	int64_t x92 = -1170747360LL;
	volatile int32_t t16 = -1249097;

	t16 = ((x89+x90)==(x91+x92));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x93 = UINT32_MAX;
	int64_t x94 = 2972924758885739403LL;
	uint32_t x95 = 1585U;
	uint8_t x96 = 49U;
	volatile int32_t t17 = 958;

	t17 = ((x93+x94)==(x95+x96));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x97 = INT8_MAX;
	int16_t x99 = -1;
	uint8_t x100 = 3U;
	volatile int32_t t18 = 110670;

	t18 = ((x97+x98)==(x99+x100));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x101 = INT8_MIN;
	int8_t x102 = 28;
	uint8_t x104 = 119U;
	volatile int32_t t19 = -22;

	t19 = ((x101+x102)==(x103+x104));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x105 = 6376103678551701LLU;
	volatile uint32_t x106 = UINT32_MAX;
	int16_t x108 = -271;

	t20 = ((x105+x106)==(x107+x108));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x110 = 59;
	static int32_t x111 = -1109;
	uint64_t x112 = 160382LLU;
	int32_t t21 = 2704;

	t21 = ((x109+x110)==(x111+x112));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x113 = 29U;
	int8_t x114 = -1;
	int8_t x115 = -1;
	volatile int32_t t22 = 15077;

	t22 = ((x113+x114)==(x115+x116));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x129 = -1LL;
	static int16_t x130 = INT16_MIN;
	int64_t x131 = INT64_MIN;
	volatile int32_t t23 = 695970;

	t23 = ((x129+x130)==(x131+x132));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x137 = INT16_MIN;
	int8_t x138 = INT8_MIN;
	static volatile uint16_t x139 = 26322U;
	int32_t t24 = 14349;

	t24 = ((x137+x138)==(x139+x140));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x141 = 296;
	uint8_t x142 = 2U;
	uint8_t x143 = 12U;
	volatile int64_t x144 = INT64_MIN;
	volatile int32_t t25 = 58908;

	t25 = ((x141+x142)==(x143+x144));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x150 = -7;
	uint8_t x151 = UINT8_MAX;
	int32_t x152 = -1;

	t26 = ((x149+x150)==(x151+x152));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x157 = -19;
	int16_t x158 = -1;
	uint8_t x159 = 0U;
	volatile int64_t x160 = INT64_MIN;
	int32_t t27 = -14437;

	t27 = ((x157+x158)==(x159+x160));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x165 = 0;
	int16_t x167 = INT16_MAX;

	t28 = ((x165+x166)==(x167+x168));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x169 = 865U;
	static int32_t x170 = INT32_MIN;
	int8_t x171 = INT8_MIN;
	uint8_t x172 = UINT8_MAX;
	volatile int32_t t29 = -2024;

	t29 = ((x169+x170)==(x171+x172));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x173 = 8853;
	uint32_t x174 = 11201U;
	uint16_t x175 = 46U;
	int32_t x176 = INT32_MIN;
	volatile int32_t t30 = 4;

	t30 = ((x173+x174)==(x175+x176));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x177 = -1;
	volatile int32_t x178 = INT32_MAX;
	static int64_t x179 = -5009736007189LL;
	static int32_t x180 = INT32_MIN;

	t31 = ((x177+x178)==(x179+x180));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x182 = 15503U;
	int16_t x184 = INT16_MAX;
	int32_t t32 = 120438728;

	t32 = ((x181+x182)==(x183+x184));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x185 = UINT64_MAX;
	uint8_t x186 = 2U;
	int8_t x187 = INT8_MIN;
	static volatile int32_t t33 = 5;

	t33 = ((x185+x186)==(x187+x188));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x189 = 3;
	int32_t t34 = 591073;

	t34 = ((x189+x190)==(x191+x192));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x193 = INT8_MAX;
	uint64_t x194 = 3425469LLU;
	volatile uint64_t x195 = 287553034426879LLU;
	volatile int16_t x196 = INT16_MIN;
	volatile int32_t t35 = -449;

	t35 = ((x193+x194)==(x195+x196));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x198 = 6024U;
	uint8_t x199 = 74U;

	t36 = ((x197+x198)==(x199+x200));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x201 = INT8_MAX;
	static int16_t x202 = INT16_MIN;
	int8_t x203 = INT8_MAX;
	uint32_t x204 = 1973409193U;
	int32_t t37 = -7;

	t37 = ((x201+x202)==(x203+x204));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x205 = INT8_MIN;
	static int16_t x206 = 4172;
	uint32_t x208 = 113280705U;
	static volatile int32_t t38 = -110586380;

	t38 = ((x205+x206)==(x207+x208));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x209 = 21214156742473LLU;
	int64_t x211 = INT64_MIN;
	uint8_t x212 = 36U;
	static int32_t t39 = -6490;

	t39 = ((x209+x210)==(x211+x212));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x217 = INT16_MAX;
	volatile uint32_t x218 = UINT32_MAX;
	static int16_t x219 = INT16_MAX;
	uint8_t x220 = 3U;
	volatile int32_t t40 = 53494;

	t40 = ((x217+x218)==(x219+x220));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x222 = UINT8_MAX;
	static uint8_t x223 = 93U;
	int64_t x224 = 1865835680892LL;
	static int32_t t41 = 1105;

	t41 = ((x221+x222)==(x223+x224));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x226 = INT16_MAX;
	volatile int16_t x227 = -1;
	int16_t x228 = 455;
	static volatile int32_t t42 = -24;

	t42 = ((x225+x226)==(x227+x228));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x233 = -1LL;
	int8_t x234 = INT8_MIN;
	int64_t x235 = INT64_MIN;
	uint8_t x236 = 7U;

	t43 = ((x233+x234)==(x235+x236));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x237 = INT16_MIN;
	static int8_t x238 = INT8_MAX;
	static int32_t x239 = INT32_MIN;
	int8_t x240 = 12;
	volatile int32_t t44 = 1039;

	t44 = ((x237+x238)==(x239+x240));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x241 = 22U;
	volatile int64_t x242 = INT64_MIN;
	int64_t x244 = -723750535536LL;
	volatile int32_t t45 = -366256567;

	t45 = ((x241+x242)==(x243+x244));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x245 = INT16_MAX;
	int32_t x246 = INT32_MIN;
	static int64_t x247 = INT64_MAX;
	int16_t x248 = INT16_MIN;
	volatile int32_t t46 = 1;

	t46 = ((x245+x246)==(x247+x248));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x250 = 66U;
	int8_t x251 = -31;
	static volatile int32_t t47 = 2487764;

	t47 = ((x249+x250)==(x251+x252));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint64_t x253 = 94LLU;
	volatile int8_t x255 = INT8_MAX;
	volatile int32_t x256 = INT32_MIN;
	volatile int32_t t48 = -10;

	t48 = ((x253+x254)==(x255+x256));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x257 = 0;
	uint64_t x259 = 2837LLU;
	int8_t x260 = INT8_MIN;
	int32_t t49 = -1143746;

	t49 = ((x257+x258)==(x259+x260));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x261 = INT32_MAX;
	int32_t x263 = INT32_MIN;
	volatile uint16_t x264 = UINT16_MAX;
	int32_t t50 = -346366;

	t50 = ((x261+x262)==(x263+x264));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x265 = -52958LL;
	int8_t x266 = INT8_MIN;
	int8_t x267 = INT8_MIN;
	int64_t x268 = 104190344573LL;
	int32_t t51 = 27;

	t51 = ((x265+x266)==(x267+x268));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x273 = INT64_MIN;
	uint16_t x274 = 0U;
	volatile int16_t x276 = -1;
	volatile int32_t t52 = 406545722;

	t52 = ((x273+x274)==(x275+x276));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x278 = 3786U;
	int8_t x279 = INT8_MIN;
	uint32_t x280 = 159223U;
	volatile int32_t t53 = -2;

	t53 = ((x277+x278)==(x279+x280));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x282 = INT32_MIN;
	int32_t x283 = -1;

	t54 = ((x281+x282)==(x283+x284));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x285 = 14U;
	volatile int16_t x286 = INT16_MIN;
	static int64_t x287 = -1LL;
	int64_t x288 = 70LL;
	volatile int32_t t55 = -1542;

	t55 = ((x285+x286)==(x287+x288));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x290 = -2166;
	static int64_t x291 = INT64_MAX;
	static uint64_t x292 = 1195LLU;
	int32_t t56 = -284272205;

	t56 = ((x289+x290)==(x291+x292));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x293 = INT32_MIN;
	uint32_t x296 = 854996U;
	static int32_t t57 = -7133612;

	t57 = ((x293+x294)==(x295+x296));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x298 = INT32_MAX;
	int8_t x299 = 1;
	volatile int16_t x300 = -1;
	int32_t t58 = 13;

	t58 = ((x297+x298)==(x299+x300));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x301 = INT64_MIN;
	uint16_t x302 = 1886U;
	static volatile int8_t x303 = 1;
	int32_t t59 = -18320537;

	t59 = ((x301+x302)==(x303+x304));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x305 = UINT8_MAX;
	uint32_t x307 = 9627174U;
	int64_t x308 = INT64_MIN;

	t60 = ((x305+x306)==(x307+x308));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x310 = INT32_MIN;
	uint64_t x311 = 18LLU;
	uint64_t x312 = UINT64_MAX;
	int32_t t61 = 1;

	t61 = ((x309+x310)==(x311+x312));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x317 = INT16_MAX;
	static int16_t x319 = -115;
	uint8_t x320 = 103U;

	t62 = ((x317+x318)==(x319+x320));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x321 = -5;
	uint8_t x322 = 3U;
	static int64_t x324 = INT64_MAX;
	int32_t t63 = -60411799;

	t63 = ((x321+x322)==(x323+x324));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x329 = 4623372LLU;
	int64_t x330 = -848844040206221LL;
	volatile int32_t x332 = 1583;
	int32_t t64 = 208;

	t64 = ((x329+x330)==(x331+x332));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x333 = 26683;
	uint8_t x335 = 0U;
	static volatile uint64_t x336 = 2138LLU;
	volatile int32_t t65 = 234047;

	t65 = ((x333+x334)==(x335+x336));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x345 = 1798U;
	static volatile int64_t x346 = 4139003LL;
	volatile int8_t x347 = -1;
	static int8_t x348 = INT8_MIN;

	t66 = ((x345+x346)==(x347+x348));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x349 = 7U;
	volatile int32_t x350 = -433930605;
	static int64_t x352 = 834340835LL;
	int32_t t67 = 0;

	t67 = ((x349+x350)==(x351+x352));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x354 = INT16_MAX;
	static int8_t x355 = -11;
	volatile uint16_t x356 = 0U;

	t68 = ((x353+x354)==(x355+x356));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x357 = 150670347U;
	int64_t x358 = -1LL;
	int16_t x359 = INT16_MAX;
	uint16_t x360 = 2U;

	t69 = ((x357+x358)==(x359+x360));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x361 = 3U;
	int8_t x362 = -1;
	volatile int16_t x364 = INT16_MAX;
	int32_t t70 = -6;

	t70 = ((x361+x362)==(x363+x364));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x365 = 5786740;
	static int16_t x366 = -772;
	int8_t x367 = -4;
	int8_t x368 = INT8_MIN;
	volatile int32_t t71 = -81;

	t71 = ((x365+x366)==(x367+x368));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x377 = UINT32_MAX;
	static volatile int32_t x378 = INT32_MAX;
	uint32_t x379 = 11485635U;
	int32_t t72 = 705929406;

	t72 = ((x377+x378)==(x379+x380));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x385 = 2U;
	static int16_t x386 = INT16_MIN;
	int64_t x387 = -1LL;
	volatile int8_t x388 = 12;
	static int32_t t73 = 1781570;

	t73 = ((x385+x386)==(x387+x388));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x389 = 1228;
	volatile uint32_t x390 = UINT32_MAX;
	int8_t x391 = INT8_MAX;
	static volatile int8_t x392 = INT8_MAX;
	static int32_t t74 = 1146;

	t74 = ((x389+x390)==(x391+x392));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x393 = 468;
	uint64_t x394 = 8190232317787LLU;
	int8_t x395 = INT8_MIN;
	static int32_t x396 = 9728720;
	volatile int32_t t75 = 2255;

	t75 = ((x393+x394)==(x395+x396));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x401 = 1763554709LLU;
	int64_t x402 = -799846438581LL;
	int16_t x403 = INT16_MIN;
	static int16_t x404 = INT16_MAX;
	int32_t t76 = -1099829;

	t76 = ((x401+x402)==(x403+x404));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x409 = 25U;
	int64_t x410 = -1LL;
	int32_t x411 = 71;

	t77 = ((x409+x410)==(x411+x412));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x417 = 43;

	t78 = ((x417+x418)==(x419+x420));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x421 = UINT64_MAX;
	static uint8_t x422 = 19U;
	static int16_t x423 = -1;
	int8_t x424 = 17;
	volatile int32_t t79 = -253892108;

	t79 = ((x421+x422)==(x423+x424));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x426 = 0;
	volatile int8_t x428 = 2;
	int32_t t80 = 1962975;

	t80 = ((x425+x426)==(x427+x428));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x430 = INT8_MAX;
	uint32_t x432 = 1U;

	t81 = ((x429+x430)==(x431+x432));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x435 = -1LL;
	volatile int16_t x436 = INT16_MIN;
	volatile int32_t t82 = -7256183;

	t82 = ((x433+x434)==(x435+x436));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x437 = -24;
	int64_t x438 = 1LL;
	int64_t x440 = -670LL;

	t83 = ((x437+x438)==(x439+x440));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x441 = -8;
	int16_t x442 = INT16_MIN;
	int8_t x444 = INT8_MIN;

	t84 = ((x441+x442)==(x443+x444));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x445 = INT64_MIN;
	volatile uint8_t x446 = 91U;
	volatile int8_t x447 = INT8_MIN;
	uint16_t x448 = UINT16_MAX;

	t85 = ((x445+x446)==(x447+x448));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x450 = INT32_MAX;
	int64_t x451 = -12LL;
	int16_t x452 = INT16_MIN;
	static int32_t t86 = 8068;

	t86 = ((x449+x450)==(x451+x452));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x453 = UINT64_MAX;
	volatile int8_t x454 = INT8_MAX;
	volatile int16_t x455 = -2;
	int32_t x456 = INT32_MAX;
	static int32_t t87 = -403577645;

	t87 = ((x453+x454)==(x455+x456));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x457 = -92149428939336870LL;
	int8_t x458 = INT8_MIN;
	static volatile int8_t x460 = INT8_MIN;
	int32_t t88 = -57;

	t88 = ((x457+x458)==(x459+x460));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x463 = INT64_MIN;
	volatile uint32_t x464 = 393U;
	volatile int32_t t89 = -170652271;

	t89 = ((x461+x462)==(x463+x464));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x465 = 3813;
	int16_t x466 = -1;
	static volatile int16_t x467 = -1;
	int8_t x468 = 22;

	t90 = ((x465+x466)==(x467+x468));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x477 = -1002093120;
	int8_t x478 = -9;
	uint32_t x479 = UINT32_MAX;
	static volatile uint16_t x480 = 14468U;

	t91 = ((x477+x478)==(x479+x480));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x481 = INT8_MAX;
	volatile uint32_t x482 = 6848U;
	int16_t x484 = 312;
	int32_t t92 = 3;

	t92 = ((x481+x482)==(x483+x484));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x485 = INT8_MIN;
	static uint64_t x486 = 2967688647284LLU;
	static int8_t x487 = INT8_MIN;
	uint16_t x488 = 4U;
	volatile int32_t t93 = -15745;

	t93 = ((x485+x486)==(x487+x488));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x489 = INT8_MIN;
	int32_t x490 = -25988477;
	uint32_t x491 = 74851U;
	int16_t x492 = INT16_MIN;
	volatile int32_t t94 = 301821870;

	t94 = ((x489+x490)==(x491+x492));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x493 = 4828433;
	static int32_t x494 = -1;
	int64_t x495 = -1LL;
	int32_t t95 = -1950;

	t95 = ((x493+x494)==(x495+x496));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x497 = -1LL;
	int16_t x500 = 2;
	volatile int32_t t96 = -428;

	t96 = ((x497+x498)==(x499+x500));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x501 = UINT16_MAX;
	int8_t x502 = INT8_MIN;
	static uint32_t x503 = UINT32_MAX;
	uint8_t x504 = 6U;
	volatile int32_t t97 = -11;

	t97 = ((x501+x502)==(x503+x504));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x505 = INT8_MIN;
	uint8_t x506 = 31U;
	uint64_t x507 = 7547013LLU;
	uint64_t x508 = UINT64_MAX;
	int32_t t98 = 1022;

	t98 = ((x505+x506)==(x507+x508));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x515 = INT16_MIN;
	int8_t x516 = 53;
	volatile int32_t t99 = 308023;

	t99 = ((x513+x514)==(x515+x516));

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


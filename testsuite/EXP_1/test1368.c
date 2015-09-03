#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = UINT32_MAX;
int8_t x7 = 5;
uint64_t t1 = 37221978LLU;
int64_t x11 = -1LL;
volatile int64_t t2 = 2121LL;
int32_t t3 = 1;
int8_t x32 = 12;
int32_t t4 = -589;
static uint16_t x34 = 2U;
uint64_t x50 = 0LLU;
int32_t x57 = INT32_MAX;
int16_t x62 = INT16_MIN;
static volatile uint64_t x77 = 4539LLU;
static int16_t x79 = 121;
static int16_t x84 = -2;
int64_t x87 = -1LL;
volatile int8_t x93 = INT8_MAX;
int8_t x96 = INT8_MIN;
volatile uint32_t x109 = 50309675U;
static volatile int64_t t19 = -115583LL;
int32_t x116 = INT32_MIN;
volatile int32_t x120 = INT32_MIN;
int64_t x121 = INT64_MIN;
uint64_t x140 = 745LLU;
volatile int16_t x141 = -336;
uint8_t x142 = 1U;
volatile uint64_t t25 = 422605LLU;
uint32_t x147 = UINT32_MAX;
volatile uint32_t t26 = UINT32_MAX;
int32_t x165 = INT32_MIN;
int8_t x171 = -1;
int32_t t30 = 9;
int64_t x187 = -176LL;
int64_t x192 = -1LL;
uint8_t x208 = 0U;
int8_t x209 = INT8_MAX;
int16_t x210 = INT16_MAX;
int16_t x229 = INT16_MIN;
static uint8_t x231 = 28U;
int64_t t39 = -41LL;
int64_t x241 = INT64_MAX;
static uint8_t x242 = 105U;
static int32_t t41 = -15598285;
volatile int32_t t43 = -5;
int32_t x270 = INT32_MIN;
volatile uint64_t x273 = UINT64_MAX;
static volatile int8_t x288 = 44;
volatile uint32_t t51 = 32907265U;
uint32_t x304 = 60932U;
volatile int64_t t54 = 11968LL;
int32_t t55 = -2760;
uint16_t x322 = 3U;
static int8_t x323 = INT8_MAX;
static int32_t x328 = 30406;
volatile int32_t t60 = -645219;
volatile int64_t x339 = -1LL;
volatile uint32_t x344 = 1909U;
volatile uint64_t t63 = 6LLU;
volatile int64_t t66 = 8LL;
static uint64_t t67 = 134390287LLU;
uint16_t x382 = UINT16_MAX;
int8_t x384 = -1;
uint16_t x386 = 0U;
volatile int8_t x388 = -1;
int16_t x396 = 216;
uint32_t t72 = 6U;
volatile uint32_t x404 = 1U;
volatile int16_t x425 = 158;
static volatile uint32_t x427 = 108768705U;
int16_t x428 = -433;
volatile uint64_t t76 = 1398886005LLU;
int32_t x434 = INT32_MIN;
volatile uint64_t t79 = 13142175429LLU;
uint32_t x448 = 531279329U;
int32_t x449 = INT32_MIN;
static int32_t t81 = 324566031;
volatile int16_t x456 = -1;
volatile int32_t t82 = -22;
int8_t x465 = 14;
int32_t x469 = INT32_MIN;
int64_t x470 = -1LL;
uint32_t x471 = UINT32_MAX;
volatile int32_t x472 = INT32_MAX;
int64_t x489 = -1LL;
static int64_t x492 = -59591LL;
volatile uint64_t t87 = 9563063596257538LLU;
static volatile int32_t t88 = 301491080;
uint64_t x520 = UINT64_MAX;
uint8_t x526 = 98U;
uint32_t x535 = UINT32_MAX;
volatile int64_t x537 = INT64_MIN;
int64_t x546 = 315833916LL;
int64_t x548 = -416199639654LL;
uint64_t t96 = 513LLU;
int16_t x570 = -1;
uint16_t x571 = 0U;
volatile int16_t x575 = -1;


void f0(void) {
	static int32_t x2 = -3570936;
	static volatile int8_t x3 = INT8_MAX;
	uint32_t x4 = 242223453U;
	uint32_t t0 = 62722U;

	t0 = (((x1<x2)-x3)*x4);

	if (t0 != 3597359837U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 81992U;
	uint64_t x6 = 642072LLU;
	uint64_t x8 = 3400218LLU;

	t1 = (((x5<x6)-x7)*x8);

	if (t1 != 18446744073695950744LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -50860521977471454LL;
	volatile uint16_t x10 = 1U;
	int16_t x12 = 109;

	t2 = (((x9<x10)-x11)*x12);

	if (t2 != 218LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = INT32_MAX;
	int8_t x22 = 0;
	volatile int8_t x23 = INT8_MIN;
	static uint8_t x24 = 1U;

	t3 = (((x21<x22)-x23)*x24);

	if (t3 != 128) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x29 = 63281936;
	int16_t x30 = INT16_MAX;
	int32_t x31 = -1;

	t4 = (((x29<x30)-x31)*x32);

	if (t4 != 12) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x33 = 808U;
	static int32_t x35 = -89;
	uint32_t x36 = 1U;
	static volatile uint32_t t5 = 6113U;

	t5 = (((x33<x34)-x35)*x36);

	if (t5 != 89U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x45 = UINT32_MAX;
	int16_t x46 = INT16_MIN;
	uint8_t x47 = 96U;
	int16_t x48 = INT16_MAX;
	static volatile int32_t t6 = 0;

	t6 = (((x45<x46)-x47)*x48);

	if (t6 != -3145632) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x49 = INT16_MAX;
	volatile uint32_t x51 = 988820U;
	int64_t x52 = -56341LL;
	volatile int64_t t7 = -1055417563LL;

	t7 = (((x49<x50)-x51)*x52);

	if (t7 != -241927041316316LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x53 = 1LLU;
	uint8_t x54 = UINT8_MAX;
	int32_t x55 = -1;
	int64_t x56 = -4LL;
	int64_t t8 = 556529008664090LL;

	t8 = (((x53<x54)-x55)*x56);

	if (t8 != -8LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x58 = -1;
	volatile uint32_t x59 = UINT32_MAX;
	int64_t x60 = INT64_MIN;
	static int64_t t9 = INT64_MIN;

	t9 = (((x57<x58)-x59)*x60);

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x61 = 111LLU;
	int8_t x63 = 0;
	int16_t x64 = INT16_MIN;
	volatile int32_t t10 = 1541408;

	t10 = (((x61<x62)-x63)*x64);

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x65 = 12;
	int64_t x66 = INT64_MIN;
	volatile int8_t x67 = INT8_MIN;
	int16_t x68 = -1;
	volatile int32_t t11 = 250022;

	t11 = (((x65<x66)-x67)*x68);

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x69 = INT64_MIN;
	uint16_t x70 = UINT16_MAX;
	volatile uint8_t x71 = 1U;
	static int32_t x72 = INT32_MIN;
	int32_t t12 = -1;

	t12 = (((x69<x70)-x71)*x72);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x73 = -1;
	static uint16_t x74 = 1604U;
	static int64_t x75 = 4399884LL;
	uint64_t x76 = 3642240705460LLU;
	uint64_t t13 = 771487LLU;

	t13 = (((x73<x74)-x75)*x76);

	if (t13 != 2421311111848090436LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x78 = INT16_MIN;
	static volatile int8_t x80 = -1;
	int32_t t14 = 44762455;

	t14 = (((x77<x78)-x79)*x80);

	if (t14 != 120) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = INT16_MAX;
	int16_t x82 = INT16_MIN;
	volatile int16_t x83 = -1;
	volatile int32_t t15 = -6525;

	t15 = (((x81<x82)-x83)*x84);

	if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x85 = UINT16_MAX;
	int64_t x86 = INT64_MAX;
	uint8_t x88 = 1U;
	int64_t t16 = -385112747327207295LL;

	t16 = (((x85<x86)-x87)*x88);

	if (t16 != 2LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x94 = 438;
	volatile int16_t x95 = -13;
	int32_t t17 = 3735;

	t17 = (((x93<x94)-x95)*x96);

	if (t17 != -1792) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x105 = INT64_MAX;
	volatile int8_t x106 = -1;
	int32_t x107 = 20;
	int8_t x108 = INT8_MAX;
	int32_t t18 = 999779;

	t18 = (((x105<x106)-x107)*x108);

	if (t18 != -2540) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x110 = 1660U;
	int64_t x111 = 221734LL;
	uint8_t x112 = 1U;

	t19 = (((x109<x110)-x111)*x112);

	if (t19 != -221734LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x113 = -1;
	int8_t x114 = INT8_MAX;
	static uint32_t x115 = 5360U;
	uint32_t t20 = 221519U;

	t20 = (((x113<x114)-x115)*x116);

	if (t20 != 2147483648U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x117 = -1;
	int8_t x118 = INT8_MIN;
	int16_t x119 = -1;
	static volatile int32_t t21 = INT32_MIN;

	t21 = (((x117<x118)-x119)*x120);

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x122 = -7563;
	uint32_t x123 = 22U;
	uint16_t x124 = 315U;
	uint32_t t22 = 191U;

	t22 = (((x121<x122)-x123)*x124);

	if (t22 != 4294960681U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x125 = -1LL;
	volatile int8_t x126 = INT8_MAX;
	int8_t x127 = -24;
	int64_t x128 = -8221875354LL;
	int64_t t23 = -50484089LL;

	t23 = (((x125<x126)-x127)*x128);

	if (t23 != -205546883850LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x137 = 792070949U;
	static volatile int32_t x138 = INT32_MIN;
	static uint64_t x139 = 63859586683LLU;
	static uint64_t t24 = 1477341LLU;

	t24 = (((x137<x138)-x139)*x140);

	if (t24 != 18446696498317473526LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x143 = 454751386011636LLU;
	static uint8_t x144 = 7U;

	t25 = (((x141<x142)-x143)*x144);

	if (t25 != 18443560814007470171LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x145 = -6;
	int16_t x146 = INT16_MIN;
	uint32_t x148 = UINT32_MAX;

	t26 = (((x145<x146)-x147)*x148);

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x149 = 0;
	static uint8_t x150 = 1U;
	volatile uint8_t x151 = UINT8_MAX;
	uint16_t x152 = 22043U;
	int32_t t27 = 278988;

	t27 = (((x149<x150)-x151)*x152);

	if (t27 != -5598922) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x157 = INT64_MIN;
	int64_t x158 = 429017226372826471LL;
	uint16_t x159 = 22U;
	volatile int16_t x160 = -1;
	volatile int32_t t28 = 583;

	t28 = (((x157<x158)-x159)*x160);

	if (t28 != 21) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x166 = 25;
	int16_t x167 = INT16_MAX;
	volatile int32_t x168 = -22;
	volatile int32_t t29 = 572421105;

	t29 = (((x165<x166)-x167)*x168);

	if (t29 != 720852) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x169 = 9314LLU;
	int32_t x170 = INT32_MAX;
	int16_t x172 = -1;

	t30 = (((x169<x170)-x171)*x172);

	if (t30 != -2) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x181 = INT8_MAX;
	int16_t x182 = INT16_MIN;
	int16_t x183 = -1;
	int64_t x184 = INT64_MIN;
	volatile int64_t t31 = INT64_MIN;

	t31 = (((x181<x182)-x183)*x184);

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x185 = INT64_MIN;
	int16_t x186 = -1;
	volatile int16_t x188 = -1;
	int64_t t32 = -1120491709637065257LL;

	t32 = (((x185<x186)-x187)*x188);

	if (t32 != -177LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x189 = INT16_MIN;
	int32_t x190 = INT32_MIN;
	int8_t x191 = -1;
	static volatile int64_t t33 = -5408447554180LL;

	t33 = (((x189<x190)-x191)*x192);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x201 = -2;
	int16_t x202 = INT16_MIN;
	int16_t x203 = INT16_MIN;
	int8_t x204 = 29;
	volatile int32_t t34 = -449496;

	t34 = (((x201<x202)-x203)*x204);

	if (t34 != 950272) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x205 = INT64_MAX;
	static volatile int8_t x206 = -1;
	uint8_t x207 = UINT8_MAX;
	int32_t t35 = -450357672;

	t35 = (((x205<x206)-x207)*x208);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x211 = 3U;
	int64_t x212 = 351LL;
	int64_t t36 = 1597LL;

	t36 = (((x209<x210)-x211)*x212);

	if (t36 != -702LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x230 = INT32_MAX;
	int16_t x232 = 86;
	volatile int32_t t37 = 2;

	t37 = (((x229<x230)-x231)*x232);

	if (t37 != -2322) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x233 = INT64_MIN;
	int64_t x234 = -1LL;
	volatile int16_t x235 = 1;
	int32_t x236 = -118056788;
	int32_t t38 = 630829;

	t38 = (((x233<x234)-x235)*x236);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x237 = 1167605874897857300LLU;
	uint32_t x238 = 16U;
	volatile int64_t x239 = -438214LL;
	volatile int16_t x240 = -6;

	t39 = (((x237<x238)-x239)*x240);

	if (t39 != -2629284LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x243 = INT16_MIN;
	volatile int16_t x244 = -3;
	volatile int32_t t40 = -244859645;

	t40 = (((x241<x242)-x243)*x244);

	if (t40 != -98304) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x245 = -11;
	int32_t x246 = -1;
	static int8_t x247 = INT8_MAX;
	uint16_t x248 = 4U;

	t41 = (((x245<x246)-x247)*x248);

	if (t41 != -504) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x249 = INT64_MIN;
	uint8_t x250 = 2U;
	uint8_t x251 = 1U;
	volatile int32_t x252 = -1596;
	volatile int32_t t42 = 1517;

	t42 = (((x249<x250)-x251)*x252);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x253 = 357683488849LL;
	volatile int32_t x254 = 3;
	int16_t x255 = -1;
	uint8_t x256 = 0U;

	t43 = (((x253<x254)-x255)*x256);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x257 = INT32_MAX;
	volatile uint32_t x258 = 10585U;
	static int8_t x259 = INT8_MIN;
	static uint64_t x260 = 250822870526884067LLU;
	volatile uint64_t t44 = 3500793613612LLU;

	t44 = (((x257<x258)-x259)*x260);

	if (t44 != 13658583353731608960LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x261 = UINT32_MAX;
	int8_t x262 = -2;
	uint16_t x263 = UINT16_MAX;
	static uint32_t x264 = UINT32_MAX;
	volatile uint32_t t45 = 1545442U;

	t45 = (((x261<x262)-x263)*x264);

	if (t45 != 65535U) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x269 = -1;
	int16_t x271 = INT16_MAX;
	int32_t x272 = 0;
	volatile int32_t t46 = 23673725;

	t46 = (((x269<x270)-x271)*x272);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x274 = INT64_MIN;
	int8_t x275 = INT8_MIN;
	int8_t x276 = INT8_MIN;
	volatile int32_t t47 = -2324;

	t47 = (((x273<x274)-x275)*x276);

	if (t47 != -16384) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x277 = 9094U;
	int16_t x278 = -1;
	volatile int32_t x279 = -1;
	static volatile int64_t x280 = 593669360425327LL;
	volatile int64_t t48 = 89997847070479463LL;

	t48 = (((x277<x278)-x279)*x280);

	if (t48 != 593669360425327LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x285 = INT8_MAX;
	int16_t x286 = INT16_MIN;
	int64_t x287 = -1LL;
	static int64_t t49 = -15415317387480LL;

	t49 = (((x285<x286)-x287)*x288);

	if (t49 != 44LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x289 = INT16_MIN;
	int64_t x290 = INT64_MIN;
	int8_t x291 = INT8_MAX;
	static int8_t x292 = INT8_MAX;
	int32_t t50 = 185;

	t50 = (((x289<x290)-x291)*x292);

	if (t50 != -16129) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x293 = UINT16_MAX;
	static volatile uint16_t x294 = 3U;
	uint16_t x295 = 0U;
	uint32_t x296 = UINT32_MAX;

	t51 = (((x293<x294)-x295)*x296);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x297 = -1LL;
	int32_t x298 = INT32_MAX;
	uint64_t x299 = 4010750544746LLU;
	int16_t x300 = INT16_MAX;
	volatile uint64_t t52 = 1012LLU;

	t52 = (((x297<x298)-x299)*x300);

	if (t52 != 18315323810609892201LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x301 = INT32_MIN;
	int64_t x302 = INT64_MIN;
	uint16_t x303 = 30909U;
	volatile uint32_t t53 = 2918055U;

	t53 = (((x301<x302)-x303)*x304);

	if (t53 != 2411620108U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x309 = -12354031;
	uint32_t x310 = UINT32_MAX;
	int16_t x311 = INT16_MIN;
	static int64_t x312 = 0LL;

	t54 = (((x309<x310)-x311)*x312);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x313 = 0LLU;
	volatile uint64_t x314 = UINT64_MAX;
	int32_t x315 = 213609;
	static volatile int16_t x316 = 211;

	t55 = (((x313<x314)-x315)*x316);

	if (t55 != -45071288) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x317 = UINT16_MAX;
	int8_t x318 = INT8_MIN;
	uint64_t x319 = UINT64_MAX;
	int16_t x320 = -1;
	volatile uint64_t t56 = UINT64_MAX;

	t56 = (((x317<x318)-x319)*x320);

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x321 = INT16_MIN;
	static int16_t x324 = 265;
	volatile int32_t t57 = 23726424;

	t57 = (((x321<x322)-x323)*x324);

	if (t57 != -33390) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint8_t x325 = UINT8_MAX;
	uint32_t x326 = 1940012219U;
	static int16_t x327 = INT16_MIN;
	volatile int32_t t58 = 2858;

	t58 = (((x325<x326)-x327)*x328);

	if (t58 != 996374214) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x329 = UINT64_MAX;
	int32_t x330 = INT32_MIN;
	int8_t x331 = -51;
	static int64_t x332 = -1LL;
	volatile int64_t t59 = -1506719000592776848LL;

	t59 = (((x329<x330)-x331)*x332);

	if (t59 != -51LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x333 = UINT16_MAX;
	static int8_t x334 = 1;
	int16_t x335 = 0;
	int8_t x336 = INT8_MIN;

	t60 = (((x333<x334)-x335)*x336);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x337 = INT8_MIN;
	volatile int16_t x338 = -1;
	uint32_t x340 = 4424513U;
	int64_t t61 = 3757365090063LL;

	t61 = (((x337<x338)-x339)*x340);

	if (t61 != 8849026LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x341 = 3;
	int32_t x342 = 63150;
	static uint8_t x343 = UINT8_MAX;
	static uint32_t t62 = 2226630U;

	t62 = (((x341<x342)-x343)*x344);

	if (t62 != 4294482410U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x345 = 62U;
	int64_t x346 = 2LL;
	int16_t x347 = 121;
	uint64_t x348 = 192966LLU;

	t63 = (((x345<x346)-x347)*x348);

	if (t63 != 18446744073686202730LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x353 = 108U;
	volatile uint8_t x354 = 0U;
	static int8_t x355 = INT8_MIN;
	uint8_t x356 = 12U;
	int32_t t64 = 17816876;

	t64 = (((x353<x354)-x355)*x356);

	if (t64 != 1536) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x357 = 3128212924929633LL;
	int64_t x358 = 252421943LL;
	int16_t x359 = INT16_MIN;
	volatile uint32_t x360 = 6U;
	uint32_t t65 = 234620747U;

	t65 = (((x357<x358)-x359)*x360);

	if (t65 != 196608U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x365 = 146U;
	volatile uint64_t x366 = 4877226304549LLU;
	int64_t x367 = 11496LL;
	static uint8_t x368 = UINT8_MAX;

	t66 = (((x365<x366)-x367)*x368);

	if (t66 != -2931225LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x369 = INT16_MIN;
	int8_t x370 = 0;
	int16_t x371 = -64;
	uint64_t x372 = UINT64_MAX;

	t67 = (((x369<x370)-x371)*x372);

	if (t67 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x373 = 58;
	uint32_t x374 = 59U;
	static volatile int8_t x375 = 28;
	uint64_t x376 = 1014023LLU;
	volatile uint64_t t68 = 107489LLU;

	t68 = (((x373<x374)-x375)*x376);

	if (t68 != 18446744073682172995LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x381 = 7U;
	uint32_t x383 = UINT32_MAX;
	uint32_t t69 = 181U;

	t69 = (((x381<x382)-x383)*x384);

	if (t69 != 4294967294U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x385 = INT64_MAX;
	volatile uint8_t x387 = 9U;
	volatile int32_t t70 = 2;

	t70 = (((x385<x386)-x387)*x388);

	if (t70 != 9) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x389 = 4U;
	static int32_t x390 = INT32_MIN;
	uint32_t x391 = 123041U;
	int32_t x392 = INT32_MIN;
	volatile uint32_t t71 = 1U;

	t71 = (((x389<x390)-x391)*x392);

	if (t71 != 2147483648U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x393 = 5256;
	uint64_t x394 = 7885975LLU;
	uint32_t x395 = 3894U;

	t72 = (((x393<x394)-x395)*x396);

	if (t72 != 4294126408U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x401 = -14;
	static uint8_t x402 = 95U;
	volatile uint64_t x403 = 8LLU;
	uint64_t t73 = 9363825LLU;

	t73 = (((x401<x402)-x403)*x404);

	if (t73 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x417 = INT64_MIN;
	uint8_t x418 = 2U;
	static uint16_t x419 = 38U;
	int16_t x420 = INT16_MIN;
	int32_t t74 = -8050255;

	t74 = (((x417<x418)-x419)*x420);

	if (t74 != 1212416) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x426 = -34;
	volatile uint32_t t75 = 1075564469U;

	t75 = (((x425<x426)-x427)*x428);

	if (t75 != 4147176305U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x429 = 34U;
	static volatile int32_t x430 = -1;
	static volatile uint64_t x431 = UINT64_MAX;
	static int64_t x432 = INT64_MIN;

	t76 = (((x429<x430)-x431)*x432);

	if (t76 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x433 = -67255;
	static uint8_t x435 = 28U;
	volatile uint16_t x436 = UINT16_MAX;
	volatile int32_t t77 = 8100985;

	t77 = (((x433<x434)-x435)*x436);

	if (t77 != -1834980) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x437 = INT8_MAX;
	uint8_t x438 = 63U;
	int16_t x439 = INT16_MIN;
	uint8_t x440 = 24U;
	int32_t t78 = 1230;

	t78 = (((x437<x438)-x439)*x440);

	if (t78 != 786432) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x441 = INT16_MIN;
	uint32_t x442 = 1U;
	volatile int32_t x443 = INT32_MAX;
	volatile uint64_t x444 = 1591426157505LLU;

	t79 = (((x441<x442)-x443)*x444);

	if (t79 != 13532749059942779841LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x445 = 245342U;
	uint8_t x446 = 72U;
	int64_t x447 = 0LL;
	volatile int64_t t80 = -40677LL;

	t80 = (((x445<x446)-x447)*x448);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x450 = 0U;
	uint16_t x451 = 3273U;
	int8_t x452 = INT8_MIN;

	t81 = (((x449<x450)-x451)*x452);

	if (t81 != 418816) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x453 = INT16_MAX;
	static int64_t x454 = INT64_MIN;
	uint8_t x455 = 9U;

	t82 = (((x453<x454)-x455)*x456);

	if (t82 != 9) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x466 = INT64_MAX;
	volatile uint64_t x467 = 421499690544LLU;
	static int16_t x468 = -1;
	uint64_t t83 = 13162LLU;

	t83 = (((x465<x466)-x467)*x468);

	if (t83 != 421499690543LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t t84 = 0U;

	t84 = (((x469<x470)-x471)*x472);

	if (t84 != 4294967294U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x485 = 1184841622U;
	int32_t x486 = -1;
	uint8_t x487 = 1U;
	volatile int16_t x488 = -3;
	int32_t t85 = 58781488;

	t85 = (((x485<x486)-x487)*x488);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x490 = INT16_MAX;
	uint32_t x491 = 1U;
	int64_t t86 = 589667558844375LL;

	t86 = (((x489<x490)-x491)*x492);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x493 = -1LL;
	uint32_t x494 = 32U;
	static volatile int64_t x495 = INT64_MAX;
	uint64_t x496 = 7471539985477469912LLU;

	t87 = (((x493<x494)-x495)*x496);

	if (t87 != 14943079970954939824LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x497 = INT32_MIN;
	int8_t x498 = 12;
	volatile int8_t x499 = -1;
	static int16_t x500 = 1;

	t88 = (((x497<x498)-x499)*x500);

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x517 = UINT16_MAX;
	volatile int16_t x518 = INT16_MIN;
	int64_t x519 = -6692444386LL;
	volatile uint64_t t89 = 2524LLU;

	t89 = (((x517<x518)-x519)*x520);

	if (t89 != 18446744067017107230LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x525 = 4U;
	volatile uint16_t x527 = 15579U;
	int16_t x528 = 92;
	int32_t t90 = 90;

	t90 = (((x525<x526)-x527)*x528);

	if (t90 != -1433176) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x533 = 32063U;
	int64_t x534 = INT64_MIN;
	int32_t x536 = -20557;
	uint32_t t91 = 9274U;

	t91 = (((x533<x534)-x535)*x536);

	if (t91 != 4294946739U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x538 = 0U;
	static int16_t x539 = -1;
	int8_t x540 = 1;
	int32_t t92 = 10;

	t92 = (((x537<x538)-x539)*x540);

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x545 = 3347;
	int8_t x547 = -1;
	volatile int64_t t93 = -8LL;

	t93 = (((x545<x546)-x547)*x548);

	if (t93 != -832399279308LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x557 = -1;
	int16_t x558 = 0;
	volatile uint32_t x559 = UINT32_MAX;
	volatile int8_t x560 = INT8_MAX;
	static uint32_t t94 = 322U;

	t94 = (((x557<x558)-x559)*x560);

	if (t94 != 254U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x561 = INT16_MIN;
	static int16_t x562 = -14;
	uint64_t x563 = UINT64_MAX;
	int32_t x564 = INT32_MIN;
	static volatile uint64_t t95 = 10110679525LLU;

	t95 = (((x561<x562)-x563)*x564);

	if (t95 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x565 = 81U;
	int32_t x566 = INT32_MIN;
	uint8_t x567 = UINT8_MAX;
	uint64_t x568 = 29LLU;

	t96 = (((x565<x566)-x567)*x568);

	if (t96 != 18446744073709544250LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x569 = INT8_MIN;
	uint32_t x572 = 368779682U;
	volatile uint32_t t97 = 142236U;

	t97 = (((x569<x570)-x571)*x572);

	if (t97 != 368779682U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x573 = INT8_MIN;
	volatile uint8_t x574 = 7U;
	volatile int16_t x576 = INT16_MIN;
	int32_t t98 = 4147;

	t98 = (((x573<x574)-x575)*x576);

	if (t98 != -65536) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x577 = -1LL;
	static int64_t x578 = INT64_MAX;
	static uint32_t x579 = 3U;
	int16_t x580 = -1;
	volatile uint32_t t99 = 0U;

	t99 = (((x577<x578)-x579)*x580);

	if (t99 != 2U) { NG(); } else { ; }
	
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


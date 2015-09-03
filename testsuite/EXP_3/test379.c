#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x10 = -1;
uint32_t t1 = 748U;
uint64_t t2 = 114348759775LLU;
static int32_t x22 = -1;
int8_t x30 = -1;
int16_t x31 = -1;
static int8_t x37 = 0;
static volatile uint64_t t7 = 3353144934319680LLU;
static int32_t t8 = -449392;
int32_t x47 = 171688911;
static volatile uint8_t x62 = UINT8_MAX;
static int32_t x64 = -1;
uint64_t x66 = 11495401LLU;
int32_t x68 = 2;
int32_t x82 = INT32_MAX;
uint64_t x85 = UINT64_MAX;
uint64_t x88 = 3768061892831507LLU;
uint16_t x93 = UINT16_MAX;
uint16_t x94 = 1U;
static int16_t x103 = INT16_MAX;
int8_t x104 = INT8_MIN;
uint32_t t17 = 506772116U;
uint64_t x111 = UINT64_MAX;
volatile int64_t x117 = INT64_MIN;
volatile int64_t t19 = -463LL;
int64_t x130 = -1LL;
uint16_t x131 = 2974U;
uint64_t x138 = 1367LLU;
uint64_t t21 = 200161375LLU;
int32_t t23 = 0;
int16_t x167 = 5859;
volatile uint64_t x170 = 3254LLU;
uint64_t x171 = UINT64_MAX;
int64_t x172 = INT64_MIN;
uint64_t t28 = 1LLU;
static int64_t x174 = 11763LL;
static volatile int64_t t29 = -4LL;
uint32_t x177 = 212U;
volatile int64_t x178 = INT64_MIN;
uint64_t x179 = 6209673780LLU;
volatile uint64_t t30 = 28204LLU;
int16_t x188 = -1;
static uint32_t x202 = 3827838U;
int64_t x209 = INT64_MIN;
uint16_t x210 = 12U;
static uint32_t x211 = UINT32_MAX;
int16_t x226 = -1;
int64_t x230 = 688514178365363714LL;
static int8_t x232 = INT8_MIN;
int32_t x238 = INT32_MIN;
volatile int8_t x239 = INT8_MIN;
volatile int64_t x251 = INT64_MIN;
static uint64_t x252 = UINT64_MAX;
volatile uint64_t t45 = 383234097072LLU;
static int16_t x260 = INT16_MIN;
static int64_t x263 = -1LL;
uint16_t x267 = UINT16_MAX;
int8_t x269 = INT8_MAX;
int64_t x275 = -1LL;
static volatile int32_t t52 = 578;
int16_t x291 = INT16_MIN;
uint32_t t53 = 247956U;
volatile uint16_t x301 = 0U;
int16_t x304 = 1;
int64_t x305 = INT64_MIN;
volatile int32_t x315 = -1;
int8_t x325 = -1;
int32_t x326 = -221726870;
int32_t x330 = 538545615;
uint16_t x331 = 598U;
int8_t x335 = INT8_MIN;
static int32_t x336 = -1083781;
int16_t x339 = 0;
uint32_t x343 = 0U;
int32_t x344 = INT32_MAX;
static volatile uint32_t t64 = 186416034U;
int32_t x349 = 625164368;
uint32_t t65 = 6U;
static uint8_t x361 = 7U;
volatile int64_t t69 = INT64_MAX;
static uint16_t x384 = 0U;
int8_t x386 = -1;
volatile int64_t t71 = -147684763356151786LL;
int64_t x393 = -73561248578LL;
volatile int16_t x407 = 2974;
volatile int16_t x409 = -1;
static volatile int32_t x410 = INT32_MAX;
volatile int32_t x411 = INT32_MIN;
int8_t x418 = INT8_MAX;
static uint32_t x420 = 1029852U;
int64_t x426 = -701341LL;
static int32_t x430 = -46;
static int16_t x431 = INT16_MIN;
int64_t t81 = -1LL;
uint8_t x433 = 2U;
uint64_t x437 = UINT64_MAX;
int64_t x443 = -1LL;
int8_t x447 = -1;
int16_t x453 = -1;
int16_t x455 = -1;
uint64_t x483 = UINT64_MAX;
static volatile uint64_t t89 = 369128607890LLU;
int64_t t92 = 0LL;
uint8_t x518 = UINT8_MAX;
int16_t x520 = 583;
static int32_t x524 = -98;
volatile uint64_t t95 = 38073326908048551LLU;
uint32_t x528 = 131991142U;
static uint8_t x529 = 1U;
static int8_t x532 = 12;
volatile int32_t t97 = 5709;
int16_t x539 = INT16_MIN;
volatile int32_t x541 = -39;


void f0(void) {
	int32_t x1 = -22573;
	int32_t x2 = -1;
	volatile int8_t x3 = INT8_MIN;
	int32_t x4 = -1;
	static volatile int32_t t0 = 344461184;

	t0 = ((x1/x2)-(x3*x4));

	if (t0 != 22445) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 738821743U;
	uint32_t x11 = 0U;
	uint32_t x12 = 154588U;

	t1 = ((x9/x10)-(x11*x12));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 2100221199672LLU;
	uint32_t x14 = UINT32_MAX;
	static int16_t x15 = INT16_MIN;
	uint64_t x16 = 1090321458684LLU;

	t2 = ((x13/x14)-(x15*x16));

	if (t2 != 35727653558157800LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x17 = -1661097232116043683LL;
	uint64_t x18 = UINT64_MAX;
	static volatile int16_t x19 = 1;
	int64_t x20 = INT64_MIN;
	uint64_t t3 = 1786LLU;

	t3 = ((x17/x18)-(x19*x20));

	if (t3 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MAX;
	volatile uint64_t x23 = UINT64_MAX;
	uint16_t x24 = UINT16_MAX;
	uint64_t t4 = 4236854425165LLU;

	t4 = ((x21/x22)-(x23*x24));

	if (t4 != 9223372036854841344LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MIN;
	int16_t x26 = INT16_MIN;
	static volatile int8_t x27 = INT8_MIN;
	static uint32_t x28 = 714042593U;
	static uint32_t t5 = 7449U;

	t5 = ((x25/x26)-(x27*x28));

	if (t5 != 1203138689U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = -1043211851;
	uint32_t x32 = 2U;
	uint32_t t6 = 352755U;

	t6 = ((x29/x30)-(x31*x32));

	if (t6 != 1043211853U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x38 = 1424531;
	int32_t x39 = INT32_MIN;
	uint64_t x40 = 68445699976062930LLU;

	t7 = ((x37/x38)-(x39*x40));

	if (t7 != 3511949991495073792LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x41 = -947117940;
	volatile int8_t x42 = INT8_MIN;
	volatile int8_t x43 = INT8_MIN;
	uint8_t x44 = 62U;

	t8 = ((x41/x42)-(x43*x44));

	if (t8 != 7407294) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = 41;
	volatile int8_t x46 = INT8_MIN;
	int64_t x48 = -1LL;
	static int64_t t9 = 1519912329376396LL;

	t9 = ((x45/x46)-(x47*x48));

	if (t9 != 171688911LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x57 = 16U;
	int8_t x58 = INT8_MIN;
	uint16_t x59 = UINT16_MAX;
	static int8_t x60 = INT8_MIN;
	int32_t t10 = 1784;

	t10 = ((x57/x58)-(x59*x60));

	if (t10 != 8388480) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x61 = INT64_MIN;
	static volatile uint32_t x63 = 78852U;
	volatile int64_t t11 = 48817182LL;

	t11 = ((x61/x62)-(x63*x64));

	if (t11 != -36170090713926780LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x65 = UINT64_MAX;
	int32_t x67 = -1;
	volatile uint64_t t12 = 378252480820495LLU;

	t12 = ((x65/x66)-(x67*x68));

	if (t12 != 1604706445102LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x81 = 0;
	int64_t x83 = -1LL;
	int16_t x84 = 1;
	int64_t t13 = 17LL;

	t13 = ((x81/x82)-(x83*x84));

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x86 = INT32_MIN;
	int8_t x87 = INT8_MIN;
	volatile uint64_t t14 = 70LLU;

	t14 = ((x85/x86)-(x87*x88));

	if (t14 != 482311922282432897LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x95 = UINT32_MAX;
	int16_t x96 = 90;
	static uint32_t t15 = 41040044U;

	t15 = ((x93/x94)-(x95*x96));

	if (t15 != 65625U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x97 = UINT8_MAX;
	int8_t x98 = INT8_MIN;
	int8_t x99 = INT8_MIN;
	static int16_t x100 = -57;
	volatile int32_t t16 = 5682469;

	t16 = ((x97/x98)-(x99*x100));

	if (t16 != -7297) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x101 = INT16_MIN;
	uint32_t x102 = 312111400U;

	t17 = ((x101/x102)-(x103*x104));

	if (t17 != 4194189U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x109 = 0U;
	static int8_t x110 = INT8_MIN;
	int64_t x112 = 1942071961989LL;
	uint64_t t18 = 37604612440750LLU;

	t18 = ((x109/x110)-(x111*x112));

	if (t18 != 1942071961989LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x118 = INT8_MIN;
	uint16_t x119 = 583U;
	int64_t x120 = 2LL;

	t19 = ((x117/x118)-(x119*x120));

	if (t19 != 72057594037926770LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x129 = 617917352LLU;
	static uint32_t x132 = 237054011U;
	static uint64_t t20 = 3060519273948427LLU;

	t20 = ((x129/x130)-(x131*x132));

	if (t20 != 18446744073085559446LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x137 = 302616U;
	int16_t x139 = -1;
	int16_t x140 = -1;

	t21 = ((x137/x138)-(x139*x140));

	if (t21 != 220LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x141 = 36;
	static uint64_t x142 = 7635109735090733LLU;
	static volatile int32_t x143 = 25;
	int8_t x144 = 0;
	static volatile uint64_t t22 = 294495137608LLU;

	t22 = ((x141/x142)-(x143*x144));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x145 = 1;
	volatile int32_t x146 = INT32_MIN;
	static int8_t x147 = INT8_MAX;
	uint8_t x148 = 2U;

	t23 = ((x145/x146)-(x147*x148));

	if (t23 != -254) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x153 = 396LLU;
	int64_t x154 = INT64_MIN;
	uint32_t x155 = 243U;
	volatile uint32_t x156 = 15672U;
	static volatile uint64_t t24 = 2LLU;

	t24 = ((x153/x154)-(x155*x156));

	if (t24 != 18446744073705743320LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x157 = INT8_MAX;
	int8_t x158 = -1;
	int8_t x159 = INT8_MAX;
	uint32_t x160 = 198016535U;
	volatile uint32_t t25 = 31024U;

	t25 = ((x157/x158)-(x159*x160));

	if (t25 != 621703704U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x161 = INT64_MIN;
	int8_t x162 = 3;
	int8_t x163 = INT8_MIN;
	uint8_t x164 = 14U;
	volatile int64_t t26 = 431585389736464LL;

	t26 = ((x161/x162)-(x163*x164));

	if (t26 != -3074457345618256810LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x165 = -1;
	static int16_t x166 = -1;
	static int8_t x168 = -1;
	volatile int32_t t27 = 22198790;

	t27 = ((x165/x166)-(x167*x168));

	if (t27 != 5860) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x169 = -1339477298LL;

	t28 = ((x169/x170)-(x171*x172));

	if (t28 != 9229040980945854503LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x173 = 4494023570677188512LL;
	int64_t x175 = -1LL;
	int16_t x176 = INT16_MIN;

	t29 = ((x173/x174)-(x175*x176));

	if (t29 != 382047400347848LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x180 = UINT64_MAX;

	t30 = ((x177/x178)-(x179*x180));

	if (t30 != 6209673780LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x185 = 25;
	static volatile int8_t x186 = -1;
	int64_t x187 = -1LL;
	volatile int64_t t31 = 28026822346904115LL;

	t31 = ((x185/x186)-(x187*x188));

	if (t31 != -26LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x189 = -10;
	int32_t x190 = INT32_MIN;
	volatile int8_t x191 = INT8_MAX;
	static int8_t x192 = -1;
	int32_t t32 = 230;

	t32 = ((x189/x190)-(x191*x192));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x193 = -28;
	static uint32_t x194 = UINT32_MAX;
	uint64_t x195 = UINT64_MAX;
	uint16_t x196 = 1499U;
	volatile uint64_t t33 = 33LLU;

	t33 = ((x193/x194)-(x195*x196));

	if (t33 != 1499LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x197 = INT16_MAX;
	uint16_t x198 = 124U;
	uint16_t x199 = UINT16_MAX;
	int32_t x200 = -1;
	volatile int32_t t34 = 162173;

	t34 = ((x197/x198)-(x199*x200));

	if (t34 != 65799) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x201 = UINT64_MAX;
	uint64_t x203 = UINT64_MAX;
	int16_t x204 = 3946;
	uint64_t t35 = 16588189LLU;

	t35 = ((x201/x202)-(x203*x204));

	if (t35 != 4819102608003LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x212 = -1;
	int64_t t36 = 0LL;

	t36 = ((x209/x210)-(x211*x212));

	if (t36 != -768614336404564651LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x213 = INT8_MIN;
	int64_t x214 = -1LL;
	volatile int64_t x215 = INT64_MIN;
	uint64_t x216 = 7129556105994252342LLU;
	static volatile uint64_t t37 = 6886470929LLU;

	t37 = ((x213/x214)-(x215*x216));

	if (t37 != 128LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x221 = 6708;
	volatile int64_t x222 = INT64_MIN;
	int64_t x223 = INT64_MAX;
	int16_t x224 = 1;
	int64_t t38 = -2849294172LL;

	t38 = ((x221/x222)-(x223*x224));

	if (t38 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x225 = INT64_MAX;
	volatile uint32_t x227 = UINT32_MAX;
	uint16_t x228 = 0U;
	int64_t t39 = -80226LL;

	t39 = ((x225/x226)-(x227*x228));

	if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x229 = -1300149LL;
	uint16_t x231 = 5406U;
	int64_t t40 = 1387285LL;

	t40 = ((x229/x230)-(x231*x232));

	if (t40 != 691968LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x233 = UINT64_MAX;
	int64_t x234 = 777936323815LL;
	uint32_t x235 = 144142U;
	int8_t x236 = INT8_MAX;
	uint64_t t41 = 4064199378790135LLU;

	t41 = ((x233/x234)-(x235*x236));

	if (t41 != 5406374LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x237 = 110993;
	volatile int8_t x240 = 6;
	volatile int32_t t42 = -805;

	t42 = ((x237/x238)-(x239*x240));

	if (t42 != 768) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x241 = -1;
	int16_t x242 = -93;
	int64_t x243 = -1LL;
	uint64_t x244 = UINT64_MAX;
	uint64_t t43 = UINT64_MAX;

	t43 = ((x241/x242)-(x243*x244));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x245 = 0LLU;
	int16_t x246 = 7;
	int16_t x247 = 16098;
	volatile int8_t x248 = INT8_MIN;
	volatile uint64_t t44 = 1723118403799388LLU;

	t44 = ((x245/x246)-(x247*x248));

	if (t44 != 2060544LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x249 = INT64_MAX;
	volatile int16_t x250 = INT16_MIN;

	t45 = ((x249/x250)-(x251*x252));

	if (t45 != 9223090561878065153LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x257 = -44;
	int8_t x258 = INT8_MIN;
	uint64_t x259 = 4584466929941LLU;
	static volatile uint64_t t46 = 46955706780337LLU;

	t46 = ((x257/x258)-(x259*x260));

	if (t46 != 150223812360306688LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x261 = INT32_MAX;
	static uint16_t x262 = 4U;
	volatile int8_t x264 = INT8_MAX;
	int64_t t47 = -13934160LL;

	t47 = ((x261/x262)-(x263*x264));

	if (t47 != 536871038LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x265 = 260360588534LLU;
	volatile int16_t x266 = INT16_MAX;
	int16_t x268 = INT16_MAX;
	volatile uint64_t t48 = 11643647459432725LLU;

	t48 = ((x265/x266)-(x267*x268));

	if (t48 != 18446744071570112088LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x270 = 2U;
	int64_t x271 = INT64_MAX;
	uint64_t x272 = 1977409900286597LLU;
	volatile uint64_t t49 = 195948142LLU;

	t49 = ((x269/x270)-(x271*x272));

	if (t49 != 9225349446755062468LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x273 = 6667U;
	static uint8_t x274 = 20U;
	int32_t x276 = -1;
	static int64_t t50 = -234878141LL;

	t50 = ((x273/x274)-(x275*x276));

	if (t50 != 332LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x277 = INT32_MIN;
	int32_t x278 = 110265;
	int32_t x279 = -1;
	int64_t x280 = -1LL;
	volatile int64_t t51 = -19984329639017424LL;

	t51 = ((x277/x278)-(x279*x280));

	if (t51 != -19476LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x281 = INT16_MIN;
	static uint8_t x282 = 13U;
	static int32_t x283 = 842806;
	int16_t x284 = -1;

	t52 = ((x281/x282)-(x283*x284));

	if (t52 != 840286) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x289 = INT8_MAX;
	int16_t x290 = INT16_MIN;
	volatile uint32_t x292 = UINT32_MAX;

	t53 = ((x289/x290)-(x291*x292));

	if (t53 != 4294934528U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x297 = 516817289717761LLU;
	static int64_t x298 = -1LL;
	int16_t x299 = INT16_MIN;
	uint8_t x300 = UINT8_MAX;
	volatile uint64_t t54 = 1699140LLU;

	t54 = ((x297/x298)-(x299*x300));

	if (t54 != 8355840LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x302 = INT8_MAX;
	uint64_t x303 = 1361LLU;
	volatile uint64_t t55 = 180966119730LLU;

	t55 = ((x301/x302)-(x303*x304));

	if (t55 != 18446744073709550255LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x306 = UINT32_MAX;
	uint32_t x307 = 113U;
	uint16_t x308 = 457U;
	static int64_t t56 = -63106555120874410LL;

	t56 = ((x305/x306)-(x307*x308));

	if (t56 != -2147535289LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x313 = INT64_MIN;
	int64_t x314 = -38077990674043LL;
	int32_t x316 = INT32_MAX;
	static int64_t t57 = -166302LL;

	t57 = ((x313/x314)-(x315*x316));

	if (t57 != 2147725870LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x317 = 4481U;
	int32_t x318 = INT32_MAX;
	uint64_t x319 = UINT64_MAX;
	int8_t x320 = 33;
	volatile uint64_t t58 = 48053471749158031LLU;

	t58 = ((x317/x318)-(x319*x320));

	if (t58 != 33LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x321 = -1;
	volatile int16_t x322 = -1;
	int8_t x323 = INT8_MAX;
	int16_t x324 = INT16_MIN;
	int32_t t59 = 1;

	t59 = ((x321/x322)-(x323*x324));

	if (t59 != 4161537) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x327 = 25228LL;
	volatile int32_t x328 = INT32_MIN;
	volatile int64_t t60 = 9576917LL;

	t60 = ((x325/x326)-(x327*x328));

	if (t60 != 54176717471744LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x329 = UINT32_MAX;
	uint64_t x332 = UINT64_MAX;
	volatile uint64_t t61 = 8758LLU;

	t61 = ((x329/x330)-(x331*x332));

	if (t61 != 605LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x333 = INT16_MIN;
	uint8_t x334 = UINT8_MAX;
	volatile int32_t t62 = 3668545;

	t62 = ((x333/x334)-(x335*x336));

	if (t62 != -138724096) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x337 = 130U;
	static int8_t x338 = -1;
	int32_t x340 = INT32_MIN;
	volatile int32_t t63 = 4549014;

	t63 = ((x337/x338)-(x339*x340));

	if (t63 != -130) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x341 = -1;
	uint16_t x342 = UINT16_MAX;

	t64 = ((x341/x342)-(x343*x344));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x350 = 108U;
	uint32_t x351 = 6832U;
	volatile int8_t x352 = -1;

	t65 = ((x349/x350)-(x351*x352));

	if (t65 != 5795390U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x357 = INT64_MAX;
	int32_t x358 = INT32_MIN;
	int16_t x359 = -76;
	uint64_t x360 = UINT64_MAX;
	uint64_t t66 = 416769263989LLU;

	t66 = ((x357/x358)-(x359*x360));

	if (t66 != 18446744069414584245LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x362 = UINT32_MAX;
	volatile int32_t x363 = -14;
	uint32_t x364 = 163U;
	volatile uint32_t t67 = 3976U;

	t67 = ((x361/x362)-(x363*x364));

	if (t67 != 2282U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x365 = 36051U;
	uint64_t x366 = 8LLU;
	int16_t x367 = INT16_MAX;
	static volatile uint8_t x368 = UINT8_MAX;
	uint64_t t68 = 1LLU;

	t68 = ((x365/x366)-(x367*x368));

	if (t68 != 18446744073701200537LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x377 = -1;
	int64_t x378 = INT64_MIN;
	static int64_t x379 = INT64_MAX;
	volatile int16_t x380 = -1;

	t69 = ((x377/x378)-(x379*x380));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x381 = UINT64_MAX;
	int64_t x382 = INT64_MAX;
	uint64_t x383 = UINT64_MAX;
	static volatile uint64_t t70 = 36564LLU;

	t70 = ((x381/x382)-(x383*x384));

	if (t70 != 2LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x385 = -1LL;
	int64_t x387 = -1LL;
	uint32_t x388 = 92994U;

	t71 = ((x385/x386)-(x387*x388));

	if (t71 != 92995LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x394 = -1;
	int8_t x395 = INT8_MAX;
	int8_t x396 = 24;
	int64_t t72 = -26LL;

	t72 = ((x393/x394)-(x395*x396));

	if (t72 != 73561245530LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x397 = 2104528LL;
	int8_t x398 = -1;
	int16_t x399 = 8325;
	int8_t x400 = -3;
	int64_t t73 = 3942LL;

	t73 = ((x397/x398)-(x399*x400));

	if (t73 != -2079553LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x401 = -160;
	static int8_t x402 = INT8_MAX;
	int64_t x403 = -1LL;
	static int8_t x404 = -5;
	static volatile int64_t t74 = 1255555371674190406LL;

	t74 = ((x401/x402)-(x403*x404));

	if (t74 != -6LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x405 = 40U;
	int64_t x406 = -1LL;
	int16_t x408 = 3073;
	volatile int64_t t75 = -15LL;

	t75 = ((x405/x406)-(x407*x408));

	if (t75 != -9139142LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x412 = UINT64_MAX;
	volatile uint64_t t76 = 10541947286LLU;

	t76 = ((x409/x410)-(x411*x412));

	if (t76 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x413 = 12U;
	volatile int32_t x414 = -1;
	static uint8_t x415 = UINT8_MAX;
	uint32_t x416 = 1100187U;
	uint32_t t77 = 4U;

	t77 = ((x413/x414)-(x415*x416));

	if (t77 != 4014419599U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x417 = 73144LL;
	int8_t x419 = INT8_MIN;
	volatile int64_t t78 = -730555031380463859LL;

	t78 = ((x417/x418)-(x419*x420));

	if (t78 != -4163145665LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x421 = -1LL;
	int8_t x422 = INT8_MIN;
	uint32_t x423 = 56U;
	uint16_t x424 = 3U;
	volatile int64_t t79 = -310275386324716LL;

	t79 = ((x421/x422)-(x423*x424));

	if (t79 != -168LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x425 = 60;
	static volatile uint16_t x427 = UINT16_MAX;
	uint16_t x428 = 6U;
	int64_t t80 = 656314402LL;

	t80 = ((x425/x426)-(x427*x428));

	if (t80 != -393210LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x429 = INT64_MIN;
	volatile int16_t x432 = INT16_MIN;

	t81 = ((x429/x430)-(x431*x432));

	if (t81 != 200508086683970693LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x434 = -6;
	volatile uint32_t x435 = UINT32_MAX;
	static uint64_t x436 = 15484LLU;
	static uint64_t t82 = 3554585727039889LLU;

	t82 = ((x433/x434)-(x435*x436));

	if (t82 != 18446677570435955836LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x438 = 168737833633LLU;
	static uint64_t x439 = UINT64_MAX;
	static volatile uint32_t x440 = 15620U;
	uint64_t t83 = 1018492LLU;

	t83 = ((x437/x438)-(x439*x440));

	if (t83 != 109337540LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x441 = INT16_MAX;
	uint32_t x442 = UINT32_MAX;
	static int16_t x444 = INT16_MIN;
	int64_t t84 = 65727270117688LL;

	t84 = ((x441/x442)-(x443*x444));

	if (t84 != -32768LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x445 = 85U;
	int16_t x446 = INT16_MAX;
	int8_t x448 = 23;
	volatile int32_t t85 = 8051389;

	t85 = ((x445/x446)-(x447*x448));

	if (t85 != 23) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x449 = -1;
	int32_t x450 = INT32_MIN;
	static int32_t x451 = -1506;
	uint32_t x452 = 48U;
	volatile uint32_t t86 = 258U;

	t86 = ((x449/x450)-(x451*x452));

	if (t86 != 72288U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x454 = INT16_MIN;
	volatile int64_t x456 = -3478LL;
	int64_t t87 = 1LL;

	t87 = ((x453/x454)-(x455*x456));

	if (t87 != -3478LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x473 = 13537972879600231LLU;
	static int16_t x474 = -4144;
	volatile int64_t x475 = -1LL;
	static int16_t x476 = INT16_MIN;
	uint64_t t88 = 19213092012305494LLU;

	t88 = ((x473/x474)-(x475*x476));

	if (t88 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x481 = -1;
	int32_t x482 = INT32_MAX;
	volatile uint8_t x484 = 17U;

	t89 = ((x481/x482)-(x483*x484));

	if (t89 != 17LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x493 = 14041LL;
	uint8_t x494 = UINT8_MAX;
	uint32_t x495 = 23478U;
	static uint64_t x496 = 74842220695330LLU;
	uint64_t t90 = 8074113699683173LLU;

	t90 = ((x493/x494)-(x495*x496));

	if (t90 != 16689598416224593931LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x501 = UINT64_MAX;
	static volatile int64_t x502 = INT64_MIN;
	int8_t x503 = 39;
	volatile int8_t x504 = 1;
	volatile uint64_t t91 = 924LLU;

	t91 = ((x501/x502)-(x503*x504));

	if (t91 != 18446744073709551578LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x505 = -7;
	int64_t x506 = INT64_MIN;
	static int8_t x507 = 0;
	uint16_t x508 = 15U;

	t92 = ((x505/x506)-(x507*x508));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x513 = INT8_MIN;
	int32_t x514 = INT32_MAX;
	int64_t x515 = -1LL;
	uint32_t x516 = 10945006U;
	int64_t t93 = -74676146701291LL;

	t93 = ((x513/x514)-(x515*x516));

	if (t93 != 10945006LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x517 = INT16_MAX;
	int16_t x519 = INT16_MAX;
	int32_t t94 = 14;

	t94 = ((x517/x518)-(x519*x520));

	if (t94 != -19103033) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x521 = 889106LLU;
	int8_t x522 = INT8_MIN;
	static int16_t x523 = INT16_MIN;

	t95 = ((x521/x522)-(x523*x524));

	if (t95 != 18446744073706340352LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x525 = 117367541809588132LLU;
	int8_t x526 = 2;
	static int8_t x527 = INT8_MIN;
	uint64_t t96 = 51835831635LLU;

	t96 = ((x525/x526)-(x527*x528));

	if (t96 != 58683770619791058LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x530 = INT16_MAX;
	int32_t x531 = 20197;

	t97 = ((x529/x530)-(x531*x532));

	if (t97 != -242364) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x537 = UINT32_MAX;
	int64_t x538 = -1LL;
	volatile uint32_t x540 = UINT32_MAX;
	volatile int64_t t98 = 9791LL;

	t98 = ((x537/x538)-(x539*x540));

	if (t98 != -4295000063LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x542 = INT8_MIN;
	int16_t x543 = INT16_MIN;
	static volatile int8_t x544 = -1;
	static int32_t t99 = -586;

	t99 = ((x541/x542)-(x543*x544));

	if (t99 != -32768) { NG(); } else { ; }
	
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


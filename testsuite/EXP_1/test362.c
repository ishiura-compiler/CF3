#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = -104;
static volatile uint8_t x12 = 27U;
uint32_t x41 = 57301U;
int16_t x43 = INT16_MAX;
int32_t x44 = -1;
int8_t x46 = 0;
static int64_t t9 = 42988087LL;
uint8_t x62 = 12U;
volatile int16_t x64 = -1;
volatile int64_t t10 = 35344LL;
uint64_t x70 = 210473661792LLU;
volatile int8_t x74 = -1;
uint32_t x77 = UINT32_MAX;
static int8_t x81 = -1;
int16_t x89 = INT16_MIN;
int8_t x93 = -1;
uint64_t x98 = 3517298261354297LLU;
int32_t x107 = INT32_MAX;
volatile uint64_t x115 = UINT64_MAX;
int16_t x116 = INT16_MIN;
uint64_t t19 = 144285096387LLU;
int8_t x121 = 2;
int16_t x131 = -11;
volatile uint32_t t24 = 4435U;
volatile uint16_t x147 = 1362U;
static volatile uint64_t t27 = 60474087880571481LLU;
uint64_t x159 = 15LLU;
int16_t x167 = INT16_MAX;
volatile int16_t x175 = 4;
static uint8_t x184 = 62U;
volatile int32_t t32 = 751586;
int8_t x190 = -1;
int32_t x195 = 35;
volatile int64_t t34 = 107LL;
static int8_t x200 = -1;
int32_t x202 = -1;
int32_t x205 = -18642460;
uint32_t x206 = UINT32_MAX;
static int8_t x225 = -1;
int32_t x227 = -1;
static volatile int64_t t40 = 1031249949153129LL;
uint16_t x229 = UINT16_MAX;
static int32_t x235 = INT32_MIN;
int64_t x238 = -1LL;
int64_t x239 = INT64_MIN;
int32_t x240 = -30234192;
uint64_t x241 = 50196830244956LLU;
uint32_t x249 = 1U;
volatile uint64_t x252 = 106651LLU;
static int64_t x257 = INT64_MIN;
int64_t x262 = -1LL;
int32_t x263 = INT32_MAX;
int16_t x265 = -307;
uint8_t x267 = 9U;
int64_t x271 = -1LL;
int32_t x274 = -35199;
int8_t x278 = INT8_MIN;
int32_t x286 = 7;
volatile int8_t x290 = 0;
int8_t x295 = -1;
static int8_t x306 = -1;
volatile uint8_t x316 = 110U;
int64_t t57 = -14912LL;
uint64_t t59 = 147886778555LLU;
int64_t x340 = -941LL;
uint64_t x350 = UINT64_MAX;
volatile uint64_t t65 = 65738LLU;
static int64_t x354 = -31374072794LL;
volatile int16_t x356 = INT16_MAX;
static int32_t x359 = -1;
int32_t t67 = -44861;
uint32_t x361 = 8U;
int8_t x364 = -1;
int16_t x365 = -1;
volatile uint64_t x372 = UINT64_MAX;
volatile uint64_t t70 = 27601801287411LLU;
int16_t x377 = INT16_MIN;
int16_t x380 = 0;
volatile uint32_t t72 = 759U;
static volatile int16_t x384 = INT16_MIN;
int64_t x393 = 245292408LL;
int64_t t75 = 24609096LL;
volatile uint32_t x405 = 24876U;
uint16_t x406 = UINT16_MAX;
int16_t x415 = -1;
static uint32_t x422 = UINT32_MAX;
int8_t x427 = INT8_MIN;
uint64_t x437 = 16685054007721LLU;
uint8_t x439 = UINT8_MAX;
volatile uint32_t x444 = 12U;
int16_t x446 = 10;
static int8_t x453 = 11;
uint8_t x461 = 121U;
uint32_t x462 = 40U;
volatile int16_t x464 = INT16_MIN;
uint64_t x479 = 202285646730LLU;
volatile int64_t x492 = -1LL;
uint16_t x494 = UINT16_MAX;
int64_t t92 = 0LL;
volatile int8_t x501 = -1;
volatile int64_t x507 = -1LL;
static uint64_t x512 = 9619081539764473LLU;
uint32_t x514 = UINT32_MAX;
static uint64_t x515 = UINT64_MAX;
volatile int64_t x526 = 7999562871924153LL;
static volatile int32_t t98 = 146721;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int64_t x2 = 3304035049LL;
	volatile int64_t x4 = 7527603LL;
	volatile int64_t t0 = 12LL;

	t0 = (((x1*x2)-x3)&x4);

	if (t0 != 3311776LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	uint16_t x6 = UINT16_MAX;
	int32_t x7 = 3;
	static int32_t x8 = INT32_MIN;
	volatile uint64_t t1 = 1116262660422LLU;

	t1 = (((x5*x6)-x7)&x8);

	if (t1 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 1047031303U;
	int64_t x10 = -1LL;
	int8_t x11 = 6;
	volatile int64_t t2 = -3952815569089028410LL;

	t2 = (((x9*x10)-x11)&x12);

	if (t2 != 19LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	uint64_t x14 = UINT64_MAX;
	int32_t x15 = -1273;
	int8_t x16 = 1;
	volatile uint64_t t3 = 1196621520LLU;

	t3 = (((x13*x14)-x15)&x16);

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 691501064771266492LLU;
	int16_t x18 = -1;
	int32_t x19 = INT32_MIN;
	int8_t x20 = INT8_MAX;
	uint64_t t4 = 20020662114139894LLU;

	t4 = (((x17*x18)-x19)&x20);

	if (t4 != 68LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = 40258669LLU;
	static int16_t x30 = -1;
	volatile int32_t x31 = -8052;
	int8_t x32 = 1;
	static volatile uint64_t t5 = 24997LLU;

	t5 = (((x29*x30)-x31)&x32);

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x42 = 3934375U;
	uint32_t t6 = 48684954U;

	t6 = (((x41*x42)-x43)&x44);

	if (t6 != 2105289716U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x45 = 320U;
	uint32_t x47 = 0U;
	static int32_t x48 = INT32_MIN;
	volatile uint32_t t7 = 382355954U;

	t7 = (((x45*x46)-x47)&x48);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x49 = 18214U;
	uint8_t x50 = UINT8_MAX;
	uint8_t x51 = UINT8_MAX;
	volatile uint16_t x52 = 7U;
	uint32_t t8 = 148384U;

	t8 = (((x49*x50)-x51)&x52);

	if (t8 != 3U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x57 = 62;
	volatile int16_t x58 = INT16_MAX;
	volatile int64_t x59 = INT64_MAX;
	int16_t x60 = -1;

	t9 = (((x57*x58)-x59)&x60);

	if (t9 != -9223372036852744253LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x61 = -1LL;
	static int8_t x63 = -1;

	t10 = (((x61*x62)-x63)&x64);

	if (t10 != -11LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x69 = -730423;
	int64_t x71 = INT64_MIN;
	uint64_t x72 = 17LLU;
	volatile uint64_t t11 = 5222438143483LLU;

	t11 = (((x69*x70)-x71)&x72);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x73 = INT16_MIN;
	uint64_t x75 = 7899233219388496LLU;
	static volatile uint8_t x76 = UINT8_MAX;
	uint64_t t12 = 11522223432LLU;

	t12 = (((x73*x74)-x75)&x76);

	if (t12 != 176LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x78 = 6143680;
	int16_t x79 = INT16_MIN;
	volatile uint16_t x80 = 638U;
	uint32_t t13 = 8036U;

	t13 = (((x77*x78)-x79)&x80);

	if (t13 != 64U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x82 = 137488793743101LL;
	static int16_t x83 = -285;
	int8_t x84 = INT8_MAX;
	volatile int64_t t14 = 556612743365722766LL;

	t14 = (((x81*x82)-x83)&x84);

	if (t14 != 32LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x90 = INT16_MIN;
	static int8_t x91 = 1;
	static int16_t x92 = INT16_MIN;
	volatile int32_t t15 = -1;

	t15 = (((x89*x90)-x91)&x92);

	if (t15 != 1073709056) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x94 = -1;
	volatile int64_t x95 = -1LL;
	uint16_t x96 = 4U;
	int64_t t16 = 7861921LL;

	t16 = (((x93*x94)-x95)&x96);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x97 = 15418337;
	volatile uint32_t x99 = 16298638U;
	uint64_t x100 = UINT64_MAX;
	static volatile uint64_t t17 = 485950LLU;

	t17 = (((x97*x98)-x99)&x100);

	if (t17 != 15909090442239046027LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x105 = INT16_MIN;
	int16_t x106 = -1;
	int32_t x108 = INT32_MIN;
	volatile int32_t t18 = INT32_MIN;

	t18 = (((x105*x106)-x107)&x108);

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x113 = INT8_MAX;
	volatile int64_t x114 = -1LL;

	t19 = (((x113*x114)-x115)&x116);

	if (t19 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x117 = INT32_MIN;
	uint64_t x118 = 27862223099180LLU;
	int32_t x119 = -7279;
	static int16_t x120 = INT16_MAX;
	static uint64_t t20 = 64144364LLU;

	t20 = (((x117*x118)-x119)&x120);

	if (t20 != 7279LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x122 = 249U;
	static uint16_t x123 = 18165U;
	static uint32_t x124 = 563127U;
	uint32_t t21 = 15814798U;

	t21 = (((x121*x122)-x123)&x124);

	if (t21 != 561845U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x125 = INT32_MAX;
	int16_t x126 = -1;
	uint64_t x127 = 206021484LLU;
	volatile int16_t x128 = INT16_MIN;
	volatile uint64_t t22 = 561443253674175LLU;

	t22 = (((x125*x126)-x127)&x128);

	if (t22 != 18446744071356022784LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x129 = 652916893822211LLU;
	uint64_t x130 = 22694108LLU;
	int32_t x132 = INT32_MAX;
	uint64_t t23 = 1249568527LLU;

	t23 = (((x129*x130)-x131)&x132);

	if (t23 != 1778747039LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x133 = INT16_MAX;
	int16_t x134 = INT16_MAX;
	uint32_t x135 = UINT32_MAX;
	volatile int16_t x136 = -4;

	t24 = (((x133*x134)-x135)&x136);

	if (t24 != 1073676288U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x141 = UINT64_MAX;
	static int8_t x142 = INT8_MIN;
	volatile int16_t x143 = INT16_MIN;
	uint64_t x144 = 412550481249764LLU;
	uint64_t t25 = 216LLU;

	t25 = (((x141*x142)-x143)&x144);

	if (t25 != 128LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x145 = UINT16_MAX;
	uint16_t x146 = 452U;
	static volatile uint32_t x148 = 1881U;
	volatile uint32_t t26 = 108978U;

	t26 = (((x145*x146)-x147)&x148);

	if (t26 != 72U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x153 = 23U;
	uint64_t x154 = 20472LLU;
	int8_t x155 = INT8_MIN;
	int64_t x156 = INT64_MIN;

	t27 = (((x153*x154)-x155)&x156);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x157 = -63;
	uint64_t x158 = 51875466423776LLU;
	int64_t x160 = INT64_MAX;
	uint64_t t28 = 456045544569LLU;

	t28 = (((x157*x158)-x159)&x160);

	if (t28 != 9220103882470077905LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x165 = INT8_MIN;
	static int16_t x166 = INT16_MIN;
	int8_t x168 = -1;
	volatile int32_t t29 = -23896346;

	t29 = (((x165*x166)-x167)&x168);

	if (t29 != 4161537) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x169 = -1980776LL;
	uint64_t x170 = UINT64_MAX;
	int8_t x171 = -1;
	int8_t x172 = INT8_MAX;
	volatile uint64_t t30 = 22290324786830LLU;

	t30 = (((x169*x170)-x171)&x172);

	if (t30 != 105LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x173 = -73024388474912LL;
	uint16_t x174 = UINT16_MAX;
	int64_t x176 = 5636LL;
	int64_t t31 = 26251903LL;

	t31 = (((x173*x174)-x175)&x176);

	if (t31 != 4LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x181 = UINT8_MAX;
	uint16_t x182 = 87U;
	int8_t x183 = -1;

	t32 = (((x181*x182)-x183)&x184);

	if (t32 != 42) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x189 = 348095520310LLU;
	uint32_t x191 = UINT32_MAX;
	int32_t x192 = -135;
	volatile uint64_t t33 = 299LLU;

	t33 = (((x189*x190)-x191)&x192);

	if (t33 != 18446743721319063881LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x193 = 1330LL;
	uint16_t x194 = UINT16_MAX;
	int64_t x196 = 115365495LL;

	t34 = (((x193*x194)-x195)&x196);

	if (t34 != 69227043LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x197 = 603740;
	int8_t x198 = INT8_MAX;
	int8_t x199 = 55;
	static volatile int32_t t35 = -1190987;

	t35 = (((x197*x198)-x199)&x200);

	if (t35 != 76674925) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x201 = UINT64_MAX;
	static int16_t x203 = INT16_MIN;
	int32_t x204 = INT32_MIN;
	uint64_t t36 = 935273068568LLU;

	t36 = (((x201*x202)-x203)&x204);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x207 = 1;
	static uint64_t x208 = 2993918LLU;
	volatile uint64_t t37 = 5510416LLU;

	t37 = (((x205*x206)-x207)&x208);

	if (t37 != 796186LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x209 = 293U;
	volatile uint32_t x210 = 25895890U;
	int8_t x211 = INT8_MAX;
	uint64_t x212 = 492631943752199960LLU;
	volatile uint64_t t38 = 5849551239816522786LLU;

	t38 = (((x209*x210)-x211)&x212);

	if (t38 != 2216439320LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x213 = INT16_MIN;
	static int16_t x214 = -1;
	uint8_t x215 = 55U;
	int32_t x216 = INT32_MAX;
	int32_t t39 = 66020049;

	t39 = (((x213*x214)-x215)&x216);

	if (t39 != 32713) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x226 = 7660;
	int64_t x228 = -1LL;

	t40 = (((x225*x226)-x227)&x228);

	if (t40 != -7659LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x230 = 51754U;
	static volatile int32_t x231 = -7321;
	int16_t x232 = -4541;
	volatile uint32_t t41 = 1U;

	t41 = (((x229*x230)-x231)&x232);

	if (t41 != 3391701571U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x233 = INT32_MIN;
	volatile uint32_t x234 = 431055758U;
	int8_t x236 = INT8_MAX;
	static uint32_t t42 = 3152213U;

	t42 = (((x233*x234)-x235)&x236);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x237 = 4871865613048148739LLU;
	uint64_t t43 = 650LLU;

	t43 = (((x237*x238)-x239)&x240);

	if (t43 != 4351506423793977520LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x242 = 6;
	volatile int64_t x243 = -331LL;
	int8_t x244 = INT8_MAX;
	volatile uint64_t t44 = 34872659LLU;

	t44 = (((x241*x242)-x243)&x244);

	if (t44 != 115LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x250 = -1;
	int32_t x251 = INT32_MIN;
	volatile uint64_t t45 = 48533803342LLU;

	t45 = (((x249*x250)-x251)&x252);

	if (t45 != 106651LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x258 = 3210281144324017LLU;
	static int16_t x259 = INT16_MAX;
	volatile uint8_t x260 = UINT8_MAX;
	volatile uint64_t t46 = 6803991173178065224LLU;

	t46 = (((x257*x258)-x259)&x260);

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x261 = UINT8_MAX;
	int32_t x264 = INT32_MIN;
	volatile int64_t t47 = 1750863LL;

	t47 = (((x261*x262)-x263)&x264);

	if (t47 != -4294967296LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x266 = 798U;
	int32_t x268 = 11549896;
	int32_t t48 = 1957428;

	t48 = (((x265*x266)-x267)&x268);

	if (t48 != 11534536) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x269 = UINT32_MAX;
	int32_t x270 = -10088;
	volatile int32_t x272 = INT32_MIN;
	int64_t t49 = -143297583536192898LL;

	t49 = (((x269*x270)-x271)&x272);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x273 = UINT64_MAX;
	volatile uint8_t x275 = 5U;
	uint64_t x276 = 907501860LLU;
	static uint64_t t50 = 523LLU;

	t50 = (((x273*x274)-x275)&x276);

	if (t50 != 288LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x277 = 1;
	static volatile uint8_t x279 = 0U;
	int16_t x280 = 28;
	int32_t t51 = 1366;

	t51 = (((x277*x278)-x279)&x280);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x281 = UINT16_MAX;
	uint32_t x282 = 374U;
	int8_t x283 = 25;
	int64_t x284 = INT64_MIN;
	volatile int64_t t52 = 18222LL;

	t52 = (((x281*x282)-x283)&x284);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x285 = -36265;
	int32_t x287 = INT32_MIN;
	uint64_t x288 = UINT64_MAX;
	static volatile uint64_t t53 = 7LLU;

	t53 = (((x285*x286)-x287)&x288);

	if (t53 != 2147229793LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x289 = 0U;
	volatile uint16_t x291 = UINT16_MAX;
	int32_t x292 = 54041717;
	volatile int32_t t54 = -468;

	t54 = (((x289*x290)-x291)&x292);

	if (t54 != 54001665) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x293 = INT32_MAX;
	static uint64_t x294 = 11LLU;
	uint64_t x296 = 155LLU;
	static volatile uint64_t t55 = 8028203949745516698LLU;

	t55 = (((x293*x294)-x295)&x296);

	if (t55 != 146LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x305 = 1;
	volatile int64_t x307 = INT64_MAX;
	static uint8_t x308 = UINT8_MAX;
	int64_t t56 = -2016172068747563LL;

	t56 = (((x305*x306)-x307)&x308);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x313 = 24LL;
	int16_t x314 = -11;
	int64_t x315 = INT64_MIN;

	t57 = (((x313*x314)-x315)&x316);

	if (t57 != 104LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x321 = 4471U;
	static int8_t x322 = INT8_MIN;
	uint8_t x323 = 1U;
	int32_t x324 = INT32_MAX;
	static int32_t t58 = -324683;

	t58 = (((x321*x322)-x323)&x324);

	if (t58 != 2146911359) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x325 = 16104U;
	volatile uint64_t x326 = 348LLU;
	uint8_t x327 = 2U;
	int32_t x328 = -780;

	t59 = (((x325*x326)-x327)&x328);

	if (t59 != 5603412LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x329 = INT16_MIN;
	int8_t x330 = INT8_MAX;
	int32_t x331 = INT32_MIN;
	uint32_t x332 = 19583U;
	volatile uint32_t t60 = 6U;

	t60 = (((x329*x330)-x331)&x332);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x333 = 736;
	static int16_t x334 = INT16_MAX;
	uint8_t x335 = 2U;
	static int8_t x336 = -1;
	volatile int32_t t61 = -103679;

	t61 = (((x333*x334)-x335)&x336);

	if (t61 != 24116510) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x337 = 4U;
	uint16_t x338 = UINT16_MAX;
	uint64_t x339 = 299221556219766LLU;
	uint64_t t62 = 1236LLU;

	t62 = (((x337*x338)-x339)&x340);

	if (t62 != 18446444852153593858LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x341 = 21;
	int8_t x342 = INT8_MIN;
	volatile int8_t x343 = INT8_MIN;
	int64_t x344 = INT64_MAX;
	volatile int64_t t63 = -12LL;

	t63 = (((x341*x342)-x343)&x344);

	if (t63 != 9223372036854773248LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x345 = UINT16_MAX;
	int16_t x346 = -4388;
	int8_t x347 = INT8_MIN;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t64 = -3;

	t64 = (((x345*x346)-x347)&x348);

	if (t64 != 4516) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x349 = 14U;
	uint64_t x351 = 0LLU;
	int64_t x352 = 1803430301250908LL;

	t65 = (((x349*x350)-x351)&x352);

	if (t65 != 1803430301250896LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x353 = -1;
	static int64_t x355 = INT64_MAX;
	volatile int64_t t66 = -453413684LL;

	t66 = (((x353*x354)-x355)&x356);

	if (t66 != 23515LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x357 = 114U;
	uint16_t x358 = UINT16_MAX;
	static int32_t x360 = -1;

	t67 = (((x357*x358)-x359)&x360);

	if (t67 != 7470991) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x362 = 114U;
	volatile int64_t x363 = -1LL;
	int64_t t68 = 184774325342LL;

	t68 = (((x361*x362)-x363)&x364);

	if (t68 != 913LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x366 = -6;
	static volatile int8_t x367 = -35;
	uint64_t x368 = 43784055LLU;
	volatile uint64_t t69 = 3392978612LLU;

	t69 = (((x365*x366)-x367)&x368);

	if (t69 != 33LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x369 = 3225711567842528LLU;
	int8_t x370 = INT8_MIN;
	int8_t x371 = INT8_MAX;

	t70 = (((x369*x370)-x371)&x372);

	if (t70 != 18033852993025707905LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x373 = -1;
	uint16_t x374 = 1972U;
	static uint16_t x375 = 5903U;
	int64_t x376 = INT64_MAX;
	volatile int64_t t71 = 175183LL;

	t71 = (((x373*x374)-x375)&x376);

	if (t71 != 9223372036854767933LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x378 = 943430U;
	int32_t x379 = INT32_MIN;

	t72 = (((x377*x378)-x379)&x380);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x381 = UINT8_MAX;
	uint64_t x382 = 456132881LLU;
	uint8_t x383 = 30U;
	uint64_t t73 = 1136108077400559702LLU;

	t73 = (((x381*x382)-x383)&x384);

	if (t73 != 116313882624LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x385 = 76U;
	volatile uint16_t x386 = 1887U;
	static int32_t x387 = 91595;
	uint8_t x388 = UINT8_MAX;
	int32_t t74 = 110;

	t74 = (((x385*x386)-x387)&x388);

	if (t74 != 105) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x394 = -1LL;
	volatile int32_t x395 = -54556;
	int32_t x396 = 5996;

	t75 = (((x393*x394)-x395)&x396);

	if (t75 != 5924LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x407 = INT32_MIN;
	int64_t x408 = 192640892LL;
	static volatile int64_t t76 = -27270942496LL;

	t76 = (((x405*x406)-x407)&x408);

	if (t76 != 19600980LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x409 = 3U;
	int32_t x410 = -1;
	int32_t x411 = 31938;
	int8_t x412 = -1;
	volatile int32_t t77 = 18;

	t77 = (((x409*x410)-x411)&x412);

	if (t77 != -31941) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x413 = INT16_MIN;
	int16_t x414 = INT16_MIN;
	int8_t x416 = INT8_MAX;
	volatile int32_t t78 = 954;

	t78 = (((x413*x414)-x415)&x416);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x421 = UINT64_MAX;
	volatile int8_t x423 = INT8_MAX;
	volatile int64_t x424 = 2LL;
	volatile uint64_t t79 = 3943587101786645028LLU;

	t79 = (((x421*x422)-x423)&x424);

	if (t79 != 2LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x425 = 5436U;
	volatile int8_t x426 = -1;
	volatile uint64_t x428 = UINT64_MAX;
	volatile uint64_t t80 = 1914139LLU;

	t80 = (((x425*x426)-x427)&x428);

	if (t80 != 18446744073709546308LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x438 = INT64_MIN;
	int32_t x440 = -662;
	volatile uint64_t t81 = 26973LLU;

	t81 = (((x437*x438)-x439)&x440);

	if (t81 != 9223372036854775040LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x441 = INT16_MIN;
	int16_t x442 = INT16_MIN;
	int32_t x443 = 756698439;
	volatile uint32_t t82 = 55U;

	t82 = (((x441*x442)-x443)&x444);

	if (t82 != 8U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x445 = -1LL;
	volatile int16_t x447 = INT16_MIN;
	int32_t x448 = -1;
	volatile int64_t t83 = 21LL;

	t83 = (((x445*x446)-x447)&x448);

	if (t83 != 32758LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x449 = 0;
	int8_t x450 = -1;
	uint8_t x451 = 4U;
	volatile int16_t x452 = -1;
	static int32_t t84 = -58013072;

	t84 = (((x449*x450)-x451)&x452);

	if (t84 != -4) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x454 = 2U;
	int32_t x455 = -60995;
	static uint16_t x456 = UINT16_MAX;
	int32_t t85 = -63483815;

	t85 = (((x453*x454)-x455)&x456);

	if (t85 != 61017) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x457 = 2U;
	uint64_t x458 = UINT64_MAX;
	static uint32_t x459 = UINT32_MAX;
	int32_t x460 = INT32_MAX;
	static volatile uint64_t t86 = 847834054282443321LLU;

	t86 = (((x457*x458)-x459)&x460);

	if (t86 != 2147483647LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x463 = 239809061;
	volatile uint32_t t87 = 284661U;

	t87 = (((x461*x462)-x463)&x464);

	if (t87 != 4055138304U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x477 = 4110;
	int16_t x478 = -1;
	int8_t x480 = INT8_MIN;
	static volatile uint64_t t88 = 474578759942230LLU;

	t88 = (((x477*x478)-x479)&x480);

	if (t88 != 18446743871423900672LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x485 = 13U;
	int16_t x486 = -5;
	static int32_t x487 = INT32_MIN;
	volatile uint64_t x488 = UINT64_MAX;
	volatile uint64_t t89 = 455537496733541LLU;

	t89 = (((x485*x486)-x487)&x488);

	if (t89 != 2147483583LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x489 = INT8_MIN;
	int8_t x490 = INT8_MIN;
	uint64_t x491 = UINT64_MAX;
	static volatile uint64_t t90 = 179976091821910109LLU;

	t90 = (((x489*x490)-x491)&x492);

	if (t90 != 16385LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x493 = 15U;
	static uint8_t x495 = UINT8_MAX;
	static int8_t x496 = -1;
	int32_t t91 = 1041345;

	t91 = (((x493*x494)-x495)&x496);

	if (t91 != 982770) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x497 = INT32_MIN;
	volatile int64_t x498 = -1LL;
	uint32_t x499 = 10U;
	volatile int8_t x500 = INT8_MAX;

	t92 = (((x497*x498)-x499)&x500);

	if (t92 != 118LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x502 = UINT64_MAX;
	static uint8_t x503 = 90U;
	volatile int8_t x504 = -1;
	uint64_t t93 = 21643940761612907LLU;

	t93 = (((x501*x502)-x503)&x504);

	if (t93 != 18446744073709551527LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x505 = INT16_MAX;
	static int8_t x506 = 7;
	static int64_t x508 = INT64_MAX;
	volatile int64_t t94 = 8997081680102724LL;

	t94 = (((x505*x506)-x507)&x508);

	if (t94 != 229370LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x509 = -1LL;
	int16_t x510 = 1037;
	uint32_t x511 = 3902832U;
	static volatile uint64_t t95 = 257877132704675590LLU;

	t95 = (((x509*x510)-x511)&x512);

	if (t95 != 9619081535963265LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x513 = 31;
	int32_t x516 = INT32_MIN;
	volatile uint64_t t96 = 8016885859198LLU;

	t96 = (((x513*x514)-x515)&x516);

	if (t96 != 2147483648LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x525 = INT8_MIN;
	uint32_t x527 = 1010263U;
	volatile int8_t x528 = -53;
	int64_t t97 = -132063235714LL;

	t97 = (((x525*x526)-x527)&x528);

	if (t97 != -1023944047607301879LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x529 = 3U;
	static volatile uint16_t x530 = 28170U;
	int8_t x531 = -10;
	int8_t x532 = -1;

	t98 = (((x529*x530)-x531)&x532);

	if (t98 != 84520) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x533 = -1;
	int32_t x534 = 1347;
	int16_t x535 = INT16_MIN;
	static int64_t x536 = 495LL;
	int64_t t99 = 2334218022LL;

	t99 = (((x533*x534)-x535)&x536);

	if (t99 != 173LL) { NG(); } else { ; }
	
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


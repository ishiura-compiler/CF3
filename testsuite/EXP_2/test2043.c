#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 172U;
volatile int8_t x14 = 0;
int8_t x15 = 0;
volatile int32_t t2 = 4065;
int8_t x17 = INT8_MAX;
int16_t x18 = -1;
int8_t x35 = INT8_MIN;
uint32_t x36 = 829U;
static int32_t x39 = INT32_MAX;
uint64_t t7 = 3LLU;
int16_t x46 = -1;
static int32_t x49 = 1;
volatile uint64_t t9 = 26LLU;
int8_t x59 = -6;
static int16_t x60 = -48;
uint64_t t11 = 3588374LLU;
int8_t x66 = -1;
uint32_t x89 = UINT32_MAX;
int32_t x96 = 19245;
uint8_t x109 = UINT8_MAX;
uint16_t x117 = UINT16_MAX;
volatile int8_t x127 = -2;
volatile uint64_t t25 = 36515943LLU;
static int16_t x130 = INT16_MAX;
uint64_t x132 = 236LLU;
volatile uint8_t x135 = 0U;
volatile int16_t x141 = INT16_MIN;
int8_t x146 = -1;
static uint16_t x147 = 2530U;
volatile int64_t x148 = -1570277830415107078LL;
static volatile int64_t t30 = -2280948LL;
volatile uint64_t x156 = UINT64_MAX;
volatile uint64_t t33 = 3760332696LLU;
int8_t x161 = INT8_MAX;
static volatile uint32_t x162 = UINT32_MAX;
uint64_t x166 = 1LLU;
volatile uint64_t t35 = 1001602083LLU;
int64_t x174 = -1LL;
static volatile int32_t x175 = -1;
static volatile uint32_t x177 = 834U;
int64_t t38 = 2386457427LL;
volatile uint32_t x194 = UINT32_MAX;
uint16_t x195 = UINT16_MAX;
uint32_t t42 = 858064U;
static int8_t x202 = 10;
static uint16_t x208 = 12163U;
volatile int64_t t46 = 1421074866LL;
uint64_t t48 = 575470226302315287LLU;
int32_t t49 = 46384;
volatile int32_t t50 = 557524100;
uint8_t x238 = UINT8_MAX;
int8_t x241 = -1;
static volatile int16_t x243 = -1;
volatile uint64_t t55 = 74354050230807LLU;
volatile int8_t x266 = -1;
uint64_t x274 = 11820480948064LLU;
int32_t x284 = INT32_MIN;
int8_t x288 = INT8_MAX;
uint64_t t60 = 742LLU;
static uint8_t x293 = 57U;
static int8_t x296 = -1;
static volatile int64_t x299 = 1917246079LL;
uint8_t x304 = 1U;
volatile int64_t x309 = INT64_MIN;
static int16_t x310 = INT16_MAX;
int16_t x311 = INT16_MIN;
static uint8_t x314 = 17U;
int8_t x320 = -25;
static uint32_t x336 = UINT32_MAX;
int64_t x340 = 10487973082574824LL;
int32_t x341 = -5;
volatile uint32_t t72 = 310910U;
volatile uint32_t x345 = UINT32_MAX;
static int16_t x348 = INT16_MIN;
int32_t x349 = INT32_MAX;
volatile int32_t x352 = 2435;
volatile int32_t t75 = -542513;
static int64_t x361 = -1LL;
int32_t x363 = 34;
static int64_t t77 = -14LL;
int16_t x368 = INT16_MIN;
uint8_t x369 = 5U;
int64_t x371 = 101LL;
static int8_t x377 = -1;
volatile uint16_t x383 = UINT16_MAX;
static int64_t t84 = 15500LL;
int32_t x393 = -31;
int8_t x405 = INT8_MIN;
volatile uint64_t t91 = 3513219438947544LLU;
int64_t t92 = -317121367LL;
uint64_t x445 = 120309911923LLU;
uint64_t t96 = 16556583863873943LLU;


void f0(void) {
	int16_t x2 = -1;
	int16_t x3 = 380;
	int64_t x4 = -4630944LL;
	volatile int64_t t0 = -131124041569667LL;

	t0 = ((x1-(x2^x3))-x4);

	if (t0 != 4631497LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x9 = -6060;
	int32_t x10 = INT32_MIN;
	int64_t x11 = -212859624793LL;
	int32_t x12 = INT32_MAX;
	static volatile int64_t t1 = -10193977506LL;

	t1 = ((x9-(x10^x11))-x12);

	if (t1 != -216637110866LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = 981;
	volatile int16_t x16 = 37;

	t2 = ((x13-(x14^x15))-x16);

	if (t2 != 944) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x19 = 353;
	int16_t x20 = INT16_MIN;
	int32_t t3 = 131903;

	t3 = ((x17-(x18^x19))-x20);

	if (t3 != 33249) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 4174780U;
	uint8_t x22 = 6U;
	uint32_t x23 = 2U;
	int8_t x24 = -1;
	uint32_t t4 = 370392U;

	t4 = ((x21-(x22^x23))-x24);

	if (t4 != 4174777U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = 1;
	int8_t x30 = -25;
	uint64_t x31 = 180647755657LLU;
	int32_t x32 = 361076;
	volatile uint64_t t5 = 1477637483211LLU;

	t5 = ((x29-(x30^x31))-x32);

	if (t5 != 180647394591LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = -1;
	uint8_t x34 = UINT8_MAX;
	static volatile uint32_t t6 = 41458U;

	t6 = ((x33-(x34^x35))-x36);

	if (t6 != 4294966595U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = UINT32_MAX;
	static volatile uint16_t x38 = UINT16_MAX;
	uint64_t x40 = 17114103606525LLU;

	t7 = ((x37-(x38^x39))-x40);

	if (t7 != 18446726961753494274LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x45 = 6421U;
	static int64_t x47 = INT64_MIN;
	static int64_t x48 = -1LL;
	volatile int64_t t8 = -11LL;

	t8 = ((x45-(x46^x47))-x48);

	if (t8 != -9223372036854769385LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x50 = INT64_MAX;
	int8_t x51 = INT8_MIN;
	uint64_t x52 = UINT64_MAX;

	t9 = ((x49-(x50^x51))-x52);

	if (t9 != 9223372036854775683LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = -1;
	int32_t x54 = -718498161;
	int8_t x55 = 10;
	volatile uint64_t x56 = UINT64_MAX;
	uint64_t t10 = 47792971897LLU;

	t10 = ((x53-(x54^x55))-x56);

	if (t10 != 718498171LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x57 = 8518614409514194LLU;
	int32_t x58 = 9131758;

	t11 = ((x57-(x58^x59))-x60);

	if (t11 != 8518614418645998LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x61 = 114U;
	static int8_t x62 = INT8_MIN;
	volatile int32_t x63 = INT32_MIN;
	uint8_t x64 = 18U;
	int32_t t12 = -4033;

	t12 = ((x61-(x62^x63))-x64);

	if (t12 != -2147483424) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x65 = INT32_MIN;
	uint32_t x67 = 106857U;
	int32_t x68 = INT32_MIN;
	volatile uint32_t t13 = 190008U;

	t13 = ((x65-(x66^x67))-x68);

	if (t13 != 106858U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = 1;
	volatile int64_t x70 = INT64_MAX;
	static int16_t x71 = INT16_MAX;
	int32_t x72 = 2203;
	volatile int64_t t14 = 207431LL;

	t14 = ((x69-(x70^x71))-x72);

	if (t14 != -9223372036854745242LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x73 = -1LL;
	volatile uint16_t x74 = 4U;
	int8_t x75 = -1;
	static int8_t x76 = 3;
	static int64_t t15 = 2105119437325692LL;

	t15 = ((x73-(x74^x75))-x76);

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x77 = UINT8_MAX;
	int8_t x78 = -1;
	static int32_t x79 = INT32_MIN;
	static int8_t x80 = INT8_MIN;
	int32_t t16 = -288481;

	t16 = ((x77-(x78^x79))-x80);

	if (t16 != -2147483264) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x85 = -1126803594170LL;
	int32_t x86 = -1;
	static uint64_t x87 = 631410954006732720LLU;
	uint16_t x88 = 768U;
	uint64_t t17 = 46956219LLU;

	t17 = ((x85-(x86^x87))-x88);

	if (t17 != 631409827203137783LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x90 = -662967LL;
	int64_t x91 = -1LL;
	uint16_t x92 = 1U;
	volatile int64_t t18 = -79780470443131LL;

	t18 = ((x89-(x90^x91))-x92);

	if (t18 != 4294304328LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x93 = 18650597884LL;
	uint8_t x94 = 27U;
	volatile int16_t x95 = INT16_MIN;
	volatile int64_t t19 = 24047LL;

	t19 = ((x93-(x94^x95))-x96);

	if (t19 != 18650611380LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = INT16_MIN;
	uint64_t x98 = UINT64_MAX;
	static int32_t x99 = -1;
	static int16_t x100 = INT16_MIN;
	static uint64_t t20 = 3848604853547309LLU;

	t20 = ((x97-(x98^x99))-x100);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x105 = 5718434889460LL;
	volatile uint32_t x106 = 177837971U;
	static int8_t x107 = INT8_MAX;
	static volatile int8_t x108 = INT8_MAX;
	int64_t t21 = -862225985370392LL;

	t21 = ((x105-(x106^x107))-x108);

	if (t21 != 5718257051273LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x110 = 7419U;
	uint64_t x111 = 199954LLU;
	int32_t x112 = 2018376;
	uint64_t t22 = 2516904912684LLU;

	t22 = ((x109-(x110^x111))-x112);

	if (t22 != 18446744073707332302LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x113 = -1;
	volatile int8_t x114 = -12;
	int8_t x115 = INT8_MAX;
	uint16_t x116 = UINT16_MAX;
	volatile int32_t t23 = -268;

	t23 = ((x113-(x114^x115))-x116);

	if (t23 != -65419) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x118 = 22;
	static int8_t x119 = INT8_MIN;
	int8_t x120 = 52;
	int32_t t24 = 46268675;

	t24 = ((x117-(x118^x119))-x120);

	if (t24 != 65589) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x125 = -7774765600024LL;
	uint8_t x126 = 3U;
	uint64_t x128 = 858923827057263LLU;

	t25 = ((x125-(x126^x127))-x128);

	if (t25 != 18445877375116894332LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x129 = INT64_MIN;
	int16_t x131 = -1;
	uint64_t t26 = 253101919LLU;

	t26 = ((x129-(x130^x131))-x132);

	if (t26 != 9223372036854808340LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x133 = -1;
	int64_t x134 = 38701934596245002LL;
	volatile int32_t x136 = -3229;
	static int64_t t27 = 1193962LL;

	t27 = ((x133-(x134^x135))-x136);

	if (t27 != -38701934596241774LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x137 = 31706484684LLU;
	static int32_t x138 = INT32_MIN;
	int64_t x139 = INT64_MIN;
	int64_t x140 = INT64_MIN;
	static volatile uint64_t t28 = 14963739926335687LLU;

	t28 = ((x137-(x138^x139))-x140);

	if (t28 != 33853968332LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x142 = -1LL;
	int32_t x143 = INT32_MAX;
	uint64_t x144 = 0LLU;
	volatile uint64_t t29 = 376243LLU;

	t29 = ((x141-(x142^x143))-x144);

	if (t29 != 2147450880LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x145 = INT64_MIN;

	t30 = ((x145-(x146^x147))-x148);

	if (t30 != -7653094206439666199LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x149 = -1;
	int32_t x150 = INT32_MIN;
	volatile int32_t x151 = -21972553;
	static int32_t x152 = 1411913;
	static volatile int32_t t31 = -3657549;

	t31 = ((x149-(x150^x151))-x152);

	if (t31 != -2126923009) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x153 = -12;
	volatile int8_t x154 = INT8_MIN;
	static uint64_t x155 = UINT64_MAX;
	uint64_t t32 = 124827097282096LLU;

	t32 = ((x153-(x154^x155))-x156);

	if (t32 != 18446744073709551478LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x157 = 506306LLU;
	int16_t x158 = -170;
	uint8_t x159 = UINT8_MAX;
	int32_t x160 = 16552025;

	t33 = ((x157-(x158^x159))-x160);

	if (t33 != 18446744073693505984LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x163 = 3081U;
	static volatile int16_t x164 = INT16_MIN;
	volatile uint32_t t34 = 196U;

	t34 = ((x161-(x162^x163))-x164);

	if (t34 != 35977U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x165 = 407382LLU;
	static int32_t x167 = -1682191;
	int64_t x168 = -178256826555976265LL;

	t35 = ((x165-(x166^x167))-x168);

	if (t35 != 178256826558065839LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x169 = INT16_MIN;
	int8_t x170 = 38;
	static volatile uint32_t x171 = 1U;
	volatile uint8_t x172 = 7U;
	static volatile uint32_t t36 = 646830245U;

	t36 = ((x169-(x170^x171))-x172);

	if (t36 != 4294934482U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x173 = 11U;
	int8_t x176 = 1;
	static volatile int64_t t37 = -107LL;

	t37 = ((x173-(x174^x175))-x176);

	if (t37 != 10LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x178 = INT16_MIN;
	volatile int32_t x179 = -188227225;
	int64_t x180 = 450547554257977LL;

	t38 = ((x177-(x178^x179))-x180);

	if (t38 != -450543447534174LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x181 = 1U;
	uint32_t x182 = 329165773U;
	static int32_t x183 = INT32_MAX;
	volatile int16_t x184 = 1;
	uint32_t t39 = 2877836U;

	t39 = ((x181-(x182^x183))-x184);

	if (t39 != 2476649422U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = INT64_MIN;
	static uint16_t x186 = 8208U;
	volatile int8_t x187 = -1;
	static uint8_t x188 = 1U;
	volatile int64_t t40 = 4082447LL;

	t40 = ((x185-(x186^x187))-x188);

	if (t40 != -9223372036854767600LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x189 = 63;
	uint64_t x190 = 14859LLU;
	uint16_t x191 = 2859U;
	volatile uint8_t x192 = 0U;
	static volatile uint64_t t41 = 291890LLU;

	t41 = ((x189-(x190^x191))-x192);

	if (t41 != 18446744073709539103LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = INT8_MAX;
	static int8_t x196 = -61;

	t42 = ((x193-(x194^x195))-x196);

	if (t42 != 65724U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x201 = 123992076LLU;
	int16_t x203 = INT16_MIN;
	int8_t x204 = INT8_MIN;
	volatile uint64_t t43 = 194245851004LLU;

	t43 = ((x201-(x202^x203))-x204);

	if (t43 != 124024962LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x205 = -3;
	int32_t x206 = INT32_MAX;
	int16_t x207 = -1;
	volatile int32_t t44 = 1;

	t44 = ((x205-(x206^x207))-x208);

	if (t44 != 2147471482) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x213 = -1;
	int64_t x214 = -3LL;
	uint16_t x215 = UINT16_MAX;
	volatile int8_t x216 = INT8_MIN;
	volatile int64_t t45 = 1447379795781LL;

	t45 = ((x213-(x214^x215))-x216);

	if (t45 != 65661LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x217 = INT64_MAX;
	int8_t x218 = INT8_MAX;
	static volatile uint16_t x219 = UINT16_MAX;
	uint8_t x220 = 85U;

	t46 = ((x217-(x218^x219))-x220);

	if (t46 != 9223372036854710314LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x221 = 0U;
	volatile int16_t x222 = -1;
	uint16_t x223 = 27920U;
	int8_t x224 = 9;
	int32_t t47 = -1343690;

	t47 = ((x221-(x222^x223))-x224);

	if (t47 != 27912) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x225 = INT16_MIN;
	int8_t x226 = -58;
	static volatile uint64_t x227 = 6474LLU;
	int32_t x228 = 657;

	t48 = ((x225-(x226^x227))-x228);

	if (t48 != 18446744073709524707LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x229 = 0;
	int8_t x230 = INT8_MAX;
	static volatile int32_t x231 = 311517438;
	uint16_t x232 = UINT16_MAX;

	t49 = ((x229-(x230^x231))-x232);

	if (t49 != -311582848) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x233 = -1;
	int32_t x234 = 250314;
	int8_t x235 = 1;
	int16_t x236 = INT16_MIN;

	t50 = ((x233-(x234^x235))-x236);

	if (t50 != -217548) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x237 = 50320772630708452LLU;
	volatile int8_t x239 = INT8_MIN;
	int64_t x240 = INT64_MIN;
	static uint64_t t51 = 19244409LLU;

	t51 = ((x237-(x238^x239))-x240);

	if (t51 != 9273692809485484389LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x242 = -41486638359401LL;
	static uint64_t x244 = UINT64_MAX;
	uint64_t t52 = 208404LLU;

	t52 = ((x241-(x242^x243))-x244);

	if (t52 != 18446702587071192216LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x245 = 19612380LLU;
	int64_t x246 = INT64_MIN;
	uint16_t x247 = 0U;
	volatile int8_t x248 = INT8_MIN;
	uint64_t t53 = 12331472691438LLU;

	t53 = ((x245-(x246^x247))-x248);

	if (t53 != 9223372036874388316LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x249 = UINT64_MAX;
	volatile uint8_t x250 = UINT8_MAX;
	static uint16_t x251 = 5806U;
	static uint16_t x252 = 23U;
	volatile uint64_t t54 = 8267777792708LLU;

	t54 = ((x249-(x250^x251))-x252);

	if (t54 != 18446744073709545879LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x253 = 181625877895897837LLU;
	uint64_t x254 = UINT64_MAX;
	int32_t x255 = -1;
	static uint32_t x256 = 191U;

	t55 = ((x253-(x254^x255))-x256);

	if (t55 != 181625877895897646LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x265 = INT32_MIN;
	int64_t x267 = INT64_MAX;
	int16_t x268 = -1;
	static volatile int64_t t56 = 1LL;

	t56 = ((x265-(x266^x267))-x268);

	if (t56 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x273 = -1;
	uint16_t x275 = 15U;
	uint64_t x276 = 16745159397LLU;
	uint64_t t57 = 15094284LLU;

	t57 = ((x273-(x274^x275))-x276);

	if (t57 != 18446732236483444139LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x277 = -1LL;
	uint8_t x278 = 62U;
	volatile uint16_t x279 = 10U;
	uint16_t x280 = 7498U;
	volatile int64_t t58 = 1115519549905LL;

	t58 = ((x277-(x278^x279))-x280);

	if (t58 != -7551LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x281 = -1;
	int32_t x282 = INT32_MIN;
	static int8_t x283 = INT8_MIN;
	int32_t t59 = -177177;

	t59 = ((x281-(x282^x283))-x284);

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x285 = INT64_MAX;
	uint16_t x286 = 8U;
	uint64_t x287 = UINT64_MAX;

	t60 = ((x285-(x286^x287))-x288);

	if (t60 != 9223372036854775689LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x289 = INT8_MIN;
	volatile int16_t x290 = INT16_MIN;
	int16_t x291 = INT16_MIN;
	static int8_t x292 = -59;
	volatile int32_t t61 = -9;

	t61 = ((x289-(x290^x291))-x292);

	if (t61 != -69) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x294 = 4718296456718361752LLU;
	int64_t x295 = INT64_MIN;
	volatile uint64_t t62 = 375625LLU;

	t62 = ((x293-(x294^x295))-x296);

	if (t62 != 4505075580136414114LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x297 = -1;
	volatile uint8_t x298 = 0U;
	int16_t x300 = 2;
	static volatile int64_t t63 = 147620LL;

	t63 = ((x297-(x298^x299))-x300);

	if (t63 != -1917246082LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x301 = 0U;
	int64_t x302 = -1LL;
	int16_t x303 = INT16_MIN;
	int64_t t64 = 477LL;

	t64 = ((x301-(x302^x303))-x304);

	if (t64 != -32768LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x312 = -136033813152474LL;
	int64_t t65 = 3375831476532LL;

	t65 = ((x309-(x310^x311))-x312);

	if (t65 != -9223236003041623333LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x313 = -1;
	uint16_t x315 = UINT16_MAX;
	int32_t x316 = -454235263;
	volatile int32_t t66 = 14;

	t66 = ((x313-(x314^x315))-x316);

	if (t66 != 454169744) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x317 = 3U;
	int8_t x318 = INT8_MAX;
	int8_t x319 = INT8_MIN;
	volatile int32_t t67 = -211;

	t67 = ((x317-(x318^x319))-x320);

	if (t67 != 29) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x321 = INT8_MIN;
	uint8_t x322 = 1U;
	uint32_t x323 = 240294845U;
	static int8_t x324 = -1;
	uint32_t t68 = 125U;

	t68 = ((x321-(x322^x323))-x324);

	if (t68 != 4054672325U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x325 = 109U;
	static volatile int8_t x326 = INT8_MIN;
	volatile uint16_t x327 = 447U;
	static int8_t x328 = INT8_MIN;
	static int32_t t69 = 838989135;

	t69 = ((x325-(x326^x327))-x328);

	if (t69 != 686) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x333 = INT32_MAX;
	uint16_t x334 = 10U;
	volatile int8_t x335 = 3;
	static uint32_t t70 = 2U;

	t70 = ((x333-(x334^x335))-x336);

	if (t70 != 2147483639U) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x337 = -8;
	int16_t x338 = 24;
	int32_t x339 = 359412978;
	static volatile int64_t t71 = -24458216812LL;

	t71 = ((x337-(x338^x339))-x340);

	if (t71 != -10487973441987802LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x342 = INT16_MIN;
	static volatile uint32_t x343 = 86622U;
	static uint16_t x344 = UINT16_MAX;

	t72 = ((x341-(x342^x343))-x344);

	if (t72 != 11678U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x346 = 851U;
	uint16_t x347 = 125U;
	volatile uint32_t t73 = 51611U;

	t73 = ((x345-(x346^x347))-x348);

	if (t73 != 31953U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x350 = -1;
	volatile uint32_t x351 = UINT32_MAX;
	uint32_t t74 = 61983387U;

	t74 = ((x349-(x350^x351))-x352);

	if (t74 != 2147481212U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x353 = -1;
	static int16_t x354 = -1;
	int8_t x355 = 0;
	static int8_t x356 = 0;

	t75 = ((x353-(x354^x355))-x356);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x357 = INT32_MIN;
	int32_t x358 = 849;
	int64_t x359 = INT64_MIN;
	static uint32_t x360 = 10U;
	int64_t t76 = -2079267LL;

	t76 = ((x357-(x358^x359))-x360);

	if (t76 != 9223372034707291301LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x362 = INT8_MAX;
	int64_t x364 = -2LL;

	t77 = ((x361-(x362^x363))-x364);

	if (t77 != -92LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x365 = INT32_MAX;
	uint32_t x366 = 0U;
	volatile int8_t x367 = INT8_MIN;
	static volatile uint32_t t78 = 100U;

	t78 = ((x365-(x366^x367))-x368);

	if (t78 != 2147516543U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x370 = INT64_MAX;
	int32_t x372 = INT32_MIN;
	volatile int64_t t79 = 13942LL;

	t79 = ((x369-(x370^x371))-x372);

	if (t79 != -9223372034707292053LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x373 = 33401953LLU;
	int16_t x374 = INT16_MIN;
	int8_t x375 = 0;
	static int32_t x376 = 521864;
	volatile uint64_t t80 = 53596980490891650LLU;

	t80 = ((x373-(x374^x375))-x376);

	if (t80 != 32912857LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x378 = INT8_MIN;
	int8_t x379 = INT8_MIN;
	uint8_t x380 = 36U;
	int32_t t81 = 78107;

	t81 = ((x377-(x378^x379))-x380);

	if (t81 != -37) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x381 = -1;
	int64_t x382 = 0LL;
	int32_t x384 = INT32_MIN;
	int64_t t82 = -3324LL;

	t82 = ((x381-(x382^x383))-x384);

	if (t82 != 2147418112LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x385 = 12136LL;
	int16_t x386 = 968;
	uint64_t x387 = UINT64_MAX;
	int32_t x388 = INT32_MIN;
	volatile uint64_t t83 = 594845167812LLU;

	t83 = ((x385-(x386^x387))-x388);

	if (t83 != 2147496753LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x389 = INT64_MIN;
	uint8_t x390 = 31U;
	int16_t x391 = -48;
	int64_t x392 = INT64_MIN;

	t84 = ((x389-(x390^x391))-x392);

	if (t84 != 49LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x394 = INT8_MAX;
	volatile int16_t x395 = INT16_MIN;
	int64_t x396 = INT64_MAX;
	volatile int64_t t85 = -33LL;

	t85 = ((x393-(x394^x395))-x396);

	if (t85 != -9223372036854743197LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x397 = 1619;
	static uint32_t x398 = 36U;
	int32_t x399 = 2932445;
	int8_t x400 = -1;
	uint32_t t86 = 16U;

	t86 = ((x397-(x398^x399))-x400);

	if (t86 != 4292036443U) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x401 = 52641187;
	static uint32_t x402 = 35903U;
	uint64_t x403 = UINT64_MAX;
	int64_t x404 = -1LL;
	static uint64_t t87 = 3749876483428994LLU;

	t87 = ((x401-(x402^x403))-x404);

	if (t87 != 52677092LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x406 = INT16_MAX;
	int64_t x407 = -938625766LL;
	uint16_t x408 = 3U;
	volatile int64_t t88 = -144586786929024379LL;

	t88 = ((x405-(x406^x407))-x408);

	if (t88 != 938620056LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x409 = 4234183U;
	volatile uint16_t x410 = UINT16_MAX;
	int32_t x411 = -12165786;
	int64_t x412 = 8326682580LL;
	int64_t t89 = 1125LL;

	t89 = ((x409-(x410^x411))-x412);

	if (t89 != -8310300326LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x413 = 7U;
	static volatile uint32_t x414 = UINT32_MAX;
	uint32_t x415 = 21054U;
	int32_t x416 = -155481620;
	volatile uint32_t t90 = 438U;

	t90 = ((x413-(x414^x415))-x416);

	if (t90 != 155502682U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x421 = UINT8_MAX;
	static uint64_t x422 = 376263602212698LLU;
	int16_t x423 = -1;
	int16_t x424 = 1390;

	t91 = ((x421-(x422^x423))-x424);

	if (t91 != 376263602211564LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x425 = 123U;
	static volatile int8_t x426 = INT8_MIN;
	int8_t x427 = INT8_MAX;
	int64_t x428 = -504LL;

	t92 = ((x425-(x426^x427))-x428);

	if (t92 != 628LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x433 = INT64_MIN;
	int8_t x434 = INT8_MIN;
	uint16_t x435 = UINT16_MAX;
	volatile int32_t x436 = 22;
	volatile int64_t t93 = 104637293790730LL;

	t93 = ((x433-(x434^x435))-x436);

	if (t93 != -9223372036854710421LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x437 = -1;
	volatile int32_t x438 = 69279;
	volatile int64_t x439 = -13556417LL;
	volatile uint64_t x440 = 8515995002810348649LLU;
	uint64_t t94 = 994LLU;

	t94 = ((x437-(x438^x439))-x440);

	if (t94 != 9930749070912823286LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x441 = INT16_MAX;
	static uint16_t x442 = 44U;
	uint8_t x443 = 61U;
	int16_t x444 = INT16_MIN;
	int32_t t95 = 213;

	t95 = ((x441-(x442^x443))-x444);

	if (t95 != 65518) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x446 = UINT64_MAX;
	static uint8_t x447 = 7U;
	volatile int64_t x448 = INT64_MAX;

	t96 = ((x445-(x446^x447))-x448);

	if (t96 != 9223372157164687740LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x449 = 27180U;
	int8_t x450 = -1;
	uint8_t x451 = 24U;
	int16_t x452 = INT16_MIN;
	volatile uint32_t t97 = 15419657U;

	t97 = ((x449-(x450^x451))-x452);

	if (t97 != 59973U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x453 = 1U;
	uint32_t x454 = 191828913U;
	volatile uint32_t x455 = UINT32_MAX;
	static int32_t x456 = -5;
	volatile uint32_t t98 = 2U;

	t98 = ((x453-(x454^x455))-x456);

	if (t98 != 191828920U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x457 = 5U;
	uint32_t x458 = 80205U;
	uint8_t x459 = 1U;
	uint64_t x460 = UINT64_MAX;
	static volatile uint64_t t99 = 349312LLU;

	t99 = ((x457-(x458^x459))-x460);

	if (t99 != 4294887098LLU) { NG(); } else { ; }
	
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


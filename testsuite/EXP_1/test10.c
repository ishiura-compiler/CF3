#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MIN;
uint32_t x5 = UINT32_MAX;
int8_t x16 = -1;
int64_t x21 = INT64_MAX;
volatile int64_t x22 = INT64_MIN;
volatile uint64_t x32 = UINT64_MAX;
int32_t t5 = 6588;
uint32_t x42 = 43906244U;
static int32_t x49 = 2;
static volatile uint16_t x54 = 1U;
int32_t x59 = INT32_MIN;
int32_t x60 = -3289;
volatile int32_t x61 = INT32_MIN;
int16_t x64 = -1;
volatile int32_t t12 = 101;
volatile int64_t x75 = INT64_MIN;
volatile int64_t x76 = -1106282849069030354LL;
volatile int32_t t14 = -3313488;
int32_t t15 = -1272911;
int16_t x86 = INT16_MAX;
volatile uint32_t x90 = 1836381742U;
uint32_t x98 = 305098608U;
volatile int16_t x101 = INT16_MIN;
int16_t x108 = INT16_MIN;
int8_t x112 = 0;
int32_t t22 = 610283;
int64_t x116 = INT64_MIN;
static int8_t x123 = 1;
int8_t x132 = -1;
static int32_t t26 = 98;
int16_t x134 = 64;
volatile int32_t t28 = 28063;
uint16_t x149 = 1U;
uint64_t x150 = UINT64_MAX;
int32_t x152 = INT32_MIN;
volatile int16_t x158 = -15883;
static int32_t x160 = INT32_MAX;
int32_t t31 = 0;
int16_t x165 = INT16_MIN;
int8_t x167 = INT8_MAX;
int16_t x169 = -1;
static int16_t x171 = -2;
int32_t x179 = 0;
volatile int8_t x199 = -1;
uint32_t x205 = 55295223U;
volatile int32_t t40 = -435849;
static volatile int8_t x214 = -1;
int32_t x217 = 47015656;
int8_t x221 = -60;
uint16_t x226 = 347U;
uint64_t x227 = 26LLU;
volatile int32_t t45 = -3;
int32_t x238 = INT32_MIN;
volatile int32_t t47 = -378119453;
uint64_t x257 = 1LLU;
volatile int64_t x258 = 4LL;
static int64_t x260 = -1LL;
volatile int8_t x261 = -1;
int32_t x267 = INT32_MAX;
volatile int32_t t50 = -16973;
int32_t x275 = INT32_MIN;
static int16_t x281 = INT16_MIN;
int64_t x288 = -1LL;
volatile int8_t x289 = INT8_MIN;
int32_t t56 = -3848430;
int16_t x293 = INT16_MIN;
volatile int64_t x297 = INT64_MAX;
volatile int32_t t58 = -55329462;
int64_t x301 = -2229453185016968654LL;
int64_t x307 = 117LL;
volatile int16_t x321 = -1;
static int32_t x326 = INT32_MAX;
uint8_t x335 = 3U;
uint32_t x344 = 189409U;
volatile int32_t t66 = -476;
volatile uint32_t x350 = UINT32_MAX;
int32_t t68 = -2641948;
volatile int16_t x353 = INT16_MIN;
int8_t x357 = -1;
uint32_t x360 = UINT32_MAX;
uint16_t x367 = UINT16_MAX;
int32_t x368 = 22;
int16_t x369 = -378;
int64_t x374 = INT64_MAX;
int32_t t73 = 4311113;
int32_t x378 = -17618;
int32_t x381 = -1;
int64_t x384 = INT64_MIN;
int32_t x386 = INT32_MAX;
volatile int16_t x401 = INT16_MIN;
static volatile int32_t t81 = 46548697;
static int16_t x421 = -1;
uint8_t x426 = 13U;
static uint32_t x430 = 2262U;
int16_t x434 = -13920;
volatile int32_t x435 = INT32_MIN;
int16_t x436 = INT16_MIN;
volatile int32_t t86 = 3969708;
int8_t x454 = INT8_MIN;
static volatile int32_t t89 = 506765;
int64_t x458 = INT64_MIN;
static volatile uint64_t x469 = 221212299711813197LLU;
uint8_t x481 = 111U;
static int8_t x489 = INT8_MIN;
volatile uint32_t x494 = 12U;
static int32_t x496 = -919962828;
volatile int8_t x497 = INT8_MIN;
int8_t x498 = -3;
volatile int32_t t98 = 733664738;
int32_t x502 = INT32_MIN;
volatile int32_t t99 = 1;


void f0(void) {
	static int64_t x1 = 130118314644478LL;
	uint16_t x2 = UINT16_MAX;
	int8_t x3 = INT8_MIN;
	int32_t t0 = 347270930;

	t0 = (((x1+x2)+x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = -2723767LL;
	int8_t x7 = -2;
	volatile int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 0;

	t1 = (((x5+x6)+x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = -1;
	static uint8_t x14 = 52U;
	volatile uint32_t x15 = 9817426U;
	volatile int32_t t2 = 20736244;

	t2 = (((x13+x14)+x15)<=x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 260367U;
	uint16_t x18 = 3252U;
	int8_t x19 = INT8_MIN;
	int16_t x20 = INT16_MAX;
	int32_t t3 = -53985327;

	t3 = (((x17+x18)+x19)<=x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x23 = 0U;
	int8_t x24 = INT8_MAX;
	int32_t t4 = -20;

	t4 = (((x21+x22)+x23)<=x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x29 = 13U;
	uint64_t x30 = 12000332586410LLU;
	uint64_t x31 = UINT64_MAX;

	t5 = (((x29+x30)+x31)<=x32);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = INT8_MIN;
	int16_t x34 = -1;
	int32_t x35 = -103856729;
	uint16_t x36 = 6U;
	volatile int32_t t6 = -90279197;

	t6 = (((x33+x34)+x35)<=x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x41 = 3U;
	uint64_t x43 = 3683389432977361483LLU;
	int16_t x44 = INT16_MIN;
	static volatile int32_t t7 = 0;

	t7 = (((x41+x42)+x43)<=x44);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x45 = -1;
	volatile int64_t x46 = 13041LL;
	int8_t x47 = INT8_MIN;
	static uint8_t x48 = 81U;
	volatile int32_t t8 = -132883710;

	t8 = (((x45+x46)+x47)<=x48);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x50 = -1;
	static volatile int8_t x51 = INT8_MAX;
	uint8_t x52 = 10U;
	volatile int32_t t9 = 180;

	t9 = (((x49+x50)+x51)<=x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = INT16_MIN;
	int32_t x55 = -928;
	int16_t x56 = INT16_MIN;
	int32_t t10 = 8740;

	t10 = (((x53+x54)+x55)<=x56);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = -1;
	uint64_t x58 = UINT64_MAX;
	int32_t t11 = -463482309;

	t11 = (((x57+x58)+x59)<=x60);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x62 = UINT64_MAX;
	int8_t x63 = -30;

	t12 = (((x61+x62)+x63)<=x64);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = INT16_MIN;
	uint64_t x66 = 23729561057LLU;
	uint8_t x67 = 2U;
	uint8_t x68 = UINT8_MAX;
	static int32_t t13 = -15865;

	t13 = (((x65+x66)+x67)<=x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x73 = 4414230412254LL;
	int16_t x74 = INT16_MAX;

	t14 = (((x73+x74)+x75)<=x76);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x77 = 10U;
	uint16_t x78 = 52U;
	int64_t x79 = -1LL;
	static volatile int64_t x80 = INT64_MAX;

	t15 = (((x77+x78)+x79)<=x80);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = -1;
	int8_t x82 = -1;
	uint16_t x83 = UINT16_MAX;
	static int16_t x84 = INT16_MAX;
	volatile int32_t t16 = 934;

	t16 = (((x81+x82)+x83)<=x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x85 = 59198562444936LL;
	int16_t x87 = -1;
	uint32_t x88 = 284397374U;
	volatile int32_t t17 = 476362;

	t17 = (((x85+x86)+x87)<=x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x89 = 839LLU;
	uint32_t x91 = 1U;
	static volatile uint32_t x92 = 6801U;
	volatile int32_t t18 = 11;

	t18 = (((x89+x90)+x91)<=x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x97 = -9;
	volatile uint32_t x99 = UINT32_MAX;
	volatile int32_t x100 = INT32_MIN;
	volatile int32_t t19 = -97;

	t19 = (((x97+x98)+x99)<=x100);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x102 = 3U;
	int8_t x103 = INT8_MIN;
	static uint32_t x104 = UINT32_MAX;
	static int32_t t20 = -517269;

	t20 = (((x101+x102)+x103)<=x104);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x105 = 558868061600478385LLU;
	uint64_t x106 = 5240055LLU;
	static int32_t x107 = INT32_MIN;
	static int32_t t21 = 69584084;

	t21 = (((x105+x106)+x107)<=x108);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x109 = 6610341LLU;
	int8_t x110 = INT8_MAX;
	uint16_t x111 = 2U;

	t22 = (((x109+x110)+x111)<=x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x113 = 146944354U;
	uint64_t x114 = 249426757LLU;
	volatile int8_t x115 = INT8_MIN;
	static int32_t t23 = -72;

	t23 = (((x113+x114)+x115)<=x116);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x121 = UINT32_MAX;
	int32_t x122 = -1;
	uint32_t x124 = UINT32_MAX;
	int32_t t24 = 0;

	t24 = (((x121+x122)+x123)<=x124);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x125 = 1;
	volatile int64_t x126 = -31LL;
	int32_t x127 = INT32_MAX;
	int32_t x128 = 156;
	int32_t t25 = 248;

	t25 = (((x125+x126)+x127)<=x128);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x129 = INT64_MIN;
	uint16_t x130 = 31U;
	volatile uint16_t x131 = 15613U;

	t26 = (((x129+x130)+x131)<=x132);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x133 = INT8_MIN;
	volatile int32_t x135 = -8011;
	static int16_t x136 = -517;
	volatile int32_t t27 = 51;

	t27 = (((x133+x134)+x135)<=x136);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x145 = 7709U;
	int8_t x146 = -1;
	int16_t x147 = INT16_MIN;
	uint32_t x148 = 13772U;

	t28 = (((x145+x146)+x147)<=x148);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x151 = INT32_MAX;
	int32_t t29 = 1;

	t29 = (((x149+x150)+x151)<=x152);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x153 = -1;
	volatile int64_t x154 = -1LL;
	int8_t x155 = -8;
	int8_t x156 = INT8_MIN;
	int32_t t30 = -67004771;

	t30 = (((x153+x154)+x155)<=x156);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x157 = INT8_MIN;
	uint8_t x159 = UINT8_MAX;

	t31 = (((x157+x158)+x159)<=x160);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x161 = INT8_MAX;
	int32_t x162 = INT32_MIN;
	int64_t x163 = -31LL;
	int32_t x164 = INT32_MIN;
	static volatile int32_t t32 = 1044046392;

	t32 = (((x161+x162)+x163)<=x164);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x166 = 9094869687429LLU;
	int32_t x168 = INT32_MIN;
	int32_t t33 = -6673470;

	t33 = (((x165+x166)+x167)<=x168);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x170 = -59438679167LL;
	uint16_t x172 = UINT16_MAX;
	volatile int32_t t34 = -11053199;

	t34 = (((x169+x170)+x171)<=x172);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x177 = INT8_MIN;
	static int64_t x178 = INT64_MAX;
	uint16_t x180 = 22U;
	static int32_t t35 = -591244339;

	t35 = (((x177+x178)+x179)<=x180);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x185 = 100LLU;
	volatile uint8_t x186 = 87U;
	volatile int64_t x187 = INT64_MIN;
	static uint32_t x188 = UINT32_MAX;
	int32_t t36 = 153;

	t36 = (((x185+x186)+x187)<=x188);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x193 = UINT16_MAX;
	uint8_t x194 = 0U;
	int32_t x195 = INT32_MIN;
	int16_t x196 = INT16_MIN;
	int32_t t37 = -13189029;

	t37 = (((x193+x194)+x195)<=x196);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x197 = -52709LL;
	int8_t x198 = -1;
	int32_t x200 = 15881701;
	int32_t t38 = -393;

	t38 = (((x197+x198)+x199)<=x200);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x201 = -752370658449LL;
	static int32_t x202 = INT32_MIN;
	uint16_t x203 = 49U;
	volatile uint16_t x204 = UINT16_MAX;
	volatile int32_t t39 = 60;

	t39 = (((x201+x202)+x203)<=x204);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x206 = -105966LL;
	int16_t x207 = INT16_MAX;
	int64_t x208 = 12609381698345LL;

	t40 = (((x205+x206)+x207)<=x208);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x213 = 4224;
	int16_t x215 = -1;
	uint16_t x216 = 413U;
	int32_t t41 = 4;

	t41 = (((x213+x214)+x215)<=x216);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x218 = -1;
	volatile int8_t x219 = INT8_MIN;
	static uint64_t x220 = UINT64_MAX;
	static volatile int32_t t42 = -23;

	t42 = (((x217+x218)+x219)<=x220);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x222 = -14030507;
	int16_t x223 = 507;
	uint8_t x224 = 30U;
	volatile int32_t t43 = 2;

	t43 = (((x221+x222)+x223)<=x224);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x225 = 295U;
	uint16_t x228 = UINT16_MAX;
	int32_t t44 = -433964;

	t44 = (((x225+x226)+x227)<=x228);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x229 = UINT64_MAX;
	volatile uint16_t x230 = UINT16_MAX;
	uint8_t x231 = UINT8_MAX;
	volatile uint32_t x232 = UINT32_MAX;

	t45 = (((x229+x230)+x231)<=x232);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x233 = INT8_MAX;
	volatile int8_t x234 = INT8_MIN;
	uint16_t x235 = 11U;
	volatile uint64_t x236 = UINT64_MAX;
	static volatile int32_t t46 = -516074;

	t46 = (((x233+x234)+x235)<=x236);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x237 = INT64_MAX;
	static uint8_t x239 = 1U;
	int32_t x240 = INT32_MIN;

	t47 = (((x237+x238)+x239)<=x240);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x259 = 36;
	int32_t t48 = 24146813;

	t48 = (((x257+x258)+x259)<=x260);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x262 = -675260;
	uint16_t x263 = UINT16_MAX;
	int8_t x264 = INT8_MAX;
	volatile int32_t t49 = 651882756;

	t49 = (((x261+x262)+x263)<=x264);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x265 = INT16_MIN;
	uint8_t x266 = 2U;
	volatile uint64_t x268 = 65512853LLU;

	t50 = (((x265+x266)+x267)<=x268);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x269 = INT16_MIN;
	int32_t x270 = INT32_MAX;
	volatile int16_t x271 = INT16_MIN;
	uint64_t x272 = UINT64_MAX;
	int32_t t51 = -9710250;

	t51 = (((x269+x270)+x271)<=x272);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x273 = -1;
	static volatile int32_t x274 = 723021139;
	static int32_t x276 = INT32_MAX;
	volatile int32_t t52 = -99860633;

	t52 = (((x273+x274)+x275)<=x276);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x277 = -497573356;
	int32_t x278 = 0;
	volatile int8_t x279 = 4;
	volatile uint8_t x280 = 18U;
	int32_t t53 = -3;

	t53 = (((x277+x278)+x279)<=x280);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x282 = 47039411608994563LLU;
	volatile int32_t x283 = INT32_MAX;
	uint16_t x284 = 6490U;
	int32_t t54 = -464866;

	t54 = (((x281+x282)+x283)<=x284);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x285 = 215061U;
	static uint16_t x286 = UINT16_MAX;
	int64_t x287 = 20470LL;
	int32_t t55 = -1792;

	t55 = (((x285+x286)+x287)<=x288);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x290 = 626729468LLU;
	volatile int64_t x291 = -1LL;
	int8_t x292 = -14;

	t56 = (((x289+x290)+x291)<=x292);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x294 = 48887481127216LLU;
	int8_t x295 = 1;
	volatile int64_t x296 = INT64_MAX;
	static volatile int32_t t57 = -10;

	t57 = (((x293+x294)+x295)<=x296);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x298 = INT32_MIN;
	int8_t x299 = -1;
	int16_t x300 = INT16_MIN;

	t58 = (((x297+x298)+x299)<=x300);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x302 = -2555959420LL;
	int64_t x303 = -315LL;
	int16_t x304 = -1;
	int32_t t59 = -909858787;

	t59 = (((x301+x302)+x303)<=x304);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x305 = -1229LL;
	uint64_t x306 = 34553166963615LLU;
	int32_t x308 = INT32_MAX;
	volatile int32_t t60 = -5;

	t60 = (((x305+x306)+x307)<=x308);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x317 = INT8_MIN;
	volatile int16_t x318 = 49;
	int16_t x319 = INT16_MAX;
	uint32_t x320 = UINT32_MAX;
	volatile int32_t t61 = -11552;

	t61 = (((x317+x318)+x319)<=x320);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x322 = 19U;
	static volatile int32_t x323 = INT32_MIN;
	static int16_t x324 = INT16_MAX;
	int32_t t62 = -142;

	t62 = (((x321+x322)+x323)<=x324);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x325 = -1;
	volatile int32_t x327 = INT32_MIN;
	static uint32_t x328 = UINT32_MAX;
	int32_t t63 = -72661;

	t63 = (((x325+x326)+x327)<=x328);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x329 = UINT64_MAX;
	int64_t x330 = 2645LL;
	uint8_t x331 = 2U;
	volatile uint32_t x332 = 1U;
	static volatile int32_t t64 = 11744;

	t64 = (((x329+x330)+x331)<=x332);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x333 = 853U;
	volatile int32_t x334 = INT32_MIN;
	static uint16_t x336 = UINT16_MAX;
	static int32_t t65 = 21;

	t65 = (((x333+x334)+x335)<=x336);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x341 = 3195990188LL;
	uint8_t x342 = 0U;
	int32_t x343 = INT32_MIN;

	t66 = (((x341+x342)+x343)<=x344);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x345 = -1;
	uint32_t x346 = 277U;
	int8_t x347 = -1;
	uint16_t x348 = 0U;
	static int32_t t67 = 270705027;

	t67 = (((x345+x346)+x347)<=x348);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x349 = 1U;
	volatile int64_t x351 = INT64_MIN;
	uint8_t x352 = 48U;

	t68 = (((x349+x350)+x351)<=x352);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x354 = -1;
	volatile int32_t x355 = INT32_MAX;
	int32_t x356 = INT32_MIN;
	volatile int32_t t69 = 5205;

	t69 = (((x353+x354)+x355)<=x356);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x358 = INT16_MAX;
	int64_t x359 = -1LL;
	volatile int32_t t70 = -3982;

	t70 = (((x357+x358)+x359)<=x360);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x365 = 72216595LLU;
	int32_t x366 = INT32_MIN;
	int32_t t71 = -243;

	t71 = (((x365+x366)+x367)<=x368);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x370 = -1LL;
	int16_t x371 = INT16_MIN;
	int64_t x372 = -12849LL;
	volatile int32_t t72 = -19045;

	t72 = (((x369+x370)+x371)<=x372);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x373 = 2557182204234979574LLU;
	int16_t x375 = 7746;
	static int32_t x376 = INT32_MIN;

	t73 = (((x373+x374)+x375)<=x376);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x377 = UINT16_MAX;
	uint8_t x379 = UINT8_MAX;
	static int8_t x380 = INT8_MIN;
	static volatile int32_t t74 = -431;

	t74 = (((x377+x378)+x379)<=x380);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x382 = 66880841;
	int64_t x383 = 195157LL;
	int32_t t75 = 126662;

	t75 = (((x381+x382)+x383)<=x384);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x385 = UINT64_MAX;
	static int64_t x387 = 2063652901200289LL;
	static int64_t x388 = -1LL;
	volatile int32_t t76 = 364562;

	t76 = (((x385+x386)+x387)<=x388);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x389 = 126U;
	int8_t x390 = -1;
	static volatile uint16_t x391 = UINT16_MAX;
	uint64_t x392 = 2496319031638348LLU;
	int32_t t77 = 6141;

	t77 = (((x389+x390)+x391)<=x392);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x393 = -4;
	static int64_t x394 = -20284512424257LL;
	int64_t x395 = 52059466656LL;
	int8_t x396 = INT8_MIN;
	int32_t t78 = 16239969;

	t78 = (((x393+x394)+x395)<=x396);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x397 = UINT16_MAX;
	uint8_t x398 = UINT8_MAX;
	static int64_t x399 = INT64_MIN;
	int8_t x400 = -22;
	volatile int32_t t79 = -5765;

	t79 = (((x397+x398)+x399)<=x400);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x402 = -1;
	uint64_t x403 = UINT64_MAX;
	int32_t x404 = INT32_MIN;
	int32_t t80 = -166849524;

	t80 = (((x401+x402)+x403)<=x404);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x409 = UINT16_MAX;
	uint8_t x410 = UINT8_MAX;
	static volatile uint16_t x411 = UINT16_MAX;
	int16_t x412 = -1;

	t81 = (((x409+x410)+x411)<=x412);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x417 = 28U;
	uint16_t x418 = 7U;
	static int32_t x419 = INT32_MIN;
	int64_t x420 = -45477881719LL;
	int32_t t82 = -23;

	t82 = (((x417+x418)+x419)<=x420);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x422 = -1;
	int32_t x423 = INT32_MAX;
	uint16_t x424 = 1027U;
	volatile int32_t t83 = -90;

	t83 = (((x421+x422)+x423)<=x424);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x425 = -17122;
	uint32_t x427 = UINT32_MAX;
	uint64_t x428 = 212444811703LLU;
	volatile int32_t t84 = 69894368;

	t84 = (((x425+x426)+x427)<=x428);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x429 = 2260576U;
	int32_t x431 = -2989;
	uint8_t x432 = UINT8_MAX;
	volatile int32_t t85 = 25;

	t85 = (((x429+x430)+x431)<=x432);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x433 = 1LL;

	t86 = (((x433+x434)+x435)<=x436);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x437 = INT8_MAX;
	int32_t x438 = -945351;
	static uint32_t x439 = 1010U;
	int32_t x440 = -773950662;
	volatile int32_t t87 = 1480880;

	t87 = (((x437+x438)+x439)<=x440);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x449 = UINT16_MAX;
	static int64_t x450 = INT64_MIN;
	int16_t x451 = INT16_MIN;
	volatile uint64_t x452 = 13534027970LLU;
	int32_t t88 = 4165596;

	t88 = (((x449+x450)+x451)<=x452);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x453 = INT8_MIN;
	volatile uint8_t x455 = UINT8_MAX;
	static int64_t x456 = INT64_MAX;

	t89 = (((x453+x454)+x455)<=x456);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x457 = UINT16_MAX;
	uint64_t x459 = 27907425857260LLU;
	volatile uint16_t x460 = UINT16_MAX;
	int32_t t90 = 2600182;

	t90 = (((x457+x458)+x459)<=x460);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x465 = -482829346616324451LL;
	volatile uint32_t x466 = 30951U;
	int8_t x467 = 5;
	int32_t x468 = -1;
	static volatile int32_t t91 = -10943;

	t91 = (((x465+x466)+x467)<=x468);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x470 = 7U;
	uint64_t x471 = 6407233LLU;
	int8_t x472 = -1;
	int32_t t92 = -491;

	t92 = (((x469+x470)+x471)<=x472);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x473 = -1;
	int16_t x474 = 58;
	int32_t x475 = -1;
	int64_t x476 = INT64_MAX;
	int32_t t93 = -330660767;

	t93 = (((x473+x474)+x475)<=x476);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x477 = -504291LL;
	uint16_t x478 = 55U;
	volatile int32_t x479 = INT32_MIN;
	int8_t x480 = INT8_MIN;
	static volatile int32_t t94 = -1972334;

	t94 = (((x477+x478)+x479)<=x480);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x482 = -13844;
	int32_t x483 = -42;
	static int64_t x484 = INT64_MIN;
	static volatile int32_t t95 = -502412249;

	t95 = (((x481+x482)+x483)<=x484);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x490 = 400523LLU;
	int8_t x491 = -1;
	int32_t x492 = -1;
	volatile int32_t t96 = 0;

	t96 = (((x489+x490)+x491)<=x492);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x493 = 863607637LL;
	uint64_t x495 = 1049429541527LLU;
	int32_t t97 = -29453103;

	t97 = (((x493+x494)+x495)<=x496);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x499 = 21880637621LL;
	volatile int16_t x500 = -2;

	t98 = (((x497+x498)+x499)<=x500);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x501 = -1LL;
	uint32_t x503 = 264U;
	int64_t x504 = INT64_MIN;

	t99 = (((x501+x502)+x503)<=x504);

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


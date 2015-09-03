#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 1U;
uint32_t x7 = 1674388655U;
int16_t x8 = INT16_MAX;
int16_t x10 = 1;
volatile int32_t t2 = 236854;
int16_t x22 = -1;
static volatile int32_t x25 = -867259835;
static int32_t x26 = -994619466;
volatile int32_t x30 = -1;
volatile int8_t x36 = INT8_MAX;
static int8_t x60 = 20;
int16_t x75 = -1;
int8_t x89 = INT8_MAX;
int32_t x94 = 578;
static volatile int8_t x96 = INT8_MIN;
uint16_t x106 = 1851U;
uint64_t x109 = 2542006251428908LLU;
static uint8_t x120 = 1U;
static int16_t x122 = -1;
int32_t t23 = 1596199;
volatile int32_t t26 = -7295;
uint8_t x147 = UINT8_MAX;
volatile int32_t t27 = -6898475;
int8_t x152 = INT8_MAX;
uint64_t x156 = 705LLU;
uint16_t x168 = 40U;
int32_t t30 = -6984;
int32_t x169 = -1;
int16_t x170 = INT16_MAX;
static uint32_t x177 = UINT32_MAX;
int64_t x180 = -1584LL;
int16_t x187 = -12936;
static volatile int8_t x194 = INT8_MIN;
static int16_t x195 = INT16_MIN;
static int16_t x198 = -401;
int8_t x200 = INT8_MAX;
uint8_t x201 = UINT8_MAX;
int8_t x212 = 12;
int64_t x218 = INT64_MIN;
uint32_t x219 = UINT32_MAX;
int16_t x226 = 1;
uint64_t x228 = 1838212675756254960LLU;
int16_t x233 = -1;
int32_t t46 = 0;
int16_t x239 = -1;
volatile int32_t t47 = 60547856;
volatile int64_t x259 = INT64_MAX;
volatile int32_t t50 = 389;
int64_t x278 = INT64_MIN;
uint32_t x280 = 3265U;
uint16_t x302 = 6U;
int8_t x306 = INT8_MAX;
int32_t t56 = 18059867;
volatile int32_t t57 = 1503;
int8_t x328 = INT8_MIN;
static int32_t x329 = 119863763;
volatile int64_t x333 = -1LL;
int64_t x338 = -1LL;
static int32_t t63 = -25464123;
static volatile int16_t x343 = 7459;
static uint32_t x344 = UINT32_MAX;
int64_t x349 = INT64_MIN;
uint64_t x359 = UINT64_MAX;
static volatile int32_t t67 = 78472119;
uint8_t x364 = 1U;
int32_t t68 = 6;
int16_t x366 = -1;
static volatile int16_t x367 = INT16_MAX;
volatile int8_t x385 = -1;
static int8_t x387 = INT8_MIN;
int64_t x408 = -170250759LL;
int32_t x409 = -1;
static int16_t x411 = INT16_MAX;
int32_t t77 = 22000974;
int16_t x422 = INT16_MIN;
static int8_t x429 = INT8_MAX;
int8_t x441 = INT8_MIN;
int32_t t84 = -111670421;
uint8_t x446 = 69U;
static uint32_t x452 = 0U;
volatile int32_t t86 = -44;
int16_t x453 = INT16_MIN;
int64_t x460 = 2208122168743151LL;
int32_t t88 = -3038;
int32_t t90 = -13;
static volatile int64_t x498 = -1LL;
int32_t t92 = 3;
static uint8_t x502 = 2U;
int64_t x504 = INT64_MAX;
int16_t x516 = INT16_MIN;
uint32_t x518 = UINT32_MAX;
static int32_t t96 = -32;
int8_t x526 = INT8_MIN;


void f0(void) {
	int32_t x1 = -31522021;
	static int16_t x2 = INT16_MIN;
	volatile uint64_t x3 = 15LLU;
	int64_t x4 = 3012365407900470LL;
	volatile int32_t t0 = -280;

	t0 = ((x1&x2)<=(x3*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x6 = INT8_MIN;
	static int32_t t1 = 126775355;

	t1 = ((x5&x6)<=(x7*x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint16_t x11 = 14U;
	uint8_t x12 = UINT8_MAX;

	t2 = ((x9&x10)<=(x11*x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x13 = -5;
	uint16_t x14 = 381U;
	static uint32_t x15 = 4U;
	volatile uint16_t x16 = 6597U;
	volatile int32_t t3 = -10;

	t3 = ((x13&x14)<=(x15*x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	int16_t x18 = 965;
	volatile uint64_t x19 = UINT64_MAX;
	int32_t x20 = -1;
	volatile int32_t t4 = 237999;

	t4 = ((x17&x18)<=(x19*x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 17U;
	static int64_t x23 = 3866848984LL;
	int16_t x24 = -3509;
	volatile int32_t t5 = -516082670;

	t5 = ((x21&x22)<=(x23*x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x27 = 33375920LLU;
	uint8_t x28 = 77U;
	static int32_t t6 = -3;

	t6 = ((x25&x26)<=(x27*x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = 55291768LLU;
	static int16_t x31 = -86;
	uint16_t x32 = UINT16_MAX;
	static int32_t t7 = -281326387;

	t7 = ((x29&x30)<=(x31*x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	int32_t x34 = INT32_MIN;
	volatile int8_t x35 = INT8_MIN;
	int32_t t8 = 64150;

	t8 = ((x33&x34)<=(x35*x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = -5;
	volatile int16_t x42 = -1;
	int16_t x43 = -1;
	uint32_t x44 = UINT32_MAX;
	volatile int32_t t9 = 836;

	t9 = ((x41&x42)<=(x43*x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x45 = UINT32_MAX;
	static uint64_t x46 = 93689348LLU;
	static uint8_t x47 = 8U;
	int64_t x48 = -9237359LL;
	int32_t t10 = 1;

	t10 = ((x45&x46)<=(x47*x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = UINT16_MAX;
	uint8_t x50 = 2U;
	int16_t x51 = INT16_MIN;
	static int64_t x52 = -1LL;
	int32_t t11 = 550425;

	t11 = ((x49&x50)<=(x51*x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x57 = 3U;
	volatile int32_t x58 = INT32_MIN;
	volatile int8_t x59 = INT8_MAX;
	volatile int32_t t12 = 59577557;

	t12 = ((x57&x58)<=(x59*x60));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x73 = INT8_MIN;
	int16_t x74 = 168;
	int8_t x76 = 0;
	volatile int32_t t13 = -505;

	t13 = ((x73&x74)<=(x75*x76));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x81 = INT16_MIN;
	uint16_t x82 = UINT16_MAX;
	int8_t x83 = -8;
	int64_t x84 = -1LL;
	int32_t t14 = -370856;

	t14 = ((x81&x82)<=(x83*x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x90 = INT32_MIN;
	static int32_t x91 = -106110951;
	uint8_t x92 = 5U;
	static int32_t t15 = -314;

	t15 = ((x89&x90)<=(x91*x92));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x93 = UINT16_MAX;
	int16_t x95 = 83;
	volatile int32_t t16 = -1;

	t16 = ((x93&x94)<=(x95*x96));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x97 = INT32_MAX;
	uint8_t x98 = UINT8_MAX;
	volatile uint8_t x99 = UINT8_MAX;
	volatile int16_t x100 = INT16_MIN;
	int32_t t17 = 1283;

	t17 = ((x97&x98)<=(x99*x100));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x101 = INT8_MIN;
	int8_t x102 = INT8_MIN;
	int16_t x103 = -82;
	uint64_t x104 = 46LLU;
	int32_t t18 = 30544;

	t18 = ((x101&x102)<=(x103*x104));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x105 = INT64_MIN;
	int32_t x107 = -10082136;
	int16_t x108 = 185;
	volatile int32_t t19 = -1985157;

	t19 = ((x105&x106)<=(x107*x108));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x110 = INT32_MIN;
	int32_t x111 = INT32_MIN;
	int16_t x112 = 1;
	volatile int32_t t20 = -1248768;

	t20 = ((x109&x110)<=(x111*x112));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x113 = 131561617LLU;
	int8_t x114 = 31;
	int8_t x115 = INT8_MIN;
	static int32_t x116 = -1;
	int32_t t21 = 4;

	t21 = ((x113&x114)<=(x115*x116));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x117 = -2439;
	uint16_t x118 = 7950U;
	int32_t x119 = INT32_MIN;
	int32_t t22 = -556;

	t22 = ((x117&x118)<=(x119*x120));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x121 = INT64_MIN;
	volatile uint16_t x123 = 16053U;
	int8_t x124 = 17;

	t23 = ((x121&x122)<=(x123*x124));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x129 = INT32_MIN;
	volatile int16_t x130 = 16146;
	volatile int8_t x131 = INT8_MIN;
	static volatile int8_t x132 = INT8_MIN;
	static volatile int32_t t24 = 27;

	t24 = ((x129&x130)<=(x131*x132));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x133 = INT16_MIN;
	uint32_t x134 = 4U;
	uint64_t x135 = 30403013LLU;
	static uint8_t x136 = UINT8_MAX;
	int32_t t25 = 341734802;

	t25 = ((x133&x134)<=(x135*x136));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x141 = -32034995;
	static int8_t x142 = INT8_MIN;
	uint32_t x143 = UINT32_MAX;
	int16_t x144 = -1;

	t26 = ((x141&x142)<=(x143*x144));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x145 = 0U;
	static uint64_t x146 = 2LLU;
	uint32_t x148 = UINT32_MAX;

	t27 = ((x145&x146)<=(x147*x148));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x149 = INT64_MAX;
	int8_t x150 = INT8_MIN;
	int16_t x151 = 1;
	volatile int32_t t28 = 7055590;

	t28 = ((x149&x150)<=(x151*x152));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x153 = INT64_MIN;
	volatile uint64_t x154 = UINT64_MAX;
	int32_t x155 = -1505506;
	volatile int32_t t29 = -644594;

	t29 = ((x153&x154)<=(x155*x156));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x165 = INT16_MIN;
	uint8_t x166 = 1U;
	int64_t x167 = 1310425732LL;

	t30 = ((x165&x166)<=(x167*x168));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x171 = INT8_MAX;
	volatile int32_t x172 = -1;
	int32_t t31 = 179179893;

	t31 = ((x169&x170)<=(x171*x172));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x173 = INT16_MIN;
	uint64_t x174 = 2LLU;
	volatile int8_t x175 = INT8_MIN;
	static uint64_t x176 = UINT64_MAX;
	int32_t t32 = 536192892;

	t32 = ((x173&x174)<=(x175*x176));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x178 = 4U;
	uint8_t x179 = 6U;
	volatile int32_t t33 = 262689;

	t33 = ((x177&x178)<=(x179*x180));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x185 = -1;
	uint8_t x186 = 3U;
	volatile int8_t x188 = INT8_MAX;
	volatile int32_t t34 = -4;

	t34 = ((x185&x186)<=(x187*x188));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x189 = 87U;
	uint8_t x190 = UINT8_MAX;
	int16_t x191 = -125;
	uint64_t x192 = UINT64_MAX;
	int32_t t35 = 478647991;

	t35 = ((x189&x190)<=(x191*x192));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x193 = -1;
	int64_t x196 = -1LL;
	int32_t t36 = -318199560;

	t36 = ((x193&x194)<=(x195*x196));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x197 = INT64_MIN;
	uint8_t x199 = 2U;
	int32_t t37 = -1314395;

	t37 = ((x197&x198)<=(x199*x200));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x202 = -39;
	static int64_t x203 = -773494038659294588LL;
	static uint64_t x204 = 3953605LLU;
	volatile int32_t t38 = 52070921;

	t38 = ((x201&x202)<=(x203*x204));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x205 = -7683376409743750LL;
	uint8_t x206 = UINT8_MAX;
	int32_t x207 = INT32_MAX;
	volatile uint32_t x208 = 3U;
	int32_t t39 = 21;

	t39 = ((x205&x206)<=(x207*x208));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x209 = 316765312LLU;
	int16_t x210 = -27;
	int32_t x211 = -1;
	int32_t t40 = -10136122;

	t40 = ((x209&x210)<=(x211*x212));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x213 = 16604101565LLU;
	uint8_t x214 = UINT8_MAX;
	volatile int64_t x215 = -45LL;
	volatile int16_t x216 = -1;
	int32_t t41 = -19;

	t41 = ((x213&x214)<=(x215*x216));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x217 = 31U;
	uint32_t x220 = 23U;
	int32_t t42 = 14361577;

	t42 = ((x217&x218)<=(x219*x220));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x221 = 7;
	int8_t x222 = INT8_MIN;
	static int16_t x223 = 1031;
	int16_t x224 = 226;
	int32_t t43 = -7;

	t43 = ((x221&x222)<=(x223*x224));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x225 = INT32_MIN;
	uint64_t x227 = UINT64_MAX;
	volatile int32_t t44 = -26350077;

	t44 = ((x225&x226)<=(x227*x228));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x229 = INT32_MIN;
	int8_t x230 = INT8_MIN;
	volatile int16_t x231 = -1;
	volatile uint8_t x232 = UINT8_MAX;
	volatile int32_t t45 = -116938;

	t45 = ((x229&x230)<=(x231*x232));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x234 = UINT8_MAX;
	int16_t x235 = INT16_MIN;
	uint8_t x236 = 13U;

	t46 = ((x233&x234)<=(x235*x236));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x237 = INT64_MAX;
	int32_t x238 = -102627;
	static int64_t x240 = INT64_MAX;

	t47 = ((x237&x238)<=(x239*x240));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x249 = -1LL;
	static uint32_t x250 = UINT32_MAX;
	int32_t x251 = INT32_MAX;
	static volatile uint64_t x252 = UINT64_MAX;
	int32_t t48 = 100007555;

	t48 = ((x249&x250)<=(x251*x252));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x257 = 3603;
	int32_t x258 = INT32_MAX;
	volatile uint64_t x260 = UINT64_MAX;
	volatile int32_t t49 = 2;

	t49 = ((x257&x258)<=(x259*x260));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x265 = -54;
	int16_t x266 = -1;
	int16_t x267 = INT16_MIN;
	uint16_t x268 = UINT16_MAX;

	t50 = ((x265&x266)<=(x267*x268));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x277 = -14353;
	uint8_t x279 = UINT8_MAX;
	int32_t t51 = -4326089;

	t51 = ((x277&x278)<=(x279*x280));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x289 = 13925977983LL;
	int64_t x290 = INT64_MIN;
	volatile uint64_t x291 = 74701039110777LLU;
	int64_t x292 = 6135LL;
	volatile int32_t t52 = -415472519;

	t52 = ((x289&x290)<=(x291*x292));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x293 = 5386LLU;
	int16_t x294 = -3785;
	static int64_t x295 = 770412045LL;
	uint32_t x296 = 152514829U;
	int32_t t53 = -1960455;

	t53 = ((x293&x294)<=(x295*x296));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x297 = 7U;
	int16_t x298 = -1;
	volatile uint16_t x299 = 28U;
	volatile int8_t x300 = -3;
	int32_t t54 = 1;

	t54 = ((x297&x298)<=(x299*x300));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x301 = INT64_MIN;
	int64_t x303 = INT64_MIN;
	uint64_t x304 = 8136764114LLU;
	volatile int32_t t55 = 269361;

	t55 = ((x301&x302)<=(x303*x304));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x305 = -1LL;
	uint32_t x307 = 0U;
	volatile int64_t x308 = INT64_MIN;

	t56 = ((x305&x306)<=(x307*x308));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x313 = 56289506442316707LL;
	int64_t x314 = INT64_MIN;
	int16_t x315 = -17;
	int64_t x316 = 0LL;

	t57 = ((x313&x314)<=(x315*x316));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x317 = 28288LL;
	int64_t x318 = INT64_MIN;
	volatile int8_t x319 = -1;
	volatile int32_t x320 = -400675184;
	volatile int32_t t58 = 48;

	t58 = ((x317&x318)<=(x319*x320));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x321 = -1;
	int32_t x322 = INT32_MIN;
	volatile int8_t x323 = -3;
	static uint64_t x324 = 5077398271LLU;
	int32_t t59 = -6145128;

	t59 = ((x321&x322)<=(x323*x324));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x325 = 126618U;
	int64_t x326 = -1LL;
	int64_t x327 = -317460002577864LL;
	static volatile int32_t t60 = -18909469;

	t60 = ((x325&x326)<=(x327*x328));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x330 = INT8_MAX;
	uint32_t x331 = 1U;
	uint64_t x332 = 23LLU;
	int32_t t61 = 255370;

	t61 = ((x329&x330)<=(x331*x332));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x334 = INT8_MIN;
	static uint8_t x335 = UINT8_MAX;
	uint64_t x336 = 3127164085336575239LLU;
	int32_t t62 = -2517681;

	t62 = ((x333&x334)<=(x335*x336));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x337 = -6;
	static int16_t x339 = -1;
	uint64_t x340 = UINT64_MAX;

	t63 = ((x337&x338)<=(x339*x340));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x341 = UINT32_MAX;
	uint64_t x342 = UINT64_MAX;
	int32_t t64 = 1525869;

	t64 = ((x341&x342)<=(x343*x344));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x345 = UINT8_MAX;
	int16_t x346 = -2995;
	volatile int8_t x347 = -51;
	static int8_t x348 = INT8_MAX;
	volatile int32_t t65 = -653797120;

	t65 = ((x345&x346)<=(x347*x348));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x350 = -9;
	int32_t x351 = -1;
	volatile uint32_t x352 = UINT32_MAX;
	int32_t t66 = 79;

	t66 = ((x349&x350)<=(x351*x352));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x357 = INT16_MIN;
	int16_t x358 = 3027;
	int32_t x360 = 824;

	t67 = ((x357&x358)<=(x359*x360));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x361 = INT16_MIN;
	int64_t x362 = INT64_MIN;
	uint16_t x363 = 940U;

	t68 = ((x361&x362)<=(x363*x364));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x365 = INT32_MIN;
	uint32_t x368 = 137U;
	int32_t t69 = 59;

	t69 = ((x365&x366)<=(x367*x368));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x369 = -1;
	int16_t x370 = -1;
	uint16_t x371 = 3U;
	static uint16_t x372 = 2U;
	volatile int32_t t70 = -5907;

	t70 = ((x369&x370)<=(x371*x372));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x373 = INT64_MIN;
	int8_t x374 = INT8_MAX;
	static volatile int64_t x375 = -1LL;
	uint16_t x376 = 15U;
	int32_t t71 = 128498981;

	t71 = ((x373&x374)<=(x375*x376));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x377 = -1LL;
	int16_t x378 = INT16_MAX;
	static int32_t x379 = INT32_MAX;
	static uint32_t x380 = UINT32_MAX;
	int32_t t72 = 859;

	t72 = ((x377&x378)<=(x379*x380));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x386 = 6LLU;
	int16_t x388 = -1;
	static volatile int32_t t73 = -1088390;

	t73 = ((x385&x386)<=(x387*x388));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x397 = -14305LL;
	uint32_t x398 = 1092472419U;
	int32_t x399 = -197871918;
	int16_t x400 = -1;
	int32_t t74 = 988695;

	t74 = ((x397&x398)<=(x399*x400));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x401 = 10942318;
	int8_t x402 = -1;
	static int8_t x403 = INT8_MIN;
	int8_t x404 = INT8_MIN;
	static volatile int32_t t75 = -16471;

	t75 = ((x401&x402)<=(x403*x404));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x405 = -1;
	volatile uint16_t x406 = 256U;
	int8_t x407 = INT8_MAX;
	volatile int32_t t76 = 127423;

	t76 = ((x405&x406)<=(x407*x408));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x410 = INT8_MAX;
	static uint8_t x412 = 2U;

	t77 = ((x409&x410)<=(x411*x412));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x413 = -1;
	uint64_t x414 = 3020511344883541LLU;
	int16_t x415 = -17;
	int8_t x416 = INT8_MAX;
	int32_t t78 = 3410872;

	t78 = ((x413&x414)<=(x415*x416));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x421 = -813;
	uint64_t x423 = 517685858LLU;
	static int32_t x424 = INT32_MAX;
	int32_t t79 = 1;

	t79 = ((x421&x422)<=(x423*x424));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint32_t x425 = 194957136U;
	int16_t x426 = INT16_MIN;
	uint32_t x427 = 1164536U;
	int8_t x428 = INT8_MAX;
	static int32_t t80 = -1;

	t80 = ((x425&x426)<=(x427*x428));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x430 = -604860655;
	uint8_t x431 = 111U;
	uint64_t x432 = 82115809618LLU;
	static int32_t t81 = -703485;

	t81 = ((x429&x430)<=(x431*x432));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x433 = -1782466;
	uint16_t x434 = 829U;
	int64_t x435 = -1LL;
	int32_t x436 = -1;
	static int32_t t82 = 258550958;

	t82 = ((x433&x434)<=(x435*x436));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x437 = 46U;
	int32_t x438 = INT32_MAX;
	uint32_t x439 = UINT32_MAX;
	static uint8_t x440 = 25U;
	volatile int32_t t83 = -463232060;

	t83 = ((x437&x438)<=(x439*x440));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x442 = -1;
	int8_t x443 = INT8_MIN;
	static volatile int8_t x444 = 2;

	t84 = ((x441&x442)<=(x443*x444));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x445 = INT64_MAX;
	int64_t x447 = 13355132634LL;
	uint32_t x448 = 144601518U;
	int32_t t85 = 365785461;

	t85 = ((x445&x446)<=(x447*x448));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x449 = INT64_MIN;
	int64_t x450 = INT64_MIN;
	uint64_t x451 = 523LLU;

	t86 = ((x449&x450)<=(x451*x452));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x454 = -62;
	int8_t x455 = INT8_MIN;
	int64_t x456 = -1888911019LL;
	volatile int32_t t87 = -12272122;

	t87 = ((x453&x454)<=(x455*x456));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x457 = UINT32_MAX;
	volatile int8_t x458 = -4;
	volatile uint8_t x459 = UINT8_MAX;

	t88 = ((x457&x458)<=(x459*x460));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x461 = 500813017U;
	uint32_t x462 = 3491262U;
	int16_t x463 = -4933;
	static uint32_t x464 = 110U;
	static volatile int32_t t89 = 15087;

	t89 = ((x461&x462)<=(x463*x464));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x485 = 4444U;
	int8_t x486 = INT8_MIN;
	int16_t x487 = INT16_MIN;
	volatile int16_t x488 = INT16_MAX;

	t90 = ((x485&x486)<=(x487*x488));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x489 = 187286U;
	static int32_t x490 = INT32_MAX;
	static volatile uint8_t x491 = UINT8_MAX;
	uint32_t x492 = UINT32_MAX;
	int32_t t91 = -30678;

	t91 = ((x489&x490)<=(x491*x492));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x497 = 31484U;
	int16_t x499 = 559;
	volatile int8_t x500 = INT8_MAX;

	t92 = ((x497&x498)<=(x499*x500));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x501 = 157U;
	int16_t x503 = -1;
	volatile int32_t t93 = 64157834;

	t93 = ((x501&x502)<=(x503*x504));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x505 = 104U;
	volatile int32_t x506 = 1;
	int16_t x507 = INT16_MIN;
	volatile int32_t x508 = -1;
	volatile int32_t t94 = -596766516;

	t94 = ((x505&x506)<=(x507*x508));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x513 = -1;
	volatile int64_t x514 = INT64_MIN;
	volatile int16_t x515 = INT16_MIN;
	static int32_t t95 = -202;

	t95 = ((x513&x514)<=(x515*x516));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x517 = 11U;
	static volatile int64_t x519 = INT64_MIN;
	static volatile uint8_t x520 = 0U;

	t96 = ((x517&x518)<=(x519*x520));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x525 = INT8_MAX;
	uint8_t x527 = UINT8_MAX;
	static int64_t x528 = -1LL;
	int32_t t97 = 16225;

	t97 = ((x525&x526)<=(x527*x528));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x529 = INT64_MIN;
	int16_t x530 = INT16_MIN;
	static int16_t x531 = -95;
	volatile int16_t x532 = INT16_MAX;
	volatile int32_t t98 = 637948079;

	t98 = ((x529&x530)<=(x531*x532));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x533 = 0;
	int32_t x534 = INT32_MIN;
	int16_t x535 = INT16_MAX;
	uint64_t x536 = 15902780677422878LLU;
	volatile int32_t t99 = -185;

	t99 = ((x533&x534)<=(x535*x536));

	if (t99 != 1) { NG(); } else { ; }
	
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


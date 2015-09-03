#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = UINT64_MAX;
volatile uint16_t x9 = 0U;
int8_t x13 = INT8_MAX;
int16_t x14 = -9482;
volatile int32_t t3 = 3;
static int64_t x22 = -1365LL;
int32_t x33 = -1;
int32_t t7 = -1;
volatile int32_t x49 = -1;
uint64_t x53 = UINT64_MAX;
int8_t x58 = INT8_MIN;
int32_t t12 = 1689;
int64_t x64 = INT64_MAX;
volatile int32_t t13 = 9;
volatile int32_t t14 = 261343952;
int32_t t15 = -224;
uint32_t x83 = UINT32_MAX;
int32_t x92 = INT32_MIN;
volatile int32_t t19 = 170;
volatile int32_t t21 = 22;
int32_t t22 = 9104031;
uint8_t x124 = UINT8_MAX;
int32_t t23 = -26597;
int32_t x135 = -16924;
volatile int8_t x157 = 16;
int16_t x158 = INT16_MIN;
volatile int32_t t29 = -897757;
int16_t x172 = INT16_MIN;
volatile uint8_t x180 = UINT8_MAX;
int8_t x199 = -7;
static int16_t x203 = INT16_MIN;
static int64_t x214 = 360506LL;
static int16_t x221 = -5901;
int32_t t40 = 1328554;
uint8_t x225 = 6U;
static int32_t t42 = 31;
uint64_t x234 = 6165929047608008LLU;
uint32_t x241 = 121992509U;
static volatile int32_t x250 = 27;
int32_t x252 = INT32_MIN;
int32_t t45 = -133;
volatile uint64_t x255 = 334LLU;
int32_t t46 = -975218;
int16_t x257 = INT16_MIN;
static int64_t x269 = 126576851LL;
static volatile int32_t t49 = -5915;
static int32_t t51 = 542288;
uint8_t x281 = 31U;
int64_t x283 = 1024087483976225337LL;
uint16_t x284 = UINT16_MAX;
int32_t t52 = -224366;
uint16_t x295 = 1U;
int32_t t55 = 1101;
int64_t x303 = INT64_MAX;
volatile int64_t x307 = 63526105947LL;
uint64_t x317 = 21LLU;
volatile int32_t x326 = -1;
volatile int32_t t63 = 12521;
static int16_t x329 = -1;
static uint32_t x331 = UINT32_MAX;
volatile int32_t t64 = 0;
int8_t x339 = INT8_MAX;
uint16_t x343 = UINT16_MAX;
volatile int32_t t67 = -14327712;
int64_t x359 = INT64_MAX;
static volatile int32_t t75 = 40285;
int64_t x390 = 790437135042LL;
int64_t x391 = -714860355LL;
int16_t x407 = INT16_MAX;
int32_t t80 = 760;
int16_t x423 = INT16_MIN;
int64_t x456 = -283487495714875142LL;
volatile int64_t x464 = INT64_MIN;
volatile int8_t x465 = INT8_MIN;
uint64_t x467 = 15662567961903LLU;
uint16_t x469 = UINT16_MAX;
uint8_t x473 = 18U;
int16_t x476 = -1;
int16_t x479 = INT16_MIN;
int16_t x485 = INT16_MIN;
static int8_t x496 = -1;
uint16_t x500 = 3642U;
static int16_t x503 = INT16_MAX;
static int32_t t98 = -7486895;
uint16_t x508 = 27826U;


void f0(void) {
	static int64_t x1 = INT64_MAX;
	static int32_t x2 = INT32_MIN;
	int64_t x4 = 4125574269086LL;
	volatile int32_t t0 = -665737798;

	t0 = (((x1+x2)-x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 313U;
	int8_t x6 = INT8_MIN;
	int64_t x7 = 54997LL;
	int64_t x8 = 332743418706210852LL;
	volatile int32_t t1 = -7013;

	t1 = (((x5+x6)-x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MIN;
	static uint64_t x11 = 224400543LLU;
	static int64_t x12 = INT64_MIN;
	int32_t t2 = 1544455;

	t2 = (((x9+x10)-x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x15 = 1U;
	volatile int16_t x16 = 1152;

	t3 = (((x13+x14)-x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	volatile int16_t x23 = -2;
	int64_t x24 = INT64_MIN;
	static volatile int32_t t4 = -1;

	t4 = (((x21+x22)-x23)==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x29 = 1;
	int16_t x30 = 2286;
	int64_t x31 = INT64_MAX;
	static uint32_t x32 = UINT32_MAX;
	volatile int32_t t5 = 2;

	t5 = (((x29+x30)-x31)==x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x34 = INT16_MIN;
	volatile int64_t x35 = -1LL;
	static volatile int32_t x36 = INT32_MIN;
	int32_t t6 = -30;

	t6 = (((x33+x34)-x35)==x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x37 = -1;
	volatile uint8_t x38 = 11U;
	uint8_t x39 = UINT8_MAX;
	volatile int16_t x40 = INT16_MIN;

	t7 = (((x37+x38)-x39)==x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = -5502472;
	int16_t x42 = INT16_MAX;
	int16_t x43 = -1;
	int64_t x44 = INT64_MIN;
	static volatile int32_t t8 = 16;

	t8 = (((x41+x42)-x43)==x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = -2800;
	uint16_t x46 = UINT16_MAX;
	volatile int8_t x47 = INT8_MIN;
	static int64_t x48 = INT64_MIN;
	int32_t t9 = 134581;

	t9 = (((x45+x46)-x47)==x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x50 = 0U;
	int32_t x51 = INT32_MIN;
	int16_t x52 = INT16_MAX;
	static volatile int32_t t10 = -1;

	t10 = (((x49+x50)-x51)==x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x54 = UINT64_MAX;
	int8_t x55 = INT8_MAX;
	int32_t x56 = 28;
	int32_t t11 = 11415459;

	t11 = (((x53+x54)-x55)==x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x57 = 1;
	int32_t x59 = INT32_MIN;
	static int64_t x60 = -3LL;

	t12 = (((x57+x58)-x59)==x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = 2853U;
	int16_t x62 = INT16_MIN;
	int8_t x63 = INT8_MIN;

	t13 = (((x61+x62)-x63)==x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x69 = INT16_MIN;
	uint8_t x70 = 3U;
	volatile uint32_t x71 = UINT32_MAX;
	int8_t x72 = -12;

	t14 = (((x69+x70)-x71)==x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = -1LL;
	static uint8_t x74 = 0U;
	static int64_t x75 = 5740419LL;
	volatile int16_t x76 = -1;

	t15 = (((x73+x74)-x75)==x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = 102875U;
	static uint8_t x78 = UINT8_MAX;
	int8_t x79 = -27;
	static int64_t x80 = INT64_MIN;
	int32_t t16 = -411;

	t16 = (((x77+x78)-x79)==x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x81 = INT32_MIN;
	int16_t x82 = 240;
	volatile int16_t x84 = -1;
	int32_t t17 = -11;

	t17 = (((x81+x82)-x83)==x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x89 = 15460LL;
	volatile int8_t x90 = INT8_MIN;
	static volatile int16_t x91 = -2441;
	volatile int32_t t18 = 243;

	t18 = (((x89+x90)-x91)==x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = 16306299598276LL;
	int16_t x94 = INT16_MIN;
	volatile int64_t x95 = -126905094499LL;
	int64_t x96 = INT64_MAX;

	t19 = (((x93+x94)-x95)==x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x97 = -4794230;
	int64_t x98 = -403193028890534LL;
	uint16_t x99 = 41U;
	uint32_t x100 = 1192682U;
	int32_t t20 = 5347;

	t20 = (((x97+x98)-x99)==x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x109 = 4419U;
	int32_t x110 = INT32_MIN;
	int16_t x111 = INT16_MIN;
	volatile uint8_t x112 = 123U;

	t21 = (((x109+x110)-x111)==x112);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x113 = INT16_MAX;
	int64_t x114 = -1LL;
	uint64_t x115 = 1688171LLU;
	int16_t x116 = 0;

	t22 = (((x113+x114)-x115)==x116);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x121 = -1;
	static volatile int32_t x122 = 1312182;
	int32_t x123 = 113;

	t23 = (((x121+x122)-x123)==x124);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x129 = -140;
	int16_t x130 = INT16_MAX;
	uint32_t x131 = UINT32_MAX;
	static uint32_t x132 = 3U;
	int32_t t24 = 59293;

	t24 = (((x129+x130)-x131)==x132);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x133 = -1;
	volatile int16_t x134 = -1;
	static int64_t x136 = 13074992139831677LL;
	int32_t t25 = -1;

	t25 = (((x133+x134)-x135)==x136);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x137 = 1U;
	static int32_t x138 = INT32_MIN;
	volatile uint32_t x139 = 9882050U;
	volatile int8_t x140 = -1;
	int32_t t26 = 8783;

	t26 = (((x137+x138)-x139)==x140);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x149 = UINT32_MAX;
	int8_t x150 = INT8_MIN;
	uint16_t x151 = 23938U;
	int32_t x152 = -1;
	static int32_t t27 = -45;

	t27 = (((x149+x150)-x151)==x152);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x153 = INT32_MIN;
	static int8_t x154 = INT8_MAX;
	static uint64_t x155 = 0LLU;
	int16_t x156 = -299;
	static int32_t t28 = -32992084;

	t28 = (((x153+x154)-x155)==x156);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x159 = 64006294U;
	int8_t x160 = INT8_MIN;

	t29 = (((x157+x158)-x159)==x160);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x169 = 2113809U;
	int16_t x170 = -1;
	static int32_t x171 = 2767628;
	static int32_t t30 = 37069;

	t30 = (((x169+x170)-x171)==x172);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x177 = 855U;
	int32_t x178 = INT32_MAX;
	int8_t x179 = INT8_MIN;
	static int32_t t31 = -44;

	t31 = (((x177+x178)-x179)==x180);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x185 = 2U;
	static volatile int16_t x186 = INT16_MIN;
	int32_t x187 = -1;
	uint64_t x188 = UINT64_MAX;
	volatile int32_t t32 = 30783575;

	t32 = (((x185+x186)-x187)==x188);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x189 = INT64_MIN;
	volatile int64_t x190 = INT64_MAX;
	int16_t x191 = INT16_MAX;
	uint16_t x192 = 10U;
	volatile int32_t t33 = -141;

	t33 = (((x189+x190)-x191)==x192);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x197 = -1;
	static int16_t x198 = 3;
	static int16_t x200 = -1;
	static volatile int32_t t34 = 2;

	t34 = (((x197+x198)-x199)==x200);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x201 = INT32_MIN;
	int16_t x202 = 5;
	volatile int64_t x204 = INT64_MIN;
	int32_t t35 = -1;

	t35 = (((x201+x202)-x203)==x204);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x205 = -3;
	volatile int16_t x206 = -1;
	int8_t x207 = INT8_MIN;
	int64_t x208 = INT64_MAX;
	int32_t t36 = 325377892;

	t36 = (((x205+x206)-x207)==x208);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x209 = -1;
	uint16_t x210 = 1U;
	static int64_t x211 = INT64_MAX;
	int8_t x212 = 9;
	volatile int32_t t37 = 3215100;

	t37 = (((x209+x210)-x211)==x212);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x213 = UINT8_MAX;
	uint8_t x215 = UINT8_MAX;
	int16_t x216 = -1;
	int32_t t38 = -1033473;

	t38 = (((x213+x214)-x215)==x216);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x217 = 1007;
	int8_t x218 = INT8_MIN;
	uint16_t x219 = 10360U;
	volatile int64_t x220 = INT64_MIN;
	int32_t t39 = 1;

	t39 = (((x217+x218)-x219)==x220);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x222 = INT64_MAX;
	static int16_t x223 = -1;
	int16_t x224 = -3370;

	t40 = (((x221+x222)-x223)==x224);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x226 = 5U;
	static int64_t x227 = -1LL;
	int16_t x228 = 49;
	static volatile int32_t t41 = 3092;

	t41 = (((x225+x226)-x227)==x228);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x229 = UINT64_MAX;
	int64_t x230 = -1LL;
	int64_t x231 = -10268577681845722LL;
	volatile int64_t x232 = INT64_MIN;

	t42 = (((x229+x230)-x231)==x232);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x233 = -1;
	static volatile int16_t x235 = -1;
	int64_t x236 = 422118288158LL;
	int32_t t43 = -7764;

	t43 = (((x233+x234)-x235)==x236);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x242 = -1;
	uint16_t x243 = 79U;
	static int64_t x244 = -1LL;
	volatile int32_t t44 = 153418853;

	t44 = (((x241+x242)-x243)==x244);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x249 = -1;
	static int16_t x251 = INT16_MIN;

	t45 = (((x249+x250)-x251)==x252);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x253 = INT32_MAX;
	volatile int32_t x254 = INT32_MIN;
	uint16_t x256 = 112U;

	t46 = (((x253+x254)-x255)==x256);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x258 = -3663226965LL;
	uint16_t x259 = UINT16_MAX;
	uint64_t x260 = 248799393728256317LLU;
	int32_t t47 = 97624;

	t47 = (((x257+x258)-x259)==x260);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x261 = UINT8_MAX;
	uint64_t x262 = UINT64_MAX;
	uint32_t x263 = 225812844U;
	static int64_t x264 = INT64_MAX;
	int32_t t48 = 36839724;

	t48 = (((x261+x262)-x263)==x264);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x270 = INT32_MIN;
	static uint8_t x271 = 49U;
	int32_t x272 = INT32_MAX;

	t49 = (((x269+x270)-x271)==x272);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x273 = -1;
	static int32_t x274 = -1;
	volatile int16_t x275 = 12757;
	int8_t x276 = INT8_MIN;
	volatile int32_t t50 = -69768;

	t50 = (((x273+x274)-x275)==x276);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x277 = 4LL;
	int32_t x278 = -8506469;
	uint32_t x279 = UINT32_MAX;
	static int32_t x280 = INT32_MIN;

	t51 = (((x277+x278)-x279)==x280);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x282 = 2U;

	t52 = (((x281+x282)-x283)==x284);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x285 = UINT32_MAX;
	uint64_t x286 = UINT64_MAX;
	uint16_t x287 = 19U;
	uint8_t x288 = 0U;
	int32_t t53 = 461639;

	t53 = (((x285+x286)-x287)==x288);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x289 = 4U;
	volatile uint16_t x290 = UINT16_MAX;
	uint32_t x291 = 6308U;
	uint16_t x292 = UINT16_MAX;
	int32_t t54 = -26;

	t54 = (((x289+x290)-x291)==x292);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x293 = 45;
	int16_t x294 = INT16_MIN;
	static int32_t x296 = -1;

	t55 = (((x293+x294)-x295)==x296);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x297 = -1;
	uint8_t x298 = UINT8_MAX;
	volatile int64_t x299 = INT64_MAX;
	int16_t x300 = INT16_MAX;
	int32_t t56 = 18;

	t56 = (((x297+x298)-x299)==x300);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x301 = INT8_MAX;
	int32_t x302 = -1;
	int16_t x304 = INT16_MIN;
	volatile int32_t t57 = 8838197;

	t57 = (((x301+x302)-x303)==x304);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x305 = INT8_MAX;
	static uint64_t x306 = 82889729303LLU;
	int8_t x308 = -12;
	int32_t t58 = 55603;

	t58 = (((x305+x306)-x307)==x308);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x309 = INT8_MIN;
	int16_t x310 = 4128;
	static int32_t x311 = INT32_MAX;
	static int8_t x312 = -1;
	static int32_t t59 = 2;

	t59 = (((x309+x310)-x311)==x312);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x313 = INT64_MAX;
	int16_t x314 = -2206;
	int8_t x315 = INT8_MIN;
	int64_t x316 = INT64_MIN;
	int32_t t60 = 166;

	t60 = (((x313+x314)-x315)==x316);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x318 = INT16_MAX;
	volatile int8_t x319 = INT8_MIN;
	int32_t x320 = -1;
	volatile int32_t t61 = -30642535;

	t61 = (((x317+x318)-x319)==x320);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x321 = INT8_MIN;
	uint32_t x322 = 6699U;
	uint16_t x323 = 30781U;
	static int16_t x324 = 0;
	int32_t t62 = 3;

	t62 = (((x321+x322)-x323)==x324);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x325 = 54715175U;
	static int16_t x327 = INT16_MIN;
	uint16_t x328 = 215U;

	t63 = (((x325+x326)-x327)==x328);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x330 = 0U;
	volatile int32_t x332 = INT32_MIN;

	t64 = (((x329+x330)-x331)==x332);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x333 = INT8_MIN;
	int8_t x334 = -7;
	volatile uint8_t x335 = 9U;
	volatile uint64_t x336 = 9346582774800883LLU;
	int32_t t65 = -46455;

	t65 = (((x333+x334)-x335)==x336);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x337 = INT32_MIN;
	volatile int16_t x338 = INT16_MAX;
	static int8_t x340 = INT8_MIN;
	int32_t t66 = -1480;

	t66 = (((x337+x338)-x339)==x340);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x341 = 947U;
	static int64_t x342 = -143613092310558423LL;
	volatile int8_t x344 = -25;

	t67 = (((x341+x342)-x343)==x344);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x345 = UINT16_MAX;
	volatile uint16_t x346 = 21173U;
	int8_t x347 = INT8_MIN;
	volatile int32_t x348 = -1;
	volatile int32_t t68 = 282;

	t68 = (((x345+x346)-x347)==x348);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x349 = UINT64_MAX;
	static int64_t x350 = INT64_MAX;
	int32_t x351 = INT32_MIN;
	static int64_t x352 = 12683337LL;
	int32_t t69 = -474;

	t69 = (((x349+x350)-x351)==x352);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x353 = 37U;
	uint16_t x354 = 1U;
	int8_t x355 = INT8_MAX;
	int32_t x356 = -1;
	static volatile int32_t t70 = -1034;

	t70 = (((x353+x354)-x355)==x356);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x357 = UINT16_MAX;
	volatile int8_t x358 = INT8_MIN;
	int32_t x360 = INT32_MIN;
	int32_t t71 = 373418;

	t71 = (((x357+x358)-x359)==x360);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x365 = -3LL;
	uint32_t x366 = 758227U;
	static uint8_t x367 = 50U;
	int16_t x368 = -12862;
	int32_t t72 = -913454525;

	t72 = (((x365+x366)-x367)==x368);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x373 = INT16_MAX;
	uint64_t x374 = UINT64_MAX;
	uint64_t x375 = UINT64_MAX;
	volatile int8_t x376 = INT8_MIN;
	volatile int32_t t73 = -286427;

	t73 = (((x373+x374)-x375)==x376);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x377 = -41890667LL;
	volatile int32_t x378 = INT32_MIN;
	static uint64_t x379 = 1LLU;
	uint64_t x380 = 2283450668653661038LLU;
	int32_t t74 = 2738;

	t74 = (((x377+x378)-x379)==x380);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x381 = INT16_MIN;
	int8_t x382 = INT8_MIN;
	int32_t x383 = INT32_MIN;
	int32_t x384 = 161;

	t75 = (((x381+x382)-x383)==x384);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x385 = INT8_MAX;
	uint64_t x386 = 56201LLU;
	static int8_t x387 = INT8_MAX;
	int16_t x388 = INT16_MIN;
	int32_t t76 = -48051508;

	t76 = (((x385+x386)-x387)==x388);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x389 = INT8_MIN;
	volatile uint32_t x392 = UINT32_MAX;
	int32_t t77 = 0;

	t77 = (((x389+x390)-x391)==x392);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x393 = UINT64_MAX;
	int32_t x394 = -1;
	static uint32_t x395 = 4126U;
	int16_t x396 = 1;
	int32_t t78 = 3531;

	t78 = (((x393+x394)-x395)==x396);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x401 = 1U;
	volatile int8_t x402 = -12;
	int64_t x403 = 726198320LL;
	int16_t x404 = INT16_MIN;
	int32_t t79 = 1;

	t79 = (((x401+x402)-x403)==x404);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x405 = UINT16_MAX;
	int16_t x406 = -1;
	volatile int16_t x408 = -1;

	t80 = (((x405+x406)-x407)==x408);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x409 = -12;
	static int16_t x410 = -1444;
	uint16_t x411 = 16065U;
	int32_t x412 = -1;
	int32_t t81 = 57;

	t81 = (((x409+x410)-x411)==x412);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x413 = INT16_MIN;
	uint64_t x414 = 18495322436614462LLU;
	int32_t x415 = -510;
	volatile int32_t x416 = -1;
	int32_t t82 = 5911474;

	t82 = (((x413+x414)-x415)==x416);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x421 = UINT16_MAX;
	int64_t x422 = -2392109LL;
	static uint32_t x424 = 1579592U;
	static int32_t t83 = 2;

	t83 = (((x421+x422)-x423)==x424);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x429 = INT16_MIN;
	uint8_t x430 = 0U;
	static int16_t x431 = -984;
	int16_t x432 = INT16_MAX;
	int32_t t84 = -1876;

	t84 = (((x429+x430)-x431)==x432);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x433 = INT8_MAX;
	static volatile uint16_t x434 = 1682U;
	int32_t x435 = -1;
	uint8_t x436 = UINT8_MAX;
	int32_t t85 = -3478919;

	t85 = (((x433+x434)-x435)==x436);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x437 = UINT32_MAX;
	int16_t x438 = INT16_MAX;
	static int32_t x439 = INT32_MAX;
	volatile uint32_t x440 = 29U;
	static int32_t t86 = 14702783;

	t86 = (((x437+x438)-x439)==x440);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x441 = 2;
	uint64_t x442 = 11846593308661611LLU;
	uint64_t x443 = 201564LLU;
	uint8_t x444 = 31U;
	int32_t t87 = 292;

	t87 = (((x441+x442)-x443)==x444);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x445 = INT16_MIN;
	volatile uint64_t x446 = 14LLU;
	static volatile uint8_t x447 = 13U;
	volatile int64_t x448 = 54837609467167LL;
	volatile int32_t t88 = -3849;

	t88 = (((x445+x446)-x447)==x448);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x453 = 1;
	int64_t x454 = 1319815927696LL;
	static int64_t x455 = INT64_MAX;
	volatile int32_t t89 = 80069;

	t89 = (((x453+x454)-x455)==x456);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x461 = 89744768984876LLU;
	int32_t x462 = INT32_MAX;
	static int8_t x463 = -1;
	volatile int32_t t90 = 7;

	t90 = (((x461+x462)-x463)==x464);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x466 = -1LL;
	volatile int32_t x468 = INT32_MIN;
	static int32_t t91 = -412865;

	t91 = (((x465+x466)-x467)==x468);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x470 = UINT16_MAX;
	static uint32_t x471 = 15065U;
	int64_t x472 = 1625216751122LL;
	int32_t t92 = -13;

	t92 = (((x469+x470)-x471)==x472);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x474 = INT64_MIN;
	uint64_t x475 = UINT64_MAX;
	static int32_t t93 = -1;

	t93 = (((x473+x474)-x475)==x476);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x477 = UINT32_MAX;
	int8_t x478 = INT8_MIN;
	int32_t x480 = 1;
	volatile int32_t t94 = -5816565;

	t94 = (((x477+x478)-x479)==x480);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x486 = INT8_MIN;
	int8_t x487 = 0;
	int16_t x488 = -1;
	volatile int32_t t95 = -398485117;

	t95 = (((x485+x486)-x487)==x488);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x493 = -1;
	uint64_t x494 = 515810145504600LLU;
	int64_t x495 = -10119399835565LL;
	int32_t t96 = -230849930;

	t96 = (((x493+x494)-x495)==x496);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x497 = 119089892629225727LL;
	int64_t x498 = -23783641185LL;
	int64_t x499 = 4537387LL;
	volatile int32_t t97 = -180;

	t97 = (((x497+x498)-x499)==x500);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x501 = INT16_MIN;
	volatile int16_t x502 = INT16_MIN;
	uint16_t x504 = 10237U;

	t98 = (((x501+x502)-x503)==x504);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x505 = INT64_MIN;
	static uint8_t x506 = UINT8_MAX;
	static uint8_t x507 = 1U;
	int32_t t99 = -269521;

	t99 = (((x505+x506)-x507)==x508);

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


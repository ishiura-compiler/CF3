#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MAX;
int16_t x13 = INT16_MIN;
uint64_t x14 = 328279309521LLU;
int64_t x19 = -1LL;
static uint64_t x21 = 261154145128092LLU;
int32_t x24 = INT32_MIN;
uint16_t x26 = 3U;
int32_t t6 = 32869225;
volatile int16_t x33 = INT16_MIN;
static int64_t x36 = INT64_MAX;
static volatile int32_t t9 = -58;
volatile int32_t t11 = 1;
int8_t x49 = -18;
static int8_t x70 = 1;
int64_t x72 = -1LL;
volatile uint64_t x73 = 59843187466245LLU;
int32_t x83 = INT32_MIN;
int32_t t17 = 55;
int16_t x96 = -8;
int32_t t19 = 2926482;
volatile int32_t t20 = 30;
int64_t x118 = INT64_MIN;
uint64_t x119 = UINT64_MAX;
static int32_t t22 = 7051205;
volatile int64_t x128 = 125253399264626LL;
volatile int32_t t23 = -190363;
int32_t x136 = INT32_MIN;
volatile int8_t x139 = -1;
volatile int32_t t25 = 113637878;
int8_t x146 = INT8_MAX;
int8_t x147 = INT8_MAX;
uint16_t x148 = 31464U;
int16_t x151 = INT16_MAX;
uint8_t x152 = UINT8_MAX;
static volatile int32_t t27 = -57902689;
volatile uint64_t x158 = 4758106LLU;
int8_t x159 = INT8_MAX;
static int64_t x162 = -1LL;
int8_t x169 = INT8_MAX;
int32_t x171 = 2218700;
volatile int32_t t32 = -96593;
int8_t x173 = -1;
uint64_t x189 = 191LLU;
int64_t x195 = -126LL;
static volatile int64_t x201 = 0LL;
int32_t t38 = 27501;
int64_t x207 = -1LL;
volatile int32_t x208 = INT32_MIN;
int8_t x214 = INT8_MIN;
static volatile int32_t t40 = 91;
int16_t x218 = INT16_MAX;
int8_t x220 = -6;
int32_t x230 = INT32_MAX;
uint64_t x245 = UINT64_MAX;
int8_t x257 = -1;
volatile int16_t x258 = INT16_MIN;
static volatile int32_t x259 = -1;
int64_t x267 = INT64_MIN;
int32_t t47 = -30891289;
int16_t x275 = INT16_MIN;
static int16_t x276 = -11968;
int32_t t48 = 25;
int16_t x278 = INT16_MIN;
uint8_t x282 = 12U;
int32_t t50 = 0;
uint32_t x291 = 1585635U;
uint8_t x292 = 2U;
volatile uint32_t x298 = UINT32_MAX;
int32_t x314 = INT32_MAX;
int16_t x316 = -1;
static volatile int32_t t56 = 1;
static int32_t x338 = -1;
int16_t x352 = INT16_MAX;
uint64_t x387 = 7957582342150284929LLU;
int8_t x388 = 5;
volatile int32_t t70 = 12;
static volatile int16_t x417 = -1;
int32_t x425 = -792055365;
int32_t t72 = -1;
int64_t x433 = 4LL;
uint16_t x435 = 8160U;
static volatile int32_t t75 = -621;
int16_t x455 = INT16_MIN;
int32_t t77 = 58784;
volatile int32_t t78 = 1019;
int8_t x467 = -1;
int16_t x469 = -1;
int64_t x471 = 1095334LL;
int32_t t81 = 12;
int64_t x474 = -1LL;
static int32_t t82 = -3071;
volatile int64_t x477 = -107400779LL;
volatile int32_t t83 = -164207838;
uint64_t x484 = 16107243980604LLU;
int32_t x489 = -1;
volatile int32_t t85 = 1727;
static int16_t x496 = -15342;
static volatile int32_t t88 = 8;
volatile int8_t x515 = -1;
int32_t x516 = 15;
volatile int32_t t91 = -1032338;
volatile int32_t t92 = -2042108;
int32_t x543 = INT32_MIN;
volatile int64_t x564 = INT64_MIN;
int32_t x566 = 981543158;
volatile int8_t x568 = -1;
volatile int32_t t98 = 13643;
static uint8_t x569 = UINT8_MAX;
volatile uint32_t x571 = 536712078U;


void f0(void) {
	static uint64_t x1 = 19LLU;
	int16_t x3 = INT16_MIN;
	static int32_t x4 = INT32_MIN;
	int32_t t0 = -892;

	t0 = (((x1*x2)+x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int8_t x6 = -40;
	int64_t x7 = -17236278603938263LL;
	static uint8_t x8 = 12U;
	int32_t t1 = -2;

	t1 = (((x5*x6)+x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -6347;
	int64_t x10 = 82LL;
	int8_t x11 = INT8_MIN;
	int64_t x12 = INT64_MIN;
	int32_t t2 = -3;

	t2 = (((x9*x10)+x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x15 = INT64_MIN;
	int16_t x16 = -1;
	int32_t t3 = 0;

	t3 = (((x13*x14)+x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = -10509;
	int8_t x18 = INT8_MAX;
	volatile uint64_t x20 = 71LLU;
	int32_t t4 = 8182;

	t4 = (((x17*x18)+x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x22 = INT16_MAX;
	uint64_t x23 = 317068860776LLU;
	volatile int32_t t5 = -239;

	t5 = (((x21*x22)+x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	int16_t x27 = -493;
	int32_t x28 = -5519;

	t6 = (((x25*x26)+x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -9;
	int16_t x30 = -4137;
	uint16_t x31 = UINT16_MAX;
	static volatile int32_t x32 = INT32_MIN;
	volatile int32_t t7 = -5;

	t7 = (((x29*x30)+x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x34 = 0;
	int64_t x35 = 255LL;
	static volatile int32_t t8 = 1;

	t8 = (((x33*x34)+x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = -1;
	static uint8_t x38 = 4U;
	int16_t x39 = INT16_MIN;
	uint64_t x40 = 11188121LLU;

	t9 = (((x37*x38)+x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	int64_t x42 = -1LL;
	uint32_t x43 = UINT32_MAX;
	volatile int64_t x44 = INT64_MIN;
	volatile int32_t t10 = 307;

	t10 = (((x41*x42)+x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 113U;
	int64_t x46 = -1LL;
	static int8_t x47 = -1;
	int64_t x48 = 2140637569506036LL;

	t11 = (((x45*x46)+x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = 54616631U;
	int16_t x51 = INT16_MAX;
	int16_t x52 = INT16_MIN;
	int32_t t12 = 4254;

	t12 = (((x49*x50)+x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MIN;
	volatile uint64_t x58 = UINT64_MAX;
	static uint32_t x59 = UINT32_MAX;
	uint32_t x60 = 910U;
	static int32_t t13 = 1;

	t13 = (((x57*x58)+x59)<x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	int64_t x71 = -1LL;
	volatile int32_t t14 = 2298;

	t14 = (((x69*x70)+x71)<x72);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x74 = UINT32_MAX;
	volatile uint64_t x75 = UINT64_MAX;
	uint32_t x76 = 206251832U;
	int32_t t15 = 930;

	t15 = (((x73*x74)+x75)<x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = -6557;
	int64_t x78 = -1LL;
	uint16_t x79 = UINT16_MAX;
	volatile int32_t x80 = INT32_MAX;
	int32_t t16 = 1;

	t16 = (((x77*x78)+x79)<x80);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MIN;
	volatile uint32_t x82 = UINT32_MAX;
	uint8_t x84 = UINT8_MAX;

	t17 = (((x81*x82)+x83)<x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x85 = 1U;
	volatile int32_t x86 = INT32_MIN;
	uint32_t x87 = 104363153U;
	int64_t x88 = INT64_MIN;
	static int32_t t18 = -71507466;

	t18 = (((x85*x86)+x87)<x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x93 = 198105LLU;
	uint64_t x94 = 51088977LLU;
	static int32_t x95 = -228;

	t19 = (((x93*x94)+x95)<x96);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = -4;
	volatile uint16_t x102 = 4U;
	uint32_t x103 = 3564U;
	int32_t x104 = -1;

	t20 = (((x101*x102)+x103)<x104);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x105 = -36;
	int8_t x106 = INT8_MIN;
	static volatile int32_t x107 = 14;
	int32_t x108 = 333797419;
	int32_t t21 = 15401;

	t21 = (((x105*x106)+x107)<x108);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x117 = 0;
	volatile int32_t x120 = -81;

	t22 = (((x117*x118)+x119)<x120);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x125 = UINT64_MAX;
	static int64_t x126 = 42809LL;
	volatile uint16_t x127 = 728U;

	t23 = (((x125*x126)+x127)<x128);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x133 = 14838068LLU;
	uint8_t x134 = 26U;
	int64_t x135 = INT64_MIN;
	int32_t t24 = 91807378;

	t24 = (((x133*x134)+x135)<x136);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x137 = 471U;
	uint32_t x138 = 856144915U;
	int64_t x140 = -43459941LL;

	t25 = (((x137*x138)+x139)<x140);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x145 = -1LL;
	static int32_t t26 = -1;

	t26 = (((x145*x146)+x147)<x148);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x149 = INT16_MIN;
	volatile uint64_t x150 = 1012LLU;

	t27 = (((x149*x150)+x151)<x152);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x153 = UINT8_MAX;
	uint16_t x154 = 476U;
	uint16_t x155 = 2837U;
	uint32_t x156 = UINT32_MAX;
	static int32_t t28 = 241588;

	t28 = (((x153*x154)+x155)<x156);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x157 = INT16_MAX;
	static int16_t x160 = INT16_MIN;
	int32_t t29 = -6867;

	t29 = (((x157*x158)+x159)<x160);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x161 = -1LL;
	uint32_t x163 = 59628U;
	volatile int8_t x164 = -1;
	int32_t t30 = -43;

	t30 = (((x161*x162)+x163)<x164);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x165 = -405449;
	volatile int16_t x166 = -1;
	uint8_t x167 = 1U;
	int16_t x168 = INT16_MIN;
	static volatile int32_t t31 = 86569;

	t31 = (((x165*x166)+x167)<x168);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x170 = -1;
	int64_t x172 = INT64_MAX;

	t32 = (((x169*x170)+x171)<x172);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x174 = -1;
	uint64_t x175 = UINT64_MAX;
	int8_t x176 = INT8_MAX;
	volatile int32_t t33 = 11;

	t33 = (((x173*x174)+x175)<x176);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x181 = 245190608726LL;
	volatile uint16_t x182 = UINT16_MAX;
	int32_t x183 = 3436453;
	int64_t x184 = INT64_MIN;
	volatile int32_t t34 = -194;

	t34 = (((x181*x182)+x183)<x184);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x185 = INT16_MIN;
	volatile int16_t x186 = -1;
	static uint64_t x187 = 2192908452348725LLU;
	uint64_t x188 = 915772311895LLU;
	int32_t t35 = 137796;

	t35 = (((x185*x186)+x187)<x188);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x190 = -6;
	uint16_t x191 = UINT16_MAX;
	uint32_t x192 = 242U;
	volatile int32_t t36 = 10758;

	t36 = (((x189*x190)+x191)<x192);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x193 = INT8_MIN;
	int8_t x194 = 1;
	int64_t x196 = INT64_MIN;
	int32_t t37 = 414244597;

	t37 = (((x193*x194)+x195)<x196);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x202 = 14839U;
	static int16_t x203 = INT16_MAX;
	int32_t x204 = INT32_MAX;

	t38 = (((x201*x202)+x203)<x204);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x205 = INT16_MIN;
	int8_t x206 = INT8_MIN;
	static volatile int32_t t39 = -322468;

	t39 = (((x205*x206)+x207)<x208);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x213 = -12;
	volatile uint32_t x215 = UINT32_MAX;
	static int32_t x216 = -1;

	t40 = (((x213*x214)+x215)<x216);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x217 = UINT16_MAX;
	uint16_t x219 = 1U;
	static volatile int32_t t41 = -1;

	t41 = (((x217*x218)+x219)<x220);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x229 = 42215432058848LLU;
	static int32_t x231 = INT32_MIN;
	int8_t x232 = -1;
	static volatile int32_t t42 = -872956;

	t42 = (((x229*x230)+x231)<x232);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x246 = INT32_MIN;
	volatile uint64_t x247 = UINT64_MAX;
	int16_t x248 = -1;
	volatile int32_t t43 = 1051559;

	t43 = (((x245*x246)+x247)<x248);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x249 = INT32_MAX;
	int32_t x250 = -1;
	int32_t x251 = -1;
	int8_t x252 = INT8_MIN;
	volatile int32_t t44 = -54;

	t44 = (((x249*x250)+x251)<x252);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x253 = UINT32_MAX;
	uint16_t x254 = 0U;
	int64_t x255 = 2550122LL;
	int8_t x256 = INT8_MAX;
	volatile int32_t t45 = 172;

	t45 = (((x253*x254)+x255)<x256);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x260 = UINT16_MAX;
	volatile int32_t t46 = 13599284;

	t46 = (((x257*x258)+x259)<x260);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x265 = -1LL;
	int16_t x266 = INT16_MIN;
	volatile int32_t x268 = INT32_MIN;

	t47 = (((x265*x266)+x267)<x268);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x273 = -75;
	volatile int16_t x274 = 16;

	t48 = (((x273*x274)+x275)<x276);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x277 = INT16_MAX;
	int32_t x279 = -6;
	int64_t x280 = INT64_MIN;
	volatile int32_t t49 = -23;

	t49 = (((x277*x278)+x279)<x280);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x281 = -1;
	volatile int8_t x283 = 5;
	uint64_t x284 = 2743010104LLU;

	t50 = (((x281*x282)+x283)<x284);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x289 = -1;
	uint16_t x290 = UINT16_MAX;
	static int32_t t51 = 261;

	t51 = (((x289*x290)+x291)<x292);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x293 = UINT64_MAX;
	uint16_t x294 = 16U;
	int64_t x295 = -1LL;
	int16_t x296 = INT16_MIN;
	int32_t t52 = 176973;

	t52 = (((x293*x294)+x295)<x296);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x297 = UINT64_MAX;
	uint16_t x299 = UINT16_MAX;
	uint32_t x300 = UINT32_MAX;
	int32_t t53 = 2428;

	t53 = (((x297*x298)+x299)<x300);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x301 = UINT32_MAX;
	static int8_t x302 = INT8_MAX;
	int32_t x303 = 44482200;
	volatile uint64_t x304 = 19281720863780236LLU;
	volatile int32_t t54 = -4044942;

	t54 = (((x301*x302)+x303)<x304);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x313 = 110954LL;
	volatile uint16_t x315 = 70U;
	int32_t t55 = 675141;

	t55 = (((x313*x314)+x315)<x316);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x317 = INT16_MIN;
	static int16_t x318 = -1;
	int64_t x319 = INT64_MIN;
	int32_t x320 = INT32_MAX;

	t56 = (((x317*x318)+x319)<x320);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x325 = 26U;
	uint16_t x326 = 1396U;
	int64_t x327 = INT64_MIN;
	int16_t x328 = INT16_MIN;
	int32_t t57 = 3288;

	t57 = (((x325*x326)+x327)<x328);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x329 = INT32_MIN;
	uint64_t x330 = 237LLU;
	volatile int16_t x331 = INT16_MIN;
	int16_t x332 = -1;
	static volatile int32_t t58 = -836806504;

	t58 = (((x329*x330)+x331)<x332);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x333 = 0U;
	int32_t x334 = INT32_MAX;
	int16_t x335 = -6932;
	int8_t x336 = 29;
	int32_t t59 = 388;

	t59 = (((x333*x334)+x335)<x336);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x337 = INT32_MAX;
	static uint16_t x339 = UINT16_MAX;
	volatile int64_t x340 = INT64_MIN;
	volatile int32_t t60 = -2767;

	t60 = (((x337*x338)+x339)<x340);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x341 = -1;
	int32_t x342 = -1;
	int8_t x343 = 8;
	int64_t x344 = INT64_MAX;
	int32_t t61 = -38756;

	t61 = (((x341*x342)+x343)<x344);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x345 = -1;
	static int32_t x346 = 44;
	uint64_t x347 = UINT64_MAX;
	static int8_t x348 = INT8_MAX;
	volatile int32_t t62 = 374192370;

	t62 = (((x345*x346)+x347)<x348);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x349 = 13426U;
	static uint16_t x350 = 5179U;
	static int8_t x351 = INT8_MAX;
	volatile int32_t t63 = -196310622;

	t63 = (((x349*x350)+x351)<x352);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x365 = UINT64_MAX;
	int16_t x366 = INT16_MIN;
	int8_t x367 = INT8_MAX;
	uint64_t x368 = 327131LLU;
	static int32_t t64 = -109174243;

	t64 = (((x365*x366)+x367)<x368);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x373 = INT8_MIN;
	volatile uint32_t x374 = UINT32_MAX;
	int16_t x375 = 2;
	int8_t x376 = 2;
	int32_t t65 = 419860;

	t65 = (((x373*x374)+x375)<x376);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x381 = INT8_MIN;
	int32_t x382 = -1;
	int16_t x383 = INT16_MIN;
	uint8_t x384 = 15U;
	static volatile int32_t t66 = 25951;

	t66 = (((x381*x382)+x383)<x384);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x385 = 30U;
	volatile int8_t x386 = INT8_MIN;
	int32_t t67 = 14478762;

	t67 = (((x385*x386)+x387)<x388);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x401 = -1;
	static int64_t x402 = INT64_MAX;
	volatile int32_t x403 = 61210;
	static int64_t x404 = INT64_MIN;
	int32_t t68 = -2837;

	t68 = (((x401*x402)+x403)<x404);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x409 = INT16_MIN;
	uint8_t x410 = 8U;
	uint8_t x411 = 2U;
	volatile int64_t x412 = -138LL;
	volatile int32_t t69 = -50940;

	t69 = (((x409*x410)+x411)<x412);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x413 = INT16_MAX;
	uint8_t x414 = 0U;
	uint8_t x415 = UINT8_MAX;
	int64_t x416 = INT64_MIN;

	t70 = (((x413*x414)+x415)<x416);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x418 = 6;
	int8_t x419 = INT8_MIN;
	int8_t x420 = -1;
	volatile int32_t t71 = 126417680;

	t71 = (((x417*x418)+x419)<x420);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x426 = UINT32_MAX;
	int64_t x427 = -11LL;
	int32_t x428 = INT32_MAX;

	t72 = (((x425*x426)+x427)<x428);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x434 = UINT32_MAX;
	static uint16_t x436 = UINT16_MAX;
	volatile int32_t t73 = 7586752;

	t73 = (((x433*x434)+x435)<x436);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x437 = -7841626;
	static int16_t x438 = -1;
	int16_t x439 = INT16_MIN;
	static int32_t x440 = INT32_MIN;
	int32_t t74 = -3;

	t74 = (((x437*x438)+x439)<x440);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x441 = 392LLU;
	int32_t x442 = INT32_MIN;
	int32_t x443 = -1;
	static int64_t x444 = -210LL;

	t75 = (((x441*x442)+x443)<x444);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x445 = UINT8_MAX;
	int16_t x446 = INT16_MIN;
	uint16_t x447 = 38U;
	static int8_t x448 = INT8_MIN;
	static volatile int32_t t76 = 100195;

	t76 = (((x445*x446)+x447)<x448);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x453 = 13U;
	uint8_t x454 = 114U;
	uint64_t x456 = 195LLU;

	t77 = (((x453*x454)+x455)<x456);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x457 = -1;
	uint64_t x458 = 184344249309LLU;
	volatile int8_t x459 = -1;
	static volatile int8_t x460 = -1;

	t78 = (((x457*x458)+x459)<x460);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x461 = -1LL;
	uint64_t x462 = 235665727990872LLU;
	int32_t x463 = INT32_MIN;
	int64_t x464 = 199358790663536LL;
	int32_t t79 = 7;

	t79 = (((x461*x462)+x463)<x464);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x465 = UINT64_MAX;
	uint64_t x466 = 1009745932841LLU;
	int8_t x468 = INT8_MAX;
	volatile int32_t t80 = 23;

	t80 = (((x465*x466)+x467)<x468);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x470 = INT8_MIN;
	int8_t x472 = 20;

	t81 = (((x469*x470)+x471)<x472);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x473 = INT16_MAX;
	static volatile int32_t x475 = -1;
	int16_t x476 = -1;

	t82 = (((x473*x474)+x475)<x476);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x478 = 19U;
	int32_t x479 = 799;
	volatile int16_t x480 = INT16_MAX;

	t83 = (((x477*x478)+x479)<x480);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x481 = INT16_MAX;
	uint8_t x482 = 11U;
	static int8_t x483 = -1;
	int32_t t84 = -314551897;

	t84 = (((x481*x482)+x483)<x484);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x490 = INT32_MAX;
	static int8_t x491 = -1;
	volatile int16_t x492 = INT16_MAX;

	t85 = (((x489*x490)+x491)<x492);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x493 = -1LL;
	uint32_t x494 = 715U;
	uint32_t x495 = UINT32_MAX;
	static volatile int32_t t86 = 1;

	t86 = (((x493*x494)+x495)<x496);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x501 = UINT32_MAX;
	int32_t x502 = 21783823;
	int16_t x503 = INT16_MAX;
	uint64_t x504 = 475527281137686LLU;
	int32_t t87 = 333;

	t87 = (((x501*x502)+x503)<x504);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x505 = INT16_MIN;
	int64_t x506 = 5216815808811LL;
	uint32_t x507 = 622610530U;
	int32_t x508 = -1;

	t88 = (((x505*x506)+x507)<x508);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x513 = INT8_MAX;
	volatile uint64_t x514 = UINT64_MAX;
	int32_t t89 = -941094845;

	t89 = (((x513*x514)+x515)<x516);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x517 = UINT64_MAX;
	int8_t x518 = INT8_MIN;
	static uint16_t x519 = 0U;
	volatile uint8_t x520 = 7U;
	int32_t t90 = -10836;

	t90 = (((x517*x518)+x519)<x520);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x521 = UINT8_MAX;
	volatile int16_t x522 = INT16_MIN;
	static int8_t x523 = 8;
	int32_t x524 = INT32_MIN;

	t91 = (((x521*x522)+x523)<x524);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x529 = 30U;
	static int32_t x530 = INT32_MIN;
	uint32_t x531 = 67U;
	int8_t x532 = 1;

	t92 = (((x529*x530)+x531)<x532);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x533 = UINT16_MAX;
	static uint8_t x534 = 8U;
	int8_t x535 = 2;
	int64_t x536 = 219858169LL;
	volatile int32_t t93 = 0;

	t93 = (((x533*x534)+x535)<x536);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x537 = INT16_MIN;
	int8_t x538 = 2;
	volatile uint16_t x539 = 758U;
	uint8_t x540 = 75U;
	int32_t t94 = -2162980;

	t94 = (((x537*x538)+x539)<x540);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x541 = INT8_MIN;
	uint64_t x542 = 65343778934809143LLU;
	volatile int32_t x544 = INT32_MIN;
	volatile int32_t t95 = -32;

	t95 = (((x541*x542)+x543)<x544);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x553 = 848U;
	static int16_t x554 = 14665;
	uint16_t x555 = 501U;
	uint8_t x556 = UINT8_MAX;
	volatile int32_t t96 = 113109;

	t96 = (((x553*x554)+x555)<x556);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x561 = -1;
	int64_t x562 = -4703323124515867LL;
	uint16_t x563 = 96U;
	volatile int32_t t97 = 2;

	t97 = (((x561*x562)+x563)<x564);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x565 = -1;
	uint16_t x567 = 675U;

	t98 = (((x565*x566)+x567)<x568);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x570 = INT16_MIN;
	uint8_t x572 = 0U;
	static int32_t t99 = -514535283;

	t99 = (((x569*x570)+x571)<x572);

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


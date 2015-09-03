#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x1 = -1LL;
int64_t x2 = INT64_MIN;
uint8_t x3 = 13U;
int16_t x10 = 7758;
static volatile uint32_t x22 = 962U;
uint32_t x23 = UINT32_MAX;
uint64_t x24 = 762942477965LLU;
int64_t x27 = INT64_MIN;
uint16_t x28 = UINT16_MAX;
int16_t x42 = 139;
int32_t x44 = -1;
static uint32_t x69 = 32213138U;
int32_t x70 = -242;
int32_t x75 = INT32_MIN;
uint32_t x84 = UINT32_MAX;
uint32_t x89 = 12010U;
static int32_t t16 = -15497174;
int64_t x102 = 3923LL;
int64_t t18 = -15201032039544837LL;
int32_t x118 = -508;
uint32_t x120 = 24432U;
static int32_t x122 = -1;
volatile uint32_t x134 = 337043053U;
int64_t x137 = INT64_MIN;
static uint32_t x139 = UINT32_MAX;
int64_t t22 = -27639729702LL;
int32_t x143 = INT32_MIN;
int64_t x144 = -6891624LL;
volatile uint64_t t24 = 28286LLU;
int32_t x157 = INT32_MAX;
uint16_t x161 = UINT16_MAX;
int16_t x170 = -29;
volatile int8_t x173 = INT8_MIN;
volatile uint64_t t30 = 2089596691LLU;
int16_t x190 = -98;
int64_t x191 = INT64_MIN;
volatile int32_t x195 = INT32_MIN;
static int16_t x199 = INT16_MIN;
static int32_t x213 = 1;
uint16_t x215 = UINT16_MAX;
int16_t x218 = INT16_MIN;
int32_t x220 = -1;
int8_t x221 = INT8_MIN;
static uint8_t x222 = 5U;
uint32_t x223 = 6U;
int32_t x239 = INT32_MIN;
static volatile int32_t x250 = INT32_MAX;
uint64_t t46 = 126975937LLU;
volatile int8_t x273 = -1;
uint64_t x280 = UINT64_MAX;
uint8_t x300 = UINT8_MAX;
static int32_t t51 = 23061;
int16_t x314 = INT16_MIN;
int16_t x330 = INT16_MAX;
uint8_t x331 = 12U;
uint64_t t55 = 29752533843LLU;
volatile uint32_t x336 = UINT32_MAX;
int8_t x338 = -1;
int32_t t57 = 4246;
uint8_t x341 = 38U;
static volatile uint8_t x344 = UINT8_MAX;
volatile int16_t x350 = 8036;
int32_t t59 = -1;
static uint64_t x360 = 387703277261593LLU;
uint16_t x368 = 6629U;
volatile int32_t t62 = 0;
static int8_t x372 = -3;
int32_t x398 = INT32_MIN;
volatile int8_t x400 = -1;
uint32_t x403 = UINT32_MAX;
int16_t x406 = INT16_MAX;
volatile int32_t t69 = -3295;
static uint16_t x412 = UINT16_MAX;
static uint64_t t70 = 159797405609975126LLU;
volatile uint8_t x421 = 0U;
uint32_t x424 = 0U;
static int64_t t71 = 2LL;
int16_t x426 = -1;
volatile uint64_t t72 = 7449689435453197235LLU;
uint64_t x447 = UINT64_MAX;
volatile uint64_t t75 = 6437173564906182LLU;
int16_t x452 = -158;
int32_t x458 = -1;
int8_t x467 = INT8_MIN;
int16_t x485 = -1;
volatile uint64_t t80 = 754203305LLU;
static uint32_t x492 = 211U;
int64_t x506 = -1LL;
static int8_t x508 = -1;
static int32_t x514 = INT32_MIN;
int16_t x524 = -77;
static volatile uint32_t t89 = 138U;
static volatile uint8_t x530 = 14U;
uint8_t x534 = 3U;
static uint16_t x549 = UINT16_MAX;
int8_t x550 = INT8_MAX;
int16_t x570 = -24;
static volatile uint32_t x572 = 3U;
static volatile int64_t t95 = 534LL;
uint8_t x577 = 1U;
volatile uint64_t t99 = 1525266565730LLU;


void f0(void) {
	volatile uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = 1LLU;

	t0 = ((x1+(x2|x3))*x4);

	if (t0 != 9223372036854775796LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = 1841789;
	uint16_t x11 = UINT16_MAX;
	int16_t x12 = -1;
	static volatile int32_t t1 = -66;

	t1 = ((x9+(x10|x11))*x12);

	if (t1 != -1907324) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x17 = 12014LLU;
	volatile uint8_t x18 = 1U;
	int8_t x19 = INT8_MAX;
	uint32_t x20 = 13U;
	uint64_t t2 = 143556LLU;

	t2 = ((x17+(x18|x19))*x20);

	if (t2 != 157833LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x21 = INT32_MIN;
	uint64_t t3 = 8140427742771LLU;

	t3 = ((x21+(x22|x23))*x24);

	if (t3 != 15093016545054796147LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = INT32_MIN;
	static int32_t x26 = -1078;
	volatile int64_t t4 = -275736900619655LL;

	t4 = ((x25+(x26|x27))*x28);

	if (t4 != -140735411518410LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = 246LLU;
	static int16_t x30 = INT16_MAX;
	int16_t x31 = INT16_MAX;
	static int64_t x32 = 33352102LL;
	uint64_t t5 = 133575690329591208LLU;

	t5 = ((x29+(x30|x31))*x32);

	if (t5 != 1101052943326LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = INT16_MAX;
	int8_t x34 = INT8_MAX;
	volatile uint16_t x35 = 776U;
	int64_t x36 = -1LL;
	int64_t t6 = -69211538790691749LL;

	t6 = ((x33+(x34|x35))*x36);

	if (t6 != -33662LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = -7804;
	int64_t x38 = INT64_MAX;
	volatile uint64_t x39 = 2484045027531LLU;
	volatile int8_t x40 = 2;
	volatile uint64_t t7 = 5926LLU;

	t7 = ((x37+(x38|x39))*x40);

	if (t7 != 18446744073709536006LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MAX;
	uint8_t x43 = 8U;
	int32_t t8 = 53091003;

	t8 = ((x41+(x42|x43))*x44);

	if (t8 != -32906) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = 117U;
	int32_t x46 = INT32_MAX;
	uint16_t x47 = 2U;
	volatile int32_t x48 = -1;
	volatile uint32_t t9 = 46244U;

	t9 = ((x45+(x46|x47))*x48);

	if (t9 != 2147483532U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MAX;
	static volatile uint64_t x50 = 2083144627307LLU;
	int64_t x51 = -12717LL;
	static int64_t x52 = -31423404709LL;
	volatile uint64_t t10 = 7LLU;

	t10 = ((x49+(x50|x51))*x52);

	if (t10 != 8232932033758LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x53 = 15549LL;
	static int32_t x54 = INT32_MIN;
	static uint64_t x55 = 280714521583LLU;
	int16_t x56 = -1;
	uint64_t t11 = 1366170453LLU;

	t11 = ((x53+(x54|x55))*x56);

	if (t11 != 605820756LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x71 = 64LLU;
	volatile int32_t x72 = INT32_MIN;
	uint64_t t12 = 10474543300LLU;

	t12 = ((x69+(x70|x71))*x72);

	if (t12 != 18377567268855873536LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x73 = -30851087;
	static uint64_t x74 = 1124216920721LLU;
	int16_t x76 = 7;
	volatile uint64_t t13 = 2LLU;

	t13 = ((x73+(x74|x75))*x76);

	if (t13 != 18446744066042018190LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x81 = UINT8_MAX;
	int8_t x82 = INT8_MAX;
	uint8_t x83 = 7U;
	static volatile uint32_t t14 = 907326U;

	t14 = ((x81+(x82|x83))*x84);

	if (t14 != 4294966914U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x90 = INT64_MIN;
	volatile int16_t x91 = -13;
	volatile int32_t x92 = -1;
	static int64_t t15 = -1246270LL;

	t15 = ((x89+(x90|x91))*x92);

	if (t15 != -11997LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x93 = 20U;
	volatile int8_t x94 = 1;
	static int8_t x95 = -21;
	int8_t x96 = 1;

	t16 = ((x93+(x94|x95))*x96);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x101 = UINT64_MAX;
	int8_t x103 = INT8_MIN;
	int64_t x104 = 0LL;
	static uint64_t t17 = 940018919LLU;

	t17 = ((x101+(x102|x103))*x104);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x109 = INT16_MIN;
	uint8_t x110 = 2U;
	volatile int64_t x111 = 7339308137615LL;
	static int8_t x112 = -1;

	t18 = ((x109+(x110|x111))*x112);

	if (t18 != -7339308104847LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x117 = -1;
	volatile int64_t x119 = INT64_MIN;
	int64_t t19 = 1045532793246447895LL;

	t19 = ((x117+(x118|x119))*x120);

	if (t19 != -12435888LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x121 = INT64_MIN;
	volatile uint64_t x123 = 245LLU;
	static int64_t x124 = INT64_MAX;
	static volatile uint64_t t20 = 408888025776316638LLU;

	t20 = ((x121+(x122|x123))*x124);

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x133 = UINT32_MAX;
	int16_t x135 = -1;
	uint64_t x136 = 18999708385LLU;
	uint64_t t21 = 14898611353306579LLU;

	t21 = ((x133+(x134|x135))*x136);

	if (t21 != 7816149814274353726LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x138 = 86U;
	int32_t x140 = 0;

	t22 = ((x137+(x138|x139))*x140);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x141 = 5;
	static int32_t x142 = 3208;
	int64_t t23 = -2082771218701LL;

	t23 = ((x141+(x142|x143))*x144);

	if (t23 != 14799627705376440LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x145 = 3;
	static uint64_t x146 = 62609548005LLU;
	static int8_t x147 = -1;
	volatile int64_t x148 = -13184312358444LL;

	t24 = ((x145+(x146|x147))*x148);

	if (t24 != 18446717705084834728LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x149 = -852442;
	int64_t x150 = -217939LL;
	uint8_t x151 = 23U;
	int8_t x152 = INT8_MIN;
	int64_t t25 = -5513401658548LL;

	t25 = ((x149+(x150|x151))*x152);

	if (t25 != 137006464LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x153 = UINT16_MAX;
	int16_t x154 = 11;
	uint32_t x155 = UINT32_MAX;
	uint64_t x156 = 95181561615809LLU;
	uint64_t t26 = 1113660444813715LLU;

	t26 = ((x153+(x154|x155))*x156);

	if (t26 != 6237628458930427006LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x158 = 15;
	uint64_t x159 = UINT64_MAX;
	uint8_t x160 = 112U;
	static volatile uint64_t t27 = 0LLU;

	t27 = ((x157+(x158|x159))*x160);

	if (t27 != 240518168352LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x162 = INT16_MIN;
	static int8_t x163 = -21;
	int16_t x164 = INT16_MAX;
	volatile int32_t t28 = 26;

	t28 = ((x161+(x162|x163))*x164);

	if (t28 != 2146697238) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x169 = 200531070925403920LLU;
	int16_t x171 = INT16_MIN;
	static int8_t x172 = INT8_MIN;
	uint64_t t29 = 3737533111200501760LLU;

	t29 = ((x169+(x170|x171))*x172);

	if (t29 != 11225511068967405184LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x174 = INT8_MIN;
	static int32_t x175 = INT32_MIN;
	static uint64_t x176 = 8836LLU;

	t30 = ((x173+(x174|x175))*x176);

	if (t30 != 18446744073707289600LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x177 = 0LLU;
	int32_t x178 = 547332064;
	uint64_t x179 = UINT64_MAX;
	volatile int8_t x180 = 2;
	static uint64_t t31 = 1842095717004098156LLU;

	t31 = ((x177+(x178|x179))*x180);

	if (t31 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x185 = 780;
	int64_t x186 = 14422LL;
	static int8_t x187 = 0;
	volatile int32_t x188 = INT32_MIN;
	int64_t t32 = -631LL;

	t32 = ((x185+(x186|x187))*x188);

	if (t32 != -32646046416896LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x189 = INT8_MAX;
	uint8_t x192 = 9U;
	static int64_t t33 = -898922941594485LL;

	t33 = ((x189+(x190|x191))*x192);

	if (t33 != 261LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x193 = 266540624U;
	int16_t x194 = INT16_MIN;
	volatile uint32_t x196 = 5152U;
	uint32_t t34 = 2U;

	t34 = ((x193+(x194|x195))*x196);

	if (t34 != 2953906688U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x197 = INT32_MAX;
	static int32_t x198 = 554846312;
	uint64_t x200 = 483460998LLU;
	uint64_t t35 = 59358772880748LLU;

	t35 = ((x197+(x198|x199))*x200);

	if (t35 != 1038217706550376170LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x205 = -1;
	int32_t x206 = INT32_MIN;
	static int32_t x207 = -1;
	int8_t x208 = -1;
	volatile int32_t t36 = -573;

	t36 = ((x205+(x206|x207))*x208);

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x214 = 1942746100U;
	static int16_t x216 = -29;
	uint32_t t37 = 3U;

	t37 = ((x213+(x214|x215))*x216);

	if (t37 != 3789815808U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x217 = INT16_MAX;
	volatile uint32_t x219 = UINT32_MAX;
	uint32_t t38 = 7724564U;

	t38 = ((x217+(x218|x219))*x220);

	if (t38 != 4294934530U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x224 = -1LL;
	volatile int64_t t39 = 68614094600138LL;

	t39 = ((x221+(x222|x223))*x224);

	if (t39 != -4294967175LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x225 = 1256230193933LLU;
	int16_t x226 = INT16_MAX;
	uint16_t x227 = UINT16_MAX;
	uint64_t x228 = 782695064LLU;
	volatile uint64_t t40 = 3281040307111LLU;

	t40 = ((x225+(x226|x227))*x228);

	if (t40 != 5567787426436630304LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x229 = 18LLU;
	uint16_t x230 = 1574U;
	volatile int16_t x231 = -1;
	volatile int32_t x232 = -18622410;
	volatile uint64_t t41 = 121429399241LLU;

	t41 = ((x229+(x230|x231))*x232);

	if (t41 != 18446744073392970646LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x237 = -337293453098LL;
	static int8_t x238 = -1;
	static int64_t x240 = 568LL;
	int64_t t42 = -757348453LL;

	t42 = ((x237+(x238|x239))*x240);

	if (t42 != -191582681360232LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x249 = -2LL;
	int8_t x251 = INT8_MIN;
	int64_t x252 = -1LL;
	volatile int64_t t43 = -2LL;

	t43 = ((x249+(x250|x251))*x252);

	if (t43 != 3LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x253 = 127;
	int32_t x254 = INT32_MAX;
	static uint64_t x255 = UINT64_MAX;
	uint8_t x256 = UINT8_MAX;
	uint64_t t44 = 16236916002739007LLU;

	t44 = ((x253+(x254|x255))*x256);

	if (t44 != 32130LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x261 = -1;
	int8_t x262 = INT8_MIN;
	int8_t x263 = INT8_MIN;
	uint16_t x264 = 16100U;
	volatile int32_t t45 = -14827;

	t45 = ((x261+(x262|x263))*x264);

	if (t45 != -2076900) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x265 = INT64_MIN;
	uint64_t x266 = 2326990965049LLU;
	int32_t x267 = 22;
	static int32_t x268 = -4992972;

	t46 = ((x265+(x266|x267))*x268);

	if (t46 != 6828143340936958156LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x274 = -466261LL;
	static int8_t x275 = 24;
	int64_t x276 = 494269LL;
	static int64_t t47 = -44827460844LL;

	t47 = ((x273+(x274|x275))*x276);

	if (t47 != -230450944174LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint8_t x277 = 1U;
	volatile uint16_t x278 = UINT16_MAX;
	uint32_t x279 = UINT32_MAX;
	static volatile uint64_t t48 = 6875441LLU;

	t48 = ((x277+(x278|x279))*x280);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x289 = INT16_MAX;
	volatile int64_t x290 = INT64_MIN;
	uint64_t x291 = 15614541472LLU;
	int64_t x292 = 7702416784214LL;
	uint64_t t49 = 85987625145230LLU;

	t49 = ((x289+(x290|x291))*x292);

	if (t49 != 15634080316579278442LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x297 = -1;
	uint16_t x298 = UINT16_MAX;
	uint16_t x299 = 83U;
	volatile int32_t t50 = -29412740;

	t50 = ((x297+(x298|x299))*x300);

	if (t50 != 16711170) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x301 = INT16_MAX;
	static volatile int32_t x302 = -1;
	static uint8_t x303 = UINT8_MAX;
	int8_t x304 = -1;

	t51 = ((x301+(x302|x303))*x304);

	if (t51 != -32766) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x313 = INT16_MIN;
	int8_t x315 = INT8_MAX;
	uint64_t x316 = 790226LLU;
	volatile uint64_t t52 = 6684061596LLU;

	t52 = ((x313+(x314|x315))*x316);

	if (t52 != 18446744022021659182LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x317 = INT16_MAX;
	int32_t x318 = INT32_MIN;
	static int32_t x319 = -1;
	uint8_t x320 = 0U;
	volatile int32_t t53 = -434041914;

	t53 = ((x317+(x318|x319))*x320);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x325 = INT8_MIN;
	uint64_t x326 = 3LLU;
	static int16_t x327 = 5;
	static int64_t x328 = INT64_MIN;
	static volatile uint64_t t54 = 3788213217394LLU;

	t54 = ((x325+(x326|x327))*x328);

	if (t54 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x329 = 1067U;
	static uint64_t x332 = 9829774437840581LLU;

	t55 = ((x329+(x330|x331))*x332);

	if (t55 != 539195003126288466LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x333 = INT8_MIN;
	int16_t x334 = -1;
	uint16_t x335 = UINT16_MAX;
	uint32_t t56 = 164U;

	t56 = ((x333+(x334|x335))*x336);

	if (t56 != 129U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x337 = INT32_MAX;
	uint16_t x339 = 8U;
	int32_t x340 = -1;

	t57 = ((x337+(x338|x339))*x340);

	if (t57 != -2147483646) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x342 = 420U;
	uint8_t x343 = 7U;
	uint32_t t58 = 1323U;

	t58 = ((x341+(x342|x343))*x344);

	if (t58 != 117555U) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x349 = 6;
	volatile int8_t x351 = 1;
	int16_t x352 = -330;

	t59 = ((x349+(x350|x351))*x352);

	if (t59 != -2654190) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x353 = -1;
	uint64_t x354 = 52908528LLU;
	static int8_t x355 = -1;
	static int64_t x356 = INT64_MIN;
	volatile uint64_t t60 = 8732875LLU;

	t60 = ((x353+(x354|x355))*x356);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x357 = 1689U;
	static uint16_t x358 = 674U;
	int8_t x359 = INT8_MAX;
	uint64_t t61 = 1271991752LLU;

	t61 = ((x357+(x358|x359))*x360);

	if (t61 != 952199248954472408LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x365 = UINT16_MAX;
	static int32_t x366 = 15138;
	int8_t x367 = -11;

	t62 = ((x365+(x366|x367))*x368);

	if (t62 != 434371854) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x369 = 9U;
	int8_t x370 = -1;
	int64_t x371 = 8974061LL;
	volatile int64_t t63 = 1354811117085LL;

	t63 = ((x369+(x370|x371))*x372);

	if (t63 != -24LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x373 = 7U;
	int32_t x374 = INT32_MAX;
	int16_t x375 = -1;
	int8_t x376 = INT8_MIN;
	int32_t t64 = -784;

	t64 = ((x373+(x374|x375))*x376);

	if (t64 != -768) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x377 = 4U;
	uint8_t x378 = UINT8_MAX;
	int32_t x379 = INT32_MIN;
	static int64_t x380 = -28024LL;
	volatile int64_t t65 = 1046959660LL;

	t65 = ((x377+(x378|x379))*x380);

	if (t65 != 60181074493336LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x385 = 16105;
	int64_t x386 = INT64_MIN;
	volatile int64_t x387 = -4285056987757526LL;
	int32_t x388 = 54;
	int64_t t66 = -23439671456341492LL;

	t66 = ((x385+(x386|x387))*x388);

	if (t66 != -231393077338036734LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x397 = UINT8_MAX;
	static int32_t x399 = INT32_MIN;
	int32_t t67 = 535188532;

	t67 = ((x397+(x398|x399))*x400);

	if (t67 != 2147483393) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x401 = 651681579LLU;
	int8_t x402 = -26;
	int32_t x404 = INT32_MAX;
	volatile uint64_t t68 = 106797LLU;

	t68 = ((x401+(x402|x403))*x404);

	if (t68 != 10622847564365963478LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x405 = INT16_MIN;
	volatile int16_t x407 = INT16_MIN;
	int16_t x408 = 0;

	t69 = ((x405+(x406|x407))*x408);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x409 = 387810561576133LLU;
	int32_t x410 = INT32_MIN;
	int16_t x411 = -1;

	t70 = ((x409+(x410|x411))*x412);

	if (t70 != 6968421079182259004LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x422 = -1LL;
	int64_t x423 = -1LL;

	t71 = ((x421+(x422|x423))*x424);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x425 = -3;
	uint8_t x427 = 1U;
	volatile uint64_t x428 = 117937LLU;

	t72 = ((x425+(x426|x427))*x428);

	if (t72 != 18446744073709079868LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x429 = UINT32_MAX;
	int8_t x430 = INT8_MIN;
	uint64_t x431 = 739712LLU;
	static volatile int64_t x432 = INT64_MIN;
	uint64_t t73 = 28604LLU;

	t73 = ((x429+(x430|x431))*x432);

	if (t73 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x433 = UINT64_MAX;
	volatile uint16_t x434 = UINT16_MAX;
	int64_t x435 = -1LL;
	int64_t x436 = -1LL;
	static volatile uint64_t t74 = 622LLU;

	t74 = ((x433+(x434|x435))*x436);

	if (t74 != 2LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x445 = -1;
	int64_t x446 = INT64_MAX;
	static volatile int8_t x448 = 0;

	t75 = ((x445+(x446|x447))*x448);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x449 = INT8_MAX;
	volatile uint32_t x450 = 51U;
	int16_t x451 = -1;
	volatile uint32_t t76 = 15107U;

	t76 = ((x449+(x450|x451))*x452);

	if (t76 != 4294947388U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x457 = INT64_MIN;
	static volatile uint64_t x459 = 13506LLU;
	int32_t x460 = INT32_MAX;
	static uint64_t t77 = 1206288523LLU;

	t77 = ((x457+(x458|x459))*x460);

	if (t77 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x465 = INT8_MIN;
	uint64_t x466 = 1981148078865180LLU;
	int64_t x468 = INT64_MIN;
	volatile uint64_t t78 = 754111604099897LLU;

	t78 = ((x465+(x466|x467))*x468);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x473 = INT16_MIN;
	static volatile uint64_t x474 = 43446413357485LLU;
	int32_t x475 = INT32_MAX;
	static int8_t x476 = 0;
	volatile uint64_t t79 = 87194LLU;

	t79 = ((x473+(x474|x475))*x476);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x486 = -1404052;
	volatile uint64_t x487 = 288116LLU;
	int8_t x488 = INT8_MAX;

	t80 = ((x485+(x486|x487))*x488);

	if (t80 != 18446744073567782405LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x489 = -14;
	int8_t x490 = -11;
	uint16_t x491 = 1864U;
	uint32_t t81 = 295715313U;

	t81 = ((x489+(x490|x491))*x492);

	if (t81 != 4294963709U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x493 = 1U;
	uint64_t x494 = UINT64_MAX;
	int8_t x495 = INT8_MAX;
	static uint32_t x496 = 1494U;
	static volatile uint64_t t82 = 389024LLU;

	t82 = ((x493+(x494|x495))*x496);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x497 = INT64_MAX;
	static int8_t x498 = 5;
	int64_t x499 = -57054260827LL;
	volatile int8_t x500 = 1;
	int64_t t83 = -3593518298578713LL;

	t83 = ((x497+(x498|x499))*x500);

	if (t83 != 9223371979800514980LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x505 = INT8_MIN;
	int64_t x507 = -119265720068648LL;
	static int64_t t84 = -69647085915LL;

	t84 = ((x505+(x506|x507))*x508);

	if (t84 != 129LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x509 = INT8_MIN;
	static int16_t x510 = INT16_MIN;
	uint64_t x511 = 324867222358633LLU;
	int64_t x512 = INT64_MIN;
	volatile uint64_t t85 = 3651320977900132895LLU;

	t85 = ((x509+(x510|x511))*x512);

	if (t85 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x513 = -1;
	int64_t x515 = -1LL;
	int16_t x516 = -1;
	volatile int64_t t86 = -466LL;

	t86 = ((x513+(x514|x515))*x516);

	if (t86 != 2LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x517 = 406LLU;
	uint8_t x518 = 67U;
	int8_t x519 = -1;
	static int32_t x520 = INT32_MIN;
	uint64_t t87 = 118777248261808936LLU;

	t87 = ((x517+(x518|x519))*x520);

	if (t87 != 18446743203978674176LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x521 = INT8_MIN;
	int8_t x522 = -1;
	static uint8_t x523 = UINT8_MAX;
	static int32_t t88 = -11;

	t88 = ((x521+(x522|x523))*x524);

	if (t88 != 9933) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x525 = INT32_MIN;
	volatile uint32_t x526 = 0U;
	volatile int32_t x527 = INT32_MAX;
	int32_t x528 = INT32_MIN;

	t89 = ((x525+(x526|x527))*x528);

	if (t89 != 2147483648U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x529 = 2U;
	int8_t x531 = -1;
	static uint32_t x532 = UINT32_MAX;
	volatile uint32_t t90 = UINT32_MAX;

	t90 = ((x529+(x530|x531))*x532);

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x533 = -103;
	uint64_t x535 = 592832LLU;
	volatile int32_t x536 = -1;
	static uint64_t t91 = 294497616LLU;

	t91 = ((x533+(x534|x535))*x536);

	if (t91 != 18446744073708958884LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x551 = UINT16_MAX;
	static uint16_t x552 = 2U;
	int32_t t92 = -12;

	t92 = ((x549+(x550|x551))*x552);

	if (t92 != 262140) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x553 = UINT32_MAX;
	int16_t x554 = INT16_MIN;
	volatile int16_t x555 = INT16_MAX;
	uint8_t x556 = 105U;
	static volatile uint32_t t93 = 3644U;

	t93 = ((x553+(x554|x555))*x556);

	if (t93 != 4294967086U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x565 = UINT32_MAX;
	volatile uint32_t x566 = 11U;
	static uint8_t x567 = 77U;
	volatile int32_t x568 = INT32_MAX;
	uint32_t t94 = 807954U;

	t94 = ((x565+(x566|x567))*x568);

	if (t94 != 4294967218U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x569 = -2051841856LL;
	volatile int16_t x571 = -1;

	t95 = ((x569+(x570|x571))*x572);

	if (t95 != -6155525571LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x578 = INT64_MAX;
	volatile int8_t x579 = INT8_MIN;
	static uint64_t x580 = 601110438246538387LLU;
	uint64_t t96 = 80963218917128221LLU;

	t96 = ((x577+(x578|x579))*x580);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x585 = UINT64_MAX;
	uint32_t x586 = UINT32_MAX;
	int8_t x587 = -15;
	int64_t x588 = -1LL;
	uint64_t t97 = 896LLU;

	t97 = ((x585+(x586|x587))*x588);

	if (t97 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x589 = UINT8_MAX;
	volatile uint16_t x590 = 333U;
	volatile uint64_t x591 = 1337665020099974221LLU;
	volatile uint8_t x592 = 1U;
	volatile uint64_t t98 = 15254091749403LLU;

	t98 = ((x589+(x590|x591))*x592);

	if (t98 != 1337665020099974732LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x593 = 4121631435LL;
	uint64_t x594 = UINT64_MAX;
	volatile uint16_t x595 = 460U;
	static uint8_t x596 = 64U;

	t99 = ((x593+(x594|x595))*x596);

	if (t99 != 263784411776LLU) { NG(); } else { ; }
	
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


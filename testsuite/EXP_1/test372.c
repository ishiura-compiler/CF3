#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = -579526;
uint64_t x15 = 16410595046258589LLU;
int32_t x22 = -1;
int32_t t6 = 3;
int16_t x60 = INT16_MIN;
volatile int32_t t8 = -5;
int32_t x66 = -1;
int32_t x83 = 60;
volatile int32_t t11 = 55913;
static int32_t t12 = -1;
uint64_t x91 = 1857LLU;
uint32_t x92 = 391940871U;
uint32_t x95 = 59553U;
uint32_t x97 = 209144228U;
static uint64_t x98 = 6840817363934185658LLU;
int32_t x100 = -1;
static volatile uint16_t x111 = 30867U;
int32_t t17 = -13106;
static int64_t x122 = -1666803LL;
int16_t x127 = INT16_MAX;
uint16_t x142 = UINT16_MAX;
static volatile int64_t x160 = INT64_MAX;
int32_t x164 = 2;
int64_t x166 = 41319960LL;
uint32_t x168 = 6U;
static int32_t t28 = -4627059;
volatile uint8_t x191 = UINT8_MAX;
int16_t x208 = INT16_MIN;
uint64_t x213 = 1LLU;
volatile int8_t x220 = INT8_MIN;
int32_t t34 = 782;
volatile uint64_t x223 = UINT64_MAX;
volatile int32_t t36 = -189;
static int8_t x246 = -43;
uint8_t x255 = 43U;
int16_t x269 = INT16_MAX;
static volatile uint64_t x272 = 708LLU;
int64_t x273 = -1LL;
volatile int64_t x278 = -102087238LL;
static int8_t x279 = -33;
volatile uint32_t x290 = 481U;
int64_t x292 = INT64_MIN;
volatile int16_t x295 = INT16_MAX;
int32_t x302 = 411226870;
volatile int32_t t49 = -11;
uint32_t x305 = 159498293U;
uint16_t x309 = 189U;
volatile uint64_t x310 = 1634510724LLU;
volatile int64_t x315 = 19970LL;
volatile uint8_t x316 = UINT8_MAX;
volatile int32_t t54 = 199069896;
int16_t x333 = 53;
volatile int32_t t56 = -283979777;
static int8_t x337 = INT8_MAX;
uint32_t x344 = UINT32_MAX;
volatile int8_t x345 = 1;
int8_t x349 = -20;
int64_t x351 = -1LL;
static volatile int32_t t60 = -7895;
static int32_t x354 = -1;
int8_t x355 = INT8_MAX;
volatile int8_t x356 = INT8_MIN;
static int32_t t61 = -3110;
int16_t x358 = INT16_MIN;
int32_t t62 = 443901;
volatile int16_t x361 = -11808;
volatile uint64_t x364 = 10014LLU;
int8_t x368 = 3;
int8_t x379 = INT8_MAX;
volatile int32_t t65 = -86090799;
volatile uint16_t x396 = 20131U;
uint8_t x400 = 17U;
volatile uint32_t x406 = UINT32_MAX;
uint16_t x417 = 8U;
int16_t x419 = -1;
int32_t t69 = 397148552;
volatile int32_t t70 = 246;
int8_t x440 = -3;
int8_t x446 = -1;
int32_t x448 = -371064;
static int64_t x453 = INT64_MAX;
static int16_t x456 = 14;
volatile int8_t x465 = -1;
uint8_t x471 = 10U;
int8_t x472 = INT8_MIN;
volatile int32_t t80 = 51488683;
static uint64_t x503 = UINT64_MAX;
uint64_t x526 = UINT64_MAX;
uint32_t x530 = 30U;
static int32_t t85 = 0;
int32_t t86 = -110031;
int16_t x568 = INT16_MIN;
static int32_t x577 = INT32_MIN;
uint8_t x580 = 22U;
int32_t t90 = 1460386;
static uint32_t x581 = UINT32_MAX;
volatile int32_t x600 = INT32_MIN;
volatile int32_t x602 = -1;
uint32_t x608 = 905997063U;
int64_t x611 = -4LL;
static int32_t x633 = INT32_MIN;


void f0(void) {
	int32_t x1 = -1;
	uint64_t x2 = 8044LLU;
	int32_t x3 = -1;
	volatile int32_t t0 = -33740834;

	t0 = (((x1*x2)*x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = -1;
	int8_t x14 = INT8_MAX;
	int16_t x16 = INT16_MIN;
	int32_t t1 = -7449;

	t1 = (((x13*x14)*x15)==x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x21 = -1;
	uint16_t x23 = 14U;
	volatile int32_t x24 = -1;
	static volatile int32_t t2 = -177449;

	t2 = (((x21*x22)*x23)==x24);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = INT8_MAX;
	static uint64_t x26 = 118242424137LLU;
	int64_t x27 = INT64_MIN;
	static uint64_t x28 = UINT64_MAX;
	volatile int32_t t3 = -61715586;

	t3 = (((x25*x26)*x27)==x28);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x29 = 4U;
	volatile uint8_t x30 = 30U;
	volatile uint8_t x31 = UINT8_MAX;
	volatile uint8_t x32 = 35U;
	int32_t t4 = -5;

	t4 = (((x29*x30)*x31)==x32);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = -1LL;
	uint16_t x34 = UINT16_MAX;
	static uint64_t x35 = UINT64_MAX;
	int16_t x36 = INT16_MIN;
	volatile int32_t t5 = 266285468;

	t5 = (((x33*x34)*x35)==x36);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x37 = UINT8_MAX;
	int32_t x38 = 3350487;
	static uint64_t x39 = 64337LLU;
	uint64_t x40 = UINT64_MAX;

	t6 = (((x37*x38)*x39)==x40);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x53 = UINT64_MAX;
	static int8_t x54 = INT8_MIN;
	uint16_t x55 = UINT16_MAX;
	int16_t x56 = -1;
	volatile int32_t t7 = -216;

	t7 = (((x53*x54)*x55)==x56);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x57 = INT8_MAX;
	static volatile int16_t x58 = -828;
	static uint64_t x59 = 1158LLU;

	t8 = (((x57*x58)*x59)==x60);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x65 = 0;
	int64_t x67 = 57652123091LL;
	static int64_t x68 = 40878359076782075LL;
	int32_t t9 = -26154739;

	t9 = (((x65*x66)*x67)==x68);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x69 = 1;
	int8_t x70 = INT8_MIN;
	int64_t x71 = -3866650699LL;
	int32_t x72 = -1;
	int32_t t10 = -11040861;

	t10 = (((x69*x70)*x71)==x72);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x81 = 131003325LL;
	int8_t x82 = INT8_MIN;
	volatile int32_t x84 = -1;

	t11 = (((x81*x82)*x83)==x84);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x85 = 175353U;
	int8_t x86 = INT8_MIN;
	int16_t x87 = -63;
	volatile int32_t x88 = INT32_MIN;

	t12 = (((x85*x86)*x87)==x88);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x89 = INT8_MIN;
	static int8_t x90 = -1;
	int32_t t13 = 75658611;

	t13 = (((x89*x90)*x91)==x92);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x93 = UINT16_MAX;
	int8_t x94 = INT8_MIN;
	int32_t x96 = -1001028921;
	static int32_t t14 = -3294;

	t14 = (((x93*x94)*x95)==x96);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x99 = -245LL;
	volatile int32_t t15 = -20;

	t15 = (((x97*x98)*x99)==x100);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x101 = 1342U;
	int8_t x102 = INT8_MIN;
	volatile uint16_t x103 = 2180U;
	int8_t x104 = 29;
	static int32_t t16 = 343046139;

	t16 = (((x101*x102)*x103)==x104);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x109 = -1;
	uint32_t x110 = UINT32_MAX;
	int16_t x112 = -1;

	t17 = (((x109*x110)*x111)==x112);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x121 = INT8_MIN;
	int32_t x123 = -1;
	static int8_t x124 = INT8_MAX;
	static volatile int32_t t18 = -953;

	t18 = (((x121*x122)*x123)==x124);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x125 = -1;
	uint32_t x126 = UINT32_MAX;
	int64_t x128 = INT64_MIN;
	volatile int32_t t19 = -6084151;

	t19 = (((x125*x126)*x127)==x128);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x141 = -6;
	uint8_t x143 = 5U;
	int16_t x144 = -1;
	static volatile int32_t t20 = 260469486;

	t20 = (((x141*x142)*x143)==x144);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x145 = INT8_MIN;
	uint8_t x146 = 0U;
	int8_t x147 = INT8_MIN;
	int8_t x148 = INT8_MIN;
	int32_t t21 = 6533;

	t21 = (((x145*x146)*x147)==x148);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x149 = UINT32_MAX;
	static volatile int32_t x150 = -1;
	uint32_t x151 = 601649769U;
	volatile int16_t x152 = INT16_MAX;
	static volatile int32_t t22 = 6188;

	t22 = (((x149*x150)*x151)==x152);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x157 = UINT64_MAX;
	static uint16_t x158 = 12721U;
	int8_t x159 = 3;
	volatile int32_t t23 = 1659441;

	t23 = (((x157*x158)*x159)==x160);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x161 = 1;
	int64_t x162 = 2649064136377556LL;
	uint8_t x163 = 2U;
	static int32_t t24 = -285;

	t24 = (((x161*x162)*x163)==x164);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x165 = 0LLU;
	int32_t x167 = 3237;
	volatile int32_t t25 = 183706;

	t25 = (((x165*x166)*x167)==x168);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x169 = -2;
	static uint8_t x170 = 2U;
	uint16_t x171 = 1U;
	uint8_t x172 = UINT8_MAX;
	int32_t t26 = -3705;

	t26 = (((x169*x170)*x171)==x172);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x173 = 91238839364452464LLU;
	int32_t x174 = -1;
	volatile int8_t x175 = INT8_MIN;
	volatile int16_t x176 = INT16_MAX;
	volatile int32_t t27 = -34277561;

	t27 = (((x173*x174)*x175)==x176);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x177 = 17U;
	uint32_t x178 = 17372U;
	static uint32_t x179 = 24399184U;
	int8_t x180 = INT8_MAX;

	t28 = (((x177*x178)*x179)==x180);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x189 = -102;
	uint32_t x190 = 103U;
	int8_t x192 = INT8_MIN;
	int32_t t29 = -65976881;

	t29 = (((x189*x190)*x191)==x192);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x193 = 32772745370245418LLU;
	int32_t x194 = 0;
	int8_t x195 = INT8_MAX;
	volatile int32_t x196 = INT32_MAX;
	volatile int32_t t30 = -373954234;

	t30 = (((x193*x194)*x195)==x196);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x205 = INT8_MIN;
	volatile int32_t x206 = -221;
	volatile uint8_t x207 = 3U;
	volatile int32_t t31 = 1;

	t31 = (((x205*x206)*x207)==x208);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x209 = INT8_MIN;
	static int64_t x210 = -22505LL;
	uint16_t x211 = UINT16_MAX;
	int32_t x212 = -1;
	int32_t t32 = 9755764;

	t32 = (((x209*x210)*x211)==x212);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x214 = 7196U;
	int32_t x215 = -1;
	volatile int32_t x216 = INT32_MIN;
	int32_t t33 = 3473;

	t33 = (((x213*x214)*x215)==x216);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x217 = 54U;
	int16_t x218 = 14;
	uint16_t x219 = 13U;

	t34 = (((x217*x218)*x219)==x220);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x221 = 2;
	volatile uint32_t x222 = 132U;
	static uint32_t x224 = 166U;
	int32_t t35 = 1;

	t35 = (((x221*x222)*x223)==x224);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x233 = INT8_MIN;
	uint64_t x234 = 4639852905687924702LLU;
	uint16_t x235 = UINT16_MAX;
	static int8_t x236 = INT8_MAX;

	t36 = (((x233*x234)*x235)==x236);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x245 = -3085897200928LL;
	volatile int16_t x247 = 1;
	uint64_t x248 = 3385866907751LLU;
	int32_t t37 = 5143076;

	t37 = (((x245*x246)*x247)==x248);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x253 = 0U;
	uint64_t x254 = UINT64_MAX;
	uint32_t x256 = UINT32_MAX;
	volatile int32_t t38 = -1;

	t38 = (((x253*x254)*x255)==x256);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x257 = 83LLU;
	uint64_t x258 = 602360743730LLU;
	int64_t x259 = -5037139885673LL;
	int16_t x260 = INT16_MAX;
	volatile int32_t t39 = 3745;

	t39 = (((x257*x258)*x259)==x260);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x261 = -1;
	int16_t x262 = -1;
	static int8_t x263 = -2;
	int16_t x264 = 1;
	volatile int32_t t40 = -190;

	t40 = (((x261*x262)*x263)==x264);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x270 = INT8_MIN;
	int8_t x271 = INT8_MIN;
	volatile int32_t t41 = -11199;

	t41 = (((x269*x270)*x271)==x272);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x274 = 1;
	int64_t x275 = -1LL;
	int64_t x276 = 10369453237532LL;
	static int32_t t42 = 7;

	t42 = (((x273*x274)*x275)==x276);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x277 = INT16_MIN;
	volatile int64_t x280 = -7777LL;
	volatile int32_t t43 = -5;

	t43 = (((x277*x278)*x279)==x280);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x281 = 3;
	static int64_t x282 = 0LL;
	int32_t x283 = INT32_MIN;
	volatile uint32_t x284 = UINT32_MAX;
	int32_t t44 = -13917;

	t44 = (((x281*x282)*x283)==x284);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x285 = 87768U;
	int32_t x286 = INT32_MIN;
	int16_t x287 = -1;
	volatile int16_t x288 = -1;
	volatile int32_t t45 = -465034;

	t45 = (((x285*x286)*x287)==x288);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x289 = -6LL;
	int16_t x291 = INT16_MAX;
	static int32_t t46 = -4096177;

	t46 = (((x289*x290)*x291)==x292);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x293 = INT16_MIN;
	uint64_t x294 = 4409819741292823LLU;
	volatile int32_t x296 = INT32_MIN;
	static int32_t t47 = 8;

	t47 = (((x293*x294)*x295)==x296);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x297 = 13U;
	static volatile uint16_t x298 = 1U;
	volatile int32_t x299 = -1;
	volatile uint16_t x300 = 18608U;
	int32_t t48 = 25401537;

	t48 = (((x297*x298)*x299)==x300);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x301 = 941574U;
	int8_t x303 = 1;
	int16_t x304 = -1;

	t49 = (((x301*x302)*x303)==x304);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x306 = 101U;
	volatile int16_t x307 = -1;
	volatile int32_t x308 = INT32_MIN;
	int32_t t50 = 11580530;

	t50 = (((x305*x306)*x307)==x308);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x311 = UINT64_MAX;
	static uint16_t x312 = 1543U;
	int32_t t51 = 8548;

	t51 = (((x309*x310)*x311)==x312);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x313 = -1;
	volatile int8_t x314 = -1;
	volatile int32_t t52 = 1724437;

	t52 = (((x313*x314)*x315)==x316);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x317 = INT64_MIN;
	volatile uint64_t x318 = UINT64_MAX;
	int32_t x319 = -1;
	uint32_t x320 = 4744U;
	static int32_t t53 = -129708;

	t53 = (((x317*x318)*x319)==x320);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x325 = 0;
	uint64_t x326 = 89LLU;
	static volatile int16_t x327 = INT16_MIN;
	int8_t x328 = INT8_MIN;

	t54 = (((x325*x326)*x327)==x328);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x329 = INT8_MIN;
	int8_t x330 = INT8_MIN;
	static volatile uint16_t x331 = 7972U;
	int32_t x332 = INT32_MIN;
	int32_t t55 = -333044425;

	t55 = (((x329*x330)*x331)==x332);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x334 = 1440;
	volatile int16_t x335 = -1;
	int16_t x336 = INT16_MIN;

	t56 = (((x333*x334)*x335)==x336);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x338 = INT16_MIN;
	volatile int32_t x339 = -1;
	static int64_t x340 = -97221069905LL;
	static int32_t t57 = -6;

	t57 = (((x337*x338)*x339)==x340);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x341 = -1;
	uint32_t x342 = UINT32_MAX;
	uint8_t x343 = 23U;
	static int32_t t58 = 410048517;

	t58 = (((x341*x342)*x343)==x344);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x346 = INT64_MIN;
	uint16_t x347 = 0U;
	int64_t x348 = 140LL;
	static int32_t t59 = -2781;

	t59 = (((x345*x346)*x347)==x348);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x350 = 0U;
	uint16_t x352 = UINT16_MAX;

	t60 = (((x349*x350)*x351)==x352);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x353 = UINT32_MAX;

	t61 = (((x353*x354)*x355)==x356);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x357 = 811U;
	uint8_t x359 = 2U;
	int8_t x360 = 10;

	t62 = (((x357*x358)*x359)==x360);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x362 = 49U;
	int16_t x363 = -1;
	static int32_t t63 = -130720763;

	t63 = (((x361*x362)*x363)==x364);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x365 = INT16_MAX;
	int16_t x366 = INT16_MIN;
	uint32_t x367 = 3436255U;
	volatile int32_t t64 = -686021;

	t64 = (((x365*x366)*x367)==x368);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x377 = 1538045626706LLU;
	uint32_t x378 = UINT32_MAX;
	uint16_t x380 = 473U;

	t65 = (((x377*x378)*x379)==x380);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x393 = -1;
	uint8_t x394 = 1U;
	int32_t x395 = 107264;
	static volatile int32_t t66 = -2;

	t66 = (((x393*x394)*x395)==x396);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x397 = INT8_MIN;
	uint64_t x398 = UINT64_MAX;
	int32_t x399 = INT32_MAX;
	int32_t t67 = -42339097;

	t67 = (((x397*x398)*x399)==x400);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x405 = 409437587479171846LLU;
	int32_t x407 = INT32_MAX;
	static int64_t x408 = INT64_MIN;
	static int32_t t68 = 245792378;

	t68 = (((x405*x406)*x407)==x408);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x418 = INT8_MIN;
	static uint64_t x420 = UINT64_MAX;

	t69 = (((x417*x418)*x419)==x420);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x421 = -4;
	volatile int16_t x422 = -1;
	int8_t x423 = INT8_MIN;
	static uint16_t x424 = 9U;

	t70 = (((x421*x422)*x423)==x424);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x425 = INT16_MIN;
	volatile int64_t x426 = -241603219LL;
	static int8_t x427 = INT8_MIN;
	int64_t x428 = INT64_MIN;
	volatile int32_t t71 = -112983623;

	t71 = (((x425*x426)*x427)==x428);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x433 = -1;
	static int16_t x434 = -207;
	volatile uint64_t x435 = 230340578LLU;
	int64_t x436 = INT64_MIN;
	int32_t t72 = -1362309;

	t72 = (((x433*x434)*x435)==x436);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x437 = 1373LLU;
	uint8_t x438 = UINT8_MAX;
	static int16_t x439 = INT16_MAX;
	int32_t t73 = 7640;

	t73 = (((x437*x438)*x439)==x440);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x441 = -346425968130LL;
	uint64_t x442 = 6LLU;
	uint64_t x443 = UINT64_MAX;
	int16_t x444 = INT16_MIN;
	int32_t t74 = 379486351;

	t74 = (((x441*x442)*x443)==x444);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x445 = -1LL;
	int32_t x447 = INT32_MIN;
	volatile int32_t t75 = 705;

	t75 = (((x445*x446)*x447)==x448);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x454 = 64861213664LLU;
	uint64_t x455 = UINT64_MAX;
	volatile int32_t t76 = 3710;

	t76 = (((x453*x454)*x455)==x456);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x466 = 0U;
	int32_t x467 = INT32_MIN;
	volatile int16_t x468 = INT16_MIN;
	volatile int32_t t77 = 46166;

	t77 = (((x465*x466)*x467)==x468);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x469 = 278U;
	volatile int8_t x470 = INT8_MIN;
	int32_t t78 = 1144;

	t78 = (((x469*x470)*x471)==x472);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x477 = 1;
	volatile uint64_t x478 = UINT64_MAX;
	int8_t x479 = 0;
	volatile int32_t x480 = INT32_MIN;
	volatile int32_t t79 = 104722525;

	t79 = (((x477*x478)*x479)==x480);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x485 = -1;
	volatile uint64_t x486 = 262921626LLU;
	static int32_t x487 = -30576502;
	uint8_t x488 = UINT8_MAX;

	t80 = (((x485*x486)*x487)==x488);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x501 = 1694U;
	int8_t x502 = -1;
	uint16_t x504 = 8074U;
	int32_t t81 = -7029;

	t81 = (((x501*x502)*x503)==x504);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x505 = -1;
	int16_t x506 = -1;
	static int64_t x507 = INT64_MIN;
	int32_t x508 = INT32_MIN;
	volatile int32_t t82 = 51459;

	t82 = (((x505*x506)*x507)==x508);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x517 = UINT32_MAX;
	uint8_t x518 = UINT8_MAX;
	uint16_t x519 = UINT16_MAX;
	static uint16_t x520 = UINT16_MAX;
	int32_t t83 = -52;

	t83 = (((x517*x518)*x519)==x520);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x525 = -215244154187962LL;
	volatile int32_t x527 = INT32_MAX;
	volatile uint64_t x528 = 14425296210LLU;
	int32_t t84 = 7264672;

	t84 = (((x525*x526)*x527)==x528);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x529 = 3827U;
	volatile int32_t x531 = -65;
	uint32_t x532 = UINT32_MAX;

	t85 = (((x529*x530)*x531)==x532);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x549 = INT16_MIN;
	volatile int8_t x550 = INT8_MIN;
	volatile uint32_t x551 = 6291193U;
	static int64_t x552 = INT64_MIN;

	t86 = (((x549*x550)*x551)==x552);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x557 = 54;
	int16_t x558 = -1;
	int8_t x559 = -7;
	int16_t x560 = 15669;
	int32_t t87 = -1302;

	t87 = (((x557*x558)*x559)==x560);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x565 = 1U;
	int32_t x566 = -1;
	int16_t x567 = INT16_MIN;
	int32_t t88 = 1;

	t88 = (((x565*x566)*x567)==x568);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x569 = 60U;
	static volatile uint8_t x570 = UINT8_MAX;
	uint64_t x571 = 12950215007372741LLU;
	int8_t x572 = 0;
	int32_t t89 = -85487;

	t89 = (((x569*x570)*x571)==x572);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x578 = 5U;
	volatile uint8_t x579 = UINT8_MAX;

	t90 = (((x577*x578)*x579)==x580);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x582 = INT32_MIN;
	int16_t x583 = INT16_MAX;
	uint32_t x584 = UINT32_MAX;
	int32_t t91 = 24806;

	t91 = (((x581*x582)*x583)==x584);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x585 = -1LL;
	static int8_t x586 = 18;
	int64_t x587 = -102325335LL;
	int8_t x588 = -1;
	volatile int32_t t92 = -25020546;

	t92 = (((x585*x586)*x587)==x588);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x597 = -1;
	int16_t x598 = -2;
	static volatile int16_t x599 = INT16_MIN;
	int32_t t93 = -732017300;

	t93 = (((x597*x598)*x599)==x600);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x601 = UINT64_MAX;
	int32_t x603 = -250070712;
	static int32_t x604 = INT32_MIN;
	volatile int32_t t94 = 12328;

	t94 = (((x601*x602)*x603)==x604);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x605 = INT8_MIN;
	volatile int8_t x606 = 1;
	static uint16_t x607 = UINT16_MAX;
	int32_t t95 = -36547551;

	t95 = (((x605*x606)*x607)==x608);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x609 = UINT8_MAX;
	uint64_t x610 = 315054561LLU;
	int8_t x612 = INT8_MIN;
	volatile int32_t t96 = -1022;

	t96 = (((x609*x610)*x611)==x612);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x621 = INT32_MIN;
	uint32_t x622 = 350U;
	int32_t x623 = INT32_MAX;
	volatile uint16_t x624 = UINT16_MAX;
	int32_t t97 = -2610;

	t97 = (((x621*x622)*x623)==x624);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x634 = UINT64_MAX;
	volatile int16_t x635 = -79;
	int64_t x636 = INT64_MIN;
	int32_t t98 = -1875;

	t98 = (((x633*x634)*x635)==x636);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x637 = INT8_MIN;
	static uint64_t x638 = 13404LLU;
	static int8_t x639 = INT8_MAX;
	static int16_t x640 = 2;
	volatile int32_t t99 = -13;

	t99 = (((x637*x638)*x639)==x640);

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


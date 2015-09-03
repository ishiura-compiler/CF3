#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 57U;
static uint32_t x3 = 167U;
int64_t x4 = -74587LL;
volatile int32_t t1 = 49;
volatile uint64_t x10 = UINT64_MAX;
uint8_t x12 = 3U;
int32_t t2 = -743381;
uint16_t x18 = 8519U;
int16_t x29 = 1;
static int64_t x34 = -14LL;
int32_t x42 = 10;
int8_t x45 = INT8_MAX;
int32_t x47 = -1;
uint16_t x61 = 19U;
int16_t x65 = INT16_MIN;
static uint16_t x68 = 1U;
uint16_t x74 = UINT16_MAX;
int32_t t14 = 10;
static uint8_t x90 = 1U;
static volatile int32_t t16 = 6;
int16_t x104 = INT16_MAX;
volatile int32_t t18 = -110347;
uint32_t x110 = 6354U;
int32_t x135 = -1;
volatile int32_t t23 = -678989534;
volatile int32_t t24 = 28229;
int16_t x150 = INT16_MIN;
static int16_t x153 = -5;
int8_t x155 = INT8_MIN;
static uint32_t x156 = UINT32_MAX;
static uint16_t x163 = 110U;
volatile uint8_t x167 = 1U;
uint8_t x184 = 4U;
volatile uint32_t x186 = 577530U;
volatile int8_t x187 = INT8_MIN;
uint16_t x188 = UINT16_MAX;
int32_t t31 = 15;
int16_t x190 = -1;
int8_t x198 = -2;
static int64_t x215 = -27323909LL;
int8_t x225 = -1;
uint32_t x229 = 19088U;
int32_t x246 = INT32_MAX;
uint8_t x262 = 41U;
volatile int8_t x269 = INT8_MAX;
int16_t x270 = INT16_MIN;
static uint32_t x275 = 1U;
static uint64_t x286 = 532LLU;
int64_t x287 = INT64_MAX;
int16_t x288 = 5263;
int8_t x289 = INT8_MIN;
uint32_t x292 = UINT32_MAX;
int8_t x293 = INT8_MIN;
volatile int32_t t48 = 22;
int16_t x298 = -1;
volatile int32_t t49 = 31008273;
uint32_t x301 = 1070819U;
uint64_t x302 = 13205LLU;
int8_t x304 = INT8_MAX;
int8_t x305 = -1;
static volatile int32_t t53 = -42927923;
static int32_t t54 = -2931870;
int16_t x322 = INT16_MIN;
uint8_t x326 = 60U;
volatile int64_t x335 = 171765956876LL;
int16_t x336 = INT16_MAX;
static int64_t x351 = -1LL;
static uint32_t x363 = UINT32_MAX;
static int64_t x367 = 3245051043195825760LL;
static volatile int32_t t63 = -4195907;
uint8_t x372 = UINT8_MAX;
uint64_t x390 = 911479LLU;
static int8_t x419 = -27;
static uint64_t x422 = UINT64_MAX;
int32_t t74 = 2038851;
volatile int32_t t77 = -82;
int32_t x442 = INT32_MIN;
static int32_t x445 = INT32_MIN;
volatile int32_t x446 = -1;
uint32_t x453 = 1855004520U;
int64_t x456 = INT64_MIN;
volatile int32_t t80 = -210956;
uint64_t x457 = 3657117528LLU;
int8_t x458 = INT8_MIN;
int16_t x459 = INT16_MAX;
int64_t x461 = 5555634547LL;
static int8_t x464 = INT8_MAX;
int32_t t82 = 7;
uint64_t x467 = UINT64_MAX;
uint32_t x475 = 1653U;
int16_t x493 = INT16_MAX;
int32_t t86 = 575296111;
int8_t x508 = INT8_MIN;
int32_t x517 = INT32_MIN;
volatile uint16_t x518 = UINT16_MAX;
volatile int32_t t89 = -459043953;
uint32_t x523 = UINT32_MAX;
static int16_t x525 = 1852;
int64_t x532 = -1684894123950111LL;
volatile int32_t t93 = -4;
uint8_t x542 = UINT8_MAX;
uint32_t x550 = UINT32_MAX;
static int16_t x572 = INT16_MIN;
int8_t x578 = -19;
int16_t x581 = INT16_MAX;
uint32_t x583 = 5542504U;


void f0(void) {
	int8_t x1 = INT8_MAX;
	volatile int32_t t0 = -5804992;

	t0 = (x1==((x2+x3)*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x5 = -54;
	uint8_t x6 = 65U;
	static int16_t x7 = INT16_MIN;
	volatile uint8_t x8 = 53U;

	t1 = (x5==((x6+x7)*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x9 = 15;
	int16_t x11 = -32;

	t2 = (x9==((x10+x11)*x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -1;
	volatile uint64_t x19 = 3897585LLU;
	int16_t x20 = INT16_MIN;
	volatile int32_t t3 = 22563064;

	t3 = (x17==((x18+x19)*x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x30 = 63U;
	int32_t x31 = -1;
	volatile int64_t x32 = 6LL;
	int32_t t4 = 1;

	t4 = (x29==((x30+x31)*x32));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x33 = 25360453U;
	int64_t x35 = -1LL;
	int64_t x36 = 63338220LL;
	int32_t t5 = -6;

	t5 = (x33==((x34+x35)*x36));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x37 = 23385U;
	int64_t x38 = -1LL;
	uint16_t x39 = 183U;
	volatile int16_t x40 = -1;
	int32_t t6 = 1;

	t6 = (x37==((x38+x39)*x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = INT64_MIN;
	int64_t x43 = 87462917997135LL;
	static uint8_t x44 = 0U;
	static volatile int32_t t7 = 4901978;

	t7 = (x41==((x42+x43)*x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x46 = 6278291U;
	int64_t x48 = -1521LL;
	static int32_t t8 = -78659639;

	t8 = (x45==((x46+x47)*x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x49 = 2;
	int8_t x50 = -3;
	uint64_t x51 = 493108806032LLU;
	int8_t x52 = INT8_MAX;
	int32_t t9 = 16498;

	t9 = (x49==((x50+x51)*x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x62 = UINT32_MAX;
	uint32_t x63 = UINT32_MAX;
	int32_t x64 = INT32_MIN;
	volatile int32_t t10 = 465510260;

	t10 = (x61==((x62+x63)*x64));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x66 = 0U;
	static int16_t x67 = -141;
	volatile int32_t t11 = -82460;

	t11 = (x65==((x66+x67)*x68));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x73 = INT16_MIN;
	volatile int16_t x75 = -1;
	static uint8_t x76 = UINT8_MAX;
	int32_t t12 = -58;

	t12 = (x73==((x74+x75)*x76));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x77 = -1;
	int64_t x78 = INT64_MIN;
	int64_t x79 = INT64_MAX;
	static int16_t x80 = INT16_MAX;
	int32_t t13 = 1757625;

	t13 = (x77==((x78+x79)*x80));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x81 = 0U;
	uint32_t x82 = 53004434U;
	int16_t x83 = 984;
	static int8_t x84 = INT8_MAX;

	t14 = (x81==((x82+x83)*x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x85 = UINT16_MAX;
	uint32_t x86 = UINT32_MAX;
	uint16_t x87 = UINT16_MAX;
	uint16_t x88 = 101U;
	volatile int32_t t15 = -1480;

	t15 = (x85==((x86+x87)*x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x89 = 7;
	volatile int8_t x91 = INT8_MIN;
	int8_t x92 = -1;

	t16 = (x89==((x90+x91)*x92));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x93 = INT64_MIN;
	static int8_t x94 = 3;
	uint32_t x95 = 70958U;
	uint16_t x96 = 1573U;
	static int32_t t17 = -85172424;

	t17 = (x93==((x94+x95)*x96));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x101 = 17U;
	int64_t x102 = -105269LL;
	uint16_t x103 = UINT16_MAX;

	t18 = (x101==((x102+x103)*x104));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x109 = -477641166;
	uint64_t x111 = 1367111106264031600LLU;
	int32_t x112 = 83853;
	int32_t t19 = 6599189;

	t19 = (x109==((x110+x111)*x112));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x125 = INT8_MIN;
	uint16_t x126 = 18U;
	static volatile uint16_t x127 = UINT16_MAX;
	static uint16_t x128 = 4U;
	volatile int32_t t20 = 438584762;

	t20 = (x125==((x126+x127)*x128));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x133 = INT16_MIN;
	volatile uint8_t x134 = 0U;
	uint64_t x136 = 2128150334247223LLU;
	int32_t t21 = -64998463;

	t21 = (x133==((x134+x135)*x136));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x137 = 13545783591619384LLU;
	static uint8_t x138 = 72U;
	int16_t x139 = -1;
	uint8_t x140 = UINT8_MAX;
	volatile int32_t t22 = 236;

	t22 = (x137==((x138+x139)*x140));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x141 = UINT8_MAX;
	uint8_t x142 = UINT8_MAX;
	int64_t x143 = 2LL;
	static int32_t x144 = -21;

	t23 = (x141==((x142+x143)*x144));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x145 = 59U;
	int32_t x146 = -1;
	volatile uint8_t x147 = 1U;
	int32_t x148 = INT32_MIN;

	t24 = (x145==((x146+x147)*x148));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x149 = UINT32_MAX;
	int16_t x151 = INT16_MIN;
	uint64_t x152 = 5357642350LLU;
	int32_t t25 = -2;

	t25 = (x149==((x150+x151)*x152));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x154 = UINT32_MAX;
	volatile int32_t t26 = -21;

	t26 = (x153==((x154+x155)*x156));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x161 = 54;
	static int16_t x162 = INT16_MIN;
	int64_t x164 = -1LL;
	int32_t t27 = 5242;

	t27 = (x161==((x162+x163)*x164));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x165 = 20;
	uint32_t x166 = UINT32_MAX;
	int16_t x168 = INT16_MIN;
	volatile int32_t t28 = -201783;

	t28 = (x165==((x166+x167)*x168));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x177 = 0;
	static int32_t x178 = INT32_MAX;
	uint32_t x179 = 654U;
	volatile int8_t x180 = INT8_MAX;
	volatile int32_t t29 = 211931;

	t29 = (x177==((x178+x179)*x180));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x181 = 5395U;
	uint32_t x182 = UINT32_MAX;
	int16_t x183 = INT16_MIN;
	int32_t t30 = 0;

	t30 = (x181==((x182+x183)*x184));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x185 = 2821U;

	t31 = (x185==((x186+x187)*x188));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x189 = -610;
	uint64_t x191 = 2203LLU;
	int64_t x192 = -1LL;
	static volatile int32_t t32 = -1878;

	t32 = (x189==((x190+x191)*x192));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x193 = INT16_MAX;
	int16_t x194 = INT16_MIN;
	static int16_t x195 = INT16_MIN;
	static int16_t x196 = -1;
	int32_t t33 = -1899;

	t33 = (x193==((x194+x195)*x196));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x197 = -1;
	int16_t x199 = INT16_MIN;
	uint32_t x200 = 212591U;
	volatile int32_t t34 = -28709744;

	t34 = (x197==((x198+x199)*x200));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x209 = -1;
	int16_t x210 = INT16_MIN;
	volatile uint64_t x211 = 77963LLU;
	uint8_t x212 = 3U;
	int32_t t35 = -1;

	t35 = (x209==((x210+x211)*x212));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x213 = UINT32_MAX;
	uint8_t x214 = 2U;
	volatile uint32_t x216 = UINT32_MAX;
	volatile int32_t t36 = 1;

	t36 = (x213==((x214+x215)*x216));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x226 = INT16_MAX;
	uint8_t x227 = 0U;
	static volatile uint32_t x228 = 146958U;
	static int32_t t37 = 84294;

	t37 = (x225==((x226+x227)*x228));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x230 = 2556;
	int16_t x231 = 713;
	static int8_t x232 = -1;
	volatile int32_t t38 = 228;

	t38 = (x229==((x230+x231)*x232));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x233 = 0;
	uint8_t x234 = UINT8_MAX;
	uint64_t x235 = 38500291295209LLU;
	int64_t x236 = 87LL;
	int32_t t39 = 23;

	t39 = (x233==((x234+x235)*x236));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x245 = INT8_MIN;
	static int16_t x247 = -1;
	int32_t x248 = -1;
	volatile int32_t t40 = 417;

	t40 = (x245==((x246+x247)*x248));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x249 = INT32_MIN;
	int32_t x250 = -1;
	int16_t x251 = -2020;
	uint8_t x252 = 1U;
	int32_t t41 = -1;

	t41 = (x249==((x250+x251)*x252));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x253 = INT8_MIN;
	int8_t x254 = -1;
	static uint32_t x255 = 1411U;
	int32_t x256 = INT32_MIN;
	volatile int32_t t42 = 2112537;

	t42 = (x253==((x254+x255)*x256));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x261 = INT32_MAX;
	static volatile uint64_t x263 = 234LLU;
	volatile int16_t x264 = -1;
	volatile int32_t t43 = 81;

	t43 = (x261==((x262+x263)*x264));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x271 = 0LLU;
	volatile int64_t x272 = -222336876684LL;
	int32_t t44 = -7528;

	t44 = (x269==((x270+x271)*x272));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x273 = INT16_MIN;
	int8_t x274 = 1;
	int16_t x276 = -1;
	int32_t t45 = -11827548;

	t45 = (x273==((x274+x275)*x276));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x285 = INT8_MAX;
	int32_t t46 = -106719;

	t46 = (x285==((x286+x287)*x288));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x290 = -1;
	static volatile int32_t x291 = -1;
	int32_t t47 = 40671576;

	t47 = (x289==((x290+x291)*x292));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x294 = 2742;
	static volatile int64_t x295 = INT64_MIN;
	int16_t x296 = -1;

	t48 = (x293==((x294+x295)*x296));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x297 = INT32_MIN;
	int16_t x299 = INT16_MAX;
	uint64_t x300 = UINT64_MAX;

	t49 = (x297==((x298+x299)*x300));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x303 = 2U;
	int32_t t50 = 717443;

	t50 = (x301==((x302+x303)*x304));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x306 = 9880582287228LLU;
	static int16_t x307 = INT16_MAX;
	int16_t x308 = -1;
	static volatile int32_t t51 = -3722;

	t51 = (x305==((x306+x307)*x308));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x309 = 17522;
	static int8_t x310 = 11;
	static volatile int16_t x311 = -418;
	uint64_t x312 = 453LLU;
	static int32_t t52 = 60;

	t52 = (x309==((x310+x311)*x312));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x313 = INT8_MIN;
	uint32_t x314 = 16663U;
	uint8_t x315 = 29U;
	static volatile uint16_t x316 = 233U;

	t53 = (x313==((x314+x315)*x316));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x317 = 68U;
	volatile int16_t x318 = -1;
	volatile int32_t x319 = -24268395;
	uint64_t x320 = 378520153966307688LLU;

	t54 = (x317==((x318+x319)*x320));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x321 = -21;
	volatile uint8_t x323 = UINT8_MAX;
	int8_t x324 = INT8_MIN;
	int32_t t55 = 610616255;

	t55 = (x321==((x322+x323)*x324));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x325 = 1U;
	uint64_t x327 = UINT64_MAX;
	static int16_t x328 = -7980;
	static int32_t t56 = 0;

	t56 = (x325==((x326+x327)*x328));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x329 = 0U;
	static uint32_t x330 = 325532925U;
	volatile uint16_t x331 = 3U;
	int64_t x332 = 53LL;
	static int32_t t57 = 297;

	t57 = (x329==((x330+x331)*x332));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x333 = INT64_MIN;
	int8_t x334 = INT8_MIN;
	int32_t t58 = -7958;

	t58 = (x333==((x334+x335)*x336));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x345 = INT64_MIN;
	uint16_t x346 = 22660U;
	uint8_t x347 = 2U;
	int64_t x348 = -1LL;
	volatile int32_t t59 = 0;

	t59 = (x345==((x346+x347)*x348));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x349 = INT64_MAX;
	uint32_t x350 = UINT32_MAX;
	int16_t x352 = INT16_MAX;
	static volatile int32_t t60 = 0;

	t60 = (x349==((x350+x351)*x352));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x353 = -90244297LL;
	int16_t x354 = INT16_MIN;
	int32_t x355 = INT32_MAX;
	int16_t x356 = -1;
	int32_t t61 = -133188;

	t61 = (x353==((x354+x355)*x356));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x361 = INT32_MAX;
	uint32_t x362 = 23208U;
	uint32_t x364 = 449637336U;
	volatile int32_t t62 = 0;

	t62 = (x361==((x362+x363)*x364));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x365 = 1U;
	int16_t x366 = -1;
	volatile int64_t x368 = -1LL;

	t63 = (x365==((x366+x367)*x368));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x369 = 52917LLU;
	uint64_t x370 = 3LLU;
	volatile int8_t x371 = -1;
	volatile int32_t t64 = -145712;

	t64 = (x369==((x370+x371)*x372));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x373 = -1LL;
	int8_t x374 = INT8_MIN;
	static int16_t x375 = -1;
	volatile uint32_t x376 = 10603434U;
	int32_t t65 = -21884;

	t65 = (x373==((x374+x375)*x376));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x377 = UINT32_MAX;
	volatile uint64_t x378 = 3663514475820336LLU;
	volatile int32_t x379 = INT32_MIN;
	int64_t x380 = 424233782LL;
	int32_t t66 = -56747;

	t66 = (x377==((x378+x379)*x380));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x385 = 1422;
	volatile uint8_t x386 = 0U;
	volatile uint64_t x387 = 33319605327LLU;
	int16_t x388 = INT16_MAX;
	static volatile int32_t t67 = 343;

	t67 = (x385==((x386+x387)*x388));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x389 = 2;
	int8_t x391 = INT8_MAX;
	volatile uint16_t x392 = UINT16_MAX;
	int32_t t68 = -3573;

	t68 = (x389==((x390+x391)*x392));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x393 = 34U;
	volatile int8_t x394 = INT8_MIN;
	uint32_t x395 = 3U;
	static int32_t x396 = -1;
	static int32_t t69 = -56016843;

	t69 = (x393==((x394+x395)*x396));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x401 = 758664U;
	int16_t x402 = INT16_MIN;
	static uint32_t x403 = UINT32_MAX;
	static uint32_t x404 = 1211870U;
	volatile int32_t t70 = 4426635;

	t70 = (x401==((x402+x403)*x404));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x409 = UINT8_MAX;
	static uint16_t x410 = 10839U;
	static uint32_t x411 = 530531675U;
	int32_t x412 = -58266;
	int32_t t71 = 199;

	t71 = (x409==((x410+x411)*x412));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x413 = 1629U;
	int8_t x414 = -1;
	int16_t x415 = -3;
	int8_t x416 = -1;
	int32_t t72 = -6;

	t72 = (x413==((x414+x415)*x416));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x417 = -3;
	volatile uint8_t x418 = UINT8_MAX;
	int16_t x420 = 0;
	int32_t t73 = 146;

	t73 = (x417==((x418+x419)*x420));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x421 = UINT32_MAX;
	static uint16_t x423 = UINT16_MAX;
	uint8_t x424 = 15U;

	t74 = (x421==((x422+x423)*x424));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x425 = -1;
	volatile uint32_t x426 = 5202845U;
	int16_t x427 = INT16_MIN;
	static volatile int16_t x428 = INT16_MIN;
	volatile int32_t t75 = 80044674;

	t75 = (x425==((x426+x427)*x428));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x429 = -1;
	int8_t x430 = 1;
	int64_t x431 = 61553LL;
	uint16_t x432 = UINT16_MAX;
	int32_t t76 = 0;

	t76 = (x429==((x430+x431)*x432));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x437 = 98199670026267LL;
	int64_t x438 = 3895704053257948LL;
	int16_t x439 = 1;
	uint64_t x440 = UINT64_MAX;

	t77 = (x437==((x438+x439)*x440));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x441 = -59;
	int64_t x443 = 518LL;
	volatile int16_t x444 = 164;
	volatile int32_t t78 = -234;

	t78 = (x441==((x442+x443)*x444));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x447 = UINT64_MAX;
	int8_t x448 = INT8_MAX;
	volatile int32_t t79 = -6362327;

	t79 = (x445==((x446+x447)*x448));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x454 = 2472542317500627220LL;
	uint64_t x455 = UINT64_MAX;

	t80 = (x453==((x454+x455)*x456));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x460 = -1LL;
	int32_t t81 = -571717704;

	t81 = (x457==((x458+x459)*x460));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x462 = 1U;
	uint64_t x463 = 125679579222336LLU;

	t82 = (x461==((x462+x463)*x464));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x465 = 172655LLU;
	int16_t x466 = -9190;
	int32_t x468 = -1;
	volatile int32_t t83 = -59;

	t83 = (x465==((x466+x467)*x468));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x473 = INT8_MIN;
	int8_t x474 = INT8_MAX;
	int8_t x476 = -49;
	volatile int32_t t84 = 1;

	t84 = (x473==((x474+x475)*x476));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x485 = -315LL;
	static int8_t x486 = 16;
	int16_t x487 = 7;
	volatile int16_t x488 = -1;
	volatile int32_t t85 = 37839175;

	t85 = (x485==((x486+x487)*x488));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x494 = UINT16_MAX;
	volatile int8_t x495 = INT8_MIN;
	static int16_t x496 = INT16_MIN;

	t86 = (x493==((x494+x495)*x496));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x497 = UINT64_MAX;
	volatile uint8_t x498 = 12U;
	volatile int16_t x499 = INT16_MAX;
	uint8_t x500 = 9U;
	int32_t t87 = -1141670;

	t87 = (x497==((x498+x499)*x500));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x505 = UINT32_MAX;
	int16_t x506 = -909;
	static int64_t x507 = -1LL;
	int32_t t88 = 62;

	t88 = (x505==((x506+x507)*x508));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x519 = 188630LL;
	uint64_t x520 = 970LLU;

	t89 = (x517==((x518+x519)*x520));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x521 = 232318544855627LLU;
	int8_t x522 = INT8_MAX;
	int16_t x524 = INT16_MIN;
	volatile int32_t t90 = -273779;

	t90 = (x521==((x522+x523)*x524));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x526 = 1;
	static uint64_t x527 = 3778247802019LLU;
	int64_t x528 = 30121LL;
	volatile int32_t t91 = 791653307;

	t91 = (x525==((x526+x527)*x528));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x529 = INT64_MIN;
	uint32_t x530 = 11U;
	int8_t x531 = 1;
	volatile int32_t t92 = 24566114;

	t92 = (x529==((x530+x531)*x532));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x533 = 496691647318LLU;
	static uint32_t x534 = UINT32_MAX;
	volatile uint8_t x535 = 52U;
	int32_t x536 = INT32_MIN;

	t93 = (x533==((x534+x535)*x536));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x537 = INT32_MAX;
	volatile int8_t x538 = -1;
	int8_t x539 = INT8_MIN;
	int64_t x540 = 10LL;
	int32_t t94 = -233;

	t94 = (x537==((x538+x539)*x540));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x541 = -1;
	uint16_t x543 = UINT16_MAX;
	uint32_t x544 = 196355U;
	volatile int32_t t95 = 72249637;

	t95 = (x541==((x542+x543)*x544));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x549 = -32610822997LL;
	uint64_t x551 = UINT64_MAX;
	int16_t x552 = -11998;
	static volatile int32_t t96 = 1312928;

	t96 = (x549==((x550+x551)*x552));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x569 = INT8_MIN;
	int32_t x570 = 3712;
	int8_t x571 = INT8_MIN;
	volatile int32_t t97 = -562614576;

	t97 = (x569==((x570+x571)*x572));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x577 = INT8_MIN;
	uint16_t x579 = 10580U;
	volatile uint32_t x580 = 41U;
	volatile int32_t t98 = -31;

	t98 = (x577==((x578+x579)*x580));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x582 = INT8_MIN;
	uint16_t x584 = UINT16_MAX;
	int32_t t99 = 19493795;

	t99 = (x581==((x582+x583)*x584));

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


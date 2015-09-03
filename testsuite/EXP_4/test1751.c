#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x1 = UINT64_MAX;
int8_t x3 = -1;
volatile uint8_t x10 = UINT8_MAX;
int32_t t2 = 105417;
static int32_t t3 = -832869121;
int16_t x17 = INT16_MIN;
uint64_t x19 = 11323952663727196LLU;
volatile uint32_t x22 = 1128842170U;
int8_t x27 = -1;
volatile uint64_t x30 = UINT64_MAX;
int16_t x32 = INT16_MAX;
volatile uint32_t x41 = 2208723U;
int32_t t9 = 13380;
uint16_t x45 = UINT16_MAX;
static uint32_t x48 = UINT32_MAX;
volatile int16_t x52 = INT16_MIN;
int32_t t11 = -107811;
static int64_t x54 = INT64_MIN;
uint32_t x57 = 8484U;
int8_t x59 = INT8_MIN;
int32_t t13 = 11087648;
int32_t x63 = INT32_MIN;
int32_t x78 = 8876;
uint16_t x80 = 3355U;
volatile int16_t x83 = INT16_MIN;
static volatile uint64_t x89 = 172024LLU;
volatile int32_t t19 = 19816;
static int8_t x97 = -2;
int32_t t21 = 459;
volatile int32_t t22 = 188030221;
volatile uint8_t x109 = UINT8_MAX;
int32_t t26 = 26;
static volatile int8_t x125 = -38;
static uint32_t x127 = UINT32_MAX;
int32_t t28 = 222831085;
volatile int32_t x149 = -1;
uint64_t x151 = 64095080180099LLU;
static int16_t x156 = 35;
int64_t x157 = 23313589899LL;
uint32_t x158 = 985836U;
int16_t x160 = -1;
static int8_t x161 = -1;
uint64_t x163 = 228721503714LLU;
uint16_t x175 = 48U;
uint8_t x176 = UINT8_MAX;
static int16_t x197 = 8;
static int64_t x201 = INT64_MAX;
int16_t x210 = INT16_MIN;
volatile int64_t x214 = INT64_MIN;
uint16_t x216 = UINT16_MAX;
uint16_t x218 = UINT16_MAX;
int16_t x220 = INT16_MAX;
static int32_t x230 = -1;
static int32_t x238 = INT32_MAX;
volatile int32_t t43 = -23;
volatile int64_t x245 = INT64_MAX;
int64_t x249 = INT64_MIN;
int16_t x251 = INT16_MIN;
int64_t x253 = -1LL;
int32_t t46 = -241;
uint64_t x264 = UINT64_MAX;
volatile int32_t t47 = 97152;
static uint8_t x267 = 3U;
int16_t x285 = INT16_MIN;
volatile int32_t t52 = -44218319;
int8_t x308 = INT8_MIN;
int32_t t55 = -33322334;
uint8_t x314 = 15U;
uint8_t x317 = 6U;
volatile uint64_t x320 = UINT64_MAX;
static int8_t x326 = 0;
int32_t x329 = INT32_MIN;
volatile int32_t x330 = -26178;
int64_t x331 = -137428329009209LL;
int64_t x347 = -207064931LL;
int32_t x370 = INT32_MIN;
static int32_t t68 = 9406476;
uint8_t x376 = UINT8_MAX;
volatile int32_t t69 = 798084973;
static int32_t t71 = 60218;
int8_t x392 = -1;
volatile int32_t t72 = 230;
int32_t x402 = INT32_MIN;
volatile int32_t x414 = INT32_MAX;
volatile int32_t x418 = INT32_MIN;
static int32_t t77 = -22;
volatile int64_t x422 = INT64_MIN;
int32_t t79 = -59720;
int64_t x436 = -359715LL;
volatile int8_t x444 = INT8_MIN;
volatile int32_t x445 = INT32_MIN;
int8_t x453 = INT8_MAX;
uint64_t x459 = UINT64_MAX;
static uint16_t x463 = UINT16_MAX;
int16_t x464 = -1;
uint16_t x465 = UINT16_MAX;
volatile int64_t x467 = INT64_MAX;
int32_t t88 = 7349;
int16_t x480 = -1;
static volatile int32_t t94 = -662266;
int32_t t96 = 22900;
static volatile uint8_t x530 = 0U;
uint64_t x534 = UINT64_MAX;
static volatile int16_t x535 = -15;


void f0(void) {
	static int32_t x2 = INT32_MIN;
	static volatile int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -265329756;

	t0 = (x1<(x2%(x3&x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	int16_t x6 = INT16_MIN;
	static int8_t x7 = -13;
	int16_t x8 = -1;
	volatile int32_t t1 = 956;

	t1 = (x5<(x6%(x7&x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 9013U;
	uint32_t x11 = 92817U;
	int16_t x12 = 583;

	t2 = (x9<(x10%(x11&x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	static int16_t x14 = INT16_MAX;
	int16_t x15 = INT16_MIN;
	static uint64_t x16 = UINT64_MAX;

	t3 = (x13<(x14%(x15&x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x18 = INT8_MIN;
	static int32_t x20 = INT32_MAX;
	volatile int32_t t4 = -479060316;

	t4 = (x17<(x18%(x19&x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	int64_t x23 = INT64_MAX;
	uint16_t x24 = 5U;
	volatile int32_t t5 = -1;

	t5 = (x21<(x22%(x23&x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = -1;
	int16_t x26 = 8369;
	volatile int8_t x28 = INT8_MIN;
	int32_t t6 = 7;

	t6 = (x25<(x26%(x27&x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x29 = INT16_MIN;
	int8_t x31 = -46;
	static volatile int32_t t7 = 3;

	t7 = (x29<(x30%(x31&x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int16_t x34 = INT16_MAX;
	static volatile int8_t x35 = -2;
	int32_t x36 = INT32_MIN;
	int32_t t8 = 13509708;

	t8 = (x33<(x34%(x35&x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x42 = 88735U;
	int8_t x43 = INT8_MIN;
	int16_t x44 = -1;

	t9 = (x41<(x42%(x43&x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x46 = INT32_MIN;
	static int16_t x47 = INT16_MAX;
	int32_t t10 = -555;

	t10 = (x45<(x46%(x47&x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = UINT64_MAX;
	int16_t x50 = 1;
	volatile uint64_t x51 = 29484474102527675LLU;

	t11 = (x49<(x50%(x51&x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = INT32_MIN;
	int64_t x55 = -1LL;
	volatile uint8_t x56 = 16U;
	volatile int32_t t12 = 12815;

	t12 = (x53<(x54%(x55&x56)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x58 = 6238LLU;
	uint32_t x60 = 836U;

	t13 = (x57<(x58%(x59&x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x61 = INT32_MIN;
	int32_t x62 = INT32_MIN;
	int32_t x64 = -617;
	static volatile int32_t t14 = 7343;

	t14 = (x61<(x62%(x63&x64)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = UINT16_MAX;
	uint32_t x70 = 365056195U;
	static uint32_t x71 = 7767U;
	volatile int16_t x72 = INT16_MAX;
	volatile int32_t t15 = 5479;

	t15 = (x69<(x70%(x71&x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x77 = 0;
	uint8_t x79 = 44U;
	static volatile int32_t t16 = 6;

	t16 = (x77<(x78%(x79&x80)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x81 = 22U;
	int8_t x82 = -25;
	volatile int64_t x84 = INT64_MIN;
	static volatile int32_t t17 = -81;

	t17 = (x81<(x82%(x83&x84)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x85 = INT8_MIN;
	int8_t x86 = INT8_MIN;
	uint32_t x87 = UINT32_MAX;
	uint8_t x88 = UINT8_MAX;
	int32_t t18 = 18032243;

	t18 = (x85<(x86%(x87&x88)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x90 = 1LLU;
	int8_t x91 = INT8_MIN;
	int32_t x92 = INT32_MIN;

	t19 = (x89<(x90%(x91&x92)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x93 = 140LLU;
	volatile int8_t x94 = INT8_MIN;
	static uint16_t x95 = 15010U;
	int8_t x96 = INT8_MIN;
	volatile int32_t t20 = 74786761;

	t20 = (x93<(x94%(x95&x96)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x98 = -1;
	int16_t x99 = INT16_MAX;
	uint8_t x100 = UINT8_MAX;

	t21 = (x97<(x98%(x99&x100)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x101 = INT64_MIN;
	static int16_t x102 = -386;
	int16_t x103 = INT16_MIN;
	volatile int16_t x104 = INT16_MIN;

	t22 = (x101<(x102%(x103&x104)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = INT64_MIN;
	static int32_t x106 = -1520;
	volatile uint32_t x107 = UINT32_MAX;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t23 = -7155033;

	t23 = (x105<(x106%(x107&x108)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x110 = 0;
	volatile uint32_t x111 = 2737U;
	uint8_t x112 = UINT8_MAX;
	volatile int32_t t24 = 0;

	t24 = (x109<(x110%(x111&x112)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x113 = UINT32_MAX;
	int8_t x114 = 12;
	volatile int8_t x115 = -38;
	static int16_t x116 = INT16_MIN;
	int32_t t25 = 2;

	t25 = (x113<(x114%(x115&x116)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x117 = 1U;
	uint16_t x118 = 8U;
	static int32_t x119 = INT32_MAX;
	uint16_t x120 = UINT16_MAX;

	t26 = (x117<(x118%(x119&x120)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x126 = UINT16_MAX;
	int64_t x128 = INT64_MAX;
	int32_t t27 = 15534771;

	t27 = (x125<(x126%(x127&x128)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = -1;
	static uint16_t x130 = 1107U;
	volatile int64_t x131 = -1LL;
	int64_t x132 = -1LL;

	t28 = (x129<(x130%(x131&x132)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x137 = INT16_MIN;
	int64_t x138 = INT64_MIN;
	volatile int64_t x139 = INT64_MAX;
	volatile int64_t x140 = -1LL;
	volatile int32_t t29 = -46;

	t29 = (x137<(x138%(x139&x140)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x150 = INT64_MIN;
	int16_t x152 = INT16_MAX;
	volatile int32_t t30 = -7;

	t30 = (x149<(x150%(x151&x152)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x153 = -1;
	int64_t x154 = -1779209687252192216LL;
	static int64_t x155 = 1003LL;
	int32_t t31 = -1025340;

	t31 = (x153<(x154%(x155&x156)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x159 = -1;
	volatile int32_t t32 = -4127185;

	t32 = (x157<(x158%(x159&x160)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x162 = 0;
	static uint64_t x164 = 1685398LLU;
	static volatile int32_t t33 = -2452;

	t33 = (x161<(x162%(x163&x164)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x169 = 13695907171LL;
	uint16_t x170 = 12479U;
	int32_t x171 = 11748;
	static int32_t x172 = 203948;
	int32_t t34 = -1033103463;

	t34 = (x169<(x170%(x171&x172)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x173 = INT32_MIN;
	uint8_t x174 = 57U;
	volatile int32_t t35 = -5908;

	t35 = (x173<(x174%(x175&x176)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x198 = -13459;
	int16_t x199 = INT16_MAX;
	uint8_t x200 = 61U;
	int32_t t36 = 1;

	t36 = (x197<(x198%(x199&x200)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x202 = -1;
	uint32_t x203 = 4U;
	uint32_t x204 = UINT32_MAX;
	static volatile int32_t t37 = 12;

	t37 = (x201<(x202%(x203&x204)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x209 = INT8_MIN;
	uint64_t x211 = 13748LLU;
	uint32_t x212 = 299U;
	volatile int32_t t38 = -254545;

	t38 = (x209<(x210%(x211&x212)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x213 = 0;
	int8_t x215 = -3;
	volatile int32_t t39 = 14293739;

	t39 = (x213<(x214%(x215&x216)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x217 = INT16_MIN;
	uint16_t x219 = 10096U;
	int32_t t40 = -117;

	t40 = (x217<(x218%(x219&x220)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x221 = 554292LLU;
	int32_t x222 = INT32_MIN;
	int16_t x223 = -1;
	static int32_t x224 = INT32_MIN;
	int32_t t41 = -82;

	t41 = (x221<(x222%(x223&x224)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x229 = 188U;
	int32_t x231 = INT32_MAX;
	volatile int64_t x232 = -1LL;
	volatile int32_t t42 = -3268507;

	t42 = (x229<(x230%(x231&x232)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x237 = INT16_MIN;
	int64_t x239 = INT64_MIN;
	int64_t x240 = INT64_MIN;

	t43 = (x237<(x238%(x239&x240)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x246 = -1LL;
	volatile int8_t x247 = INT8_MIN;
	static volatile int16_t x248 = INT16_MIN;
	volatile int32_t t44 = 4631772;

	t44 = (x245<(x246%(x247&x248)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x250 = -1;
	int64_t x252 = -497590631LL;
	int32_t t45 = 1191232;

	t45 = (x249<(x250%(x251&x252)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x254 = 27;
	int32_t x255 = INT32_MIN;
	int32_t x256 = INT32_MIN;

	t46 = (x253<(x254%(x255&x256)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x261 = INT64_MIN;
	static int64_t x262 = INT64_MAX;
	static int32_t x263 = INT32_MAX;

	t47 = (x261<(x262%(x263&x264)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x265 = 4093U;
	int32_t x266 = INT32_MIN;
	volatile uint64_t x268 = UINT64_MAX;
	int32_t t48 = -95;

	t48 = (x265<(x266%(x267&x268)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x281 = -3LL;
	uint64_t x282 = 400298951464LLU;
	int16_t x283 = 2121;
	volatile int32_t x284 = INT32_MAX;
	static int32_t t49 = -211238;

	t49 = (x281<(x282%(x283&x284)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x286 = 977346LL;
	int16_t x287 = INT16_MAX;
	int8_t x288 = INT8_MIN;
	int32_t t50 = -25;

	t50 = (x285<(x286%(x287&x288)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x289 = 49U;
	static int64_t x290 = INT64_MAX;
	int8_t x291 = INT8_MIN;
	static uint16_t x292 = UINT16_MAX;
	int32_t t51 = -695799793;

	t51 = (x289<(x290%(x291&x292)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x293 = -1;
	int16_t x294 = INT16_MIN;
	int64_t x295 = -1LL;
	int8_t x296 = INT8_MIN;

	t52 = (x293<(x294%(x295&x296)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x297 = -1;
	int32_t x298 = 62;
	static volatile uint64_t x299 = 240671970117347LLU;
	uint16_t x300 = UINT16_MAX;
	int32_t t53 = 484190;

	t53 = (x297<(x298%(x299&x300)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x301 = INT32_MAX;
	int32_t x302 = -114;
	int64_t x303 = 15445LL;
	int16_t x304 = -1;
	volatile int32_t t54 = 3;

	t54 = (x301<(x302%(x303&x304)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x305 = -30;
	int32_t x306 = INT32_MAX;
	int64_t x307 = INT64_MAX;

	t55 = (x305<(x306%(x307&x308)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x309 = 74U;
	int64_t x310 = INT64_MAX;
	int64_t x311 = -15459877357016327LL;
	volatile int16_t x312 = -8118;
	volatile int32_t t56 = -31687;

	t56 = (x309<(x310%(x311&x312)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x313 = UINT8_MAX;
	uint32_t x315 = UINT32_MAX;
	int64_t x316 = 9LL;
	int32_t t57 = -70368;

	t57 = (x313<(x314%(x315&x316)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x318 = INT16_MAX;
	int64_t x319 = 470LL;
	int32_t t58 = -5;

	t58 = (x317<(x318%(x319&x320)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x321 = 15;
	static int32_t x322 = INT32_MIN;
	int32_t x323 = -15704;
	volatile int16_t x324 = 35;
	static volatile int32_t t59 = 6237;

	t59 = (x321<(x322%(x323&x324)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x325 = INT64_MAX;
	static volatile int16_t x327 = INT16_MIN;
	int8_t x328 = INT8_MIN;
	int32_t t60 = 2096087;

	t60 = (x325<(x326%(x327&x328)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x332 = -1114522269324878LL;
	volatile int32_t t61 = 6810596;

	t61 = (x329<(x330%(x331&x332)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x333 = 0;
	static int64_t x334 = INT64_MAX;
	volatile int64_t x335 = 1183059837079LL;
	int32_t x336 = INT32_MIN;
	int32_t t62 = -3;

	t62 = (x333<(x334%(x335&x336)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x341 = UINT8_MAX;
	static volatile uint8_t x342 = UINT8_MAX;
	int8_t x343 = INT8_MIN;
	uint16_t x344 = UINT16_MAX;
	int32_t t63 = 1;

	t63 = (x341<(x342%(x343&x344)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x345 = -5775985;
	uint8_t x346 = 4U;
	static int8_t x348 = INT8_MIN;
	static int32_t t64 = 90922487;

	t64 = (x345<(x346%(x347&x348)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x349 = INT16_MIN;
	int16_t x350 = -1;
	int16_t x351 = -1;
	int8_t x352 = INT8_MIN;
	volatile int32_t t65 = -13524;

	t65 = (x349<(x350%(x351&x352)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x361 = INT8_MAX;
	uint16_t x362 = UINT16_MAX;
	static int32_t x363 = -1;
	volatile uint32_t x364 = 536631795U;
	volatile int32_t t66 = 170843725;

	t66 = (x361<(x362%(x363&x364)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x365 = -1;
	int8_t x366 = -2;
	static int64_t x367 = -12206628LL;
	static volatile int64_t x368 = -1LL;
	int32_t t67 = 119;

	t67 = (x365<(x366%(x367&x368)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x369 = INT16_MIN;
	int16_t x371 = INT16_MAX;
	volatile int32_t x372 = -136;

	t68 = (x369<(x370%(x371&x372)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x373 = 7;
	int16_t x374 = -3;
	static volatile uint64_t x375 = UINT64_MAX;

	t69 = (x373<(x374%(x375&x376)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x381 = 273417U;
	static uint32_t x382 = UINT32_MAX;
	uint64_t x383 = 3LLU;
	int8_t x384 = INT8_MAX;
	volatile int32_t t70 = -482;

	t70 = (x381<(x382%(x383&x384)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x385 = INT64_MIN;
	static int8_t x386 = -50;
	int32_t x387 = 225;
	int64_t x388 = 289383201LL;

	t71 = (x385<(x386%(x387&x388)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x389 = INT16_MIN;
	int32_t x390 = 3;
	static int16_t x391 = INT16_MIN;

	t72 = (x389<(x390%(x391&x392)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x393 = INT8_MIN;
	int8_t x394 = INT8_MAX;
	static volatile int32_t x395 = INT32_MIN;
	static volatile int16_t x396 = INT16_MIN;
	int32_t t73 = 495109950;

	t73 = (x393<(x394%(x395&x396)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x401 = 58U;
	int32_t x403 = INT32_MAX;
	uint16_t x404 = 75U;
	static int32_t t74 = -5;

	t74 = (x401<(x402%(x403&x404)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x405 = UINT32_MAX;
	int64_t x406 = INT64_MAX;
	int8_t x407 = 1;
	int64_t x408 = -1LL;
	volatile int32_t t75 = 2186;

	t75 = (x405<(x406%(x407&x408)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x413 = INT16_MAX;
	uint64_t x415 = 3309998339695LLU;
	static uint64_t x416 = 685LLU;
	volatile int32_t t76 = 6045;

	t76 = (x413<(x414%(x415&x416)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x417 = -1;
	int16_t x419 = -1;
	volatile int16_t x420 = INT16_MIN;

	t77 = (x417<(x418%(x419&x420)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x421 = UINT64_MAX;
	volatile uint64_t x423 = UINT64_MAX;
	int32_t x424 = -1;
	volatile int32_t t78 = 25;

	t78 = (x421<(x422%(x423&x424)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x425 = INT32_MIN;
	static int16_t x426 = -1819;
	static int64_t x427 = 512430087396587479LL;
	volatile int16_t x428 = -1;

	t79 = (x425<(x426%(x427&x428)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x429 = 4U;
	static int8_t x430 = INT8_MIN;
	volatile int16_t x431 = INT16_MAX;
	int32_t x432 = -6425438;
	volatile int32_t t80 = 321170;

	t80 = (x429<(x430%(x431&x432)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x433 = INT32_MAX;
	static volatile int64_t x434 = INT64_MIN;
	volatile int64_t x435 = INT64_MIN;
	static volatile int32_t t81 = -96069;

	t81 = (x433<(x434%(x435&x436)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x441 = 83049U;
	int8_t x442 = INT8_MIN;
	volatile int16_t x443 = INT16_MIN;
	volatile int32_t t82 = 150323136;

	t82 = (x441<(x442%(x443&x444)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x446 = INT8_MAX;
	int64_t x447 = INT64_MIN;
	int16_t x448 = -1;
	int32_t t83 = 67;

	t83 = (x445<(x446%(x447&x448)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x454 = 1;
	int64_t x455 = -1LL;
	int64_t x456 = 1432903687LL;
	volatile int32_t t84 = -14056715;

	t84 = (x453<(x454%(x455&x456)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x457 = -1428933;
	uint64_t x458 = 51863LLU;
	volatile int32_t x460 = INT32_MIN;
	volatile int32_t t85 = 0;

	t85 = (x457<(x458%(x459&x460)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x461 = INT32_MAX;
	int64_t x462 = INT64_MIN;
	int32_t t86 = -110501;

	t86 = (x461<(x462%(x463&x464)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x466 = -73854;
	int32_t x468 = INT32_MAX;
	volatile int32_t t87 = 1;

	t87 = (x465<(x466%(x467&x468)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x473 = 8059U;
	volatile int32_t x474 = INT32_MIN;
	uint32_t x475 = 413345U;
	uint64_t x476 = 164648500LLU;

	t88 = (x473<(x474%(x475&x476)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x477 = INT8_MAX;
	volatile uint32_t x478 = UINT32_MAX;
	int16_t x479 = INT16_MIN;
	volatile int32_t t89 = -54;

	t89 = (x477<(x478%(x479&x480)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x481 = 7486U;
	volatile int64_t x482 = INT64_MIN;
	int16_t x483 = INT16_MIN;
	int16_t x484 = -1;
	int32_t t90 = 863;

	t90 = (x481<(x482%(x483&x484)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x489 = UINT8_MAX;
	uint16_t x490 = UINT16_MAX;
	volatile int16_t x491 = INT16_MAX;
	volatile uint16_t x492 = 48U;
	int32_t t91 = -24719;

	t91 = (x489<(x490%(x491&x492)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x493 = -1;
	static int16_t x494 = -917;
	int8_t x495 = -1;
	int32_t x496 = INT32_MAX;
	int32_t t92 = -1;

	t92 = (x493<(x494%(x495&x496)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x497 = 12292391080451495LLU;
	int64_t x498 = -1LL;
	uint8_t x499 = 6U;
	volatile uint8_t x500 = 29U;
	volatile int32_t t93 = 95703575;

	t93 = (x497<(x498%(x499&x500)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x501 = INT16_MAX;
	static int8_t x502 = 3;
	volatile int64_t x503 = -691572837913617353LL;
	int64_t x504 = -1LL;

	t94 = (x501<(x502%(x503&x504)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x505 = INT16_MIN;
	int32_t x506 = 370050;
	int8_t x507 = INT8_MIN;
	static int16_t x508 = -1;
	int32_t t95 = -255030;

	t95 = (x505<(x506%(x507&x508)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x509 = INT32_MAX;
	int32_t x510 = INT32_MAX;
	static int32_t x511 = -1;
	static volatile int32_t x512 = -1;

	t96 = (x509<(x510%(x511&x512)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x513 = 2;
	int32_t x514 = 214;
	volatile int32_t x515 = 55;
	int64_t x516 = INT64_MAX;
	int32_t t97 = 2;

	t97 = (x513<(x514%(x515&x516)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x529 = -3;
	uint32_t x531 = 7U;
	int32_t x532 = -1;
	int32_t t98 = -447;

	t98 = (x529<(x530%(x531&x532)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x533 = -4032;
	uint64_t x536 = 5243099540733933999LLU;
	static int32_t t99 = 162;

	t99 = (x533<(x534%(x535&x536)));

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


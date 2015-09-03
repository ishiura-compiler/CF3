#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -540;
static int32_t x5 = -1;
volatile int32_t t2 = -21;
static uint64_t x19 = 1672659826771086LLU;
static int32_t t4 = 11;
int32_t t7 = 4437;
int16_t x35 = INT16_MIN;
uint16_t x36 = UINT16_MAX;
volatile uint16_t x40 = UINT16_MAX;
volatile int16_t x41 = INT16_MIN;
int32_t x47 = -1;
uint64_t x57 = 3611346979LLU;
static int8_t x59 = INT8_MAX;
volatile int32_t t18 = 2185;
uint8_t x90 = 6U;
volatile int32_t x92 = 5;
int32_t t19 = 7;
volatile int32_t x101 = INT32_MIN;
static int32_t t21 = 341653728;
uint8_t x112 = 14U;
int16_t x119 = INT16_MIN;
int32_t t24 = -988;
volatile uint64_t x125 = UINT64_MAX;
static int8_t x132 = 6;
int32_t t30 = 338299;
int32_t x160 = INT32_MAX;
uint8_t x161 = 0U;
int64_t x168 = INT64_MIN;
int8_t x169 = INT8_MAX;
int8_t x177 = INT8_MIN;
uint8_t x182 = 45U;
static int16_t x194 = INT16_MAX;
int8_t x195 = 1;
static int32_t t40 = 48;
int32_t x200 = 16058;
static volatile int32_t x205 = INT32_MIN;
int32_t x218 = INT32_MAX;
static int64_t x220 = -10945780585919978LL;
int16_t x222 = INT16_MIN;
static int64_t x243 = INT64_MIN;
int16_t x245 = INT16_MIN;
volatile int32_t t49 = -47766955;
uint8_t x249 = 1U;
uint8_t x261 = 11U;
static int32_t t53 = -204928152;
int32_t t55 = -1459288;
int32_t t58 = -18;
static int64_t x315 = INT64_MAX;
volatile int16_t x321 = INT16_MAX;
static volatile int32_t t63 = 1161210;
uint16_t x362 = 18072U;
static int32_t t67 = 1142857;
volatile uint64_t x388 = UINT64_MAX;
int8_t x395 = INT8_MIN;
static volatile int8_t x398 = INT8_MAX;
static uint32_t x400 = UINT32_MAX;
volatile int32_t t72 = 51;
volatile uint32_t x418 = 260773U;
volatile int32_t x438 = -1;
int64_t x441 = -18716150186682536LL;
static int32_t x443 = -8938976;
volatile int64_t x456 = INT64_MIN;
uint8_t x457 = 4U;
static int32_t t83 = -7851;
int16_t x468 = INT16_MAX;
static int64_t x484 = -47883378496LL;
volatile int64_t x486 = -1LL;
static int16_t x499 = 494;
int16_t x501 = -1;
uint64_t x503 = 789923841667LLU;
static int64_t x509 = INT64_MIN;
uint8_t x510 = UINT8_MAX;
uint8_t x511 = 63U;
int8_t x512 = INT8_MAX;
volatile int64_t x522 = INT64_MAX;
uint16_t x525 = UINT16_MAX;
static int8_t x527 = 17;
int64_t x539 = -1LL;
int32_t t98 = 2181;
int32_t t99 = 0;


void f0(void) {
	int64_t x1 = -1LL;
	volatile int16_t x2 = 11693;
	volatile int16_t x3 = -1;
	int8_t x4 = -22;

	t0 = (x1<=(x2/(x3%x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = -10706467030885LL;
	int16_t x7 = INT16_MIN;
	volatile int64_t x8 = 8274913242609LL;
	static volatile int32_t t1 = -8;

	t1 = (x5<=(x6/(x7%x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	int16_t x10 = -1;
	int8_t x11 = INT8_MIN;
	volatile uint64_t x12 = UINT64_MAX;

	t2 = (x9<=(x10/(x11%x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	uint32_t x14 = 1981472528U;
	uint32_t x15 = 382U;
	uint8_t x16 = 11U;
	int32_t t3 = -9834597;

	t3 = (x13<=(x14/(x15%x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = UINT64_MAX;
	int8_t x18 = 44;
	static uint16_t x20 = 115U;

	t4 = (x17<=(x18/(x19%x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	volatile int32_t x22 = INT32_MAX;
	int32_t x23 = INT32_MAX;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 12756;

	t5 = (x21<=(x22/(x23%x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int16_t x26 = -1;
	volatile int8_t x27 = INT8_MIN;
	static uint8_t x28 = 24U;
	static int32_t t6 = 10707;

	t6 = (x25<=(x26/(x27%x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = UINT64_MAX;
	uint64_t x30 = 95897977617585880LLU;
	uint16_t x31 = 17841U;
	int64_t x32 = INT64_MAX;

	t7 = (x29<=(x30/(x31%x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	uint32_t x34 = 945525623U;
	volatile int32_t t8 = 407;

	t8 = (x33<=(x34/(x35%x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	static int64_t x38 = -56332564996LL;
	int16_t x39 = INT16_MIN;
	volatile int32_t t9 = 1373;

	t9 = (x37<=(x38/(x39%x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x42 = 9U;
	volatile uint64_t x43 = 1LLU;
	uint64_t x44 = 198864935633652LLU;
	volatile int32_t t10 = 742;

	t10 = (x41<=(x42/(x43%x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	uint64_t x46 = 5436712197453LLU;
	volatile int64_t x48 = INT64_MIN;
	volatile int32_t t11 = 16795487;

	t11 = (x45<=(x46/(x47%x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x53 = 2;
	uint32_t x54 = 10734U;
	static int64_t x55 = INT64_MIN;
	static uint16_t x56 = 411U;
	volatile int32_t t12 = -30744;

	t12 = (x53<=(x54/(x55%x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x58 = UINT16_MAX;
	int32_t x60 = INT32_MIN;
	int32_t t13 = -3932776;

	t13 = (x57<=(x58/(x59%x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x69 = 41U;
	uint32_t x70 = UINT32_MAX;
	static int8_t x71 = INT8_MIN;
	int32_t x72 = -381400;
	volatile int32_t t14 = 94159158;

	t14 = (x69<=(x70/(x71%x72)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = INT64_MIN;
	static volatile int64_t x74 = 61857LL;
	int32_t x75 = -1;
	int8_t x76 = INT8_MIN;
	static volatile int32_t t15 = -23229865;

	t15 = (x73<=(x74/(x75%x76)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = UINT32_MAX;
	int32_t x78 = INT32_MIN;
	int32_t x79 = -123;
	int8_t x80 = 6;
	int32_t t16 = -766386;

	t16 = (x77<=(x78/(x79%x80)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MAX;
	int16_t x82 = -1;
	int64_t x83 = -250392629550864LL;
	int16_t x84 = -7056;
	volatile int32_t t17 = -1;

	t17 = (x81<=(x82/(x83%x84)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MAX;
	int32_t x86 = -1;
	volatile int64_t x87 = -1LL;
	volatile int16_t x88 = INT16_MIN;

	t18 = (x85<=(x86/(x87%x88)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = 15;
	static int16_t x91 = -1;

	t19 = (x89<=(x90/(x91%x92)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x97 = UINT64_MAX;
	uint8_t x98 = 1U;
	uint16_t x99 = UINT16_MAX;
	int16_t x100 = -215;
	int32_t t20 = -16544174;

	t20 = (x97<=(x98/(x99%x100)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x102 = INT16_MAX;
	uint32_t x103 = 119168U;
	int32_t x104 = INT32_MIN;

	t21 = (x101<=(x102/(x103%x104)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x109 = UINT32_MAX;
	static uint8_t x110 = 11U;
	int16_t x111 = INT16_MAX;
	volatile int32_t t22 = 3778;

	t22 = (x109<=(x110/(x111%x112)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x113 = 5656939U;
	uint64_t x114 = 526013LLU;
	int16_t x115 = INT16_MAX;
	int64_t x116 = INT64_MIN;
	int32_t t23 = -19712491;

	t23 = (x113<=(x114/(x115%x116)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x117 = INT32_MIN;
	int32_t x118 = INT32_MIN;
	uint32_t x120 = 61029U;

	t24 = (x117<=(x118/(x119%x120)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x121 = UINT8_MAX;
	volatile int16_t x122 = -4;
	int16_t x123 = INT16_MIN;
	int16_t x124 = 1872;
	int32_t t25 = -20;

	t25 = (x121<=(x122/(x123%x124)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x126 = INT32_MIN;
	uint32_t x127 = 499299158U;
	volatile int64_t x128 = 3484112459725LL;
	static volatile int32_t t26 = -411404546;

	t26 = (x125<=(x126/(x127%x128)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x129 = 947381;
	static volatile int32_t x130 = INT32_MIN;
	int8_t x131 = INT8_MAX;
	volatile int32_t t27 = -15456;

	t27 = (x129<=(x130/(x131%x132)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = INT16_MIN;
	static int64_t x134 = INT64_MAX;
	static uint64_t x135 = 14LLU;
	uint8_t x136 = UINT8_MAX;
	volatile int32_t t28 = 23;

	t28 = (x133<=(x134/(x135%x136)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x137 = 18U;
	static uint16_t x138 = 98U;
	int64_t x139 = 55273658927LL;
	static int16_t x140 = INT16_MIN;
	volatile int32_t t29 = 6704;

	t29 = (x137<=(x138/(x139%x140)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x145 = 1;
	static uint32_t x146 = UINT32_MAX;
	int8_t x147 = INT8_MAX;
	int16_t x148 = 72;

	t30 = (x145<=(x146/(x147%x148)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x153 = -1;
	uint16_t x154 = UINT16_MAX;
	uint64_t x155 = 398115211757LLU;
	int8_t x156 = INT8_MAX;
	volatile int32_t t31 = -7;

	t31 = (x153<=(x154/(x155%x156)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x157 = -97;
	static volatile int32_t x158 = 1627547;
	volatile int32_t x159 = -1;
	volatile int32_t t32 = -1312;

	t32 = (x157<=(x158/(x159%x160)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x162 = INT32_MAX;
	int8_t x163 = INT8_MIN;
	static volatile int64_t x164 = INT64_MIN;
	static int32_t t33 = 0;

	t33 = (x161<=(x162/(x163%x164)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x165 = INT32_MIN;
	int32_t x166 = INT32_MAX;
	int16_t x167 = INT16_MAX;
	int32_t t34 = 835873;

	t34 = (x165<=(x166/(x167%x168)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x170 = 24U;
	uint64_t x171 = 973875955680LLU;
	static int32_t x172 = -248993488;
	static volatile int32_t t35 = -7396;

	t35 = (x169<=(x170/(x171%x172)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x173 = INT64_MIN;
	static int64_t x174 = -1LL;
	volatile int64_t x175 = 1616759LL;
	uint16_t x176 = UINT16_MAX;
	volatile int32_t t36 = -115;

	t36 = (x173<=(x174/(x175%x176)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x178 = 9958U;
	uint32_t x179 = UINT32_MAX;
	int64_t x180 = INT64_MAX;
	static int32_t t37 = 1;

	t37 = (x177<=(x178/(x179%x180)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x181 = INT64_MIN;
	static uint64_t x183 = 15292LLU;
	uint64_t x184 = 6361096126883709404LLU;
	static int32_t t38 = -85170172;

	t38 = (x181<=(x182/(x183%x184)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x185 = 8431212477621592LLU;
	int16_t x186 = -1;
	int32_t x187 = INT32_MAX;
	int64_t x188 = INT64_MIN;
	volatile int32_t t39 = 71;

	t39 = (x185<=(x186/(x187%x188)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x193 = -1;
	volatile int16_t x196 = INT16_MIN;

	t40 = (x193<=(x194/(x195%x196)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x197 = 4932U;
	int8_t x198 = -1;
	uint64_t x199 = 129976885740LLU;
	int32_t t41 = -40380972;

	t41 = (x197<=(x198/(x199%x200)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x206 = UINT32_MAX;
	volatile uint32_t x207 = UINT32_MAX;
	int64_t x208 = INT64_MIN;
	int32_t t42 = 0;

	t42 = (x205<=(x206/(x207%x208)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x209 = INT32_MIN;
	int8_t x210 = INT8_MIN;
	int16_t x211 = INT16_MAX;
	int32_t x212 = INT32_MIN;
	volatile int32_t t43 = 6166154;

	t43 = (x209<=(x210/(x211%x212)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x213 = 11;
	static uint32_t x214 = 243745U;
	volatile uint16_t x215 = 6669U;
	int32_t x216 = -12515088;
	static volatile int32_t t44 = 16947;

	t44 = (x213<=(x214/(x215%x216)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x217 = INT8_MIN;
	int16_t x219 = 3;
	volatile int32_t t45 = -241726235;

	t45 = (x217<=(x218/(x219%x220)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x221 = INT32_MIN;
	int32_t x223 = 102;
	volatile int16_t x224 = -440;
	int32_t t46 = -113561;

	t46 = (x221<=(x222/(x223%x224)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x229 = -40;
	int64_t x230 = -304358743868181LL;
	int16_t x231 = INT16_MIN;
	int64_t x232 = -6LL;
	int32_t t47 = 0;

	t47 = (x229<=(x230/(x231%x232)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x241 = 12314U;
	static int8_t x242 = -1;
	int16_t x244 = -6;
	volatile int32_t t48 = 19;

	t48 = (x241<=(x242/(x243%x244)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x246 = 6U;
	static uint32_t x247 = UINT32_MAX;
	uint32_t x248 = 913419069U;

	t49 = (x245<=(x246/(x247%x248)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x250 = 229;
	uint64_t x251 = 48385115220953LLU;
	volatile int32_t x252 = INT32_MIN;
	int32_t t50 = -15538;

	t50 = (x249<=(x250/(x251%x252)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x262 = 0U;
	uint32_t x263 = 2U;
	int16_t x264 = -1;
	int32_t t51 = 91950;

	t51 = (x261<=(x262/(x263%x264)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x265 = 9358095943574LLU;
	int16_t x266 = -1;
	uint32_t x267 = 479U;
	int8_t x268 = INT8_MAX;
	static int32_t t52 = 729;

	t52 = (x265<=(x266/(x267%x268)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x269 = INT8_MIN;
	volatile uint32_t x270 = 6068U;
	int32_t x271 = 7266191;
	static int64_t x272 = 19957468LL;

	t53 = (x269<=(x270/(x271%x272)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x273 = -1;
	int8_t x274 = INT8_MIN;
	static int64_t x275 = INT64_MAX;
	static uint64_t x276 = 4166LLU;
	int32_t t54 = -19260;

	t54 = (x273<=(x274/(x275%x276)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x289 = 162LLU;
	volatile int8_t x290 = INT8_MAX;
	volatile int64_t x291 = -72716LL;
	int8_t x292 = INT8_MIN;

	t55 = (x289<=(x290/(x291%x292)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x293 = -102058677;
	uint64_t x294 = UINT64_MAX;
	static volatile uint64_t x295 = 7606LLU;
	int32_t x296 = INT32_MIN;
	volatile int32_t t56 = 1;

	t56 = (x293<=(x294/(x295%x296)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x301 = 21U;
	static volatile uint8_t x302 = 6U;
	int8_t x303 = 5;
	int16_t x304 = INT16_MAX;
	int32_t t57 = -242325;

	t57 = (x301<=(x302/(x303%x304)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x309 = INT8_MAX;
	int16_t x310 = INT16_MAX;
	volatile int32_t x311 = INT32_MAX;
	volatile int64_t x312 = -1037LL;

	t58 = (x309<=(x310/(x311%x312)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x313 = 73836951762776LLU;
	volatile uint64_t x314 = 6366749496726LLU;
	int64_t x316 = INT64_MIN;
	int32_t t59 = -250;

	t59 = (x313<=(x314/(x315%x316)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x322 = -1;
	uint32_t x323 = UINT32_MAX;
	uint16_t x324 = 3405U;
	volatile int32_t t60 = 68;

	t60 = (x321<=(x322/(x323%x324)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x333 = INT32_MIN;
	int8_t x334 = INT8_MIN;
	volatile int32_t x335 = -220;
	static uint64_t x336 = UINT64_MAX;
	int32_t t61 = 0;

	t61 = (x333<=(x334/(x335%x336)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x341 = UINT8_MAX;
	int16_t x342 = 15;
	uint32_t x343 = 1536U;
	uint32_t x344 = 5U;
	volatile int32_t t62 = -137;

	t62 = (x341<=(x342/(x343%x344)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x345 = INT32_MIN;
	uint8_t x346 = 32U;
	uint16_t x347 = UINT16_MAX;
	static int16_t x348 = INT16_MAX;

	t63 = (x345<=(x346/(x347%x348)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x349 = 1642;
	int32_t x350 = -1;
	uint64_t x351 = UINT64_MAX;
	static uint16_t x352 = 7U;
	static int32_t t64 = 6063;

	t64 = (x349<=(x350/(x351%x352)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x353 = UINT64_MAX;
	static uint8_t x354 = 1U;
	static int16_t x355 = 12459;
	static volatile int32_t x356 = INT32_MIN;
	volatile int32_t t65 = 203642916;

	t65 = (x353<=(x354/(x355%x356)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x361 = -1;
	int32_t x363 = INT32_MIN;
	static uint8_t x364 = UINT8_MAX;
	static volatile int32_t t66 = -112137273;

	t66 = (x361<=(x362/(x363%x364)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x377 = INT32_MAX;
	volatile int16_t x378 = -1;
	static volatile uint32_t x379 = 4U;
	static int64_t x380 = INT64_MAX;

	t67 = (x377<=(x378/(x379%x380)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x381 = UINT32_MAX;
	volatile int8_t x382 = INT8_MIN;
	uint16_t x383 = 3U;
	uint8_t x384 = UINT8_MAX;
	static volatile int32_t t68 = 1858;

	t68 = (x381<=(x382/(x383%x384)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x385 = UINT16_MAX;
	static int64_t x386 = INT64_MIN;
	uint8_t x387 = 4U;
	int32_t t69 = -2;

	t69 = (x385<=(x386/(x387%x388)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x389 = INT16_MIN;
	static int16_t x390 = INT16_MIN;
	static int16_t x391 = -1629;
	uint64_t x392 = 58LLU;
	volatile int32_t t70 = -161;

	t70 = (x389<=(x390/(x391%x392)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x393 = -479646;
	int32_t x394 = -1;
	static uint64_t x396 = UINT64_MAX;
	static int32_t t71 = -1;

	t71 = (x393<=(x394/(x395%x396)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x397 = -1LL;
	int64_t x399 = -78028882337LL;

	t72 = (x397<=(x398/(x399%x400)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x401 = INT32_MIN;
	static int16_t x402 = INT16_MIN;
	int16_t x403 = -1;
	static volatile int64_t x404 = -39LL;
	volatile int32_t t73 = -1109;

	t73 = (x401<=(x402/(x403%x404)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x413 = -14;
	volatile int8_t x414 = -1;
	uint32_t x415 = UINT32_MAX;
	uint64_t x416 = 69338415LLU;
	int32_t t74 = -9;

	t74 = (x413<=(x414/(x415%x416)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x417 = 6;
	int8_t x419 = INT8_MIN;
	uint16_t x420 = UINT16_MAX;
	volatile int32_t t75 = -640069708;

	t75 = (x417<=(x418/(x419%x420)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x429 = INT32_MIN;
	uint16_t x430 = UINT16_MAX;
	int64_t x431 = 43LL;
	volatile int64_t x432 = -1976265774LL;
	int32_t t76 = 64298;

	t76 = (x429<=(x430/(x431%x432)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x433 = INT8_MIN;
	static int32_t x434 = 491950;
	volatile uint64_t x435 = 576691292643382LLU;
	static int32_t x436 = -1;
	volatile int32_t t77 = -2133895;

	t77 = (x433<=(x434/(x435%x436)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x437 = INT64_MAX;
	volatile int8_t x439 = INT8_MIN;
	volatile uint16_t x440 = 9611U;
	volatile int32_t t78 = 1190992;

	t78 = (x437<=(x438/(x439%x440)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x442 = INT16_MIN;
	uint8_t x444 = 3U;
	int32_t t79 = -2127333;

	t79 = (x441<=(x442/(x443%x444)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x445 = INT64_MAX;
	int32_t x446 = INT32_MAX;
	static uint32_t x447 = UINT32_MAX;
	uint32_t x448 = 15915U;
	int32_t t80 = 1238699;

	t80 = (x445<=(x446/(x447%x448)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x453 = 0U;
	int32_t x454 = INT32_MAX;
	int32_t x455 = INT32_MAX;
	volatile int32_t t81 = 275890;

	t81 = (x453<=(x454/(x455%x456)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x458 = -7;
	int32_t x459 = INT32_MIN;
	int64_t x460 = 894492891637LL;
	static int32_t t82 = 0;

	t82 = (x457<=(x458/(x459%x460)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x461 = 464161811729517LLU;
	int64_t x462 = INT64_MAX;
	volatile int64_t x463 = INT64_MIN;
	int8_t x464 = 14;

	t83 = (x461<=(x462/(x463%x464)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x465 = INT8_MIN;
	int32_t x466 = -1;
	static uint64_t x467 = UINT64_MAX;
	int32_t t84 = 1;

	t84 = (x465<=(x466/(x467%x468)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x473 = INT8_MAX;
	uint16_t x474 = 32136U;
	static volatile int8_t x475 = INT8_MIN;
	volatile int32_t x476 = INT32_MAX;
	int32_t t85 = 9618;

	t85 = (x473<=(x474/(x475%x476)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x481 = -4098880527318960LL;
	int32_t x482 = -1620496;
	int16_t x483 = INT16_MIN;
	int32_t t86 = -3194;

	t86 = (x481<=(x482/(x483%x484)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x485 = -3525LL;
	uint64_t x487 = 6140577LLU;
	int64_t x488 = -55LL;
	volatile int32_t t87 = -633381381;

	t87 = (x485<=(x486/(x487%x488)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x489 = UINT32_MAX;
	int32_t x490 = -1;
	static int16_t x491 = 118;
	int8_t x492 = INT8_MIN;
	volatile int32_t t88 = -54695;

	t88 = (x489<=(x490/(x491%x492)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x497 = INT64_MAX;
	int8_t x498 = -18;
	volatile int16_t x500 = INT16_MAX;
	int32_t t89 = 0;

	t89 = (x497<=(x498/(x499%x500)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x502 = INT8_MIN;
	static uint8_t x504 = 5U;
	static volatile int32_t t90 = 4235447;

	t90 = (x501<=(x502/(x503%x504)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x505 = UINT32_MAX;
	int64_t x506 = -7094509574557750LL;
	static int32_t x507 = INT32_MAX;
	static uint32_t x508 = 36874U;
	volatile int32_t t91 = -12824;

	t91 = (x505<=(x506/(x507%x508)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t t92 = 4;

	t92 = (x509<=(x510/(x511%x512)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x517 = 1U;
	uint64_t x518 = 818424764LLU;
	uint64_t x519 = 215492245666LLU;
	static volatile int16_t x520 = INT16_MIN;
	int32_t t93 = 1;

	t93 = (x517<=(x518/(x519%x520)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x521 = UINT16_MAX;
	int16_t x523 = 1;
	int32_t x524 = INT32_MAX;
	int32_t t94 = 1;

	t94 = (x521<=(x522/(x523%x524)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x526 = INT8_MAX;
	int8_t x528 = INT8_MAX;
	volatile int32_t t95 = -18;

	t95 = (x525<=(x526/(x527%x528)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x537 = INT16_MIN;
	static int32_t x538 = INT32_MIN;
	int32_t x540 = -1137;
	static volatile int32_t t96 = -1;

	t96 = (x537<=(x538/(x539%x540)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x541 = 39U;
	static uint64_t x542 = 17460485501497824LLU;
	volatile int16_t x543 = -1;
	int16_t x544 = INT16_MIN;
	volatile int32_t t97 = -133;

	t97 = (x541<=(x542/(x543%x544)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x545 = 1931917462LL;
	static volatile int8_t x546 = INT8_MAX;
	uint32_t x547 = 5U;
	int64_t x548 = INT64_MAX;

	t98 = (x545<=(x546/(x547%x548)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x549 = INT32_MIN;
	int64_t x550 = -12268694LL;
	uint32_t x551 = UINT32_MAX;
	int32_t x552 = INT32_MIN;

	t99 = (x549<=(x550/(x551%x552)));

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


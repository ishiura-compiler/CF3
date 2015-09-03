#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x23 = INT16_MIN;
static int32_t t2 = 95521243;
volatile int32_t t3 = -18;
volatile uint8_t x29 = 8U;
int64_t x32 = 179400884LL;
volatile int32_t t5 = 3645;
int64_t x80 = INT64_MIN;
int16_t x83 = -1;
static int32_t t11 = -1;
uint32_t x111 = 6682U;
int8_t x119 = -1;
int64_t x128 = -777858539977559909LL;
volatile int32_t t19 = 16296;
uint16_t x133 = 511U;
uint64_t x157 = UINT64_MAX;
volatile int8_t x160 = INT8_MAX;
int8_t x161 = INT8_MIN;
static int8_t x165 = 51;
int16_t x178 = 3;
volatile int32_t t26 = -456928;
int8_t x189 = -1;
volatile int32_t x197 = INT32_MIN;
int32_t t31 = 2;
uint8_t x208 = UINT8_MAX;
int16_t x213 = -276;
static volatile int8_t x223 = -1;
static int8_t x224 = -1;
volatile int32_t t37 = 14093088;
uint32_t x239 = UINT32_MAX;
volatile int32_t t38 = -4283;
int32_t t39 = 22175607;
int32_t x249 = 13366;
int64_t x250 = -195767LL;
int8_t x252 = 0;
uint16_t x270 = 0U;
volatile uint32_t x274 = 28027U;
int8_t x275 = 12;
volatile int64_t x276 = -1LL;
int8_t x285 = 1;
uint64_t x290 = 244287482008888LLU;
static int16_t x298 = INT16_MAX;
volatile int32_t t45 = -6584149;
int32_t x301 = INT32_MAX;
volatile int32_t t51 = -1191;
int8_t x347 = -1;
static int32_t t54 = 3272;
uint16_t x352 = 27973U;
int32_t t56 = -5387908;
int8_t x360 = INT8_MIN;
static int8_t x368 = INT8_MIN;
volatile int32_t t58 = -1104;
int8_t x369 = INT8_MAX;
int32_t x372 = 0;
uint64_t x375 = 41144799LLU;
int32_t t62 = 833325;
static uint64_t x393 = UINT64_MAX;
static int8_t x395 = INT8_MIN;
static uint16_t x401 = UINT16_MAX;
volatile int32_t x406 = INT32_MIN;
volatile int64_t x407 = -17151LL;
static volatile int32_t t68 = 5;
volatile int64_t x420 = INT64_MIN;
int64_t x430 = 948115676LL;
uint64_t x446 = UINT64_MAX;
static int16_t x450 = -42;
volatile int8_t x462 = -1;
int64_t x464 = -83814437857LL;
int8_t x468 = INT8_MIN;
uint32_t x479 = 1012626283U;
int16_t x480 = INT16_MIN;
volatile int32_t t81 = 5220076;
int8_t x497 = -7;
int8_t x527 = 15;
int32_t x532 = -1;
int64_t x538 = 18438951288LL;
static uint16_t x545 = 5995U;
volatile int32_t x548 = -1;
static uint32_t x561 = 6U;
volatile int32_t t94 = 185;
volatile int16_t x580 = -1;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint64_t x2 = UINT64_MAX;
	int64_t x3 = INT64_MAX;
	int64_t x4 = INT64_MAX;
	static int32_t t0 = 3;

	t0 = (x1<((x2*x3)-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	uint64_t x6 = 18440491645835LLU;
	static uint16_t x7 = 292U;
	static int8_t x8 = INT8_MIN;
	int32_t t1 = 13346;

	t1 = (x5<((x6*x7)-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x21 = 15;
	static int64_t x22 = 106676903LL;
	static int32_t x24 = 1;

	t2 = (x21<((x22*x23)-x24));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = INT64_MAX;
	int16_t x26 = INT16_MIN;
	int8_t x27 = -1;
	static uint32_t x28 = 38743U;

	t3 = (x25<((x26*x27)-x28));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x30 = UINT64_MAX;
	int16_t x31 = -1;
	volatile int32_t t4 = 47036576;

	t4 = (x29<((x30*x31)-x32));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x45 = 15U;
	int16_t x46 = INT16_MAX;
	int32_t x47 = 0;
	int32_t x48 = INT32_MAX;

	t5 = (x45<((x46*x47)-x48));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x57 = 9U;
	uint32_t x58 = 2217425U;
	int32_t x59 = INT32_MIN;
	static int32_t x60 = 514103;
	volatile int32_t t6 = 435;

	t6 = (x57<((x58*x59)-x60));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x61 = INT32_MIN;
	int16_t x62 = 10291;
	int8_t x63 = INT8_MIN;
	int16_t x64 = -1;
	static int32_t t7 = 555;

	t7 = (x61<((x62*x63)-x64));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x69 = -11;
	int8_t x70 = INT8_MAX;
	int32_t x71 = 1;
	uint32_t x72 = UINT32_MAX;
	volatile int32_t t8 = 11;

	t8 = (x69<((x70*x71)-x72));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x77 = INT32_MIN;
	int16_t x78 = -1;
	volatile uint16_t x79 = UINT16_MAX;
	static volatile int32_t t9 = -4091628;

	t9 = (x77<((x78*x79)-x80));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x81 = INT32_MIN;
	uint16_t x82 = UINT16_MAX;
	int32_t x84 = 1092272;
	static int32_t t10 = 239111641;

	t10 = (x81<((x82*x83)-x84));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x85 = 2130773902U;
	volatile int32_t x86 = -1;
	volatile uint16_t x87 = 729U;
	uint16_t x88 = 4142U;

	t11 = (x85<((x86*x87)-x88));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x93 = -1;
	int8_t x94 = -1;
	int8_t x95 = -1;
	static uint16_t x96 = UINT16_MAX;
	volatile int32_t t12 = -19452553;

	t12 = (x93<((x94*x95)-x96));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x97 = 25;
	uint32_t x98 = UINT32_MAX;
	int8_t x99 = INT8_MAX;
	int32_t x100 = 207;
	volatile int32_t t13 = -816539891;

	t13 = (x97<((x98*x99)-x100));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x105 = 963729256019LL;
	static uint16_t x106 = 1245U;
	int8_t x107 = 13;
	uint32_t x108 = 1U;
	volatile int32_t t14 = 113159;

	t14 = (x105<((x106*x107)-x108));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x109 = 7;
	uint64_t x110 = 854514158508221759LLU;
	static int64_t x112 = INT64_MIN;
	volatile int32_t t15 = -7;

	t15 = (x109<((x110*x111)-x112));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x113 = INT8_MAX;
	uint32_t x114 = 10533801U;
	static uint64_t x115 = UINT64_MAX;
	static uint32_t x116 = UINT32_MAX;
	int32_t t16 = 469046376;

	t16 = (x113<((x114*x115)-x116));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x117 = -26;
	volatile uint32_t x118 = 6762176U;
	volatile uint32_t x120 = 216709794U;
	volatile int32_t t17 = -23004;

	t17 = (x117<((x118*x119)-x120));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x121 = INT8_MIN;
	uint64_t x122 = UINT64_MAX;
	int64_t x123 = -1LL;
	int8_t x124 = INT8_MIN;
	static int32_t t18 = 1;

	t18 = (x121<((x122*x123)-x124));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x125 = UINT8_MAX;
	uint16_t x126 = 208U;
	int16_t x127 = 0;

	t19 = (x125<((x126*x127)-x128));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x129 = 6320388;
	volatile uint64_t x130 = 793023659LLU;
	int64_t x131 = -1LL;
	static volatile int16_t x132 = -1;
	volatile int32_t t20 = 12;

	t20 = (x129<((x130*x131)-x132));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x134 = 674874110350LLU;
	int16_t x135 = INT16_MIN;
	volatile uint16_t x136 = 3622U;
	int32_t t21 = -29309452;

	t21 = (x133<((x134*x135)-x136));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x149 = -1;
	int32_t x150 = INT32_MIN;
	uint32_t x151 = 7878315U;
	static int64_t x152 = -1LL;
	volatile int32_t t22 = -916900707;

	t22 = (x149<((x150*x151)-x152));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x158 = 0U;
	int8_t x159 = -2;
	volatile int32_t t23 = -4065;

	t23 = (x157<((x158*x159)-x160));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x162 = -4051;
	uint16_t x163 = 1570U;
	uint16_t x164 = 1682U;
	volatile int32_t t24 = -198496895;

	t24 = (x161<((x162*x163)-x164));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x166 = 1;
	int8_t x167 = INT8_MIN;
	static int32_t x168 = -20659811;
	int32_t t25 = 1;

	t25 = (x165<((x166*x167)-x168));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x177 = 14811U;
	int16_t x179 = INT16_MIN;
	int16_t x180 = 6204;

	t26 = (x177<((x178*x179)-x180));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x185 = INT64_MIN;
	uint64_t x186 = 3639LLU;
	int8_t x187 = -6;
	uint16_t x188 = 22U;
	static volatile int32_t t27 = -40000;

	t27 = (x185<((x186*x187)-x188));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x190 = 7375LLU;
	int64_t x191 = -1LL;
	int8_t x192 = INT8_MAX;
	volatile int32_t t28 = 17611;

	t28 = (x189<((x190*x191)-x192));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x193 = 1431U;
	int32_t x194 = 350710665;
	static volatile int8_t x195 = -2;
	static int32_t x196 = INT32_MIN;
	int32_t t29 = 501108217;

	t29 = (x193<((x194*x195)-x196));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x198 = 1508U;
	int8_t x199 = 5;
	int8_t x200 = 10;
	volatile int32_t t30 = -3;

	t30 = (x197<((x198*x199)-x200));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x201 = UINT32_MAX;
	uint64_t x202 = UINT64_MAX;
	volatile int8_t x203 = INT8_MAX;
	volatile uint64_t x204 = 3094734LLU;

	t31 = (x201<((x202*x203)-x204));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x205 = -1;
	static int32_t x206 = 1844;
	int32_t x207 = -1;
	volatile int32_t t32 = 42988;

	t32 = (x205<((x206*x207)-x208));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x209 = UINT8_MAX;
	uint16_t x210 = 13294U;
	int8_t x211 = 1;
	static int64_t x212 = 7345332LL;
	static volatile int32_t t33 = -783;

	t33 = (x209<((x210*x211)-x212));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x214 = -957610668LL;
	static int8_t x215 = INT8_MIN;
	static int32_t x216 = -1;
	static volatile int32_t t34 = -874969;

	t34 = (x213<((x214*x215)-x216));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x221 = -3221;
	static uint32_t x222 = UINT32_MAX;
	static int32_t t35 = 20655503;

	t35 = (x221<((x222*x223)-x224));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x225 = INT32_MIN;
	uint64_t x226 = 3LLU;
	uint64_t x227 = 14900269073619989LLU;
	uint16_t x228 = 1U;
	static volatile int32_t t36 = -16;

	t36 = (x225<((x226*x227)-x228));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x229 = 32U;
	volatile int16_t x230 = INT16_MIN;
	static int16_t x231 = 465;
	volatile uint64_t x232 = 3006LLU;

	t37 = (x229<((x230*x231)-x232));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x237 = INT8_MIN;
	int8_t x238 = -45;
	int16_t x240 = -7;

	t38 = (x237<((x238*x239)-x240));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x245 = 24296;
	uint32_t x246 = 258518U;
	static volatile uint8_t x247 = 38U;
	static int32_t x248 = INT32_MAX;

	t39 = (x245<((x246*x247)-x248));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x251 = 2692;
	static volatile int32_t t40 = 992400653;

	t40 = (x249<((x250*x251)-x252));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x269 = INT16_MAX;
	int64_t x271 = INT64_MAX;
	int8_t x272 = INT8_MAX;
	int32_t t41 = 2;

	t41 = (x269<((x270*x271)-x272));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x273 = -1;
	volatile int32_t t42 = 0;

	t42 = (x273<((x274*x275)-x276));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x286 = -17;
	static int16_t x287 = -1;
	uint8_t x288 = 1U;
	int32_t t43 = 1;

	t43 = (x285<((x286*x287)-x288));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x289 = UINT64_MAX;
	int8_t x291 = 1;
	static uint32_t x292 = 179U;
	static int32_t t44 = -85755777;

	t44 = (x289<((x290*x291)-x292));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x297 = INT8_MIN;
	int64_t x299 = -1LL;
	uint32_t x300 = UINT32_MAX;

	t45 = (x297<((x298*x299)-x300));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x302 = -27230173223984LL;
	volatile int16_t x303 = INT16_MAX;
	int32_t x304 = -7373150;
	int32_t t46 = 809;

	t46 = (x301<((x302*x303)-x304));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x305 = 3089U;
	uint16_t x306 = UINT16_MAX;
	int8_t x307 = INT8_MIN;
	int64_t x308 = -1LL;
	static int32_t t47 = 141;

	t47 = (x305<((x306*x307)-x308));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x309 = 181;
	int32_t x310 = -6;
	int16_t x311 = INT16_MAX;
	volatile uint32_t x312 = UINT32_MAX;
	static int32_t t48 = -5886;

	t48 = (x309<((x310*x311)-x312));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x317 = 7506;
	int64_t x318 = 476258164617047LL;
	int8_t x319 = -4;
	uint64_t x320 = 33682208LLU;
	static int32_t t49 = 713903;

	t49 = (x317<((x318*x319)-x320));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x321 = 1528117968719LL;
	uint32_t x322 = UINT32_MAX;
	int16_t x323 = -25;
	volatile uint32_t x324 = 14U;
	int32_t t50 = -875919;

	t50 = (x321<((x322*x323)-x324));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x329 = UINT32_MAX;
	static uint64_t x330 = UINT64_MAX;
	int32_t x331 = 2577;
	uint16_t x332 = UINT16_MAX;

	t51 = (x329<((x330*x331)-x332));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x333 = 106823790;
	uint32_t x334 = UINT32_MAX;
	volatile int8_t x335 = INT8_MIN;
	uint8_t x336 = UINT8_MAX;
	int32_t t52 = -802;

	t52 = (x333<((x334*x335)-x336));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x341 = 374308057427LL;
	volatile int16_t x342 = 5;
	uint16_t x343 = UINT16_MAX;
	static int64_t x344 = -1LL;
	volatile int32_t t53 = 49612;

	t53 = (x341<((x342*x343)-x344));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x345 = 642023476028068157LLU;
	uint64_t x346 = UINT64_MAX;
	int8_t x348 = -1;

	t54 = (x345<((x346*x347)-x348));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x349 = 3U;
	static int64_t x350 = -999764670LL;
	uint16_t x351 = 1U;
	int32_t t55 = -23;

	t55 = (x349<((x350*x351)-x352));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x353 = INT16_MIN;
	static int16_t x354 = -1;
	int8_t x355 = INT8_MIN;
	int64_t x356 = -108494684LL;

	t56 = (x353<((x354*x355)-x356));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x357 = INT64_MIN;
	static int16_t x358 = INT16_MAX;
	int8_t x359 = 2;
	volatile int32_t t57 = -3520;

	t57 = (x357<((x358*x359)-x360));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x365 = 407;
	static int16_t x366 = INT16_MIN;
	volatile int16_t x367 = -1;

	t58 = (x365<((x366*x367)-x368));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x370 = 7U;
	uint64_t x371 = UINT64_MAX;
	volatile int32_t t59 = 11120573;

	t59 = (x369<((x370*x371)-x372));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x373 = 5663411917902LLU;
	int64_t x374 = INT64_MIN;
	uint64_t x376 = 154377283988LLU;
	volatile int32_t t60 = 2775;

	t60 = (x373<((x374*x375)-x376));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x381 = 77046945LLU;
	uint64_t x382 = UINT64_MAX;
	int64_t x383 = INT64_MIN;
	int8_t x384 = INT8_MAX;
	volatile int32_t t61 = 2;

	t61 = (x381<((x382*x383)-x384));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x385 = INT16_MIN;
	int8_t x386 = INT8_MAX;
	static volatile uint32_t x387 = 26U;
	static volatile uint8_t x388 = 3U;

	t62 = (x385<((x386*x387)-x388));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x389 = 104;
	static volatile uint32_t x390 = 3499U;
	static uint8_t x391 = UINT8_MAX;
	volatile uint16_t x392 = UINT16_MAX;
	volatile int32_t t63 = 42;

	t63 = (x389<((x390*x391)-x392));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x394 = INT8_MIN;
	uint16_t x396 = 10U;
	volatile int32_t t64 = 969;

	t64 = (x393<((x394*x395)-x396));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x397 = 83U;
	uint64_t x398 = 60352935391555821LLU;
	uint64_t x399 = UINT64_MAX;
	int8_t x400 = -2;
	volatile int32_t t65 = -1;

	t65 = (x397<((x398*x399)-x400));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x402 = -1;
	uint64_t x403 = UINT64_MAX;
	int8_t x404 = INT8_MIN;
	int32_t t66 = 0;

	t66 = (x401<((x402*x403)-x404));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x405 = 63956176LLU;
	int16_t x408 = INT16_MIN;
	static int32_t t67 = -6910872;

	t67 = (x405<((x406*x407)-x408));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x409 = UINT16_MAX;
	int16_t x410 = -1;
	int64_t x411 = 0LL;
	static uint32_t x412 = 59U;

	t68 = (x409<((x410*x411)-x412));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x417 = -576990853LL;
	static uint64_t x418 = 31588490318212200LLU;
	int64_t x419 = -1LL;
	int32_t t69 = -20786;

	t69 = (x417<((x418*x419)-x420));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x425 = -1;
	int16_t x426 = INT16_MIN;
	int8_t x427 = -40;
	int16_t x428 = -1;
	volatile int32_t t70 = -27;

	t70 = (x425<((x426*x427)-x428));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x429 = -21697978414LL;
	static int16_t x431 = -1;
	uint64_t x432 = 6546235LLU;
	volatile int32_t t71 = 49098315;

	t71 = (x429<((x430*x431)-x432));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x437 = -1;
	int16_t x438 = INT16_MIN;
	volatile uint32_t x439 = UINT32_MAX;
	int16_t x440 = 102;
	int32_t t72 = 7103034;

	t72 = (x437<((x438*x439)-x440));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x441 = INT64_MAX;
	int8_t x442 = INT8_MIN;
	int8_t x443 = INT8_MIN;
	int64_t x444 = 346646773465647015LL;
	static volatile int32_t t73 = -3377;

	t73 = (x441<((x442*x443)-x444));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x445 = -1LL;
	static int8_t x447 = -17;
	uint64_t x448 = 1001106509446LLU;
	static int32_t t74 = -782;

	t74 = (x445<((x446*x447)-x448));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x449 = 2587;
	static uint16_t x451 = 6U;
	uint16_t x452 = UINT16_MAX;
	static volatile int32_t t75 = 1483;

	t75 = (x449<((x450*x451)-x452));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x457 = 8U;
	int64_t x458 = 6354409LL;
	volatile uint64_t x459 = UINT64_MAX;
	static int8_t x460 = -5;
	int32_t t76 = -18;

	t76 = (x457<((x458*x459)-x460));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x461 = -1;
	volatile uint16_t x463 = 2U;
	volatile int32_t t77 = 186;

	t77 = (x461<((x462*x463)-x464));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x465 = INT32_MAX;
	int8_t x466 = INT8_MIN;
	int16_t x467 = INT16_MIN;
	int32_t t78 = 1;

	t78 = (x465<((x466*x467)-x468));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x469 = 0U;
	int16_t x470 = INT16_MIN;
	uint8_t x471 = UINT8_MAX;
	int64_t x472 = -1LL;
	volatile int32_t t79 = 1915689;

	t79 = (x469<((x470*x471)-x472));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x473 = INT8_MIN;
	uint8_t x474 = 6U;
	volatile int16_t x475 = INT16_MAX;
	static int64_t x476 = -4024LL;
	int32_t t80 = 3;

	t80 = (x473<((x474*x475)-x476));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x477 = 19U;
	int8_t x478 = INT8_MIN;

	t81 = (x477<((x478*x479)-x480));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x485 = 6U;
	uint64_t x486 = 21458LLU;
	volatile uint32_t x487 = 3371U;
	int16_t x488 = 3;
	volatile int32_t t82 = 462649199;

	t82 = (x485<((x486*x487)-x488));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x493 = UINT8_MAX;
	uint16_t x494 = UINT16_MAX;
	volatile uint32_t x495 = UINT32_MAX;
	static volatile uint8_t x496 = UINT8_MAX;
	int32_t t83 = 0;

	t83 = (x493<((x494*x495)-x496));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x498 = INT32_MIN;
	static uint64_t x499 = 3508330019914188216LLU;
	int8_t x500 = 46;
	int32_t t84 = -355962;

	t84 = (x497<((x498*x499)-x500));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x505 = 1703515066LL;
	static uint64_t x506 = 783018859299LLU;
	int16_t x507 = 200;
	int8_t x508 = INT8_MIN;
	volatile int32_t t85 = -7039359;

	t85 = (x505<((x506*x507)-x508));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x509 = INT64_MIN;
	int8_t x510 = INT8_MAX;
	static volatile uint8_t x511 = 35U;
	static uint16_t x512 = UINT16_MAX;
	int32_t t86 = -1352173;

	t86 = (x509<((x510*x511)-x512));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x513 = UINT64_MAX;
	int16_t x514 = 262;
	int16_t x515 = 182;
	static int64_t x516 = -1LL;
	static volatile int32_t t87 = -36703567;

	t87 = (x513<((x514*x515)-x516));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x521 = INT16_MIN;
	static int16_t x522 = 2;
	int32_t x523 = -193;
	int32_t x524 = -1;
	volatile int32_t t88 = -6768547;

	t88 = (x521<((x522*x523)-x524));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x525 = 1U;
	static uint16_t x526 = 162U;
	int64_t x528 = INT64_MAX;
	int32_t t89 = -1;

	t89 = (x525<((x526*x527)-x528));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x529 = 2;
	static int64_t x530 = INT64_MIN;
	volatile uint64_t x531 = 109879754657839694LLU;
	int32_t t90 = 2;

	t90 = (x529<((x530*x531)-x532));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x537 = 3577U;
	static uint64_t x539 = 12230160LLU;
	uint16_t x540 = UINT16_MAX;
	volatile int32_t t91 = 0;

	t91 = (x537<((x538*x539)-x540));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x546 = 116;
	uint32_t x547 = 5212U;
	static int32_t t92 = -20;

	t92 = (x545<((x546*x547)-x548));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x562 = INT8_MIN;
	uint64_t x563 = 552161030057421522LLU;
	volatile int16_t x564 = -3;
	volatile int32_t t93 = 46321;

	t93 = (x561<((x562*x563)-x564));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x565 = 480460LLU;
	int16_t x566 = INT16_MAX;
	volatile int64_t x567 = 3871151178283LL;
	int16_t x568 = INT16_MAX;

	t94 = (x565<((x566*x567)-x568));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x569 = 495U;
	int8_t x570 = INT8_MAX;
	volatile int32_t x571 = -86;
	static int16_t x572 = INT16_MIN;
	volatile int32_t t95 = 2;

	t95 = (x569<((x570*x571)-x572));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x573 = INT16_MIN;
	static uint32_t x574 = 298U;
	int32_t x575 = -79;
	int8_t x576 = INT8_MAX;
	volatile int32_t t96 = -2571651;

	t96 = (x573<((x574*x575)-x576));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x577 = INT64_MIN;
	int16_t x578 = -1;
	int32_t x579 = INT32_MAX;
	volatile int32_t t97 = 10452652;

	t97 = (x577<((x578*x579)-x580));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x581 = 163722;
	volatile uint16_t x582 = 4878U;
	int16_t x583 = INT16_MIN;
	uint16_t x584 = 54U;
	static volatile int32_t t98 = -1734;

	t98 = (x581<((x582*x583)-x584));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x585 = INT16_MIN;
	int64_t x586 = -1LL;
	volatile uint16_t x587 = 255U;
	static volatile uint64_t x588 = 64711603224LLU;
	int32_t t99 = -4;

	t99 = (x585<((x586*x587)-x588));

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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x1 = 10LLU;
uint64_t x3 = 2792865653790LLU;
uint8_t x5 = UINT8_MAX;
int8_t x6 = INT8_MIN;
int64_t x9 = -1LL;
static int32_t x11 = 47;
uint32_t x12 = UINT32_MAX;
int16_t x20 = INT16_MIN;
uint64_t x27 = 30074194666614183LLU;
volatile uint64_t x40 = 2882LLU;
static int32_t x42 = -1;
int64_t x44 = INT64_MIN;
volatile int32_t t8 = -8181629;
static int16_t x50 = 6671;
static int32_t x51 = INT32_MIN;
volatile uint8_t x55 = UINT8_MAX;
volatile int32_t t11 = -225096;
volatile int8_t x57 = INT8_MAX;
int64_t x63 = INT64_MIN;
int64_t x64 = INT64_MAX;
volatile uint16_t x65 = 3286U;
volatile int32_t t14 = -31;
static int8_t x70 = 13;
volatile int16_t x71 = 1;
uint32_t x74 = UINT32_MAX;
volatile int16_t x75 = -1;
int32_t t16 = 5787648;
int16_t x77 = 1665;
int8_t x84 = INT8_MIN;
int32_t t19 = -30178729;
int8_t x94 = -1;
uint8_t x95 = 1U;
int8_t x101 = INT8_MIN;
int8_t x104 = -35;
volatile int16_t x110 = INT16_MIN;
static int8_t x115 = INT8_MIN;
volatile int32_t t24 = -61649430;
uint64_t x117 = 27883171479568LLU;
volatile int32_t t26 = 29381;
static int16_t x158 = INT16_MAX;
int8_t x161 = -63;
volatile int64_t x165 = INT64_MIN;
volatile int32_t t32 = -53479;
int64_t x173 = INT64_MAX;
uint64_t x185 = UINT64_MAX;
volatile int32_t x186 = 121;
volatile int8_t x187 = -1;
int32_t t37 = -1848286;
int32_t t38 = -159;
static int8_t x197 = 14;
int8_t x199 = INT8_MIN;
volatile int32_t t39 = 2170322;
static uint32_t x203 = 0U;
int8_t x204 = INT8_MAX;
volatile int32_t t40 = 2780;
int32_t x219 = INT32_MIN;
volatile int32_t t42 = -5;
volatile uint64_t x221 = UINT64_MAX;
uint32_t x222 = 1942U;
int8_t x230 = INT8_MIN;
static volatile uint16_t x231 = UINT16_MAX;
uint8_t x241 = 1U;
volatile int8_t x243 = INT8_MIN;
uint16_t x246 = UINT16_MAX;
int32_t x259 = -1;
int64_t x271 = -11LL;
uint64_t x273 = 118824LLU;
int32_t x287 = -3557;
static int16_t x289 = INT16_MIN;
int16_t x291 = -1;
int64_t x296 = 222LL;
static int32_t x297 = INT32_MAX;
static volatile int32_t t60 = 181;
static int8_t x318 = -6;
static int32_t x324 = -210484;
volatile int32_t t62 = -21072;
int64_t x326 = INT64_MAX;
static int16_t x327 = -1;
uint8_t x335 = UINT8_MAX;
int32_t t65 = -18;
int8_t x339 = -1;
volatile uint16_t x343 = UINT16_MAX;
static int64_t x357 = -707LL;
int16_t x360 = INT16_MIN;
int32_t t68 = 43504586;
uint16_t x361 = 1U;
static int64_t x367 = 1LL;
int32_t t70 = -250455;
volatile int64_t x369 = -102948LL;
uint8_t x378 = 39U;
int32_t x381 = -423499106;
static int16_t x391 = -780;
static int32_t t75 = 1943;
static uint64_t x394 = UINT64_MAX;
static uint8_t x398 = 21U;
static uint16_t x400 = UINT16_MAX;
int32_t t78 = 10896;
static int64_t x405 = INT64_MAX;
int16_t x408 = INT16_MAX;
uint64_t x411 = UINT64_MAX;
uint64_t x413 = 17376016207526LLU;
int64_t x414 = -1LL;
int16_t x418 = -1;
int8_t x422 = -1;
static int32_t t83 = -117;
static int32_t x441 = INT32_MIN;
static int16_t x442 = INT16_MIN;
static int32_t x447 = INT32_MAX;
volatile int64_t x457 = INT64_MIN;
static int16_t x459 = 1;
uint64_t x460 = 5894365LLU;
int64_t x461 = INT64_MIN;
int8_t x462 = -1;
volatile int64_t x477 = -5222739057663999LL;
int16_t x511 = INT16_MIN;
int32_t t95 = 48939;
int8_t x523 = -1;
static volatile int32_t t98 = -274288;
static volatile int8_t x529 = INT8_MIN;
uint8_t x532 = UINT8_MAX;


void f0(void) {
	int32_t x2 = 461454101;
	int64_t x4 = -2015327851LL;
	volatile int32_t t0 = -398;

	t0 = (x1<(x2*(x3+x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x7 = -5;
	int32_t x8 = -1;
	int32_t t1 = -162145060;

	t1 = (x5<(x6*(x7+x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = 8815;
	int32_t t2 = -320135;

	t2 = (x9<(x10*(x11+x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 323U;
	static volatile int16_t x14 = INT16_MAX;
	volatile int16_t x15 = 10033;
	uint8_t x16 = UINT8_MAX;
	int32_t t3 = -199033;

	t3 = (x13<(x14*(x15+x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	volatile int16_t x18 = -98;
	uint64_t x19 = UINT64_MAX;
	volatile int32_t t4 = 5;

	t4 = (x17<(x18*(x19+x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	int8_t x22 = 1;
	int32_t x23 = 170;
	int64_t x24 = 118060532889LL;
	volatile int32_t t5 = 400373751;

	t5 = (x21<(x22*(x23+x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 81U;
	int8_t x26 = INT8_MAX;
	int8_t x28 = 3;
	int32_t t6 = 230590032;

	t6 = (x25<(x26*(x27+x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = UINT32_MAX;
	int32_t x38 = -1;
	uint32_t x39 = 179826U;
	static int32_t t7 = 113411848;

	t7 = (x37<(x38*(x39+x40)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = 56U;
	uint64_t x43 = UINT64_MAX;

	t8 = (x41<(x42*(x43+x44)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = 12121;
	volatile uint8_t x46 = 0U;
	static uint8_t x47 = 87U;
	static uint32_t x48 = UINT32_MAX;
	volatile int32_t t9 = -129133313;

	t9 = (x45<(x46*(x47+x48)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x49 = -3751;
	static int32_t x52 = INT32_MAX;
	static int32_t t10 = -21592040;

	t10 = (x49<(x50*(x51+x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x53 = -1LL;
	int32_t x54 = -1;
	volatile int16_t x56 = 15228;

	t11 = (x53<(x54*(x55+x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x58 = 21;
	int8_t x59 = -26;
	int8_t x60 = -1;
	int32_t t12 = -948678284;

	t12 = (x57<(x58*(x59+x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x61 = -1LL;
	volatile uint8_t x62 = 19U;
	volatile int32_t t13 = 4;

	t13 = (x61<(x62*(x63+x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x66 = 195052011LLU;
	uint8_t x67 = UINT8_MAX;
	static int16_t x68 = -15779;

	t14 = (x65<(x66*(x67+x68)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = 1;
	static int16_t x72 = -1474;
	static int32_t t15 = -3320;

	t15 = (x69<(x70*(x71+x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MIN;
	uint8_t x76 = 2U;

	t16 = (x73<(x74*(x75+x76)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x78 = UINT32_MAX;
	volatile int64_t x79 = INT64_MIN;
	uint64_t x80 = UINT64_MAX;
	volatile int32_t t17 = 646390;

	t17 = (x77<(x78*(x79+x80)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = INT32_MIN;
	int32_t x82 = -1;
	int32_t x83 = INT32_MAX;
	static volatile int32_t t18 = -2;

	t18 = (x81<(x82*(x83+x84)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = INT16_MIN;
	int16_t x86 = -1;
	int32_t x87 = INT32_MIN;
	static uint16_t x88 = UINT16_MAX;

	t19 = (x85<(x86*(x87+x88)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = UINT16_MAX;
	int16_t x90 = INT16_MIN;
	static int8_t x91 = -7;
	int16_t x92 = -1;
	static int32_t t20 = -2;

	t20 = (x89<(x90*(x91+x92)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x93 = -1985165965428043430LL;
	int64_t x96 = -20286098566LL;
	int32_t t21 = 32641764;

	t21 = (x93<(x94*(x95+x96)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x102 = INT32_MIN;
	volatile uint32_t x103 = UINT32_MAX;
	static volatile int32_t t22 = -26746;

	t22 = (x101<(x102*(x103+x104)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x109 = -1;
	volatile uint16_t x111 = 1768U;
	int8_t x112 = -1;
	int32_t t23 = -9;

	t23 = (x109<(x110*(x111+x112)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x113 = INT8_MAX;
	uint16_t x114 = 5U;
	int8_t x116 = -1;

	t24 = (x113<(x114*(x115+x116)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x118 = -1LL;
	uint64_t x119 = 69LLU;
	int32_t x120 = 49;
	volatile int32_t t25 = -1;

	t25 = (x117<(x118*(x119+x120)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x121 = 563U;
	volatile int16_t x122 = 1;
	uint32_t x123 = 64185U;
	static int64_t x124 = -5927487359901137LL;

	t26 = (x121<(x122*(x123+x124)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x125 = UINT32_MAX;
	uint64_t x126 = UINT64_MAX;
	int64_t x127 = 147LL;
	volatile int64_t x128 = INT64_MIN;
	static int32_t t27 = -997065958;

	t27 = (x125<(x126*(x127+x128)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x149 = UINT8_MAX;
	uint8_t x150 = UINT8_MAX;
	uint32_t x151 = UINT32_MAX;
	static int32_t x152 = INT32_MIN;
	volatile int32_t t28 = -3535643;

	t28 = (x149<(x150*(x151+x152)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x153 = -1LL;
	uint16_t x154 = 237U;
	int8_t x155 = 1;
	int16_t x156 = INT16_MIN;
	int32_t t29 = 20494314;

	t29 = (x153<(x154*(x155+x156)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x157 = INT16_MIN;
	volatile int32_t x159 = -1;
	volatile uint16_t x160 = 24U;
	int32_t t30 = 1;

	t30 = (x157<(x158*(x159+x160)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x162 = 4U;
	uint64_t x163 = UINT64_MAX;
	volatile uint16_t x164 = 1U;
	int32_t t31 = 7071;

	t31 = (x161<(x162*(x163+x164)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x166 = 1564;
	int16_t x167 = INT16_MIN;
	int32_t x168 = -1;

	t32 = (x165<(x166*(x167+x168)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x174 = 793323U;
	uint16_t x175 = UINT16_MAX;
	int16_t x176 = -1;
	int32_t t33 = 83932645;

	t33 = (x173<(x174*(x175+x176)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x177 = 0;
	int32_t x178 = -33;
	static volatile uint64_t x179 = 45307471LLU;
	uint32_t x180 = UINT32_MAX;
	int32_t t34 = -14991774;

	t34 = (x177<(x178*(x179+x180)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x181 = INT16_MAX;
	int8_t x182 = INT8_MIN;
	int16_t x183 = INT16_MIN;
	int32_t x184 = 12058410;
	int32_t t35 = 92049346;

	t35 = (x181<(x182*(x183+x184)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x188 = 18U;
	volatile int32_t t36 = -2796503;

	t36 = (x185<(x186*(x187+x188)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x189 = INT64_MAX;
	uint8_t x190 = 2U;
	uint16_t x191 = UINT16_MAX;
	volatile uint16_t x192 = 14203U;

	t37 = (x189<(x190*(x191+x192)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x193 = -1;
	static int8_t x194 = INT8_MIN;
	int16_t x195 = INT16_MIN;
	static int16_t x196 = INT16_MAX;

	t38 = (x193<(x194*(x195+x196)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x198 = 3809;
	uint8_t x200 = UINT8_MAX;

	t39 = (x197<(x198*(x199+x200)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x201 = 14U;
	int64_t x202 = 2745329046061LL;

	t40 = (x201<(x202*(x203+x204)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x209 = INT8_MAX;
	static uint32_t x210 = 20954006U;
	int8_t x211 = -3;
	int8_t x212 = 20;
	int32_t t41 = 117;

	t41 = (x209<(x210*(x211+x212)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x217 = INT32_MIN;
	static int32_t x218 = 0;
	int32_t x220 = 72767868;

	t42 = (x217<(x218*(x219+x220)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x223 = 6U;
	volatile int16_t x224 = INT16_MAX;
	int32_t t43 = 16096;

	t43 = (x221<(x222*(x223+x224)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x229 = 5;
	volatile int32_t x232 = -62;
	volatile int32_t t44 = 5;

	t44 = (x229<(x230*(x231+x232)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x237 = UINT16_MAX;
	int32_t x238 = 1845190;
	static volatile int64_t x239 = -1LL;
	int8_t x240 = INT8_MAX;
	volatile int32_t t45 = -35128067;

	t45 = (x237<(x238*(x239+x240)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x242 = 1945204458457LLU;
	volatile int32_t x244 = -1;
	int32_t t46 = -23805;

	t46 = (x241<(x242*(x243+x244)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x245 = 19;
	static int64_t x247 = INT64_MAX;
	uint64_t x248 = 10659552LLU;
	volatile int32_t t47 = 2;

	t47 = (x245<(x246*(x247+x248)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x253 = 0;
	uint64_t x254 = 2052665244153365067LLU;
	uint64_t x255 = 823634664110022583LLU;
	static int16_t x256 = INT16_MIN;
	volatile int32_t t48 = 78;

	t48 = (x253<(x254*(x255+x256)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x257 = UINT16_MAX;
	int16_t x258 = INT16_MIN;
	int32_t x260 = 382;
	int32_t t49 = 416259691;

	t49 = (x257<(x258*(x259+x260)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x261 = -7;
	static int32_t x262 = 16004;
	int8_t x263 = 60;
	static volatile uint64_t x264 = 22070LLU;
	int32_t t50 = -27006054;

	t50 = (x261<(x262*(x263+x264)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x265 = 5;
	int16_t x266 = 407;
	int64_t x267 = 32763764791102LL;
	volatile int32_t x268 = 7664;
	int32_t t51 = 8055078;

	t51 = (x265<(x266*(x267+x268)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x269 = UINT32_MAX;
	uint16_t x270 = 685U;
	volatile int16_t x272 = INT16_MIN;
	static volatile int32_t t52 = 655572823;

	t52 = (x269<(x270*(x271+x272)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x274 = 31U;
	int16_t x275 = -2;
	uint8_t x276 = UINT8_MAX;
	int32_t t53 = 15567;

	t53 = (x273<(x274*(x275+x276)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x281 = -1;
	uint8_t x282 = UINT8_MAX;
	int8_t x283 = INT8_MIN;
	volatile int8_t x284 = -1;
	int32_t t54 = 60936007;

	t54 = (x281<(x282*(x283+x284)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x285 = INT64_MIN;
	int32_t x286 = -9102;
	volatile uint16_t x288 = UINT16_MAX;
	volatile int32_t t55 = 133992553;

	t55 = (x285<(x286*(x287+x288)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x290 = 28881319045614LLU;
	volatile uint64_t x292 = UINT64_MAX;
	volatile int32_t t56 = 69104891;

	t56 = (x289<(x290*(x291+x292)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x293 = 1964193;
	static uint64_t x294 = UINT64_MAX;
	uint16_t x295 = 7U;
	volatile int32_t t57 = 75;

	t57 = (x293<(x294*(x295+x296)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x298 = -1;
	static int8_t x299 = INT8_MIN;
	int64_t x300 = -193040965435LL;
	int32_t t58 = -28701;

	t58 = (x297<(x298*(x299+x300)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x305 = -1LL;
	static int32_t x306 = INT32_MIN;
	static volatile uint32_t x307 = 36570U;
	int16_t x308 = -4;
	int32_t t59 = 1202;

	t59 = (x305<(x306*(x307+x308)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x309 = INT64_MAX;
	uint16_t x310 = 9U;
	volatile int16_t x311 = INT16_MIN;
	static int8_t x312 = -14;

	t60 = (x309<(x310*(x311+x312)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x317 = INT16_MIN;
	uint64_t x319 = 758561259531351728LLU;
	uint8_t x320 = UINT8_MAX;
	int32_t t61 = 102353;

	t61 = (x317<(x318*(x319+x320)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x321 = -1;
	uint8_t x322 = 2U;
	static int64_t x323 = -1LL;

	t62 = (x321<(x322*(x323+x324)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x325 = INT64_MAX;
	volatile uint8_t x328 = 2U;
	volatile int32_t t63 = -2424819;

	t63 = (x325<(x326*(x327+x328)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x329 = INT32_MAX;
	static int16_t x330 = INT16_MIN;
	int16_t x331 = INT16_MIN;
	static uint16_t x332 = 5U;
	int32_t t64 = -508;

	t64 = (x329<(x330*(x331+x332)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x333 = INT32_MIN;
	uint8_t x334 = 0U;
	static int64_t x336 = 1101122108847669LL;

	t65 = (x333<(x334*(x335+x336)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x337 = -3273687LL;
	uint64_t x338 = 2892LLU;
	int8_t x340 = -16;
	int32_t t66 = -532579;

	t66 = (x337<(x338*(x339+x340)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x341 = INT32_MIN;
	static volatile int8_t x342 = 3;
	uint16_t x344 = UINT16_MAX;
	static volatile int32_t t67 = -127;

	t67 = (x341<(x342*(x343+x344)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x358 = -1;
	int64_t x359 = -1LL;

	t68 = (x357<(x358*(x359+x360)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x362 = 108145;
	int8_t x363 = 0;
	static int8_t x364 = -1;
	volatile int32_t t69 = -8485;

	t69 = (x361<(x362*(x363+x364)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x365 = -1;
	int8_t x366 = -1;
	volatile uint32_t x368 = UINT32_MAX;

	t70 = (x365<(x366*(x367+x368)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x370 = 48384570559LLU;
	int16_t x371 = -1;
	static int8_t x372 = -1;
	static volatile int32_t t71 = 5;

	t71 = (x369<(x370*(x371+x372)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x373 = INT32_MIN;
	int32_t x374 = INT32_MIN;
	int64_t x375 = 385559099LL;
	int32_t x376 = INT32_MAX;
	static volatile int32_t t72 = 1217259;

	t72 = (x373<(x374*(x375+x376)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x377 = -1LL;
	int16_t x379 = INT16_MIN;
	static int32_t x380 = -1;
	int32_t t73 = -95146437;

	t73 = (x377<(x378*(x379+x380)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x382 = 46U;
	static uint16_t x383 = 2641U;
	volatile int64_t x384 = 251206LL;
	int32_t t74 = 877420067;

	t74 = (x381<(x382*(x383+x384)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x389 = UINT32_MAX;
	uint32_t x390 = 88583634U;
	static uint8_t x392 = 4U;

	t75 = (x389<(x390*(x391+x392)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x393 = 7;
	uint64_t x395 = UINT64_MAX;
	uint8_t x396 = UINT8_MAX;
	volatile int32_t t76 = -230320203;

	t76 = (x393<(x394*(x395+x396)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x397 = 46;
	static int16_t x399 = INT16_MAX;
	int32_t t77 = 218109858;

	t77 = (x397<(x398*(x399+x400)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x401 = UINT32_MAX;
	uint8_t x402 = 0U;
	int64_t x403 = INT64_MIN;
	int16_t x404 = 1;

	t78 = (x401<(x402*(x403+x404)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x406 = 239652815U;
	volatile int32_t x407 = 495;
	static volatile int32_t t79 = 149320968;

	t79 = (x405<(x406*(x407+x408)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x409 = 113U;
	volatile int16_t x410 = 11995;
	static int16_t x412 = -1;
	volatile int32_t t80 = -192;

	t80 = (x409<(x410*(x411+x412)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x415 = INT32_MAX;
	int16_t x416 = -1;
	volatile int32_t t81 = -211;

	t81 = (x413<(x414*(x415+x416)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x417 = -1173;
	uint16_t x419 = 10865U;
	uint64_t x420 = 23548653077655770LLU;
	static volatile int32_t t82 = 2259313;

	t82 = (x417<(x418*(x419+x420)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x421 = -6;
	int16_t x423 = INT16_MIN;
	uint32_t x424 = 205U;

	t83 = (x421<(x422*(x423+x424)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x425 = -38;
	volatile int16_t x426 = -1;
	int32_t x427 = 1773982;
	volatile int64_t x428 = INT64_MIN;
	volatile int32_t t84 = 46;

	t84 = (x425<(x426*(x427+x428)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x443 = INT16_MAX;
	static volatile uint8_t x444 = 65U;
	static volatile int32_t t85 = 13;

	t85 = (x441<(x442*(x443+x444)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x445 = 19410U;
	int32_t x446 = INT32_MIN;
	uint32_t x448 = 1536291189U;
	int32_t t86 = 65217111;

	t86 = (x445<(x446*(x447+x448)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x453 = 7;
	volatile uint64_t x454 = UINT64_MAX;
	volatile uint16_t x455 = 14545U;
	int16_t x456 = -1;
	volatile int32_t t87 = 238874006;

	t87 = (x453<(x454*(x455+x456)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x458 = 4U;
	int32_t t88 = -243865;

	t88 = (x457<(x458*(x459+x460)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x463 = 26U;
	static int32_t x464 = 1;
	int32_t t89 = -404649;

	t89 = (x461<(x462*(x463+x464)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x465 = UINT32_MAX;
	uint16_t x466 = 1U;
	static int32_t x467 = INT32_MAX;
	int32_t x468 = -221404;
	int32_t t90 = 29140128;

	t90 = (x465<(x466*(x467+x468)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x473 = UINT64_MAX;
	volatile int8_t x474 = -1;
	volatile int8_t x475 = INT8_MIN;
	uint8_t x476 = 1U;
	volatile int32_t t91 = -2862715;

	t91 = (x473<(x474*(x475+x476)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x478 = INT8_MIN;
	uint16_t x479 = UINT16_MAX;
	uint64_t x480 = 7023LLU;
	static int32_t t92 = 154802634;

	t92 = (x477<(x478*(x479+x480)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x481 = INT32_MIN;
	uint8_t x482 = 7U;
	uint8_t x483 = UINT8_MAX;
	volatile int8_t x484 = -1;
	int32_t t93 = -109;

	t93 = (x481<(x482*(x483+x484)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x485 = INT32_MIN;
	static int8_t x486 = -1;
	uint32_t x487 = UINT32_MAX;
	int8_t x488 = -13;
	int32_t t94 = 657948;

	t94 = (x485<(x486*(x487+x488)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x509 = 1260689286U;
	static int16_t x510 = -1;
	int16_t x512 = INT16_MAX;

	t95 = (x509<(x510*(x511+x512)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x517 = INT32_MIN;
	uint8_t x518 = UINT8_MAX;
	uint32_t x519 = UINT32_MAX;
	uint8_t x520 = 51U;
	volatile int32_t t96 = -30758;

	t96 = (x517<(x518*(x519+x520)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x521 = INT16_MIN;
	int8_t x522 = -1;
	int8_t x524 = -2;
	int32_t t97 = 27;

	t97 = (x521<(x522*(x523+x524)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x525 = INT32_MAX;
	int32_t x526 = INT32_MIN;
	uint64_t x527 = 488184390561465LLU;
	uint32_t x528 = 56459489U;

	t98 = (x525<(x526*(x527+x528)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x530 = 288U;
	uint16_t x531 = 78U;
	volatile int32_t t99 = -1052668631;

	t99 = (x529<(x530*(x531+x532)));

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


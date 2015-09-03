#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = -29;
volatile int32_t t0 = -16295074;
int16_t x13 = 12;
static volatile int8_t x21 = 51;
static int8_t x31 = INT8_MIN;
static uint16_t x32 = 0U;
volatile int32_t t4 = 1;
int8_t x47 = INT8_MAX;
int8_t x49 = INT8_MIN;
static int16_t x52 = INT16_MIN;
int64_t x57 = -256873LL;
uint16_t x58 = 159U;
uint32_t x63 = UINT32_MAX;
int32_t t12 = -1;
int32_t t14 = 245406;
uint8_t x81 = 1U;
volatile uint64_t x84 = 327LLU;
int32_t x93 = INT32_MIN;
int64_t x95 = -1LL;
int16_t x100 = INT16_MAX;
volatile int32_t x119 = -439994;
int8_t x122 = 41;
static int16_t x123 = -1;
int16_t x128 = INT16_MAX;
int32_t x139 = 16610;
int8_t x142 = -2;
int8_t x143 = 2;
int32_t t26 = 687788;
int8_t x147 = INT8_MAX;
uint32_t x155 = UINT32_MAX;
static volatile int64_t x156 = INT64_MIN;
int32_t x176 = INT32_MIN;
volatile int32_t t32 = 410466;
int16_t x181 = -1147;
volatile int8_t x183 = -1;
int32_t x204 = 15434;
volatile int32_t t37 = 2134337;
volatile int32_t t39 = 935;
volatile uint64_t x221 = UINT64_MAX;
static uint32_t x233 = 6644470U;
int32_t x234 = -351;
volatile int32_t t44 = -63;
volatile uint16_t x242 = UINT16_MAX;
uint64_t x243 = UINT64_MAX;
static int8_t x248 = INT8_MIN;
int32_t t47 = 973934560;
static int64_t x256 = 14475841795LL;
int32_t t48 = -25;
static int32_t x261 = 102030006;
int8_t x266 = INT8_MAX;
int32_t x273 = INT32_MIN;
volatile uint16_t x275 = 11U;
static int16_t x277 = INT16_MAX;
uint16_t x279 = UINT16_MAX;
int32_t t54 = -4;
uint16_t x295 = 367U;
int16_t x296 = INT16_MAX;
volatile int32_t t56 = -31;
int8_t x305 = INT8_MAX;
int64_t x312 = 16159365LL;
int64_t x313 = INT64_MAX;
static uint64_t x329 = 835626262161771LLU;
volatile uint32_t x336 = 211217U;
volatile int32_t t65 = -5949622;
uint32_t x339 = 1283U;
int64_t x341 = INT64_MAX;
int16_t x342 = INT16_MIN;
int32_t x349 = 10382;
int8_t x351 = -1;
static volatile int8_t x354 = INT8_MAX;
volatile int32_t t71 = -396609;
uint8_t x374 = 2U;
uint16_t x376 = 120U;
static int16_t x386 = INT16_MIN;
static volatile uint64_t x392 = 796LLU;
int8_t x396 = 8;
int8_t x399 = INT8_MAX;
int64_t x401 = INT64_MAX;
int32_t x405 = 5758;
int32_t t78 = 2;
int32_t t79 = 1021541;
int8_t x416 = 0;
int8_t x429 = INT8_MIN;
uint8_t x433 = UINT8_MAX;
int64_t x439 = -1LL;
static volatile int64_t x442 = -146LL;
int8_t x443 = INT8_MIN;
int8_t x449 = INT8_MIN;
uint16_t x452 = 1122U;
int64_t x457 = -1LL;
int32_t x466 = -1;
int16_t x468 = -1313;
volatile uint8_t x477 = 18U;
uint16_t x489 = 3U;
volatile int8_t x492 = -1;
uint64_t x499 = 98066LLU;
int16_t x501 = -1;
uint8_t x506 = 10U;


void f0(void) {
	int32_t x5 = -1;
	volatile uint8_t x7 = 24U;
	volatile int32_t x8 = -1;

	t0 = (x5<((x6*x7)==x8));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x9 = -1LL;
	int8_t x10 = -1;
	int64_t x11 = 1LL;
	static int32_t x12 = 3910;
	volatile int32_t t1 = 6936;

	t1 = (x9<((x10*x11)==x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x14 = -1;
	uint16_t x15 = 0U;
	uint16_t x16 = 877U;
	volatile int32_t t2 = 1562766;

	t2 = (x13<((x14*x15)==x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x22 = 2044366U;
	int32_t x23 = -1;
	uint32_t x24 = 1358229211U;
	volatile int32_t t3 = 8;

	t3 = (x21<((x22*x23)==x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x29 = INT64_MIN;
	uint32_t x30 = 344745836U;

	t4 = (x29<((x30*x31)==x32));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x33 = INT32_MIN;
	uint64_t x34 = UINT64_MAX;
	static int16_t x35 = -1;
	uint64_t x36 = 582422950861664599LLU;
	volatile int32_t t5 = -2922;

	t5 = (x33<((x34*x35)==x36));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x37 = UINT32_MAX;
	int8_t x38 = INT8_MAX;
	volatile int8_t x39 = 12;
	volatile uint64_t x40 = UINT64_MAX;
	static int32_t t6 = 42256;

	t6 = (x37<((x38*x39)==x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x45 = -69;
	int8_t x46 = INT8_MIN;
	uint32_t x48 = 6U;
	volatile int32_t t7 = -177219;

	t7 = (x45<((x46*x47)==x48));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x50 = INT16_MIN;
	uint16_t x51 = 1700U;
	static volatile int32_t t8 = 65426931;

	t8 = (x49<((x50*x51)==x52));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x53 = INT64_MAX;
	int64_t x54 = INT64_MIN;
	uint64_t x55 = 3185866LLU;
	volatile int32_t x56 = INT32_MIN;
	volatile int32_t t9 = 3;

	t9 = (x53<((x54*x55)==x56));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x59 = 1U;
	static volatile uint8_t x60 = UINT8_MAX;
	volatile int32_t t10 = 255;

	t10 = (x57<((x58*x59)==x60));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x61 = INT16_MIN;
	volatile int32_t x62 = -1;
	int8_t x64 = 0;
	int32_t t11 = 1;

	t11 = (x61<((x62*x63)==x64));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x65 = UINT64_MAX;
	static int8_t x66 = INT8_MIN;
	uint16_t x67 = UINT16_MAX;
	int64_t x68 = INT64_MIN;

	t12 = (x65<((x66*x67)==x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x73 = INT64_MIN;
	static volatile int8_t x74 = INT8_MAX;
	static uint64_t x75 = 210LLU;
	int16_t x76 = 3;
	static volatile int32_t t13 = -7;

	t13 = (x73<((x74*x75)==x76));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x77 = INT32_MIN;
	volatile int64_t x78 = 537LL;
	int8_t x79 = -1;
	uint8_t x80 = UINT8_MAX;

	t14 = (x77<((x78*x79)==x80));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x82 = INT16_MAX;
	int8_t x83 = INT8_MIN;
	volatile int32_t t15 = -4208;

	t15 = (x81<((x82*x83)==x84));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x89 = INT64_MIN;
	int32_t x90 = INT32_MAX;
	volatile uint64_t x91 = 5399622727510LLU;
	uint64_t x92 = 120852624188LLU;
	int32_t t16 = 2;

	t16 = (x89<((x90*x91)==x92));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x94 = INT64_MAX;
	int16_t x96 = INT16_MAX;
	int32_t t17 = -10054946;

	t17 = (x93<((x94*x95)==x96));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x97 = UINT64_MAX;
	int64_t x98 = INT64_MAX;
	int64_t x99 = -1LL;
	volatile int32_t t18 = 159422297;

	t18 = (x97<((x98*x99)==x100));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x101 = -1;
	int8_t x102 = -12;
	int32_t x103 = -8;
	static int32_t x104 = INT32_MIN;
	static int32_t t19 = -820097;

	t19 = (x101<((x102*x103)==x104));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x105 = UINT32_MAX;
	int16_t x106 = -1;
	int32_t x107 = -1;
	int16_t x108 = INT16_MAX;
	int32_t t20 = -1712;

	t20 = (x105<((x106*x107)==x108));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x113 = INT32_MIN;
	int8_t x114 = INT8_MIN;
	static uint64_t x115 = 147226875454LLU;
	int32_t x116 = INT32_MIN;
	volatile int32_t t21 = 60126755;

	t21 = (x113<((x114*x115)==x116));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x117 = 4LLU;
	uint64_t x118 = UINT64_MAX;
	int32_t x120 = -1;
	static int32_t t22 = 735;

	t22 = (x117<((x118*x119)==x120));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x121 = UINT8_MAX;
	int64_t x124 = 1402170998882819LL;
	volatile int32_t t23 = 50;

	t23 = (x121<((x122*x123)==x124));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x125 = INT32_MIN;
	static volatile int16_t x126 = INT16_MAX;
	int8_t x127 = 22;
	int32_t t24 = 50987304;

	t24 = (x125<((x126*x127)==x128));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x137 = -34;
	volatile uint16_t x138 = UINT16_MAX;
	int16_t x140 = INT16_MIN;
	volatile int32_t t25 = 3332171;

	t25 = (x137<((x138*x139)==x140));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x141 = INT16_MIN;
	int64_t x144 = 0LL;

	t26 = (x141<((x142*x143)==x144));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x145 = -1;
	int16_t x146 = 1487;
	static int64_t x148 = 1827893589493511313LL;
	int32_t t27 = -1;

	t27 = (x145<((x146*x147)==x148));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x153 = INT32_MIN;
	int64_t x154 = 3323LL;
	int32_t t28 = -171814247;

	t28 = (x153<((x154*x155)==x156));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x157 = INT8_MAX;
	int8_t x158 = -1;
	volatile int16_t x159 = INT16_MAX;
	uint8_t x160 = 8U;
	int32_t t29 = -2307244;

	t29 = (x157<((x158*x159)==x160));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x169 = INT8_MIN;
	int16_t x170 = 82;
	static int16_t x171 = 4209;
	int64_t x172 = -140866801859030600LL;
	int32_t t30 = 57860;

	t30 = (x169<((x170*x171)==x172));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x173 = INT8_MIN;
	int8_t x174 = INT8_MAX;
	int16_t x175 = 3124;
	static volatile int32_t t31 = -48337635;

	t31 = (x173<((x174*x175)==x176));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x177 = UINT32_MAX;
	static volatile int64_t x178 = 74817LL;
	uint32_t x179 = UINT32_MAX;
	volatile int64_t x180 = -89102LL;

	t32 = (x177<((x178*x179)==x180));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x182 = -194;
	uint32_t x184 = UINT32_MAX;
	int32_t t33 = -17865533;

	t33 = (x181<((x182*x183)==x184));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x185 = 0;
	static uint32_t x186 = 1148767U;
	static uint16_t x187 = UINT16_MAX;
	static volatile int32_t x188 = 6803;
	int32_t t34 = -141583;

	t34 = (x185<((x186*x187)==x188));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x193 = INT64_MAX;
	uint8_t x194 = 1U;
	int16_t x195 = INT16_MIN;
	int8_t x196 = 0;
	volatile int32_t t35 = -1210;

	t35 = (x193<((x194*x195)==x196));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x197 = 6418U;
	int16_t x198 = -1;
	uint8_t x199 = 28U;
	uint16_t x200 = 0U;
	int32_t t36 = -7263797;

	t36 = (x197<((x198*x199)==x200));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x201 = 1595089286442829LLU;
	volatile uint64_t x202 = UINT64_MAX;
	uint32_t x203 = 234U;

	t37 = (x201<((x202*x203)==x204));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x205 = 0U;
	static int32_t x206 = -4350;
	int8_t x207 = INT8_MIN;
	static uint16_t x208 = UINT16_MAX;
	volatile int32_t t38 = -9644;

	t38 = (x205<((x206*x207)==x208));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x213 = INT64_MIN;
	int16_t x214 = INT16_MAX;
	int8_t x215 = 30;
	int32_t x216 = INT32_MIN;

	t39 = (x213<((x214*x215)==x216));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x217 = -1LL;
	volatile int16_t x218 = INT16_MAX;
	uint8_t x219 = UINT8_MAX;
	int8_t x220 = INT8_MAX;
	int32_t t40 = -55;

	t40 = (x217<((x218*x219)==x220));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x222 = INT16_MAX;
	int32_t x223 = -1;
	volatile uint64_t x224 = UINT64_MAX;
	volatile int32_t t41 = -1;

	t41 = (x221<((x222*x223)==x224));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x225 = -1;
	int8_t x226 = -1;
	uint16_t x227 = 2350U;
	volatile int64_t x228 = INT64_MAX;
	volatile int32_t t42 = 168248908;

	t42 = (x225<((x226*x227)==x228));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x235 = INT8_MIN;
	int16_t x236 = -1;
	int32_t t43 = -1;

	t43 = (x233<((x234*x235)==x236));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x237 = -1;
	int16_t x238 = -3903;
	volatile uint8_t x239 = 11U;
	int8_t x240 = INT8_MIN;

	t44 = (x237<((x238*x239)==x240));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x241 = -1;
	volatile uint8_t x244 = 108U;
	volatile int32_t t45 = 48;

	t45 = (x241<((x242*x243)==x244));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x245 = -1;
	uint16_t x246 = 115U;
	int16_t x247 = -1;
	static int32_t t46 = -42;

	t46 = (x245<((x246*x247)==x248));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x249 = INT64_MIN;
	volatile int8_t x250 = 7;
	static volatile uint64_t x251 = UINT64_MAX;
	static int16_t x252 = INT16_MAX;

	t47 = (x249<((x250*x251)==x252));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x253 = UINT32_MAX;
	static uint16_t x254 = 3416U;
	int32_t x255 = -1;

	t48 = (x253<((x254*x255)==x256));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x257 = INT32_MIN;
	uint16_t x258 = UINT16_MAX;
	uint64_t x259 = 36695LLU;
	uint8_t x260 = 2U;
	volatile int32_t t49 = -7105;

	t49 = (x257<((x258*x259)==x260));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x262 = 1;
	uint32_t x263 = 760160371U;
	int32_t x264 = INT32_MAX;
	int32_t t50 = -1;

	t50 = (x261<((x262*x263)==x264));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x265 = INT64_MAX;
	uint8_t x267 = UINT8_MAX;
	uint16_t x268 = 7699U;
	volatile int32_t t51 = -192044;

	t51 = (x265<((x266*x267)==x268));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x274 = 14188471070LLU;
	volatile int16_t x276 = INT16_MAX;
	int32_t t52 = -70040;

	t52 = (x273<((x274*x275)==x276));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x278 = 8U;
	int32_t x280 = INT32_MIN;
	volatile int32_t t53 = -3;

	t53 = (x277<((x278*x279)==x280));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x281 = INT64_MAX;
	uint32_t x282 = 827U;
	static uint8_t x283 = 11U;
	uint16_t x284 = UINT16_MAX;

	t54 = (x281<((x282*x283)==x284));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x285 = -123;
	volatile int8_t x286 = INT8_MIN;
	int16_t x287 = 4164;
	uint32_t x288 = 3385U;
	int32_t t55 = 12090;

	t55 = (x285<((x286*x287)==x288));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x293 = INT8_MIN;
	volatile int16_t x294 = 0;

	t56 = (x293<((x294*x295)==x296));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x297 = INT64_MIN;
	int16_t x298 = INT16_MIN;
	int32_t x299 = -1;
	int8_t x300 = -19;
	int32_t t57 = 108;

	t57 = (x297<((x298*x299)==x300));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x301 = -1;
	static uint32_t x302 = 401383U;
	int8_t x303 = INT8_MIN;
	volatile int32_t x304 = 5694;
	int32_t t58 = 994086703;

	t58 = (x301<((x302*x303)==x304));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x306 = -1LL;
	int16_t x307 = -46;
	volatile uint16_t x308 = UINT16_MAX;
	volatile int32_t t59 = 125375270;

	t59 = (x305<((x306*x307)==x308));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x309 = -9;
	int16_t x310 = INT16_MIN;
	static int8_t x311 = -1;
	volatile int32_t t60 = 1;

	t60 = (x309<((x310*x311)==x312));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x314 = 52;
	static int8_t x315 = -1;
	int32_t x316 = INT32_MIN;
	static int32_t t61 = -17357;

	t61 = (x313<((x314*x315)==x316));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x321 = INT64_MAX;
	static uint32_t x322 = UINT32_MAX;
	int8_t x323 = INT8_MIN;
	volatile int64_t x324 = INT64_MAX;
	int32_t t62 = 1303;

	t62 = (x321<((x322*x323)==x324));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x325 = 1799582LLU;
	uint64_t x326 = 1442101981474439185LLU;
	int32_t x327 = INT32_MAX;
	uint8_t x328 = 1U;
	int32_t t63 = 18;

	t63 = (x325<((x326*x327)==x328));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x330 = INT16_MIN;
	static volatile uint8_t x331 = UINT8_MAX;
	uint32_t x332 = 130040U;
	int32_t t64 = -6476;

	t64 = (x329<((x330*x331)==x332));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x333 = 17200916852704LLU;
	uint32_t x334 = UINT32_MAX;
	int8_t x335 = INT8_MIN;

	t65 = (x333<((x334*x335)==x336));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x337 = 10405520;
	uint16_t x338 = 6U;
	int8_t x340 = 0;
	int32_t t66 = 1;

	t66 = (x337<((x338*x339)==x340));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x343 = INT16_MIN;
	int32_t x344 = INT32_MIN;
	static int32_t t67 = 1;

	t67 = (x341<((x342*x343)==x344));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x350 = INT16_MIN;
	int64_t x352 = INT64_MAX;
	static volatile int32_t t68 = -168015;

	t68 = (x349<((x350*x351)==x352));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x353 = UINT8_MAX;
	volatile uint16_t x355 = 91U;
	int8_t x356 = INT8_MIN;
	int32_t t69 = -9358997;

	t69 = (x353<((x354*x355)==x356));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x361 = UINT32_MAX;
	uint32_t x362 = UINT32_MAX;
	uint8_t x363 = 9U;
	int16_t x364 = INT16_MAX;
	int32_t t70 = 2618;

	t70 = (x361<((x362*x363)==x364));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x369 = INT8_MIN;
	int16_t x370 = INT16_MIN;
	volatile uint16_t x371 = 98U;
	int8_t x372 = -5;

	t71 = (x369<((x370*x371)==x372));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x373 = 6091U;
	static uint8_t x375 = 0U;
	int32_t t72 = 5;

	t72 = (x373<((x374*x375)==x376));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x385 = UINT32_MAX;
	static volatile uint64_t x387 = UINT64_MAX;
	static int16_t x388 = -115;
	int32_t t73 = -1145;

	t73 = (x385<((x386*x387)==x388));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x389 = UINT32_MAX;
	int32_t x390 = INT32_MAX;
	uint32_t x391 = 4417U;
	volatile int32_t t74 = -2484;

	t74 = (x389<((x390*x391)==x392));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x393 = INT16_MIN;
	uint64_t x394 = 446360700267LLU;
	static volatile int64_t x395 = -1LL;
	int32_t t75 = -14;

	t75 = (x393<((x394*x395)==x396));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x397 = -1;
	volatile int64_t x398 = -246657850LL;
	static int64_t x400 = 1LL;
	int32_t t76 = -7284704;

	t76 = (x397<((x398*x399)==x400));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x402 = 7230384U;
	int8_t x403 = -1;
	uint64_t x404 = 3882284504LLU;
	volatile int32_t t77 = -29;

	t77 = (x401<((x402*x403)==x404));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x406 = INT64_MIN;
	volatile uint64_t x407 = 17736526625360703LLU;
	int32_t x408 = INT32_MIN;

	t78 = (x405<((x406*x407)==x408));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x409 = INT8_MIN;
	int16_t x410 = 354;
	uint64_t x411 = 124047738834LLU;
	int16_t x412 = INT16_MIN;

	t79 = (x409<((x410*x411)==x412));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x413 = UINT32_MAX;
	int32_t x414 = -1;
	int8_t x415 = -15;
	volatile int32_t t80 = 241;

	t80 = (x413<((x414*x415)==x416));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x417 = -1;
	uint16_t x418 = 86U;
	int8_t x419 = -1;
	uint8_t x420 = 110U;
	volatile int32_t t81 = 14008;

	t81 = (x417<((x418*x419)==x420));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x430 = INT16_MAX;
	volatile uint16_t x431 = 5U;
	static int32_t x432 = INT32_MAX;
	int32_t t82 = -176;

	t82 = (x429<((x430*x431)==x432));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x434 = -1LL;
	static uint8_t x435 = UINT8_MAX;
	volatile uint64_t x436 = UINT64_MAX;
	volatile int32_t t83 = -5109924;

	t83 = (x433<((x434*x435)==x436));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x437 = INT32_MIN;
	static int8_t x438 = INT8_MAX;
	volatile int8_t x440 = -1;
	volatile int32_t t84 = 16589089;

	t84 = (x437<((x438*x439)==x440));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x441 = UINT32_MAX;
	uint64_t x444 = 100LLU;
	volatile int32_t t85 = -35;

	t85 = (x441<((x442*x443)==x444));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x450 = INT32_MAX;
	int8_t x451 = -1;
	volatile int32_t t86 = 38704787;

	t86 = (x449<((x450*x451)==x452));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x453 = 15113LL;
	int8_t x454 = INT8_MIN;
	volatile int32_t x455 = -26;
	int8_t x456 = -12;
	volatile int32_t t87 = 16373748;

	t87 = (x453<((x454*x455)==x456));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x458 = -62761495549365809LL;
	volatile uint8_t x459 = 29U;
	int8_t x460 = -1;
	int32_t t88 = -129850247;

	t88 = (x457<((x458*x459)==x460));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x461 = INT16_MIN;
	int8_t x462 = -15;
	int16_t x463 = INT16_MAX;
	static int64_t x464 = INT64_MIN;
	static int32_t t89 = 1809;

	t89 = (x461<((x462*x463)==x464));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x465 = 964472U;
	int16_t x467 = INT16_MIN;
	volatile int32_t t90 = -84752;

	t90 = (x465<((x466*x467)==x468));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x469 = UINT16_MAX;
	int64_t x470 = 17836LL;
	int16_t x471 = 3;
	volatile int8_t x472 = INT8_MAX;
	static int32_t t91 = -82;

	t91 = (x469<((x470*x471)==x472));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x473 = 3U;
	uint16_t x474 = 323U;
	static uint8_t x475 = UINT8_MAX;
	uint64_t x476 = 4152932496LLU;
	int32_t t92 = -113740;

	t92 = (x473<((x474*x475)==x476));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x478 = INT8_MIN;
	int8_t x479 = -1;
	int64_t x480 = INT64_MIN;
	volatile int32_t t93 = 22041334;

	t93 = (x477<((x478*x479)==x480));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x490 = 59968032395311959LLU;
	int16_t x491 = INT16_MAX;
	volatile int32_t t94 = -6;

	t94 = (x489<((x490*x491)==x492));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x493 = INT16_MIN;
	int32_t x494 = INT32_MIN;
	uint64_t x495 = 2871669869109007LLU;
	volatile uint32_t x496 = 476881258U;
	volatile int32_t t95 = -8095342;

	t95 = (x493<((x494*x495)==x496));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x497 = 2U;
	volatile int64_t x498 = 15826632LL;
	int64_t x500 = -1LL;
	int32_t t96 = 54;

	t96 = (x497<((x498*x499)==x500));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x502 = 188U;
	uint64_t x503 = 87791LLU;
	int64_t x504 = 219734394867LL;
	volatile int32_t t97 = 29231952;

	t97 = (x501<((x502*x503)==x504));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x505 = -1034160785121827LL;
	uint8_t x507 = 0U;
	volatile uint32_t x508 = UINT32_MAX;
	volatile int32_t t98 = -125700;

	t98 = (x505<((x506*x507)==x508));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x509 = UINT32_MAX;
	static int16_t x510 = INT16_MIN;
	uint64_t x511 = 340455584219LLU;
	int64_t x512 = INT64_MAX;
	volatile int32_t t99 = -843;

	t99 = (x509<((x510*x511)==x512));

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


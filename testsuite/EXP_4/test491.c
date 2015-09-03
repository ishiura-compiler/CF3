#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x1 = 238U;
volatile int32_t t0 = -11;
static int32_t x12 = -955074;
volatile int32_t x17 = -77288;
int8_t x19 = -1;
int8_t x20 = -1;
int16_t x24 = 14;
int32_t x39 = 240;
volatile int8_t x40 = -11;
uint64_t x54 = UINT64_MAX;
static int32_t t10 = -28958846;
int16_t x66 = INT16_MIN;
static uint64_t x74 = 0LLU;
uint64_t x84 = 1LLU;
uint32_t x91 = UINT32_MAX;
uint16_t x101 = 7296U;
uint32_t x108 = UINT32_MAX;
static volatile int32_t t20 = 129271368;
volatile uint64_t x119 = 236LLU;
int32_t x120 = INT32_MIN;
int8_t x122 = INT8_MIN;
static uint8_t x127 = 5U;
uint64_t x150 = 12943743557197676LLU;
uint64_t x156 = 142LLU;
int8_t x163 = INT8_MAX;
static uint64_t x165 = UINT64_MAX;
int16_t x166 = 208;
int16_t x171 = 5;
int8_t x186 = -1;
int32_t x187 = -720285;
volatile int64_t x188 = -1LL;
uint64_t x191 = 269847353240051845LLU;
int16_t x192 = INT16_MIN;
volatile int8_t x215 = INT8_MIN;
int8_t x226 = 4;
int32_t x234 = -1;
static int16_t x236 = -1;
int8_t x238 = INT8_MAX;
uint32_t x240 = UINT32_MAX;
int32_t t47 = 1503516;
static uint32_t x245 = 507U;
uint32_t x248 = 368U;
volatile int32_t t48 = -225882;
uint16_t x253 = 31U;
static int64_t x259 = INT64_MAX;
uint64_t x265 = 2931954498044855800LLU;
int16_t x272 = -1;
int8_t x274 = -53;
volatile uint32_t x280 = 128106015U;
uint16_t x286 = 25367U;
int8_t x287 = -7;
uint8_t x299 = 3U;
uint32_t x300 = 438773176U;
int32_t x309 = INT32_MIN;
uint8_t x311 = UINT8_MAX;
static uint8_t x314 = 14U;
uint16_t x317 = 36U;
volatile uint64_t x326 = 128693667007366272LLU;
static int8_t x327 = INT8_MIN;
uint8_t x341 = UINT8_MAX;
static uint8_t x351 = 11U;
uint32_t x360 = UINT32_MAX;
volatile uint8_t x367 = UINT8_MAX;
volatile int32_t t72 = 77272308;
int8_t x369 = 3;
volatile uint32_t x374 = 1466143U;
int32_t x398 = INT32_MIN;
int32_t x401 = INT32_MAX;
int16_t x404 = INT16_MIN;
uint16_t x419 = UINT16_MAX;
uint8_t x429 = 62U;
volatile int16_t x430 = INT16_MAX;
int8_t x431 = INT8_MAX;
int32_t t82 = 0;
volatile int32_t t84 = 17766716;
int8_t x456 = -1;
static volatile int32_t x475 = 9;
int16_t x499 = -1;
int64_t x500 = INT64_MAX;
static uint64_t x503 = 7300077646148285LLU;
int32_t x513 = -1;
int64_t x514 = INT64_MAX;
uint64_t x517 = UINT64_MAX;
int32_t t94 = 236010401;
int16_t x521 = 0;
uint64_t x543 = 611150229306LLU;


void f0(void) {
	volatile uint64_t x2 = UINT64_MAX;
	volatile uint16_t x3 = 0U;
	int8_t x4 = 8;

	t0 = (x1<=(x2|(x3*x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MAX;
	volatile int64_t x10 = INT64_MAX;
	static int8_t x11 = -10;
	int32_t t1 = -12862;

	t1 = (x9<=(x10|(x11*x12)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MAX;
	uint16_t x14 = UINT16_MAX;
	uint16_t x15 = UINT16_MAX;
	int8_t x16 = -1;
	static int32_t t2 = 160543477;

	t2 = (x13<=(x14|(x15*x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x18 = 4U;
	int32_t t3 = 13666;

	t3 = (x17<=(x18|(x19*x20)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MAX;
	int8_t x22 = 3;
	static int8_t x23 = -1;
	static volatile int32_t t4 = 15;

	t4 = (x21<=(x22|(x23*x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x29 = 282;
	volatile int64_t x30 = -1LL;
	static int16_t x31 = 7;
	int32_t x32 = 2290;
	int32_t t5 = -123749046;

	t5 = (x29<=(x30|(x31*x32)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x33 = -8;
	int16_t x34 = INT16_MIN;
	uint16_t x35 = 1141U;
	int8_t x36 = -1;
	static int32_t t6 = 22;

	t6 = (x33<=(x34|(x35*x36)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = -24;
	int8_t x38 = INT8_MIN;
	static volatile int32_t t7 = 30;

	t7 = (x37<=(x38|(x39*x40)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = -1325285202616LL;
	int64_t x42 = 2428482355LL;
	volatile int32_t x43 = -1066344756;
	volatile uint32_t x44 = 248280948U;
	int32_t t8 = -105205;

	t8 = (x41<=(x42|(x43*x44)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x49 = 12020787U;
	int32_t x50 = INT32_MIN;
	volatile uint64_t x51 = 15621LLU;
	int64_t x52 = -1LL;
	static int32_t t9 = 2199866;

	t9 = (x49<=(x50|(x51*x52)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x53 = 178305LLU;
	int8_t x55 = 23;
	uint32_t x56 = 1362439U;

	t10 = (x53<=(x54|(x55*x56)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x65 = UINT8_MAX;
	static int32_t x67 = 8;
	uint32_t x68 = 558228088U;
	volatile int32_t t11 = 640477;

	t11 = (x65<=(x66|(x67*x68)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x73 = UINT32_MAX;
	static int16_t x75 = INT16_MAX;
	uint32_t x76 = UINT32_MAX;
	static volatile int32_t t12 = 7742490;

	t12 = (x73<=(x74|(x75*x76)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x81 = -1;
	int8_t x82 = -1;
	volatile int16_t x83 = INT16_MIN;
	int32_t t13 = 153;

	t13 = (x81<=(x82|(x83*x84)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x85 = INT64_MAX;
	int32_t x86 = 218;
	static uint32_t x87 = 7U;
	int16_t x88 = INT16_MIN;
	int32_t t14 = 106859;

	t14 = (x85<=(x86|(x87*x88)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x89 = UINT8_MAX;
	int32_t x90 = -1;
	int8_t x92 = -1;
	static volatile int32_t t15 = 418890;

	t15 = (x89<=(x90|(x91*x92)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x93 = INT32_MIN;
	static int16_t x94 = INT16_MAX;
	int32_t x95 = -1;
	static volatile uint64_t x96 = 45002LLU;
	volatile int32_t t16 = 27250;

	t16 = (x93<=(x94|(x95*x96)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x97 = -112;
	int64_t x98 = INT64_MIN;
	int16_t x99 = -1;
	uint32_t x100 = 419298029U;
	static volatile int32_t t17 = 64;

	t17 = (x97<=(x98|(x99*x100)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x102 = 47;
	volatile int8_t x103 = INT8_MIN;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t18 = 3;

	t18 = (x101<=(x102|(x103*x104)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x105 = INT16_MIN;
	uint16_t x106 = 2201U;
	static volatile int32_t x107 = INT32_MAX;
	int32_t t19 = -19356847;

	t19 = (x105<=(x106|(x107*x108)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x109 = UINT64_MAX;
	int64_t x110 = INT64_MIN;
	static int32_t x111 = INT32_MIN;
	int64_t x112 = -1LL;

	t20 = (x109<=(x110|(x111*x112)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x117 = 11U;
	int16_t x118 = INT16_MIN;
	int32_t t21 = -26;

	t21 = (x117<=(x118|(x119*x120)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x121 = 15U;
	int16_t x123 = 344;
	static int16_t x124 = INT16_MAX;
	int32_t t22 = -2587394;

	t22 = (x121<=(x122|(x123*x124)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x125 = INT8_MIN;
	static int8_t x126 = -1;
	uint32_t x128 = 1U;
	int32_t t23 = 63121;

	t23 = (x125<=(x126|(x127*x128)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x129 = UINT64_MAX;
	static int32_t x130 = INT32_MIN;
	int64_t x131 = -1972433430012LL;
	uint16_t x132 = UINT16_MAX;
	volatile int32_t t24 = 41600846;

	t24 = (x129<=(x130|(x131*x132)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x133 = -1;
	static volatile int16_t x134 = -2;
	volatile int8_t x135 = 0;
	static int16_t x136 = -1;
	int32_t t25 = -6;

	t25 = (x133<=(x134|(x135*x136)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x141 = INT32_MAX;
	static volatile int8_t x142 = 2;
	volatile int16_t x143 = INT16_MIN;
	volatile int16_t x144 = -2;
	int32_t t26 = 0;

	t26 = (x141<=(x142|(x143*x144)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x145 = 10;
	static int16_t x146 = INT16_MIN;
	int16_t x147 = -1;
	int16_t x148 = INT16_MIN;
	volatile int32_t t27 = -110724;

	t27 = (x145<=(x146|(x147*x148)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x149 = INT8_MIN;
	int64_t x151 = -1LL;
	static int64_t x152 = INT64_MAX;
	volatile int32_t t28 = -440;

	t28 = (x149<=(x150|(x151*x152)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x153 = INT16_MIN;
	volatile int32_t x154 = INT32_MAX;
	int64_t x155 = -1LL;
	volatile int32_t t29 = 241019;

	t29 = (x153<=(x154|(x155*x156)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x157 = INT64_MIN;
	int16_t x158 = INT16_MIN;
	uint8_t x159 = UINT8_MAX;
	static uint32_t x160 = UINT32_MAX;
	volatile int32_t t30 = 3;

	t30 = (x157<=(x158|(x159*x160)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x161 = UINT16_MAX;
	int64_t x162 = INT64_MIN;
	int32_t x164 = 28792;
	int32_t t31 = -2470;

	t31 = (x161<=(x162|(x163*x164)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x167 = 79793;
	static volatile uint64_t x168 = 106LLU;
	volatile int32_t t32 = 13050404;

	t32 = (x165<=(x166|(x167*x168)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x169 = -1;
	uint64_t x170 = 1061147777LLU;
	uint8_t x172 = UINT8_MAX;
	int32_t t33 = 37;

	t33 = (x169<=(x170|(x171*x172)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x173 = -14;
	int8_t x174 = INT8_MIN;
	uint16_t x175 = 3U;
	static int32_t x176 = -1;
	volatile int32_t t34 = -61463;

	t34 = (x173<=(x174|(x175*x176)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x181 = INT32_MIN;
	uint8_t x182 = UINT8_MAX;
	uint32_t x183 = 9128U;
	static volatile int16_t x184 = -1;
	volatile int32_t t35 = 1;

	t35 = (x181<=(x182|(x183*x184)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x185 = 0U;
	int32_t t36 = 0;

	t36 = (x185<=(x186|(x187*x188)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x189 = 2;
	int16_t x190 = -1;
	volatile int32_t t37 = -2243237;

	t37 = (x189<=(x190|(x191*x192)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x197 = INT8_MIN;
	volatile uint32_t x198 = 423990U;
	uint64_t x199 = UINT64_MAX;
	int64_t x200 = INT64_MAX;
	volatile int32_t t38 = 24;

	t38 = (x197<=(x198|(x199*x200)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x205 = UINT16_MAX;
	int32_t x206 = 1;
	static int64_t x207 = 532056923137LL;
	uint8_t x208 = 23U;
	volatile int32_t t39 = -153810019;

	t39 = (x205<=(x206|(x207*x208)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x209 = UINT8_MAX;
	volatile int32_t x210 = INT32_MIN;
	static volatile int16_t x211 = INT16_MIN;
	int16_t x212 = -1;
	int32_t t40 = -851900;

	t40 = (x209<=(x210|(x211*x212)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x213 = INT8_MAX;
	static int32_t x214 = 601487;
	int16_t x216 = INT16_MAX;
	static int32_t t41 = -109;

	t41 = (x213<=(x214|(x215*x216)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x221 = INT64_MIN;
	volatile uint32_t x222 = UINT32_MAX;
	int16_t x223 = INT16_MIN;
	uint16_t x224 = 3666U;
	volatile int32_t t42 = -5;

	t42 = (x221<=(x222|(x223*x224)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x225 = -98;
	int8_t x227 = INT8_MIN;
	int32_t x228 = -1;
	int32_t t43 = 4371;

	t43 = (x225<=(x226|(x227*x228)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x229 = INT64_MAX;
	uint64_t x230 = UINT64_MAX;
	uint16_t x231 = UINT16_MAX;
	int32_t x232 = 0;
	volatile int32_t t44 = -3263;

	t44 = (x229<=(x230|(x231*x232)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x233 = INT64_MIN;
	volatile int16_t x235 = -598;
	int32_t t45 = -27127;

	t45 = (x233<=(x234|(x235*x236)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x237 = 1;
	int8_t x239 = INT8_MIN;
	volatile int32_t t46 = 17780;

	t46 = (x237<=(x238|(x239*x240)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x241 = UINT8_MAX;
	static int32_t x242 = 14095457;
	volatile int8_t x243 = INT8_MIN;
	uint8_t x244 = 18U;

	t47 = (x241<=(x242|(x243*x244)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x246 = 34756LLU;
	static int32_t x247 = 85831;

	t48 = (x245<=(x246|(x247*x248)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x254 = 903398923;
	int64_t x255 = -25963492683LL;
	int16_t x256 = INT16_MIN;
	int32_t t49 = 0;

	t49 = (x253<=(x254|(x255*x256)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x257 = 13U;
	static uint32_t x258 = 816U;
	int8_t x260 = -1;
	volatile int32_t t50 = -777986091;

	t50 = (x257<=(x258|(x259*x260)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x261 = UINT64_MAX;
	volatile int32_t x262 = -9358;
	int8_t x263 = -1;
	int16_t x264 = -1;
	int32_t t51 = -1015046103;

	t51 = (x261<=(x262|(x263*x264)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x266 = 10;
	static int8_t x267 = -1;
	uint8_t x268 = 1U;
	static int32_t t52 = 44874;

	t52 = (x265<=(x266|(x267*x268)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x269 = UINT64_MAX;
	uint16_t x270 = UINT16_MAX;
	static int16_t x271 = INT16_MAX;
	volatile int32_t t53 = 1;

	t53 = (x269<=(x270|(x271*x272)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x273 = -5511;
	static uint16_t x275 = UINT16_MAX;
	static int8_t x276 = 3;
	volatile int32_t t54 = 2;

	t54 = (x273<=(x274|(x275*x276)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x277 = INT64_MIN;
	static volatile int8_t x278 = 0;
	int8_t x279 = INT8_MIN;
	int32_t t55 = 8811860;

	t55 = (x277<=(x278|(x279*x280)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x281 = -1;
	volatile int32_t x282 = 11;
	int8_t x283 = INT8_MIN;
	int16_t x284 = 42;
	volatile int32_t t56 = 9;

	t56 = (x281<=(x282|(x283*x284)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint32_t x285 = 0U;
	int16_t x288 = INT16_MAX;
	int32_t t57 = -21;

	t57 = (x285<=(x286|(x287*x288)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x289 = 2605LLU;
	int64_t x290 = INT64_MIN;
	uint32_t x291 = UINT32_MAX;
	int16_t x292 = 252;
	volatile int32_t t58 = 33170;

	t58 = (x289<=(x290|(x291*x292)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x293 = 13013678U;
	volatile uint16_t x294 = UINT16_MAX;
	uint32_t x295 = 18729U;
	int16_t x296 = -1;
	volatile int32_t t59 = -3579;

	t59 = (x293<=(x294|(x295*x296)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x297 = INT16_MAX;
	int16_t x298 = 6;
	int32_t t60 = 1029362;

	t60 = (x297<=(x298|(x299*x300)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x301 = INT8_MIN;
	volatile int16_t x302 = INT16_MIN;
	volatile int8_t x303 = INT8_MIN;
	int32_t x304 = 6;
	volatile int32_t t61 = -114902733;

	t61 = (x301<=(x302|(x303*x304)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x310 = 5717795813661719LL;
	uint16_t x312 = UINT16_MAX;
	volatile int32_t t62 = -2415;

	t62 = (x309<=(x310|(x311*x312)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x313 = INT64_MIN;
	uint32_t x315 = UINT32_MAX;
	volatile uint16_t x316 = 2U;
	volatile int32_t t63 = 1750812;

	t63 = (x313<=(x314|(x315*x316)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x318 = INT32_MAX;
	int16_t x319 = -1;
	uint8_t x320 = UINT8_MAX;
	static int32_t t64 = -15406506;

	t64 = (x317<=(x318|(x319*x320)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x325 = 416;
	int32_t x328 = 2997;
	int32_t t65 = -1744747;

	t65 = (x325<=(x326|(x327*x328)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x329 = 13672165U;
	int32_t x330 = -1;
	uint8_t x331 = 5U;
	uint16_t x332 = 201U;
	int32_t t66 = 83262717;

	t66 = (x329<=(x330|(x331*x332)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x342 = -1LL;
	static int32_t x343 = INT32_MAX;
	int8_t x344 = 0;
	int32_t t67 = -1;

	t67 = (x341<=(x342|(x343*x344)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x349 = INT8_MIN;
	uint32_t x350 = 0U;
	int64_t x352 = -76219076203LL;
	int32_t t68 = 5125;

	t68 = (x349<=(x350|(x351*x352)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x353 = -1LL;
	static volatile int8_t x354 = INT8_MIN;
	uint64_t x355 = 9673LLU;
	int8_t x356 = INT8_MIN;
	volatile int32_t t69 = 361014757;

	t69 = (x353<=(x354|(x355*x356)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x357 = -1LL;
	int32_t x358 = -757941239;
	int8_t x359 = -1;
	int32_t t70 = 2010;

	t70 = (x357<=(x358|(x359*x360)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x361 = UINT16_MAX;
	static int64_t x362 = -1LL;
	static int16_t x363 = INT16_MIN;
	volatile uint16_t x364 = 5U;
	int32_t t71 = -27629;

	t71 = (x361<=(x362|(x363*x364)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x365 = -149627883856243625LL;
	volatile int16_t x366 = 12;
	static int8_t x368 = INT8_MAX;

	t72 = (x365<=(x366|(x367*x368)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x370 = 454421074602LL;
	static uint32_t x371 = 158U;
	static int16_t x372 = INT16_MIN;
	volatile int32_t t73 = -49809;

	t73 = (x369<=(x370|(x371*x372)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x373 = INT64_MAX;
	volatile uint64_t x375 = 3475LLU;
	volatile int8_t x376 = 1;
	int32_t t74 = 10508873;

	t74 = (x373<=(x374|(x375*x376)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x381 = 3;
	volatile int16_t x382 = -1;
	int32_t x383 = INT32_MIN;
	uint64_t x384 = 13960080520LLU;
	volatile int32_t t75 = -1;

	t75 = (x381<=(x382|(x383*x384)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x385 = 18249310979574LLU;
	static int64_t x386 = -1LL;
	int64_t x387 = -4490062683376225209LL;
	static volatile int32_t x388 = -1;
	volatile int32_t t76 = -3;

	t76 = (x385<=(x386|(x387*x388)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x397 = 6522300U;
	int8_t x399 = INT8_MIN;
	static volatile uint32_t x400 = 6U;
	static volatile int32_t t77 = 2;

	t77 = (x397<=(x398|(x399*x400)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x402 = INT16_MIN;
	uint64_t x403 = UINT64_MAX;
	volatile int32_t t78 = 2589207;

	t78 = (x401<=(x402|(x403*x404)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x417 = INT16_MIN;
	uint16_t x418 = 2U;
	volatile uint16_t x420 = 1066U;
	int32_t t79 = 4641423;

	t79 = (x417<=(x418|(x419*x420)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x421 = -13153141733LL;
	int32_t x422 = INT32_MIN;
	uint8_t x423 = 13U;
	int16_t x424 = -1;
	volatile int32_t t80 = 1378038;

	t80 = (x421<=(x422|(x423*x424)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x425 = 25;
	static int64_t x426 = -88612927195077312LL;
	uint32_t x427 = UINT32_MAX;
	static volatile uint16_t x428 = 75U;
	int32_t t81 = -60975415;

	t81 = (x425<=(x426|(x427*x428)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x432 = 175436U;

	t82 = (x429<=(x430|(x431*x432)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x433 = INT32_MIN;
	volatile int16_t x434 = 7;
	static int8_t x435 = INT8_MAX;
	volatile int16_t x436 = INT16_MIN;
	volatile int32_t t83 = 1917;

	t83 = (x433<=(x434|(x435*x436)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x441 = -10720LL;
	volatile uint32_t x442 = 77U;
	int16_t x443 = 1744;
	int32_t x444 = -293406;

	t84 = (x441<=(x442|(x443*x444)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x445 = INT64_MIN;
	volatile int16_t x446 = -6792;
	uint16_t x447 = 9328U;
	int16_t x448 = -1;
	int32_t t85 = 32;

	t85 = (x445<=(x446|(x447*x448)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x453 = -1;
	volatile uint32_t x454 = UINT32_MAX;
	uint8_t x455 = 30U;
	int32_t t86 = 1114628;

	t86 = (x453<=(x454|(x455*x456)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x461 = UINT32_MAX;
	int8_t x462 = 27;
	volatile uint32_t x463 = 3533U;
	int8_t x464 = 2;
	volatile int32_t t87 = -10;

	t87 = (x461<=(x462|(x463*x464)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x465 = 905039463506LLU;
	int8_t x466 = -1;
	volatile int32_t x467 = INT32_MAX;
	uint64_t x468 = 18408033380401633LLU;
	static volatile int32_t t88 = -38655;

	t88 = (x465<=(x466|(x467*x468)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint32_t x473 = UINT32_MAX;
	int16_t x474 = -1;
	volatile int8_t x476 = -1;
	int32_t t89 = -11248979;

	t89 = (x473<=(x474|(x475*x476)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x477 = 4;
	volatile uint8_t x478 = 28U;
	volatile int8_t x479 = -1;
	static uint16_t x480 = 1997U;
	static int32_t t90 = -64146543;

	t90 = (x477<=(x478|(x479*x480)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x497 = INT32_MAX;
	int64_t x498 = 172LL;
	int32_t t91 = -3097101;

	t91 = (x497<=(x498|(x499*x500)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x501 = 6932U;
	int64_t x502 = INT64_MIN;
	uint64_t x504 = 2131722824584349LLU;
	volatile int32_t t92 = -2431068;

	t92 = (x501<=(x502|(x503*x504)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x515 = -1;
	int16_t x516 = INT16_MIN;
	volatile int32_t t93 = -200;

	t93 = (x513<=(x514|(x515*x516)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x518 = INT32_MIN;
	static int8_t x519 = 0;
	int64_t x520 = -16378264683860LL;

	t94 = (x517<=(x518|(x519*x520)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x522 = INT8_MAX;
	uint32_t x523 = 258524U;
	volatile uint16_t x524 = 63U;
	int32_t t95 = -697222351;

	t95 = (x521<=(x522|(x523*x524)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x525 = INT16_MIN;
	uint8_t x526 = 0U;
	uint8_t x527 = 0U;
	static int32_t x528 = INT32_MIN;
	static int32_t t96 = -13798;

	t96 = (x525<=(x526|(x527*x528)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x533 = UINT32_MAX;
	uint8_t x534 = 0U;
	volatile int32_t x535 = -1;
	volatile int32_t x536 = 2331;
	int32_t t97 = 48307;

	t97 = (x533<=(x534|(x535*x536)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x541 = 87U;
	static volatile uint8_t x542 = UINT8_MAX;
	uint16_t x544 = UINT16_MAX;
	int32_t t98 = 25;

	t98 = (x541<=(x542|(x543*x544)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x549 = -31;
	int8_t x550 = INT8_MIN;
	int16_t x551 = -1;
	static uint32_t x552 = UINT32_MAX;
	int32_t t99 = 2012381;

	t99 = (x549<=(x550|(x551*x552)));

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


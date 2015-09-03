#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x8 = INT32_MAX;
int16_t x14 = 2105;
int32_t x15 = INT32_MIN;
uint16_t x18 = 1U;
volatile int8_t x22 = 44;
int16_t x23 = INT16_MAX;
uint32_t x26 = UINT32_MAX;
int64_t x27 = -10LL;
volatile uint8_t x30 = UINT8_MAX;
uint64_t x31 = UINT64_MAX;
static int64_t x32 = INT64_MIN;
static uint8_t x35 = UINT8_MAX;
static int16_t x40 = 0;
uint32_t x51 = 48867U;
int16_t x53 = 14462;
volatile int32_t t12 = -47;
uint16_t x70 = 7502U;
int8_t x72 = -36;
volatile int32_t t13 = 177629197;
int16_t x80 = -8;
int64_t x105 = 1674788LL;
int32_t t21 = -18572200;
int16_t x110 = -1;
volatile int32_t t22 = 0;
static int64_t x113 = -36837LL;
static int32_t t23 = -1378132;
static int16_t x119 = -1077;
static int8_t x121 = INT8_MIN;
volatile int32_t t26 = -474775;
int16_t x142 = 0;
int8_t x144 = INT8_MIN;
uint8_t x152 = 124U;
static int64_t x154 = INT64_MIN;
uint16_t x177 = 0U;
volatile int32_t t34 = 48;
uint32_t x192 = UINT32_MAX;
static int64_t x208 = 4333LL;
int32_t x210 = 2098;
int8_t x223 = INT8_MIN;
uint32_t x231 = 7U;
int32_t t44 = 4;
volatile int8_t x236 = -1;
static uint16_t x239 = 158U;
uint16_t x243 = 1U;
uint32_t x248 = 4982363U;
int32_t t48 = 485;
uint32_t x255 = UINT32_MAX;
volatile int32_t x257 = INT32_MAX;
int32_t x273 = INT32_MIN;
uint64_t x274 = 11821223888734390LLU;
int16_t x286 = INT16_MAX;
uint64_t x291 = 207798LLU;
int16_t x295 = INT16_MAX;
uint16_t x301 = 501U;
int8_t x304 = -1;
int32_t t56 = 3416390;
int16_t x310 = 165;
uint8_t x331 = 7U;
uint32_t x332 = 6154U;
int8_t x342 = -27;
int8_t x345 = 26;
int64_t x346 = -1LL;
int8_t x353 = -1;
volatile int16_t x360 = INT16_MIN;
static volatile uint8_t x362 = UINT8_MAX;
uint16_t x364 = 0U;
static int16_t x365 = INT16_MIN;
uint32_t x375 = 36967U;
static uint32_t x377 = 7593U;
uint64_t x394 = 76896375497LLU;
volatile int32_t t73 = -32885;
int8_t x397 = INT8_MAX;
static int16_t x411 = INT16_MIN;
int32_t t77 = 13;
int8_t x426 = -1;
int32_t t78 = -2965;
uint8_t x444 = 5U;
volatile int32_t t80 = -1;
volatile int32_t t81 = 1;
volatile int16_t x460 = -3;
uint16_t x466 = 426U;
int32_t x474 = INT32_MIN;
int64_t x478 = -1LL;
uint16_t x485 = 29U;
int32_t t89 = 5118843;
static uint8_t x490 = 115U;
uint32_t x491 = 6329343U;
uint64_t x492 = 7836527339400807703LLU;
int16_t x503 = 477;
uint32_t x504 = UINT32_MAX;
uint32_t x512 = UINT32_MAX;
volatile int8_t x516 = -12;
int32_t x521 = -3;
static volatile int64_t x526 = -6097401641245678LL;
static volatile uint16_t x529 = 339U;
uint8_t x532 = 10U;
volatile uint64_t x534 = UINT64_MAX;
uint64_t x536 = UINT64_MAX;
int64_t x537 = INT64_MIN;
int64_t x539 = -1LL;


void f0(void) {
	uint8_t x5 = 39U;
	uint32_t x6 = UINT32_MAX;
	int64_t x7 = -5LL;
	volatile int32_t t0 = -80940532;

	t0 = (x5<=(x6<=(x7*x8)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = 1497770;
	static uint16_t x10 = UINT16_MAX;
	uint64_t x11 = 2524LLU;
	uint8_t x12 = 1U;
	int32_t t1 = -916;

	t1 = (x9<=(x10<=(x11*x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -1;
	int64_t x16 = -1LL;
	volatile int32_t t2 = 374784;

	t2 = (x13<=(x14<=(x15*x16)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x17 = 0;
	int8_t x19 = -1;
	uint16_t x20 = 165U;
	static int32_t t3 = -1;

	t3 = (x17<=(x18<=(x19*x20)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MAX;
	int32_t x24 = -1;
	int32_t t4 = 1;

	t4 = (x21<=(x22<=(x23*x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MAX;
	uint8_t x28 = 7U;
	int32_t t5 = 367715;

	t5 = (x25<=(x26<=(x27*x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -1LL;
	int32_t t6 = -577825;

	t6 = (x29<=(x30<=(x31*x32)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x33 = 3716;
	int16_t x34 = INT16_MIN;
	uint64_t x36 = 8438960847649882427LLU;
	int32_t t7 = 773892353;

	t7 = (x33<=(x34<=(x35*x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 183776997914516356LLU;
	volatile uint16_t x38 = 328U;
	int64_t x39 = INT64_MAX;
	int32_t t8 = 7;

	t8 = (x37<=(x38<=(x39*x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x41 = 1368928018686524498LLU;
	uint8_t x42 = 44U;
	uint32_t x43 = UINT32_MAX;
	int64_t x44 = -1LL;
	int32_t t9 = 0;

	t9 = (x41<=(x42<=(x43*x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x49 = 66U;
	volatile int64_t x50 = INT64_MIN;
	int8_t x52 = INT8_MAX;
	volatile int32_t t10 = 4;

	t10 = (x49<=(x50<=(x51*x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x54 = -1;
	uint16_t x55 = UINT16_MAX;
	volatile int8_t x56 = -4;
	volatile int32_t t11 = 1649046;

	t11 = (x53<=(x54<=(x55*x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x57 = 23U;
	uint8_t x58 = 0U;
	volatile uint8_t x59 = 0U;
	volatile int32_t x60 = INT32_MIN;

	t12 = (x57<=(x58<=(x59*x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x69 = UINT64_MAX;
	int16_t x71 = INT16_MAX;

	t13 = (x69<=(x70<=(x71*x72)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x73 = 0U;
	static int64_t x74 = INT64_MIN;
	int16_t x75 = -8;
	int32_t x76 = -1;
	static int32_t t14 = 4;

	t14 = (x73<=(x74<=(x75*x76)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x77 = INT64_MAX;
	int8_t x78 = INT8_MIN;
	int32_t x79 = -1;
	volatile int32_t t15 = -8;

	t15 = (x77<=(x78<=(x79*x80)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x81 = -1;
	int64_t x82 = -150934LL;
	static int16_t x83 = INT16_MAX;
	static int16_t x84 = INT16_MAX;
	volatile int32_t t16 = -23704302;

	t16 = (x81<=(x82<=(x83*x84)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x89 = 26U;
	static volatile int64_t x90 = INT64_MAX;
	volatile int16_t x91 = INT16_MAX;
	static int16_t x92 = -1;
	volatile int32_t t17 = 8225;

	t17 = (x89<=(x90<=(x91*x92)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x93 = UINT16_MAX;
	uint8_t x94 = 13U;
	uint16_t x95 = 0U;
	uint16_t x96 = 273U;
	static volatile int32_t t18 = -212;

	t18 = (x93<=(x94<=(x95*x96)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x97 = 0U;
	static volatile uint64_t x98 = UINT64_MAX;
	int32_t x99 = INT32_MAX;
	static int16_t x100 = 0;
	static int32_t t19 = 1;

	t19 = (x97<=(x98<=(x99*x100)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = 21;
	uint64_t x102 = 356LLU;
	uint32_t x103 = 9112393U;
	int64_t x104 = -1LL;
	volatile int32_t t20 = 1407;

	t20 = (x101<=(x102<=(x103*x104)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x106 = INT8_MIN;
	uint8_t x107 = UINT8_MAX;
	static uint32_t x108 = UINT32_MAX;

	t21 = (x105<=(x106<=(x107*x108)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x109 = UINT32_MAX;
	int8_t x111 = INT8_MAX;
	static int64_t x112 = 215LL;

	t22 = (x109<=(x110<=(x111*x112)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x114 = INT64_MAX;
	int8_t x115 = 6;
	static int64_t x116 = -1LL;

	t23 = (x113<=(x114<=(x115*x116)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x117 = 361375570U;
	int64_t x118 = -1LL;
	uint32_t x120 = 189U;
	int32_t t24 = -5815;

	t24 = (x117<=(x118<=(x119*x120)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x122 = INT16_MIN;
	volatile int64_t x123 = -1LL;
	int16_t x124 = INT16_MIN;
	volatile int32_t t25 = -2735;

	t25 = (x121<=(x122<=(x123*x124)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x129 = -27737;
	uint32_t x130 = 564U;
	int16_t x131 = -4350;
	static int64_t x132 = 231LL;

	t26 = (x129<=(x130<=(x131*x132)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x133 = INT64_MAX;
	volatile int8_t x134 = 5;
	static uint32_t x135 = UINT32_MAX;
	uint32_t x136 = 46U;
	int32_t t27 = 48486;

	t27 = (x133<=(x134<=(x135*x136)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x137 = -11168;
	int64_t x138 = 358996517951782990LL;
	int64_t x139 = 2138780987985LL;
	volatile int32_t x140 = -1;
	volatile int32_t t28 = -1;

	t28 = (x137<=(x138<=(x139*x140)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x141 = -1;
	uint16_t x143 = 0U;
	static volatile int32_t t29 = 245;

	t29 = (x141<=(x142<=(x143*x144)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x145 = 7U;
	volatile int32_t x146 = 8013;
	static int8_t x147 = -3;
	int8_t x148 = -1;
	int32_t t30 = -66905453;

	t30 = (x145<=(x146<=(x147*x148)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = INT64_MAX;
	static volatile int64_t x150 = -1683994354758627222LL;
	volatile uint8_t x151 = 1U;
	volatile int32_t t31 = 16673201;

	t31 = (x149<=(x150<=(x151*x152)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x153 = INT32_MAX;
	static int64_t x155 = -9097LL;
	int16_t x156 = -964;
	volatile int32_t t32 = -325305;

	t32 = (x153<=(x154<=(x155*x156)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x161 = 0U;
	volatile uint8_t x162 = 0U;
	uint8_t x163 = 4U;
	volatile int8_t x164 = -1;
	int32_t t33 = 14342485;

	t33 = (x161<=(x162<=(x163*x164)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x178 = 117943LLU;
	int32_t x179 = 6;
	static uint8_t x180 = 50U;

	t34 = (x177<=(x178<=(x179*x180)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x189 = 143LLU;
	volatile int32_t x190 = INT32_MIN;
	static int32_t x191 = INT32_MAX;
	static volatile int32_t t35 = 16697;

	t35 = (x189<=(x190<=(x191*x192)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x193 = -1LL;
	int16_t x194 = INT16_MAX;
	int8_t x195 = 1;
	uint64_t x196 = 6707802931LLU;
	volatile int32_t t36 = -8981;

	t36 = (x193<=(x194<=(x195*x196)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x197 = -1;
	int8_t x198 = 0;
	int8_t x199 = 0;
	int8_t x200 = INT8_MIN;
	volatile int32_t t37 = -1;

	t37 = (x197<=(x198<=(x199*x200)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x201 = 99U;
	static volatile int8_t x202 = 2;
	static int16_t x203 = 7;
	int16_t x204 = INT16_MIN;
	volatile int32_t t38 = 1724;

	t38 = (x201<=(x202<=(x203*x204)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x205 = INT8_MIN;
	uint16_t x206 = 19284U;
	volatile int32_t x207 = -1;
	volatile int32_t t39 = -4440116;

	t39 = (x205<=(x206<=(x207*x208)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x209 = -1;
	volatile uint64_t x211 = UINT64_MAX;
	int32_t x212 = INT32_MIN;
	int32_t t40 = 0;

	t40 = (x209<=(x210<=(x211*x212)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x213 = UINT16_MAX;
	int8_t x214 = -28;
	static int8_t x215 = INT8_MIN;
	int64_t x216 = 624LL;
	volatile int32_t t41 = 1;

	t41 = (x213<=(x214<=(x215*x216)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x221 = INT16_MIN;
	static int32_t x222 = 2596;
	uint32_t x224 = UINT32_MAX;
	int32_t t42 = -2636;

	t42 = (x221<=(x222<=(x223*x224)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x225 = INT8_MIN;
	int16_t x226 = -2;
	static uint32_t x227 = UINT32_MAX;
	int8_t x228 = -2;
	volatile int32_t t43 = 211039;

	t43 = (x225<=(x226<=(x227*x228)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x229 = INT32_MIN;
	int8_t x230 = 0;
	static uint32_t x232 = UINT32_MAX;

	t44 = (x229<=(x230<=(x231*x232)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x233 = -1LL;
	int64_t x234 = 193991186862790789LL;
	volatile int8_t x235 = -1;
	volatile int32_t t45 = 133122568;

	t45 = (x233<=(x234<=(x235*x236)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x237 = UINT32_MAX;
	int16_t x238 = INT16_MIN;
	static uint16_t x240 = 2158U;
	int32_t t46 = 9780;

	t46 = (x237<=(x238<=(x239*x240)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x241 = UINT64_MAX;
	static int32_t x242 = INT32_MIN;
	uint64_t x244 = 36LLU;
	volatile int32_t t47 = -166;

	t47 = (x241<=(x242<=(x243*x244)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x245 = -1;
	int16_t x246 = INT16_MAX;
	int16_t x247 = 1844;

	t48 = (x245<=(x246<=(x247*x248)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x253 = INT16_MIN;
	int8_t x254 = INT8_MAX;
	static int16_t x256 = INT16_MIN;
	int32_t t49 = 417023231;

	t49 = (x253<=(x254<=(x255*x256)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x258 = INT8_MIN;
	volatile int16_t x259 = INT16_MAX;
	static int16_t x260 = INT16_MIN;
	static int32_t t50 = 16121439;

	t50 = (x257<=(x258<=(x259*x260)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x265 = INT16_MAX;
	uint64_t x266 = 37654928271457781LLU;
	static uint8_t x267 = 3U;
	int8_t x268 = -1;
	int32_t t51 = 17372468;

	t51 = (x265<=(x266<=(x267*x268)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x275 = -1;
	int16_t x276 = INT16_MIN;
	volatile int32_t t52 = 22181;

	t52 = (x273<=(x274<=(x275*x276)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x285 = UINT64_MAX;
	int8_t x287 = INT8_MIN;
	int32_t x288 = -1;
	int32_t t53 = 7178;

	t53 = (x285<=(x286<=(x287*x288)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x289 = 70238381873838018LLU;
	uint64_t x290 = UINT64_MAX;
	int64_t x292 = INT64_MAX;
	volatile int32_t t54 = -32;

	t54 = (x289<=(x290<=(x291*x292)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x293 = 102U;
	int16_t x294 = -1;
	int64_t x296 = -2722LL;
	volatile int32_t t55 = 231259293;

	t55 = (x293<=(x294<=(x295*x296)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x302 = UINT8_MAX;
	int64_t x303 = INT64_MAX;

	t56 = (x301<=(x302<=(x303*x304)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x309 = -25;
	int16_t x311 = -1;
	volatile uint64_t x312 = 1LLU;
	volatile int32_t t57 = 303;

	t57 = (x309<=(x310<=(x311*x312)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x329 = -1;
	uint64_t x330 = 5030591LLU;
	int32_t t58 = -1;

	t58 = (x329<=(x330<=(x331*x332)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x337 = 0;
	uint64_t x338 = 2102045LLU;
	int16_t x339 = -76;
	int16_t x340 = 0;
	int32_t t59 = 4144;

	t59 = (x337<=(x338<=(x339*x340)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x341 = INT32_MAX;
	uint8_t x343 = 1U;
	int8_t x344 = -1;
	volatile int32_t t60 = -35509;

	t60 = (x341<=(x342<=(x343*x344)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x347 = INT16_MIN;
	int16_t x348 = INT16_MIN;
	volatile int32_t t61 = -110;

	t61 = (x345<=(x346<=(x347*x348)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x349 = UINT16_MAX;
	int16_t x350 = -1;
	static int32_t x351 = 3143006;
	static volatile int64_t x352 = -1455LL;
	int32_t t62 = -244937292;

	t62 = (x349<=(x350<=(x351*x352)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x354 = -4;
	volatile uint64_t x355 = UINT64_MAX;
	int16_t x356 = INT16_MAX;
	int32_t t63 = -4090;

	t63 = (x353<=(x354<=(x355*x356)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x357 = 263U;
	int16_t x358 = INT16_MAX;
	uint8_t x359 = 49U;
	static int32_t t64 = 258703;

	t64 = (x357<=(x358<=(x359*x360)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x361 = 0U;
	static int64_t x363 = -20259478978906LL;
	volatile int32_t t65 = 17736;

	t65 = (x361<=(x362<=(x363*x364)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x366 = INT8_MIN;
	static volatile int64_t x367 = INT64_MIN;
	static uint64_t x368 = 301197932629003134LLU;
	volatile int32_t t66 = -55402719;

	t66 = (x365<=(x366<=(x367*x368)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x369 = 63U;
	volatile uint8_t x370 = UINT8_MAX;
	volatile uint8_t x371 = 11U;
	static uint16_t x372 = UINT16_MAX;
	volatile int32_t t67 = 71665478;

	t67 = (x369<=(x370<=(x371*x372)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x373 = 1U;
	volatile int64_t x374 = INT64_MAX;
	int16_t x376 = -607;
	int32_t t68 = -5280374;

	t68 = (x373<=(x374<=(x375*x376)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x378 = -30;
	int16_t x379 = INT16_MIN;
	volatile uint64_t x380 = 0LLU;
	static volatile int32_t t69 = 60;

	t69 = (x377<=(x378<=(x379*x380)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x381 = INT16_MIN;
	int8_t x382 = INT8_MIN;
	int16_t x383 = INT16_MIN;
	volatile uint16_t x384 = 4U;
	static int32_t t70 = -77962715;

	t70 = (x381<=(x382<=(x383*x384)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x385 = -15491LL;
	int64_t x386 = INT64_MAX;
	int32_t x387 = INT32_MIN;
	static uint32_t x388 = 6760U;
	volatile int32_t t71 = 2;

	t71 = (x385<=(x386<=(x387*x388)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x389 = INT64_MAX;
	uint8_t x390 = 4U;
	volatile uint16_t x391 = 48U;
	static uint16_t x392 = UINT16_MAX;
	int32_t t72 = 3317;

	t72 = (x389<=(x390<=(x391*x392)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x393 = INT64_MAX;
	static int64_t x395 = INT64_MIN;
	uint64_t x396 = UINT64_MAX;

	t73 = (x393<=(x394<=(x395*x396)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x398 = INT8_MAX;
	int16_t x399 = -3;
	int16_t x400 = INT16_MAX;
	volatile int32_t t74 = -1016;

	t74 = (x397<=(x398<=(x399*x400)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x409 = 1;
	uint32_t x410 = 128585U;
	static uint32_t x412 = 1695U;
	int32_t t75 = -58036;

	t75 = (x409<=(x410<=(x411*x412)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x413 = UINT16_MAX;
	static volatile int32_t x414 = -1;
	static int8_t x415 = INT8_MIN;
	static volatile int32_t x416 = -1;
	int32_t t76 = -585481277;

	t76 = (x413<=(x414<=(x415*x416)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x417 = 9965;
	static int64_t x418 = INT64_MIN;
	int32_t x419 = INT32_MAX;
	int16_t x420 = -1;

	t77 = (x417<=(x418<=(x419*x420)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x425 = INT64_MIN;
	static uint32_t x427 = UINT32_MAX;
	static int32_t x428 = -173786;

	t78 = (x425<=(x426<=(x427*x428)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x429 = 15U;
	int64_t x430 = INT64_MIN;
	uint64_t x431 = 882915503715835482LLU;
	int8_t x432 = -1;
	int32_t t79 = 6;

	t79 = (x429<=(x430<=(x431*x432)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x441 = 14U;
	int32_t x442 = -1460;
	uint32_t x443 = 1058923U;

	t80 = (x441<=(x442<=(x443*x444)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x445 = INT8_MAX;
	static uint16_t x446 = UINT16_MAX;
	int64_t x447 = INT64_MIN;
	volatile uint64_t x448 = 22768LLU;

	t81 = (x445<=(x446<=(x447*x448)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x449 = -618652;
	volatile int32_t x450 = -1;
	volatile int16_t x451 = 6;
	int64_t x452 = -469766703360912LL;
	volatile int32_t t82 = 309632887;

	t82 = (x449<=(x450<=(x451*x452)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x453 = -3968;
	int8_t x454 = INT8_MIN;
	uint16_t x455 = UINT16_MAX;
	static uint32_t x456 = 108U;
	volatile int32_t t83 = 299167;

	t83 = (x453<=(x454<=(x455*x456)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x457 = INT16_MAX;
	int16_t x458 = INT16_MIN;
	static int64_t x459 = -1LL;
	volatile int32_t t84 = -46;

	t84 = (x457<=(x458<=(x459*x460)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x465 = INT64_MAX;
	uint8_t x467 = UINT8_MAX;
	uint16_t x468 = UINT16_MAX;
	volatile int32_t t85 = -111702599;

	t85 = (x465<=(x466<=(x467*x468)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x469 = 5U;
	static volatile int8_t x470 = -1;
	int8_t x471 = 1;
	static uint8_t x472 = 2U;
	int32_t t86 = 5300;

	t86 = (x469<=(x470<=(x471*x472)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x473 = 30152228LL;
	volatile int8_t x475 = -1;
	static volatile int64_t x476 = -1LL;
	static volatile int32_t t87 = -939;

	t87 = (x473<=(x474<=(x475*x476)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x477 = INT16_MIN;
	volatile int64_t x479 = -16483LL;
	volatile int8_t x480 = INT8_MAX;
	int32_t t88 = -10694918;

	t88 = (x477<=(x478<=(x479*x480)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x486 = INT16_MIN;
	static int8_t x487 = INT8_MAX;
	int32_t x488 = -1;

	t89 = (x485<=(x486<=(x487*x488)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x489 = 91U;
	int32_t t90 = -6164;

	t90 = (x489<=(x490<=(x491*x492)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x493 = INT32_MAX;
	int8_t x494 = 0;
	static int16_t x495 = INT16_MIN;
	volatile int8_t x496 = 0;
	static int32_t t91 = 2359677;

	t91 = (x493<=(x494<=(x495*x496)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x501 = 15;
	int64_t x502 = INT64_MAX;
	static int32_t t92 = 119;

	t92 = (x501<=(x502<=(x503*x504)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x509 = 15039967U;
	int16_t x510 = 19;
	static uint64_t x511 = 6405336371943LLU;
	volatile int32_t t93 = 1126;

	t93 = (x509<=(x510<=(x511*x512)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x513 = INT64_MIN;
	int8_t x514 = -1;
	int8_t x515 = 1;
	volatile int32_t t94 = -12211;

	t94 = (x513<=(x514<=(x515*x516)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x522 = -1;
	volatile uint32_t x523 = UINT32_MAX;
	int8_t x524 = INT8_MAX;
	int32_t t95 = 20486;

	t95 = (x521<=(x522<=(x523*x524)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x525 = INT32_MIN;
	int64_t x527 = -1LL;
	int16_t x528 = -1;
	volatile int32_t t96 = 871797;

	t96 = (x525<=(x526<=(x527*x528)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint16_t x530 = 5003U;
	int8_t x531 = 1;
	static int32_t t97 = 0;

	t97 = (x529<=(x530<=(x531*x532)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x533 = INT16_MIN;
	uint8_t x535 = UINT8_MAX;
	int32_t t98 = 63363;

	t98 = (x533<=(x534<=(x535*x536)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x538 = -52809;
	int32_t x540 = -435717;
	static int32_t t99 = 6;

	t99 = (x537<=(x538<=(x539*x540)));

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


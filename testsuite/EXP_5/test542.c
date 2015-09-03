#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x13 = -1;
volatile int32_t t3 = -115607;
int64_t x17 = 222073LL;
int16_t x26 = -1;
volatile int32_t x29 = INT32_MAX;
int32_t x45 = -118617;
static int32_t x56 = -13011;
int64_t x57 = INT64_MAX;
volatile int8_t x61 = INT8_MAX;
volatile int32_t x63 = INT32_MIN;
static int64_t x80 = 30383574170LL;
volatile uint32_t x88 = 38U;
int16_t x99 = INT16_MAX;
uint8_t x101 = UINT8_MAX;
volatile int32_t x103 = -1;
volatile int32_t t22 = -1;
static int16_t x114 = -26;
int32_t t25 = 358919;
int64_t x132 = INT64_MAX;
int8_t x134 = 63;
uint8_t x142 = UINT8_MAX;
int64_t x146 = INT64_MIN;
static uint8_t x158 = 2U;
static int16_t x163 = -1;
int32_t x172 = INT32_MIN;
uint64_t x174 = 3802993367LLU;
int32_t t35 = 1908047;
static volatile int32_t x186 = -260808;
int32_t t38 = -3;
int32_t x193 = -1;
uint32_t x208 = 13U;
volatile int32_t t41 = -2;
volatile int64_t x223 = INT64_MIN;
static int64_t x229 = -17231883378183LL;
volatile int8_t x232 = 0;
int8_t x233 = INT8_MIN;
int32_t x235 = INT32_MIN;
int32_t t47 = 3126;
uint8_t x237 = UINT8_MAX;
uint32_t x238 = UINT32_MAX;
int32_t t48 = 113;
uint32_t x244 = 7521U;
volatile int32_t t49 = -3114;
int8_t x245 = 1;
int16_t x252 = -1;
static int16_t x253 = -1;
static int32_t x254 = INT32_MAX;
volatile uint32_t x256 = UINT32_MAX;
uint64_t x260 = UINT64_MAX;
int32_t x275 = -1;
volatile int32_t x276 = INT32_MAX;
static volatile int32_t t61 = 50548153;
int32_t x297 = INT32_MIN;
uint8_t x301 = 42U;
int32_t t64 = 78300;
static uint16_t x310 = 6106U;
volatile int16_t x311 = INT16_MAX;
int32_t t67 = 5;
static int32_t x322 = INT32_MIN;
int64_t x323 = INT64_MAX;
static int32_t t68 = -335;
static int16_t x325 = -2394;
volatile uint32_t x326 = 1145U;
int64_t x327 = INT64_MAX;
int16_t x329 = INT16_MIN;
volatile uint16_t x333 = 8160U;
volatile int32_t t71 = -53355;
static volatile int8_t x353 = INT8_MIN;
volatile uint64_t x354 = 41888900646256LLU;
int32_t x356 = -1;
volatile int32_t t75 = 68;
int32_t x357 = 0;
static volatile int32_t t78 = 58;
int32_t x369 = 196955;
volatile int32_t x370 = -1;
int16_t x397 = INT16_MAX;
static int64_t x399 = INT64_MIN;
int16_t x404 = 4;
static int16_t x415 = INT16_MIN;
static int64_t x421 = INT64_MAX;
static uint64_t x424 = UINT64_MAX;
volatile int16_t x427 = INT16_MIN;
int8_t x433 = 0;
uint16_t x434 = 936U;
static int16_t x445 = INT16_MIN;
int8_t x454 = INT8_MIN;
int8_t x462 = 7;
volatile int8_t x470 = INT8_MIN;
int64_t x478 = -1LL;
static int64_t x480 = -5697322440173928LL;


void f0(void) {
	uint8_t x1 = 45U;
	int8_t x2 = INT8_MIN;
	uint8_t x3 = 3U;
	int64_t x4 = -1LL;
	int32_t t0 = 15718129;

	t0 = (x1<((x2/x3)*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int16_t x6 = INT16_MIN;
	int8_t x7 = -1;
	uint8_t x8 = 63U;
	volatile int32_t t1 = -369;

	t1 = (x5<((x6/x7)*x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	volatile uint64_t x10 = UINT64_MAX;
	int8_t x11 = INT8_MIN;
	static int64_t x12 = INT64_MIN;
	volatile int32_t t2 = 2015;

	t2 = (x9<((x10/x11)*x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x14 = -1;
	volatile int8_t x15 = -1;
	static int8_t x16 = 0;

	t3 = (x13<((x14/x15)*x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x18 = 66U;
	static int64_t x19 = INT64_MAX;
	uint8_t x20 = 56U;
	int32_t t4 = 178;

	t4 = (x17<((x18/x19)*x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x21 = 1U;
	volatile int32_t x22 = 36523;
	int8_t x23 = 26;
	int8_t x24 = INT8_MAX;
	volatile int32_t t5 = -21822007;

	t5 = (x21<((x22/x23)*x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	volatile int32_t x27 = INT32_MIN;
	int16_t x28 = INT16_MAX;
	volatile int32_t t6 = 4234;

	t6 = (x25<((x26/x27)*x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x30 = -9;
	int32_t x31 = 199627;
	int32_t x32 = INT32_MAX;
	int32_t t7 = 6574;

	t7 = (x29<((x30/x31)*x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = UINT64_MAX;
	static uint32_t x42 = 3562U;
	static volatile int16_t x43 = INT16_MIN;
	int8_t x44 = 1;
	volatile int32_t t8 = 28;

	t8 = (x41<((x42/x43)*x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x46 = -1LL;
	uint8_t x47 = 40U;
	int8_t x48 = 3;
	volatile int32_t t9 = -1;

	t9 = (x45<((x46/x47)*x48));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x53 = UINT16_MAX;
	static int32_t x54 = -1;
	int64_t x55 = -1LL;
	int32_t t10 = 3076;

	t10 = (x53<((x54/x55)*x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x58 = 5U;
	uint16_t x59 = 1U;
	int64_t x60 = -1LL;
	static int32_t t11 = 31;

	t11 = (x57<((x58/x59)*x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x62 = INT64_MAX;
	int32_t x64 = INT32_MIN;
	int32_t t12 = 3657317;

	t12 = (x61<((x62/x63)*x64));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x65 = INT64_MIN;
	volatile int64_t x66 = INT64_MIN;
	volatile int64_t x67 = INT64_MIN;
	volatile int32_t x68 = 3038;
	volatile int32_t t13 = -32;

	t13 = (x65<((x66/x67)*x68));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x69 = UINT8_MAX;
	int8_t x70 = INT8_MIN;
	int8_t x71 = INT8_MIN;
	int32_t x72 = -2467856;
	int32_t t14 = 0;

	t14 = (x69<((x70/x71)*x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = INT32_MAX;
	int16_t x74 = -13774;
	int8_t x75 = INT8_MIN;
	volatile uint64_t x76 = UINT64_MAX;
	volatile int32_t t15 = -1089562;

	t15 = (x73<((x74/x75)*x76));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x77 = -8;
	static volatile int64_t x78 = 252014996LL;
	uint64_t x79 = UINT64_MAX;
	volatile int32_t t16 = -123793;

	t16 = (x77<((x78/x79)*x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x81 = 3U;
	uint8_t x82 = 4U;
	uint32_t x83 = UINT32_MAX;
	int64_t x84 = -1LL;
	int32_t t17 = 6479356;

	t17 = (x81<((x82/x83)*x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x85 = INT64_MIN;
	static int32_t x86 = -1;
	uint64_t x87 = 252504LLU;
	volatile int32_t t18 = 119;

	t18 = (x85<((x86/x87)*x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x89 = 660U;
	uint32_t x90 = 3694267U;
	int8_t x91 = INT8_MIN;
	uint16_t x92 = UINT16_MAX;
	int32_t t19 = -4998;

	t19 = (x89<((x90/x91)*x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = INT64_MIN;
	int32_t x94 = -1;
	uint8_t x95 = 1U;
	int16_t x96 = INT16_MAX;
	static volatile int32_t t20 = 512311984;

	t20 = (x93<((x94/x95)*x96));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x97 = 170715U;
	static int32_t x98 = 746804;
	uint64_t x100 = 1910112632429821LLU;
	volatile int32_t t21 = -1;

	t21 = (x97<((x98/x99)*x100));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x102 = 37186164;
	int16_t x104 = 1;

	t22 = (x101<((x102/x103)*x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x105 = UINT8_MAX;
	int32_t x106 = 1970556;
	uint64_t x107 = UINT64_MAX;
	volatile int8_t x108 = INT8_MAX;
	volatile int32_t t23 = 6;

	t23 = (x105<((x106/x107)*x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = INT8_MIN;
	static int8_t x110 = -9;
	volatile uint16_t x111 = UINT16_MAX;
	static volatile int8_t x112 = INT8_MAX;
	static volatile int32_t t24 = 116;

	t24 = (x109<((x110/x111)*x112));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = INT64_MIN;
	volatile int16_t x115 = INT16_MAX;
	volatile int16_t x116 = INT16_MAX;

	t25 = (x113<((x114/x115)*x116));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x129 = 396129;
	uint8_t x130 = UINT8_MAX;
	int64_t x131 = INT64_MIN;
	int32_t t26 = 744;

	t26 = (x129<((x130/x131)*x132));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x133 = 969127U;
	volatile int8_t x135 = 8;
	uint8_t x136 = 0U;
	volatile int32_t t27 = -1064673;

	t27 = (x133<((x134/x135)*x136));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x137 = UINT8_MAX;
	static uint8_t x138 = UINT8_MAX;
	volatile int8_t x139 = -6;
	static uint16_t x140 = 1U;
	volatile int32_t t28 = 196;

	t28 = (x137<((x138/x139)*x140));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x141 = 123;
	volatile uint8_t x143 = UINT8_MAX;
	static int32_t x144 = -556954707;
	volatile int32_t t29 = -132892913;

	t29 = (x141<((x142/x143)*x144));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x145 = 1;
	int64_t x147 = INT64_MIN;
	uint16_t x148 = 621U;
	static int32_t t30 = -35;

	t30 = (x145<((x146/x147)*x148));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x149 = INT16_MAX;
	int64_t x150 = 20LL;
	int64_t x151 = -201854307453LL;
	uint8_t x152 = 41U;
	volatile int32_t t31 = 3;

	t31 = (x149<((x150/x151)*x152));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x157 = -1;
	int32_t x159 = -1;
	uint16_t x160 = 1U;
	int32_t t32 = -1;

	t32 = (x157<((x158/x159)*x160));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x161 = INT64_MAX;
	uint64_t x162 = 59083421001360LLU;
	uint16_t x164 = UINT16_MAX;
	int32_t t33 = -257509;

	t33 = (x161<((x162/x163)*x164));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x169 = INT32_MIN;
	volatile uint32_t x170 = 11U;
	static int64_t x171 = INT64_MIN;
	int32_t t34 = -15;

	t34 = (x169<((x170/x171)*x172));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x173 = 32U;
	int8_t x175 = -1;
	static uint16_t x176 = UINT16_MAX;

	t35 = (x173<((x174/x175)*x176));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x177 = UINT64_MAX;
	volatile int8_t x178 = 3;
	volatile uint16_t x179 = UINT16_MAX;
	uint32_t x180 = UINT32_MAX;
	volatile int32_t t36 = -2188;

	t36 = (x177<((x178/x179)*x180));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x181 = UINT64_MAX;
	volatile uint16_t x182 = 124U;
	int8_t x183 = INT8_MAX;
	int64_t x184 = INT64_MIN;
	volatile int32_t t37 = 6833;

	t37 = (x181<((x182/x183)*x184));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x185 = INT64_MIN;
	static volatile int64_t x187 = -72LL;
	volatile uint8_t x188 = 50U;

	t38 = (x185<((x186/x187)*x188));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x194 = -60258135;
	static int8_t x195 = 50;
	int8_t x196 = -1;
	volatile int32_t t39 = 48430;

	t39 = (x193<((x194/x195)*x196));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x201 = 59U;
	volatile int64_t x202 = 2860579319LL;
	static int64_t x203 = INT64_MAX;
	int32_t x204 = INT32_MAX;
	volatile int32_t t40 = 9839688;

	t40 = (x201<((x202/x203)*x204));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x205 = -1;
	volatile int64_t x206 = -122842LL;
	uint8_t x207 = 12U;

	t41 = (x205<((x206/x207)*x208));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x209 = INT8_MIN;
	int16_t x210 = -1;
	uint16_t x211 = 1U;
	volatile uint32_t x212 = UINT32_MAX;
	int32_t t42 = -13647;

	t42 = (x209<((x210/x211)*x212));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x213 = -41;
	int64_t x214 = -1LL;
	volatile int32_t x215 = -1;
	int64_t x216 = -1LL;
	static volatile int32_t t43 = -29;

	t43 = (x213<((x214/x215)*x216));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x221 = 165U;
	int8_t x222 = INT8_MAX;
	volatile int16_t x224 = -1;
	volatile int32_t t44 = -940954;

	t44 = (x221<((x222/x223)*x224));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x225 = 5;
	int32_t x226 = -1;
	volatile int8_t x227 = 1;
	int64_t x228 = 42072850691934LL;
	volatile int32_t t45 = -13302;

	t45 = (x225<((x226/x227)*x228));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x230 = 0U;
	volatile uint8_t x231 = UINT8_MAX;
	int32_t t46 = 5785;

	t46 = (x229<((x230/x231)*x232));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x234 = INT16_MIN;
	int16_t x236 = INT16_MIN;

	t47 = (x233<((x234/x235)*x236));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x239 = INT32_MIN;
	static int32_t x240 = INT32_MIN;

	t48 = (x237<((x238/x239)*x240));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x241 = INT16_MIN;
	static int64_t x242 = -1LL;
	int64_t x243 = -1LL;

	t49 = (x241<((x242/x243)*x244));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x246 = -1LL;
	uint64_t x247 = 310837034LLU;
	int8_t x248 = -24;
	static int32_t t50 = -5540;

	t50 = (x245<((x246/x247)*x248));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x249 = -1;
	int64_t x250 = -671502LL;
	static volatile int64_t x251 = -1LL;
	static volatile int32_t t51 = 857723;

	t51 = (x249<((x250/x251)*x252));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x255 = INT8_MIN;
	volatile int32_t t52 = 28;

	t52 = (x253<((x254/x255)*x256));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x257 = 0U;
	int16_t x258 = -1;
	int32_t x259 = INT32_MAX;
	int32_t t53 = -826419187;

	t53 = (x257<((x258/x259)*x260));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x261 = UINT64_MAX;
	volatile int32_t x262 = INT32_MIN;
	volatile int32_t x263 = INT32_MAX;
	uint8_t x264 = 0U;
	volatile int32_t t54 = -219;

	t54 = (x261<((x262/x263)*x264));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x269 = 0;
	int64_t x270 = INT64_MAX;
	int8_t x271 = INT8_MAX;
	static int8_t x272 = -1;
	int32_t t55 = 1;

	t55 = (x269<((x270/x271)*x272));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x273 = 239066671;
	static uint32_t x274 = UINT32_MAX;
	int32_t t56 = 236242207;

	t56 = (x273<((x274/x275)*x276));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x277 = INT64_MAX;
	int64_t x278 = -223038353LL;
	volatile int32_t x279 = INT32_MIN;
	uint16_t x280 = 1U;
	volatile int32_t t57 = 6984;

	t57 = (x277<((x278/x279)*x280));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x281 = -6289;
	uint16_t x282 = UINT16_MAX;
	volatile int64_t x283 = -257083817023080LL;
	uint16_t x284 = UINT16_MAX;
	static int32_t t58 = 5003;

	t58 = (x281<((x282/x283)*x284));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x285 = INT32_MIN;
	int8_t x286 = INT8_MAX;
	static uint64_t x287 = UINT64_MAX;
	int16_t x288 = 1167;
	int32_t t59 = -15110;

	t59 = (x285<((x286/x287)*x288));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x289 = 32;
	uint64_t x290 = UINT64_MAX;
	volatile int64_t x291 = 227LL;
	int64_t x292 = -2LL;
	int32_t t60 = -96;

	t60 = (x289<((x290/x291)*x292));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x293 = UINT8_MAX;
	uint16_t x294 = UINT16_MAX;
	static int64_t x295 = INT64_MAX;
	int8_t x296 = 37;

	t61 = (x293<((x294/x295)*x296));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x298 = INT16_MIN;
	int64_t x299 = -1LL;
	static volatile int64_t x300 = -35134511LL;
	static int32_t t62 = 0;

	t62 = (x297<((x298/x299)*x300));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x302 = 32548U;
	int16_t x303 = -277;
	uint8_t x304 = UINT8_MAX;
	volatile int32_t t63 = -241792;

	t63 = (x301<((x302/x303)*x304));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x305 = -1LL;
	volatile int8_t x306 = 26;
	uint64_t x307 = 1369148020594480327LLU;
	static int16_t x308 = 1;

	t64 = (x305<((x306/x307)*x308));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x309 = INT16_MIN;
	int8_t x312 = INT8_MIN;
	volatile int32_t t65 = 16339;

	t65 = (x309<((x310/x311)*x312));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x313 = -1613;
	volatile uint8_t x314 = 121U;
	int16_t x315 = -1;
	volatile int16_t x316 = -1749;
	volatile int32_t t66 = -332;

	t66 = (x313<((x314/x315)*x316));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x317 = 932201869U;
	int16_t x318 = INT16_MIN;
	uint64_t x319 = 32LLU;
	int32_t x320 = INT32_MIN;

	t67 = (x317<((x318/x319)*x320));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x321 = INT64_MIN;
	int8_t x324 = -1;

	t68 = (x321<((x322/x323)*x324));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x328 = 2135052143219LLU;
	int32_t t69 = 2781813;

	t69 = (x325<((x326/x327)*x328));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x330 = -599495704819LL;
	int32_t x331 = INT32_MIN;
	int16_t x332 = -1;
	int32_t t70 = -6453002;

	t70 = (x329<((x330/x331)*x332));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x334 = -1LL;
	volatile int8_t x335 = INT8_MIN;
	uint64_t x336 = UINT64_MAX;

	t71 = (x333<((x334/x335)*x336));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x337 = UINT8_MAX;
	uint16_t x338 = 0U;
	int8_t x339 = -46;
	uint64_t x340 = 2714728477309859LLU;
	int32_t t72 = -4656;

	t72 = (x337<((x338/x339)*x340));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x341 = 4U;
	volatile uint8_t x342 = UINT8_MAX;
	int8_t x343 = -1;
	int64_t x344 = 16534353717087LL;
	volatile int32_t t73 = 56147832;

	t73 = (x341<((x342/x343)*x344));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x345 = 22LLU;
	int16_t x346 = INT16_MAX;
	volatile int64_t x347 = 1LL;
	int16_t x348 = INT16_MAX;
	volatile int32_t t74 = 251475926;

	t74 = (x345<((x346/x347)*x348));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x355 = 27110951LLU;

	t75 = (x353<((x354/x355)*x356));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x358 = -1;
	static uint16_t x359 = 64U;
	uint64_t x360 = 112321477LLU;
	volatile int32_t t76 = -267956441;

	t76 = (x357<((x358/x359)*x360));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x361 = UINT16_MAX;
	volatile int64_t x362 = -26LL;
	int8_t x363 = INT8_MAX;
	int32_t x364 = -1;
	int32_t t77 = 30;

	t77 = (x361<((x362/x363)*x364));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x365 = -1LL;
	int16_t x366 = -1;
	uint32_t x367 = 182942U;
	uint64_t x368 = 9LLU;

	t78 = (x365<((x366/x367)*x368));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x371 = -29;
	uint8_t x372 = 26U;
	volatile int32_t t79 = 131839;

	t79 = (x369<((x370/x371)*x372));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x373 = INT16_MIN;
	int8_t x374 = INT8_MIN;
	uint8_t x375 = 57U;
	volatile uint64_t x376 = 166515199LLU;
	volatile int32_t t80 = -593;

	t80 = (x373<((x374/x375)*x376));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x377 = -1LL;
	uint8_t x378 = 4U;
	int16_t x379 = -1;
	uint8_t x380 = 13U;
	volatile int32_t t81 = 3518116;

	t81 = (x377<((x378/x379)*x380));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x381 = 2U;
	static volatile int32_t x382 = -51436179;
	uint32_t x383 = UINT32_MAX;
	uint8_t x384 = 14U;
	int32_t t82 = 92;

	t82 = (x381<((x382/x383)*x384));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x393 = 1U;
	int64_t x394 = INT64_MIN;
	int32_t x395 = -530;
	int8_t x396 = 0;
	volatile int32_t t83 = 112424073;

	t83 = (x393<((x394/x395)*x396));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x398 = INT8_MIN;
	volatile int8_t x400 = -13;
	volatile int32_t t84 = -3147397;

	t84 = (x397<((x398/x399)*x400));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x401 = UINT8_MAX;
	uint8_t x402 = 23U;
	int32_t x403 = 399191;
	volatile int32_t t85 = 2900;

	t85 = (x401<((x402/x403)*x404));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x413 = -4972801576415LL;
	int32_t x414 = 372089;
	static int16_t x416 = INT16_MIN;
	int32_t t86 = 4;

	t86 = (x413<((x414/x415)*x416));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x417 = INT64_MIN;
	volatile int16_t x418 = -1;
	static int32_t x419 = -1219;
	static int32_t x420 = INT32_MIN;
	volatile int32_t t87 = -6535;

	t87 = (x417<((x418/x419)*x420));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x422 = -1;
	int32_t x423 = INT32_MIN;
	static int32_t t88 = -465839;

	t88 = (x421<((x422/x423)*x424));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x425 = 189;
	static int64_t x426 = INT64_MIN;
	volatile uint64_t x428 = UINT64_MAX;
	int32_t t89 = -8945348;

	t89 = (x425<((x426/x427)*x428));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x429 = INT16_MIN;
	int64_t x430 = INT64_MIN;
	int32_t x431 = 212220;
	static uint8_t x432 = 41U;
	int32_t t90 = 1065871;

	t90 = (x429<((x430/x431)*x432));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x435 = 80U;
	static int16_t x436 = 920;
	static volatile int32_t t91 = 252070;

	t91 = (x433<((x434/x435)*x436));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x437 = INT16_MAX;
	volatile int32_t x438 = 1;
	volatile int32_t x439 = 4;
	uint64_t x440 = 57848400585693594LLU;
	volatile int32_t t92 = -136;

	t92 = (x437<((x438/x439)*x440));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x446 = INT64_MIN;
	int32_t x447 = INT32_MIN;
	int16_t x448 = INT16_MIN;
	volatile int32_t t93 = -1;

	t93 = (x445<((x446/x447)*x448));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x449 = -1;
	volatile int16_t x450 = -23;
	int8_t x451 = 2;
	uint8_t x452 = 8U;
	int32_t t94 = -15;

	t94 = (x449<((x450/x451)*x452));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x453 = 3U;
	uint64_t x455 = UINT64_MAX;
	static int32_t x456 = -1;
	int32_t t95 = 1;

	t95 = (x453<((x454/x455)*x456));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x457 = INT64_MIN;
	static int64_t x458 = -4008123350855LL;
	volatile int64_t x459 = INT64_MIN;
	int16_t x460 = -1;
	int32_t t96 = 29517;

	t96 = (x457<((x458/x459)*x460));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x461 = 1;
	int16_t x463 = INT16_MIN;
	uint32_t x464 = 649711775U;
	int32_t t97 = 44540236;

	t97 = (x461<((x462/x463)*x464));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x469 = 19525826U;
	static volatile uint64_t x471 = UINT64_MAX;
	volatile int32_t x472 = INT32_MIN;
	static volatile int32_t t98 = -4828169;

	t98 = (x469<((x470/x471)*x472));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x477 = -110;
	volatile int8_t x479 = -1;
	int32_t t99 = -7;

	t99 = (x477<((x478/x479)*x480));

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


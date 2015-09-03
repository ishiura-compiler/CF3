#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x6 = INT8_MIN;
int16_t x8 = INT16_MAX;
int16_t x13 = 22;
int16_t x14 = -1;
int8_t x22 = INT8_MIN;
static volatile int32_t t3 = 1905;
int32_t x26 = INT32_MAX;
volatile int8_t x37 = INT8_MIN;
static int64_t x40 = -69LL;
uint8_t x41 = 0U;
int64_t x43 = -1LL;
volatile int32_t t6 = 1;
int16_t x51 = INT16_MAX;
int8_t x56 = INT8_MAX;
int8_t x62 = INT8_MIN;
volatile int8_t x96 = -1;
int64_t x105 = INT64_MAX;
int16_t x106 = INT16_MIN;
int8_t x118 = INT8_MAX;
int8_t x121 = -52;
volatile int32_t x124 = -1;
int64_t x127 = -357LL;
int64_t x147 = 34078384656249LL;
uint16_t x148 = UINT16_MAX;
int32_t t25 = -16;
volatile uint32_t x167 = UINT32_MAX;
int32_t x168 = INT32_MAX;
uint64_t x169 = UINT64_MAX;
static uint16_t x172 = 5U;
volatile int16_t x177 = INT16_MIN;
int32_t t30 = 662336866;
static uint16_t x184 = UINT16_MAX;
volatile int32_t t31 = 202016651;
static volatile int32_t t32 = -12;
int32_t x190 = INT32_MAX;
int8_t x195 = INT8_MIN;
int64_t x205 = INT64_MAX;
uint16_t x206 = 176U;
volatile int64_t x208 = -1LL;
static volatile int32_t x209 = 192630352;
static int16_t x216 = -1;
int16_t x226 = 27;
int32_t t41 = 674307;
static volatile int8_t x229 = -1;
int16_t x233 = -3;
static volatile int32_t x257 = INT32_MAX;
int32_t x267 = -25115283;
int32_t x268 = -1;
int32_t x273 = INT32_MAX;
int64_t x275 = 800LL;
static int8_t x277 = INT8_MIN;
uint8_t x299 = UINT8_MAX;
int32_t x309 = INT32_MIN;
uint8_t x311 = UINT8_MAX;
int32_t t55 = 41;
int16_t x326 = INT16_MIN;
volatile int32_t t58 = -9;
int16_t x340 = -1;
volatile int32_t t62 = -25528;
static int8_t x366 = INT8_MIN;
int16_t x367 = INT16_MAX;
static uint64_t x371 = 357240100197172834LLU;
uint64_t x383 = UINT64_MAX;
static int32_t t67 = 1538989;
int64_t x390 = INT64_MIN;
uint32_t x392 = UINT32_MAX;
static int64_t x393 = -1LL;
int32_t t70 = -185752;
int64_t x397 = -1LL;
int8_t x429 = INT8_MAX;
int64_t x431 = INT64_MAX;
uint64_t x435 = UINT64_MAX;
int32_t t76 = -3332975;
uint64_t x443 = 110LLU;
int8_t x444 = -1;
static int64_t x449 = 534LL;
int32_t t78 = 10776;
static int8_t x454 = INT8_MAX;
int8_t x455 = -1;
int32_t x456 = -1;
uint64_t x460 = UINT64_MAX;
int32_t t80 = 1;
int32_t t83 = 7445709;
volatile uint16_t x481 = 119U;
static volatile int32_t t84 = 7;
int32_t x489 = INT32_MAX;
int8_t x495 = -1;
int32_t t88 = 215;
int16_t x518 = INT16_MAX;
int32_t x519 = -4;
int8_t x520 = 1;
int8_t x532 = INT8_MAX;
uint64_t x535 = UINT64_MAX;
static int32_t t94 = 69092;
volatile uint8_t x538 = UINT8_MAX;
volatile int8_t x546 = INT8_MIN;


void f0(void) {
	volatile int64_t x1 = INT64_MAX;
	int16_t x2 = 6;
	uint64_t x3 = 5119207058LLU;
	uint16_t x4 = 14U;
	volatile int32_t t0 = 68005;

	t0 = (x1==(x2/(x3*x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	uint16_t x7 = 7U;
	int32_t t1 = -398523;

	t1 = (x5==(x6/(x7*x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x15 = INT32_MIN;
	volatile int64_t x16 = -1LL;
	volatile int32_t t2 = -1485407;

	t2 = (x13==(x14/(x15*x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x21 = 1998676770U;
	int8_t x23 = -1;
	uint16_t x24 = 161U;

	t3 = (x21==(x22/(x23*x24)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x25 = -5;
	int64_t x27 = INT64_MAX;
	static uint64_t x28 = 1530645165LLU;
	int32_t t4 = -26017191;

	t4 = (x25==(x26/(x27*x28)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x38 = INT32_MAX;
	int8_t x39 = -3;
	int32_t t5 = -4;

	t5 = (x37==(x38/(x39*x40)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x42 = UINT8_MAX;
	volatile int8_t x44 = INT8_MIN;

	t6 = (x41==(x42/(x43*x44)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x45 = UINT32_MAX;
	static int8_t x46 = -13;
	int64_t x47 = -436279257460LL;
	uint16_t x48 = 812U;
	int32_t t7 = -214;

	t7 = (x45==(x46/(x47*x48)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x49 = INT16_MIN;
	static uint8_t x50 = 42U;
	int64_t x52 = 4421998LL;
	static int32_t t8 = -13786319;

	t8 = (x49==(x50/(x51*x52)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x53 = -38873043892874LL;
	uint32_t x54 = UINT32_MAX;
	uint8_t x55 = 4U;
	static volatile int32_t t9 = -2690253;

	t9 = (x53==(x54/(x55*x56)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x57 = 256391LLU;
	int8_t x58 = INT8_MIN;
	uint16_t x59 = 3091U;
	int32_t x60 = -1;
	volatile int32_t t10 = 2;

	t10 = (x57==(x58/(x59*x60)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x61 = 3222466LLU;
	volatile int16_t x63 = 8782;
	int16_t x64 = INT16_MIN;
	volatile int32_t t11 = 0;

	t11 = (x61==(x62/(x63*x64)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x65 = 6U;
	uint16_t x66 = 477U;
	uint64_t x67 = 1779LLU;
	volatile int8_t x68 = INT8_MIN;
	static int32_t t12 = -1385;

	t12 = (x65==(x66/(x67*x68)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x77 = 56U;
	int16_t x78 = INT16_MIN;
	static int64_t x79 = 25412686LL;
	int8_t x80 = -1;
	int32_t t13 = -786019079;

	t13 = (x77==(x78/(x79*x80)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x93 = INT8_MAX;
	static int32_t x94 = -33360;
	int16_t x95 = INT16_MIN;
	static int32_t t14 = -47;

	t14 = (x93==(x94/(x95*x96)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x101 = INT64_MAX;
	static volatile int16_t x102 = INT16_MAX;
	int16_t x103 = 920;
	static int8_t x104 = 14;
	static volatile int32_t t15 = -7403797;

	t15 = (x101==(x102/(x103*x104)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x107 = INT8_MIN;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t16 = -1;

	t16 = (x105==(x106/(x107*x108)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x109 = INT32_MIN;
	int16_t x110 = INT16_MAX;
	volatile int8_t x111 = -1;
	int64_t x112 = -3089960797137LL;
	static volatile int32_t t17 = -1;

	t17 = (x109==(x110/(x111*x112)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x113 = INT8_MIN;
	static int16_t x114 = INT16_MIN;
	static int8_t x115 = -1;
	uint32_t x116 = 2021858U;
	static volatile int32_t t18 = -5;

	t18 = (x113==(x114/(x115*x116)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x117 = INT16_MIN;
	volatile uint8_t x119 = UINT8_MAX;
	static int16_t x120 = -15003;
	static int32_t t19 = 16;

	t19 = (x117==(x118/(x119*x120)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x122 = 3135U;
	int16_t x123 = INT16_MAX;
	volatile int32_t t20 = 56;

	t20 = (x121==(x122/(x123*x124)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x125 = UINT8_MAX;
	int8_t x126 = -5;
	static int64_t x128 = -1LL;
	volatile int32_t t21 = 2;

	t21 = (x125==(x126/(x127*x128)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x133 = 3U;
	volatile int32_t x134 = INT32_MIN;
	int8_t x135 = -4;
	int64_t x136 = -1LL;
	volatile int32_t t22 = -758446804;

	t22 = (x133==(x134/(x135*x136)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x137 = UINT32_MAX;
	int32_t x138 = -30984761;
	volatile int8_t x139 = INT8_MIN;
	uint8_t x140 = 1U;
	volatile int32_t t23 = 6951;

	t23 = (x137==(x138/(x139*x140)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x141 = 6187509LL;
	static volatile int16_t x142 = INT16_MIN;
	volatile int8_t x143 = INT8_MAX;
	uint32_t x144 = 83256280U;
	volatile int32_t t24 = 428431;

	t24 = (x141==(x142/(x143*x144)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x145 = INT32_MIN;
	uint64_t x146 = UINT64_MAX;

	t25 = (x145==(x146/(x147*x148)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x157 = 529U;
	static int16_t x158 = -1421;
	volatile int32_t x159 = -1;
	uint64_t x160 = 240587931622LLU;
	volatile int32_t t26 = -37341;

	t26 = (x157==(x158/(x159*x160)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x161 = -24095351;
	int8_t x162 = 15;
	int16_t x163 = 1;
	int16_t x164 = -1;
	int32_t t27 = -2698;

	t27 = (x161==(x162/(x163*x164)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x165 = -4;
	volatile int64_t x166 = -3475119222641LL;
	static volatile int32_t t28 = 46950963;

	t28 = (x165==(x166/(x167*x168)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x170 = UINT16_MAX;
	uint16_t x171 = 25043U;
	static int32_t t29 = -1;

	t29 = (x169==(x170/(x171*x172)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x178 = 1730;
	uint64_t x179 = 20873292062450LLU;
	uint8_t x180 = 74U;

	t30 = (x177==(x178/(x179*x180)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x181 = -3412918;
	volatile int64_t x182 = 60885548311678LL;
	static volatile int16_t x183 = -1;

	t31 = (x181==(x182/(x183*x184)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x185 = -14;
	static int64_t x186 = -1LL;
	static volatile int16_t x187 = -1;
	static volatile int16_t x188 = INT16_MAX;

	t32 = (x185==(x186/(x187*x188)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x189 = 7674U;
	static int64_t x191 = -6799LL;
	uint16_t x192 = 582U;
	static int32_t t33 = 44;

	t33 = (x189==(x190/(x191*x192)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x193 = INT32_MIN;
	static int32_t x194 = INT32_MAX;
	volatile int16_t x196 = INT16_MIN;
	int32_t t34 = -3587;

	t34 = (x193==(x194/(x195*x196)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x197 = 6505662567356571LLU;
	int32_t x198 = INT32_MIN;
	uint32_t x199 = 110U;
	uint32_t x200 = UINT32_MAX;
	volatile int32_t t35 = -7413;

	t35 = (x197==(x198/(x199*x200)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x201 = INT32_MIN;
	int16_t x202 = -1;
	uint16_t x203 = 3U;
	volatile uint16_t x204 = UINT16_MAX;
	volatile int32_t t36 = 4048;

	t36 = (x201==(x202/(x203*x204)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x207 = INT32_MAX;
	volatile int32_t t37 = -959727928;

	t37 = (x205==(x206/(x207*x208)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x210 = UINT8_MAX;
	uint64_t x211 = 373889854231386084LLU;
	volatile uint32_t x212 = UINT32_MAX;
	int32_t t38 = -272;

	t38 = (x209==(x210/(x211*x212)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x213 = INT32_MIN;
	volatile int16_t x214 = -11556;
	uint8_t x215 = 1U;
	int32_t t39 = -675604;

	t39 = (x213==(x214/(x215*x216)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x221 = 895045LLU;
	uint64_t x222 = UINT64_MAX;
	int16_t x223 = INT16_MAX;
	int8_t x224 = 1;
	static volatile int32_t t40 = 119025137;

	t40 = (x221==(x222/(x223*x224)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x225 = UINT64_MAX;
	uint16_t x227 = 8349U;
	uint32_t x228 = 114U;

	t41 = (x225==(x226/(x227*x228)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x230 = 131U;
	int32_t x231 = -1;
	int64_t x232 = INT64_MAX;
	volatile int32_t t42 = -1067;

	t42 = (x229==(x230/(x231*x232)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x234 = UINT64_MAX;
	static int32_t x235 = -1;
	int64_t x236 = 111719075LL;
	volatile int32_t t43 = 993;

	t43 = (x233==(x234/(x235*x236)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x237 = 0U;
	int64_t x238 = INT64_MIN;
	volatile uint32_t x239 = UINT32_MAX;
	uint16_t x240 = UINT16_MAX;
	int32_t t44 = -150;

	t44 = (x237==(x238/(x239*x240)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x241 = INT32_MIN;
	volatile int32_t x242 = INT32_MIN;
	int32_t x243 = INT32_MAX;
	int8_t x244 = -1;
	volatile int32_t t45 = 58;

	t45 = (x241==(x242/(x243*x244)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x253 = INT64_MAX;
	uint64_t x254 = UINT64_MAX;
	uint32_t x255 = 77329342U;
	volatile int32_t x256 = 50306;
	volatile int32_t t46 = 421987508;

	t46 = (x253==(x254/(x255*x256)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x258 = -1;
	uint32_t x259 = 457U;
	static int32_t x260 = 663;
	volatile int32_t t47 = -3;

	t47 = (x257==(x258/(x259*x260)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x265 = -1;
	int8_t x266 = INT8_MIN;
	volatile int32_t t48 = 59111252;

	t48 = (x265==(x266/(x267*x268)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x269 = 31;
	int8_t x270 = -1;
	int8_t x271 = INT8_MIN;
	int64_t x272 = 2870568335LL;
	int32_t t49 = 12911164;

	t49 = (x269==(x270/(x271*x272)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x274 = 144U;
	int64_t x276 = -361532311003LL;
	volatile int32_t t50 = -16981793;

	t50 = (x273==(x274/(x275*x276)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x278 = 42;
	int8_t x279 = 5;
	int64_t x280 = -1LL;
	int32_t t51 = -391022;

	t51 = (x277==(x278/(x279*x280)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x297 = INT32_MIN;
	volatile uint32_t x298 = 2U;
	uint8_t x300 = UINT8_MAX;
	int32_t t52 = -127;

	t52 = (x297==(x298/(x299*x300)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x301 = UINT8_MAX;
	uint32_t x302 = 1748850206U;
	static uint16_t x303 = UINT16_MAX;
	static int16_t x304 = 1;
	volatile int32_t t53 = 2068249;

	t53 = (x301==(x302/(x303*x304)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x305 = INT16_MAX;
	volatile uint8_t x306 = UINT8_MAX;
	uint64_t x307 = 953456159089412LLU;
	volatile int64_t x308 = -382215400253867LL;
	int32_t t54 = 184507591;

	t54 = (x305==(x306/(x307*x308)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x310 = -1;
	uint64_t x312 = 3389699271470414LLU;

	t55 = (x309==(x310/(x311*x312)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x313 = INT8_MIN;
	uint32_t x314 = 2064656312U;
	uint16_t x315 = UINT16_MAX;
	int8_t x316 = INT8_MIN;
	int32_t t56 = 25425;

	t56 = (x313==(x314/(x315*x316)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x317 = INT16_MAX;
	volatile int16_t x318 = INT16_MAX;
	uint32_t x319 = 1U;
	uint8_t x320 = UINT8_MAX;
	int32_t t57 = 46277440;

	t57 = (x317==(x318/(x319*x320)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x325 = 2;
	static int16_t x327 = INT16_MIN;
	int16_t x328 = 7312;

	t58 = (x325==(x326/(x327*x328)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x329 = 6423038;
	int8_t x330 = INT8_MIN;
	int32_t x331 = 1133;
	uint32_t x332 = 20599028U;
	int32_t t59 = -511547656;

	t59 = (x329==(x330/(x331*x332)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x333 = 10U;
	volatile uint64_t x334 = 961971256848393LLU;
	static volatile int32_t x335 = -1;
	int16_t x336 = -1;
	volatile int32_t t60 = -74756;

	t60 = (x333==(x334/(x335*x336)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x337 = INT8_MAX;
	static uint8_t x338 = UINT8_MAX;
	uint16_t x339 = UINT16_MAX;
	int32_t t61 = -1075;

	t61 = (x337==(x338/(x339*x340)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x341 = 2U;
	int16_t x342 = INT16_MIN;
	uint32_t x343 = 729420590U;
	volatile uint8_t x344 = 4U;

	t62 = (x341==(x342/(x343*x344)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x361 = INT64_MIN;
	static int8_t x362 = 3;
	static int16_t x363 = -1;
	static uint64_t x364 = 971916746501274252LLU;
	volatile int32_t t63 = -60529;

	t63 = (x361==(x362/(x363*x364)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x365 = -27263980393LL;
	int16_t x368 = -1;
	int32_t t64 = -150;

	t64 = (x365==(x366/(x367*x368)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x369 = 16171U;
	static int16_t x370 = INT16_MIN;
	int8_t x372 = INT8_MIN;
	int32_t t65 = -82942598;

	t65 = (x369==(x370/(x371*x372)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x373 = -1;
	volatile uint16_t x374 = 67U;
	int16_t x375 = INT16_MAX;
	int16_t x376 = INT16_MIN;
	volatile int32_t t66 = 19986979;

	t66 = (x373==(x374/(x375*x376)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x381 = -21LL;
	int64_t x382 = 7573631159561204LL;
	volatile int64_t x384 = INT64_MIN;

	t67 = (x381==(x382/(x383*x384)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x385 = 95382U;
	uint64_t x386 = 51005LLU;
	int8_t x387 = INT8_MIN;
	uint8_t x388 = 17U;
	static volatile int32_t t68 = -904935741;

	t68 = (x385==(x386/(x387*x388)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x389 = 57;
	volatile int8_t x391 = 1;
	int32_t t69 = 1;

	t69 = (x389==(x390/(x391*x392)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x394 = INT32_MIN;
	static int8_t x395 = -1;
	int64_t x396 = -3595821147LL;

	t70 = (x393==(x394/(x395*x396)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x398 = UINT16_MAX;
	static volatile int16_t x399 = INT16_MAX;
	int16_t x400 = INT16_MIN;
	int32_t t71 = -28313;

	t71 = (x397==(x398/(x399*x400)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x409 = UINT64_MAX;
	int8_t x410 = INT8_MAX;
	int8_t x411 = -1;
	volatile int64_t x412 = -1LL;
	static volatile int32_t t72 = 92;

	t72 = (x409==(x410/(x411*x412)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x421 = -1LL;
	static int64_t x422 = -2054977844054413226LL;
	static int32_t x423 = INT32_MAX;
	int64_t x424 = -1LL;
	static int32_t t73 = -793462037;

	t73 = (x421==(x422/(x423*x424)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x430 = 543689U;
	volatile uint64_t x432 = 27614175207LLU;
	volatile int32_t t74 = -2045297;

	t74 = (x429==(x430/(x431*x432)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x433 = INT32_MIN;
	int16_t x434 = -13976;
	int16_t x436 = 436;
	int32_t t75 = 1;

	t75 = (x433==(x434/(x435*x436)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x437 = -1;
	uint64_t x438 = UINT64_MAX;
	volatile uint64_t x439 = 12353LLU;
	int64_t x440 = INT64_MIN;

	t76 = (x437==(x438/(x439*x440)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x441 = INT8_MIN;
	uint16_t x442 = UINT16_MAX;
	volatile int32_t t77 = 113862;

	t77 = (x441==(x442/(x443*x444)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x450 = 3719U;
	uint32_t x451 = 1500U;
	int8_t x452 = INT8_MAX;

	t78 = (x449==(x450/(x451*x452)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x453 = INT32_MIN;
	volatile int32_t t79 = 59029226;

	t79 = (x453==(x454/(x455*x456)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x457 = UINT8_MAX;
	int32_t x458 = INT32_MIN;
	uint32_t x459 = 175520414U;

	t80 = (x457==(x458/(x459*x460)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x461 = INT32_MIN;
	uint16_t x462 = UINT16_MAX;
	static uint32_t x463 = UINT32_MAX;
	int8_t x464 = INT8_MAX;
	volatile int32_t t81 = -6;

	t81 = (x461==(x462/(x463*x464)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x469 = UINT8_MAX;
	int16_t x470 = 8;
	static uint64_t x471 = 49LLU;
	int32_t x472 = -1;
	volatile int32_t t82 = 23;

	t82 = (x469==(x470/(x471*x472)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x473 = 82U;
	int64_t x474 = INT64_MIN;
	static int8_t x475 = -36;
	int64_t x476 = 540842254261LL;

	t83 = (x473==(x474/(x475*x476)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x482 = -980691098LL;
	uint64_t x483 = 269772751821724LLU;
	int64_t x484 = 568596854532697570LL;

	t84 = (x481==(x482/(x483*x484)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x485 = INT64_MIN;
	uint64_t x486 = 63380481026923551LLU;
	uint64_t x487 = UINT64_MAX;
	int8_t x488 = -3;
	int32_t t85 = -5;

	t85 = (x485==(x486/(x487*x488)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x490 = -1;
	volatile int32_t x491 = -1;
	uint8_t x492 = UINT8_MAX;
	int32_t t86 = 564449;

	t86 = (x489==(x490/(x491*x492)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x493 = UINT64_MAX;
	int32_t x494 = -1;
	volatile uint64_t x496 = UINT64_MAX;
	int32_t t87 = 3;

	t87 = (x493==(x494/(x495*x496)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x497 = -1;
	int32_t x498 = -1;
	static int8_t x499 = INT8_MIN;
	static int8_t x500 = -1;

	t88 = (x497==(x498/(x499*x500)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x505 = -1;
	static volatile int16_t x506 = -1;
	volatile uint64_t x507 = 323603LLU;
	uint16_t x508 = UINT16_MAX;
	static volatile int32_t t89 = 0;

	t89 = (x505==(x506/(x507*x508)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x517 = 225560551LLU;
	volatile int32_t t90 = 15620295;

	t90 = (x517==(x518/(x519*x520)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x521 = UINT64_MAX;
	int8_t x522 = -3;
	uint8_t x523 = UINT8_MAX;
	static volatile uint32_t x524 = UINT32_MAX;
	volatile int32_t t91 = 0;

	t91 = (x521==(x522/(x523*x524)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x525 = 647U;
	static int32_t x526 = 484;
	int32_t x527 = -1;
	uint64_t x528 = UINT64_MAX;
	static int32_t t92 = -4160;

	t92 = (x525==(x526/(x527*x528)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x529 = INT32_MIN;
	uint64_t x530 = 200615738259173LLU;
	int16_t x531 = -44;
	int32_t t93 = 788806022;

	t93 = (x529==(x530/(x531*x532)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x533 = INT64_MIN;
	int16_t x534 = INT16_MIN;
	uint16_t x536 = 10649U;

	t94 = (x533==(x534/(x535*x536)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x537 = 1U;
	int8_t x539 = INT8_MIN;
	uint8_t x540 = UINT8_MAX;
	volatile int32_t t95 = 23164;

	t95 = (x537==(x538/(x539*x540)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x541 = UINT32_MAX;
	uint64_t x542 = 96342315049LLU;
	int8_t x543 = 56;
	uint16_t x544 = UINT16_MAX;
	int32_t t96 = 1;

	t96 = (x541==(x542/(x543*x544)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x545 = INT32_MAX;
	int16_t x547 = INT16_MIN;
	volatile uint32_t x548 = UINT32_MAX;
	int32_t t97 = 763;

	t97 = (x545==(x546/(x547*x548)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x549 = 38U;
	uint8_t x550 = 3U;
	int32_t x551 = -15081;
	volatile int32_t x552 = -1;
	static int32_t t98 = -155149369;

	t98 = (x549==(x550/(x551*x552)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x553 = 7;
	static int64_t x554 = -40617696LL;
	static int16_t x555 = INT16_MIN;
	int16_t x556 = -1435;
	int32_t t99 = 51772914;

	t99 = (x553==(x554/(x555*x556)));

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


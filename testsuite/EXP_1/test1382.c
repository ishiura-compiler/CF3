#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x1 = 1317U;
int64_t x9 = -84728238465211LL;
static uint64_t x10 = UINT64_MAX;
static int8_t x14 = INT8_MIN;
uint32_t x15 = 1654103537U;
static int64_t t3 = -274343087476924941LL;
volatile uint8_t x26 = 29U;
uint8_t x29 = 15U;
static volatile int32_t x32 = -1243956;
static int64_t x34 = INT64_MAX;
int16_t x35 = INT16_MAX;
int32_t x44 = -1;
static int64_t x47 = INT64_MIN;
volatile int16_t x48 = INT16_MAX;
volatile int32_t t13 = 97646;
int8_t x62 = 3;
int32_t t14 = 114733999;
uint64_t x66 = 25LLU;
volatile int64_t t15 = 2752652494LL;
int64_t x75 = -15295414618LL;
int16_t x78 = INT16_MAX;
volatile int64_t x79 = INT64_MIN;
int32_t x102 = INT32_MIN;
int8_t x104 = -1;
static volatile uint32_t t23 = 162805159U;
static uint16_t x105 = 0U;
static uint64_t x111 = 2951445LLU;
volatile int8_t x120 = INT8_MIN;
volatile int8_t x122 = INT8_MAX;
int64_t x124 = INT64_MAX;
volatile uint16_t x125 = 3319U;
int64_t x128 = 229324LL;
volatile int64_t t29 = 1682616650LL;
volatile int16_t x130 = 1;
int64_t x132 = INT64_MIN;
static volatile int64_t t30 = -1128253927347986336LL;
int16_t x138 = -70;
int16_t x142 = -359;
int64_t x143 = -1LL;
uint16_t x148 = 255U;
int32_t x149 = INT32_MAX;
volatile int32_t x151 = -1;
int64_t t36 = -9127887078164LL;
int32_t x164 = INT32_MIN;
static int32_t x165 = 5189405;
volatile int16_t x171 = -8940;
int8_t x173 = -1;
uint32_t x179 = 18U;
static uint32_t x181 = UINT32_MAX;
int16_t x182 = 1;
static uint8_t x183 = 9U;
uint8_t x184 = 3U;
int32_t t43 = 4292;
int32_t x187 = 1045;
int64_t x192 = INT64_MIN;
uint16_t x194 = UINT16_MAX;
int64_t x195 = -84280LL;
static uint64_t x197 = UINT64_MAX;
uint64_t x198 = UINT64_MAX;
volatile int16_t x204 = 31;
static int16_t x210 = -1;
volatile uint8_t x216 = 1U;
uint16_t x217 = 954U;
volatile uint16_t x230 = 49U;
uint16_t x231 = 1U;
static uint64_t x236 = 17074524LLU;
uint32_t x237 = 383007728U;
int16_t x248 = INT16_MAX;
volatile uint64_t x252 = 16669939LLU;
uint64_t t60 = 7393LLU;
static uint8_t x256 = 3U;
static int32_t x257 = INT32_MIN;
static int32_t x259 = -1;
static volatile uint32_t x264 = UINT32_MAX;
int16_t x265 = INT16_MAX;
int8_t x267 = INT8_MIN;
int64_t x274 = INT64_MIN;
int64_t x290 = INT64_MIN;
volatile int8_t x292 = INT8_MAX;
int16_t x298 = INT16_MIN;
volatile int32_t x299 = INT32_MIN;
int64_t t71 = 4336097338339LL;
volatile int64_t x301 = -1LL;
int64_t t72 = -21LL;
uint32_t x306 = 626363U;
uint64_t x310 = 1118813574989563784LLU;
volatile int32_t x311 = INT32_MIN;
volatile int32_t t75 = -2645247;
int16_t x318 = INT16_MIN;
volatile int32_t x321 = 2642;
int64_t x323 = INT64_MIN;
int16_t x330 = 1486;
int64_t t79 = -176790845LL;
int64_t x338 = -134761LL;
int64_t x342 = -1248LL;
volatile uint64_t x343 = UINT64_MAX;
int16_t x345 = -2003;
int64_t x348 = INT64_MIN;
volatile uint32_t x349 = 417U;
int32_t x350 = INT32_MIN;
uint64_t x354 = 13084372996222934LLU;
volatile uint32_t x362 = 37U;
int32_t t87 = -8662;
static int32_t x375 = INT32_MIN;
uint16_t x379 = UINT16_MAX;
static int16_t x382 = 4509;
int16_t x385 = 4;
volatile int64_t x400 = INT64_MAX;
int64_t t95 = 2164788103853391893LL;
int64_t x408 = -14756572118LL;
static volatile int64_t t97 = -7258271LL;
static int64_t x415 = INT64_MIN;
volatile uint64_t x416 = UINT64_MAX;


void f0(void) {
	int16_t x2 = -7;
	static int16_t x3 = -1;
	uint32_t x4 = UINT32_MAX;
	uint32_t t0 = 11171U;

	t0 = (((x1<x2)*x3)/x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 1221661497994041LLU;
	int32_t x6 = INT32_MIN;
	uint8_t x7 = 5U;
	static uint32_t x8 = 1274669U;
	static volatile uint32_t t1 = 839664317U;

	t1 = (((x5<x6)*x7)/x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x11 = INT64_MIN;
	uint8_t x12 = UINT8_MAX;
	int64_t t2 = 121860879151054062LL;

	t2 = (((x9<x10)*x11)/x12);

	if (t2 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 0U;
	int64_t x16 = -57LL;

	t3 = (((x13<x14)*x15)/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = UINT64_MAX;
	int64_t x18 = 188066247701563LL;
	volatile int32_t x19 = -14583722;
	int16_t x20 = -1;
	int32_t t4 = -1;

	t4 = (((x17<x18)*x19)/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	static int16_t x22 = -1;
	int64_t x23 = -890414400769138165LL;
	int16_t x24 = INT16_MIN;
	volatile int64_t t5 = 1237654657331677LL;

	t5 = (((x21<x22)*x23)/x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 626742U;
	uint32_t x27 = 0U;
	int8_t x28 = 40;
	static volatile uint32_t t6 = 353U;

	t6 = (((x25<x26)*x27)/x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x30 = 140177749409552984LLU;
	uint64_t x31 = 3114674539893229LLU;
	static volatile uint64_t t7 = 428978725751LLU;

	t7 = (((x29<x30)*x31)/x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	int32_t x36 = INT32_MAX;
	int32_t t8 = 0;

	t8 = (((x33<x34)*x35)/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int8_t x38 = INT8_MAX;
	int32_t x39 = INT32_MIN;
	int32_t x40 = INT32_MIN;
	int32_t t9 = -29;

	t9 = (((x37<x38)*x39)/x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 12368201LL;
	int32_t x42 = -1;
	int32_t x43 = -1;
	volatile int32_t t10 = 1992;

	t10 = (((x41<x42)*x43)/x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 0U;
	uint64_t x46 = 334684LLU;
	volatile int64_t t11 = -585171535010736LL;

	t11 = (((x45<x46)*x47)/x48);

	if (t11 != -281483566907400LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = -1LL;
	static uint32_t x50 = 125348U;
	uint32_t x51 = 74224677U;
	int8_t x52 = -1;
	volatile uint32_t t12 = 6215U;

	t12 = (((x49<x50)*x51)/x52);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = -16552;
	volatile int16_t x54 = 89;
	uint16_t x55 = 14726U;
	volatile int16_t x56 = INT16_MIN;

	t13 = (((x53<x54)*x55)/x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x61 = -1;
	int8_t x63 = -1;
	int32_t x64 = -1;

	t14 = (((x61<x62)*x63)/x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x65 = -498;
	int64_t x67 = INT64_MAX;
	int8_t x68 = -1;

	t15 = (((x65<x66)*x67)/x68);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x69 = 1015;
	uint64_t x70 = 1023841866239735417LLU;
	uint8_t x71 = 116U;
	uint32_t x72 = 2297U;
	static uint32_t t16 = 493535007U;

	t16 = (((x69<x70)*x71)/x72);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = -17251229069754027LL;
	uint16_t x74 = 22987U;
	volatile int16_t x76 = 15923;
	int64_t t17 = 56887111476LL;

	t17 = (((x73<x74)*x75)/x76);

	if (t17 != -960586LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = -27;
	int16_t x80 = INT16_MAX;
	volatile int64_t t18 = -848484259469940LL;

	t18 = (((x77<x78)*x79)/x80);

	if (t18 != -281483566907400LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint32_t x81 = 3U;
	int32_t x82 = -1;
	int64_t x83 = INT64_MAX;
	uint16_t x84 = 26U;
	volatile int64_t t19 = -1013917LL;

	t19 = (((x81<x82)*x83)/x84);

	if (t19 != 354745078340568300LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = 19;
	int32_t x90 = INT32_MIN;
	uint8_t x91 = 2U;
	static int16_t x92 = INT16_MAX;
	volatile int32_t t20 = -17;

	t20 = (((x89<x90)*x91)/x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = 6970;
	static int16_t x94 = INT16_MIN;
	uint64_t x95 = UINT64_MAX;
	uint64_t x96 = 3706191627LLU;
	static volatile uint64_t t21 = 1073703749LLU;

	t21 = (((x93<x94)*x95)/x96);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x97 = UINT32_MAX;
	volatile uint8_t x98 = 6U;
	uint16_t x99 = 91U;
	static int8_t x100 = 4;
	static int32_t t22 = 53;

	t22 = (((x97<x98)*x99)/x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x101 = INT32_MIN;
	volatile uint32_t x103 = 494952U;

	t23 = (((x101<x102)*x103)/x104);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x106 = INT8_MIN;
	volatile int64_t x107 = INT64_MAX;
	static uint64_t x108 = UINT64_MAX;
	volatile uint64_t t24 = 15703434LLU;

	t24 = (((x105<x106)*x107)/x108);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = UINT8_MAX;
	int16_t x110 = -81;
	volatile uint64_t x112 = 4088694378LLU;
	volatile uint64_t t25 = 381758482102LLU;

	t25 = (((x109<x110)*x111)/x112);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = INT64_MAX;
	int16_t x114 = INT16_MIN;
	int64_t x115 = INT64_MIN;
	int8_t x116 = -1;
	volatile int64_t t26 = -7LL;

	t26 = (((x113<x114)*x115)/x116);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x117 = 10;
	int8_t x118 = INT8_MIN;
	static int64_t x119 = INT64_MIN;
	volatile int64_t t27 = -23LL;

	t27 = (((x117<x118)*x119)/x120);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint32_t x121 = 194567494U;
	static uint64_t x123 = UINT64_MAX;
	volatile uint64_t t28 = 93556768731LLU;

	t28 = (((x121<x122)*x123)/x124);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x126 = 1U;
	int16_t x127 = INT16_MIN;

	t29 = (((x125<x126)*x127)/x128);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x129 = 29;
	static int64_t x131 = INT64_MAX;

	t30 = (((x129<x130)*x131)/x132);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x133 = 4439U;
	int64_t x134 = INT64_MIN;
	static int32_t x135 = INT32_MIN;
	volatile uint16_t x136 = UINT16_MAX;
	volatile int32_t t31 = -11991;

	t31 = (((x133<x134)*x135)/x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = -10;
	int16_t x139 = INT16_MIN;
	volatile int32_t x140 = 8721;
	volatile int32_t t32 = -2867;

	t32 = (((x137<x138)*x139)/x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint16_t x141 = 1U;
	int16_t x144 = INT16_MIN;
	volatile int64_t t33 = 2282462222521087LL;

	t33 = (((x141<x142)*x143)/x144);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x145 = 40U;
	uint64_t x146 = UINT64_MAX;
	int16_t x147 = -14582;
	static volatile int32_t t34 = 52790;

	t34 = (((x145<x146)*x147)/x148);

	if (t34 != -57) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x150 = 137476474U;
	int8_t x152 = -1;
	int32_t t35 = -465;

	t35 = (((x149<x150)*x151)/x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x153 = 20U;
	static int16_t x154 = -1;
	static int64_t x155 = INT64_MIN;
	volatile int64_t x156 = 19494000LL;

	t36 = (((x153<x154)*x155)/x156);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x157 = -15;
	volatile int32_t x158 = 91938;
	int8_t x159 = -1;
	static uint64_t x160 = 960341022313239992LLU;
	uint64_t t37 = 38LLU;

	t37 = (((x157<x158)*x159)/x160);

	if (t37 != 19LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x161 = UINT64_MAX;
	static int64_t x162 = INT64_MIN;
	int64_t x163 = INT64_MIN;
	int64_t t38 = 8275290LL;

	t38 = (((x161<x162)*x163)/x164);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x166 = 27U;
	volatile uint8_t x167 = UINT8_MAX;
	int32_t x168 = INT32_MAX;
	volatile int32_t t39 = 0;

	t39 = (((x165<x166)*x167)/x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x169 = 6110296236524063LLU;
	int8_t x170 = 0;
	int8_t x172 = -1;
	int32_t t40 = -14;

	t40 = (((x169<x170)*x171)/x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x174 = INT64_MIN;
	int32_t x175 = INT32_MIN;
	static int16_t x176 = INT16_MIN;
	int32_t t41 = 27;

	t41 = (((x173<x174)*x175)/x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x177 = UINT8_MAX;
	int8_t x178 = -1;
	static int64_t x180 = INT64_MAX;
	int64_t t42 = 270701880099258292LL;

	t42 = (((x177<x178)*x179)/x180);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {


	t43 = (((x181<x182)*x183)/x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x185 = 50U;
	int64_t x186 = INT64_MAX;
	int16_t x188 = INT16_MIN;
	int32_t t44 = -15;

	t44 = (((x185<x186)*x187)/x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x189 = INT64_MIN;
	static volatile int64_t x190 = INT64_MIN;
	int64_t x191 = 1190866340622LL;
	static volatile int64_t t45 = 366349479195869LL;

	t45 = (((x189<x190)*x191)/x192);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x193 = 25649900;
	int32_t x196 = -1;
	static int64_t t46 = 1961586123521767036LL;

	t46 = (((x193<x194)*x195)/x196);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x199 = 4;
	int8_t x200 = 17;
	volatile int32_t t47 = -399;

	t47 = (((x197<x198)*x199)/x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x201 = 143380732LL;
	uint64_t x202 = 633191887605694LLU;
	int8_t x203 = -1;
	volatile int32_t t48 = 2082509;

	t48 = (((x201<x202)*x203)/x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = -1;
	static int16_t x206 = INT16_MIN;
	static int16_t x207 = INT16_MAX;
	volatile int64_t x208 = INT64_MAX;
	volatile int64_t t49 = -232076LL;

	t49 = (((x205<x206)*x207)/x208);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x209 = UINT16_MAX;
	int16_t x211 = -3;
	int32_t x212 = -283210;
	int32_t t50 = -1;

	t50 = (((x209<x210)*x211)/x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x213 = 12394U;
	static volatile uint32_t x214 = UINT32_MAX;
	int64_t x215 = -1LL;
	static volatile int64_t t51 = 3601LL;

	t51 = (((x213<x214)*x215)/x216);

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x218 = 1U;
	uint32_t x219 = UINT32_MAX;
	uint8_t x220 = UINT8_MAX;
	volatile uint32_t t52 = 2254U;

	t52 = (((x217<x218)*x219)/x220);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x221 = 6462926680LL;
	static int8_t x222 = 24;
	int64_t x223 = INT64_MAX;
	int32_t x224 = INT32_MIN;
	volatile int64_t t53 = -138136985566LL;

	t53 = (((x221<x222)*x223)/x224);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = INT32_MIN;
	int16_t x226 = -1;
	static uint64_t x227 = UINT64_MAX;
	int16_t x228 = INT16_MIN;
	uint64_t t54 = 1356420LLU;

	t54 = (((x225<x226)*x227)/x228);

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x229 = 361598U;
	int16_t x232 = -1;
	volatile int32_t t55 = -191;

	t55 = (((x229<x230)*x231)/x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = INT16_MAX;
	int8_t x234 = 1;
	uint8_t x235 = 1U;
	uint64_t t56 = 9883876LLU;

	t56 = (((x233<x234)*x235)/x236);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x238 = INT32_MIN;
	int32_t x239 = INT32_MAX;
	static uint16_t x240 = UINT16_MAX;
	static int32_t t57 = 1095860;

	t57 = (((x237<x238)*x239)/x240);

	if (t57 != 32768) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x241 = INT32_MIN;
	volatile uint32_t x242 = 60U;
	int32_t x243 = INT32_MIN;
	int8_t x244 = -22;
	int32_t t58 = -53895591;

	t58 = (((x241<x242)*x243)/x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x245 = INT32_MIN;
	int8_t x246 = -1;
	static int16_t x247 = INT16_MIN;
	int32_t t59 = -1996242;

	t59 = (((x245<x246)*x247)/x248);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = 9746;
	int64_t x250 = 595948LL;
	uint8_t x251 = UINT8_MAX;

	t60 = (((x249<x250)*x251)/x252);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x253 = 2871460648036406LLU;
	static int32_t x254 = -3;
	int16_t x255 = -1;
	static volatile int32_t t61 = 2;

	t61 = (((x253<x254)*x255)/x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x258 = -3517;
	int16_t x260 = 851;
	static int32_t t62 = 2;

	t62 = (((x257<x258)*x259)/x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x261 = -186;
	uint32_t x262 = UINT32_MAX;
	int32_t x263 = 319673;
	uint32_t t63 = 804U;

	t63 = (((x261<x262)*x263)/x264);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x266 = -1;
	int32_t x268 = -1;
	int32_t t64 = 123814755;

	t64 = (((x265<x266)*x267)/x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x273 = 4230688579LLU;
	int64_t x275 = INT64_MIN;
	static uint8_t x276 = 43U;
	int64_t t65 = 58279557033538031LL;

	t65 = (((x273<x274)*x275)/x276);

	if (t65 != -214497024112901762LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = INT8_MIN;
	volatile uint64_t x278 = 277263873229162LLU;
	static volatile int8_t x279 = INT8_MIN;
	int8_t x280 = 10;
	static int32_t t66 = -763631;

	t66 = (((x277<x278)*x279)/x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = -11;
	static volatile uint64_t x282 = UINT64_MAX;
	int64_t x283 = -1LL;
	int8_t x284 = INT8_MIN;
	int64_t t67 = 15802319LL;

	t67 = (((x281<x282)*x283)/x284);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x285 = 59U;
	volatile int32_t x286 = INT32_MAX;
	static int16_t x287 = INT16_MIN;
	uint8_t x288 = UINT8_MAX;
	int32_t t68 = 118284;

	t68 = (((x285<x286)*x287)/x288);

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x289 = 3829599065224482671LLU;
	static int32_t x291 = INT32_MIN;
	static volatile int32_t t69 = 2;

	t69 = (((x289<x290)*x291)/x292);

	if (t69 != -16909320) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x293 = INT64_MIN;
	static uint32_t x294 = UINT32_MAX;
	static int16_t x295 = INT16_MIN;
	static volatile int16_t x296 = INT16_MAX;
	volatile int32_t t70 = 312;

	t70 = (((x293<x294)*x295)/x296);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x297 = UINT8_MAX;
	int64_t x300 = 315089622791LL;

	t71 = (((x297<x298)*x299)/x300);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x302 = -1;
	static int64_t x303 = INT64_MIN;
	int64_t x304 = -1LL;

	t72 = (((x301<x302)*x303)/x304);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x305 = INT16_MIN;
	uint64_t x307 = 3020660LLU;
	uint16_t x308 = UINT16_MAX;
	uint64_t t73 = 926930LLU;

	t73 = (((x305<x306)*x307)/x308);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x309 = -1;
	volatile int64_t x312 = INT64_MIN;
	static int64_t t74 = -672382LL;

	t74 = (((x309<x310)*x311)/x312);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x313 = 12901U;
	volatile int32_t x314 = -14182;
	int32_t x315 = INT32_MIN;
	int32_t x316 = 468411;

	t75 = (((x313<x314)*x315)/x316);

	if (t75 != -4584) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x317 = INT16_MAX;
	int8_t x319 = INT8_MAX;
	volatile int64_t x320 = -24721908872LL;
	int64_t t76 = -7983897875043656LL;

	t76 = (((x317<x318)*x319)/x320);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x322 = UINT32_MAX;
	int64_t x324 = INT64_MIN;
	volatile int64_t t77 = 387116984663LL;

	t77 = (((x321<x322)*x323)/x324);

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x329 = -28;
	int32_t x331 = 3;
	int16_t x332 = INT16_MIN;
	int32_t t78 = -8000;

	t78 = (((x329<x330)*x331)/x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x333 = 23453920079LL;
	volatile int16_t x334 = INT16_MIN;
	static volatile int64_t x335 = INT64_MAX;
	volatile int8_t x336 = INT8_MIN;

	t79 = (((x333<x334)*x335)/x336);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x337 = -2;
	static uint16_t x339 = 11978U;
	uint32_t x340 = UINT32_MAX;
	uint32_t t80 = 359405433U;

	t80 = (((x337<x338)*x339)/x340);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x341 = -140;
	int32_t x344 = INT32_MIN;
	uint64_t t81 = 55793330422873145LLU;

	t81 = (((x341<x342)*x343)/x344);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x346 = 9286;
	int32_t x347 = -859053;
	static int64_t t82 = 971LL;

	t82 = (((x345<x346)*x347)/x348);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x351 = INT32_MIN;
	volatile int64_t x352 = -117012279396LL;
	static int64_t t83 = -13LL;

	t83 = (((x349<x350)*x351)/x352);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x353 = 20U;
	volatile uint8_t x355 = 53U;
	static int16_t x356 = INT16_MIN;
	int32_t t84 = -222807941;

	t84 = (((x353<x354)*x355)/x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x357 = INT32_MAX;
	uint8_t x358 = 13U;
	int16_t x359 = -1;
	int64_t x360 = 863811528LL;
	volatile int64_t t85 = -1961305209265LL;

	t85 = (((x357<x358)*x359)/x360);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x361 = 0U;
	int64_t x363 = 14LL;
	uint16_t x364 = UINT16_MAX;
	static int64_t t86 = -1904072270LL;

	t86 = (((x361<x362)*x363)/x364);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x365 = UINT32_MAX;
	static int64_t x366 = 513918553868719LL;
	volatile int16_t x367 = INT16_MIN;
	volatile int32_t x368 = 17;

	t87 = (((x365<x366)*x367)/x368);

	if (t87 != -1927) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x373 = INT8_MAX;
	volatile uint16_t x374 = 53U;
	int64_t x376 = 135637937903899LL;
	int64_t t88 = -3064LL;

	t88 = (((x373<x374)*x375)/x376);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x377 = INT16_MIN;
	volatile uint32_t x378 = 1861059192U;
	int8_t x380 = INT8_MIN;
	static volatile int32_t t89 = 369946156;

	t89 = (((x377<x378)*x379)/x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x381 = 1707734U;
	uint32_t x383 = UINT32_MAX;
	static volatile uint16_t x384 = UINT16_MAX;
	volatile uint32_t t90 = 1870805889U;

	t90 = (((x381<x382)*x383)/x384);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x386 = -29069438447825330LL;
	uint16_t x387 = 6U;
	int16_t x388 = 1;
	volatile int32_t t91 = 7;

	t91 = (((x385<x386)*x387)/x388);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x389 = 85U;
	int64_t x390 = 199604806018LL;
	int8_t x391 = -1;
	uint16_t x392 = UINT16_MAX;
	int32_t t92 = -120;

	t92 = (((x389<x390)*x391)/x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x393 = INT16_MAX;
	volatile uint64_t x394 = 470LLU;
	uint64_t x395 = 244699642631202589LLU;
	int16_t x396 = -1;
	uint64_t t93 = 446657099715363162LLU;

	t93 = (((x393<x394)*x395)/x396);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x397 = 21LL;
	uint32_t x398 = UINT32_MAX;
	int64_t x399 = INT64_MAX;
	volatile int64_t t94 = -96464682236040LL;

	t94 = (((x397<x398)*x399)/x400);

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x401 = -1LL;
	static int8_t x402 = INT8_MIN;
	uint16_t x403 = 949U;
	static int64_t x404 = -1LL;

	t95 = (((x401<x402)*x403)/x404);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x405 = INT16_MAX;
	int8_t x406 = INT8_MAX;
	static volatile uint8_t x407 = 5U;
	static volatile int64_t t96 = 365465502949LL;

	t96 = (((x405<x406)*x407)/x408);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x409 = 8U;
	volatile int16_t x410 = -1;
	volatile int64_t x411 = INT64_MIN;
	int8_t x412 = 24;

	t97 = (((x409<x410)*x411)/x412);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x413 = -1;
	static volatile int64_t x414 = 346326411LL;
	volatile uint64_t t98 = 1030884070214640434LLU;

	t98 = (((x413<x414)*x415)/x416);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x417 = 13;
	int8_t x418 = INT8_MAX;
	int32_t x419 = -1;
	int8_t x420 = -1;
	int32_t t99 = 76;

	t99 = (((x417<x418)*x419)/x420);

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


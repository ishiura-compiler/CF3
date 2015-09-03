#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x2 = 8965764681166246665LLU;
int64_t x3 = INT64_MIN;
int32_t x7 = 6370;
int32_t x8 = -54602;
static volatile int32_t t1 = 267889055;
uint8_t x12 = UINT8_MAX;
int32_t t2 = -2701;
static volatile int8_t x21 = INT8_MIN;
uint64_t x22 = UINT64_MAX;
int16_t x26 = INT16_MIN;
uint16_t x27 = 39U;
static int64_t x28 = INT64_MIN;
int64_t x33 = -1LL;
int16_t x36 = 7;
uint32_t x37 = 36U;
static uint16_t x39 = UINT16_MAX;
uint32_t x45 = 38U;
int32_t x48 = -212;
static volatile int16_t x49 = INT16_MAX;
int32_t x52 = INT32_MIN;
int16_t x58 = INT16_MIN;
volatile int8_t x60 = INT8_MIN;
volatile int16_t x70 = INT16_MIN;
static volatile uint64_t t15 = 12059181299056LLU;
int32_t x80 = INT32_MIN;
int64_t x81 = INT64_MAX;
uint8_t x84 = 1U;
int16_t x90 = INT16_MIN;
static int8_t x102 = INT8_MIN;
static int8_t x103 = 1;
static uint32_t t22 = 1U;
int16_t x107 = 1;
uint32_t t23 = 126730718U;
uint16_t x109 = 1U;
static int8_t x112 = -1;
int32_t t24 = -2;
uint32_t x117 = 1831U;
static int32_t x123 = INT32_MIN;
volatile uint32_t x127 = 0U;
volatile uint32_t t28 = 27U;
int32_t x136 = INT32_MAX;
static int8_t x155 = -1;
int32_t x158 = -7224510;
int16_t x162 = INT16_MIN;
int16_t x167 = INT16_MIN;
static volatile int64_t x180 = -39121721659575260LL;
int64_t x185 = INT64_MIN;
int32_t x186 = -40641216;
static uint32_t x190 = UINT32_MAX;
volatile int64_t t40 = 15240LL;
static int32_t x199 = INT32_MIN;
uint32_t x212 = 1659859814U;
volatile int8_t x219 = 46;
volatile uint16_t x224 = UINT16_MAX;
volatile uint64_t t47 = 7456150016652LLU;
int8_t x227 = -1;
volatile int32_t x233 = INT32_MAX;
static int32_t x234 = -1;
int16_t x244 = INT16_MIN;
static volatile uint64_t t50 = 53788LLU;
static int16_t x252 = -1;
uint64_t t51 = 7590583287LLU;
volatile uint32_t t53 = 3U;
volatile uint8_t x264 = 2U;
int16_t x274 = INT16_MIN;
static int32_t t56 = 323;
volatile uint16_t x286 = 2057U;
uint16_t x287 = 10U;
int16_t x291 = 3981;
volatile int32_t x292 = 2;
int64_t x302 = 0LL;
int64_t t60 = 34882261348576LL;
int32_t x311 = 1;
volatile int32_t x312 = -125617;
uint32_t x315 = 1943197926U;
int64_t x322 = -1697210539074LL;
static int8_t x328 = INT8_MIN;
int16_t x335 = -9155;
int16_t x343 = -1;
int16_t x345 = INT16_MIN;
static uint16_t x346 = UINT16_MAX;
uint32_t x348 = UINT32_MAX;
volatile int16_t x353 = 630;
int16_t x354 = 1;
static uint32_t t70 = 7213U;
static volatile int64_t x358 = -1LL;
static volatile int64_t x364 = INT64_MIN;
int8_t x378 = 1;
int16_t x380 = 6534;
volatile int32_t t74 = 509;
volatile uint64_t t76 = 57472369501046857LLU;
uint64_t x403 = UINT64_MAX;
int16_t x405 = -1;
static int64_t t79 = -1LL;
volatile int16_t x423 = 4;
static volatile int32_t x428 = INT32_MIN;
uint32_t x430 = UINT32_MAX;
int32_t x434 = 2018;
int32_t x437 = INT32_MIN;
uint64_t x439 = UINT64_MAX;
volatile int64_t t87 = 119278590044522068LL;
static int16_t x464 = INT16_MIN;
int32_t x469 = 35238;
volatile int32_t x470 = 1405632;
int64_t t89 = -6985LL;
static uint64_t t90 = 182810224525407LLU;
volatile uint16_t x480 = UINT16_MAX;
uint32_t t92 = 2378221U;
int64_t x510 = -1LL;
int8_t x512 = 3;
static int64_t t95 = -2019579856538LL;
static int8_t x527 = 50;
volatile int16_t x528 = -1;
uint32_t t97 = 847920U;
uint8_t x532 = 3U;
static uint8_t x534 = 32U;
int16_t x535 = -1;


void f0(void) {
	volatile int8_t x1 = -2;
	uint32_t x4 = 1339U;
	static volatile uint64_t t0 = 33394LLU;

	t0 = ((x1&(x2*x3))/x4);

	if (t0 != 6888253948360549LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 109448;
	uint8_t x6 = 0U;

	t1 = ((x5&(x6*x7))/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 259U;
	static int16_t x10 = INT16_MAX;
	uint8_t x11 = 15U;

	t2 = ((x9&(x10*x11))/x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	static int64_t x14 = 218782LL;
	int8_t x15 = INT8_MIN;
	uint16_t x16 = 44U;
	static volatile int64_t t3 = 760813447262171LL;

	t3 = ((x13&(x14*x15))/x16);

	if (t3 != -48806446LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	int8_t x18 = -1;
	int64_t x19 = -108531507LL;
	static volatile int32_t x20 = -1;
	volatile int64_t t4 = -124323LL;

	t4 = ((x17&(x18*x19))/x20);

	if (t4 != -3891LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x23 = 3509;
	uint64_t x24 = 14140596390LLU;
	volatile uint64_t t5 = 1347378319686LLU;

	t5 = ((x21&(x22*x23))/x24);

	if (t5 != 1304523767LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -503210LL;
	int64_t t6 = -32343LL;

	t6 = ((x25&(x26*x27))/x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = -1LL;
	uint64_t x30 = 3504402163328031247LLU;
	uint16_t x31 = 827U;
	int32_t x32 = INT32_MAX;
	volatile uint64_t t7 = 4324745LLU;

	t7 = ((x29&(x30*x31))/x32);

	if (t7 != 932146562LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x34 = UINT32_MAX;
	int16_t x35 = INT16_MAX;
	int64_t t8 = 1550413557972876818LL;

	t8 = ((x33&(x34*x35))/x36);

	if (t8 != 613562075LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = 16395;
	uint64_t x40 = 9532340132379046LLU;
	uint64_t t9 = 980LLU;

	t9 = ((x37&(x38*x39))/x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x46 = 0U;
	int16_t x47 = INT16_MIN;
	uint32_t t10 = 30U;

	t10 = ((x45&(x46*x47))/x48);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x50 = 108LLU;
	int64_t x51 = -2557LL;
	volatile uint64_t t11 = 67156455656207122LLU;

	t11 = ((x49&(x50*x51))/x52);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = -3634;
	int32_t x54 = -1;
	int8_t x55 = -1;
	int16_t x56 = INT16_MAX;
	static volatile int32_t t12 = 1006247218;

	t12 = ((x53&(x54*x55))/x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MIN;
	int64_t x59 = 1243LL;
	int64_t t13 = 7617773684955LL;

	t13 = ((x57&(x58*x59))/x60);

	if (t13 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = 258U;
	int32_t x66 = INT32_MAX;
	int64_t x67 = 20823857LL;
	int64_t x68 = INT64_MIN;
	static volatile int64_t t14 = -490311988556LL;

	t14 = ((x65&(x66*x67))/x68);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x69 = INT8_MAX;
	uint64_t x71 = 447409397778201393LLU;
	int32_t x72 = 82110511;

	t15 = ((x69&(x70*x71))/x72);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = 5LL;
	int16_t x78 = -1;
	int64_t x79 = -1480847895LL;
	int64_t t16 = 65951628218883021LL;

	t16 = ((x77&(x78*x79))/x80);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x82 = 2081356933U;
	volatile int64_t x83 = -1LL;
	int64_t t17 = 3713473LL;

	t17 = ((x81&(x82*x83))/x84);

	if (t17 != 9223372034773418875LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = 5LL;
	uint16_t x86 = 3264U;
	int8_t x87 = INT8_MIN;
	static int32_t x88 = -1;
	int64_t t18 = 212356698120LL;

	t18 = ((x85&(x86*x87))/x88);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = -11;
	uint16_t x91 = 6U;
	int32_t x92 = INT32_MIN;
	static volatile int32_t t19 = 3;

	t19 = ((x89&(x90*x91))/x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x93 = 19962U;
	static volatile uint64_t x94 = UINT64_MAX;
	int8_t x95 = INT8_MIN;
	uint8_t x96 = 82U;
	volatile uint64_t t20 = 61697910457351LLU;

	t20 = ((x93&(x94*x95))/x96);

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x97 = UINT64_MAX;
	volatile uint64_t x98 = 3531000378566949LLU;
	int16_t x99 = 1;
	int32_t x100 = INT32_MIN;
	volatile uint64_t t21 = 22341198804287LLU;

	t21 = ((x97&(x98*x99))/x100);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x101 = 139U;
	static uint32_t x104 = 33512880U;

	t22 = ((x101&(x102*x103))/x104);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x105 = 0;
	static uint32_t x106 = UINT32_MAX;
	static uint8_t x108 = UINT8_MAX;

	t23 = ((x105&(x106*x107))/x108);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x110 = INT32_MAX;
	int16_t x111 = -1;

	t24 = ((x109&(x110*x111))/x112);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = UINT16_MAX;
	uint8_t x114 = UINT8_MAX;
	uint8_t x115 = 1U;
	volatile uint64_t x116 = 2702994161539LLU;
	volatile uint64_t t25 = 56470792371316LLU;

	t25 = ((x113&(x114*x115))/x116);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x118 = -1;
	volatile int8_t x119 = INT8_MIN;
	uint64_t x120 = UINT64_MAX;
	volatile uint64_t t26 = 6934529445752507638LLU;

	t26 = ((x117&(x118*x119))/x120);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x121 = 3;
	uint32_t x122 = 502980938U;
	uint32_t x124 = UINT32_MAX;
	static volatile uint32_t t27 = 26658130U;

	t27 = ((x121&(x122*x123))/x124);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x125 = UINT16_MAX;
	static int16_t x126 = -1;
	uint8_t x128 = 64U;

	t28 = ((x125&(x126*x127))/x128);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x129 = UINT32_MAX;
	volatile uint32_t x130 = UINT32_MAX;
	static int64_t x131 = -1LL;
	uint16_t x132 = 20011U;
	volatile int64_t t29 = -1483210LL;

	t29 = ((x129&(x130*x131))/x132);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x133 = 21560868U;
	volatile uint16_t x134 = UINT16_MAX;
	uint8_t x135 = UINT8_MAX;
	volatile uint32_t t30 = 25309U;

	t30 = ((x133&(x134*x135))/x136);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x137 = INT32_MIN;
	static int16_t x138 = 1;
	int64_t x139 = -13573LL;
	uint32_t x140 = 10U;
	static int64_t t31 = 1075650730845306LL;

	t31 = ((x137&(x138*x139))/x140);

	if (t31 != -214748364LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = INT64_MIN;
	static volatile uint32_t x142 = UINT32_MAX;
	volatile int16_t x143 = INT16_MIN;
	int8_t x144 = INT8_MIN;
	static int64_t t32 = 928LL;

	t32 = ((x141&(x142*x143))/x144);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x153 = UINT32_MAX;
	uint64_t x154 = 99727022LLU;
	volatile int16_t x156 = INT16_MIN;
	static uint64_t t33 = 225380688417LLU;

	t33 = ((x153&(x154*x155))/x156);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x157 = INT8_MIN;
	uint32_t x159 = 3393985U;
	static int64_t x160 = 1793750LL;
	int64_t t34 = -1LL;

	t34 = ((x157&(x158*x159))/x160);

	if (t34 != 50LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x161 = 4014U;
	int16_t x163 = INT16_MIN;
	volatile int8_t x164 = INT8_MAX;
	volatile uint32_t t35 = 664043127U;

	t35 = ((x161&(x162*x163))/x164);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = INT64_MIN;
	uint64_t x166 = UINT64_MAX;
	uint64_t x168 = 153LLU;
	uint64_t t36 = 1324294490618887LLU;

	t36 = ((x165&(x166*x167))/x168);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x169 = 28624951432LLU;
	volatile int32_t x170 = INT32_MIN;
	static uint64_t x171 = UINT64_MAX;
	int8_t x172 = -1;
	volatile uint64_t t37 = 72725713475965323LLU;

	t37 = ((x169&(x170*x171))/x172);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x177 = -1;
	uint64_t x178 = 0LLU;
	volatile uint32_t x179 = 544674711U;
	static volatile uint64_t t38 = 24014331192LLU;

	t38 = ((x177&(x178*x179))/x180);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x187 = 869574U;
	volatile uint8_t x188 = UINT8_MAX;
	int64_t t39 = 6294751399022LL;

	t39 = ((x185&(x186*x187))/x188);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x189 = 36U;
	int64_t x191 = 167LL;
	uint16_t x192 = UINT16_MAX;

	t40 = ((x189&(x190*x191))/x192);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x193 = -1LL;
	int64_t x194 = -1LL;
	static int16_t x195 = INT16_MAX;
	uint8_t x196 = 59U;
	static volatile int64_t t41 = 79176350LL;

	t41 = ((x193&(x194*x195))/x196);

	if (t41 != -555LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x197 = -1LL;
	static volatile uint64_t x198 = UINT64_MAX;
	uint64_t x200 = 32695450LLU;
	uint64_t t42 = 248809LLU;

	t42 = ((x197&(x198*x199))/x200);

	if (t42 != 65LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x201 = UINT16_MAX;
	uint64_t x202 = 265812740LLU;
	int64_t x203 = INT64_MIN;
	uint32_t x204 = 109U;
	static volatile uint64_t t43 = 19018385LLU;

	t43 = ((x201&(x202*x203))/x204);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x209 = 13U;
	int32_t x210 = 7;
	volatile uint32_t x211 = 7U;
	uint32_t t44 = 11050042U;

	t44 = ((x209&(x210*x211))/x212);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x213 = 1;
	static volatile int16_t x214 = -1;
	int8_t x215 = -2;
	int8_t x216 = INT8_MIN;
	int32_t t45 = -507;

	t45 = ((x213&(x214*x215))/x216);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x217 = 1U;
	int8_t x218 = INT8_MIN;
	static int8_t x220 = INT8_MAX;
	static int32_t t46 = 88593;

	t46 = ((x217&(x218*x219))/x220);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x221 = UINT8_MAX;
	static uint64_t x222 = UINT64_MAX;
	uint64_t x223 = 1882772LLU;

	t47 = ((x221&(x222*x223))/x224);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x225 = INT8_MIN;
	volatile int64_t x226 = INT64_MAX;
	volatile int16_t x228 = INT16_MIN;
	int64_t t48 = -175667761988731284LL;

	t48 = ((x225&(x226*x227))/x228);

	if (t48 != 281474976710656LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x235 = -1;
	static volatile int8_t x236 = -1;
	static volatile int32_t t49 = -3035478;

	t49 = ((x233&(x234*x235))/x236);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x241 = 3443187LLU;
	volatile int16_t x242 = -1;
	int64_t x243 = -387263937LL;

	t50 = ((x241&(x242*x243))/x244);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x249 = 9842LLU;
	static uint16_t x250 = UINT16_MAX;
	int64_t x251 = -1LL;

	t51 = ((x249&(x250*x251))/x252);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x253 = -28;
	uint32_t x254 = 128603U;
	uint16_t x255 = 57U;
	uint64_t x256 = 538LLU;
	volatile uint64_t t52 = 16LLU;

	t52 = ((x253&(x254*x255))/x256);

	if (t52 != 13625LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x257 = 4;
	uint32_t x258 = 1U;
	uint16_t x259 = UINT16_MAX;
	static uint32_t x260 = UINT32_MAX;

	t53 = ((x257&(x258*x259))/x260);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x261 = -1;
	int16_t x262 = 4088;
	uint32_t x263 = 2U;
	volatile uint32_t t54 = 1124474U;

	t54 = ((x261&(x262*x263))/x264);

	if (t54 != 4088U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x273 = 560997457683835LLU;
	static uint64_t x275 = UINT64_MAX;
	int16_t x276 = -1;
	volatile uint64_t t55 = 8552385947124953548LLU;

	t55 = ((x273&(x274*x275))/x276);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x277 = 81883;
	int32_t x278 = 38290010;
	uint8_t x279 = 5U;
	uint16_t x280 = UINT16_MAX;

	t56 = ((x277&(x278*x279))/x280);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x285 = 105283201U;
	int32_t x288 = 855290335;
	volatile uint32_t t57 = 0U;

	t57 = ((x285&(x286*x287))/x288);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x289 = INT8_MIN;
	volatile uint16_t x290 = 193U;
	static volatile int32_t t58 = 9;

	t58 = ((x289&(x290*x291))/x292);

	if (t58 != 384128) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x297 = 3671513883696LLU;
	static int16_t x298 = INT16_MIN;
	int32_t x299 = -58;
	volatile uint32_t x300 = 1U;
	static volatile uint64_t t59 = 7424LLU;

	t59 = ((x297&(x298*x299))/x300);

	if (t59 != 327680LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x301 = 4U;
	static int16_t x303 = INT16_MIN;
	int16_t x304 = -1;

	t60 = ((x301&(x302*x303))/x304);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x309 = 1U;
	uint8_t x310 = UINT8_MAX;
	uint32_t t61 = 15721971U;

	t61 = ((x309&(x310*x311))/x312);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x313 = INT8_MIN;
	uint64_t x314 = UINT64_MAX;
	int8_t x316 = -1;
	static volatile uint64_t t62 = 6058615869LLU;

	t62 = ((x313&(x314*x315))/x316);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x321 = INT64_MIN;
	uint64_t x323 = 329812705663068792LLU;
	static uint16_t x324 = 688U;
	volatile uint64_t t63 = 1445956238270575LLU;

	t63 = ((x321&(x322*x323))/x324);

	if (t63 != 13406064007056360LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x325 = 4;
	uint16_t x326 = 122U;
	uint32_t x327 = 165049407U;
	volatile uint32_t t64 = 193U;

	t64 = ((x325&(x326*x327))/x328);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x329 = INT32_MAX;
	volatile uint64_t x330 = UINT64_MAX;
	uint16_t x331 = 112U;
	volatile uint32_t x332 = 32U;
	volatile uint64_t t65 = 3253726894450LLU;

	t65 = ((x329&(x330*x331))/x332);

	if (t65 != 67108860LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x333 = -1;
	uint32_t x334 = UINT32_MAX;
	int16_t x336 = 6563;
	volatile uint32_t t66 = 7U;

	t66 = ((x333&(x334*x335))/x336);

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x341 = 2693216U;
	uint64_t x342 = 5169075966101054LLU;
	int16_t x344 = 197;
	static uint64_t t67 = 584961936821344989LLU;

	t67 = ((x341&(x342*x343))/x344);

	if (t67 != 13670LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x347 = 147;
	uint32_t t68 = 1349U;

	t68 = ((x345&(x346*x347))/x348);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x349 = INT8_MAX;
	uint64_t x350 = 6LLU;
	int8_t x351 = INT8_MIN;
	volatile int32_t x352 = 238;
	volatile uint64_t t69 = 2101LLU;

	t69 = ((x349&(x350*x351))/x352);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x355 = UINT32_MAX;
	static volatile int16_t x356 = 195;

	t70 = ((x353&(x354*x355))/x356);

	if (t70 != 3U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x357 = INT8_MAX;
	static int16_t x359 = 0;
	uint16_t x360 = 2701U;
	volatile int64_t t71 = 21LL;

	t71 = ((x357&(x358*x359))/x360);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x361 = -1LL;
	uint32_t x362 = UINT32_MAX;
	int64_t x363 = 329985LL;
	static volatile int64_t t72 = -17005115275541LL;

	t72 = ((x361&(x362*x363))/x364);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x365 = 288LL;
	int64_t x366 = -1641LL;
	int32_t x367 = INT32_MIN;
	uint32_t x368 = 16347U;
	int64_t t73 = -14430090LL;

	t73 = ((x365&(x366*x367))/x368);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x377 = INT32_MIN;
	static uint8_t x379 = 100U;

	t74 = ((x377&(x378*x379))/x380);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x381 = INT64_MAX;
	int16_t x382 = INT16_MIN;
	uint16_t x383 = UINT16_MAX;
	uint16_t x384 = 3U;
	int64_t t75 = -8LL;

	t75 = ((x381&(x382*x383))/x384);

	if (t75 != 3074457344902441642LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x397 = INT8_MIN;
	int8_t x398 = -2;
	uint64_t x399 = UINT64_MAX;
	int64_t x400 = INT64_MAX;

	t76 = ((x397&(x398*x399))/x400);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x401 = INT32_MIN;
	int32_t x402 = 11228;
	static int8_t x404 = 5;
	volatile uint64_t t77 = 1683728LLU;

	t77 = ((x401&(x402*x403))/x404);

	if (t77 != 3689348814312413593LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x406 = UINT64_MAX;
	static volatile int8_t x407 = -1;
	volatile uint64_t x408 = 5274LLU;
	volatile uint64_t t78 = 4183754678264389LLU;

	t78 = ((x405&(x406*x407))/x408);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x413 = INT8_MIN;
	volatile uint16_t x414 = 1U;
	volatile int16_t x415 = -1;
	static int64_t x416 = INT64_MIN;

	t79 = ((x413&(x414*x415))/x416);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x421 = -5;
	int64_t x422 = 25LL;
	volatile int64_t x424 = INT64_MIN;
	int64_t t80 = 41095891705LL;

	t80 = ((x421&(x422*x423))/x424);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x425 = -1;
	uint32_t x426 = UINT32_MAX;
	volatile uint32_t x427 = 229497U;
	uint32_t t81 = 21U;

	t81 = ((x425&(x426*x427))/x428);

	if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x429 = -2702LL;
	uint32_t x431 = 0U;
	int64_t x432 = -83672126395050LL;
	int64_t t82 = -404108951LL;

	t82 = ((x429&(x430*x431))/x432);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x433 = 62;
	uint64_t x435 = 747LLU;
	volatile uint64_t x436 = 171505263477636LLU;
	uint64_t t83 = 27833409508526LLU;

	t83 = ((x433&(x434*x435))/x436);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x438 = -1LL;
	int32_t x440 = INT32_MIN;
	volatile uint64_t t84 = 51726995669945572LLU;

	t84 = ((x437&(x438*x439))/x440);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x441 = 628LL;
	int16_t x442 = INT16_MIN;
	static int8_t x443 = -1;
	int64_t x444 = -31132056LL;
	int64_t t85 = 0LL;

	t85 = ((x441&(x442*x443))/x444);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x449 = INT8_MAX;
	static int32_t x450 = -1;
	int64_t x451 = 56197563482520LL;
	static volatile uint32_t x452 = 51100U;
	int64_t t86 = -993889LL;

	t86 = ((x449&(x450*x451))/x452);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x457 = 1;
	int64_t x458 = 25LL;
	uint32_t x459 = 115164914U;
	int16_t x460 = INT16_MIN;

	t87 = ((x457&(x458*x459))/x460);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x461 = UINT64_MAX;
	static uint8_t x462 = 0U;
	static volatile int64_t x463 = INT64_MIN;
	volatile uint64_t t88 = 261167LLU;

	t88 = ((x461&(x462*x463))/x464);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x471 = -1LL;
	volatile int64_t x472 = 12345LL;

	t89 = ((x469&(x470*x471))/x472);

	if (t89 != 2LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x473 = INT64_MIN;
	static volatile uint16_t x474 = 327U;
	int16_t x475 = -1;
	uint64_t x476 = 30363187LLU;

	t90 = ((x473&(x474*x475))/x476);

	if (t90 != 303768245304LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x477 = INT32_MAX;
	uint32_t x478 = UINT32_MAX;
	uint16_t x479 = 7771U;
	uint32_t t91 = 234619U;

	t91 = ((x477&(x478*x479))/x480);

	if (t91 != 32768U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x489 = 14U;
	int16_t x490 = -1;
	volatile uint32_t x491 = UINT32_MAX;
	int16_t x492 = INT16_MIN;

	t92 = ((x489&(x490*x491))/x492);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x497 = 3339980LLU;
	uint64_t x498 = UINT64_MAX;
	static volatile int8_t x499 = -1;
	volatile int32_t x500 = INT32_MAX;
	volatile uint64_t t93 = 89439LLU;

	t93 = ((x497&(x498*x499))/x500);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x505 = INT16_MIN;
	volatile uint64_t x506 = 66239008LLU;
	volatile int32_t x507 = -1;
	volatile int64_t x508 = -57LL;
	static uint64_t t94 = 2679888LLU;

	t94 = ((x505&(x506*x507))/x508);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x509 = UINT16_MAX;
	uint16_t x511 = UINT16_MAX;

	t95 = ((x509&(x510*x511))/x512);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x513 = -17;
	volatile uint32_t x514 = UINT32_MAX;
	uint32_t x515 = UINT32_MAX;
	int64_t x516 = 35346LL;
	int64_t t96 = -6771893934497470LL;

	t96 = ((x513&(x514*x515))/x516);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x525 = 259578U;
	static int16_t x526 = INT16_MAX;

	t97 = ((x525&(x526*x527))/x528);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x529 = -3189881LL;
	static uint64_t x530 = 3615970975050808LLU;
	int32_t x531 = INT32_MIN;
	uint64_t t98 = 2808547799545270LLU;

	t98 = ((x529&(x530*x531))/x532);

	if (t98 != 3536994726050441898LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x533 = 3148851;
	int8_t x536 = INT8_MAX;
	volatile int32_t t99 = 205595467;

	t99 = ((x533&(x534*x535))/x536);

	if (t99 != 24793) { NG(); } else { ; }
	
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


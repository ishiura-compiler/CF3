#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x7 = INT64_MIN;
int32_t x16 = -2494959;
int32_t x17 = INT32_MIN;
volatile int64_t x27 = INT64_MIN;
int64_t x29 = INT64_MIN;
volatile int32_t t8 = 700076431;
volatile int32_t t10 = -750336;
static volatile int32_t x50 = -1;
volatile int64_t x69 = INT64_MIN;
static uint32_t x70 = 6U;
int8_t x71 = 15;
int16_t x77 = INT16_MIN;
volatile uint8_t x82 = UINT8_MAX;
int64_t x84 = -1LL;
static int64_t x86 = INT64_MIN;
static volatile int8_t x91 = INT8_MIN;
int32_t x103 = INT32_MIN;
volatile int32_t t28 = 2;
uint8_t x120 = 7U;
int64_t x128 = INT64_MAX;
int64_t x133 = INT64_MAX;
int64_t x136 = 25487715720346522LL;
int32_t t33 = -94334;
int16_t x149 = 113;
int32_t t38 = 192;
int64_t x159 = INT64_MIN;
volatile int32_t t40 = 723057834;
int32_t t41 = 10679118;
volatile int16_t x171 = -1;
volatile int32_t t42 = 0;
int64_t x174 = INT64_MIN;
uint64_t x180 = UINT64_MAX;
uint16_t x183 = 135U;
static int16_t x185 = INT16_MIN;
uint32_t x190 = 0U;
uint16_t x193 = 14U;
int16_t x196 = -3254;
volatile int16_t x201 = -1;
int16_t x206 = INT16_MAX;
int32_t x208 = -247497;
int64_t x215 = -8618783585950LL;
uint16_t x216 = UINT16_MAX;
static int32_t x223 = 471;
volatile int8_t x228 = INT8_MAX;
int16_t x230 = INT16_MAX;
static int8_t x234 = 2;
uint32_t x235 = 0U;
static uint16_t x243 = 95U;
static uint8_t x245 = UINT8_MAX;
int32_t t60 = -2;
volatile int64_t x261 = INT64_MAX;
int8_t x272 = INT8_MAX;
uint8_t x273 = 91U;
static int32_t x276 = INT32_MAX;
volatile uint16_t x285 = UINT16_MAX;
uint16_t x287 = UINT16_MAX;
int64_t x288 = INT64_MAX;
int8_t x291 = -1;
static volatile int16_t x296 = -836;
volatile int32_t t72 = -2;
static uint64_t x298 = 5404589650863LLU;
int32_t t73 = -369080;
volatile int8_t x301 = INT8_MIN;
int64_t x307 = 5642390388LL;
volatile int8_t x310 = INT8_MIN;
int32_t x315 = -8972815;
int8_t x316 = -1;
int64_t x323 = -1LL;
uint8_t x327 = UINT8_MAX;
static volatile int32_t t82 = -176523966;
int64_t x345 = INT64_MAX;
int32_t t87 = -1031324;
uint8_t x359 = 50U;
volatile int32_t t89 = 114244;
uint32_t x366 = UINT32_MAX;
volatile int32_t t90 = -1459;
static volatile int32_t t91 = -38614;
int32_t t93 = 23179945;
uint8_t x382 = 19U;
volatile int64_t x386 = -135955886314116LL;
int32_t x389 = INT32_MIN;
uint32_t x397 = 7939U;
int8_t x403 = INT8_MIN;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	uint8_t x2 = UINT8_MAX;
	uint8_t x3 = 22U;
	int32_t x4 = INT32_MIN;
	int32_t t0 = -178657274;

	t0 = (x1<=(x2|(x3%x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	uint32_t x6 = 16405U;
	static int64_t x8 = 2260139605534957057LL;
	volatile int32_t t1 = 72;

	t1 = (x5<=(x6|(x7%x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int64_t x10 = INT64_MIN;
	uint32_t x11 = UINT32_MAX;
	uint8_t x12 = 7U;
	int32_t t2 = -1;

	t2 = (x9<=(x10|(x11%x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x13 = INT8_MIN;
	int16_t x14 = INT16_MAX;
	uint64_t x15 = 406LLU;
	volatile int32_t t3 = 128960240;

	t3 = (x13<=(x14|(x15%x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = -52851762;
	static volatile int16_t x19 = -1;
	int16_t x20 = INT16_MIN;
	int32_t t4 = 117359312;

	t4 = (x17<=(x18|(x19%x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = 23U;
	volatile int8_t x22 = INT8_MAX;
	uint8_t x23 = 29U;
	static int32_t x24 = INT32_MIN;
	static volatile int32_t t5 = 860384;

	t5 = (x21<=(x22|(x23%x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 38;
	static int8_t x26 = -1;
	volatile int64_t x28 = INT64_MIN;
	int32_t t6 = 1;

	t6 = (x25<=(x26|(x27%x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x30 = UINT64_MAX;
	int64_t x31 = -394060LL;
	int32_t x32 = INT32_MIN;
	int32_t t7 = 216;

	t7 = (x29<=(x30|(x31%x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	volatile uint16_t x34 = 77U;
	uint32_t x35 = UINT32_MAX;
	static uint32_t x36 = 266265855U;

	t8 = (x33<=(x34|(x35%x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x37 = 14U;
	volatile int64_t x38 = INT64_MAX;
	static int8_t x39 = INT8_MIN;
	int64_t x40 = -1LL;
	int32_t t9 = 85;

	t9 = (x37<=(x38|(x39%x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 1;
	static int64_t x42 = INT64_MIN;
	static volatile int32_t x43 = 25;
	int32_t x44 = INT32_MAX;

	t10 = (x41<=(x42|(x43%x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	int8_t x46 = -14;
	int16_t x47 = INT16_MIN;
	int32_t x48 = -1145;
	int32_t t11 = -228;

	t11 = (x45<=(x46|(x47%x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	int8_t x51 = INT8_MIN;
	int32_t x52 = -1;
	volatile int32_t t12 = -65254;

	t12 = (x49<=(x50|(x51%x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x53 = 59U;
	int8_t x54 = -1;
	int8_t x55 = INT8_MAX;
	static int8_t x56 = INT8_MAX;
	int32_t t13 = -4;

	t13 = (x53<=(x54|(x55%x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	static int8_t x58 = 1;
	int8_t x59 = -21;
	uint8_t x60 = 2U;
	static volatile int32_t t14 = 25796;

	t14 = (x57<=(x58|(x59%x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	int32_t x62 = INT32_MIN;
	int64_t x63 = INT64_MIN;
	int64_t x64 = INT64_MAX;
	int32_t t15 = 97620510;

	t15 = (x61<=(x62|(x63%x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	volatile int8_t x66 = INT8_MAX;
	static int64_t x67 = -1LL;
	volatile int8_t x68 = INT8_MIN;
	int32_t t16 = -8328745;

	t16 = (x65<=(x66|(x67%x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x72 = 943442411293021455LLU;
	volatile int32_t t17 = -23655897;

	t17 = (x69<=(x70|(x71%x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = -1LL;
	static int32_t x74 = -1;
	static uint8_t x75 = UINT8_MAX;
	volatile int32_t x76 = 246565479;
	int32_t t18 = -1;

	t18 = (x73<=(x74|(x75%x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = INT16_MIN;
	int16_t x79 = -1;
	uint16_t x80 = 8U;
	static volatile int32_t t19 = 28253;

	t19 = (x77<=(x78|(x79%x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -36021600;
	uint64_t x83 = 12007LLU;
	int32_t t20 = 5387419;

	t20 = (x81<=(x82|(x83%x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	int8_t x87 = 1;
	volatile uint32_t x88 = 440495U;
	volatile int32_t t21 = -84789969;

	t21 = (x85<=(x86|(x87%x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MIN;
	int8_t x90 = -1;
	volatile uint64_t x92 = 1892038299LLU;
	volatile int32_t t22 = -710074951;

	t22 = (x89<=(x90|(x91%x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = -40;
	int16_t x94 = INT16_MIN;
	volatile uint16_t x95 = 641U;
	static int8_t x96 = INT8_MIN;
	int32_t t23 = -143632756;

	t23 = (x93<=(x94|(x95%x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x97 = 76839044U;
	uint32_t x98 = UINT32_MAX;
	uint8_t x99 = 0U;
	int16_t x100 = INT16_MIN;
	volatile int32_t t24 = -202799;

	t24 = (x97<=(x98|(x99%x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 2U;
	volatile int32_t x102 = INT32_MAX;
	uint8_t x104 = 1U;
	int32_t t25 = -1;

	t25 = (x101<=(x102|(x103%x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 75197LLU;
	uint64_t x106 = 8041745666406457LLU;
	volatile int16_t x107 = INT16_MIN;
	static volatile uint32_t x108 = 3696U;
	volatile int32_t t26 = -100786;

	t26 = (x105<=(x106|(x107%x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 43U;
	int32_t x110 = INT32_MIN;
	int8_t x111 = -8;
	int16_t x112 = -2312;
	volatile int32_t t27 = -2250349;

	t27 = (x109<=(x110|(x111%x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = UINT8_MAX;
	int32_t x114 = INT32_MAX;
	int32_t x115 = -5524;
	int64_t x116 = 122549878911LL;

	t28 = (x113<=(x114|(x115%x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = -179;
	volatile int32_t x118 = 1198;
	volatile int64_t x119 = INT64_MIN;
	int32_t t29 = 5406409;

	t29 = (x117<=(x118|(x119%x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = 1334LL;
	volatile int16_t x122 = INT16_MIN;
	uint16_t x123 = 73U;
	int32_t x124 = 1557970;
	volatile int32_t t30 = -2;

	t30 = (x121<=(x122|(x123%x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	static uint32_t x126 = 181906847U;
	volatile uint8_t x127 = UINT8_MAX;
	int32_t t31 = 3384;

	t31 = (x125<=(x126|(x127%x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -896150791LL;
	uint32_t x130 = 22U;
	int8_t x131 = INT8_MIN;
	int64_t x132 = INT64_MIN;
	static int32_t t32 = -1;

	t32 = (x129<=(x130|(x131%x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x134 = 44162631201LL;
	volatile int8_t x135 = INT8_MIN;

	t33 = (x133<=(x134|(x135%x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;
	volatile int8_t x138 = INT8_MIN;
	volatile int8_t x139 = -1;
	int64_t x140 = INT64_MIN;
	volatile int32_t t34 = 3899;

	t34 = (x137<=(x138|(x139%x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	volatile uint64_t x142 = UINT64_MAX;
	int16_t x143 = INT16_MIN;
	int16_t x144 = -1;
	int32_t t35 = 106577463;

	t35 = (x141<=(x142|(x143%x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = 18;
	volatile int64_t x146 = INT64_MIN;
	int16_t x147 = 372;
	static uint32_t x148 = 1904021U;
	int32_t t36 = -763375434;

	t36 = (x145<=(x146|(x147%x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = INT32_MAX;
	static uint64_t x151 = 1LLU;
	int16_t x152 = INT16_MAX;
	volatile int32_t t37 = 5;

	t37 = (x149<=(x150|(x151%x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = INT8_MIN;
	static uint8_t x154 = 2U;
	volatile int64_t x155 = INT64_MIN;
	int8_t x156 = -1;

	t38 = (x153<=(x154|(x155%x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -1;
	int8_t x158 = INT8_MIN;
	int16_t x160 = INT16_MIN;
	int32_t t39 = -387;

	t39 = (x157<=(x158|(x159%x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = -1;
	int64_t x162 = INT64_MAX;
	int8_t x163 = -1;
	volatile int32_t x164 = INT32_MIN;

	t40 = (x161<=(x162|(x163%x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = UINT32_MAX;
	int32_t x166 = INT32_MIN;
	uint64_t x167 = 1739593723917LLU;
	int8_t x168 = INT8_MAX;

	t41 = (x165<=(x166|(x167%x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -8518029268LL;
	volatile uint64_t x170 = 13LLU;
	static uint16_t x172 = 5825U;

	t42 = (x169<=(x170|(x171%x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = 81766730117387386LL;
	int8_t x175 = 0;
	int32_t x176 = -1;
	static volatile int32_t t43 = 897369074;

	t43 = (x173<=(x174|(x175%x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x177 = UINT8_MAX;
	uint8_t x178 = UINT8_MAX;
	static int32_t x179 = INT32_MAX;
	static int32_t t44 = 2025;

	t44 = (x177<=(x178|(x179%x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x181 = UINT64_MAX;
	static uint8_t x182 = UINT8_MAX;
	int8_t x184 = INT8_MAX;
	static int32_t t45 = -364510;

	t45 = (x181<=(x182|(x183%x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x186 = 15;
	uint64_t x187 = 38LLU;
	uint16_t x188 = 310U;
	static int32_t t46 = 25;

	t46 = (x185<=(x186|(x187%x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = -1;
	uint32_t x191 = UINT32_MAX;
	volatile uint64_t x192 = UINT64_MAX;
	int32_t t47 = 108956;

	t47 = (x189<=(x190|(x191%x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x194 = 31;
	int64_t x195 = INT64_MAX;
	int32_t t48 = -3301;

	t48 = (x193<=(x194|(x195%x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x202 = -1;
	int8_t x203 = INT8_MIN;
	static int8_t x204 = 2;
	volatile int32_t t49 = 1738828;

	t49 = (x201<=(x202|(x203%x204)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = 943979079;
	uint8_t x207 = UINT8_MAX;
	volatile int32_t t50 = -34844263;

	t50 = (x205<=(x206|(x207%x208)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x209 = INT32_MIN;
	static int32_t x210 = 7909888;
	static uint16_t x211 = UINT16_MAX;
	int64_t x212 = 1939688176264100LL;
	static volatile int32_t t51 = -68401;

	t51 = (x209<=(x210|(x211%x212)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x213 = -1LL;
	uint16_t x214 = 33U;
	int32_t t52 = -1422;

	t52 = (x213<=(x214|(x215%x216)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = -1;
	int32_t x218 = -5350;
	uint16_t x219 = UINT16_MAX;
	uint8_t x220 = 48U;
	volatile int32_t t53 = 54;

	t53 = (x217<=(x218|(x219%x220)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = INT16_MIN;
	int16_t x222 = -280;
	int8_t x224 = INT8_MIN;
	int32_t t54 = 260978731;

	t54 = (x221<=(x222|(x223%x224)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x225 = INT16_MIN;
	static int32_t x226 = INT32_MAX;
	int32_t x227 = INT32_MIN;
	int32_t t55 = -33988630;

	t55 = (x225<=(x226|(x227%x228)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = -16687290LL;
	int32_t x231 = -1;
	uint32_t x232 = 95891645U;
	volatile int32_t t56 = -66731;

	t56 = (x229<=(x230|(x231%x232)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x233 = -14022;
	uint8_t x236 = 24U;
	int32_t t57 = -592;

	t57 = (x233<=(x234|(x235%x236)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x237 = UINT64_MAX;
	uint16_t x238 = UINT16_MAX;
	volatile int32_t x239 = INT32_MIN;
	uint32_t x240 = UINT32_MAX;
	int32_t t58 = 3;

	t58 = (x237<=(x238|(x239%x240)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = 2042;
	int8_t x242 = 0;
	int32_t x244 = -5553048;
	volatile int32_t t59 = -1069749501;

	t59 = (x241<=(x242|(x243%x244)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x246 = INT8_MIN;
	int32_t x247 = INT32_MIN;
	int32_t x248 = INT32_MAX;

	t60 = (x245<=(x246|(x247%x248)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x249 = UINT32_MAX;
	int16_t x250 = INT16_MIN;
	uint32_t x251 = 25221U;
	int32_t x252 = -1;
	volatile int32_t t61 = 56;

	t61 = (x249<=(x250|(x251%x252)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x253 = 18U;
	volatile int64_t x254 = -720353629LL;
	static int64_t x255 = -4062316LL;
	uint64_t x256 = UINT64_MAX;
	int32_t t62 = 1299;

	t62 = (x253<=(x254|(x255%x256)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = -1993;
	int8_t x258 = -1;
	uint64_t x259 = 3027078384288LLU;
	volatile int16_t x260 = -1;
	volatile int32_t t63 = 5;

	t63 = (x257<=(x258|(x259%x260)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x262 = INT16_MIN;
	volatile int32_t x263 = 37308;
	static int8_t x264 = -1;
	volatile int32_t t64 = -879;

	t64 = (x261<=(x262|(x263%x264)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x265 = 64339LL;
	static int64_t x266 = 684653388LL;
	uint8_t x267 = 10U;
	uint16_t x268 = 67U;
	static int32_t t65 = -298;

	t65 = (x265<=(x266|(x267%x268)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x269 = -17386976626LL;
	int64_t x270 = 5775490471591LL;
	int8_t x271 = INT8_MIN;
	int32_t t66 = 1054449471;

	t66 = (x269<=(x270|(x271%x272)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x274 = 25U;
	volatile int8_t x275 = INT8_MAX;
	volatile int32_t t67 = 132637778;

	t67 = (x273<=(x274|(x275%x276)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x277 = UINT16_MAX;
	int8_t x278 = -3;
	static int64_t x279 = -18919396LL;
	int8_t x280 = 6;
	volatile int32_t t68 = -449;

	t68 = (x277<=(x278|(x279%x280)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x281 = INT8_MIN;
	static uint64_t x282 = 27183LLU;
	uint32_t x283 = UINT32_MAX;
	static uint32_t x284 = 108832U;
	int32_t t69 = 2;

	t69 = (x281<=(x282|(x283%x284)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x286 = INT32_MIN;
	int32_t t70 = -78713384;

	t70 = (x285<=(x286|(x287%x288)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x289 = INT32_MAX;
	int8_t x290 = INT8_MAX;
	int32_t x292 = 1140243;
	volatile int32_t t71 = -2327;

	t71 = (x289<=(x290|(x291%x292)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x293 = INT64_MIN;
	uint8_t x294 = 7U;
	volatile int16_t x295 = INT16_MAX;

	t72 = (x293<=(x294|(x295%x296)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x297 = 2LLU;
	volatile int64_t x299 = INT64_MIN;
	uint32_t x300 = 1635932U;

	t73 = (x297<=(x298|(x299%x300)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x302 = 993564U;
	volatile int64_t x303 = 136362328074LL;
	int16_t x304 = INT16_MIN;
	static int32_t t74 = 225678733;

	t74 = (x301<=(x302|(x303%x304)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x305 = -3618LL;
	int16_t x306 = -5;
	int32_t x308 = INT32_MIN;
	volatile int32_t t75 = 894;

	t75 = (x305<=(x306|(x307%x308)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x309 = 1;
	uint8_t x311 = UINT8_MAX;
	volatile int8_t x312 = INT8_MIN;
	static int32_t t76 = -6;

	t76 = (x309<=(x310|(x311%x312)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x313 = 202586879U;
	int32_t x314 = -2;
	static int32_t t77 = -622;

	t77 = (x313<=(x314|(x315%x316)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x317 = 17524LLU;
	int16_t x318 = INT16_MIN;
	int8_t x319 = INT8_MAX;
	static uint8_t x320 = UINT8_MAX;
	volatile int32_t t78 = 1959;

	t78 = (x317<=(x318|(x319%x320)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x321 = 20U;
	int32_t x322 = INT32_MIN;
	static int16_t x324 = INT16_MIN;
	volatile int32_t t79 = 1870828;

	t79 = (x321<=(x322|(x323%x324)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x325 = -1;
	int32_t x326 = INT32_MIN;
	int32_t x328 = INT32_MIN;
	int32_t t80 = -32051699;

	t80 = (x325<=(x326|(x327%x328)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x329 = 238285LL;
	int64_t x330 = -1LL;
	int16_t x331 = INT16_MIN;
	int16_t x332 = -1;
	int32_t t81 = 1654;

	t81 = (x329<=(x330|(x331%x332)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x333 = 303436LL;
	volatile int64_t x334 = INT64_MIN;
	volatile int8_t x335 = -16;
	int64_t x336 = INT64_MIN;

	t82 = (x333<=(x334|(x335%x336)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x337 = -1;
	int16_t x338 = -1;
	uint8_t x339 = UINT8_MAX;
	int8_t x340 = 7;
	int32_t t83 = 99437208;

	t83 = (x337<=(x338|(x339%x340)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x341 = UINT8_MAX;
	int64_t x342 = -1LL;
	volatile int16_t x343 = INT16_MIN;
	volatile uint64_t x344 = 3223341139LLU;
	volatile int32_t t84 = 5506788;

	t84 = (x341<=(x342|(x343%x344)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x346 = UINT8_MAX;
	uint16_t x347 = UINT16_MAX;
	int16_t x348 = -1;
	volatile int32_t t85 = -135452;

	t85 = (x345<=(x346|(x347%x348)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x349 = -1;
	static int32_t x350 = INT32_MAX;
	int64_t x351 = INT64_MAX;
	uint8_t x352 = UINT8_MAX;
	int32_t t86 = 17286558;

	t86 = (x349<=(x350|(x351%x352)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x353 = 122U;
	uint32_t x354 = 905565U;
	static uint32_t x355 = 1447U;
	uint8_t x356 = 52U;

	t87 = (x353<=(x354|(x355%x356)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x357 = UINT64_MAX;
	int16_t x358 = 3407;
	int8_t x360 = -1;
	int32_t t88 = 204915;

	t88 = (x357<=(x358|(x359%x360)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x361 = 389U;
	int64_t x362 = INT64_MIN;
	uint64_t x363 = 8LLU;
	volatile int32_t x364 = -15599;

	t89 = (x361<=(x362|(x363%x364)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x365 = 0U;
	uint8_t x367 = 19U;
	volatile int64_t x368 = -1LL;

	t90 = (x365<=(x366|(x367%x368)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x369 = 34575340551945LLU;
	int16_t x370 = -1;
	static int8_t x371 = 1;
	uint8_t x372 = 5U;

	t91 = (x369<=(x370|(x371%x372)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x373 = 55U;
	volatile uint16_t x374 = UINT16_MAX;
	volatile int32_t x375 = -1;
	int64_t x376 = INT64_MAX;
	volatile int32_t t92 = -3916963;

	t92 = (x373<=(x374|(x375%x376)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x377 = -1;
	uint64_t x378 = 1789214LLU;
	int8_t x379 = 1;
	static uint64_t x380 = 133660LLU;

	t93 = (x377<=(x378|(x379%x380)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x381 = INT8_MIN;
	volatile int64_t x383 = 1635335785486LL;
	volatile int8_t x384 = INT8_MAX;
	int32_t t94 = -645;

	t94 = (x381<=(x382|(x383%x384)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x385 = -1;
	uint16_t x387 = 113U;
	uint8_t x388 = 7U;
	static volatile int32_t t95 = 394161760;

	t95 = (x385<=(x386|(x387%x388)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x390 = INT16_MIN;
	uint32_t x391 = UINT32_MAX;
	uint8_t x392 = 3U;
	volatile int32_t t96 = -593145;

	t96 = (x389<=(x390|(x391%x392)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x393 = -39;
	int32_t x394 = -2;
	int32_t x395 = INT32_MAX;
	static volatile int64_t x396 = INT64_MAX;
	volatile int32_t t97 = 915;

	t97 = (x393<=(x394|(x395%x396)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x398 = -3473;
	volatile int32_t x399 = 544;
	int16_t x400 = INT16_MIN;
	volatile int32_t t98 = -243262;

	t98 = (x397<=(x398|(x399%x400)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x401 = -27569775;
	static int16_t x402 = -1819;
	int32_t x404 = INT32_MIN;
	int32_t t99 = -870321;

	t99 = (x401<=(x402|(x403%x404)));

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


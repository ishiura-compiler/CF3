#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x2 = INT16_MAX;
uint32_t x6 = 1347U;
volatile uint8_t x9 = 2U;
static int16_t x23 = INT16_MIN;
int32_t x24 = -449;
int32_t x33 = INT32_MIN;
uint16_t x40 = 1U;
volatile int8_t x41 = 0;
uint64_t x43 = 921306607262LLU;
static uint16_t x52 = 1U;
uint8_t x63 = 1U;
int32_t x71 = INT32_MIN;
static volatile uint8_t x73 = 27U;
int32_t x76 = -21;
static int64_t x84 = INT64_MIN;
uint8_t x86 = UINT8_MAX;
int16_t x91 = 0;
uint8_t x94 = UINT8_MAX;
static volatile int8_t x105 = -1;
uint32_t x106 = 50U;
uint32_t x112 = UINT32_MAX;
volatile int32_t t26 = 32806803;
int32_t x121 = INT32_MIN;
volatile int64_t x123 = 973LL;
int64_t x127 = -1LL;
uint8_t x129 = UINT8_MAX;
int16_t x137 = INT16_MIN;
volatile int64_t x140 = INT64_MAX;
int32_t x142 = INT32_MAX;
int64_t x147 = INT64_MIN;
int32_t t35 = -2525322;
int32_t x155 = -136744386;
int8_t x157 = -3;
uint16_t x162 = UINT16_MAX;
uint64_t x163 = UINT64_MAX;
int8_t x166 = INT8_MAX;
int32_t t41 = 928;
int32_t x173 = -1;
volatile int32_t x175 = -11969;
volatile int32_t t43 = 11718214;
uint8_t x187 = 8U;
volatile int8_t x188 = INT8_MAX;
int8_t x189 = INT8_MIN;
static int64_t x190 = 506220511416LL;
static volatile int32_t t45 = 96455;
volatile int64_t x193 = 16943810232721524LL;
int8_t x208 = INT8_MIN;
int32_t t49 = 3;
volatile int8_t x211 = INT8_MAX;
int64_t x215 = INT64_MIN;
volatile int32_t t51 = -222;
int8_t x224 = INT8_MIN;
static volatile int32_t t54 = -691;
uint64_t x231 = 6959363823767LLU;
int64_t x235 = 2491341813LL;
int64_t x244 = INT64_MIN;
int32_t t58 = -949;
volatile int32_t t59 = -67;
int16_t x263 = INT16_MIN;
int64_t x267 = INT64_MIN;
uint8_t x270 = 7U;
int16_t x273 = INT16_MIN;
int32_t x282 = INT32_MAX;
int32_t t67 = -674;
volatile int16_t x287 = -1502;
static volatile int32_t x296 = 1058382465;
volatile int64_t x303 = INT64_MAX;
static uint16_t x304 = 328U;
uint32_t x313 = 0U;
int8_t x330 = -5;
int8_t x332 = INT8_MIN;
volatile int16_t x334 = INT16_MAX;
uint32_t x337 = UINT32_MAX;
static uint32_t x339 = 13375508U;
int8_t x349 = INT8_MIN;
volatile uint8_t x360 = UINT8_MAX;
int64_t x363 = INT64_MIN;
volatile int32_t x365 = INT32_MIN;
int32_t t89 = -3;
static int32_t x375 = 45582998;
volatile int32_t t90 = -500817287;
static int64_t x387 = -10015LL;
static int64_t x389 = INT64_MIN;
int64_t x394 = 189LL;
volatile int32_t t97 = -5332;
static volatile int64_t x405 = -1054373643952LL;
static volatile int32_t t99 = -2906530;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int16_t x3 = 1;
	volatile uint8_t x4 = 18U;
	static volatile int32_t t0 = -1351545;

	t0 = ((x1|x2)==(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	volatile int64_t x7 = 114901263501830115LL;
	volatile int16_t x8 = INT16_MAX;
	static volatile int32_t t1 = 2;

	t1 = ((x5|x6)==(x7/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x10 = -1;
	int8_t x11 = -1;
	int16_t x12 = -1;
	int32_t t2 = 0;

	t2 = ((x9|x10)==(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	uint64_t x14 = 343813732LLU;
	int64_t x15 = INT64_MIN;
	int32_t x16 = -766;
	volatile int32_t t3 = 278;

	t3 = ((x13|x14)==(x15/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 964;
	uint32_t x18 = UINT32_MAX;
	uint64_t x19 = UINT64_MAX;
	int8_t x20 = -1;
	volatile int32_t t4 = -52824;

	t4 = ((x17|x18)==(x19/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 9U;
	int64_t x22 = INT64_MIN;
	int32_t t5 = 5712;

	t5 = ((x21|x22)==(x23/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = 0;
	int32_t x30 = -31995606;
	static uint16_t x31 = 1U;
	int64_t x32 = -1LL;
	int32_t t6 = -90;

	t6 = ((x29|x30)==(x31/x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x34 = -1;
	volatile int16_t x35 = INT16_MAX;
	int32_t x36 = 842;
	volatile int32_t t7 = -505;

	t7 = ((x33|x34)==(x35/x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x37 = -1;
	volatile int8_t x38 = -1;
	static int8_t x39 = -25;
	int32_t t8 = -556;

	t8 = ((x37|x38)==(x39/x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x42 = -1;
	int64_t x44 = -20847826191275006LL;
	volatile int32_t t9 = 2704132;

	t9 = ((x41|x42)==(x43/x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x45 = UINT8_MAX;
	uint64_t x46 = 126585LLU;
	int16_t x47 = -314;
	uint8_t x48 = 1U;
	volatile int32_t t10 = -20497669;

	t10 = ((x45|x46)==(x47/x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x49 = 26U;
	int8_t x50 = INT8_MIN;
	int32_t x51 = INT32_MIN;
	volatile int32_t t11 = 510619;

	t11 = ((x49|x50)==(x51/x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -1LL;
	uint32_t x54 = 105021643U;
	int32_t x55 = -60463;
	int32_t x56 = INT32_MIN;
	volatile int32_t t12 = -146;

	t12 = ((x53|x54)==(x55/x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = 99473811U;
	volatile int64_t x58 = -29842LL;
	static int32_t x59 = 555692863;
	int16_t x60 = -34;
	volatile int32_t t13 = 8174;

	t13 = ((x57|x58)==(x59/x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = -1;
	static int16_t x62 = INT16_MIN;
	uint64_t x64 = 29LLU;
	int32_t t14 = 10113278;

	t14 = ((x61|x62)==(x63/x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x65 = UINT32_MAX;
	static volatile uint32_t x66 = 703066943U;
	static int64_t x67 = INT64_MAX;
	volatile uint32_t x68 = 33548U;
	int32_t t15 = 40;

	t15 = ((x65|x66)==(x67/x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x69 = 120468709U;
	volatile int32_t x70 = -916235;
	int32_t x72 = -149;
	volatile int32_t t16 = 101470;

	t16 = ((x69|x70)==(x71/x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x74 = -9;
	static int64_t x75 = INT64_MIN;
	volatile int32_t t17 = -31;

	t17 = ((x73|x74)==(x75/x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = -856450;
	int8_t x78 = INT8_MAX;
	volatile int64_t x79 = 93119LL;
	static int32_t x80 = 450967788;
	volatile int32_t t18 = -96489;

	t18 = ((x77|x78)==(x79/x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x81 = 600021302LL;
	uint64_t x82 = 10233LLU;
	static int8_t x83 = 47;
	int32_t t19 = 4053;

	t19 = ((x81|x82)==(x83/x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x85 = -801;
	int64_t x87 = 2296586955504341338LL;
	int16_t x88 = -404;
	volatile int32_t t20 = 118622462;

	t20 = ((x85|x86)==(x87/x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x89 = INT16_MIN;
	uint32_t x90 = UINT32_MAX;
	volatile uint32_t x92 = 1932602U;
	int32_t t21 = 1162417;

	t21 = ((x89|x90)==(x91/x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = 6;
	static int32_t x95 = 12;
	int8_t x96 = INT8_MAX;
	volatile int32_t t22 = 236034;

	t22 = ((x93|x94)==(x95/x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = 1;
	static int64_t x98 = INT64_MIN;
	static volatile int64_t x99 = 779304306580210730LL;
	int16_t x100 = INT16_MAX;
	volatile int32_t t23 = 420;

	t23 = ((x97|x98)==(x99/x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MIN;
	uint8_t x102 = 13U;
	uint32_t x103 = 94886667U;
	volatile int32_t x104 = INT32_MIN;
	int32_t t24 = -5982918;

	t24 = ((x101|x102)==(x103/x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x107 = 116U;
	int32_t x108 = INT32_MIN;
	int32_t t25 = -13;

	t25 = ((x105|x106)==(x107/x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = 495848872LL;
	static volatile uint16_t x110 = UINT16_MAX;
	uint8_t x111 = 0U;

	t26 = ((x109|x110)==(x111/x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MIN;
	static uint16_t x114 = 1916U;
	volatile uint8_t x115 = 17U;
	uint32_t x116 = 1036970052U;
	volatile int32_t t27 = -141363;

	t27 = ((x113|x114)==(x115/x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x117 = 32U;
	int8_t x118 = -4;
	volatile uint32_t x119 = 99U;
	uint32_t x120 = 33307929U;
	volatile int32_t t28 = -69;

	t28 = ((x117|x118)==(x119/x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x122 = 15;
	int16_t x124 = INT16_MIN;
	int32_t t29 = 4847874;

	t29 = ((x121|x122)==(x123/x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = 18;
	volatile int32_t x126 = -123;
	volatile int32_t x128 = -3;
	volatile int32_t t30 = 562700503;

	t30 = ((x125|x126)==(x127/x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x130 = INT64_MIN;
	uint16_t x131 = UINT16_MAX;
	int32_t x132 = INT32_MIN;
	volatile int32_t t31 = 29681530;

	t31 = ((x129|x130)==(x131/x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = 1995710068927LL;
	static int16_t x134 = INT16_MIN;
	static int8_t x135 = -1;
	volatile uint16_t x136 = UINT16_MAX;
	int32_t t32 = -1;

	t32 = ((x133|x134)==(x135/x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x138 = INT8_MAX;
	int64_t x139 = INT64_MIN;
	int32_t t33 = -12;

	t33 = ((x137|x138)==(x139/x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = -4;
	volatile int16_t x143 = 3743;
	uint32_t x144 = UINT32_MAX;
	int32_t t34 = 496179648;

	t34 = ((x141|x142)==(x143/x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = -604016194;
	uint32_t x146 = 1260546U;
	int16_t x148 = INT16_MIN;

	t35 = ((x145|x146)==(x147/x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x149 = -1LL;
	static int8_t x150 = INT8_MIN;
	int64_t x151 = -1LL;
	static volatile uint64_t x152 = 103938269142217LLU;
	volatile int32_t t36 = 541851684;

	t36 = ((x149|x150)==(x151/x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x153 = 3U;
	int16_t x154 = -71;
	int64_t x156 = INT64_MIN;
	int32_t t37 = 2639883;

	t37 = ((x153|x154)==(x155/x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x158 = -1;
	int8_t x159 = INT8_MIN;
	uint16_t x160 = 61U;
	volatile int32_t t38 = -163115924;

	t38 = ((x157|x158)==(x159/x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = 6;
	static int16_t x164 = -1;
	int32_t t39 = -385;

	t39 = ((x161|x162)==(x163/x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x165 = UINT64_MAX;
	int16_t x167 = INT16_MIN;
	uint8_t x168 = UINT8_MAX;
	static int32_t t40 = 287784;

	t40 = ((x165|x166)==(x167/x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = -1;
	uint8_t x170 = 11U;
	uint64_t x171 = 14230857LLU;
	int64_t x172 = INT64_MIN;

	t41 = ((x169|x170)==(x171/x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x174 = INT8_MIN;
	int8_t x176 = -3;
	volatile int32_t t42 = 28533;

	t42 = ((x173|x174)==(x175/x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x181 = UINT8_MAX;
	int32_t x182 = -3382805;
	int32_t x183 = INT32_MAX;
	int32_t x184 = -4022;

	t43 = ((x181|x182)==(x183/x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x185 = -1653283;
	uint16_t x186 = 91U;
	volatile int32_t t44 = -4;

	t44 = ((x185|x186)==(x187/x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x191 = 0U;
	static uint16_t x192 = 3398U;

	t45 = ((x189|x190)==(x191/x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x194 = UINT8_MAX;
	volatile int64_t x195 = -85719403944LL;
	int64_t x196 = INT64_MAX;
	volatile int32_t t46 = -2404;

	t46 = ((x193|x194)==(x195/x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x197 = UINT32_MAX;
	int8_t x198 = INT8_MIN;
	int16_t x199 = INT16_MIN;
	int8_t x200 = -1;
	int32_t t47 = -25897906;

	t47 = ((x197|x198)==(x199/x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x201 = UINT64_MAX;
	uint64_t x202 = UINT64_MAX;
	uint16_t x203 = 6U;
	int16_t x204 = 3;
	static volatile int32_t t48 = -188039716;

	t48 = ((x201|x202)==(x203/x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x205 = 176883450U;
	int8_t x206 = INT8_MAX;
	int8_t x207 = INT8_MIN;

	t49 = ((x205|x206)==(x207/x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = 5684417014418LL;
	volatile int8_t x210 = INT8_MIN;
	int32_t x212 = -1;
	int32_t t50 = -2767904;

	t50 = ((x209|x210)==(x211/x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x213 = -1;
	int16_t x214 = -12676;
	uint32_t x216 = 4U;

	t51 = ((x213|x214)==(x215/x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x217 = INT16_MAX;
	static uint8_t x218 = 35U;
	int64_t x219 = INT64_MIN;
	int64_t x220 = INT64_MIN;
	int32_t t52 = -57;

	t52 = ((x217|x218)==(x219/x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x221 = 115174113112LLU;
	int64_t x222 = -1LL;
	int32_t x223 = -1;
	int32_t t53 = -246;

	t53 = ((x221|x222)==(x223/x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x225 = 4U;
	static volatile int16_t x226 = INT16_MIN;
	static uint32_t x227 = 8800U;
	volatile int32_t x228 = INT32_MAX;

	t54 = ((x225|x226)==(x227/x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x229 = INT32_MIN;
	uint16_t x230 = 223U;
	volatile int8_t x232 = INT8_MIN;
	volatile int32_t t55 = 1;

	t55 = ((x229|x230)==(x231/x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = 511;
	int8_t x234 = -10;
	uint8_t x236 = 1U;
	int32_t t56 = 10;

	t56 = ((x233|x234)==(x235/x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x237 = 3046;
	int8_t x238 = -36;
	uint32_t x239 = 2004U;
	int16_t x240 = INT16_MIN;
	int32_t t57 = 251;

	t57 = ((x237|x238)==(x239/x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x241 = INT64_MIN;
	int64_t x242 = 28834736771LL;
	int64_t x243 = INT64_MIN;

	t58 = ((x241|x242)==(x243/x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x245 = 7U;
	volatile uint64_t x246 = 515LLU;
	volatile int8_t x247 = INT8_MAX;
	int16_t x248 = INT16_MIN;

	t59 = ((x245|x246)==(x247/x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = INT64_MIN;
	volatile int8_t x250 = INT8_MIN;
	int16_t x251 = INT16_MAX;
	int16_t x252 = INT16_MIN;
	int32_t t60 = 5009;

	t60 = ((x249|x250)==(x251/x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x253 = -1;
	static int64_t x254 = INT64_MIN;
	static int64_t x255 = -1927979607511LL;
	uint64_t x256 = 39162763LLU;
	int32_t t61 = -2;

	t61 = ((x253|x254)==(x255/x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x257 = 24U;
	int16_t x258 = -1;
	static uint8_t x259 = UINT8_MAX;
	int32_t x260 = 263;
	volatile int32_t t62 = 3603666;

	t62 = ((x257|x258)==(x259/x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = INT32_MIN;
	int64_t x262 = INT64_MIN;
	uint16_t x264 = UINT16_MAX;
	volatile int32_t t63 = 7;

	t63 = ((x261|x262)==(x263/x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x265 = INT8_MAX;
	volatile int16_t x266 = -820;
	static int8_t x268 = -2;
	static volatile int32_t t64 = -1;

	t64 = ((x265|x266)==(x267/x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x269 = -1;
	uint32_t x271 = 52033125U;
	uint16_t x272 = 1308U;
	int32_t t65 = -27728201;

	t65 = ((x269|x270)==(x271/x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x274 = UINT64_MAX;
	int64_t x275 = INT64_MIN;
	int32_t x276 = -6;
	int32_t t66 = -467450937;

	t66 = ((x273|x274)==(x275/x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x281 = INT16_MAX;
	uint8_t x283 = 70U;
	uint8_t x284 = 1U;

	t67 = ((x281|x282)==(x283/x284));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x285 = INT32_MAX;
	int8_t x286 = INT8_MIN;
	static int16_t x288 = INT16_MIN;
	volatile int32_t t68 = -190847;

	t68 = ((x285|x286)==(x287/x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x289 = -2;
	int8_t x290 = INT8_MAX;
	uint8_t x291 = 0U;
	int16_t x292 = INT16_MIN;
	static int32_t t69 = -2157645;

	t69 = ((x289|x290)==(x291/x292));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x293 = 140072897576859LLU;
	int64_t x294 = INT64_MIN;
	static uint8_t x295 = 47U;
	int32_t t70 = -496;

	t70 = ((x293|x294)==(x295/x296));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x297 = INT8_MAX;
	int16_t x298 = INT16_MIN;
	int32_t x299 = INT32_MIN;
	volatile int32_t x300 = INT32_MAX;
	volatile int32_t t71 = 13;

	t71 = ((x297|x298)==(x299/x300));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x301 = -1;
	static uint32_t x302 = 860U;
	volatile int32_t t72 = -87379;

	t72 = ((x301|x302)==(x303/x304));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x305 = 0U;
	volatile int32_t x306 = INT32_MIN;
	int64_t x307 = 51220LL;
	static uint8_t x308 = 2U;
	int32_t t73 = -513539;

	t73 = ((x305|x306)==(x307/x308));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x309 = -1;
	volatile int8_t x310 = -3;
	int16_t x311 = -1;
	int8_t x312 = 6;
	int32_t t74 = 432912783;

	t74 = ((x309|x310)==(x311/x312));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x314 = 1241;
	int64_t x315 = INT64_MIN;
	static int32_t x316 = 1;
	static volatile int32_t t75 = -349;

	t75 = ((x313|x314)==(x315/x316));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x317 = 31U;
	uint32_t x318 = UINT32_MAX;
	static int32_t x319 = INT32_MIN;
	static volatile int32_t x320 = INT32_MIN;
	int32_t t76 = -577183;

	t76 = ((x317|x318)==(x319/x320));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x321 = INT32_MIN;
	static volatile int32_t x322 = 809287;
	volatile int32_t x323 = INT32_MIN;
	int32_t x324 = INT32_MIN;
	volatile int32_t t77 = 1;

	t77 = ((x321|x322)==(x323/x324));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x325 = 24793;
	volatile int16_t x326 = 99;
	static uint16_t x327 = 8U;
	uint16_t x328 = 327U;
	volatile int32_t t78 = -233;

	t78 = ((x325|x326)==(x327/x328));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x329 = 728728597110LLU;
	int8_t x331 = 32;
	int32_t t79 = -8159833;

	t79 = ((x329|x330)==(x331/x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x333 = -1;
	volatile uint8_t x335 = UINT8_MAX;
	int32_t x336 = INT32_MIN;
	static int32_t t80 = 90;

	t80 = ((x333|x334)==(x335/x336));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x338 = -6;
	int32_t x340 = -1;
	volatile int32_t t81 = -535208;

	t81 = ((x337|x338)==(x339/x340));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x341 = INT64_MIN;
	static uint64_t x342 = 58720LLU;
	static int16_t x343 = INT16_MAX;
	int16_t x344 = -1;
	volatile int32_t t82 = -8797;

	t82 = ((x341|x342)==(x343/x344));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x345 = -24;
	int16_t x346 = INT16_MIN;
	int32_t x347 = -1;
	uint64_t x348 = 345401385480825431LLU;
	volatile int32_t t83 = 398366;

	t83 = ((x345|x346)==(x347/x348));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x350 = 179U;
	int16_t x351 = -1;
	static int8_t x352 = INT8_MAX;
	volatile int32_t t84 = 13825768;

	t84 = ((x349|x350)==(x351/x352));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x353 = INT64_MIN;
	volatile int16_t x354 = 3455;
	int8_t x355 = -1;
	int16_t x356 = 7;
	volatile int32_t t85 = 53345;

	t85 = ((x353|x354)==(x355/x356));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x357 = INT32_MIN;
	volatile uint16_t x358 = 11619U;
	volatile int8_t x359 = 1;
	int32_t t86 = 130;

	t86 = ((x357|x358)==(x359/x360));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x361 = 124;
	static volatile int8_t x362 = INT8_MAX;
	static int32_t x364 = INT32_MIN;
	static int32_t t87 = -97;

	t87 = ((x361|x362)==(x363/x364));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x366 = UINT16_MAX;
	static volatile int64_t x367 = -1687LL;
	int32_t x368 = -1;
	int32_t t88 = 14;

	t88 = ((x365|x366)==(x367/x368));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x369 = UINT32_MAX;
	volatile int16_t x370 = INT16_MIN;
	static volatile uint64_t x371 = 474426140066LLU;
	static volatile uint64_t x372 = UINT64_MAX;

	t89 = ((x369|x370)==(x371/x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x373 = -1LL;
	int16_t x374 = -2;
	static int8_t x376 = INT8_MIN;

	t90 = ((x373|x374)==(x375/x376));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x377 = INT32_MAX;
	static int64_t x378 = -1LL;
	static int32_t x379 = INT32_MAX;
	int16_t x380 = 978;
	volatile int32_t t91 = 2;

	t91 = ((x377|x378)==(x379/x380));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x381 = UINT32_MAX;
	uint8_t x382 = 3U;
	int8_t x383 = -1;
	static int16_t x384 = INT16_MIN;
	int32_t t92 = -480919;

	t92 = ((x381|x382)==(x383/x384));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x385 = -8091;
	int64_t x386 = INT64_MAX;
	static uint8_t x388 = 3U;
	int32_t t93 = -1;

	t93 = ((x385|x386)==(x387/x388));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x390 = 3926021044176LL;
	static uint16_t x391 = 2262U;
	static volatile int32_t x392 = INT32_MIN;
	static volatile int32_t t94 = -779;

	t94 = ((x389|x390)==(x391/x392));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x393 = 1U;
	static uint32_t x395 = UINT32_MAX;
	volatile int32_t x396 = -2961;
	int32_t t95 = 9153092;

	t95 = ((x393|x394)==(x395/x396));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x397 = INT64_MIN;
	int16_t x398 = INT16_MIN;
	volatile int16_t x399 = INT16_MIN;
	int64_t x400 = 434053071LL;
	volatile int32_t t96 = -73486;

	t96 = ((x397|x398)==(x399/x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x401 = -128806047;
	int8_t x402 = -1;
	int32_t x403 = INT32_MAX;
	uint8_t x404 = 1U;

	t97 = ((x401|x402)==(x403/x404));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x406 = INT16_MAX;
	volatile int8_t x407 = INT8_MIN;
	static uint32_t x408 = 3U;
	volatile int32_t t98 = -191559419;

	t98 = ((x405|x406)==(x407/x408));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x409 = 15380LLU;
	int16_t x410 = -1;
	volatile uint64_t x411 = 18667297393LLU;
	static int32_t x412 = INT32_MAX;

	t99 = ((x409|x410)==(x411/x412));

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


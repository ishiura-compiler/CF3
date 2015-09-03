#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -42391991;
uint8_t x6 = 7U;
int16_t x8 = -3;
volatile int32_t x17 = 55735;
int16_t x21 = 1;
static volatile int32_t x22 = -1;
uint32_t x30 = 1U;
int32_t t8 = 90650048;
int32_t x38 = 1;
int32_t x39 = -436608545;
volatile int16_t x44 = INT16_MIN;
uint64_t x48 = 19LLU;
int32_t t11 = 202526;
int64_t x51 = INT64_MIN;
static int64_t x52 = 100345687LL;
uint16_t x59 = 23077U;
int16_t x62 = 15;
int32_t x66 = INT32_MIN;
int32_t x69 = INT32_MAX;
int16_t x73 = -1;
int8_t x74 = -36;
static uint64_t x81 = UINT64_MAX;
uint64_t x83 = 34481353478773LLU;
uint32_t x89 = 3294U;
int32_t x92 = -1;
uint8_t x94 = 1U;
int64_t x96 = INT64_MIN;
int32_t x97 = -283948747;
static int32_t t24 = 34530810;
int32_t x102 = -1058;
uint32_t x103 = UINT32_MAX;
int32_t t25 = 12;
volatile int16_t x111 = -1;
int16_t x127 = 1;
int16_t x128 = INT16_MIN;
int32_t t31 = 38;
static volatile uint16_t x135 = 5807U;
static int8_t x143 = INT8_MAX;
static uint64_t x144 = 13958135858LLU;
volatile uint32_t x145 = UINT32_MAX;
static volatile int32_t t38 = -9292212;
uint16_t x180 = UINT16_MAX;
volatile int64_t x189 = -6240011082LL;
static int32_t t46 = -1;
static int32_t t47 = -145143092;
int64_t x205 = -2026253058LL;
uint16_t x207 = 24520U;
int16_t x211 = INT16_MIN;
int16_t x214 = -41;
static int32_t t53 = -1206;
volatile int64_t x223 = 34431270LL;
uint64_t x224 = 109347LLU;
volatile int32_t t55 = -4081526;
volatile uint32_t x234 = UINT32_MAX;
static int64_t x243 = -1LL;
static int32_t x244 = INT32_MAX;
int32_t x251 = INT32_MAX;
uint64_t x259 = UINT64_MAX;
uint8_t x260 = 3U;
static volatile int32_t t63 = -68339155;
static int64_t x265 = INT64_MIN;
volatile int16_t x266 = -3;
static volatile int32_t t64 = -1696980;
int16_t x270 = INT16_MAX;
int32_t x271 = -1;
int64_t x280 = -273220LL;
static int64_t x285 = 924477457758LL;
uint64_t x287 = UINT64_MAX;
int32_t t69 = -50;
int8_t x314 = -49;
volatile uint32_t x315 = UINT32_MAX;
uint32_t x316 = 7U;
int8_t x319 = -1;
static volatile uint64_t x324 = 1750408LLU;
volatile int32_t t77 = -526915098;
uint16_t x325 = 18897U;
volatile int16_t x326 = INT16_MIN;
volatile int32_t t78 = 3544341;
uint32_t x339 = 125973U;
uint32_t x342 = 31980U;
int64_t x347 = INT64_MAX;
volatile int64_t x355 = INT64_MIN;
static volatile int32_t t85 = -354619;
int8_t x363 = -36;
int8_t x373 = INT8_MIN;
volatile int32_t x375 = INT32_MIN;
static volatile int32_t t90 = 0;
uint16_t x383 = 440U;
uint16_t x388 = 10U;
int32_t t93 = 131306;
static int16_t x389 = -1;
volatile int32_t t94 = 113;
int16_t x394 = 155;
volatile uint16_t x398 = 1818U;
volatile int32_t x405 = -1;
int32_t t98 = 43744531;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint64_t x2 = 206367725115587LLU;
	int8_t x3 = 7;
	static int64_t x4 = -4408298013002646LL;

	t0 = ((x1<=x2)<(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	volatile uint16_t x7 = UINT16_MAX;
	int32_t t1 = 134984;

	t1 = ((x5<=x6)<(x7/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 1U;
	uint8_t x10 = UINT8_MAX;
	static volatile int32_t x11 = -3;
	uint32_t x12 = UINT32_MAX;
	int32_t t2 = -7335480;

	t2 = ((x9<=x10)<(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 786746616737164LLU;
	uint8_t x14 = 1U;
	int32_t x15 = INT32_MIN;
	int64_t x16 = 80917173430666LL;
	int32_t t3 = -234212440;

	t3 = ((x13<=x14)<(x15/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x18 = INT16_MIN;
	int16_t x19 = 4;
	int64_t x20 = INT64_MIN;
	int32_t t4 = 1915;

	t4 = ((x17<=x18)<(x19/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x23 = INT32_MIN;
	static uint64_t x24 = 93537512853LLU;
	static volatile int32_t t5 = -144;

	t5 = ((x21<=x22)<(x23/x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = 595;
	int64_t x26 = INT64_MIN;
	int16_t x27 = 3169;
	int64_t x28 = -4895067090597523LL;
	volatile int32_t t6 = -910160;

	t6 = ((x25<=x26)<(x27/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	volatile int16_t x31 = 3;
	int64_t x32 = -11438LL;
	int32_t t7 = -6402842;

	t7 = ((x29<=x30)<(x31/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x33 = INT64_MIN;
	volatile uint16_t x34 = 6193U;
	int32_t x35 = INT32_MIN;
	int8_t x36 = -2;

	t8 = ((x33<=x34)<(x35/x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	int64_t x40 = INT64_MIN;
	volatile int32_t t9 = -118950944;

	t9 = ((x37<=x38)<(x39/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -1;
	uint64_t x42 = UINT64_MAX;
	int8_t x43 = 7;
	int32_t t10 = 34409985;

	t10 = ((x41<=x42)<(x43/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	int8_t x46 = -1;
	int16_t x47 = INT16_MIN;

	t11 = ((x45<=x46)<(x47/x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	static volatile int8_t x50 = 5;
	int32_t t12 = 30147540;

	t12 = ((x49<=x50)<(x51/x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -74683LL;
	uint64_t x54 = UINT64_MAX;
	int64_t x55 = INT64_MAX;
	uint8_t x56 = UINT8_MAX;
	static int32_t t13 = 894;

	t13 = ((x53<=x54)<(x55/x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	int16_t x58 = INT16_MAX;
	uint16_t x60 = 1U;
	static int32_t t14 = -516620;

	t14 = ((x57<=x58)<(x59/x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	volatile int8_t x63 = INT8_MIN;
	int16_t x64 = 3;
	volatile int32_t t15 = 564;

	t15 = ((x61<=x62)<(x63/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	uint64_t x67 = UINT64_MAX;
	volatile int16_t x68 = INT16_MAX;
	static volatile int32_t t16 = 1;

	t16 = ((x65<=x66)<(x67/x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = -1;
	uint32_t x71 = 1823368U;
	int16_t x72 = INT16_MAX;
	int32_t t17 = 1;

	t17 = ((x69<=x70)<(x71/x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x75 = INT8_MAX;
	int8_t x76 = -1;
	int32_t t18 = -2979;

	t18 = ((x73<=x74)<(x75/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 2U;
	uint32_t x78 = 47154363U;
	volatile uint16_t x79 = 313U;
	int8_t x80 = -1;
	int32_t t19 = 14410267;

	t19 = ((x77<=x78)<(x79/x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x82 = 1287059U;
	static uint8_t x84 = UINT8_MAX;
	volatile int32_t t20 = 12315477;

	t20 = ((x81<=x82)<(x83/x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 339U;
	volatile int32_t x86 = INT32_MIN;
	int16_t x87 = -1;
	volatile int8_t x88 = -1;
	volatile int32_t t21 = 803236;

	t21 = ((x85<=x86)<(x87/x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = -1LL;
	int16_t x91 = 13;
	volatile int32_t t22 = -1;

	t22 = ((x89<=x90)<(x91/x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	static int16_t x95 = -1531;
	static volatile int32_t t23 = 1535044;

	t23 = ((x93<=x94)<(x95/x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x98 = 0U;
	int32_t x99 = -9;
	static int8_t x100 = INT8_MAX;

	t24 = ((x97<=x98)<(x99/x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = INT16_MIN;
	volatile int64_t x104 = -1LL;

	t25 = ((x101<=x102)<(x103/x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -12210LL;
	int16_t x106 = INT16_MIN;
	uint64_t x107 = 11672LLU;
	uint32_t x108 = 10467U;
	static int32_t t26 = 13;

	t26 = ((x105<=x106)<(x107/x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	int64_t x110 = INT64_MIN;
	static volatile int64_t x112 = -17103265619544LL;
	volatile int32_t t27 = -1869;

	t27 = ((x109<=x110)<(x111/x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 2U;
	int32_t x114 = -1;
	int64_t x115 = -608691533999168611LL;
	static int64_t x116 = INT64_MAX;
	volatile int32_t t28 = 444;

	t28 = ((x113<=x114)<(x115/x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = INT8_MAX;
	uint64_t x118 = 29643832LLU;
	uint32_t x119 = UINT32_MAX;
	int64_t x120 = 4512584502999LL;
	volatile int32_t t29 = 571649084;

	t29 = ((x117<=x118)<(x119/x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x121 = INT8_MAX;
	volatile int8_t x122 = INT8_MIN;
	int32_t x123 = INT32_MAX;
	uint8_t x124 = UINT8_MAX;
	static int32_t t30 = 28617;

	t30 = ((x121<=x122)<(x123/x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x125 = UINT8_MAX;
	int64_t x126 = -1LL;

	t31 = ((x125<=x126)<(x127/x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = INT8_MIN;
	static uint32_t x134 = UINT32_MAX;
	int32_t x136 = 80754461;
	static int32_t t32 = -787340;

	t32 = ((x133<=x134)<(x135/x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = 929266036;
	int32_t x138 = -579355991;
	int8_t x139 = INT8_MIN;
	int64_t x140 = INT64_MAX;
	int32_t t33 = -1;

	t33 = ((x137<=x138)<(x139/x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MIN;
	uint8_t x142 = 2U;
	int32_t t34 = 86371379;

	t34 = ((x141<=x142)<(x143/x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x146 = -11;
	static volatile int16_t x147 = -5881;
	int16_t x148 = INT16_MIN;
	volatile int32_t t35 = -156;

	t35 = ((x145<=x146)<(x147/x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x149 = 12413U;
	volatile uint32_t x150 = UINT32_MAX;
	static int16_t x151 = INT16_MIN;
	volatile int32_t x152 = -1;
	int32_t t36 = -61;

	t36 = ((x149<=x150)<(x151/x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x153 = INT16_MAX;
	uint64_t x154 = 108334105819869207LLU;
	int64_t x155 = INT64_MAX;
	volatile uint8_t x156 = 58U;
	int32_t t37 = 495;

	t37 = ((x153<=x154)<(x155/x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x157 = UINT32_MAX;
	static int16_t x158 = INT16_MIN;
	int16_t x159 = INT16_MIN;
	static uint64_t x160 = UINT64_MAX;

	t38 = ((x157<=x158)<(x159/x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x161 = 3;
	static int64_t x162 = 6214472689037LL;
	static int32_t x163 = -1;
	int8_t x164 = INT8_MAX;
	volatile int32_t t39 = 2516891;

	t39 = ((x161<=x162)<(x163/x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = -3572;
	uint64_t x166 = 7801266273LLU;
	volatile int64_t x167 = INT64_MIN;
	volatile int64_t x168 = 2939LL;
	int32_t t40 = 1019715;

	t40 = ((x165<=x166)<(x167/x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = 32;
	uint16_t x170 = 293U;
	uint8_t x171 = 6U;
	int16_t x172 = 1;
	volatile int32_t t41 = -95542;

	t41 = ((x169<=x170)<(x171/x172));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x173 = 3;
	volatile int16_t x174 = INT16_MAX;
	volatile int16_t x175 = INT16_MIN;
	int32_t x176 = -1;
	int32_t t42 = -457;

	t42 = ((x173<=x174)<(x175/x176));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x177 = INT8_MIN;
	int16_t x178 = INT16_MAX;
	uint32_t x179 = 1859634712U;
	volatile int32_t t43 = 3339289;

	t43 = ((x177<=x178)<(x179/x180));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = -4969024;
	static int32_t x182 = 56;
	uint64_t x183 = UINT64_MAX;
	static int32_t x184 = 651781;
	volatile int32_t t44 = -817629587;

	t44 = ((x181<=x182)<(x183/x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x185 = 91U;
	uint8_t x186 = 10U;
	uint16_t x187 = 8U;
	static int16_t x188 = INT16_MIN;
	static volatile int32_t t45 = -63;

	t45 = ((x185<=x186)<(x187/x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x190 = INT64_MIN;
	int8_t x191 = INT8_MIN;
	int8_t x192 = 36;

	t46 = ((x189<=x190)<(x191/x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x193 = UINT16_MAX;
	int16_t x194 = 717;
	static uint32_t x195 = 4055572U;
	uint64_t x196 = UINT64_MAX;

	t47 = ((x193<=x194)<(x195/x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x197 = 55U;
	static int32_t x198 = -1;
	volatile int64_t x199 = -1LL;
	int32_t x200 = -1;
	static int32_t t48 = 257588441;

	t48 = ((x197<=x198)<(x199/x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x201 = 2U;
	uint64_t x202 = UINT64_MAX;
	int16_t x203 = INT16_MIN;
	int8_t x204 = 22;
	static volatile int32_t t49 = -30;

	t49 = ((x201<=x202)<(x203/x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x206 = 15LLU;
	int8_t x208 = 7;
	volatile int32_t t50 = -43;

	t50 = ((x205<=x206)<(x207/x208));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x209 = UINT64_MAX;
	int16_t x210 = INT16_MIN;
	int32_t x212 = -334364;
	volatile int32_t t51 = 1;

	t51 = ((x209<=x210)<(x211/x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x213 = 1U;
	volatile int8_t x215 = -5;
	volatile uint16_t x216 = UINT16_MAX;
	volatile int32_t t52 = -1;

	t52 = ((x213<=x214)<(x215/x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x217 = INT8_MIN;
	uint32_t x218 = 9U;
	uint64_t x219 = 184LLU;
	volatile int64_t x220 = 22458051LL;

	t53 = ((x217<=x218)<(x219/x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x221 = 21U;
	uint8_t x222 = 0U;
	volatile int32_t t54 = 59227320;

	t54 = ((x221<=x222)<(x223/x224));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = INT16_MIN;
	int8_t x230 = INT8_MIN;
	int8_t x231 = INT8_MIN;
	static int8_t x232 = INT8_MIN;

	t55 = ((x229<=x230)<(x231/x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x233 = UINT16_MAX;
	int16_t x235 = -1;
	int16_t x236 = -1;
	static volatile int32_t t56 = -1;

	t56 = ((x233<=x234)<(x235/x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x237 = 27452U;
	uint16_t x238 = 247U;
	static uint64_t x239 = 1LLU;
	static uint64_t x240 = 8122653410LLU;
	volatile int32_t t57 = -118549353;

	t57 = ((x237<=x238)<(x239/x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = 4;
	int32_t x242 = 49873382;
	static volatile int32_t t58 = -28871;

	t58 = ((x241<=x242)<(x243/x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x245 = 13U;
	volatile int64_t x246 = -533526LL;
	uint8_t x247 = 2U;
	static uint8_t x248 = 2U;
	int32_t t59 = 3;

	t59 = ((x245<=x246)<(x247/x248));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = INT16_MAX;
	uint8_t x250 = UINT8_MAX;
	volatile uint8_t x252 = UINT8_MAX;
	int32_t t60 = -410270;

	t60 = ((x249<=x250)<(x251/x252));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x253 = -1;
	uint8_t x254 = 8U;
	static int32_t x255 = 29738;
	volatile uint16_t x256 = 4U;
	volatile int32_t t61 = -3504;

	t61 = ((x253<=x254)<(x255/x256));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x257 = 5U;
	int8_t x258 = INT8_MIN;
	volatile int32_t t62 = 72572994;

	t62 = ((x257<=x258)<(x259/x260));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x261 = INT32_MIN;
	int64_t x262 = -101701824605842LL;
	int16_t x263 = INT16_MIN;
	static int8_t x264 = INT8_MIN;

	t63 = ((x261<=x262)<(x263/x264));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x267 = -19971628084LL;
	uint32_t x268 = 80173853U;

	t64 = ((x265<=x266)<(x267/x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = INT8_MIN;
	static int32_t x272 = 376776388;
	int32_t t65 = -97;

	t65 = ((x269<=x270)<(x271/x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x273 = 0U;
	static int64_t x274 = INT64_MAX;
	static int64_t x275 = INT64_MIN;
	static int16_t x276 = 2021;
	volatile int32_t t66 = -126202605;

	t66 = ((x273<=x274)<(x275/x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x277 = 29699280342621698LLU;
	static int8_t x278 = INT8_MIN;
	uint32_t x279 = 7909527U;
	volatile int32_t t67 = -1502;

	t67 = ((x277<=x278)<(x279/x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x281 = UINT32_MAX;
	int8_t x282 = INT8_MIN;
	int8_t x283 = -15;
	volatile int32_t x284 = -3803961;
	int32_t t68 = 1;

	t68 = ((x281<=x282)<(x283/x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x286 = INT64_MIN;
	int32_t x288 = -16;

	t69 = ((x285<=x286)<(x287/x288));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x289 = INT32_MIN;
	static int32_t x290 = INT32_MIN;
	uint32_t x291 = 3U;
	static volatile uint64_t x292 = 6448296112153142927LLU;
	volatile int32_t t70 = 849607122;

	t70 = ((x289<=x290)<(x291/x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = INT32_MIN;
	volatile int64_t x294 = -1LL;
	volatile int32_t x295 = -28;
	int64_t x296 = 1LL;
	int32_t t71 = 61244;

	t71 = ((x293<=x294)<(x295/x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = INT64_MIN;
	static int64_t x298 = 148617077LL;
	volatile int64_t x299 = INT64_MIN;
	uint8_t x300 = UINT8_MAX;
	static int32_t t72 = -58637772;

	t72 = ((x297<=x298)<(x299/x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x301 = 106;
	int8_t x302 = -1;
	volatile uint8_t x303 = 62U;
	volatile int64_t x304 = INT64_MIN;
	volatile int32_t t73 = -340115350;

	t73 = ((x301<=x302)<(x303/x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = INT8_MIN;
	uint8_t x310 = 25U;
	uint16_t x311 = 535U;
	int64_t x312 = -790507LL;
	volatile int32_t t74 = 7691;

	t74 = ((x309<=x310)<(x311/x312));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = INT32_MIN;
	int32_t t75 = 83047360;

	t75 = ((x313<=x314)<(x315/x316));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x317 = INT16_MAX;
	volatile int16_t x318 = -2;
	uint64_t x320 = 1072240529492LLU;
	volatile int32_t t76 = 229257992;

	t76 = ((x317<=x318)<(x319/x320));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x321 = -1;
	int32_t x322 = -1;
	uint64_t x323 = UINT64_MAX;

	t77 = ((x321<=x322)<(x323/x324));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x327 = INT32_MIN;
	volatile uint32_t x328 = 3U;

	t78 = ((x325<=x326)<(x327/x328));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x329 = 48U;
	volatile uint32_t x330 = UINT32_MAX;
	uint8_t x331 = 0U;
	int64_t x332 = INT64_MIN;
	volatile int32_t t79 = 9450518;

	t79 = ((x329<=x330)<(x331/x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x333 = 2223U;
	volatile int64_t x334 = INT64_MAX;
	uint16_t x335 = 110U;
	int32_t x336 = 6114;
	int32_t t80 = 0;

	t80 = ((x333<=x334)<(x335/x336));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x337 = INT32_MIN;
	int16_t x338 = -486;
	int8_t x340 = 22;
	volatile int32_t t81 = -1383527;

	t81 = ((x337<=x338)<(x339/x340));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x341 = INT8_MAX;
	int64_t x343 = 40327490LL;
	uint64_t x344 = 8589602224LLU;
	static volatile int32_t t82 = -193979743;

	t82 = ((x341<=x342)<(x343/x344));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x345 = -1LL;
	int8_t x346 = INT8_MIN;
	int8_t x348 = INT8_MAX;
	volatile int32_t t83 = 427879866;

	t83 = ((x345<=x346)<(x347/x348));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x349 = INT16_MIN;
	uint16_t x350 = UINT16_MAX;
	int64_t x351 = 30354632908710LL;
	static uint64_t x352 = UINT64_MAX;
	volatile int32_t t84 = 1513709;

	t84 = ((x349<=x350)<(x351/x352));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x353 = -1LL;
	uint64_t x354 = 63160LLU;
	int16_t x356 = INT16_MIN;

	t85 = ((x353<=x354)<(x355/x356));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x357 = 31;
	int8_t x358 = INT8_MIN;
	volatile int64_t x359 = -11553472822LL;
	int32_t x360 = 5;
	volatile int32_t t86 = 0;

	t86 = ((x357<=x358)<(x359/x360));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x361 = 2670;
	int32_t x362 = -45517;
	static uint16_t x364 = 48U;
	volatile int32_t t87 = 971914;

	t87 = ((x361<=x362)<(x363/x364));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x365 = 506510389187450140LL;
	static int64_t x366 = -1LL;
	uint64_t x367 = 27050721592LLU;
	uint16_t x368 = 2U;
	volatile int32_t t88 = -5137;

	t88 = ((x365<=x366)<(x367/x368));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x369 = UINT8_MAX;
	int8_t x370 = -1;
	uint16_t x371 = 5U;
	int16_t x372 = -86;
	volatile int32_t t89 = -472972906;

	t89 = ((x369<=x370)<(x371/x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x374 = UINT32_MAX;
	int64_t x376 = INT64_MIN;

	t90 = ((x373<=x374)<(x375/x376));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x377 = INT8_MIN;
	static int64_t x378 = INT64_MIN;
	int8_t x379 = INT8_MAX;
	uint64_t x380 = UINT64_MAX;
	static volatile int32_t t91 = 0;

	t91 = ((x377<=x378)<(x379/x380));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x381 = -1LL;
	int16_t x382 = INT16_MIN;
	int64_t x384 = INT64_MIN;
	int32_t t92 = 12;

	t92 = ((x381<=x382)<(x383/x384));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x385 = 0U;
	int8_t x386 = -1;
	int16_t x387 = -1;

	t93 = ((x385<=x386)<(x387/x388));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x390 = INT8_MAX;
	static int64_t x391 = 201837496536876LL;
	int8_t x392 = INT8_MIN;

	t94 = ((x389<=x390)<(x391/x392));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x393 = INT8_MAX;
	int32_t x395 = INT32_MIN;
	int32_t x396 = INT32_MIN;
	int32_t t95 = 98010282;

	t95 = ((x393<=x394)<(x395/x396));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x397 = INT16_MIN;
	volatile uint16_t x399 = 70U;
	volatile int16_t x400 = 933;
	volatile int32_t t96 = -70693;

	t96 = ((x397<=x398)<(x399/x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x401 = 399230U;
	uint32_t x402 = UINT32_MAX;
	int32_t x403 = INT32_MAX;
	int64_t x404 = 1218142710808LL;
	volatile int32_t t97 = 241938875;

	t97 = ((x401<=x402)<(x403/x404));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x406 = UINT16_MAX;
	volatile int64_t x407 = -372995134479509LL;
	uint8_t x408 = 14U;

	t98 = ((x405<=x406)<(x407/x408));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x413 = -16;
	uint64_t x414 = 26488250LLU;
	uint64_t x415 = UINT64_MAX;
	volatile int32_t x416 = -662654;
	static int32_t t99 = -3585997;

	t99 = ((x413<=x414)<(x415/x416));

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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x4 = 126U;
int16_t x15 = INT16_MIN;
int32_t t3 = -4619;
int32_t x19 = INT32_MIN;
uint64_t x20 = 1315426556LLU;
static uint8_t x21 = UINT8_MAX;
static uint32_t x26 = 0U;
int32_t x36 = INT32_MIN;
int32_t x40 = INT32_MIN;
static int32_t t9 = 22161;
int8_t x41 = INT8_MAX;
static int32_t t10 = -186;
volatile uint32_t x45 = 1559198341U;
volatile uint16_t x49 = UINT16_MAX;
uint8_t x58 = UINT8_MAX;
int16_t x63 = 820;
int8_t x64 = -1;
static int32_t t15 = 7886178;
volatile int64_t x65 = INT64_MIN;
uint64_t x68 = 45LLU;
uint16_t x72 = 19439U;
volatile int16_t x73 = 1736;
int64_t x79 = 1639917530640301882LL;
static int64_t x85 = INT64_MIN;
static int32_t t21 = -515655399;
uint32_t x96 = 753871169U;
static volatile int32_t t24 = 39320380;
int32_t x106 = INT32_MIN;
volatile int32_t t27 = 7940;
int16_t x116 = INT16_MAX;
static int16_t x124 = INT16_MIN;
static volatile int8_t x126 = INT8_MIN;
volatile int64_t x130 = INT64_MIN;
volatile uint16_t x132 = UINT16_MAX;
volatile int32_t t33 = 103;
uint8_t x139 = UINT8_MAX;
int32_t x140 = -1461675;
static uint16_t x142 = 263U;
int16_t x150 = INT16_MIN;
int16_t x151 = INT16_MIN;
int32_t x152 = -295;
int8_t x157 = -3;
int16_t x159 = -1;
volatile int32_t t40 = -25;
volatile int32_t t41 = -216;
volatile int8_t x180 = INT8_MAX;
volatile int32_t x196 = INT32_MIN;
int16_t x199 = INT16_MAX;
uint8_t x200 = 6U;
int32_t x203 = -75063;
int32_t t49 = 0;
static int16_t x224 = INT16_MIN;
static int64_t x226 = 254LL;
static uint32_t x233 = 4043733U;
uint32_t x236 = UINT32_MAX;
int32_t x245 = -1;
int64_t x251 = -12326847968706659LL;
int32_t x254 = INT32_MIN;
volatile int32_t t62 = 2153504;
volatile int32_t t64 = -5329;
int32_t x274 = INT32_MIN;
static int32_t t67 = -26646;
uint32_t x277 = 1U;
uint64_t x278 = UINT64_MAX;
volatile int32_t t69 = 6;
int8_t x285 = INT8_MAX;
static int64_t x290 = -17437LL;
uint8_t x307 = 28U;
int64_t x315 = INT64_MIN;
int16_t x323 = INT16_MAX;
volatile int32_t t78 = 40991;
static int64_t x326 = INT64_MIN;
uint32_t x330 = 1637131865U;
volatile int64_t x331 = -168367566LL;
volatile uint32_t x336 = UINT32_MAX;
volatile int32_t t82 = 102245166;
int16_t x346 = -64;
int16_t x347 = INT16_MIN;
int8_t x351 = INT8_MIN;
int32_t x360 = INT32_MIN;
static volatile int32_t t88 = -61872;
int64_t x372 = -147166605LL;
static volatile int32_t t89 = 16770846;
int8_t x383 = 13;
static int32_t t92 = 1193;
int32_t t93 = -2375;
int8_t x392 = INT8_MIN;
int16_t x399 = -726;
int32_t x401 = INT32_MAX;
static int8_t x405 = 8;
int64_t x410 = -1LL;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static int64_t x2 = -1LL;
	volatile int64_t x3 = -58084LL;
	int32_t t0 = 4;

	t0 = (x1<(x2==(x3%x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	int32_t x6 = INT32_MAX;
	static uint64_t x7 = 351407592LLU;
	int8_t x8 = INT8_MAX;
	volatile int32_t t1 = 514261383;

	t1 = (x5<(x6==(x7%x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -2;
	static int64_t x10 = -4008LL;
	int16_t x11 = 1;
	int16_t x12 = 807;
	volatile int32_t t2 = 4;

	t2 = (x9<(x10==(x11%x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int16_t x14 = -1;
	int16_t x16 = 3713;

	t3 = (x13<(x14==(x15%x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int16_t x18 = 10201;
	int32_t t4 = -1;

	t4 = (x17<(x18==(x19%x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x22 = INT16_MIN;
	int32_t x23 = INT32_MIN;
	int32_t x24 = -467;
	volatile int32_t t5 = -1042887028;

	t5 = (x21<(x22==(x23%x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	int8_t x27 = -6;
	volatile int8_t x28 = INT8_MIN;
	static int32_t t6 = 1;

	t6 = (x25<(x26==(x27%x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	static uint16_t x30 = 1006U;
	int32_t x31 = -33;
	uint32_t x32 = 10078419U;
	static int32_t t7 = -2031;

	t7 = (x29<(x30==(x31%x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 28;
	static volatile uint32_t x34 = 58516U;
	int32_t x35 = -8;
	int32_t t8 = -318886842;

	t8 = (x33<(x34==(x35%x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 518327LLU;
	int64_t x38 = 14LL;
	static uint8_t x39 = 5U;

	t9 = (x37<(x38==(x39%x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x42 = 17488848255772807LLU;
	int8_t x43 = -7;
	int32_t x44 = INT32_MIN;

	t10 = (x41<(x42==(x43%x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = -1;
	int16_t x47 = 77;
	uint8_t x48 = UINT8_MAX;
	int32_t t11 = -3;

	t11 = (x45<(x46==(x47%x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x50 = INT32_MAX;
	static volatile int16_t x51 = INT16_MIN;
	int16_t x52 = -1;
	int32_t t12 = -1589750;

	t12 = (x49<(x50==(x51%x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	int8_t x54 = INT8_MIN;
	uint8_t x55 = UINT8_MAX;
	int16_t x56 = -8;
	volatile int32_t t13 = -8843900;

	t13 = (x53<(x54==(x55%x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = -7;
	int64_t x59 = -1750LL;
	int16_t x60 = -515;
	static int32_t t14 = 0;

	t14 = (x57<(x58==(x59%x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MIN;
	static int16_t x62 = INT16_MAX;

	t15 = (x61<(x62==(x63%x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x66 = INT32_MIN;
	static int32_t x67 = INT32_MIN;
	volatile int32_t t16 = -188;

	t16 = (x65<(x66==(x67%x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -762334;
	uint64_t x70 = 44123090LLU;
	static int16_t x71 = -5;
	volatile int32_t t17 = -26416;

	t17 = (x69<(x70==(x71%x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x74 = 12LLU;
	int32_t x75 = INT32_MIN;
	volatile uint8_t x76 = UINT8_MAX;
	int32_t t18 = 3355189;

	t18 = (x73<(x74==(x75%x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -2225;
	volatile int32_t x78 = INT32_MAX;
	volatile int32_t x80 = -1;
	int32_t t19 = -15758;

	t19 = (x77<(x78==(x79%x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = 0;
	int32_t x82 = -410563708;
	uint64_t x83 = UINT64_MAX;
	int32_t x84 = INT32_MAX;
	int32_t t20 = 1;

	t20 = (x81<(x82==(x83%x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x86 = 30736U;
	static volatile uint8_t x87 = 29U;
	uint16_t x88 = 3495U;

	t21 = (x85<(x86==(x87%x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = -2417LL;
	int16_t x90 = -559;
	volatile int8_t x91 = 10;
	int8_t x92 = -7;
	int32_t t22 = 66503870;

	t22 = (x89<(x90==(x91%x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -6;
	volatile uint8_t x94 = 120U;
	volatile int32_t x95 = INT32_MIN;
	volatile int32_t t23 = -56682;

	t23 = (x93<(x94==(x95%x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = INT16_MIN;
	uint8_t x98 = UINT8_MAX;
	int64_t x99 = -1LL;
	int32_t x100 = -70;

	t24 = (x97<(x98==(x99%x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	int64_t x102 = INT64_MIN;
	int16_t x103 = -3998;
	static uint32_t x104 = 4030U;
	volatile int32_t t25 = -66000253;

	t25 = (x101<(x102==(x103%x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 142583680425826202LLU;
	int32_t x107 = INT32_MIN;
	volatile uint64_t x108 = 29286208573723LLU;
	volatile int32_t t26 = -1731;

	t26 = (x105<(x106==(x107%x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -1LL;
	static int32_t x110 = INT32_MAX;
	int8_t x111 = -1;
	int16_t x112 = -44;

	t27 = (x109<(x110==(x111%x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = UINT64_MAX;
	int8_t x114 = INT8_MAX;
	int8_t x115 = 1;
	int32_t t28 = 10103100;

	t28 = (x113<(x114==(x115%x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = INT32_MIN;
	volatile int64_t x118 = INT64_MAX;
	static volatile int64_t x119 = -12457LL;
	uint16_t x120 = 24U;
	int32_t t29 = -28299;

	t29 = (x117<(x118==(x119%x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	uint64_t x122 = UINT64_MAX;
	uint64_t x123 = 1476059783408170298LLU;
	int32_t t30 = 25095;

	t30 = (x121<(x122==(x123%x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	static int16_t x127 = INT16_MAX;
	int64_t x128 = INT64_MIN;
	int32_t t31 = 3;

	t31 = (x125<(x126==(x127%x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = INT64_MAX;
	volatile int32_t x131 = -1;
	static volatile int32_t t32 = -1;

	t32 = (x129<(x130==(x131%x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x133 = 1U;
	int64_t x134 = -1LL;
	int16_t x135 = INT16_MIN;
	uint16_t x136 = UINT16_MAX;

	t33 = (x133<(x134==(x135%x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x137 = 119U;
	int16_t x138 = INT16_MIN;
	int32_t t34 = 1;

	t34 = (x137<(x138==(x139%x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = 24;
	int32_t x143 = 1030938965;
	int8_t x144 = -14;
	volatile int32_t t35 = -2840607;

	t35 = (x141<(x142==(x143%x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = -3;
	int32_t t36 = -14395464;

	t36 = (x149<(x150==(x151%x152)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x153 = INT64_MAX;
	volatile int32_t x154 = INT32_MIN;
	int64_t x155 = INT64_MIN;
	int32_t x156 = -7092;
	int32_t t37 = -33578;

	t37 = (x153<(x154==(x155%x156)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x158 = INT16_MIN;
	uint8_t x160 = 22U;
	int32_t t38 = 216513459;

	t38 = (x157<(x158==(x159%x160)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = -219392882LL;
	uint64_t x162 = UINT64_MAX;
	int8_t x163 = INT8_MIN;
	static uint32_t x164 = UINT32_MAX;
	volatile int32_t t39 = 2961174;

	t39 = (x161<(x162==(x163%x164)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x165 = -1LL;
	uint16_t x166 = UINT16_MAX;
	static uint16_t x167 = 4U;
	int64_t x168 = 111957089147974LL;

	t40 = (x165<(x166==(x167%x168)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x169 = INT64_MIN;
	int16_t x170 = 1355;
	uint16_t x171 = 339U;
	volatile int32_t x172 = 20414617;

	t41 = (x169<(x170==(x171%x172)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x173 = INT16_MIN;
	int8_t x174 = -43;
	static int32_t x175 = 487733469;
	volatile uint16_t x176 = 28U;
	int32_t t42 = 126;

	t42 = (x173<(x174==(x175%x176)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = 46;
	int8_t x178 = -1;
	int64_t x179 = 379991951227977439LL;
	static int32_t t43 = -34;

	t43 = (x177<(x178==(x179%x180)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x181 = 1318448U;
	int32_t x182 = -1;
	uint64_t x183 = 825907LLU;
	uint64_t x184 = UINT64_MAX;
	volatile int32_t t44 = 7;

	t44 = (x181<(x182==(x183%x184)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = INT64_MIN;
	static uint32_t x186 = 32691U;
	uint8_t x187 = 18U;
	static int8_t x188 = -1;
	volatile int32_t t45 = 384397;

	t45 = (x185<(x186==(x187%x188)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = 1;
	static volatile int32_t x190 = -1;
	uint32_t x191 = 114069951U;
	static int8_t x192 = INT8_MIN;
	volatile int32_t t46 = -3;

	t46 = (x189<(x190==(x191%x192)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = INT8_MAX;
	int8_t x194 = -1;
	static int16_t x195 = INT16_MIN;
	int32_t t47 = -1805344;

	t47 = (x193<(x194==(x195%x196)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x197 = UINT32_MAX;
	uint16_t x198 = 94U;
	volatile int32_t t48 = 11543952;

	t48 = (x197<(x198==(x199%x200)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x201 = INT64_MAX;
	int32_t x202 = 218;
	int64_t x204 = -1LL;

	t49 = (x201<(x202==(x203%x204)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x205 = 169767084U;
	volatile int64_t x206 = INT64_MIN;
	int16_t x207 = -244;
	uint8_t x208 = 1U;
	int32_t t50 = -64544;

	t50 = (x205<(x206==(x207%x208)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = INT8_MIN;
	int32_t x210 = INT32_MIN;
	uint16_t x211 = 3U;
	int8_t x212 = -1;
	volatile int32_t t51 = 9441674;

	t51 = (x209<(x210==(x211%x212)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x213 = -1LL;
	static volatile uint32_t x214 = 62709592U;
	volatile uint32_t x215 = UINT32_MAX;
	int8_t x216 = INT8_MIN;
	int32_t t52 = 40883;

	t52 = (x213<(x214==(x215%x216)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = -1;
	int32_t x218 = -14996;
	int16_t x219 = INT16_MIN;
	int16_t x220 = INT16_MAX;
	int32_t t53 = -403423513;

	t53 = (x217<(x218==(x219%x220)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x221 = 74U;
	int8_t x222 = INT8_MIN;
	int8_t x223 = INT8_MIN;
	volatile int32_t t54 = 27250;

	t54 = (x221<(x222==(x223%x224)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = INT32_MIN;
	int16_t x227 = INT16_MIN;
	int8_t x228 = INT8_MIN;
	static int32_t t55 = 7706;

	t55 = (x225<(x226==(x227%x228)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = -1LL;
	int32_t x230 = INT32_MAX;
	volatile uint8_t x231 = UINT8_MAX;
	int32_t x232 = 2550;
	static int32_t t56 = -29414809;

	t56 = (x229<(x230==(x231%x232)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x234 = -1;
	int64_t x235 = INT64_MIN;
	int32_t t57 = 3455;

	t57 = (x233<(x234==(x235%x236)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x237 = INT32_MIN;
	int64_t x238 = INT64_MIN;
	int32_t x239 = -1;
	static int32_t x240 = -229;
	volatile int32_t t58 = 12538;

	t58 = (x237<(x238==(x239%x240)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x241 = 116U;
	int16_t x242 = INT16_MIN;
	volatile int16_t x243 = -1;
	int8_t x244 = -1;
	volatile int32_t t59 = 39412;

	t59 = (x241<(x242==(x243%x244)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x246 = INT8_MIN;
	uint8_t x247 = 1U;
	static volatile int8_t x248 = INT8_MIN;
	volatile int32_t t60 = 410;

	t60 = (x245<(x246==(x247%x248)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x249 = 3808386259575827806LL;
	uint32_t x250 = UINT32_MAX;
	volatile int64_t x252 = -51384566525747LL;
	int32_t t61 = 282351;

	t61 = (x249<(x250==(x251%x252)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x253 = INT64_MAX;
	int64_t x255 = INT64_MIN;
	volatile int64_t x256 = -249LL;

	t62 = (x253<(x254==(x255%x256)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x257 = 187419LLU;
	static uint64_t x258 = 504LLU;
	int64_t x259 = INT64_MIN;
	int16_t x260 = INT16_MIN;
	int32_t t63 = 30;

	t63 = (x257<(x258==(x259%x260)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x261 = 12068347LLU;
	int32_t x262 = INT32_MAX;
	int8_t x263 = INT8_MAX;
	int64_t x264 = INT64_MIN;

	t64 = (x261<(x262==(x263%x264)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x265 = UINT8_MAX;
	int8_t x266 = -1;
	static int8_t x267 = INT8_MAX;
	volatile uint64_t x268 = 1449304969039021781LLU;
	int32_t t65 = 0;

	t65 = (x265<(x266==(x267%x268)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = 45;
	volatile uint32_t x270 = 395U;
	uint64_t x271 = UINT64_MAX;
	volatile uint16_t x272 = 5632U;
	int32_t t66 = -60001;

	t66 = (x269<(x270==(x271%x272)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = 729;
	int16_t x275 = INT16_MAX;
	uint8_t x276 = 82U;

	t67 = (x273<(x274==(x275%x276)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x279 = 724U;
	uint32_t x280 = UINT32_MAX;
	int32_t t68 = 0;

	t68 = (x277<(x278==(x279%x280)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x281 = -1LL;
	int32_t x282 = INT32_MIN;
	int32_t x283 = INT32_MIN;
	uint32_t x284 = 1429390139U;

	t69 = (x281<(x282==(x283%x284)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x286 = UINT64_MAX;
	volatile int32_t x287 = INT32_MIN;
	int32_t x288 = INT32_MAX;
	volatile int32_t t70 = 12913612;

	t70 = (x285<(x286==(x287%x288)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x289 = -1LL;
	uint16_t x291 = 3423U;
	uint32_t x292 = 2U;
	volatile int32_t t71 = 269528;

	t71 = (x289<(x290==(x291%x292)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x293 = -6;
	uint16_t x294 = UINT16_MAX;
	uint8_t x295 = UINT8_MAX;
	volatile uint16_t x296 = UINT16_MAX;
	int32_t t72 = -3838;

	t72 = (x293<(x294==(x295%x296)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x297 = INT32_MIN;
	volatile int8_t x298 = INT8_MIN;
	static int32_t x299 = -56;
	static volatile int64_t x300 = INT64_MIN;
	int32_t t73 = 5;

	t73 = (x297<(x298==(x299%x300)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x301 = 1058903717LL;
	uint32_t x302 = 1353U;
	volatile int64_t x303 = INT64_MIN;
	int32_t x304 = -88398;
	volatile int32_t t74 = 2205437;

	t74 = (x301<(x302==(x303%x304)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x305 = -1;
	volatile int8_t x306 = -1;
	uint8_t x308 = 1U;
	volatile int32_t t75 = -302003536;

	t75 = (x305<(x306==(x307%x308)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x309 = -1;
	static int8_t x310 = -1;
	int32_t x311 = -190;
	int8_t x312 = INT8_MIN;
	volatile int32_t t76 = -111912;

	t76 = (x309<(x310==(x311%x312)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x313 = INT32_MIN;
	int32_t x314 = INT32_MIN;
	uint64_t x316 = 162286184781LLU;
	static volatile int32_t t77 = -7;

	t77 = (x313<(x314==(x315%x316)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x321 = 243144676U;
	int32_t x322 = 18;
	static volatile int8_t x324 = 19;

	t78 = (x321<(x322==(x323%x324)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = -14LL;
	volatile uint16_t x327 = UINT16_MAX;
	uint64_t x328 = 44LLU;
	int32_t t79 = -1404;

	t79 = (x325<(x326==(x327%x328)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = INT16_MIN;
	uint16_t x332 = UINT16_MAX;
	volatile int32_t t80 = -10457214;

	t80 = (x329<(x330==(x331%x332)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x333 = -1;
	volatile int64_t x334 = INT64_MIN;
	int64_t x335 = -1902887902114895LL;
	int32_t t81 = 1;

	t81 = (x333<(x334==(x335%x336)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x337 = 277;
	uint32_t x338 = 346730U;
	volatile uint8_t x339 = UINT8_MAX;
	volatile int64_t x340 = INT64_MIN;

	t82 = (x337<(x338==(x339%x340)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x345 = -1;
	static int16_t x348 = 848;
	static volatile int32_t t83 = 6649;

	t83 = (x345<(x346==(x347%x348)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x349 = -62;
	uint16_t x350 = 13735U;
	static int16_t x352 = 5745;
	int32_t t84 = 1106;

	t84 = (x349<(x350==(x351%x352)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x353 = 312U;
	int16_t x354 = -163;
	int8_t x355 = -1;
	uint32_t x356 = 803U;
	volatile int32_t t85 = 452040;

	t85 = (x353<(x354==(x355%x356)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x357 = 27133U;
	static uint8_t x358 = 6U;
	volatile int32_t x359 = 13755180;
	int32_t t86 = -6;

	t86 = (x357<(x358==(x359%x360)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x361 = 8091LL;
	int16_t x362 = -1;
	volatile int8_t x363 = 3;
	static int16_t x364 = INT16_MIN;
	volatile int32_t t87 = -428;

	t87 = (x361<(x362==(x363%x364)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x365 = INT16_MAX;
	int64_t x366 = -1LL;
	int64_t x367 = INT64_MIN;
	int16_t x368 = -134;

	t88 = (x365<(x366==(x367%x368)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x369 = INT8_MAX;
	volatile int64_t x370 = INT64_MAX;
	static uint64_t x371 = 49834LLU;

	t89 = (x369<(x370==(x371%x372)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x373 = UINT64_MAX;
	uint64_t x374 = UINT64_MAX;
	volatile int64_t x375 = 2174707LL;
	volatile int16_t x376 = 3019;
	int32_t t90 = 57423;

	t90 = (x373<(x374==(x375%x376)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x377 = UINT8_MAX;
	static int8_t x378 = -3;
	int64_t x379 = INT64_MIN;
	uint64_t x380 = 193LLU;
	volatile int32_t t91 = 1653697;

	t91 = (x377<(x378==(x379%x380)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x381 = -210120;
	int64_t x382 = 48LL;
	uint32_t x384 = UINT32_MAX;

	t92 = (x381<(x382==(x383%x384)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x385 = INT16_MIN;
	volatile int8_t x386 = -1;
	static uint64_t x387 = UINT64_MAX;
	volatile int64_t x388 = -451792593LL;

	t93 = (x385<(x386==(x387%x388)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x389 = 58LL;
	int8_t x390 = -1;
	static int16_t x391 = -1;
	int32_t t94 = 296;

	t94 = (x389<(x390==(x391%x392)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x393 = -1;
	uint64_t x394 = 60109814694195LLU;
	static volatile int32_t x395 = -6404;
	uint8_t x396 = 3U;
	volatile int32_t t95 = 21004890;

	t95 = (x393<(x394==(x395%x396)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x397 = -1;
	uint8_t x398 = 1U;
	volatile uint16_t x400 = UINT16_MAX;
	int32_t t96 = 23;

	t96 = (x397<(x398==(x399%x400)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x402 = 19;
	int64_t x403 = INT64_MIN;
	uint16_t x404 = UINT16_MAX;
	volatile int32_t t97 = -202;

	t97 = (x401<(x402==(x403%x404)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x406 = 7U;
	static uint16_t x407 = 322U;
	int8_t x408 = 5;
	volatile int32_t t98 = 23987378;

	t98 = (x405<(x406==(x407%x408)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x409 = -1;
	int16_t x411 = INT16_MIN;
	uint64_t x412 = 1882039987726418546LLU;
	volatile int32_t t99 = -21;

	t99 = (x409<(x410==(x411%x412)));

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


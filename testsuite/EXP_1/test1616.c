#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
int8_t x6 = 41;
int32_t x11 = 587805446;
volatile int32_t x16 = -673338175;
int64_t x21 = -21720LL;
int8_t x24 = -1;
int32_t t4 = -32234517;
uint32_t x30 = UINT32_MAX;
int32_t x39 = -24690;
int32_t x44 = INT32_MIN;
static int32_t t9 = 20608808;
static int8_t x51 = 2;
int32_t t11 = -223;
int16_t x57 = INT16_MIN;
static volatile uint8_t x65 = 96U;
int32_t x69 = 1578;
int64_t x72 = -98468435490LL;
volatile int64_t t16 = 1LL;
uint64_t x73 = UINT64_MAX;
int32_t x88 = -1049;
volatile int32_t t20 = -68757;
int16_t x93 = INT16_MAX;
volatile int32_t t23 = 952410;
int64_t x114 = 13598LL;
int64_t x118 = -26225LL;
volatile int16_t x120 = -178;
int16_t x125 = INT16_MIN;
int8_t x128 = INT8_MAX;
int16_t x138 = 2069;
uint64_t x143 = 592513208LLU;
int8_t x150 = INT8_MAX;
volatile int32_t t35 = 472527333;
int8_t x153 = INT8_MAX;
static uint32_t x156 = UINT32_MAX;
int64_t x166 = INT64_MIN;
int16_t x173 = INT16_MAX;
int32_t x192 = INT32_MIN;
uint64_t x199 = UINT64_MAX;
int64_t x205 = 34LL;
volatile int8_t x207 = -1;
uint64_t x208 = UINT64_MAX;
int8_t x212 = INT8_MIN;
int8_t x225 = INT8_MIN;
int8_t x227 = INT8_MIN;
static volatile int32_t x228 = INT32_MAX;
int64_t x234 = 27158598230149LL;
int16_t x236 = -1;
int32_t t56 = -3;
uint32_t x245 = UINT32_MAX;
uint8_t x246 = UINT8_MAX;
volatile int8_t x250 = INT8_MAX;
volatile uint8_t x253 = 7U;
int32_t t61 = 6749386;
static int16_t x261 = 3182;
static volatile int8_t x263 = INT8_MIN;
static volatile int32_t x266 = INT32_MAX;
static uint8_t x267 = UINT8_MAX;
int32_t x278 = INT32_MIN;
int64_t x279 = -1LL;
uint32_t x287 = 367U;
int16_t x289 = -404;
int8_t x292 = INT8_MIN;
int32_t t69 = 4102;
int16_t x299 = INT16_MIN;
uint64_t t71 = 0LLU;
volatile int16_t x304 = INT16_MAX;
uint8_t x311 = 49U;
volatile int16_t x313 = -1;
static volatile int16_t x322 = 784;
uint32_t x329 = 35520U;
volatile uint64_t x330 = 102592878643LLU;
static volatile int32_t t78 = 9448;
int16_t x338 = INT16_MIN;
uint8_t x340 = UINT8_MAX;
uint8_t x341 = 0U;
volatile int32_t x346 = INT32_MIN;
int64_t x349 = 1536281LL;
int16_t x353 = INT16_MAX;
int64_t x359 = -11141037LL;
int64_t t85 = -217305077928033LL;
uint32_t x362 = UINT32_MAX;
volatile uint32_t t86 = 517370U;
uint32_t x367 = 2U;
uint32_t x369 = 129624U;
volatile uint64_t x375 = 897484191465LLU;
static int32_t x378 = INT32_MIN;
volatile int16_t x388 = INT16_MIN;
int64_t x408 = INT64_MIN;


void f0(void) {
	uint8_t x1 = 1U;
	int64_t x3 = INT64_MIN;
	uint64_t x4 = 8536112972309LLU;
	static uint64_t t0 = 2714624320353813LLU;

	t0 = (((x1<=x2)==x3)/x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MAX;
	uint32_t x7 = 6U;
	int32_t x8 = INT32_MAX;
	int32_t t1 = 2110;

	t1 = (((x5<=x6)==x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -1;
	volatile int16_t x10 = INT16_MIN;
	uint8_t x12 = 24U;
	static volatile int32_t t2 = -1919;

	t2 = (((x9<=x10)==x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	volatile int16_t x14 = INT16_MIN;
	uint8_t x15 = 8U;
	volatile int32_t t3 = 35;

	t3 = (((x13<=x14)==x15)/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x22 = INT32_MIN;
	static int16_t x23 = INT16_MIN;

	t4 = (((x21<=x22)==x23)/x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x25 = 89U;
	uint64_t x26 = UINT64_MAX;
	int32_t x27 = -21323;
	int8_t x28 = INT8_MAX;
	int32_t t5 = 4;

	t5 = (((x25<=x26)==x27)/x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -1;
	int8_t x31 = -1;
	int32_t x32 = -12;
	static int32_t t6 = 31194;

	t6 = (((x29<=x30)==x31)/x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x33 = 7109998U;
	static int8_t x34 = 1;
	int64_t x35 = INT64_MIN;
	int64_t x36 = INT64_MIN;
	int64_t t7 = -173888526LL;

	t7 = (((x33<=x34)==x35)/x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = 6;
	volatile uint8_t x38 = 62U;
	volatile int64_t x40 = -1LL;
	static int64_t t8 = 9575LL;

	t8 = (((x37<=x38)==x39)/x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = -1;
	int64_t x42 = -1LL;
	uint8_t x43 = 1U;

	t9 = (((x41<=x42)==x43)/x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MAX;
	int32_t x46 = INT32_MIN;
	int64_t x47 = INT64_MAX;
	volatile int64_t x48 = INT64_MIN;
	int64_t t10 = -100091515392678252LL;

	t10 = (((x45<=x46)==x47)/x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x49 = UINT64_MAX;
	uint8_t x50 = 0U;
	int16_t x52 = -1;

	t11 = (((x49<=x50)==x51)/x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -1LL;
	static volatile int8_t x54 = INT8_MAX;
	uint8_t x55 = 29U;
	int64_t x56 = INT64_MIN;
	volatile int64_t t12 = 3345571978834712630LL;

	t12 = (((x53<=x54)==x55)/x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x58 = -24678646;
	static int8_t x59 = 2;
	int32_t x60 = -1;
	volatile int32_t t13 = -12623900;

	t13 = (((x57<=x58)==x59)/x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = -1LL;
	uint8_t x62 = UINT8_MAX;
	static int64_t x63 = -1LL;
	uint16_t x64 = 1U;
	volatile int32_t t14 = 47036076;

	t14 = (((x61<=x62)==x63)/x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x66 = UINT16_MAX;
	static int8_t x67 = -1;
	int8_t x68 = INT8_MIN;
	static int32_t t15 = 0;

	t15 = (((x65<=x66)==x67)/x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x70 = UINT8_MAX;
	static int32_t x71 = -3;

	t16 = (((x69<=x70)==x71)/x72);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x74 = 19347U;
	uint64_t x75 = 33423896815LLU;
	static volatile int8_t x76 = INT8_MIN;
	static volatile int32_t t17 = -65177;

	t17 = (((x73<=x74)==x75)/x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = -1;
	int64_t x78 = -238851784165095259LL;
	int32_t x79 = 14164911;
	uint16_t x80 = 392U;
	int32_t t18 = 341186;

	t18 = (((x77<=x78)==x79)/x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = 0;
	volatile int16_t x82 = INT16_MAX;
	uint32_t x83 = 1524U;
	volatile uint16_t x84 = 6707U;
	int32_t t19 = 1;

	t19 = (((x81<=x82)==x83)/x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 14163U;
	volatile int16_t x86 = INT16_MIN;
	volatile uint64_t x87 = 320423325045330694LLU;

	t20 = (((x85<=x86)==x87)/x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x89 = 7U;
	uint32_t x90 = 18293U;
	uint8_t x91 = UINT8_MAX;
	static int16_t x92 = 1;
	int32_t t21 = -173050812;

	t21 = (((x89<=x90)==x91)/x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x94 = 396;
	static int16_t x95 = INT16_MIN;
	static int32_t x96 = INT32_MIN;
	volatile int32_t t22 = -69;

	t22 = (((x93<=x94)==x95)/x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x101 = 142U;
	static uint16_t x102 = UINT16_MAX;
	int8_t x103 = INT8_MIN;
	static uint16_t x104 = 16443U;

	t23 = (((x101<=x102)==x103)/x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MAX;
	uint32_t x106 = 0U;
	uint8_t x107 = UINT8_MAX;
	int8_t x108 = INT8_MIN;
	int32_t t24 = -6180;

	t24 = (((x105<=x106)==x107)/x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x109 = 1;
	static int16_t x110 = INT16_MIN;
	int64_t x111 = -436679443390048LL;
	int64_t x112 = INT64_MAX;
	volatile int64_t t25 = 5549656686LL;

	t25 = (((x109<=x110)==x111)/x112);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x113 = UINT8_MAX;
	int8_t x115 = INT8_MAX;
	uint64_t x116 = 14182263LLU;
	volatile uint64_t t26 = 88304944LLU;

	t26 = (((x113<=x114)==x115)/x116);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x117 = INT16_MIN;
	int32_t x119 = -6809;
	volatile int32_t t27 = 318;

	t27 = (((x117<=x118)==x119)/x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x121 = -1;
	static uint16_t x122 = 437U;
	int16_t x123 = 1930;
	int64_t x124 = 180961106349328835LL;
	volatile int64_t t28 = 1087604LL;

	t28 = (((x121<=x122)==x123)/x124);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x126 = INT8_MIN;
	int8_t x127 = 1;
	volatile int32_t t29 = 351;

	t29 = (((x125<=x126)==x127)/x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = -1LL;
	int16_t x130 = INT16_MIN;
	int32_t x131 = INT32_MIN;
	uint32_t x132 = 621U;
	uint32_t t30 = 25909U;

	t30 = (((x129<=x130)==x131)/x132);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x133 = 28184U;
	uint32_t x134 = UINT32_MAX;
	uint32_t x135 = 561U;
	volatile int16_t x136 = INT16_MIN;
	static volatile int32_t t31 = 1118;

	t31 = (((x133<=x134)==x135)/x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x137 = 0U;
	int16_t x139 = -1;
	volatile int32_t x140 = -1;
	int32_t t32 = 54370605;

	t32 = (((x137<=x138)==x139)/x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = INT32_MAX;
	static int16_t x142 = -1;
	volatile int64_t x144 = INT64_MIN;
	static int64_t t33 = -1LL;

	t33 = (((x141<=x142)==x143)/x144);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = 24;
	static int64_t x146 = 848609032983053LL;
	volatile int64_t x147 = 561000560969994775LL;
	int16_t x148 = -1;
	static volatile int32_t t34 = -1406;

	t34 = (((x145<=x146)==x147)/x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = 232;
	uint16_t x151 = 8033U;
	int32_t x152 = -55480869;

	t35 = (((x149<=x150)==x151)/x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x154 = 25;
	uint8_t x155 = 14U;
	uint32_t t36 = 7317U;

	t36 = (((x153<=x154)==x155)/x156);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = -1;
	int64_t x158 = 72583352362932574LL;
	static volatile uint16_t x159 = 17249U;
	int16_t x160 = -844;
	volatile int32_t t37 = -1212591;

	t37 = (((x157<=x158)==x159)/x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = 1160;
	int16_t x162 = -1;
	int16_t x163 = -980;
	volatile int64_t x164 = INT64_MAX;
	int64_t t38 = -79LL;

	t38 = (((x161<=x162)==x163)/x164);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = -3;
	volatile int64_t x167 = 2485LL;
	uint8_t x168 = 2U;
	volatile int32_t t39 = -7894593;

	t39 = (((x165<=x166)==x167)/x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = 1U;
	static uint8_t x170 = 5U;
	int32_t x171 = INT32_MIN;
	static uint16_t x172 = UINT16_MAX;
	int32_t t40 = 357758;

	t40 = (((x169<=x170)==x171)/x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x174 = INT16_MAX;
	uint16_t x175 = 15U;
	uint64_t x176 = UINT64_MAX;
	volatile uint64_t t41 = 34630669078LLU;

	t41 = (((x173<=x174)==x175)/x176);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x177 = INT64_MIN;
	uint8_t x178 = 0U;
	int64_t x179 = INT64_MIN;
	volatile uint16_t x180 = 5257U;
	int32_t t42 = -11;

	t42 = (((x177<=x178)==x179)/x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x181 = 13342147U;
	volatile int64_t x182 = INT64_MIN;
	volatile int16_t x183 = INT16_MAX;
	int32_t x184 = INT32_MIN;
	int32_t t43 = -141883756;

	t43 = (((x181<=x182)==x183)/x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = INT8_MIN;
	int8_t x186 = INT8_MIN;
	static int16_t x187 = INT16_MIN;
	int8_t x188 = INT8_MAX;
	volatile int32_t t44 = -150472;

	t44 = (((x185<=x186)==x187)/x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x189 = 98U;
	int16_t x190 = INT16_MIN;
	volatile int64_t x191 = -91748896209175LL;
	int32_t t45 = -59276;

	t45 = (((x189<=x190)==x191)/x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x193 = 142U;
	static int8_t x194 = -1;
	int8_t x195 = 1;
	uint16_t x196 = 11588U;
	int32_t t46 = 7249;

	t46 = (((x193<=x194)==x195)/x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x197 = UINT16_MAX;
	uint32_t x198 = UINT32_MAX;
	uint16_t x200 = UINT16_MAX;
	static int32_t t47 = -7;

	t47 = (((x197<=x198)==x199)/x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x201 = -803LL;
	static uint64_t x202 = 1226232403LLU;
	int64_t x203 = INT64_MIN;
	int64_t x204 = INT64_MAX;
	volatile int64_t t48 = -10861144337893932LL;

	t48 = (((x201<=x202)==x203)/x204);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x206 = INT16_MIN;
	uint64_t t49 = 410929LLU;

	t49 = (((x205<=x206)==x207)/x208);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = -483198148279548LL;
	static uint32_t x210 = 1322U;
	int32_t x211 = -1;
	static volatile int32_t t50 = -15119;

	t50 = (((x209<=x210)==x211)/x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = 0;
	static int64_t x214 = -10922275LL;
	static int64_t x215 = INT64_MIN;
	static int32_t x216 = INT32_MIN;
	volatile int32_t t51 = 3874;

	t51 = (((x213<=x214)==x215)/x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x217 = -191745LL;
	uint32_t x218 = UINT32_MAX;
	int64_t x219 = INT64_MIN;
	static volatile uint64_t x220 = UINT64_MAX;
	volatile uint64_t t52 = 52214605007591LLU;

	t52 = (((x217<=x218)==x219)/x220);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x221 = -1;
	static int64_t x222 = INT64_MAX;
	int32_t x223 = INT32_MAX;
	int64_t x224 = -1LL;
	volatile int64_t t53 = 1LL;

	t53 = (((x221<=x222)==x223)/x224);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x226 = -1;
	int32_t t54 = 8125450;

	t54 = (((x225<=x226)==x227)/x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = -224;
	int16_t x230 = -908;
	int32_t x231 = -1;
	uint16_t x232 = 62U;
	volatile int32_t t55 = 1046530;

	t55 = (((x229<=x230)==x231)/x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x233 = UINT16_MAX;
	volatile int8_t x235 = -4;

	t56 = (((x233<=x234)==x235)/x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x237 = 11056U;
	static volatile int32_t x238 = 0;
	int32_t x239 = INT32_MAX;
	static volatile uint8_t x240 = 10U;
	int32_t t57 = -11375662;

	t57 = (((x237<=x238)==x239)/x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x241 = INT64_MIN;
	int32_t x242 = -1;
	volatile int8_t x243 = INT8_MIN;
	volatile int64_t x244 = 16174LL;
	int64_t t58 = -67335871969LL;

	t58 = (((x241<=x242)==x243)/x244);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x247 = -7;
	volatile int64_t x248 = -1LL;
	static int64_t t59 = -1926489660LL;

	t59 = (((x245<=x246)==x247)/x248);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x249 = 124U;
	volatile int64_t x251 = -120344765505LL;
	int64_t x252 = INT64_MIN;
	static int64_t t60 = -1LL;

	t60 = (((x249<=x250)==x251)/x252);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x254 = 2LLU;
	int8_t x255 = -1;
	int16_t x256 = -3;

	t61 = (((x253<=x254)==x255)/x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x257 = INT16_MAX;
	int8_t x258 = INT8_MIN;
	int32_t x259 = INT32_MIN;
	int8_t x260 = 1;
	volatile int32_t t62 = 7164;

	t62 = (((x257<=x258)==x259)/x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x262 = 3504;
	static uint32_t x264 = 5U;
	uint32_t t63 = 4062U;

	t63 = (((x261<=x262)==x263)/x264);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x265 = UINT64_MAX;
	volatile int16_t x268 = INT16_MIN;
	static volatile int32_t t64 = -29731196;

	t64 = (((x265<=x266)==x267)/x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x269 = 7934358430525626LLU;
	int32_t x270 = -1;
	static int32_t x271 = 8251;
	uint32_t x272 = UINT32_MAX;
	uint32_t t65 = 975121U;

	t65 = (((x269<=x270)==x271)/x272);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x277 = -61390488684728333LL;
	int8_t x280 = INT8_MAX;
	volatile int32_t t66 = -441754739;

	t66 = (((x277<=x278)==x279)/x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x281 = INT32_MIN;
	int8_t x282 = -25;
	int32_t x283 = -374233;
	int8_t x284 = -14;
	volatile int32_t t67 = 35473;

	t67 = (((x281<=x282)==x283)/x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x285 = INT64_MAX;
	int16_t x286 = 0;
	int16_t x288 = INT16_MIN;
	volatile int32_t t68 = -71631693;

	t68 = (((x285<=x286)==x287)/x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x290 = -1;
	int8_t x291 = INT8_MIN;

	t69 = (((x289<=x290)==x291)/x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x293 = 61;
	static int32_t x294 = INT32_MAX;
	int8_t x295 = 10;
	static int32_t x296 = INT32_MIN;
	int32_t t70 = 1007440647;

	t70 = (((x293<=x294)==x295)/x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x297 = 5486;
	uint32_t x298 = UINT32_MAX;
	uint64_t x300 = UINT64_MAX;

	t71 = (((x297<=x298)==x299)/x300);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x301 = INT32_MIN;
	int8_t x302 = -1;
	int8_t x303 = -1;
	int32_t t72 = 541;

	t72 = (((x301<=x302)==x303)/x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x305 = -1;
	static int32_t x306 = INT32_MAX;
	int8_t x307 = -12;
	static int8_t x308 = INT8_MIN;
	int32_t t73 = 889752393;

	t73 = (((x305<=x306)==x307)/x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = INT32_MAX;
	static int8_t x310 = INT8_MIN;
	int64_t x312 = -321LL;
	volatile int64_t t74 = -4764948083437125LL;

	t74 = (((x309<=x310)==x311)/x312);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x314 = INT64_MIN;
	static int64_t x315 = INT64_MIN;
	static int16_t x316 = INT16_MIN;
	int32_t t75 = -45;

	t75 = (((x313<=x314)==x315)/x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = -413563LL;
	int64_t x318 = INT64_MAX;
	int64_t x319 = 63688828LL;
	int16_t x320 = INT16_MIN;
	volatile int32_t t76 = -221;

	t76 = (((x317<=x318)==x319)/x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x321 = 673024;
	int32_t x323 = INT32_MIN;
	int8_t x324 = INT8_MIN;
	volatile int32_t t77 = -1;

	t77 = (((x321<=x322)==x323)/x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x331 = 0;
	int8_t x332 = -1;

	t78 = (((x329<=x330)==x331)/x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x333 = -1;
	static int8_t x334 = INT8_MIN;
	volatile uint32_t x335 = UINT32_MAX;
	uint32_t x336 = UINT32_MAX;
	uint32_t t79 = 196097822U;

	t79 = (((x333<=x334)==x335)/x336);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x337 = -37;
	int64_t x339 = -1LL;
	int32_t t80 = 980;

	t80 = (((x337<=x338)==x339)/x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x342 = INT64_MIN;
	int64_t x343 = INT64_MAX;
	int16_t x344 = INT16_MAX;
	int32_t t81 = -3818;

	t81 = (((x341<=x342)==x343)/x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x345 = INT16_MIN;
	uint64_t x347 = 3165808942759708634LLU;
	volatile uint64_t x348 = UINT64_MAX;
	static uint64_t t82 = 36493LLU;

	t82 = (((x345<=x346)==x347)/x348);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x350 = -1LL;
	static uint16_t x351 = 1U;
	uint16_t x352 = 23U;
	int32_t t83 = 70164;

	t83 = (((x349<=x350)==x351)/x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x354 = 9121484530572LLU;
	volatile int64_t x355 = INT64_MIN;
	int16_t x356 = INT16_MIN;
	int32_t t84 = -26372186;

	t84 = (((x353<=x354)==x355)/x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x357 = -1LL;
	int32_t x358 = -528808757;
	int64_t x360 = INT64_MAX;

	t85 = (((x357<=x358)==x359)/x360);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x361 = UINT16_MAX;
	int16_t x363 = 3;
	uint32_t x364 = UINT32_MAX;

	t86 = (((x361<=x362)==x363)/x364);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x365 = UINT16_MAX;
	static volatile int64_t x366 = INT64_MIN;
	int32_t x368 = INT32_MAX;
	int32_t t87 = -1;

	t87 = (((x365<=x366)==x367)/x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x370 = INT8_MIN;
	int32_t x371 = 1753597;
	volatile int32_t x372 = 40;
	static volatile int32_t t88 = 310297092;

	t88 = (((x369<=x370)==x371)/x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x373 = 6;
	int8_t x374 = INT8_MIN;
	int16_t x376 = INT16_MIN;
	int32_t t89 = 151;

	t89 = (((x373<=x374)==x375)/x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x377 = -920;
	volatile uint64_t x379 = UINT64_MAX;
	uint32_t x380 = UINT32_MAX;
	static uint32_t t90 = 1U;

	t90 = (((x377<=x378)==x379)/x380);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x381 = UINT32_MAX;
	int64_t x382 = INT64_MIN;
	uint8_t x383 = UINT8_MAX;
	uint8_t x384 = 13U;
	volatile int32_t t91 = -117;

	t91 = (((x381<=x382)==x383)/x384);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x385 = 12334U;
	int64_t x386 = INT64_MAX;
	uint16_t x387 = 3U;
	volatile int32_t t92 = -15154;

	t92 = (((x385<=x386)==x387)/x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = -1;
	uint64_t x390 = 70633319LLU;
	int32_t x391 = INT32_MAX;
	volatile int32_t x392 = -940765;
	volatile int32_t t93 = -51953540;

	t93 = (((x389<=x390)==x391)/x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x393 = UINT8_MAX;
	int8_t x394 = INT8_MAX;
	int64_t x395 = -1LL;
	static int16_t x396 = -1;
	volatile int32_t t94 = 51850224;

	t94 = (((x393<=x394)==x395)/x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x397 = 1U;
	uint8_t x398 = 45U;
	volatile int32_t x399 = INT32_MAX;
	static uint8_t x400 = 6U;
	static int32_t t95 = -3;

	t95 = (((x397<=x398)==x399)/x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x401 = INT64_MIN;
	static int32_t x402 = INT32_MIN;
	static uint16_t x403 = 2618U;
	uint8_t x404 = 67U;
	volatile int32_t t96 = 59670967;

	t96 = (((x401<=x402)==x403)/x404);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x405 = -239;
	int64_t x406 = INT64_MIN;
	volatile int8_t x407 = INT8_MIN;
	volatile int64_t t97 = 1169LL;

	t97 = (((x405<=x406)==x407)/x408);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x409 = 17039U;
	uint8_t x410 = 7U;
	int16_t x411 = INT16_MIN;
	int32_t x412 = INT32_MIN;
	volatile int32_t t98 = 13857;

	t98 = (((x409<=x410)==x411)/x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x413 = -1LL;
	static volatile int8_t x414 = 25;
	static int8_t x415 = INT8_MIN;
	static int16_t x416 = INT16_MAX;
	static int32_t t99 = -392117174;

	t99 = (((x413<=x414)==x415)/x416);

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


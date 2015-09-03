#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x9 = UINT8_MAX;
int32_t x11 = INT32_MAX;
int16_t x17 = INT16_MAX;
int16_t x29 = INT16_MAX;
int64_t x30 = -16141264894600LL;
uint32_t x32 = 11U;
static volatile uint64_t x36 = 190033LLU;
volatile int32_t t7 = 9830;
static uint32_t x40 = 205U;
volatile int8_t x44 = -1;
int32_t x45 = INT32_MIN;
volatile uint32_t x59 = UINT32_MAX;
volatile int32_t t14 = -84591954;
uint8_t x65 = UINT8_MAX;
volatile int32_t t15 = -9063;
uint16_t x72 = 5996U;
uint64_t x73 = 6317886141852575LLU;
volatile int32_t t17 = 1687;
static int32_t t19 = 232354356;
static int32_t t20 = 40356;
int32_t t21 = 28;
volatile uint32_t x95 = 115U;
uint32_t x96 = 65702479U;
volatile int32_t t22 = -447474;
int16_t x98 = 3061;
int32_t x102 = INT32_MIN;
int16_t x104 = -1218;
volatile int32_t t24 = 0;
int32_t x106 = 3;
static volatile int32_t t25 = 7;
volatile int32_t x121 = -396;
int32_t x122 = -1173;
int32_t x123 = -7;
volatile int64_t x130 = INT64_MIN;
int16_t x131 = -3666;
int16_t x135 = 19;
static uint32_t x140 = 2397U;
volatile uint32_t x145 = 6628U;
int8_t x146 = INT8_MIN;
volatile int64_t x147 = INT64_MIN;
uint8_t x148 = UINT8_MAX;
volatile uint32_t x152 = UINT32_MAX;
int32_t t37 = -56264;
uint64_t x160 = 120472877LLU;
volatile int64_t x163 = -1LL;
uint16_t x166 = 13U;
int16_t x170 = -8;
static int32_t x172 = INT32_MIN;
int32_t t41 = -2543991;
int32_t x186 = -1;
int16_t x187 = INT16_MAX;
int32_t t45 = -15312;
int32_t t47 = -28;
int16_t x197 = INT16_MIN;
int32_t x198 = INT32_MAX;
volatile int64_t x204 = -84640230730797983LL;
int8_t x205 = -5;
uint8_t x207 = UINT8_MAX;
int8_t x211 = INT8_MIN;
int16_t x212 = -1;
volatile int32_t t51 = 59529;
int8_t x214 = INT8_MAX;
uint16_t x215 = 20U;
volatile int32_t t53 = -2;
static volatile int32_t t54 = 88;
uint32_t x225 = 0U;
volatile uint16_t x235 = 40U;
int64_t x242 = -1011978680LL;
int16_t x243 = -1;
static volatile uint16_t x244 = UINT16_MAX;
int8_t x255 = -19;
int32_t t62 = 21679685;
static volatile int32_t x258 = 76784630;
volatile int32_t t64 = 138746172;
int64_t x272 = -2971921313303443LL;
int8_t x279 = 1;
int8_t x281 = 15;
int64_t x285 = INT64_MIN;
static int8_t x287 = INT8_MIN;
uint8_t x292 = 1U;
int64_t x296 = INT64_MAX;
int32_t t73 = 20;
volatile int32_t t75 = -72;
static uint16_t x317 = UINT16_MAX;
uint16_t x318 = 4002U;
int32_t t77 = 846423867;
int8_t x330 = 2;
volatile int64_t x341 = INT64_MAX;
uint32_t x354 = 120993U;
volatile uint8_t x358 = UINT8_MAX;
volatile uint8_t x359 = 3U;
int32_t x361 = 150003536;
int32_t t86 = 87438;
int16_t x368 = 15;
int8_t x372 = 1;
int32_t t92 = 38;
uint16_t x394 = 161U;
volatile int64_t x395 = INT64_MIN;
int32_t t94 = -761386741;
static int32_t t95 = -79;
int16_t x401 = -1;
static int8_t x403 = INT8_MAX;
int32_t t98 = 2242254;


void f0(void) {
	volatile int64_t x1 = -7339351352482286LL;
	uint8_t x2 = 74U;
	int16_t x3 = -1755;
	uint32_t x4 = 7756892U;
	static int32_t t0 = 45;

	t0 = (x1<(x2-(x3/x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	volatile int8_t x6 = -1;
	int64_t x7 = INT64_MIN;
	int8_t x8 = INT8_MAX;
	int32_t t1 = -232;

	t1 = (x5<(x6-(x7/x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = UINT8_MAX;
	int64_t x12 = -1609928447041LL;
	static int32_t t2 = -12;

	t2 = (x9<(x10-(x11/x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int32_t x14 = -1;
	volatile int32_t x15 = 31284728;
	volatile uint16_t x16 = UINT16_MAX;
	int32_t t3 = 1;

	t3 = (x13<(x14-(x15/x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = 22U;
	int32_t x19 = -660628572;
	int64_t x20 = INT64_MIN;
	volatile int32_t t4 = 6;

	t4 = (x17<(x18-(x19/x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = UINT64_MAX;
	static int16_t x26 = INT16_MIN;
	int64_t x27 = INT64_MAX;
	int32_t x28 = INT32_MIN;
	volatile int32_t t5 = 30306;

	t5 = (x25<(x26-(x27/x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x31 = UINT64_MAX;
	int32_t t6 = -7845041;

	t6 = (x29<(x30-(x31/x32)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = 44898LL;
	int8_t x34 = INT8_MIN;
	volatile int16_t x35 = 15;

	t7 = (x33<(x34-(x35/x36)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = -1;
	uint8_t x38 = 15U;
	static volatile int8_t x39 = INT8_MIN;
	volatile int32_t t8 = -1;

	t8 = (x37<(x38-(x39/x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 39037U;
	int64_t x42 = -59592955LL;
	volatile int16_t x43 = -175;
	volatile int32_t t9 = 1;

	t9 = (x41<(x42-(x43/x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x46 = 3638U;
	uint64_t x47 = 2264573768LLU;
	uint32_t x48 = UINT32_MAX;
	int32_t t10 = 60955705;

	t10 = (x45<(x46-(x47/x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = 15010689LLU;
	int8_t x50 = 1;
	volatile uint16_t x51 = UINT16_MAX;
	volatile uint16_t x52 = UINT16_MAX;
	static volatile int32_t t11 = -6;

	t11 = (x49<(x50-(x51/x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x53 = UINT8_MAX;
	int64_t x54 = 58895719607LL;
	int64_t x55 = INT64_MIN;
	int32_t x56 = INT32_MIN;
	volatile int32_t t12 = 5;

	t12 = (x53<(x54-(x55/x56)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = UINT8_MAX;
	int16_t x58 = -1;
	int32_t x60 = 11423;
	static volatile int32_t t13 = 25;

	t13 = (x57<(x58-(x59/x60)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = -137146610252543LL;
	int16_t x62 = 4064;
	static volatile uint8_t x63 = 7U;
	uint64_t x64 = UINT64_MAX;

	t14 = (x61<(x62-(x63/x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x66 = 955U;
	int32_t x67 = INT32_MAX;
	volatile int16_t x68 = INT16_MIN;

	t15 = (x65<(x66-(x67/x68)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = 9270068LLU;
	int64_t x70 = -25962955LL;
	int64_t x71 = -1LL;
	int32_t t16 = 1;

	t16 = (x69<(x70-(x71/x72)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x74 = INT16_MAX;
	int64_t x75 = INT64_MAX;
	int8_t x76 = INT8_MAX;

	t17 = (x73<(x74-(x75/x76)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = 5157U;
	static int32_t x78 = 3337478;
	volatile uint16_t x79 = UINT16_MAX;
	int16_t x80 = -1;
	int32_t t18 = 3991;

	t18 = (x77<(x78-(x79/x80)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = 77954;
	int16_t x82 = INT16_MIN;
	static int16_t x83 = INT16_MIN;
	uint32_t x84 = 10U;

	t19 = (x81<(x82-(x83/x84)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = -3722LL;
	uint16_t x86 = 5192U;
	uint64_t x87 = 7314445871961LLU;
	static volatile int32_t x88 = INT32_MIN;

	t20 = (x85<(x86-(x87/x88)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x89 = 50304533806650657LLU;
	int8_t x90 = -5;
	static int64_t x91 = INT64_MAX;
	volatile int64_t x92 = INT64_MAX;

	t21 = (x89<(x90-(x91/x92)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = -1;
	uint8_t x94 = UINT8_MAX;

	t22 = (x93<(x94-(x95/x96)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = 7022315;
	volatile int32_t x99 = -1;
	int32_t x100 = INT32_MIN;
	int32_t t23 = 85504;

	t23 = (x97<(x98-(x99/x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x101 = 4193U;
	volatile int32_t x103 = 8286;

	t24 = (x101<(x102-(x103/x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MIN;
	int16_t x107 = INT16_MIN;
	uint16_t x108 = 1094U;

	t25 = (x105<(x106-(x107/x108)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = UINT8_MAX;
	int16_t x110 = INT16_MIN;
	static int16_t x111 = INT16_MAX;
	volatile int64_t x112 = -464844530684LL;
	int32_t t26 = 120955756;

	t26 = (x109<(x110-(x111/x112)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MIN;
	static int64_t x114 = 6475232LL;
	uint8_t x115 = UINT8_MAX;
	int32_t x116 = INT32_MAX;
	static int32_t t27 = -16218;

	t27 = (x113<(x114-(x115/x116)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x117 = -1;
	static uint16_t x118 = UINT16_MAX;
	static uint32_t x119 = 7102372U;
	int64_t x120 = INT64_MIN;
	int32_t t28 = -147631;

	t28 = (x117<(x118-(x119/x120)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x124 = INT64_MIN;
	int32_t t29 = 15;

	t29 = (x121<(x122-(x123/x124)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = -1;
	int8_t x126 = INT8_MIN;
	int16_t x127 = -1;
	int8_t x128 = -16;
	int32_t t30 = -4;

	t30 = (x125<(x126-(x127/x128)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = 15;
	uint8_t x132 = 17U;
	int32_t t31 = -26333451;

	t31 = (x129<(x130-(x131/x132)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x133 = INT32_MIN;
	uint32_t x134 = UINT32_MAX;
	static int16_t x136 = INT16_MAX;
	int32_t t32 = -8606144;

	t32 = (x133<(x134-(x135/x136)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = -4;
	uint64_t x138 = UINT64_MAX;
	static int16_t x139 = INT16_MIN;
	volatile int32_t t33 = 185;

	t33 = (x137<(x138-(x139/x140)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x141 = -1;
	static int32_t x142 = INT32_MAX;
	int16_t x143 = 10;
	volatile int64_t x144 = INT64_MAX;
	volatile int32_t t34 = -262;

	t34 = (x141<(x142-(x143/x144)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t t35 = -240199363;

	t35 = (x145<(x146-(x147/x148)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MIN;
	int64_t x150 = INT64_MIN;
	int16_t x151 = INT16_MIN;
	volatile int32_t t36 = 6152;

	t36 = (x149<(x150-(x151/x152)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x153 = 217;
	uint64_t x154 = 3025078945066833LLU;
	int16_t x155 = INT16_MIN;
	int8_t x156 = -1;

	t37 = (x153<(x154-(x155/x156)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x157 = 536747744231419LLU;
	static uint32_t x158 = UINT32_MAX;
	int8_t x159 = -1;
	int32_t t38 = 19470;

	t38 = (x157<(x158-(x159/x160)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = 3275297;
	static volatile uint8_t x162 = 0U;
	uint64_t x164 = UINT64_MAX;
	static int32_t t39 = -42;

	t39 = (x161<(x162-(x163/x164)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = INT8_MIN;
	int64_t x167 = INT64_MIN;
	uint16_t x168 = UINT16_MAX;
	int32_t t40 = 37253;

	t40 = (x165<(x166-(x167/x168)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x169 = 7813LLU;
	uint32_t x171 = UINT32_MAX;

	t41 = (x169<(x170-(x171/x172)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x173 = 5U;
	int32_t x174 = -998227376;
	int8_t x175 = -1;
	uint8_t x176 = 15U;
	int32_t t42 = 3333;

	t42 = (x173<(x174-(x175/x176)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = INT16_MAX;
	int32_t x178 = -9425053;
	volatile int16_t x179 = INT16_MIN;
	volatile int64_t x180 = 38516LL;
	int32_t t43 = -921;

	t43 = (x177<(x178-(x179/x180)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x181 = 108204U;
	static uint64_t x182 = 2467LLU;
	static int32_t x183 = -1;
	int64_t x184 = 140161195LL;
	int32_t t44 = 1556027;

	t44 = (x181<(x182-(x183/x184)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = INT16_MIN;
	static uint64_t x188 = 184948240493795805LLU;

	t45 = (x185<(x186-(x187/x188)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x189 = 4;
	uint8_t x190 = UINT8_MAX;
	volatile uint8_t x191 = 3U;
	static uint64_t x192 = 3149038LLU;
	int32_t t46 = 22992213;

	t46 = (x189<(x190-(x191/x192)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = INT16_MAX;
	volatile uint64_t x194 = 140536217LLU;
	volatile int16_t x195 = 56;
	int64_t x196 = INT64_MIN;

	t47 = (x193<(x194-(x195/x196)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x199 = INT64_MAX;
	int32_t x200 = INT32_MAX;
	volatile int32_t t48 = 6;

	t48 = (x197<(x198-(x199/x200)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x201 = 30U;
	static volatile uint32_t x202 = 477U;
	int16_t x203 = INT16_MAX;
	volatile int32_t t49 = -471;

	t49 = (x201<(x202-(x203/x204)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x206 = 3U;
	volatile uint32_t x208 = 33842U;
	int32_t t50 = 49896;

	t50 = (x205<(x206-(x207/x208)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = INT8_MIN;
	int8_t x210 = INT8_MAX;

	t51 = (x209<(x210-(x211/x212)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = -13;
	volatile int16_t x216 = 736;
	int32_t t52 = 2449617;

	t52 = (x213<(x214-(x215/x216)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x217 = -5;
	int16_t x218 = INT16_MIN;
	volatile int32_t x219 = 47846542;
	uint32_t x220 = UINT32_MAX;

	t53 = (x217<(x218-(x219/x220)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x221 = INT8_MAX;
	int8_t x222 = -7;
	int32_t x223 = -13;
	int16_t x224 = -49;

	t54 = (x221<(x222-(x223/x224)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x226 = INT16_MIN;
	static uint64_t x227 = UINT64_MAX;
	static int32_t x228 = INT32_MIN;
	volatile int32_t t55 = 17975446;

	t55 = (x225<(x226-(x227/x228)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = INT64_MIN;
	static int8_t x230 = INT8_MIN;
	uint64_t x231 = 117350293LLU;
	static int64_t x232 = INT64_MIN;
	static int32_t t56 = -14;

	t56 = (x229<(x230-(x231/x232)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x233 = 624039024223LLU;
	int64_t x234 = 111216858506077LL;
	int64_t x236 = 238782LL;
	static int32_t t57 = 129770907;

	t57 = (x233<(x234-(x235/x236)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x237 = -1;
	uint16_t x238 = UINT16_MAX;
	uint64_t x239 = UINT64_MAX;
	int64_t x240 = INT64_MIN;
	int32_t t58 = 6761;

	t58 = (x237<(x238-(x239/x240)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x241 = 2642508672LLU;
	static int32_t t59 = -6267;

	t59 = (x241<(x242-(x243/x244)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x245 = 0;
	static int64_t x246 = INT64_MIN;
	int32_t x247 = -1;
	volatile int32_t x248 = 54;
	volatile int32_t t60 = -1;

	t60 = (x245<(x246-(x247/x248)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = INT64_MIN;
	static volatile int8_t x250 = INT8_MIN;
	volatile uint8_t x251 = 1U;
	uint8_t x252 = 57U;
	volatile int32_t t61 = 2234;

	t61 = (x249<(x250-(x251/x252)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x253 = 111;
	int32_t x254 = 453;
	volatile uint8_t x256 = 20U;

	t62 = (x253<(x254-(x255/x256)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x257 = -2;
	int16_t x259 = -1;
	static int64_t x260 = -1LL;
	volatile int32_t t63 = -279;

	t63 = (x257<(x258-(x259/x260)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = INT16_MIN;
	volatile uint32_t x262 = 266798U;
	uint64_t x263 = 3807862247204683LLU;
	uint16_t x264 = 22558U;

	t64 = (x261<(x262-(x263/x264)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x265 = INT16_MIN;
	int8_t x266 = INT8_MIN;
	uint8_t x267 = 12U;
	static uint32_t x268 = 1047592U;
	static volatile int32_t t65 = 31;

	t65 = (x265<(x266-(x267/x268)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x269 = INT8_MIN;
	int16_t x270 = INT16_MIN;
	int32_t x271 = 19552034;
	int32_t t66 = -105;

	t66 = (x269<(x270-(x271/x272)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = 3;
	static uint8_t x274 = UINT8_MAX;
	volatile uint16_t x275 = UINT16_MAX;
	int8_t x276 = -15;
	static int32_t t67 = 1;

	t67 = (x273<(x274-(x275/x276)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x277 = UINT64_MAX;
	int64_t x278 = INT64_MIN;
	static int8_t x280 = INT8_MIN;
	volatile int32_t t68 = 7308216;

	t68 = (x277<(x278-(x279/x280)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x282 = INT16_MIN;
	volatile uint8_t x283 = UINT8_MAX;
	uint16_t x284 = 10U;
	volatile int32_t t69 = -45;

	t69 = (x281<(x282-(x283/x284)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x286 = UINT32_MAX;
	uint32_t x288 = 1U;
	int32_t t70 = -351462;

	t70 = (x285<(x286-(x287/x288)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x289 = INT8_MAX;
	volatile uint32_t x290 = 1840834890U;
	volatile int16_t x291 = 1;
	int32_t t71 = -116562;

	t71 = (x289<(x290-(x291/x292)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x293 = -1;
	uint64_t x294 = 0LLU;
	int16_t x295 = INT16_MIN;
	volatile int32_t t72 = -15964679;

	t72 = (x293<(x294-(x295/x296)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x297 = INT32_MIN;
	int16_t x298 = -1;
	int16_t x299 = INT16_MIN;
	int32_t x300 = -19;

	t73 = (x297<(x298-(x299/x300)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x301 = 441434782LLU;
	int64_t x302 = -9714748074388LL;
	static int64_t x303 = INT64_MIN;
	volatile int64_t x304 = INT64_MIN;
	static volatile int32_t t74 = 762;

	t74 = (x301<(x302-(x303/x304)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x309 = INT32_MIN;
	static int16_t x310 = 4065;
	uint8_t x311 = 1U;
	int8_t x312 = 19;

	t75 = (x309<(x310-(x311/x312)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x313 = 5U;
	volatile int64_t x314 = -6277LL;
	int16_t x315 = INT16_MIN;
	int16_t x316 = INT16_MIN;
	int32_t t76 = -247347;

	t76 = (x313<(x314-(x315/x316)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x319 = INT32_MIN;
	static int16_t x320 = INT16_MIN;

	t77 = (x317<(x318-(x319/x320)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x325 = -1LL;
	volatile int8_t x326 = -1;
	volatile int16_t x327 = -2;
	int32_t x328 = INT32_MIN;
	int32_t t78 = -2;

	t78 = (x325<(x326-(x327/x328)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x329 = 0U;
	int16_t x331 = -2;
	volatile int32_t x332 = -1;
	volatile int32_t t79 = 39619458;

	t79 = (x329<(x330-(x331/x332)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x337 = 12U;
	uint64_t x338 = UINT64_MAX;
	int16_t x339 = INT16_MAX;
	int64_t x340 = INT64_MIN;
	int32_t t80 = -3652453;

	t80 = (x337<(x338-(x339/x340)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x342 = INT16_MIN;
	int64_t x343 = 2432103540004496LL;
	static int64_t x344 = -3722LL;
	volatile int32_t t81 = -1;

	t81 = (x341<(x342-(x343/x344)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x345 = -1;
	int16_t x346 = -1;
	volatile int8_t x347 = -1;
	int16_t x348 = INT16_MIN;
	int32_t t82 = 3402650;

	t82 = (x345<(x346-(x347/x348)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x349 = 1;
	volatile uint64_t x350 = UINT64_MAX;
	int8_t x351 = INT8_MAX;
	volatile uint64_t x352 = 195118299614209LLU;
	int32_t t83 = -55;

	t83 = (x349<(x350-(x351/x352)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x353 = 47815LLU;
	volatile int32_t x355 = INT32_MAX;
	int16_t x356 = 1;
	volatile int32_t t84 = -6872;

	t84 = (x353<(x354-(x355/x356)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x357 = -7851263141LL;
	static int8_t x360 = INT8_MIN;
	volatile int32_t t85 = -55978383;

	t85 = (x357<(x358-(x359/x360)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x362 = 477299490U;
	static uint16_t x363 = UINT16_MAX;
	static int8_t x364 = INT8_MAX;

	t86 = (x361<(x362-(x363/x364)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x365 = INT8_MAX;
	int16_t x366 = -1;
	uint16_t x367 = UINT16_MAX;
	volatile int32_t t87 = -477;

	t87 = (x365<(x366-(x367/x368)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x369 = INT16_MAX;
	static int32_t x370 = INT32_MIN;
	static int64_t x371 = INT64_MIN;
	volatile int32_t t88 = 348;

	t88 = (x369<(x370-(x371/x372)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x373 = -5;
	int32_t x374 = -1;
	int8_t x375 = 13;
	static uint8_t x376 = UINT8_MAX;
	int32_t t89 = -252256;

	t89 = (x373<(x374-(x375/x376)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x377 = 107U;
	int8_t x378 = 1;
	static int32_t x379 = INT32_MIN;
	uint16_t x380 = 56U;
	int32_t t90 = 2090;

	t90 = (x377<(x378-(x379/x380)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x381 = 0;
	uint32_t x382 = 1292888U;
	uint16_t x383 = UINT16_MAX;
	volatile uint16_t x384 = UINT16_MAX;
	int32_t t91 = 43039;

	t91 = (x381<(x382-(x383/x384)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x385 = INT8_MIN;
	int64_t x386 = -1LL;
	volatile int64_t x387 = INT64_MIN;
	int16_t x388 = -469;

	t92 = (x385<(x386-(x387/x388)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x389 = 523337642LLU;
	int16_t x390 = -1;
	static uint8_t x391 = 0U;
	uint64_t x392 = 12956086589222620LLU;
	int32_t t93 = 307393;

	t93 = (x389<(x390-(x391/x392)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x393 = -1;
	static volatile int16_t x396 = INT16_MAX;

	t94 = (x393<(x394-(x395/x396)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x397 = 88U;
	uint64_t x398 = UINT64_MAX;
	uint32_t x399 = 2478U;
	int32_t x400 = -260444;

	t95 = (x397<(x398-(x399/x400)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x402 = INT16_MAX;
	static uint32_t x404 = 1878U;
	static volatile int32_t t96 = 10419;

	t96 = (x401<(x402-(x403/x404)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x405 = 17517088981LLU;
	volatile int32_t x406 = INT32_MIN;
	int32_t x407 = -1;
	uint16_t x408 = UINT16_MAX;
	static volatile int32_t t97 = 7322;

	t97 = (x405<(x406-(x407/x408)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x409 = INT64_MIN;
	uint8_t x410 = 14U;
	volatile uint64_t x411 = 505567162150428419LLU;
	int64_t x412 = INT64_MAX;

	t98 = (x409<(x410-(x411/x412)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x413 = UINT8_MAX;
	int16_t x414 = -1;
	volatile int16_t x415 = -1;
	static int8_t x416 = -56;
	int32_t t99 = -13531634;

	t99 = (x413<(x414-(x415/x416)));

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


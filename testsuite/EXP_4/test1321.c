#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -1;
int32_t x4 = INT32_MAX;
int32_t x6 = INT32_MIN;
static uint64_t x9 = 5474993368716353LLU;
uint64_t x10 = UINT64_MAX;
volatile int32_t x11 = INT32_MAX;
volatile int32_t t4 = 502;
uint16_t x28 = 469U;
volatile int8_t x33 = -1;
volatile int32_t t8 = -510;
volatile uint64_t x37 = 206LLU;
volatile int16_t x48 = INT16_MIN;
static volatile int32_t t11 = 6353467;
uint8_t x51 = 3U;
static int16_t x59 = INT16_MIN;
uint16_t x68 = 18069U;
static volatile int32_t t18 = -223701;
uint64_t x81 = 37150526881121LLU;
int32_t x87 = INT32_MAX;
int32_t x88 = 20;
volatile int64_t x91 = 114342LL;
int32_t t22 = 87585;
uint32_t x101 = 1346408U;
int32_t x104 = -48683837;
static uint8_t x110 = 6U;
int32_t x117 = INT32_MIN;
static volatile int16_t x120 = 217;
static int32_t t29 = 0;
int8_t x126 = INT8_MIN;
static uint64_t x131 = UINT64_MAX;
static int64_t x135 = INT64_MIN;
volatile int8_t x138 = -1;
uint64_t x145 = UINT64_MAX;
uint32_t x146 = 56067565U;
static int64_t x148 = 141LL;
uint16_t x152 = UINT16_MAX;
static int32_t t37 = 3959878;
int32_t x153 = -1;
int32_t x155 = -1;
int16_t x160 = INT16_MIN;
volatile int32_t t39 = -906898;
int16_t x169 = 61;
int8_t x171 = INT8_MIN;
static volatile uint64_t x178 = 160730100585710LLU;
int32_t t44 = 11;
static int32_t x184 = -1;
int16_t x192 = 1;
static int32_t t49 = 1;
int32_t x208 = -1;
volatile int32_t x210 = INT32_MIN;
static uint8_t x214 = UINT8_MAX;
static volatile int8_t x215 = INT8_MAX;
int32_t t53 = -179027804;
volatile int32_t x219 = 0;
static int64_t x220 = INT64_MIN;
int32_t x223 = -11;
int8_t x224 = -3;
int16_t x231 = -1;
volatile int16_t x232 = INT16_MIN;
static int8_t x252 = INT8_MIN;
volatile int64_t x254 = -1LL;
int64_t x261 = 44634447LL;
int16_t x262 = 1;
uint16_t x267 = 1573U;
uint64_t x268 = 418LLU;
int32_t x273 = INT32_MAX;
volatile int32_t x282 = 0;
volatile int32_t t73 = 11801750;
int32_t x312 = -5;
volatile int32_t t77 = 38;
int32_t x314 = -513242;
int8_t x316 = 0;
int32_t t79 = 917617;
volatile uint16_t x325 = 15867U;
volatile int32_t t82 = -176584;
uint16_t x337 = UINT16_MAX;
int64_t x341 = INT64_MAX;
int32_t x343 = INT32_MAX;
volatile int32_t t86 = -152191842;
static uint16_t x365 = 23U;
volatile int64_t x372 = INT64_MIN;
int8_t x383 = -1;
int8_t x385 = INT8_MAX;
int16_t x389 = INT16_MIN;
int64_t x397 = INT64_MAX;
uint64_t x400 = UINT64_MAX;


void f0(void) {
	volatile int32_t x2 = INT32_MIN;
	volatile int8_t x3 = INT8_MIN;
	int32_t t0 = 34;

	t0 = (x1==(x2&(x3==x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile int64_t x7 = -1LL;
	static uint32_t x8 = 0U;
	volatile int32_t t1 = 9131197;

	t1 = (x5==(x6&(x7==x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x12 = INT32_MAX;
	volatile int32_t t2 = 16667;

	t2 = (x9==(x10&(x11==x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	static volatile int8_t x14 = INT8_MIN;
	int8_t x15 = -2;
	volatile int64_t x16 = -831254LL;
	volatile int32_t t3 = 118426221;

	t3 = (x13==(x14&(x15==x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = -1;
	static int32_t x18 = -1;
	int8_t x19 = -1;
	int16_t x20 = -1;

	t4 = (x17==(x18&(x19==x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x21 = 189;
	uint32_t x22 = UINT32_MAX;
	int8_t x23 = -1;
	int64_t x24 = 839486305515232216LL;
	volatile int32_t t5 = -547769125;

	t5 = (x21==(x22&(x23==x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = -1;
	static int8_t x26 = INT8_MIN;
	volatile int16_t x27 = INT16_MIN;
	int32_t t6 = -1292;

	t6 = (x25==(x26&(x27==x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	uint32_t x30 = UINT32_MAX;
	int16_t x31 = INT16_MIN;
	uint16_t x32 = 13114U;
	volatile int32_t t7 = -1;

	t7 = (x29==(x30&(x31==x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x34 = UINT8_MAX;
	int32_t x35 = -1;
	volatile uint32_t x36 = UINT32_MAX;

	t8 = (x33==(x34&(x35==x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x38 = INT32_MAX;
	uint16_t x39 = UINT16_MAX;
	static volatile int32_t x40 = -1;
	int32_t t9 = 0;

	t9 = (x37==(x38&(x39==x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	static int64_t x42 = INT64_MIN;
	int8_t x43 = 23;
	static int16_t x44 = INT16_MIN;
	int32_t t10 = 88;

	t10 = (x41==(x42&(x43==x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = -7104;
	volatile int32_t x46 = INT32_MIN;
	int8_t x47 = INT8_MAX;

	t11 = (x45==(x46&(x47==x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	static volatile int16_t x50 = INT16_MAX;
	volatile int8_t x52 = INT8_MIN;
	int32_t t12 = 11005584;

	t12 = (x49==(x50&(x51==x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 25977824697703432LLU;
	int16_t x54 = -1;
	int8_t x55 = INT8_MIN;
	int16_t x56 = INT16_MIN;
	int32_t t13 = 191261;

	t13 = (x53==(x54&(x55==x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = INT8_MIN;
	int32_t x58 = INT32_MIN;
	int8_t x60 = INT8_MAX;
	static volatile int32_t t14 = -119659;

	t14 = (x57==(x58&(x59==x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	uint8_t x62 = 2U;
	int8_t x63 = -1;
	int64_t x64 = INT64_MIN;
	static int32_t t15 = -1278;

	t15 = (x61==(x62&(x63==x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = 5772473371540624LL;
	static uint32_t x66 = 73U;
	volatile uint64_t x67 = 3077440901558898LLU;
	int32_t t16 = 393;

	t16 = (x65==(x66&(x67==x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -2;
	uint32_t x70 = 7989U;
	uint8_t x71 = 60U;
	uint16_t x72 = 18U;
	int32_t t17 = 1;

	t17 = (x69==(x70&(x71==x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	static uint16_t x74 = UINT16_MAX;
	uint8_t x75 = 1U;
	int64_t x76 = INT64_MAX;

	t18 = (x73==(x74&(x75==x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = INT16_MIN;
	int32_t x78 = 284;
	volatile uint16_t x79 = UINT16_MAX;
	static volatile uint8_t x80 = UINT8_MAX;
	int32_t t19 = -99;

	t19 = (x77==(x78&(x79==x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x82 = 1;
	int64_t x83 = INT64_MIN;
	int8_t x84 = -1;
	int32_t t20 = -145622730;

	t20 = (x81==(x82&(x83==x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 125U;
	volatile int64_t x86 = -3777749699411087926LL;
	static volatile int32_t t21 = -44487;

	t21 = (x85==(x86&(x87==x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	int16_t x90 = INT16_MAX;
	volatile int8_t x92 = INT8_MIN;

	t22 = (x89==(x90&(x91==x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	static int32_t x94 = -1;
	static volatile int32_t x95 = INT32_MAX;
	uint32_t x96 = 13332U;
	static volatile int32_t t23 = -2497;

	t23 = (x93==(x94&(x95==x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 1;
	uint16_t x98 = 31U;
	int32_t x99 = INT32_MIN;
	int8_t x100 = INT8_MIN;
	volatile int32_t t24 = -8;

	t24 = (x97==(x98&(x99==x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x102 = INT64_MAX;
	volatile int16_t x103 = -5565;
	static volatile int32_t t25 = 101;

	t25 = (x101==(x102&(x103==x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 1U;
	int16_t x106 = 98;
	uint8_t x107 = 108U;
	uint64_t x108 = 2401291099458039844LLU;
	volatile int32_t t26 = 3;

	t26 = (x105==(x106&(x107==x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x109 = INT8_MIN;
	uint8_t x111 = 1U;
	int8_t x112 = INT8_MIN;
	volatile int32_t t27 = -523009816;

	t27 = (x109==(x110&(x111==x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 28U;
	static int32_t x114 = INT32_MAX;
	int32_t x115 = -1;
	static int16_t x116 = -1;
	int32_t t28 = -2;

	t28 = (x113==(x114&(x115==x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = -1;
	uint32_t x119 = 266110415U;

	t29 = (x117==(x118&(x119==x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	uint32_t x122 = 40U;
	static uint8_t x123 = UINT8_MAX;
	int64_t x124 = INT64_MAX;
	static volatile int32_t t30 = 7301401;

	t30 = (x121==(x122&(x123==x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MAX;
	int8_t x127 = -1;
	int8_t x128 = -1;
	int32_t t31 = -28894274;

	t31 = (x125==(x126&(x127==x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = 1;
	int64_t x130 = INT64_MIN;
	uint32_t x132 = UINT32_MAX;
	volatile int32_t t32 = 1971;

	t32 = (x129==(x130&(x131==x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 328U;
	uint32_t x134 = UINT32_MAX;
	static uint64_t x136 = 4858382407419830277LLU;
	static int32_t t33 = -8;

	t33 = (x133==(x134&(x135==x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x137 = 1LL;
	volatile int8_t x139 = INT8_MAX;
	int16_t x140 = INT16_MIN;
	int32_t t34 = -5590;

	t34 = (x137==(x138&(x139==x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = -91807LL;
	uint32_t x142 = 299U;
	int16_t x143 = -1;
	int32_t x144 = -242;
	volatile int32_t t35 = 58587537;

	t35 = (x141==(x142&(x143==x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x147 = 970U;
	volatile int32_t t36 = 2395;

	t36 = (x145==(x146&(x147==x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -5051;
	volatile uint32_t x150 = 0U;
	volatile int32_t x151 = -91;

	t37 = (x149==(x150&(x151==x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x154 = -202169;
	int16_t x156 = INT16_MIN;
	volatile int32_t t38 = -49;

	t38 = (x153==(x154&(x155==x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = 3706254149343712462LL;
	int8_t x158 = INT8_MIN;
	volatile int64_t x159 = 487062168LL;

	t39 = (x157==(x158&(x159==x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	static int8_t x162 = -3;
	volatile int64_t x163 = INT64_MAX;
	volatile int32_t x164 = -1;
	int32_t t40 = -112;

	t40 = (x161==(x162&(x163==x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 4U;
	uint32_t x166 = UINT32_MAX;
	uint8_t x167 = 28U;
	volatile uint16_t x168 = 1U;
	int32_t t41 = 3;

	t41 = (x165==(x166&(x167==x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x170 = -1;
	static int32_t x172 = 335103;
	static int32_t t42 = -43043;

	t42 = (x169==(x170&(x171==x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = INT16_MIN;
	volatile int64_t x174 = -789LL;
	static volatile uint8_t x175 = 19U;
	uint32_t x176 = 3U;
	volatile int32_t t43 = -54083383;

	t43 = (x173==(x174&(x175==x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x177 = INT16_MAX;
	uint64_t x179 = 259842167559LLU;
	int16_t x180 = -1;

	t44 = (x177==(x178&(x179==x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = INT32_MIN;
	uint64_t x182 = UINT64_MAX;
	volatile int8_t x183 = -60;
	int32_t t45 = -7;

	t45 = (x181==(x182&(x183==x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	volatile uint64_t x186 = UINT64_MAX;
	static int16_t x187 = 3;
	int8_t x188 = INT8_MIN;
	int32_t t46 = 161817;

	t46 = (x185==(x186&(x187==x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	volatile int32_t x190 = -1;
	int16_t x191 = INT16_MIN;
	static volatile int32_t t47 = -1897642;

	t47 = (x189==(x190&(x191==x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -2LL;
	uint32_t x194 = UINT32_MAX;
	static int8_t x195 = INT8_MIN;
	int64_t x196 = INT64_MAX;
	int32_t t48 = 30502268;

	t48 = (x193==(x194&(x195==x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 51940U;
	uint16_t x198 = UINT16_MAX;
	int8_t x199 = -7;
	int8_t x200 = INT8_MIN;

	t49 = (x197==(x198&(x199==x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = INT64_MIN;
	int32_t x202 = INT32_MIN;
	uint64_t x203 = UINT64_MAX;
	volatile uint16_t x204 = 1U;
	int32_t t50 = -27;

	t50 = (x201==(x202&(x203==x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MAX;
	uint16_t x206 = 13U;
	volatile int8_t x207 = INT8_MAX;
	volatile int32_t t51 = 845542;

	t51 = (x205==(x206&(x207==x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MAX;
	static int64_t x211 = -8LL;
	uint64_t x212 = 7703920053LLU;
	int32_t t52 = -413;

	t52 = (x209==(x210&(x211==x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 109U;
	int64_t x216 = -3102361859794LL;

	t53 = (x213==(x214&(x215==x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MAX;
	static volatile uint32_t x218 = 449248U;
	int32_t t54 = -280946;

	t54 = (x217==(x218&(x219==x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x221 = UINT32_MAX;
	int64_t x222 = 63866732040214497LL;
	int32_t t55 = -414347300;

	t55 = (x221==(x222&(x223==x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = -2;
	uint16_t x226 = 401U;
	uint8_t x227 = 1U;
	static int16_t x228 = -205;
	int32_t t56 = 16014;

	t56 = (x225==(x226&(x227==x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = UINT32_MAX;
	volatile int64_t x230 = INT64_MIN;
	int32_t t57 = 2;

	t57 = (x229==(x230&(x231==x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = INT16_MIN;
	uint64_t x234 = 58065LLU;
	uint8_t x235 = UINT8_MAX;
	volatile uint16_t x236 = 3980U;
	volatile int32_t t58 = -3;

	t58 = (x233==(x234&(x235==x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	int64_t x238 = -1LL;
	volatile int16_t x239 = 326;
	int8_t x240 = INT8_MIN;
	static int32_t t59 = -137;

	t59 = (x237==(x238&(x239==x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x241 = 30456264U;
	int8_t x242 = -1;
	uint64_t x243 = 911128441LLU;
	static int16_t x244 = -4;
	volatile int32_t t60 = 1367;

	t60 = (x241==(x242&(x243==x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MAX;
	static int64_t x246 = -979LL;
	static int16_t x247 = INT16_MIN;
	volatile uint32_t x248 = UINT32_MAX;
	volatile int32_t t61 = -38215;

	t61 = (x245==(x246&(x247==x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = UINT8_MAX;
	int8_t x250 = 8;
	int32_t x251 = INT32_MIN;
	static int32_t t62 = 25;

	t62 = (x249==(x250&(x251==x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	static uint8_t x255 = 6U;
	static int32_t x256 = -1;
	static volatile int32_t t63 = 17476;

	t63 = (x253==(x254&(x255==x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = INT16_MIN;
	static volatile int32_t x258 = -1;
	volatile uint16_t x259 = UINT16_MAX;
	static volatile int64_t x260 = -138560423063628444LL;
	int32_t t64 = 25;

	t64 = (x257==(x258&(x259==x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x263 = INT64_MIN;
	int64_t x264 = INT64_MIN;
	static volatile int32_t t65 = 16873;

	t65 = (x261==(x262&(x263==x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x265 = 1U;
	volatile int64_t x266 = -1LL;
	static int32_t t66 = -2675;

	t66 = (x265==(x266&(x267==x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 0U;
	static volatile int64_t x270 = -1LL;
	int32_t x271 = INT32_MIN;
	static int64_t x272 = INT64_MAX;
	volatile int32_t t67 = 47450096;

	t67 = (x269==(x270&(x271==x272)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x274 = INT16_MIN;
	int32_t x275 = INT32_MIN;
	uint32_t x276 = 19U;
	volatile int32_t t68 = -913;

	t68 = (x273==(x274&(x275==x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	static int16_t x278 = 0;
	static volatile uint64_t x279 = 164948056672819456LLU;
	int64_t x280 = -1LL;
	static volatile int32_t t69 = 24;

	t69 = (x277==(x278&(x279==x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = INT16_MIN;
	static int16_t x283 = 63;
	uint16_t x284 = UINT16_MAX;
	volatile int32_t t70 = -48462131;

	t70 = (x281==(x282&(x283==x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = 1281598LL;
	int32_t x286 = INT32_MIN;
	volatile int8_t x287 = -1;
	int16_t x288 = 142;
	static volatile int32_t t71 = 362255994;

	t71 = (x285==(x286&(x287==x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x289 = -1;
	int16_t x290 = -5;
	int64_t x291 = 142996739LL;
	volatile uint8_t x292 = 0U;
	int32_t t72 = 37730262;

	t72 = (x289==(x290&(x291==x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x293 = UINT32_MAX;
	volatile uint32_t x294 = 1208210U;
	int8_t x295 = -1;
	volatile int8_t x296 = INT8_MAX;

	t73 = (x293==(x294&(x295==x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = -1;
	int16_t x298 = 6;
	int16_t x299 = 3631;
	int64_t x300 = INT64_MIN;
	int32_t t74 = -64776;

	t74 = (x297==(x298&(x299==x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = UINT64_MAX;
	int8_t x302 = INT8_MAX;
	int64_t x303 = -151109646LL;
	uint32_t x304 = 3056U;
	volatile int32_t t75 = -1;

	t75 = (x301==(x302&(x303==x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	uint8_t x306 = 7U;
	volatile int64_t x307 = 2010LL;
	int64_t x308 = INT64_MIN;
	int32_t t76 = -91;

	t76 = (x305==(x306&(x307==x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = UINT64_MAX;
	static int8_t x310 = INT8_MAX;
	int16_t x311 = 457;

	t77 = (x309==(x310&(x311==x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	static volatile uint16_t x315 = UINT16_MAX;
	volatile int32_t t78 = 385885;

	t78 = (x313==(x314&(x315==x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -1;
	int64_t x318 = INT64_MIN;
	volatile int32_t x319 = -21;
	static int32_t x320 = INT32_MIN;

	t79 = (x317==(x318&(x319==x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = 189978954198LL;
	uint64_t x322 = 14322645LLU;
	uint64_t x323 = 32487483LLU;
	static int32_t x324 = INT32_MAX;
	int32_t t80 = 18;

	t80 = (x321==(x322&(x323==x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x326 = -3;
	static int8_t x327 = INT8_MAX;
	static uint8_t x328 = UINT8_MAX;
	static volatile int32_t t81 = 3589465;

	t81 = (x325==(x326&(x327==x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = INT32_MIN;
	int16_t x330 = INT16_MAX;
	static int8_t x331 = 28;
	int8_t x332 = 55;

	t82 = (x329==(x330&(x331==x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 26U;
	static uint32_t x334 = UINT32_MAX;
	uint16_t x335 = UINT16_MAX;
	int8_t x336 = -3;
	int32_t t83 = 1233776;

	t83 = (x333==(x334&(x335==x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x338 = INT64_MIN;
	int64_t x339 = -1LL;
	int32_t x340 = INT32_MAX;
	int32_t t84 = -68336696;

	t84 = (x337==(x338&(x339==x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x342 = 4U;
	int16_t x344 = INT16_MIN;
	volatile int32_t t85 = 66568436;

	t85 = (x341==(x342&(x343==x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MAX;
	volatile int8_t x346 = INT8_MIN;
	volatile int8_t x347 = 1;
	int8_t x348 = 1;

	t86 = (x345==(x346&(x347==x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MIN;
	volatile int16_t x350 = INT16_MIN;
	static uint8_t x351 = 63U;
	static int8_t x352 = INT8_MIN;
	int32_t t87 = 93318296;

	t87 = (x349==(x350&(x351==x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = INT32_MIN;
	int8_t x354 = -1;
	static int32_t x355 = INT32_MIN;
	static uint64_t x356 = 21LLU;
	int32_t t88 = -11;

	t88 = (x353==(x354&(x355==x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = INT32_MIN;
	static int64_t x358 = 21618559124722627LL;
	uint16_t x359 = UINT16_MAX;
	uint16_t x360 = UINT16_MAX;
	volatile int32_t t89 = -23;

	t89 = (x357==(x358&(x359==x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = -975664LL;
	static int64_t x362 = 508371LL;
	static uint32_t x363 = 322U;
	int8_t x364 = 0;
	volatile int32_t t90 = -416;

	t90 = (x361==(x362&(x363==x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x366 = INT32_MIN;
	uint8_t x367 = UINT8_MAX;
	volatile uint8_t x368 = 3U;
	volatile int32_t t91 = 131578;

	t91 = (x365==(x366&(x367==x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = 287;
	static int64_t x370 = -460623828725005LL;
	uint32_t x371 = UINT32_MAX;
	volatile int32_t t92 = -1;

	t92 = (x369==(x370&(x371==x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	uint16_t x374 = 1357U;
	int16_t x375 = -1;
	volatile int16_t x376 = INT16_MAX;
	int32_t t93 = -313638992;

	t93 = (x373==(x374&(x375==x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 898U;
	int16_t x378 = INT16_MAX;
	int8_t x379 = -1;
	int64_t x380 = INT64_MIN;
	volatile int32_t t94 = -24;

	t94 = (x377==(x378&(x379==x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x381 = 3258690LLU;
	int8_t x382 = -1;
	uint16_t x384 = UINT16_MAX;
	static volatile int32_t t95 = -147923;

	t95 = (x381==(x382&(x383==x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x386 = INT8_MAX;
	int16_t x387 = INT16_MAX;
	static int32_t x388 = -90;
	static int32_t t96 = -11260;

	t96 = (x385==(x386&(x387==x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x390 = 7U;
	volatile int32_t x391 = -1;
	static uint32_t x392 = 956U;
	volatile int32_t t97 = 0;

	t97 = (x389==(x390&(x391==x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -1;
	int8_t x394 = -1;
	uint32_t x395 = UINT32_MAX;
	int16_t x396 = -4625;
	volatile int32_t t98 = -713620870;

	t98 = (x393==(x394&(x395==x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x398 = 3U;
	uint8_t x399 = UINT8_MAX;
	volatile int32_t t99 = 3849041;

	t99 = (x397==(x398&(x399==x400)));

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

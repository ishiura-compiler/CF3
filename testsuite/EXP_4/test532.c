#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x5 = INT32_MIN;
static int8_t x6 = INT8_MIN;
uint64_t x10 = 2322669LLU;
int16_t x12 = -7533;
int16_t x13 = 23;
static int8_t x14 = -1;
int32_t x17 = INT32_MAX;
int8_t x20 = -2;
static int32_t x22 = INT32_MIN;
uint32_t x23 = UINT32_MAX;
int8_t x24 = -3;
uint64_t t6 = UINT64_MAX;
uint64_t x30 = UINT64_MAX;
volatile uint64_t t8 = 493357854LLU;
int16_t x43 = -7;
uint32_t x49 = 3U;
int8_t x50 = -1;
static int32_t x66 = INT32_MAX;
static int32_t x67 = -8038801;
int32_t t15 = 49960;
uint8_t x95 = 2U;
int8_t x99 = 34;
int16_t x104 = INT16_MIN;
volatile uint32_t t22 = UINT32_MAX;
int32_t t24 = 656;
volatile uint32_t t25 = 0U;
static volatile uint16_t x119 = UINT16_MAX;
uint8_t x120 = 13U;
volatile int64_t t27 = 760780748LL;
volatile int32_t x125 = -598;
static int32_t x131 = INT32_MIN;
uint32_t x133 = 55381U;
volatile int32_t x135 = -1;
int8_t x144 = INT8_MIN;
uint16_t x152 = 872U;
int16_t x154 = 207;
volatile int64_t x168 = INT64_MIN;
uint64_t t37 = 228752LLU;
volatile uint16_t x174 = UINT16_MAX;
uint64_t x181 = UINT64_MAX;
volatile int8_t x183 = INT8_MIN;
int32_t x185 = INT32_MIN;
uint32_t x187 = UINT32_MAX;
static uint64_t x188 = UINT64_MAX;
uint64_t t42 = 6LLU;
static int64_t x198 = -4440573147075395646LL;
uint64_t t45 = UINT64_MAX;
volatile uint64_t t46 = 522362LLU;
uint8_t x208 = 4U;
volatile int64_t x211 = INT64_MIN;
volatile int32_t t49 = -5;
int8_t x218 = 53;
int8_t x220 = -1;
volatile int8_t x224 = 19;
static volatile uint32_t x225 = 247U;
int32_t x226 = INT32_MAX;
uint64_t x231 = UINT64_MAX;
int32_t x239 = INT32_MAX;
int32_t x240 = INT32_MIN;
volatile uint32_t t56 = 3U;
uint8_t x246 = 17U;
volatile int64_t t57 = 14895194145857823LL;
volatile uint8_t x252 = UINT8_MAX;
static int64_t x257 = -7247LL;
int8_t x258 = -1;
int64_t x261 = INT64_MIN;
static volatile int32_t x263 = -53417;
uint64_t x264 = 7834789578272832LLU;
volatile uint32_t x266 = UINT32_MAX;
int32_t x272 = 1251;
uint32_t x277 = 30648U;
uint32_t x281 = 117734501U;
int32_t x284 = INT32_MAX;
static int16_t x286 = -1;
volatile int64_t t70 = 65567LL;
int8_t x310 = -1;
int16_t x311 = -1;
static int64_t x314 = -1LL;
uint64_t x316 = 15327028269LLU;
volatile int32_t x320 = 4371;
static int8_t x323 = INT8_MIN;
static int64_t x326 = INT64_MAX;
uint16_t x330 = 21U;
volatile int32_t t76 = -125528;
int32_t x334 = INT32_MIN;
static uint16_t x340 = UINT16_MAX;
uint8_t x342 = UINT8_MAX;
int16_t x344 = 13152;
uint8_t x347 = 1U;
int8_t x361 = INT8_MIN;
int8_t x366 = -1;
int64_t x368 = -221LL;
int64_t x369 = INT64_MIN;
uint64_t x370 = 996232LLU;
int32_t x374 = INT32_MIN;
int64_t x375 = INT64_MIN;
int64_t x378 = -1LL;
uint64_t x384 = UINT64_MAX;
static int64_t x386 = 2829351886315LL;
int16_t x387 = INT16_MAX;
volatile int64_t t90 = -186852LL;
int64_t t91 = 1632LL;
int32_t x396 = INT32_MIN;
int32_t t93 = 1;
int16_t x403 = -233;
int64_t x408 = -628LL;
int32_t x414 = INT32_MIN;
static uint16_t x415 = UINT16_MAX;
volatile uint64_t t99 = UINT64_MAX;


void f0(void) {
	uint32_t x1 = 10687U;
	int64_t x2 = -480LL;
	uint8_t x3 = UINT8_MAX;
	static uint8_t x4 = UINT8_MAX;
	int64_t t0 = -1LL;

	t0 = (x1|(x2-(x3/x4)));

	if (t0 != -65LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x7 = INT8_MIN;
	int64_t x8 = INT64_MIN;
	int64_t t1 = 31355LL;

	t1 = (x5|(x6-(x7/x8)));

	if (t1 != -128LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 48489050U;
	volatile int32_t x11 = -1;
	uint64_t t2 = 1514253LLU;

	t2 = (x9|(x10-(x11/x12)));

	if (t2 != 48493311LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x15 = 123828172LLU;
	volatile int64_t x16 = -1LL;
	uint64_t t3 = UINT64_MAX;

	t3 = (x13|(x14-(x15/x16)));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = INT16_MIN;
	int16_t x19 = INT16_MIN;
	static volatile int32_t t4 = -5;

	t4 = (x17|(x18-(x19/x20)));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	uint32_t t5 = UINT32_MAX;

	t5 = (x21|(x22-(x23/x24)));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 463561471171506LLU;
	uint64_t x26 = UINT64_MAX;
	int8_t x27 = INT8_MIN;
	volatile int16_t x28 = -2389;

	t6 = (x25|(x26-(x27/x28)));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 6;
	volatile int8_t x31 = INT8_MAX;
	static volatile uint64_t x32 = 190752230359826LLU;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = (x29|(x30-(x31/x32)));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = -300;
	uint32_t x38 = 189770818U;
	uint64_t x39 = 70LLU;
	int16_t x40 = 6504;

	t8 = (x37|(x38-(x39/x40)));

	if (t8 != 18446744073709551318LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x41 = -1;
	uint64_t x42 = 8LLU;
	volatile uint8_t x44 = 119U;
	volatile uint64_t t9 = UINT64_MAX;

	t9 = (x41|(x42-(x43/x44)));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MAX;
	static int64_t x46 = -912858038267297LL;
	uint32_t x47 = 1U;
	int64_t x48 = INT64_MAX;
	int64_t t10 = 48777LL;

	t10 = (x45|(x46-(x47/x48)));

	if (t10 != -912858038267265LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x51 = 3U;
	int32_t x52 = INT32_MIN;
	volatile uint32_t t11 = UINT32_MAX;

	t11 = (x49|(x50-(x51/x52)));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x53 = 186;
	int32_t x54 = -1;
	static int16_t x55 = -1;
	int8_t x56 = -1;
	volatile int32_t t12 = -30;

	t12 = (x53|(x54-(x55/x56)));

	if (t12 != -2) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MIN;
	static uint16_t x58 = 216U;
	uint32_t x59 = 842U;
	static int32_t x60 = -1;
	static int64_t t13 = 31000LL;

	t13 = (x57|(x58-(x59/x60)));

	if (t13 != -9223372036854775592LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = 1U;
	int8_t x62 = INT8_MIN;
	uint16_t x63 = UINT16_MAX;
	volatile int32_t x64 = INT32_MIN;
	volatile int32_t t14 = -14;

	t14 = (x61|(x62-(x63/x64)));

	if (t14 != -127) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	int8_t x68 = -1;

	t15 = (x65|(x66-(x67/x68)));

	if (t15 != -10642) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = -154314;
	int8_t x70 = -1;
	int32_t x71 = 99658;
	volatile int16_t x72 = -406;
	int32_t t16 = -1243;

	t16 = (x69|(x70-(x71/x72)));

	if (t16 != -154122) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = UINT32_MAX;
	volatile int32_t x74 = INT32_MAX;
	int16_t x75 = -1;
	static volatile uint64_t x76 = 2683352345877714227LLU;
	uint64_t t17 = 16216LLU;

	t17 = (x73|(x74-(x75/x76)));

	if (t17 != 4294967295LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x77 = INT64_MIN;
	int32_t x78 = INT32_MIN;
	static int32_t x79 = 719;
	int8_t x80 = INT8_MIN;
	volatile int64_t t18 = -234871717190LL;

	t18 = (x77|(x78-(x79/x80)));

	if (t18 != -2147483643LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x85 = 29U;
	volatile int8_t x86 = -4;
	int16_t x87 = INT16_MAX;
	int64_t x88 = INT64_MIN;
	int64_t t19 = 28610737472494LL;

	t19 = (x85|(x86-(x87/x88)));

	if (t19 != -3LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x93 = INT32_MIN;
	int32_t x94 = INT32_MIN;
	volatile uint64_t x96 = 89513LLU;
	static volatile uint64_t t20 = 433213LLU;

	t20 = (x93|(x94-(x95/x96)));

	if (t20 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x97 = INT64_MIN;
	uint16_t x98 = 11U;
	static uint64_t x100 = 3691929519294716LLU;
	volatile uint64_t t21 = 341043LLU;

	t21 = (x97|(x98-(x99/x100)));

	if (t21 != 9223372036854775819LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = -1;
	uint32_t x102 = 29566626U;
	static volatile int8_t x103 = -1;

	t22 = (x101|(x102-(x103/x104)));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = 716391385416LL;
	static int32_t x106 = INT32_MIN;
	uint8_t x107 = 99U;
	int8_t x108 = INT8_MAX;
	static int64_t t23 = -22LL;

	t23 = (x105|(x106-(x107/x108)));

	if (t23 != -868153016LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = INT16_MIN;
	int8_t x110 = INT8_MIN;
	int8_t x111 = INT8_MIN;
	volatile int16_t x112 = -1;

	t24 = (x109|(x110-(x111/x112)));

	if (t24 != -256) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = 4954;
	uint32_t x114 = 756709649U;
	int8_t x115 = -1;
	static uint32_t x116 = UINT32_MAX;

	t25 = (x113|(x114-(x115/x116)));

	if (t25 != 756710234U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = 357;
	volatile uint64_t x118 = UINT64_MAX;
	static volatile uint64_t t26 = 4296554535LLU;

	t26 = (x117|(x118-(x119/x120)));

	if (t26 != 18446744073709546863LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = -1;
	int64_t x122 = -1177283817774LL;
	volatile int8_t x123 = -1;
	int8_t x124 = -1;

	t27 = (x121|(x122-(x123/x124)));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x126 = INT8_MAX;
	volatile uint32_t x127 = 58370920U;
	int8_t x128 = 14;
	uint32_t t28 = 74U;

	t28 = (x125|(x126-(x127/x128)));

	if (t28 != 4294966778U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = -1;
	int16_t x130 = INT16_MAX;
	int8_t x132 = INT8_MAX;
	volatile int32_t t29 = -296;

	t29 = (x129|(x130-(x131/x132)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x134 = UINT16_MAX;
	static uint16_t x136 = UINT16_MAX;
	uint32_t t30 = 4155520U;

	t30 = (x133|(x134-(x135/x136)));

	if (t30 != 65535U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x137 = 16U;
	int8_t x138 = -10;
	int8_t x139 = -1;
	static volatile int32_t x140 = INT32_MIN;
	static volatile int32_t t31 = 18030395;

	t31 = (x137|(x138-(x139/x140)));

	if (t31 != -10) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = INT32_MIN;
	int64_t x142 = INT64_MIN;
	uint32_t x143 = 476309134U;
	volatile int64_t t32 = 7LL;

	t32 = (x141|(x142-(x143/x144)));

	if (t32 != -2147483648LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = -31;
	int64_t x150 = INT64_MIN;
	static volatile int32_t x151 = 0;
	volatile int64_t t33 = -58346615411916945LL;

	t33 = (x149|(x150-(x151/x152)));

	if (t33 != -31LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x153 = 3640307;
	uint64_t x155 = 7706381LLU;
	uint8_t x156 = 104U;
	uint64_t t34 = 14LLU;

	t34 = (x153|(x154-(x155/x156)));

	if (t34 != 18446744073709543423LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x157 = 14U;
	int64_t x158 = -1LL;
	static uint32_t x159 = UINT32_MAX;
	uint16_t x160 = 2U;
	volatile int64_t t35 = -24LL;

	t35 = (x157|(x158-(x159/x160)));

	if (t35 != -2147483634LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x161 = UINT16_MAX;
	uint16_t x162 = 100U;
	static int64_t x163 = -1LL;
	int8_t x164 = 31;
	int64_t t36 = 2844461300095867730LL;

	t36 = (x161|(x162-(x163/x164)));

	if (t36 != 65535LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x165 = INT32_MIN;
	uint64_t x166 = 333811LLU;
	volatile uint32_t x167 = 73842508U;

	t37 = (x165|(x166-(x167/x168)));

	if (t37 != 18446744071562401779LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x169 = 5U;
	uint8_t x170 = UINT8_MAX;
	static int8_t x171 = INT8_MAX;
	int32_t x172 = INT32_MIN;
	volatile int32_t t38 = -314;

	t38 = (x169|(x170-(x171/x172)));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x173 = INT8_MAX;
	uint8_t x175 = 13U;
	uint32_t x176 = 583485U;
	uint32_t t39 = 30026995U;

	t39 = (x173|(x174-(x175/x176)));

	if (t39 != 65535U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x177 = UINT64_MAX;
	int16_t x178 = 71;
	int8_t x179 = INT8_MIN;
	int8_t x180 = INT8_MIN;
	volatile uint64_t t40 = UINT64_MAX;

	t40 = (x177|(x178-(x179/x180)));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x182 = 11U;
	volatile int64_t x184 = -129847702317527LL;
	uint64_t t41 = UINT64_MAX;

	t41 = (x181|(x182-(x183/x184)));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x186 = INT16_MIN;

	t42 = (x185|(x186-(x187/x188)));

	if (t42 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = INT64_MIN;
	volatile int32_t x190 = 1902300;
	volatile uint16_t x191 = 11342U;
	volatile uint64_t x192 = 3994883711248543697LLU;
	uint64_t t43 = 91926LLU;

	t43 = (x189|(x190-(x191/x192)));

	if (t43 != 9223372036856678108LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x193 = UINT16_MAX;
	volatile int64_t x194 = INT64_MAX;
	volatile uint64_t x195 = 7747181LLU;
	uint16_t x196 = 31U;
	uint64_t t44 = 60915256560326LLU;

	t44 = (x193|(x194-(x195/x196)));

	if (t44 != 9223372036854579199LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = -12;
	uint64_t x199 = 825909LLU;
	int8_t x200 = INT8_MAX;

	t45 = (x197|(x198-(x199/x200)));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x201 = 663479770U;
	static volatile int32_t x202 = INT32_MIN;
	volatile uint64_t x203 = 44272603946LLU;
	int64_t x204 = INT64_MIN;

	t46 = (x201|(x202-(x203/x204)));

	if (t46 != 18446744072225547738LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x205 = -1;
	int64_t x206 = 1LL;
	uint16_t x207 = 5U;
	int64_t t47 = 4757465LL;

	t47 = (x205|(x206-(x207/x208)));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = 13;
	volatile int16_t x210 = -1;
	uint64_t x212 = UINT64_MAX;
	volatile uint64_t t48 = UINT64_MAX;

	t48 = (x209|(x210-(x211/x212)));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = -1;
	uint16_t x214 = UINT16_MAX;
	int32_t x215 = INT32_MIN;
	volatile uint8_t x216 = UINT8_MAX;

	t49 = (x213|(x214-(x215/x216)));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = INT16_MIN;
	uint8_t x219 = 28U;
	static volatile int32_t t50 = 251;

	t50 = (x217|(x218-(x219/x220)));

	if (t50 != -32687) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x221 = INT32_MIN;
	uint16_t x222 = 44U;
	uint32_t x223 = UINT32_MAX;
	volatile uint32_t t51 = 861924U;

	t51 = (x221|(x222-(x223/x224)));

	if (t51 != 4068916430U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x227 = 37192LL;
	int16_t x228 = -1;
	static volatile int64_t t52 = -4024118137152634LL;

	t52 = (x225|(x226-(x227/x228)));

	if (t52 != 2147521015LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x229 = -1LL;
	uint64_t x230 = UINT64_MAX;
	uint32_t x232 = 5319U;
	volatile uint64_t t53 = UINT64_MAX;

	t53 = (x229|(x230-(x231/x232)));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x233 = 12967U;
	uint32_t x234 = 863622U;
	int32_t x235 = INT32_MAX;
	static int32_t x236 = INT32_MIN;
	uint32_t t54 = 6225867U;

	t54 = (x233|(x234-(x235/x236)));

	if (t54 != 868263U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x237 = INT64_MAX;
	int8_t x238 = INT8_MIN;
	static volatile int64_t t55 = 183LL;

	t55 = (x237|(x238-(x239/x240)));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = 0;
	static volatile uint8_t x242 = UINT8_MAX;
	int8_t x243 = -10;
	uint32_t x244 = 1159U;

	t56 = (x241|(x242-(x243/x244)));

	if (t56 != 4291261799U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x245 = INT16_MIN;
	uint32_t x247 = 181696457U;
	static int64_t x248 = -1LL;

	t57 = (x245|(x246-(x247/x248)));

	if (t57 != -2086LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x249 = 9648433652LLU;
	uint8_t x250 = 12U;
	int8_t x251 = 1;
	uint64_t t58 = 72142624719LLU;

	t58 = (x249|(x250-(x251/x252)));

	if (t58 != 9648433660LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = -28884;
	static int64_t x254 = INT64_MIN;
	static int32_t x255 = -1;
	int16_t x256 = INT16_MIN;
	int64_t t59 = 2932445347034LL;

	t59 = (x253|(x254-(x255/x256)));

	if (t59 != -28884LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x259 = UINT16_MAX;
	int16_t x260 = INT16_MAX;
	volatile int64_t t60 = 199933686065494LL;

	t60 = (x257|(x258-(x259/x260)));

	if (t60 != -3LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x262 = 3958520U;
	uint64_t t61 = 16925290525LLU;

	t61 = (x261|(x262-(x263/x264)));

	if (t61 != 9223372036858731974LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x265 = -7;
	int16_t x267 = INT16_MIN;
	int8_t x268 = INT8_MIN;
	static uint32_t t62 = UINT32_MAX;

	t62 = (x265|(x266-(x267/x268)));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x269 = UINT32_MAX;
	int8_t x270 = 12;
	volatile uint8_t x271 = 27U;
	static uint32_t t63 = UINT32_MAX;

	t63 = (x269|(x270-(x271/x272)));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x278 = 1666966LLU;
	int8_t x279 = INT8_MIN;
	static volatile int16_t x280 = 16;
	uint64_t t64 = 70791853359057883LLU;

	t64 = (x277|(x278-(x279/x280)));

	if (t64 != 1671102LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x282 = 1351868590661LLU;
	volatile uint32_t x283 = 1U;
	volatile uint64_t t65 = 201LLU;

	t65 = (x281|(x282-(x283/x284)));

	if (t65 != 1351969275493LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x285 = INT8_MIN;
	int64_t x287 = INT64_MAX;
	static uint8_t x288 = 63U;
	static volatile int64_t t66 = 23584LL;

	t66 = (x285|(x286-(x287/x288)));

	if (t66 != -9LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x293 = 77U;
	int8_t x294 = 0;
	static uint16_t x295 = 2U;
	static volatile int32_t x296 = INT32_MAX;
	volatile int32_t t67 = 17;

	t67 = (x293|(x294-(x295/x296)));

	if (t67 != 77) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x297 = 0;
	uint16_t x298 = UINT16_MAX;
	int32_t x299 = -9371463;
	int8_t x300 = 14;
	int32_t t68 = 12427913;

	t68 = (x297|(x298-(x299/x300)));

	if (t68 != 734925) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x301 = -1;
	uint8_t x302 = UINT8_MAX;
	volatile uint16_t x303 = UINT16_MAX;
	uint8_t x304 = 9U;
	int32_t t69 = -890198897;

	t69 = (x301|(x302-(x303/x304)));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x305 = INT16_MIN;
	static uint32_t x306 = 4947870U;
	static int8_t x307 = 37;
	int64_t x308 = 86834LL;

	t70 = (x305|(x306-(x307/x308)));

	if (t70 != -98LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x309 = UINT32_MAX;
	uint64_t x312 = 957321894LLU;
	uint64_t t71 = 15834541LLU;

	t71 = (x309|(x310-(x311/x312)));

	if (t71 != 18446744056529682431LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x313 = INT16_MAX;
	uint8_t x315 = 48U;
	uint64_t t72 = UINT64_MAX;

	t72 = (x313|(x314-(x315/x316)));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x317 = 58;
	volatile int16_t x318 = -153;
	uint16_t x319 = 483U;
	static volatile int32_t t73 = -168136;

	t73 = (x317|(x318-(x319/x320)));

	if (t73 != -129) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x321 = INT8_MAX;
	static uint64_t x322 = 20355LLU;
	int8_t x324 = -1;
	uint64_t t74 = 118532LLU;

	t74 = (x321|(x322-(x323/x324)));

	if (t74 != 20351LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x325 = INT32_MIN;
	volatile int32_t x327 = INT32_MAX;
	uint64_t x328 = 1003LLU;
	volatile uint64_t t75 = 514590LLU;

	t75 = (x325|(x326-(x327/x328)));

	if (t75 != 18446744073707410555LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x329 = INT32_MIN;
	uint8_t x331 = UINT8_MAX;
	int16_t x332 = INT16_MIN;

	t76 = (x329|(x330-(x331/x332)));

	if (t76 != -2147483627) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x333 = 412;
	uint16_t x335 = 0U;
	int64_t x336 = -4249663430310001LL;
	int64_t t77 = 556LL;

	t77 = (x333|(x334-(x335/x336)));

	if (t77 != -2147483236LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x337 = UINT16_MAX;
	int64_t x338 = INT64_MIN;
	uint64_t x339 = 509LLU;
	uint64_t t78 = 1125LLU;

	t78 = (x337|(x338-(x339/x340)));

	if (t78 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x341 = -1;
	static int64_t x343 = INT64_MIN;
	static volatile int64_t t79 = -28LL;

	t79 = (x341|(x342-(x343/x344)));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x345 = INT64_MIN;
	int64_t x346 = -51868LL;
	volatile int8_t x348 = -1;
	volatile int64_t t80 = 13850930073LL;

	t80 = (x345|(x346-(x347/x348)));

	if (t80 != -51867LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x349 = 5168416U;
	volatile int8_t x350 = -1;
	int64_t x351 = INT64_MAX;
	int8_t x352 = 3;
	volatile int64_t t81 = 211LL;

	t81 = (x349|(x350-(x351/x352)));

	if (t81 != -3074457345617568395LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x353 = 113;
	volatile int16_t x354 = 404;
	int16_t x355 = -1;
	volatile int8_t x356 = INT8_MIN;
	int32_t t82 = -117236;

	t82 = (x353|(x354-(x355/x356)));

	if (t82 != 501) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x357 = 14U;
	int8_t x358 = -1;
	int8_t x359 = INT8_MAX;
	uint16_t x360 = 27U;
	volatile int32_t t83 = 1714;

	t83 = (x357|(x358-(x359/x360)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x362 = 504009799657490700LLU;
	static int16_t x363 = 12528;
	int32_t x364 = INT32_MIN;
	static volatile uint64_t t84 = 1904021LLU;

	t84 = (x361|(x362-(x363/x364)));

	if (t84 != 18446744073709551500LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x365 = UINT32_MAX;
	int64_t x367 = -1094678494945598397LL;
	int64_t t85 = -3938114419196714LL;

	t85 = (x365|(x366-(x367/x368)));

	if (t85 != -4953295588163585LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x371 = INT32_MIN;
	int64_t x372 = -1LL;
	static uint64_t t86 = 7765005981499LLU;

	t86 = (x369|(x370-(x371/x372)));

	if (t86 != 18446744071563064200LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x373 = -1LL;
	static int16_t x376 = INT16_MIN;
	volatile int64_t t87 = 2LL;

	t87 = (x373|(x374-(x375/x376)));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x377 = 1U;
	uint8_t x379 = 0U;
	int64_t x380 = -1LL;
	static volatile int64_t t88 = 2586456977111LL;

	t88 = (x377|(x378-(x379/x380)));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x381 = UINT32_MAX;
	static volatile uint32_t x382 = 1294899U;
	static int32_t x383 = -1;
	volatile uint64_t t89 = 1889046414LLU;

	t89 = (x381|(x382-(x383/x384)));

	if (t89 != 4294967295LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x385 = 367;
	static volatile uint32_t x388 = 4276801U;

	t90 = (x385|(x386-(x387/x388)));

	if (t90 != 2829351886319LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x389 = INT64_MIN;
	static volatile int8_t x390 = -1;
	uint16_t x391 = UINT16_MAX;
	int64_t x392 = INT64_MAX;

	t91 = (x389|(x390-(x391/x392)));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x393 = 454934LL;
	static uint8_t x394 = 51U;
	uint32_t x395 = 223U;
	int64_t t92 = 2334264LL;

	t92 = (x393|(x394-(x395/x396)));

	if (t92 != 454967LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x397 = UINT16_MAX;
	static volatile int32_t x398 = -1;
	volatile int32_t x399 = INT32_MIN;
	uint16_t x400 = 30U;

	t93 = (x397|(x398-(x399/x400)));

	if (t93 != 71630847) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x401 = 946666U;
	int8_t x402 = 3;
	int64_t x404 = INT64_MIN;
	volatile int64_t t94 = 926LL;

	t94 = (x401|(x402-(x403/x404)));

	if (t94 != 946667LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x405 = INT32_MIN;
	uint16_t x406 = 685U;
	uint64_t x407 = UINT64_MAX;
	uint64_t t95 = 71646738LLU;

	t95 = (x405|(x406-(x407/x408)));

	if (t95 != 18446744071562068652LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x409 = 47718287LLU;
	int32_t x410 = INT32_MIN;
	int8_t x411 = INT8_MIN;
	uint16_t x412 = 48U;
	volatile uint64_t t96 = 1LLU;

	t96 = (x409|(x410-(x411/x412)));

	if (t96 != 18446744071609786255LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x413 = -336;
	static int8_t x416 = INT8_MIN;
	int32_t t97 = 16;

	t97 = (x413|(x414-(x415/x416)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x417 = -1;
	static int8_t x418 = 6;
	int8_t x419 = INT8_MIN;
	static int8_t x420 = -1;
	int32_t t98 = 67554594;

	t98 = (x417|(x418-(x419/x420)));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x421 = -1;
	uint8_t x422 = 106U;
	uint64_t x423 = 30LLU;
	static int8_t x424 = INT8_MIN;

	t99 = (x421|(x422-(x423/x424)));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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


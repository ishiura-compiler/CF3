#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x9 = 103533531;
uint8_t x32 = 20U;
int32_t t7 = -2293494;
int64_t x37 = INT64_MIN;
int32_t t12 = -243113;
volatile int8_t x57 = -1;
int32_t x60 = INT32_MIN;
uint16_t x61 = 179U;
int32_t x65 = 90785;
volatile uint16_t x66 = UINT16_MAX;
int64_t x67 = -161LL;
volatile uint64_t x68 = UINT64_MAX;
static int64_t t17 = 12709159223778LL;
int64_t x78 = -303LL;
static int64_t x79 = 18610824LL;
volatile int64_t t19 = 418LL;
static int8_t x89 = 40;
volatile uint64_t x91 = 183022139231704607LLU;
int32_t t22 = 2;
int32_t x95 = -159486;
uint8_t x96 = 2U;
int8_t x102 = INT8_MIN;
uint16_t x107 = 13U;
int32_t t26 = 40810;
int16_t x109 = 13976;
int64_t x110 = INT64_MIN;
volatile int16_t x116 = -1;
static int64_t x120 = -2118216898128435LL;
static int16_t x122 = INT16_MIN;
uint32_t x123 = 84U;
int8_t x124 = INT8_MAX;
static int8_t x143 = 0;
static int64_t x145 = INT64_MAX;
volatile int64_t t36 = -279195LL;
volatile uint64_t x149 = UINT64_MAX;
int16_t x151 = INT16_MAX;
int64_t x155 = INT64_MAX;
int16_t x157 = -1;
volatile int64_t t41 = -25982640471LL;
static uint8_t x169 = 3U;
uint64_t x171 = 9417LLU;
int16_t x172 = -199;
int8_t x178 = INT8_MAX;
static int16_t x186 = INT16_MIN;
uint16_t x188 = 4610U;
int32_t t46 = -31740364;
int32_t x192 = -24789981;
uint32_t x194 = 38302U;
uint32_t x200 = UINT32_MAX;
static int8_t x206 = INT8_MIN;
int16_t x207 = -41;
int32_t x213 = -1144;
int64_t x221 = -213870387LL;
volatile int32_t t55 = -12829;
static int32_t x226 = INT32_MAX;
static int32_t x227 = -6352;
int32_t t56 = 123329926;
volatile int32_t t57 = 79514005;
uint8_t x234 = UINT8_MAX;
volatile int64_t x235 = INT64_MAX;
static int8_t x237 = INT8_MIN;
volatile int64_t x242 = INT64_MAX;
static int32_t t60 = -19;
int32_t t61 = -133732559;
int64_t x249 = INT64_MIN;
volatile int16_t x267 = INT16_MAX;
uint32_t x269 = 1789673069U;
int64_t x275 = INT64_MAX;
int32_t x280 = -6;
volatile uint64_t x281 = 63886806LLU;
volatile int32_t t70 = -25490162;
static int64_t x290 = INT64_MIN;
static uint64_t x291 = 9352446273704LLU;
volatile int32_t t72 = 6124556;
int16_t x299 = INT16_MIN;
int64_t x300 = INT64_MIN;
volatile int64_t t75 = -3727046269076458LL;
uint64_t x330 = 122504113598612373LLU;
volatile uint16_t x332 = 14U;
volatile uint8_t x338 = 14U;
volatile int64_t x347 = 1150939147192145LL;
int64_t t86 = -325666379154358052LL;
volatile int32_t x349 = INT32_MIN;
volatile int8_t x351 = INT8_MIN;
uint8_t x354 = 5U;
static int16_t x356 = INT16_MIN;
static int32_t x362 = INT32_MIN;
static uint32_t x365 = UINT32_MAX;
int64_t x371 = INT64_MAX;
volatile int8_t x372 = 30;
int8_t x377 = -1;
volatile int32_t x379 = INT32_MIN;
int32_t x382 = 6847224;
volatile int16_t x383 = -1;
int16_t x388 = INT16_MIN;
int64_t x392 = INT64_MIN;
static volatile int64_t t97 = -161048290330687LL;
static int64_t x394 = INT64_MIN;
int32_t x397 = INT32_MIN;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static int32_t x2 = -1;
	static int64_t x3 = INT64_MAX;
	int64_t x4 = 3226LL;
	int64_t t0 = 467825407LL;

	t0 = ((x1==(x2==x3))*x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	volatile uint16_t x6 = 318U;
	int8_t x7 = INT8_MIN;
	static uint32_t x8 = 303U;
	volatile uint32_t t1 = 21514U;

	t1 = ((x5==(x6==x7))*x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MIN;
	volatile uint8_t x11 = UINT8_MAX;
	int32_t x12 = INT32_MIN;
	int32_t t2 = -17241;

	t2 = ((x9==(x10==x11))*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -8;
	uint64_t x14 = UINT64_MAX;
	static int8_t x15 = INT8_MIN;
	static int8_t x16 = -1;
	int32_t t3 = 1960126;

	t3 = ((x13==(x14==x15))*x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 188U;
	int32_t x18 = -1;
	volatile uint32_t x19 = 3559U;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = 238373566;

	t4 = ((x17==(x18==x19))*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x21 = 3;
	static int32_t x22 = INT32_MAX;
	static uint16_t x23 = 29075U;
	uint8_t x24 = 60U;
	volatile int32_t t5 = 252129876;

	t5 = ((x21==(x22==x23))*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	uint32_t x26 = UINT32_MAX;
	static int8_t x27 = INT8_MAX;
	int8_t x28 = INT8_MIN;
	int32_t t6 = 0;

	t6 = ((x25==(x26==x27))*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int16_t x30 = INT16_MAX;
	int16_t x31 = -5;

	t7 = ((x29==(x30==x31))*x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 18LL;
	int64_t x34 = INT64_MIN;
	volatile int32_t x35 = -126149;
	int8_t x36 = INT8_MAX;
	volatile int32_t t8 = 61879326;

	t8 = ((x33==(x34==x35))*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = INT16_MIN;
	int32_t x39 = INT32_MIN;
	uint8_t x40 = 49U;
	volatile int32_t t9 = -7;

	t9 = ((x37==(x38==x39))*x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -115;
	static int16_t x42 = INT16_MAX;
	uint16_t x43 = 21586U;
	uint8_t x44 = 0U;
	volatile int32_t t10 = 724;

	t10 = ((x41==(x42==x43))*x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	uint16_t x46 = 1U;
	static uint8_t x47 = UINT8_MAX;
	volatile uint32_t x48 = 684U;
	volatile uint32_t t11 = 29U;

	t11 = ((x45==(x46==x47))*x48);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 2U;
	volatile int16_t x50 = INT16_MAX;
	static volatile uint32_t x51 = 11356U;
	uint16_t x52 = UINT16_MAX;

	t12 = ((x49==(x50==x51))*x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 15U;
	int16_t x54 = INT16_MAX;
	static int32_t x55 = -105;
	uint64_t x56 = 1239341141524699420LLU;
	volatile uint64_t t13 = 79538145LLU;

	t13 = ((x53==(x54==x55))*x56);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x58 = UINT16_MAX;
	int8_t x59 = -4;
	volatile int32_t t14 = -55;

	t14 = ((x57==(x58==x59))*x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x62 = UINT32_MAX;
	volatile int8_t x63 = INT8_MAX;
	static uint16_t x64 = 3951U;
	volatile int32_t t15 = 1;

	t15 = ((x61==(x62==x63))*x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t t16 = 12344928979420532LLU;

	t16 = ((x65==(x66==x67))*x68);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int32_t x70 = INT32_MAX;
	int64_t x71 = INT64_MIN;
	volatile int64_t x72 = INT64_MAX;

	t17 = ((x69==(x70==x71))*x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = INT8_MIN;
	uint32_t x74 = UINT32_MAX;
	uint64_t x75 = 28593305LLU;
	volatile int8_t x76 = -1;
	volatile int32_t t18 = -15375;

	t18 = ((x73==(x74==x75))*x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 8496568553029326115LLU;
	int64_t x80 = -27904354373LL;

	t19 = ((x77==(x78==x79))*x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int32_t x82 = INT32_MIN;
	static int16_t x83 = 11;
	volatile int16_t x84 = -12830;
	volatile int32_t t20 = 477717502;

	t20 = ((x81==(x82==x83))*x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x85 = UINT32_MAX;
	static volatile int32_t x86 = INT32_MIN;
	uint16_t x87 = 311U;
	int64_t x88 = 31LL;
	static volatile int64_t t21 = -70LL;

	t21 = ((x85==(x86==x87))*x88);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x90 = 3653LLU;
	uint8_t x92 = 0U;

	t22 = ((x89==(x90==x91))*x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = 3;
	int16_t x94 = 3;
	static volatile int32_t t23 = 203050235;

	t23 = ((x93==(x94==x95))*x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	int16_t x98 = INT16_MIN;
	uint16_t x99 = UINT16_MAX;
	static int32_t x100 = INT32_MIN;
	volatile int32_t t24 = 85;

	t24 = ((x97==(x98==x99))*x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	uint32_t x103 = 965621U;
	static uint8_t x104 = 1U;
	static int32_t t25 = -466536868;

	t25 = ((x101==(x102==x103))*x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	static uint8_t x106 = UINT8_MAX;
	int16_t x108 = 72;

	t26 = ((x105==(x106==x107))*x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x111 = UINT8_MAX;
	int32_t x112 = 35;
	volatile int32_t t27 = -161;

	t27 = ((x109==(x110==x111))*x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 5695U;
	int32_t x114 = INT32_MIN;
	int64_t x115 = INT64_MAX;
	int32_t t28 = 177010305;

	t28 = ((x113==(x114==x115))*x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	static volatile int16_t x118 = INT16_MIN;
	uint64_t x119 = 54927545LLU;
	int64_t t29 = 2075845LL;

	t29 = ((x117==(x118==x119))*x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 75U;
	int32_t t30 = -1;

	t30 = ((x121==(x122==x123))*x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	int64_t x126 = INT64_MIN;
	int8_t x127 = -1;
	static uint8_t x128 = UINT8_MAX;
	int32_t t31 = 872;

	t31 = ((x125==(x126==x127))*x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 0U;
	volatile int64_t x130 = -1LL;
	int32_t x131 = INT32_MIN;
	static uint16_t x132 = UINT16_MAX;
	static volatile int32_t t32 = 50;

	t32 = ((x129==(x130==x131))*x132);

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -3;
	int16_t x134 = INT16_MAX;
	volatile int64_t x135 = -1LL;
	int8_t x136 = INT8_MAX;
	volatile int32_t t33 = 173280646;

	t33 = ((x133==(x134==x135))*x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = -14;
	int8_t x138 = INT8_MIN;
	volatile int32_t x139 = -1;
	int64_t x140 = -247770702LL;
	int64_t t34 = 9LL;

	t34 = ((x137==(x138==x139))*x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MAX;
	static volatile int8_t x142 = INT8_MIN;
	int64_t x144 = INT64_MIN;
	int64_t t35 = -45787327661LL;

	t35 = ((x141==(x142==x143))*x144);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x146 = 24U;
	static int32_t x147 = INT32_MIN;
	int64_t x148 = INT64_MIN;

	t36 = ((x145==(x146==x147))*x148);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x150 = INT8_MIN;
	uint8_t x152 = 67U;
	volatile int32_t t37 = -247702;

	t37 = ((x149==(x150==x151))*x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 34U;
	int64_t x154 = INT64_MIN;
	volatile uint16_t x156 = UINT16_MAX;
	int32_t t38 = 107;

	t38 = ((x153==(x154==x155))*x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x158 = UINT32_MAX;
	int64_t x159 = 86013026LL;
	int64_t x160 = 59377101LL;
	volatile int64_t t39 = 2227523458651LL;

	t39 = ((x157==(x158==x159))*x160);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 4U;
	int8_t x162 = -3;
	int8_t x163 = 0;
	int32_t x164 = -1;
	int32_t t40 = -2838836;

	t40 = ((x161==(x162==x163))*x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x165 = UINT8_MAX;
	int32_t x166 = -1;
	static int64_t x167 = -1LL;
	int64_t x168 = 8LL;

	t41 = ((x165==(x166==x167))*x168);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x170 = INT8_MAX;
	volatile int32_t t42 = 227;

	t42 = ((x169==(x170==x171))*x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = -1LL;
	volatile int64_t x174 = INT64_MAX;
	volatile int16_t x175 = 1843;
	volatile int16_t x176 = -1;
	int32_t t43 = -183237909;

	t43 = ((x173==(x174==x175))*x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x177 = INT8_MIN;
	int8_t x179 = INT8_MAX;
	int16_t x180 = INT16_MIN;
	int32_t t44 = 62591;

	t44 = ((x177==(x178==x179))*x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	static int32_t x182 = -382;
	int64_t x183 = -1LL;
	int8_t x184 = -1;
	int32_t t45 = -3523;

	t45 = ((x181==(x182==x183))*x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x185 = UINT16_MAX;
	int16_t x187 = 221;

	t46 = ((x185==(x186==x187))*x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = 961;
	uint16_t x190 = UINT16_MAX;
	static int64_t x191 = -1LL;
	volatile int32_t t47 = -1269;

	t47 = ((x189==(x190==x191))*x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x193 = INT8_MAX;
	volatile int64_t x195 = INT64_MAX;
	int8_t x196 = -1;
	volatile int32_t t48 = -1;

	t48 = ((x193==(x194==x195))*x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = UINT8_MAX;
	static int32_t x198 = INT32_MIN;
	int16_t x199 = INT16_MAX;
	volatile uint32_t t49 = 14U;

	t49 = ((x197==(x198==x199))*x200);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x201 = UINT8_MAX;
	static int32_t x202 = INT32_MIN;
	int32_t x203 = -1;
	int64_t x204 = -1LL;
	int64_t t50 = -4737222719765494LL;

	t50 = ((x201==(x202==x203))*x204);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MAX;
	int32_t x208 = INT32_MIN;
	static int32_t t51 = -190824005;

	t51 = ((x205==(x206==x207))*x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	uint64_t x210 = 18832812477LLU;
	int8_t x211 = INT8_MIN;
	int8_t x212 = 0;
	volatile int32_t t52 = 437697;

	t52 = ((x209==(x210==x211))*x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x214 = 2;
	uint16_t x215 = UINT16_MAX;
	volatile uint8_t x216 = 20U;
	int32_t t53 = 3963101;

	t53 = ((x213==(x214==x215))*x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MAX;
	volatile uint8_t x218 = 41U;
	volatile int16_t x219 = -8876;
	static int16_t x220 = INT16_MIN;
	int32_t t54 = -4419475;

	t54 = ((x217==(x218==x219))*x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x222 = 40228LLU;
	int8_t x223 = INT8_MIN;
	int8_t x224 = -13;

	t55 = ((x221==(x222==x223))*x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 0U;
	int32_t x228 = -4594214;

	t56 = ((x225==(x226==x227))*x228);

	if (t56 != -4594214) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 562425456LLU;
	int32_t x230 = 45;
	uint64_t x231 = UINT64_MAX;
	uint16_t x232 = UINT16_MAX;

	t57 = ((x229==(x230==x231))*x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	int32_t x236 = INT32_MIN;
	int32_t t58 = -241;

	t58 = ((x233==(x234==x235))*x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x238 = UINT16_MAX;
	int8_t x239 = INT8_MAX;
	static uint16_t x240 = 959U;
	static volatile int32_t t59 = -125;

	t59 = ((x237==(x238==x239))*x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	uint32_t x243 = 594U;
	int32_t x244 = INT32_MIN;

	t60 = ((x241==(x242==x243))*x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = 7916LL;
	static int64_t x246 = INT64_MIN;
	static int8_t x247 = INT8_MAX;
	static int16_t x248 = INT16_MAX;

	t61 = ((x245==(x246==x247))*x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x250 = 547843U;
	int32_t x251 = INT32_MIN;
	uint64_t x252 = 13502LLU;
	uint64_t t62 = 407894993373744LLU;

	t62 = ((x249==(x250==x251))*x252);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	static int16_t x254 = -1;
	static int8_t x255 = INT8_MIN;
	int8_t x256 = INT8_MIN;
	static volatile int32_t t63 = -1;

	t63 = ((x253==(x254==x255))*x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	uint64_t x258 = 9405501LLU;
	static uint64_t x259 = 256834LLU;
	static uint8_t x260 = UINT8_MAX;
	static int32_t t64 = 3981;

	t64 = ((x257==(x258==x259))*x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	volatile int8_t x262 = INT8_MIN;
	int16_t x263 = -1;
	static uint32_t x264 = UINT32_MAX;
	static volatile uint32_t t65 = 35U;

	t65 = ((x261==(x262==x263))*x264);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = 1;
	int16_t x266 = INT16_MAX;
	int16_t x268 = INT16_MIN;
	int32_t t66 = -24429037;

	t66 = ((x265==(x266==x267))*x268);

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x270 = 1753381U;
	int32_t x271 = -1;
	int32_t x272 = INT32_MAX;
	volatile int32_t t67 = 622128;

	t67 = ((x269==(x270==x271))*x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x273 = 6433U;
	int16_t x274 = -1;
	static int64_t x276 = INT64_MIN;
	int64_t t68 = -3LL;

	t68 = ((x273==(x274==x275))*x276);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MAX;
	int8_t x278 = 1;
	uint32_t x279 = 22705030U;
	int32_t t69 = -105706531;

	t69 = ((x277==(x278==x279))*x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x282 = INT32_MAX;
	uint32_t x283 = 268982242U;
	uint8_t x284 = 2U;

	t70 = ((x281==(x282==x283))*x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -1;
	int16_t x286 = -6568;
	int64_t x287 = INT64_MAX;
	uint16_t x288 = 2U;
	volatile int32_t t71 = 469543;

	t71 = ((x285==(x286==x287))*x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	uint8_t x292 = 0U;

	t72 = ((x289==(x290==x291))*x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = 0;
	uint64_t x294 = 764231532332701LLU;
	volatile int16_t x295 = 1008;
	int64_t x296 = 1908323355853296LL;
	int64_t t73 = 11997150598LL;

	t73 = ((x293==(x294==x295))*x296);

	if (t73 != 1908323355853296LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	static volatile int16_t x298 = 3;
	int64_t t74 = -23920989LL;

	t74 = ((x297==(x298==x299))*x300);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	int8_t x302 = INT8_MIN;
	int8_t x303 = INT8_MIN;
	int64_t x304 = 13013993LL;

	t75 = ((x301==(x302==x303))*x304);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1;
	volatile int16_t x306 = INT16_MIN;
	static int8_t x307 = INT8_MAX;
	uint32_t x308 = 3609U;
	volatile uint32_t t76 = 49U;

	t76 = ((x305==(x306==x307))*x308);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x309 = 3947U;
	volatile int64_t x310 = -1LL;
	int64_t x311 = INT64_MIN;
	int64_t x312 = 526LL;
	volatile int64_t t77 = -9065079303627LL;

	t77 = ((x309==(x310==x311))*x312);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x313 = INT32_MIN;
	int16_t x314 = INT16_MIN;
	uint32_t x315 = 8586388U;
	volatile int8_t x316 = INT8_MAX;
	int32_t t78 = 12;

	t78 = ((x313==(x314==x315))*x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 12LLU;
	int8_t x318 = INT8_MIN;
	uint16_t x319 = 6749U;
	volatile uint32_t x320 = 328144645U;
	static uint32_t t79 = 517249918U;

	t79 = ((x317==(x318==x319))*x320);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = 0;
	int32_t x322 = INT32_MAX;
	volatile int64_t x323 = -850961076LL;
	uint64_t x324 = UINT64_MAX;
	uint64_t t80 = UINT64_MAX;

	t80 = ((x321==(x322==x323))*x324);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x325 = 472;
	uint8_t x326 = 58U;
	volatile uint16_t x327 = 784U;
	int16_t x328 = INT16_MIN;
	volatile int32_t t81 = -98501970;

	t81 = ((x325==(x326==x327))*x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x329 = UINT8_MAX;
	static volatile int16_t x331 = 41;
	static volatile int32_t t82 = 445357134;

	t82 = ((x329==(x330==x331))*x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x333 = UINT8_MAX;
	int16_t x334 = -1;
	uint32_t x335 = 25U;
	int32_t x336 = -1;
	int32_t t83 = -11006982;

	t83 = ((x333==(x334==x335))*x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MAX;
	int16_t x339 = INT16_MIN;
	int8_t x340 = -1;
	volatile int32_t t84 = -309;

	t84 = ((x337==(x338==x339))*x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 5U;
	uint64_t x342 = 135164LLU;
	int64_t x343 = INT64_MIN;
	int8_t x344 = INT8_MIN;
	volatile int32_t t85 = 4365358;

	t85 = ((x341==(x342==x343))*x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = INT64_MIN;
	uint16_t x346 = 844U;
	int64_t x348 = -21847768885834294LL;

	t86 = ((x345==(x346==x347))*x348);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x350 = INT32_MIN;
	volatile uint16_t x352 = 66U;
	int32_t t87 = 0;

	t87 = ((x349==(x350==x351))*x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = 0;
	uint16_t x355 = UINT16_MAX;
	int32_t t88 = -16486;

	t88 = ((x353==(x354==x355))*x356);

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 57847907LLU;
	volatile int16_t x358 = -9711;
	int32_t x359 = 0;
	uint64_t x360 = UINT64_MAX;
	uint64_t t89 = 427LLU;

	t89 = ((x357==(x358==x359))*x360);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x361 = 1965U;
	int16_t x363 = -1;
	int8_t x364 = -1;
	static volatile int32_t t90 = 2;

	t90 = ((x361==(x362==x363))*x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x366 = 7U;
	volatile uint8_t x367 = 6U;
	uint16_t x368 = 15158U;
	volatile int32_t t91 = -2936;

	t91 = ((x365==(x366==x367))*x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x369 = 103LLU;
	uint32_t x370 = 15508U;
	volatile int32_t t92 = 9958;

	t92 = ((x369==(x370==x371))*x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -1;
	volatile int64_t x374 = -1LL;
	volatile int64_t x375 = INT64_MIN;
	static volatile int32_t x376 = -895;
	int32_t t93 = -25727485;

	t93 = ((x373==(x374==x375))*x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x378 = 976;
	static volatile int8_t x380 = INT8_MAX;
	volatile int32_t t94 = -15;

	t94 = ((x377==(x378==x379))*x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x381 = INT64_MIN;
	int16_t x384 = -1;
	static int32_t t95 = -16623;

	t95 = ((x381==(x382==x383))*x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MIN;
	volatile int64_t x386 = INT64_MAX;
	int32_t x387 = -1;
	int32_t t96 = 3;

	t96 = ((x385==(x386==x387))*x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -1LL;
	static volatile uint64_t x390 = UINT64_MAX;
	uint8_t x391 = 45U;

	t97 = ((x389==(x390==x391))*x392);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = INT64_MIN;
	static int64_t x395 = 4155935LL;
	uint16_t x396 = UINT16_MAX;
	static int32_t t98 = 2029609;

	t98 = ((x393==(x394==x395))*x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x398 = INT16_MIN;
	int64_t x399 = -131698769806579LL;
	static int16_t x400 = INT16_MIN;
	volatile int32_t t99 = -798;

	t99 = ((x397==(x398==x399))*x400);

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


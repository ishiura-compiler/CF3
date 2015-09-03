#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = -1;
volatile uint8_t x4 = 16U;
int32_t t0 = -226170350;
volatile int32_t t2 = 4987;
volatile int16_t x18 = -2;
volatile uint16_t x20 = UINT16_MAX;
volatile int32_t t4 = 131096167;
int8_t x30 = INT8_MIN;
volatile int32_t t6 = 5394133;
volatile int32_t t7 = 1;
static volatile int8_t x45 = 1;
int32_t x47 = 168535138;
volatile int32_t t10 = 833;
volatile int16_t x61 = 14136;
uint32_t x64 = 65U;
volatile int32_t t12 = -55796;
int32_t x72 = -1;
uint64_t x75 = 252LLU;
static uint32_t x78 = 46U;
static uint32_t x84 = 5238823U;
int16_t x94 = INT16_MIN;
int64_t x95 = -1LL;
uint64_t x98 = 8870430833084070LLU;
uint16_t x107 = 5U;
volatile uint16_t x109 = UINT16_MAX;
static volatile int32_t t22 = 252;
int8_t x113 = INT8_MIN;
int64_t x125 = INT64_MIN;
int64_t x126 = -1LL;
uint32_t x129 = UINT32_MAX;
volatile int32_t t27 = -104220912;
static int64_t x137 = -70LL;
static volatile int32_t x139 = INT32_MIN;
int32_t t29 = 80;
volatile uint8_t x142 = 110U;
int16_t x144 = -1;
static uint64_t x149 = 0LLU;
static volatile int32_t t33 = -9314;
static int8_t x165 = -1;
volatile uint8_t x167 = 66U;
int8_t x168 = -44;
static int16_t x171 = -391;
int32_t t37 = 526987092;
static int32_t t38 = 2433373;
volatile int32_t x191 = INT32_MIN;
int32_t t42 = 672;
int32_t x208 = 619;
uint64_t x209 = UINT64_MAX;
int16_t x222 = 2514;
int32_t x225 = INT32_MIN;
volatile int32_t t52 = 1;
volatile int32_t x237 = 3544470;
int8_t x242 = 1;
uint64_t x247 = 5326LLU;
int32_t t55 = -378371;
volatile uint64_t x250 = 2LLU;
volatile int64_t x254 = -1385955884071610LL;
int32_t x255 = INT32_MIN;
volatile uint16_t x260 = UINT16_MAX;
int8_t x262 = INT8_MIN;
uint32_t x272 = 1597355U;
int16_t x274 = -15;
static int8_t x276 = -1;
volatile int8_t x285 = -24;
volatile int32_t x288 = INT32_MIN;
int64_t x289 = -731LL;
static volatile uint32_t x298 = UINT32_MAX;
int64_t x326 = -1786359809474LL;
static int32_t x331 = 5496;
static uint64_t x332 = 32457463796LLU;
int16_t x345 = INT16_MIN;
static int32_t x347 = INT32_MAX;
int32_t t78 = -5207;
int32_t x354 = -1;
static uint32_t x356 = UINT32_MAX;
int8_t x360 = 1;
int32_t t80 = -967183581;
int32_t x361 = 10;
int16_t x365 = 367;
static volatile uint32_t x367 = UINT32_MAX;
int16_t x375 = -1628;
uint16_t x379 = 634U;
volatile int32_t t85 = -11;
volatile uint32_t x382 = 23560371U;
volatile int16_t x387 = INT16_MAX;
int32_t x394 = 324;
int32_t x395 = -1;
int32_t t90 = 60847;
uint32_t x407 = 29112U;
int32_t t93 = 26208;
int8_t x414 = -1;
int32_t t94 = 50140;
int32_t x432 = 5025;
static int16_t x434 = INT16_MIN;
volatile uint32_t x435 = 1309735U;
uint64_t x436 = 745442307666LLU;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	int64_t x2 = INT64_MIN;

	t0 = (x1==((x2-x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x5 = INT32_MIN;
	uint16_t x6 = 9986U;
	uint8_t x7 = UINT8_MAX;
	volatile uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = -2;

	t1 = (x5==((x6-x7)&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x13 = 22U;
	volatile uint8_t x14 = 12U;
	uint8_t x15 = 1U;
	static int64_t x16 = INT64_MIN;

	t2 = (x13==((x14-x15)&x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MAX;
	volatile uint32_t x19 = UINT32_MAX;
	int32_t t3 = 0;

	t3 = (x17==((x18-x19)&x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 10U;
	int32_t x22 = INT32_MIN;
	int8_t x23 = -1;
	uint16_t x24 = 0U;

	t4 = (x21==((x22-x23)&x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = INT64_MIN;
	volatile uint16_t x31 = 147U;
	volatile int32_t x32 = -1;
	int32_t t5 = -251367;

	t5 = (x29==((x30-x31)&x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x33 = -8137099165LL;
	uint16_t x34 = UINT16_MAX;
	int16_t x35 = -1;
	uint32_t x36 = 630U;

	t6 = (x33==((x34-x35)&x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x37 = 42931901816LLU;
	uint16_t x38 = 1370U;
	volatile uint16_t x39 = 1672U;
	static uint16_t x40 = UINT16_MAX;

	t7 = (x37==((x38-x39)&x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = INT8_MAX;
	static int16_t x42 = INT16_MIN;
	uint64_t x43 = 196232667849162LLU;
	int64_t x44 = -1LL;
	static int32_t t8 = -19072923;

	t8 = (x41==((x42-x43)&x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint16_t x46 = 1U;
	uint16_t x48 = 21U;
	int32_t t9 = -3;

	t9 = (x45==((x46-x47)&x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x53 = -1;
	static int64_t x54 = 16680235634298544LL;
	int8_t x55 = INT8_MIN;
	int16_t x56 = INT16_MIN;

	t10 = (x53==((x54-x55)&x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x62 = 106U;
	uint16_t x63 = 10U;
	static int32_t t11 = 9701;

	t11 = (x61==((x62-x63)&x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x65 = INT16_MIN;
	uint16_t x66 = UINT16_MAX;
	static uint16_t x67 = 54U;
	static uint16_t x68 = 12664U;

	t12 = (x65==((x66-x67)&x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = -1LL;
	int32_t x70 = -1;
	int16_t x71 = INT16_MAX;
	volatile int32_t t13 = 221394;

	t13 = (x69==((x70-x71)&x72));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = INT64_MIN;
	int16_t x74 = INT16_MIN;
	int64_t x76 = 0LL;
	volatile int32_t t14 = 22874;

	t14 = (x73==((x74-x75)&x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = INT8_MIN;
	int64_t x79 = INT64_MAX;
	uint8_t x80 = 1U;
	int32_t t15 = -1513;

	t15 = (x77==((x78-x79)&x80));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x81 = -1;
	int16_t x82 = INT16_MIN;
	int64_t x83 = -1LL;
	int32_t t16 = 753739021;

	t16 = (x81==((x82-x83)&x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x89 = INT8_MAX;
	uint32_t x90 = UINT32_MAX;
	volatile int64_t x91 = INT64_MAX;
	int8_t x92 = -1;
	volatile int32_t t17 = -2078809;

	t17 = (x89==((x90-x91)&x92));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x93 = 418774050106116LLU;
	int16_t x96 = INT16_MIN;
	volatile int32_t t18 = -61441;

	t18 = (x93==((x94-x95)&x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x97 = -7544LL;
	int16_t x99 = INT16_MIN;
	static int64_t x100 = INT64_MIN;
	volatile int32_t t19 = 646049700;

	t19 = (x97==((x98-x99)&x100));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x101 = INT32_MIN;
	static int64_t x102 = INT64_MIN;
	int32_t x103 = INT32_MIN;
	static uint32_t x104 = UINT32_MAX;
	static volatile int32_t t20 = 8272;

	t20 = (x101==((x102-x103)&x104));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x105 = -1;
	volatile int16_t x106 = -95;
	static int8_t x108 = -1;
	volatile int32_t t21 = -203001;

	t21 = (x105==((x106-x107)&x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x110 = UINT32_MAX;
	int16_t x111 = 7479;
	int16_t x112 = -1;

	t22 = (x109==((x110-x111)&x112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x114 = INT32_MIN;
	int64_t x115 = INT64_MIN;
	static volatile int64_t x116 = 19599490LL;
	int32_t t23 = 1701;

	t23 = (x113==((x114-x115)&x116));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x117 = -1;
	uint32_t x118 = UINT32_MAX;
	int16_t x119 = INT16_MAX;
	int8_t x120 = -12;
	volatile int32_t t24 = -729080264;

	t24 = (x117==((x118-x119)&x120));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = 1;
	static uint8_t x122 = 27U;
	int64_t x123 = -1LL;
	int8_t x124 = INT8_MAX;
	volatile int32_t t25 = 42774;

	t25 = (x121==((x122-x123)&x124));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x127 = 2223;
	int32_t x128 = -11704;
	volatile int32_t t26 = -384686403;

	t26 = (x125==((x126-x127)&x128));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x130 = INT16_MIN;
	int8_t x131 = INT8_MIN;
	volatile uint32_t x132 = 13U;

	t27 = (x129==((x130-x131)&x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x133 = UINT8_MAX;
	int64_t x134 = INT64_MIN;
	int8_t x135 = -1;
	static int8_t x136 = INT8_MIN;
	volatile int32_t t28 = -62;

	t28 = (x133==((x134-x135)&x136));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x138 = -8998;
	int16_t x140 = INT16_MIN;

	t29 = (x137==((x138-x139)&x140));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x141 = INT8_MIN;
	int8_t x143 = INT8_MIN;
	volatile int32_t t30 = 1;

	t30 = (x141==((x142-x143)&x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x145 = -3682269934LL;
	int32_t x146 = INT32_MAX;
	static volatile int64_t x147 = -2LL;
	uint32_t x148 = 26832U;
	static int32_t t31 = 56407;

	t31 = (x145==((x146-x147)&x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x150 = UINT8_MAX;
	uint32_t x151 = UINT32_MAX;
	int32_t x152 = INT32_MIN;
	volatile int32_t t32 = -681;

	t32 = (x149==((x150-x151)&x152));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = -1;
	int64_t x154 = INT64_MIN;
	int32_t x155 = INT32_MIN;
	uint8_t x156 = 1U;

	t33 = (x153==((x154-x155)&x156));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = 5455387706464LL;
	static int8_t x158 = -1;
	int16_t x159 = INT16_MAX;
	int8_t x160 = INT8_MIN;
	static volatile int32_t t34 = -3340859;

	t34 = (x157==((x158-x159)&x160));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x161 = 10;
	int64_t x162 = -2031LL;
	static volatile int64_t x163 = 145470LL;
	static volatile int64_t x164 = 8641961618061LL;
	int32_t t35 = 111134188;

	t35 = (x161==((x162-x163)&x164));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x166 = INT8_MAX;
	static int32_t t36 = 96860;

	t36 = (x165==((x166-x167)&x168));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x169 = -1;
	int16_t x170 = INT16_MIN;
	static uint16_t x172 = UINT16_MAX;

	t37 = (x169==((x170-x171)&x172));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x173 = INT64_MIN;
	uint64_t x174 = UINT64_MAX;
	static int16_t x175 = 2;
	int64_t x176 = INT64_MIN;

	t38 = (x173==((x174-x175)&x176));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = -1LL;
	int16_t x178 = 50;
	int8_t x179 = INT8_MIN;
	int8_t x180 = -1;
	volatile int32_t t39 = 0;

	t39 = (x177==((x178-x179)&x180));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = -1;
	static int8_t x182 = INT8_MIN;
	uint32_t x183 = 2U;
	static uint64_t x184 = UINT64_MAX;
	int32_t t40 = -34370;

	t40 = (x181==((x182-x183)&x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x185 = INT16_MIN;
	int32_t x186 = INT32_MAX;
	int8_t x187 = 6;
	int8_t x188 = INT8_MIN;
	static volatile int32_t t41 = -40622;

	t41 = (x185==((x186-x187)&x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = -1;
	int64_t x190 = INT64_MIN;
	volatile int64_t x192 = 1783913118464LL;

	t42 = (x189==((x190-x191)&x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x193 = INT16_MIN;
	uint16_t x194 = UINT16_MAX;
	int64_t x195 = -1LL;
	static int64_t x196 = 103873LL;
	volatile int32_t t43 = -102136;

	t43 = (x193==((x194-x195)&x196));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x197 = -2;
	int16_t x198 = -145;
	int16_t x199 = 4705;
	static int8_t x200 = -44;
	static int32_t t44 = -102;

	t44 = (x197==((x198-x199)&x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x201 = UINT16_MAX;
	int16_t x202 = 0;
	uint64_t x203 = 44275975034LLU;
	uint16_t x204 = 175U;
	int32_t t45 = -2571;

	t45 = (x201==((x202-x203)&x204));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = INT16_MIN;
	static volatile int8_t x206 = INT8_MAX;
	static uint32_t x207 = 1894U;
	volatile int32_t t46 = 155159448;

	t46 = (x205==((x206-x207)&x208));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x210 = UINT16_MAX;
	static volatile int8_t x211 = -5;
	static int32_t x212 = INT32_MIN;
	int32_t t47 = -203213;

	t47 = (x209==((x210-x211)&x212));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x217 = 367840013U;
	volatile int16_t x218 = INT16_MAX;
	int32_t x219 = 5690;
	int16_t x220 = -1;
	int32_t t48 = 186382927;

	t48 = (x217==((x218-x219)&x220));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x221 = 3092637LL;
	uint16_t x223 = 1022U;
	uint32_t x224 = 6U;
	volatile int32_t t49 = -3751;

	t49 = (x221==((x222-x223)&x224));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x226 = -1;
	int16_t x227 = -5;
	volatile int16_t x228 = -1;
	int32_t t50 = 289;

	t50 = (x225==((x226-x227)&x228));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x229 = INT32_MIN;
	volatile int16_t x230 = INT16_MAX;
	uint16_t x231 = UINT16_MAX;
	uint32_t x232 = 1943663307U;
	int32_t t51 = 31;

	t51 = (x229==((x230-x231)&x232));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x233 = UINT64_MAX;
	int64_t x234 = -1LL;
	int16_t x235 = INT16_MAX;
	int8_t x236 = -1;

	t52 = (x233==((x234-x235)&x236));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x238 = -1;
	volatile int32_t x239 = INT32_MAX;
	int64_t x240 = -4372267179546222494LL;
	volatile int32_t t53 = -11646649;

	t53 = (x237==((x238-x239)&x240));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x241 = -1;
	int8_t x243 = -1;
	int32_t x244 = INT32_MIN;
	int32_t t54 = -277712;

	t54 = (x241==((x242-x243)&x244));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x245 = INT32_MIN;
	uint16_t x246 = UINT16_MAX;
	uint16_t x248 = UINT16_MAX;

	t55 = (x245==((x246-x247)&x248));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x249 = 46825993038667124LL;
	int8_t x251 = INT8_MIN;
	uint64_t x252 = UINT64_MAX;
	static int32_t t56 = 19239974;

	t56 = (x249==((x250-x251)&x252));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x253 = INT32_MIN;
	uint16_t x256 = 1U;
	static int32_t t57 = 97813184;

	t57 = (x253==((x254-x255)&x256));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x257 = -1;
	int64_t x258 = 3835LL;
	volatile uint8_t x259 = UINT8_MAX;
	volatile int32_t t58 = -55;

	t58 = (x257==((x258-x259)&x260));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x261 = UINT32_MAX;
	uint16_t x263 = 7U;
	int8_t x264 = 0;
	int32_t t59 = -1380;

	t59 = (x261==((x262-x263)&x264));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x265 = UINT32_MAX;
	volatile int64_t x266 = -1LL;
	uint16_t x267 = UINT16_MAX;
	volatile int16_t x268 = INT16_MAX;
	int32_t t60 = -27922;

	t60 = (x265==((x266-x267)&x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x269 = INT8_MIN;
	static uint64_t x270 = UINT64_MAX;
	static int16_t x271 = -1;
	volatile int32_t t61 = -1766;

	t61 = (x269==((x270-x271)&x272));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x273 = INT16_MAX;
	int32_t x275 = -1;
	static volatile int32_t t62 = -127;

	t62 = (x273==((x274-x275)&x276));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x277 = -15;
	static uint64_t x278 = 9521320LLU;
	uint16_t x279 = UINT16_MAX;
	int64_t x280 = -1LL;
	volatile int32_t t63 = -10;

	t63 = (x277==((x278-x279)&x280));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x281 = INT32_MAX;
	uint32_t x282 = 1U;
	int16_t x283 = INT16_MIN;
	int32_t x284 = -1;
	volatile int32_t t64 = -1459;

	t64 = (x281==((x282-x283)&x284));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x286 = -1;
	int8_t x287 = 1;
	int32_t t65 = 78603;

	t65 = (x285==((x286-x287)&x288));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x290 = INT32_MAX;
	static uint32_t x291 = 55U;
	int8_t x292 = INT8_MAX;
	static volatile int32_t t66 = 17766027;

	t66 = (x289==((x290-x291)&x292));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x293 = -12;
	static int8_t x294 = -2;
	int8_t x295 = INT8_MIN;
	static int16_t x296 = INT16_MIN;
	int32_t t67 = 7;

	t67 = (x293==((x294-x295)&x296));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x297 = -1LL;
	static uint64_t x299 = 957LLU;
	volatile int64_t x300 = INT64_MIN;
	int32_t t68 = 1;

	t68 = (x297==((x298-x299)&x300));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x305 = INT8_MAX;
	static int32_t x306 = INT32_MAX;
	uint64_t x307 = UINT64_MAX;
	int8_t x308 = INT8_MAX;
	int32_t t69 = -41302;

	t69 = (x305==((x306-x307)&x308));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x309 = 114U;
	static uint64_t x310 = 155852414743990190LLU;
	uint16_t x311 = UINT16_MAX;
	int8_t x312 = -1;
	static int32_t t70 = 139196223;

	t70 = (x309==((x310-x311)&x312));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x313 = 16554331234764409LLU;
	volatile int16_t x314 = INT16_MIN;
	static int16_t x315 = INT16_MIN;
	uint32_t x316 = 112558U;
	static volatile int32_t t71 = -110174;

	t71 = (x313==((x314-x315)&x316));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x317 = INT16_MIN;
	uint32_t x318 = 1U;
	int64_t x319 = 712698615LL;
	int16_t x320 = -1;
	static volatile int32_t t72 = 69947;

	t72 = (x317==((x318-x319)&x320));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x321 = INT16_MAX;
	int16_t x322 = -4035;
	static volatile int8_t x323 = 7;
	uint32_t x324 = 5400885U;
	static volatile int32_t t73 = -22021159;

	t73 = (x321==((x322-x323)&x324));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x325 = -6LL;
	int16_t x327 = INT16_MIN;
	int16_t x328 = -1;
	int32_t t74 = 8011887;

	t74 = (x325==((x326-x327)&x328));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x329 = INT8_MIN;
	uint16_t x330 = 18963U;
	int32_t t75 = 79;

	t75 = (x329==((x330-x331)&x332));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x333 = INT32_MIN;
	int32_t x334 = INT32_MIN;
	static int16_t x335 = INT16_MIN;
	volatile uint32_t x336 = UINT32_MAX;
	int32_t t76 = 511;

	t76 = (x333==((x334-x335)&x336));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x346 = -1;
	int16_t x348 = 0;
	static volatile int32_t t77 = 5;

	t77 = (x345==((x346-x347)&x348));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x349 = INT32_MIN;
	uint16_t x350 = UINT16_MAX;
	volatile uint8_t x351 = 32U;
	static uint32_t x352 = 38514777U;

	t78 = (x349==((x350-x351)&x352));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x353 = 29LLU;
	int64_t x355 = 42851369171502319LL;
	volatile int32_t t79 = 6824;

	t79 = (x353==((x354-x355)&x356));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x357 = -1;
	static uint64_t x358 = 24835256359866LLU;
	int16_t x359 = INT16_MIN;

	t80 = (x357==((x358-x359)&x360));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x362 = -1;
	int8_t x363 = -1;
	static int32_t x364 = -1;
	static volatile int32_t t81 = 0;

	t81 = (x361==((x362-x363)&x364));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x366 = 3U;
	uint32_t x368 = 906544U;
	static volatile int32_t t82 = -757;

	t82 = (x365==((x366-x367)&x368));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x369 = 1U;
	volatile int64_t x370 = -31LL;
	volatile int8_t x371 = INT8_MIN;
	uint32_t x372 = 331U;
	volatile int32_t t83 = -29318550;

	t83 = (x369==((x370-x371)&x372));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x373 = INT8_MIN;
	int32_t x374 = -1;
	int16_t x376 = INT16_MIN;
	int32_t t84 = -368;

	t84 = (x373==((x374-x375)&x376));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x377 = UINT64_MAX;
	int16_t x378 = 129;
	uint8_t x380 = 0U;

	t85 = (x377==((x378-x379)&x380));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x381 = 3LL;
	uint64_t x383 = 473LLU;
	uint64_t x384 = UINT64_MAX;
	volatile int32_t t86 = 15;

	t86 = (x381==((x382-x383)&x384));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x385 = INT8_MAX;
	volatile uint32_t x386 = UINT32_MAX;
	uint64_t x388 = 109331874126338195LLU;
	static int32_t t87 = -1485;

	t87 = (x385==((x386-x387)&x388));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x389 = 163787;
	static int8_t x390 = 6;
	uint16_t x391 = 27636U;
	static volatile uint32_t x392 = 24398327U;
	static volatile int32_t t88 = 1;

	t88 = (x389==((x390-x391)&x392));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x393 = UINT8_MAX;
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t89 = 4366;

	t89 = (x393==((x394-x395)&x396));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x397 = UINT32_MAX;
	uint16_t x398 = 100U;
	uint8_t x399 = 31U;
	int32_t x400 = INT32_MAX;

	t90 = (x397==((x398-x399)&x400));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x401 = 776388404;
	volatile int32_t x402 = -92008;
	int32_t x403 = INT32_MIN;
	uint8_t x404 = UINT8_MAX;
	static volatile int32_t t91 = 7810;

	t91 = (x401==((x402-x403)&x404));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x405 = UINT64_MAX;
	int32_t x406 = -8;
	volatile int64_t x408 = 30474119903257255LL;
	volatile int32_t t92 = 719043;

	t92 = (x405==((x406-x407)&x408));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x409 = -841;
	volatile int16_t x410 = INT16_MIN;
	static int32_t x411 = 6;
	int32_t x412 = -7;

	t93 = (x409==((x410-x411)&x412));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x413 = 15;
	static int64_t x415 = INT64_MIN;
	volatile int8_t x416 = INT8_MAX;

	t94 = (x413==((x414-x415)&x416));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x417 = INT8_MAX;
	static volatile int16_t x418 = -1027;
	int16_t x419 = INT16_MAX;
	volatile int8_t x420 = INT8_MIN;
	int32_t t95 = 2035;

	t95 = (x417==((x418-x419)&x420));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x421 = -1;
	volatile int8_t x422 = -16;
	int16_t x423 = -1;
	int8_t x424 = -25;
	volatile int32_t t96 = 6;

	t96 = (x421==((x422-x423)&x424));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x425 = -1LL;
	static int32_t x426 = 4003;
	volatile int16_t x427 = INT16_MIN;
	uint16_t x428 = 155U;
	int32_t t97 = -108;

	t97 = (x425==((x426-x427)&x428));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x429 = INT32_MAX;
	int16_t x430 = -2;
	int8_t x431 = INT8_MAX;
	volatile int32_t t98 = 0;

	t98 = (x429==((x430-x431)&x432));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x433 = -1;
	int32_t t99 = 1530824;

	t99 = (x433==((x434-x435)&x436));

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


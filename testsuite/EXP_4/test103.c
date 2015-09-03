#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 0;
int8_t x8 = INT8_MIN;
volatile int32_t x11 = INT32_MIN;
static volatile uint16_t x14 = UINT16_MAX;
volatile int32_t x18 = -86;
int64_t x29 = INT64_MAX;
int64_t x30 = 3304LL;
static volatile int64_t x41 = INT64_MIN;
volatile uint32_t x46 = 14517041U;
volatile uint16_t x54 = 52U;
static uint16_t x58 = UINT16_MAX;
uint32_t x59 = UINT32_MAX;
int32_t t17 = 61;
int32_t x79 = -1;
int64_t x81 = -7714330902573LL;
int16_t x82 = 688;
volatile int64_t x89 = INT64_MIN;
int32_t x94 = -98;
static int32_t x95 = -20;
volatile int8_t x99 = INT8_MAX;
static int32_t t22 = INT32_MIN;
int8_t x103 = -1;
volatile int64_t t23 = INT64_MIN;
static int64_t x107 = 49835190381LL;
int64_t x108 = -128270233369218563LL;
uint16_t x122 = UINT16_MAX;
volatile uint8_t x133 = UINT8_MAX;
int8_t x134 = -61;
int32_t x136 = INT32_MIN;
volatile int32_t t28 = 0;
static uint16_t x137 = 23U;
uint32_t x142 = 1469442U;
static int64_t t30 = 138306LL;
int16_t x148 = 222;
int64_t x150 = 1866683738226873618LL;
uint64_t x171 = 5813683428676934LLU;
int32_t x172 = -1;
int8_t x175 = INT8_MIN;
int16_t x179 = -7;
static int16_t x182 = 0;
int32_t t41 = 515718;
int16_t x191 = -6939;
uint8_t x204 = 13U;
static int32_t t43 = -1109319;
static volatile int32_t t44 = INT32_MIN;
volatile int8_t x219 = INT8_MIN;
volatile uint64_t x220 = 1LLU;
volatile int32_t t48 = -8347;
int64_t x229 = 120959LL;
uint8_t x240 = 2U;
uint64_t x243 = 4LLU;
uint8_t x244 = 1U;
int32_t x250 = 388;
volatile int64_t x252 = -14991LL;
uint32_t x260 = UINT32_MAX;
int32_t t56 = 55581244;
int32_t x275 = -1344003;
volatile uint32_t x278 = 3U;
volatile int32_t t60 = 148;
static volatile uint64_t t61 = UINT64_MAX;
static uint8_t x291 = UINT8_MAX;
int8_t x293 = INT8_MIN;
static uint32_t x300 = 5162U;
uint16_t x302 = 4206U;
int8_t x303 = 0;
int16_t x304 = INT16_MIN;
int32_t t66 = INT32_MIN;
uint16_t x305 = 2U;
int64_t t68 = -3789851049807400LL;
int8_t x314 = INT8_MIN;
static uint16_t x316 = 20992U;
static volatile int32_t t69 = INT32_MIN;
int32_t x318 = -1;
int64_t x323 = -1LL;
static volatile int32_t t71 = -55704;
volatile int32_t t72 = 14;
uint32_t x332 = UINT32_MAX;
uint64_t t74 = UINT64_MAX;
uint64_t x341 = 104530LLU;
int32_t x343 = 58678;
int64_t x348 = 2335469LL;
static uint8_t x349 = 92U;
uint32_t x350 = UINT32_MAX;
static uint32_t x351 = UINT32_MAX;
volatile int32_t t78 = -593498;
uint16_t x355 = 6243U;
uint32_t x378 = UINT32_MAX;
int32_t x380 = -5;
int8_t x384 = INT8_MIN;
int32_t x386 = INT32_MAX;
volatile int32_t x395 = -1;
volatile int32_t t89 = INT32_MIN;
int8_t x411 = -1;
static uint8_t x413 = UINT8_MAX;
int8_t x415 = INT8_MAX;
int32_t t93 = -458501;
int64_t x421 = -94905813004LL;
static int32_t x425 = -4;
int64_t x432 = INT64_MAX;
int32_t t97 = -23;
static int16_t x440 = INT16_MIN;


void f0(void) {
	volatile uint8_t x1 = 0U;
	int8_t x2 = -1;
	int16_t x3 = -8;
	int8_t x4 = -1;

	t0 = (x1|(x2==(x3+x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	int64_t x6 = INT64_MIN;
	uint64_t x7 = 1505335637LLU;
	volatile int64_t t1 = 1LL;

	t1 = (x5|(x6==(x7+x8)));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = 1;
	int32_t x10 = INT32_MIN;
	int16_t x12 = INT16_MAX;
	volatile int32_t t2 = 4651;

	t2 = (x9|(x10==(x11+x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	static uint16_t x15 = UINT16_MAX;
	static int16_t x16 = INT16_MAX;
	int64_t t3 = 16822970770512LL;

	t3 = (x13|(x14==(x15+x16)));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	volatile int8_t x19 = INT8_MIN;
	uint32_t x20 = UINT32_MAX;
	volatile int64_t t4 = INT64_MIN;

	t4 = (x17|(x18==(x19+x20)));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	static int64_t x22 = INT64_MIN;
	volatile int8_t x23 = 1;
	uint64_t x24 = UINT64_MAX;
	volatile int32_t t5 = INT32_MIN;

	t5 = (x21|(x22==(x23+x24)));

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x25 = UINT64_MAX;
	int64_t x26 = INT64_MIN;
	volatile int64_t x27 = -1LL;
	uint8_t x28 = 18U;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = (x25|(x26==(x27+x28)));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x31 = 221542684863554366LLU;
	int32_t x32 = 31;
	volatile int64_t t7 = INT64_MAX;

	t7 = (x29|(x30==(x31+x32)));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = 2U;
	static int16_t x34 = INT16_MAX;
	uint16_t x35 = 12U;
	int64_t x36 = -1LL;
	int32_t t8 = -7268188;

	t8 = (x33|(x34==(x35+x36)));

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x37 = 1354010274LLU;
	volatile int32_t x38 = -8;
	uint32_t x39 = UINT32_MAX;
	volatile int8_t x40 = -1;
	uint64_t t9 = 7978817255LLU;

	t9 = (x37|(x38==(x39+x40)));

	if (t9 != 1354010274LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = 372698272U;
	uint8_t x43 = 5U;
	volatile uint8_t x44 = 72U;
	int64_t t10 = INT64_MIN;

	t10 = (x41|(x42==(x43+x44)));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = INT32_MIN;
	static int64_t x47 = INT64_MAX;
	volatile int16_t x48 = INT16_MIN;
	volatile int32_t t11 = INT32_MIN;

	t11 = (x45|(x46==(x47+x48)));

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = -1;
	static int64_t x50 = INT64_MIN;
	static int8_t x51 = -1;
	volatile int64_t x52 = -2464693693LL;
	static int32_t t12 = -1;

	t12 = (x49|(x50==(x51+x52)));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	static int16_t x55 = -16;
	volatile uint64_t x56 = 465104095024033LLU;
	volatile int32_t t13 = INT32_MAX;

	t13 = (x53|(x54==(x55+x56)));

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 0;
	int32_t x60 = -116659146;
	volatile int32_t t14 = -160139;

	t14 = (x57|(x58==(x59+x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	int64_t x62 = 918196LL;
	volatile uint64_t x63 = UINT64_MAX;
	static int8_t x64 = INT8_MAX;
	static int32_t t15 = 30;

	t15 = (x61|(x62==(x63+x64)));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x69 = INT64_MIN;
	volatile int16_t x70 = 1011;
	int32_t x71 = INT32_MIN;
	int8_t x72 = INT8_MAX;
	volatile int64_t t16 = INT64_MIN;

	t16 = (x69|(x70==(x71+x72)));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x73 = UINT16_MAX;
	static int32_t x74 = 372533657;
	int16_t x75 = INT16_MIN;
	int16_t x76 = -1;

	t17 = (x73|(x74==(x75+x76)));

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MIN;
	int64_t x78 = 106889934951400LL;
	uint8_t x80 = 18U;
	int32_t t18 = 247009;

	t18 = (x77|(x78==(x79+x80)));

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x83 = INT64_MIN;
	uint16_t x84 = UINT16_MAX;
	volatile int64_t t19 = 18166LL;

	t19 = (x81|(x82==(x83+x84)));

	if (t19 != -7714330902573LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x90 = 16U;
	volatile int8_t x91 = INT8_MAX;
	volatile uint16_t x92 = 2294U;
	volatile int64_t t20 = INT64_MIN;

	t20 = (x89|(x90==(x91+x92)));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = -5832541562417LL;
	volatile int8_t x96 = -1;
	int64_t t21 = -10LL;

	t21 = (x93|(x94==(x95+x96)));

	if (t21 != -5832541562417LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = INT32_MIN;
	int8_t x98 = INT8_MAX;
	uint16_t x100 = UINT16_MAX;

	t22 = (x97|(x98==(x99+x100)));

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x101 = INT64_MIN;
	int32_t x102 = -109751;
	uint8_t x104 = 88U;

	t23 = (x101|(x102==(x103+x104)));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = UINT32_MAX;
	int32_t x106 = -1;
	uint32_t t24 = UINT32_MAX;

	t24 = (x105|(x106==(x107+x108)));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x109 = 13358879628960LLU;
	static int32_t x110 = -1;
	volatile int64_t x111 = 30141LL;
	int64_t x112 = INT64_MIN;
	volatile uint64_t t25 = 33283747LLU;

	t25 = (x109|(x110==(x111+x112)));

	if (t25 != 13358879628960LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = INT64_MIN;
	int64_t x123 = INT64_MIN;
	static volatile int16_t x124 = INT16_MAX;
	int64_t t26 = INT64_MIN;

	t26 = (x121|(x122==(x123+x124)));

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x129 = INT16_MAX;
	int16_t x130 = -1;
	uint16_t x131 = UINT16_MAX;
	int64_t x132 = INT64_MIN;
	volatile int32_t t27 = 18;

	t27 = (x129|(x130==(x131+x132)));

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x135 = 1;

	t28 = (x133|(x134==(x135+x136)));

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x138 = INT32_MIN;
	int16_t x139 = INT16_MAX;
	int16_t x140 = INT16_MIN;
	volatile int32_t t29 = 221890;

	t29 = (x137|(x138==(x139+x140)));

	if (t29 != 23) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x141 = -294395LL;
	static uint32_t x143 = 14556853U;
	uint8_t x144 = UINT8_MAX;

	t30 = (x141|(x142==(x143+x144)));

	if (t30 != -294395LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = INT8_MAX;
	int8_t x146 = INT8_MAX;
	static int64_t x147 = INT64_MIN;
	int32_t t31 = 47721839;

	t31 = (x145|(x146==(x147+x148)));

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x149 = 49;
	static uint8_t x151 = 0U;
	int32_t x152 = INT32_MIN;
	int32_t t32 = -1708;

	t32 = (x149|(x150==(x151+x152)));

	if (t32 != 49) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x153 = INT32_MAX;
	int32_t x154 = -1;
	static uint64_t x155 = UINT64_MAX;
	volatile uint32_t x156 = 68022150U;
	int32_t t33 = INT32_MAX;

	t33 = (x153|(x154==(x155+x156)));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x157 = INT32_MIN;
	volatile int16_t x158 = -1;
	int8_t x159 = -41;
	volatile int8_t x160 = -1;
	int32_t t34 = INT32_MIN;

	t34 = (x157|(x158==(x159+x160)));

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = -1LL;
	static int32_t x162 = INT32_MIN;
	volatile int64_t x163 = -3173LL;
	int8_t x164 = INT8_MAX;
	int64_t t35 = -3238354702472211245LL;

	t35 = (x161|(x162==(x163+x164)));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x165 = -1LL;
	int16_t x166 = -34;
	volatile int8_t x167 = INT8_MIN;
	int8_t x168 = INT8_MIN;
	static int64_t t36 = -24580742LL;

	t36 = (x165|(x166==(x167+x168)));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x169 = INT32_MAX;
	volatile uint8_t x170 = UINT8_MAX;
	static volatile int32_t t37 = INT32_MAX;

	t37 = (x169|(x170==(x171+x172)));

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x173 = 211;
	static int8_t x174 = -1;
	uint16_t x176 = UINT16_MAX;
	int32_t t38 = -5394;

	t38 = (x173|(x174==(x175+x176)));

	if (t38 != 211) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x177 = UINT32_MAX;
	int8_t x178 = -7;
	volatile uint8_t x180 = 2U;
	volatile uint32_t t39 = UINT32_MAX;

	t39 = (x177|(x178==(x179+x180)));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x181 = -1;
	uint8_t x183 = 0U;
	uint8_t x184 = 57U;
	int32_t t40 = 440390;

	t40 = (x181|(x182==(x183+x184)));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x185 = INT8_MIN;
	uint16_t x186 = 124U;
	int8_t x187 = INT8_MIN;
	static uint32_t x188 = UINT32_MAX;

	t41 = (x185|(x186==(x187+x188)));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x189 = INT64_MIN;
	uint64_t x190 = UINT64_MAX;
	static uint8_t x192 = 19U;
	volatile int64_t t42 = INT64_MIN;

	t42 = (x189|(x190==(x191+x192)));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x201 = -1;
	int64_t x202 = -139237LL;
	uint8_t x203 = UINT8_MAX;

	t43 = (x201|(x202==(x203+x204)));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x205 = INT32_MIN;
	volatile uint32_t x206 = 31412789U;
	uint16_t x207 = UINT16_MAX;
	static uint32_t x208 = UINT32_MAX;

	t44 = (x205|(x206==(x207+x208)));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x209 = 6952238850390LL;
	int8_t x210 = INT8_MIN;
	static int8_t x211 = INT8_MIN;
	uint64_t x212 = 129036LLU;
	int64_t t45 = 6639LL;

	t45 = (x209|(x210==(x211+x212)));

	if (t45 != 6952238850390LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x213 = 28911307777LLU;
	uint16_t x214 = 246U;
	volatile int32_t x215 = 44600275;
	int64_t x216 = 123369LL;
	volatile uint64_t t46 = 216876704820981505LLU;

	t46 = (x213|(x214==(x215+x216)));

	if (t46 != 28911307777LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x217 = INT32_MIN;
	int16_t x218 = -2177;
	int32_t t47 = INT32_MIN;

	t47 = (x217|(x218==(x219+x220)));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x221 = INT16_MAX;
	volatile int8_t x222 = INT8_MIN;
	static uint16_t x223 = 11U;
	uint64_t x224 = UINT64_MAX;

	t48 = (x221|(x222==(x223+x224)));

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x225 = -1;
	static int8_t x226 = INT8_MIN;
	int32_t x227 = INT32_MAX;
	volatile int8_t x228 = INT8_MIN;
	volatile int32_t t49 = 206996859;

	t49 = (x225|(x226==(x227+x228)));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x230 = INT16_MIN;
	int32_t x231 = INT32_MAX;
	uint32_t x232 = 77420505U;
	static volatile int64_t t50 = -281244LL;

	t50 = (x229|(x230==(x231+x232)));

	if (t50 != 120959LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x237 = -207;
	int64_t x238 = 175874LL;
	volatile int16_t x239 = -1;
	volatile int32_t t51 = -12290840;

	t51 = (x237|(x238==(x239+x240)));

	if (t51 != -207) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x241 = 31U;
	static uint64_t x242 = 25LLU;
	int32_t t52 = -1185;

	t52 = (x241|(x242==(x243+x244)));

	if (t52 != 31) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x245 = 1U;
	int64_t x246 = -14696888607LL;
	int8_t x247 = -7;
	volatile int16_t x248 = INT16_MAX;
	int32_t t53 = -436358786;

	t53 = (x245|(x246==(x247+x248)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x249 = 210634080261322LLU;
	int8_t x251 = INT8_MIN;
	uint64_t t54 = 30716295892088149LLU;

	t54 = (x249|(x250==(x251+x252)));

	if (t54 != 210634080261322LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x257 = 57;
	static uint64_t x258 = UINT64_MAX;
	int8_t x259 = 11;
	static int32_t t55 = -1648877;

	t55 = (x257|(x258==(x259+x260)));

	if (t55 != 57) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x261 = -48;
	static uint16_t x262 = UINT16_MAX;
	int64_t x263 = INT64_MIN;
	int64_t x264 = INT64_MAX;

	t56 = (x261|(x262==(x263+x264)));

	if (t56 != -48) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x265 = -1LL;
	int8_t x266 = 1;
	static int16_t x267 = -5247;
	uint32_t x268 = 53U;
	volatile int64_t t57 = -14299753827444340LL;

	t57 = (x265|(x266==(x267+x268)));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x269 = INT32_MIN;
	uint16_t x270 = 2280U;
	int32_t x271 = INT32_MAX;
	uint64_t x272 = UINT64_MAX;
	volatile int32_t t58 = INT32_MIN;

	t58 = (x269|(x270==(x271+x272)));

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x273 = -1;
	int8_t x274 = -1;
	int32_t x276 = 6593619;
	int32_t t59 = -813700532;

	t59 = (x273|(x274==(x275+x276)));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x277 = INT16_MAX;
	int64_t x279 = INT64_MIN;
	volatile uint8_t x280 = 1U;

	t60 = (x277|(x278==(x279+x280)));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x281 = UINT64_MAX;
	static int32_t x282 = INT32_MAX;
	int32_t x283 = INT32_MIN;
	static uint8_t x284 = 28U;

	t61 = (x281|(x282==(x283+x284)));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x285 = 12390U;
	uint64_t x286 = 867LLU;
	int32_t x287 = INT32_MIN;
	uint8_t x288 = 64U;
	volatile int32_t t62 = -12;

	t62 = (x285|(x286==(x287+x288)));

	if (t62 != 12390) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x289 = -1;
	volatile uint8_t x290 = 0U;
	int32_t x292 = 1041176;
	int32_t t63 = -751936375;

	t63 = (x289|(x290==(x291+x292)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x294 = UINT8_MAX;
	int16_t x295 = INT16_MIN;
	static uint16_t x296 = UINT16_MAX;
	int32_t t64 = 1581;

	t64 = (x293|(x294==(x295+x296)));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x297 = INT8_MAX;
	static volatile uint64_t x298 = UINT64_MAX;
	uint8_t x299 = 69U;
	int32_t t65 = -9148613;

	t65 = (x297|(x298==(x299+x300)));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x301 = INT32_MIN;

	t66 = (x301|(x302==(x303+x304)));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x306 = 2186929660LL;
	static int16_t x307 = INT16_MIN;
	int16_t x308 = INT16_MIN;
	volatile int32_t t67 = 6265;

	t67 = (x305|(x306==(x307+x308)));

	if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x309 = 63300032LL;
	int16_t x310 = INT16_MAX;
	volatile int16_t x311 = INT16_MIN;
	uint8_t x312 = 0U;

	t68 = (x309|(x310==(x311+x312)));

	if (t68 != 63300032LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x313 = INT32_MIN;
	static uint16_t x315 = 23U;

	t69 = (x313|(x314==(x315+x316)));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x317 = INT16_MAX;
	int8_t x319 = -1;
	int32_t x320 = -1;
	static int32_t t70 = 29202;

	t70 = (x317|(x318==(x319+x320)));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x321 = INT8_MAX;
	static int16_t x322 = INT16_MAX;
	static uint8_t x324 = UINT8_MAX;

	t71 = (x321|(x322==(x323+x324)));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x325 = 1U;
	int32_t x326 = INT32_MIN;
	int8_t x327 = INT8_MAX;
	static volatile uint8_t x328 = UINT8_MAX;

	t72 = (x325|(x326==(x327+x328)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x329 = INT8_MAX;
	static int16_t x330 = INT16_MIN;
	int32_t x331 = INT32_MIN;
	volatile int32_t t73 = -25031;

	t73 = (x329|(x330==(x331+x332)));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x333 = UINT64_MAX;
	int64_t x334 = -13636266LL;
	uint8_t x335 = 13U;
	uint64_t x336 = UINT64_MAX;

	t74 = (x333|(x334==(x335+x336)));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x337 = INT64_MIN;
	static int32_t x338 = -1;
	int16_t x339 = -1;
	volatile int32_t x340 = -1;
	volatile int64_t t75 = INT64_MIN;

	t75 = (x337|(x338==(x339+x340)));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x342 = -2;
	volatile int32_t x344 = -3;
	static volatile uint64_t t76 = 2304058265818LLU;

	t76 = (x341|(x342==(x343+x344)));

	if (t76 != 104530LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x345 = 0U;
	int64_t x346 = INT64_MIN;
	static int32_t x347 = -1;
	int32_t t77 = 409006598;

	t77 = (x345|(x346==(x347+x348)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x352 = UINT32_MAX;

	t78 = (x349|(x350==(x351+x352)));

	if (t78 != 92) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x353 = INT64_MIN;
	static int64_t x354 = 4152348865523LL;
	int16_t x356 = -1;
	int64_t t79 = INT64_MIN;

	t79 = (x353|(x354==(x355+x356)));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x357 = INT32_MIN;
	volatile int64_t x358 = 75785292949803LL;
	uint8_t x359 = UINT8_MAX;
	int8_t x360 = INT8_MIN;
	int32_t t80 = INT32_MIN;

	t80 = (x357|(x358==(x359+x360)));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x361 = 1U;
	uint16_t x362 = UINT16_MAX;
	int16_t x363 = -1;
	int32_t x364 = INT32_MAX;
	static int32_t t81 = -3193806;

	t81 = (x361|(x362==(x363+x364)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x365 = 0;
	static uint64_t x366 = 142LLU;
	uint64_t x367 = UINT64_MAX;
	int64_t x368 = INT64_MAX;
	volatile int32_t t82 = -1;

	t82 = (x365|(x366==(x367+x368)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x369 = INT64_MIN;
	uint8_t x370 = 2U;
	int16_t x371 = INT16_MIN;
	uint64_t x372 = UINT64_MAX;
	int64_t t83 = INT64_MIN;

	t83 = (x369|(x370==(x371+x372)));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x373 = INT32_MAX;
	int16_t x374 = -1;
	int32_t x375 = -1;
	int32_t x376 = INT32_MAX;
	volatile int32_t t84 = INT32_MAX;

	t84 = (x373|(x374==(x375+x376)));

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x377 = INT32_MIN;
	uint64_t x379 = 7973LLU;
	int32_t t85 = INT32_MIN;

	t85 = (x377|(x378==(x379+x380)));

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x381 = 45U;
	int8_t x382 = -32;
	static uint8_t x383 = UINT8_MAX;
	volatile int32_t t86 = 1;

	t86 = (x381|(x382==(x383+x384)));

	if (t86 != 45) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x385 = -1LL;
	int32_t x387 = -4859;
	volatile int64_t x388 = INT64_MAX;
	volatile int64_t t87 = -17751123566434596LL;

	t87 = (x385|(x386==(x387+x388)));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x389 = 2876U;
	int16_t x390 = INT16_MIN;
	volatile int16_t x391 = 0;
	int32_t x392 = INT32_MIN;
	uint32_t t88 = 612U;

	t88 = (x389|(x390==(x391+x392)));

	if (t88 != 2876U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x393 = INT32_MIN;
	static int64_t x394 = -618177102392LL;
	int8_t x396 = INT8_MIN;

	t89 = (x393|(x394==(x395+x396)));

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x397 = -1;
	uint32_t x398 = 36402701U;
	uint8_t x399 = 3U;
	int8_t x400 = INT8_MIN;
	int32_t t90 = 410635;

	t90 = (x397|(x398==(x399+x400)));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x405 = 134U;
	int64_t x406 = INT64_MIN;
	int16_t x407 = -179;
	int16_t x408 = 12475;
	volatile int32_t t91 = -235938021;

	t91 = (x405|(x406==(x407+x408)));

	if (t91 != 134) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x409 = UINT64_MAX;
	uint16_t x410 = 9097U;
	int8_t x412 = INT8_MIN;
	volatile uint64_t t92 = UINT64_MAX;

	t92 = (x409|(x410==(x411+x412)));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x414 = -28LL;
	static int32_t x416 = INT32_MIN;

	t93 = (x413|(x414==(x415+x416)));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x417 = INT16_MIN;
	uint8_t x418 = UINT8_MAX;
	int16_t x419 = 1070;
	static int32_t x420 = INT32_MIN;
	volatile int32_t t94 = 4557294;

	t94 = (x417|(x418==(x419+x420)));

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x422 = UINT16_MAX;
	int16_t x423 = -1929;
	uint16_t x424 = 65U;
	int64_t t95 = 282209014544458527LL;

	t95 = (x421|(x422==(x423+x424)));

	if (t95 != -94905813004LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x426 = 13U;
	volatile int8_t x427 = INT8_MIN;
	int8_t x428 = INT8_MIN;
	int32_t t96 = -10;

	t96 = (x425|(x426==(x427+x428)));

	if (t96 != -4) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x429 = -1;
	volatile uint8_t x430 = 97U;
	uint64_t x431 = 48LLU;

	t97 = (x429|(x430==(x431+x432)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x433 = -1;
	volatile int64_t x434 = -2583953247LL;
	int64_t x435 = 725LL;
	int8_t x436 = INT8_MIN;
	volatile int32_t t98 = 0;

	t98 = (x433|(x434==(x435+x436)));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x437 = INT8_MIN;
	int32_t x438 = -10;
	uint16_t x439 = 1U;
	int32_t t99 = 0;

	t99 = (x437|(x438==(x439+x440)));

	if (t99 != -128) { NG(); } else { ; }
	
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


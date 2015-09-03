#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = UINT64_MAX;
int32_t x8 = -449300168;
volatile int32_t t1 = -998736;
int64_t x9 = -4858114135897LL;
static int8_t x10 = -1;
volatile int64_t x11 = INT64_MAX;
int32_t t2 = 0;
static volatile int32_t t4 = -14860616;
volatile int32_t t5 = 3101434;
uint32_t x32 = 1769U;
int16_t x44 = -585;
uint16_t x45 = UINT16_MAX;
volatile int32_t t10 = 17622;
volatile uint32_t x49 = 59323U;
int16_t x53 = -1;
int16_t x56 = INT16_MIN;
volatile int32_t t13 = -25993378;
int32_t x62 = -1;
volatile int32_t t14 = -3183;
volatile int16_t x72 = -6;
int16_t x81 = INT16_MIN;
uint16_t x84 = 506U;
int8_t x87 = INT8_MAX;
uint64_t x95 = 303527162967518076LLU;
volatile int32_t t21 = -205;
int64_t x103 = 33457186764231LL;
int32_t t22 = -415;
volatile uint16_t x105 = 1111U;
volatile int32_t t24 = 54;
uint8_t x124 = UINT8_MAX;
int32_t t26 = -106754622;
static int64_t x128 = -3LL;
volatile int16_t x129 = INT16_MAX;
int64_t x146 = INT64_MIN;
static uint32_t x150 = 508358U;
static int32_t x154 = INT32_MIN;
uint8_t x167 = 0U;
int32_t t34 = -477298439;
volatile int8_t x170 = -1;
volatile int32_t t39 = 39;
uint64_t x195 = UINT64_MAX;
int8_t x197 = -1;
int32_t t44 = 32398;
uint16_t x228 = 1657U;
volatile int32_t t51 = 20;
int16_t x251 = INT16_MAX;
volatile int16_t x252 = 231;
int32_t t54 = 18357;
int64_t x258 = INT64_MAX;
uint32_t x261 = 229U;
int32_t t57 = 6;
int16_t x267 = INT16_MIN;
int32_t t58 = -1004891083;
int32_t x274 = INT32_MIN;
int16_t x275 = INT16_MIN;
static volatile uint64_t x276 = UINT64_MAX;
static int32_t t62 = -12896;
int8_t x286 = -1;
int32_t x289 = -1370238;
uint32_t x297 = 10U;
int8_t x304 = -1;
int32_t t68 = 9440245;
uint64_t x309 = 66062021241726LLU;
uint64_t x310 = UINT64_MAX;
volatile int32_t t69 = 2;
volatile int32_t x314 = 177;
uint8_t x316 = UINT8_MAX;
uint32_t x318 = 28015745U;
static int32_t t71 = -25;
uint8_t x329 = 3U;
static int32_t t73 = 1786;
uint64_t x350 = 2LLU;
static int16_t x360 = -1;
uint16_t x362 = 11U;
int8_t x373 = INT8_MAX;
int8_t x376 = 2;
static int64_t x398 = 12961934379349LL;
volatile int32_t t85 = 1525849;
static int8_t x411 = INT8_MIN;
volatile int16_t x416 = INT16_MIN;
int64_t x421 = 15159LL;
static int32_t x433 = INT32_MIN;
int32_t x436 = 75;
int8_t x437 = 0;
volatile int32_t x440 = -1;
int64_t x445 = -949109080143925116LL;
int8_t x449 = 1;
uint16_t x452 = 1028U;
volatile int32_t t97 = -2;
volatile uint8_t x456 = 7U;
int16_t x465 = -1;


void f0(void) {
	uint32_t x1 = 4403U;
	int16_t x3 = -526;
	static volatile int8_t x4 = -2;
	volatile int32_t t0 = -581698;

	t0 = ((x1<=x2)==(x3+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 32643U;
	int64_t x6 = -1LL;
	static uint16_t x7 = 6842U;

	t1 = ((x5<=x6)==(x7+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x12 = -1;

	t2 = ((x9<=x10)==(x11+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = 1843U;
	int16_t x14 = 129;
	uint64_t x15 = 373946LLU;
	volatile int64_t x16 = -758307172296599LL;
	volatile int32_t t3 = -6;

	t3 = ((x13<=x14)==(x15+x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 0U;
	int16_t x18 = INT16_MIN;
	static int32_t x19 = INT32_MAX;
	uint32_t x20 = 73U;

	t4 = ((x17<=x18)==(x19+x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	int8_t x22 = INT8_MIN;
	int16_t x23 = INT16_MIN;
	int16_t x24 = -39;

	t5 = ((x21<=x22)==(x23+x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	volatile int32_t x26 = -1;
	int32_t x27 = INT32_MAX;
	int64_t x28 = 154LL;
	static int32_t t6 = -541;

	t6 = ((x25<=x26)==(x27+x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	int8_t x30 = INT8_MIN;
	int32_t x31 = 3357;
	static volatile int32_t t7 = -40218;

	t7 = ((x29<=x30)==(x31+x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x37 = INT8_MIN;
	int64_t x38 = -1LL;
	volatile int16_t x39 = INT16_MIN;
	uint32_t x40 = UINT32_MAX;
	int32_t t8 = 45912;

	t8 = ((x37<=x38)==(x39+x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = -1;
	int32_t x42 = INT32_MIN;
	uint8_t x43 = 0U;
	static int32_t t9 = -2;

	t9 = ((x41<=x42)==(x43+x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x46 = INT8_MAX;
	volatile int8_t x47 = 1;
	uint32_t x48 = UINT32_MAX;

	t10 = ((x45<=x46)==(x47+x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x50 = 15631500;
	static int32_t x51 = INT32_MAX;
	int64_t x52 = -1LL;
	volatile int32_t t11 = 24451;

	t11 = ((x49<=x50)==(x51+x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x54 = 389;
	uint64_t x55 = UINT64_MAX;
	int32_t t12 = -8;

	t12 = ((x53<=x54)==(x55+x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x57 = INT16_MIN;
	uint64_t x58 = 2338529950570LLU;
	uint64_t x59 = 352126926039LLU;
	int16_t x60 = INT16_MAX;

	t13 = ((x57<=x58)==(x59+x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	static volatile int64_t x63 = INT64_MIN;
	int8_t x64 = 0;

	t14 = ((x61<=x62)==(x63+x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MIN;
	int32_t x66 = -9185823;
	uint64_t x67 = 34822458423945LLU;
	int64_t x68 = -1LL;
	int32_t t15 = -7;

	t15 = ((x65<=x66)==(x67+x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x69 = 15888U;
	uint8_t x70 = UINT8_MAX;
	int8_t x71 = INT8_MIN;
	static int32_t t16 = 48;

	t16 = ((x69<=x70)==(x71+x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = 2864LL;
	volatile uint8_t x78 = UINT8_MAX;
	volatile int32_t x79 = INT32_MIN;
	static uint32_t x80 = UINT32_MAX;
	volatile int32_t t17 = -25;

	t17 = ((x77<=x78)==(x79+x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x82 = -1;
	int8_t x83 = 2;
	volatile int32_t t18 = 6236867;

	t18 = ((x81<=x82)==(x83+x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x85 = 0U;
	static int16_t x86 = -1;
	volatile int16_t x88 = INT16_MIN;
	volatile int32_t t19 = -24046338;

	t19 = ((x85<=x86)==(x87+x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x89 = 9618547U;
	static int64_t x90 = -826951LL;
	volatile int16_t x91 = -1628;
	static int16_t x92 = INT16_MAX;
	volatile int32_t t20 = 66599255;

	t20 = ((x89<=x90)==(x91+x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x93 = -2;
	int32_t x94 = -188254;
	int64_t x96 = INT64_MIN;

	t21 = ((x93<=x94)==(x95+x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x101 = -1;
	static uint32_t x102 = UINT32_MAX;
	volatile int32_t x104 = INT32_MIN;

	t22 = ((x101<=x102)==(x103+x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x106 = -1;
	volatile int8_t x107 = INT8_MAX;
	static uint16_t x108 = UINT16_MAX;
	int32_t t23 = 28;

	t23 = ((x105<=x106)==(x107+x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x109 = INT16_MAX;
	volatile int64_t x110 = -229LL;
	uint64_t x111 = UINT64_MAX;
	volatile uint32_t x112 = 6675U;

	t24 = ((x109<=x110)==(x111+x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = 6U;
	static volatile int64_t x114 = 113159260984LL;
	volatile int64_t x115 = INT64_MAX;
	int16_t x116 = INT16_MIN;
	static volatile int32_t t25 = -634;

	t25 = ((x113<=x114)==(x115+x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x121 = UINT16_MAX;
	volatile int64_t x122 = INT64_MIN;
	static uint32_t x123 = 223337U;

	t26 = ((x121<=x122)==(x123+x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x125 = 92U;
	int64_t x126 = -72548121768297342LL;
	int8_t x127 = INT8_MIN;
	int32_t t27 = -138;

	t27 = ((x125<=x126)==(x127+x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x130 = -1;
	int8_t x131 = INT8_MIN;
	int8_t x132 = INT8_MIN;
	static volatile int32_t t28 = -17045937;

	t28 = ((x129<=x130)==(x131+x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x133 = UINT8_MAX;
	uint8_t x134 = UINT8_MAX;
	int8_t x135 = INT8_MAX;
	int32_t x136 = INT32_MIN;
	int32_t t29 = -197561643;

	t29 = ((x133<=x134)==(x135+x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x141 = INT32_MIN;
	static volatile int16_t x142 = -1;
	int32_t x143 = INT32_MIN;
	int32_t x144 = 49927210;
	volatile int32_t t30 = 111600;

	t30 = ((x141<=x142)==(x143+x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x145 = 15100;
	int8_t x147 = INT8_MAX;
	int16_t x148 = INT16_MIN;
	int32_t t31 = -6804351;

	t31 = ((x145<=x146)==(x147+x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x149 = 1U;
	int64_t x151 = INT64_MIN;
	static uint32_t x152 = UINT32_MAX;
	static int32_t t32 = 20290740;

	t32 = ((x149<=x150)==(x151+x152));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x153 = -220;
	static int32_t x155 = -5511883;
	volatile int16_t x156 = -505;
	static volatile int32_t t33 = 1973;

	t33 = ((x153<=x154)==(x155+x156));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x165 = 6759743LLU;
	static volatile int16_t x166 = -3741;
	int64_t x168 = INT64_MIN;

	t34 = ((x165<=x166)==(x167+x168));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x169 = 27511U;
	uint8_t x171 = 0U;
	int64_t x172 = INT64_MIN;
	volatile int32_t t35 = 63545;

	t35 = ((x169<=x170)==(x171+x172));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x177 = INT64_MIN;
	uint16_t x178 = UINT16_MAX;
	int64_t x179 = INT64_MIN;
	volatile uint64_t x180 = UINT64_MAX;
	int32_t t36 = 266940;

	t36 = ((x177<=x178)==(x179+x180));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x181 = 1232522LLU;
	int16_t x182 = -1;
	static uint32_t x183 = 1006899591U;
	volatile uint32_t x184 = 8171792U;
	volatile int32_t t37 = -12723647;

	t37 = ((x181<=x182)==(x183+x184));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x185 = -1LL;
	uint8_t x186 = 5U;
	volatile int32_t x187 = -569433;
	volatile int64_t x188 = -18080522587LL;
	static int32_t t38 = -12;

	t38 = ((x185<=x186)==(x187+x188));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x189 = -1;
	volatile int32_t x190 = INT32_MIN;
	int16_t x191 = INT16_MIN;
	int16_t x192 = -1;

	t39 = ((x189<=x190)==(x191+x192));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x193 = 804U;
	uint16_t x194 = 256U;
	volatile int8_t x196 = INT8_MIN;
	int32_t t40 = 250904;

	t40 = ((x193<=x194)==(x195+x196));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x198 = INT32_MAX;
	uint64_t x199 = 1092321510096883LLU;
	int16_t x200 = -1;
	int32_t t41 = 1;

	t41 = ((x197<=x198)==(x199+x200));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x201 = 862LLU;
	static int16_t x202 = INT16_MAX;
	uint8_t x203 = 1U;
	uint32_t x204 = 8045U;
	int32_t t42 = 32965687;

	t42 = ((x201<=x202)==(x203+x204));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x205 = 49691298883LLU;
	uint64_t x206 = 8331LLU;
	uint64_t x207 = UINT64_MAX;
	int32_t x208 = INT32_MAX;
	volatile int32_t t43 = -199185;

	t43 = ((x205<=x206)==(x207+x208));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x209 = -2;
	static uint8_t x210 = UINT8_MAX;
	uint64_t x211 = 2986909LLU;
	volatile int16_t x212 = INT16_MIN;

	t44 = ((x209<=x210)==(x211+x212));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x213 = UINT8_MAX;
	volatile int64_t x214 = INT64_MIN;
	volatile uint64_t x215 = 15420321241LLU;
	uint64_t x216 = 35482030060LLU;
	volatile int32_t t45 = -5443354;

	t45 = ((x213<=x214)==(x215+x216));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x217 = -1;
	int64_t x218 = INT64_MIN;
	volatile int64_t x219 = INT64_MIN;
	int8_t x220 = INT8_MAX;
	static volatile int32_t t46 = 908567;

	t46 = ((x217<=x218)==(x219+x220));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x221 = INT64_MAX;
	int32_t x222 = 1838904;
	static int16_t x223 = -1;
	uint16_t x224 = 30U;
	static volatile int32_t t47 = 21417;

	t47 = ((x221<=x222)==(x223+x224));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x225 = 127294LLU;
	int16_t x226 = INT16_MIN;
	volatile int64_t x227 = -1LL;
	int32_t t48 = 1;

	t48 = ((x225<=x226)==(x227+x228));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x229 = -1;
	uint32_t x230 = UINT32_MAX;
	static uint32_t x231 = 2729194U;
	volatile int32_t x232 = 84;
	int32_t t49 = 29861854;

	t49 = ((x229<=x230)==(x231+x232));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x233 = INT16_MIN;
	uint64_t x234 = 5548512110LLU;
	int64_t x235 = -1LL;
	volatile uint32_t x236 = UINT32_MAX;
	int32_t t50 = -939;

	t50 = ((x233<=x234)==(x235+x236));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x237 = UINT64_MAX;
	volatile uint64_t x238 = UINT64_MAX;
	int8_t x239 = INT8_MAX;
	uint32_t x240 = 229U;

	t51 = ((x237<=x238)==(x239+x240));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x241 = INT32_MIN;
	int32_t x242 = -62174;
	static int16_t x243 = -1;
	uint32_t x244 = 290560U;
	volatile int32_t t52 = 264;

	t52 = ((x241<=x242)==(x243+x244));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x245 = INT32_MAX;
	uint16_t x246 = UINT16_MAX;
	int16_t x247 = INT16_MIN;
	int16_t x248 = INT16_MAX;
	int32_t t53 = 1411;

	t53 = ((x245<=x246)==(x247+x248));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x249 = UINT8_MAX;
	static uint8_t x250 = 13U;

	t54 = ((x249<=x250)==(x251+x252));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x253 = 7794675166037LL;
	static uint8_t x254 = 116U;
	static uint8_t x255 = 33U;
	int8_t x256 = -1;
	static volatile int32_t t55 = -8;

	t55 = ((x253<=x254)==(x255+x256));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x257 = INT16_MIN;
	int16_t x259 = -2;
	int16_t x260 = INT16_MIN;
	int32_t t56 = -275;

	t56 = ((x257<=x258)==(x259+x260));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x262 = 233755641LLU;
	uint8_t x263 = 6U;
	static int8_t x264 = -7;

	t57 = ((x261<=x262)==(x263+x264));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x265 = 599929;
	int8_t x266 = 3;
	uint32_t x268 = UINT32_MAX;

	t58 = ((x265<=x266)==(x267+x268));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x269 = UINT8_MAX;
	static int16_t x270 = -7;
	int8_t x271 = INT8_MIN;
	uint16_t x272 = UINT16_MAX;
	int32_t t59 = -70;

	t59 = ((x269<=x270)==(x271+x272));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x273 = 1;
	int32_t t60 = 29368521;

	t60 = ((x273<=x274)==(x275+x276));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x277 = UINT32_MAX;
	uint16_t x278 = 13275U;
	volatile int64_t x279 = INT64_MIN;
	uint8_t x280 = UINT8_MAX;
	volatile int32_t t61 = 3610;

	t61 = ((x277<=x278)==(x279+x280));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x281 = -73;
	uint32_t x282 = UINT32_MAX;
	int64_t x283 = -1LL;
	int32_t x284 = INT32_MAX;

	t62 = ((x281<=x282)==(x283+x284));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x285 = -1;
	static int32_t x287 = -1;
	int32_t x288 = 379802;
	int32_t t63 = 64747;

	t63 = ((x285<=x286)==(x287+x288));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x290 = -1LL;
	volatile int16_t x291 = INT16_MIN;
	volatile int8_t x292 = -1;
	int32_t t64 = -229908;

	t64 = ((x289<=x290)==(x291+x292));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x293 = -1074365LL;
	uint16_t x294 = 2172U;
	uint8_t x295 = 84U;
	int64_t x296 = -1LL;
	volatile int32_t t65 = -363;

	t65 = ((x293<=x294)==(x295+x296));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x298 = -1LL;
	uint64_t x299 = 5953999398342LLU;
	int64_t x300 = INT64_MIN;
	volatile int32_t t66 = 231144580;

	t66 = ((x297<=x298)==(x299+x300));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x301 = 0;
	int16_t x302 = INT16_MAX;
	volatile int8_t x303 = INT8_MIN;
	static int32_t t67 = -245;

	t67 = ((x301<=x302)==(x303+x304));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x305 = 6008;
	static int32_t x306 = INT32_MAX;
	volatile int8_t x307 = -1;
	uint16_t x308 = UINT16_MAX;

	t68 = ((x305<=x306)==(x307+x308));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x311 = UINT16_MAX;
	int64_t x312 = INT64_MIN;

	t69 = ((x309<=x310)==(x311+x312));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x313 = UINT64_MAX;
	int16_t x315 = 24;
	int32_t t70 = 317;

	t70 = ((x313<=x314)==(x315+x316));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x317 = INT64_MIN;
	uint64_t x319 = 67656LLU;
	volatile int8_t x320 = -1;

	t71 = ((x317<=x318)==(x319+x320));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x325 = INT16_MAX;
	volatile uint8_t x326 = UINT8_MAX;
	static volatile int8_t x327 = INT8_MIN;
	uint32_t x328 = UINT32_MAX;
	volatile int32_t t72 = 1;

	t72 = ((x325<=x326)==(x327+x328));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x330 = INT16_MIN;
	static int8_t x331 = 0;
	volatile int16_t x332 = -1;

	t73 = ((x329<=x330)==(x331+x332));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x333 = 0U;
	int8_t x334 = INT8_MIN;
	uint32_t x335 = UINT32_MAX;
	uint32_t x336 = 986146U;
	volatile int32_t t74 = 113;

	t74 = ((x333<=x334)==(x335+x336));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x349 = UINT8_MAX;
	static volatile int64_t x351 = -20930054222617LL;
	int8_t x352 = INT8_MAX;
	volatile int32_t t75 = -503765959;

	t75 = ((x349<=x350)==(x351+x352));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x353 = UINT64_MAX;
	volatile int8_t x354 = 29;
	uint64_t x355 = 574622054092LLU;
	static int64_t x356 = -1LL;
	volatile int32_t t76 = 1390;

	t76 = ((x353<=x354)==(x355+x356));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x357 = 52059965U;
	uint16_t x358 = 5U;
	int16_t x359 = INT16_MAX;
	static int32_t t77 = 401;

	t77 = ((x357<=x358)==(x359+x360));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x361 = INT16_MAX;
	uint16_t x363 = UINT16_MAX;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t78 = 357686;

	t78 = ((x361<=x362)==(x363+x364));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x365 = UINT32_MAX;
	uint32_t x366 = 152U;
	int16_t x367 = -21;
	int8_t x368 = INT8_MAX;
	volatile int32_t t79 = -40;

	t79 = ((x365<=x366)==(x367+x368));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x369 = INT16_MIN;
	volatile uint64_t x370 = 11950890615LLU;
	volatile int16_t x371 = -1;
	volatile uint8_t x372 = 87U;
	int32_t t80 = -6041925;

	t80 = ((x369<=x370)==(x371+x372));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x374 = 799985750784LLU;
	uint32_t x375 = 13U;
	static volatile int32_t t81 = -1;

	t81 = ((x373<=x374)==(x375+x376));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x377 = INT16_MAX;
	uint8_t x378 = 83U;
	uint8_t x379 = 118U;
	uint16_t x380 = 0U;
	volatile int32_t t82 = -13249389;

	t82 = ((x377<=x378)==(x379+x380));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x389 = 925432928;
	int8_t x390 = -39;
	volatile int16_t x391 = INT16_MIN;
	int64_t x392 = 15007224765429LL;
	int32_t t83 = 326;

	t83 = ((x389<=x390)==(x391+x392));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x393 = 46U;
	int16_t x394 = INT16_MIN;
	static int8_t x395 = 7;
	volatile int8_t x396 = INT8_MIN;
	volatile int32_t t84 = 87680;

	t84 = ((x393<=x394)==(x395+x396));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x397 = 16U;
	uint32_t x399 = UINT32_MAX;
	uint64_t x400 = 640LLU;

	t85 = ((x397<=x398)==(x399+x400));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x401 = 69U;
	static volatile int32_t x402 = 0;
	int8_t x403 = -1;
	static int32_t x404 = 423593224;
	int32_t t86 = -4106;

	t86 = ((x401<=x402)==(x403+x404));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x405 = INT16_MAX;
	int16_t x406 = -1;
	static int16_t x407 = INT16_MIN;
	uint16_t x408 = 5U;
	static volatile int32_t t87 = 51426;

	t87 = ((x405<=x406)==(x407+x408));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x409 = -598537769770LL;
	uint16_t x410 = 440U;
	int8_t x412 = INT8_MAX;
	volatile int32_t t88 = -154;

	t88 = ((x409<=x410)==(x411+x412));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x413 = 16U;
	uint64_t x414 = 215LLU;
	int32_t x415 = -1;
	int32_t t89 = 0;

	t89 = ((x413<=x414)==(x415+x416));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x417 = 6048U;
	uint16_t x418 = 198U;
	uint32_t x419 = UINT32_MAX;
	volatile int8_t x420 = INT8_MIN;
	int32_t t90 = 78279;

	t90 = ((x417<=x418)==(x419+x420));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x422 = UINT16_MAX;
	uint64_t x423 = 33926435400LLU;
	int64_t x424 = -1LL;
	int32_t t91 = 465905802;

	t91 = ((x421<=x422)==(x423+x424));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x425 = 4;
	volatile int16_t x426 = -1;
	static uint8_t x427 = 29U;
	int64_t x428 = INT64_MIN;
	int32_t t92 = -223;

	t92 = ((x425<=x426)==(x427+x428));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x429 = INT32_MAX;
	static int16_t x430 = INT16_MAX;
	int16_t x431 = INT16_MIN;
	volatile uint16_t x432 = 4U;
	volatile int32_t t93 = 350;

	t93 = ((x429<=x430)==(x431+x432));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x434 = INT8_MIN;
	static volatile int8_t x435 = -1;
	int32_t t94 = -127515579;

	t94 = ((x433<=x434)==(x435+x436));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x438 = INT16_MIN;
	int8_t x439 = INT8_MIN;
	volatile int32_t t95 = 1186;

	t95 = ((x437<=x438)==(x439+x440));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x446 = -56;
	int16_t x447 = INT16_MIN;
	int16_t x448 = 40;
	volatile int32_t t96 = -54;

	t96 = ((x445<=x446)==(x447+x448));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x450 = 15591732765363LLU;
	int16_t x451 = INT16_MIN;

	t97 = ((x449<=x450)==(x451+x452));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x453 = INT64_MAX;
	int64_t x454 = 992206LL;
	uint32_t x455 = UINT32_MAX;
	int32_t t98 = -5478595;

	t98 = ((x453<=x454)==(x455+x456));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x466 = -2;
	int64_t x467 = INT64_MAX;
	int16_t x468 = INT16_MIN;
	volatile int32_t t99 = 14163055;

	t99 = ((x465<=x466)==(x467+x468));

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


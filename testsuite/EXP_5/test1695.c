#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = INT64_MIN;
volatile int64_t t1 = -401LL;
volatile uint16_t x9 = 52U;
int16_t x10 = -1;
int32_t x12 = -1;
int32_t x13 = INT32_MIN;
static volatile uint8_t x18 = 1U;
static volatile int8_t x25 = -1;
uint64_t x26 = 405078640652451LLU;
volatile int8_t x30 = -1;
uint64_t x35 = UINT64_MAX;
int16_t x36 = INT16_MAX;
uint32_t x39 = UINT32_MAX;
int8_t x41 = INT8_MAX;
uint16_t x45 = 14100U;
volatile uint32_t t10 = 0U;
static volatile int16_t x65 = -38;
uint8_t x67 = 24U;
volatile int64_t x73 = INT64_MIN;
volatile int64_t t15 = 4069735LL;
static int64_t t22 = -882114888LL;
static int64_t x111 = 34206035140LL;
int64_t t23 = 1849901011LL;
int64_t t24 = 3990LL;
static volatile uint32_t x128 = 17188837U;
static int16_t x135 = -1;
int32_t t29 = -3827056;
int32_t x144 = INT32_MIN;
volatile int32_t t32 = -166;
static uint32_t x154 = 212296823U;
volatile int32_t x157 = -1;
volatile int8_t x159 = 24;
uint64_t x160 = 51064957LLU;
uint64_t x166 = 256286804LLU;
volatile uint64_t t35 = 145893LLU;
uint32_t x179 = UINT32_MAX;
volatile uint32_t t38 = 1U;
int64_t t39 = -2498460219511597LL;
int32_t x187 = INT32_MIN;
static volatile int16_t x189 = INT16_MIN;
uint16_t x192 = 14070U;
static uint64_t t42 = 676756432568LLU;
int64_t x205 = INT64_MIN;
uint64_t x206 = 8022049791156LLU;
int64_t x210 = -1LL;
volatile int16_t x211 = INT16_MIN;
volatile int8_t x215 = 1;
volatile uint32_t t47 = 3561328U;
static volatile int32_t t48 = -47187;
volatile int32_t x222 = 1;
volatile uint16_t x237 = 10955U;
uint16_t x239 = 58U;
uint32_t x242 = UINT32_MAX;
volatile int16_t x244 = -1;
static uint16_t x245 = 242U;
volatile int64_t x246 = INT64_MIN;
volatile int32_t x250 = -119428;
static int32_t t56 = 1628596;
static uint32_t x260 = UINT32_MAX;
volatile int32_t x261 = 1;
int64_t x262 = 15124677LL;
int16_t x263 = INT16_MIN;
static volatile int64_t t58 = -300LL;
uint64_t t59 = 866417964818765LLU;
volatile int16_t x275 = -4027;
int16_t x276 = INT16_MIN;
volatile uint32_t t61 = 79980594U;
static int32_t x280 = INT32_MIN;
int16_t x293 = 235;
uint64_t x307 = 1097432288673295LLU;
uint32_t t68 = 203305U;
int16_t x314 = -1;
int64_t x321 = -435LL;
int16_t x322 = -1611;
volatile int64_t x329 = -1LL;
volatile uint32_t x333 = UINT32_MAX;
volatile int32_t x340 = INT32_MIN;
uint8_t x341 = UINT8_MAX;
int32_t x348 = INT32_MIN;
volatile int8_t x356 = -1;
volatile int32_t t78 = 103576812;
static volatile int64_t t79 = 31684682554083LL;
int16_t x361 = INT16_MIN;
volatile int8_t x365 = INT8_MAX;
int8_t x367 = INT8_MAX;
static int64_t x368 = -7104556441794507LL;
int64_t x391 = 53864462684LL;
int64_t t85 = 516271337302436LL;
volatile int64_t t87 = -19955250LL;
int64_t x401 = 0LL;
int8_t x410 = INT8_MIN;
uint8_t x427 = 0U;
volatile int8_t x428 = INT8_MIN;
volatile uint64_t t94 = 945027LLU;
volatile int8_t x438 = INT8_MIN;
static int8_t x442 = -1;
static volatile uint16_t x443 = UINT16_MAX;
int64_t x445 = -1LL;
volatile uint64_t t97 = 698472155548LLU;
int8_t x452 = INT8_MIN;
int64_t t98 = 16297583435625LL;


void f0(void) {
	int16_t x1 = 9872;
	volatile uint64_t x2 = 55172LLU;
	static int8_t x3 = -1;
	uint64_t x4 = 977868LLU;
	volatile uint64_t t0 = 23396007630LLU;

	t0 = (x1%((x2&x3)+x4));

	if (t0 != 9872LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint32_t x6 = 38771U;
	int16_t x7 = -1;

	t1 = (x5%((x6&x7)+x8));

	if (t1 != -2147483648LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x11 = -1;
	int32_t t2 = 1;

	t2 = (x9%((x10&x11)+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MIN;
	int16_t x15 = 0;
	int32_t x16 = INT32_MIN;
	static int64_t t3 = 0LL;

	t3 = (x13%((x14&x15)+x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 14U;
	uint64_t x19 = 813097882632696LLU;
	int64_t x20 = -496476LL;
	volatile uint64_t t4 = 102848807073351LLU;

	t4 = (x17%((x18&x19)+x20));

	if (t4 != 14LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x27 = 1703U;
	uint16_t x28 = 2078U;
	static volatile uint64_t t5 = 93794426153306LLU;

	t5 = (x25%((x26&x27)+x28));

	if (t5 != 699LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	volatile int64_t x31 = -32802253LL;
	int8_t x32 = 15;
	volatile int64_t t6 = 378547022406955LL;

	t6 = (x29%((x30&x31)+x32));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint8_t x33 = 4U;
	int8_t x34 = -1;
	uint64_t t7 = 65584074816676LLU;

	t7 = (x33%((x34&x35)+x36));

	if (t7 != 4LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MAX;
	int64_t x38 = -1LL;
	volatile int32_t x40 = INT32_MIN;
	int64_t t8 = 250168188629LL;

	t8 = (x37%((x38&x39)+x40));

	if (t8 != 127LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x42 = -3364403449004896LL;
	uint16_t x43 = 0U;
	int64_t x44 = -1LL;
	int64_t t9 = 409216957661LL;

	t9 = (x41%((x42&x43)+x44));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x46 = INT32_MIN;
	uint16_t x47 = UINT16_MAX;
	uint32_t x48 = 74U;

	t10 = (x45%((x46&x47)+x48));

	if (t10 != 40U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = INT8_MAX;
	volatile int16_t x54 = INT16_MAX;
	uint16_t x55 = 5119U;
	uint64_t x56 = UINT64_MAX;
	uint64_t t11 = 1183476821LLU;

	t11 = (x53%((x54&x55)+x56));

	if (t11 != 127LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x61 = -1LL;
	uint8_t x62 = 47U;
	int32_t x63 = INT32_MAX;
	volatile int64_t x64 = 17842291836470LL;
	static volatile int64_t t12 = 3119795748281716LL;

	t12 = (x61%((x62&x63)+x64));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x66 = -20;
	int64_t x68 = INT64_MIN;
	int64_t t13 = 174703083655476LL;

	t13 = (x65%((x66&x67)+x68));

	if (t13 != -38LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x74 = INT8_MIN;
	volatile int16_t x75 = INT16_MIN;
	int16_t x76 = 2600;
	static int64_t t14 = -64189282774091184LL;

	t14 = (x73%((x74&x75)+x76));

	if (t14 != -29744LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x77 = UINT32_MAX;
	uint32_t x78 = UINT32_MAX;
	int32_t x79 = INT32_MIN;
	int64_t x80 = INT64_MIN;

	t15 = (x77%((x78&x79)+x80));

	if (t15 != 4294967295LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x81 = 839150U;
	volatile uint8_t x82 = 88U;
	int32_t x83 = INT32_MIN;
	int8_t x84 = INT8_MAX;
	uint32_t t16 = 125972203U;

	t16 = (x81%((x82&x83)+x84));

	if (t16 != 61U) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x85 = 72117893746595LL;
	int64_t x86 = INT64_MIN;
	static uint8_t x87 = UINT8_MAX;
	volatile uint8_t x88 = 4U;
	volatile int64_t t17 = -440386987047880LL;

	t17 = (x85%((x86&x87)+x88));

	if (t17 != 3LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x89 = UINT32_MAX;
	volatile uint16_t x90 = 10225U;
	volatile int32_t x91 = -227467798;
	uint8_t x92 = 0U;
	volatile uint32_t t18 = 7181U;

	t18 = (x89%((x90&x91)+x92));

	if (t18 != 511U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x93 = INT16_MAX;
	static int8_t x94 = INT8_MAX;
	int64_t x95 = -1LL;
	uint8_t x96 = 1U;
	volatile int64_t t19 = 31LL;

	t19 = (x93%((x94&x95)+x96));

	if (t19 != 127LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = INT8_MAX;
	uint16_t x98 = UINT16_MAX;
	volatile uint64_t x99 = UINT64_MAX;
	volatile uint32_t x100 = 7U;
	uint64_t t20 = 517155321145698LLU;

	t20 = (x97%((x98&x99)+x100));

	if (t20 != 127LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = -1;
	int32_t x102 = INT32_MIN;
	volatile int32_t x103 = INT32_MIN;
	uint32_t x104 = 17488U;
	uint32_t t21 = 67498U;

	t21 = (x101%((x102&x103)+x104));

	if (t21 != 2147466159U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x105 = INT64_MAX;
	int16_t x106 = 275;
	uint32_t x107 = 217064886U;
	int16_t x108 = -1;

	t22 = (x105%((x106&x107)+x108));

	if (t22 != 7LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = 118949676;
	int64_t x110 = 7204368LL;
	uint16_t x112 = 13754U;

	t23 = (x109%((x110&x111)+x112));

	if (t23 != 1579592LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = -1LL;
	int16_t x114 = INT16_MIN;
	volatile int16_t x115 = 13;
	volatile int8_t x116 = INT8_MIN;

	t24 = (x113%((x114&x115)+x116));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = 367542191;
	volatile int32_t x118 = INT32_MIN;
	volatile uint8_t x119 = 44U;
	static int64_t x120 = 334635313323LL;
	int64_t t25 = -18LL;

	t25 = (x117%((x118&x119)+x120));

	if (t25 != 367542191LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x121 = 7443U;
	volatile int8_t x122 = 10;
	int32_t x123 = 3;
	static int16_t x124 = INT16_MAX;
	volatile int32_t t26 = -236001426;

	t26 = (x121%((x122&x123)+x124));

	if (t26 != 7443) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x125 = 0;
	uint32_t x126 = UINT32_MAX;
	uint8_t x127 = 13U;
	uint32_t t27 = 676518534U;

	t27 = (x125%((x126&x127)+x128));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = INT8_MIN;
	uint64_t x130 = 13254028638640894LLU;
	int32_t x131 = INT32_MIN;
	int32_t x132 = INT32_MIN;
	static uint64_t t28 = 5342509457876421LLU;

	t28 = (x129%((x130&x131)+x132));

	if (t28 != 10393337672499072LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = INT16_MIN;
	uint8_t x134 = 1U;
	volatile int32_t x136 = INT32_MIN;

	t29 = (x133%((x134&x135)+x136));

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x141 = -1;
	int32_t x142 = -62344820;
	volatile uint64_t x143 = 7LLU;
	volatile uint64_t t30 = 3854520802104178996LLU;

	t30 = (x141%((x142&x143)+x144));

	if (t30 != 2147483643LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = 1;
	int16_t x146 = -1;
	int8_t x147 = INT8_MAX;
	int8_t x148 = -27;
	volatile int32_t t31 = 183888;

	t31 = (x145%((x146&x147)+x148));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x149 = 96600;
	static int16_t x150 = INT16_MIN;
	static int32_t x151 = -123182128;
	uint16_t x152 = UINT16_MAX;

	t32 = (x149%((x150&x151)+x152));

	if (t32 != 96600) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x153 = 15998U;
	static int8_t x155 = -1;
	int16_t x156 = INT16_MAX;
	uint32_t t33 = 0U;

	t33 = (x153%((x154&x155)+x156));

	if (t33 != 15998U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x158 = INT64_MIN;
	uint64_t t34 = 144778883LLU;

	t34 = (x157%((x158&x159)+x160));

	if (t34 != 40848025LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x165 = 29LLU;
	int64_t x167 = 158112506939894567LL;
	uint8_t x168 = 4U;

	t35 = (x165%((x166&x167)+x168));

	if (t35 != 29LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x169 = INT64_MIN;
	uint64_t x170 = 542066373322085849LLU;
	int32_t x171 = INT32_MIN;
	uint32_t x172 = 4U;
	volatile uint64_t t36 = 2881507421641726LLU;

	t36 = (x169%((x170&x171)+x172));

	if (t36 != 8243697950916540LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x173 = -794;
	uint32_t x174 = 9533U;
	int8_t x175 = INT8_MIN;
	volatile int64_t x176 = -7627852LL;
	static volatile int64_t t37 = 18426LL;

	t37 = (x173%((x174&x175)+x176));

	if (t37 != -794LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x177 = INT16_MIN;
	int32_t x178 = INT32_MAX;
	uint16_t x180 = UINT16_MAX;

	t38 = (x177%((x178&x179)+x180));

	if (t38 != 2147385346U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = INT8_MAX;
	static volatile int64_t x182 = -1LL;
	int32_t x183 = -802823307;
	int64_t x184 = -240611510815LL;

	t39 = (x181%((x182&x183)+x184));

	if (t39 != 127LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x185 = INT16_MIN;
	volatile uint64_t x186 = 8618512039166727994LLU;
	volatile uint32_t x188 = UINT32_MAX;
	volatile uint64_t t40 = 13115902142074LLU;

	t40 = (x185%((x186&x187)+x188));

	if (t40 != 1209719990375120898LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x190 = UINT32_MAX;
	int32_t x191 = 76238976;
	volatile uint32_t t41 = 464579U;

	t41 = (x189%((x190&x191)+x192));

	if (t41 != 24763952U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x193 = 2620LLU;
	static volatile int32_t x194 = INT32_MAX;
	static uint8_t x195 = UINT8_MAX;
	static volatile int32_t x196 = INT32_MIN;

	t42 = (x193%((x194&x195)+x196));

	if (t42 != 2620LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x197 = -1LL;
	int64_t x198 = INT64_MIN;
	int32_t x199 = INT32_MIN;
	uint8_t x200 = 0U;
	int64_t t43 = -171706LL;

	t43 = (x197%((x198&x199)+x200));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x201 = INT16_MIN;
	int16_t x202 = INT16_MIN;
	int16_t x203 = INT16_MIN;
	uint16_t x204 = UINT16_MAX;
	volatile int32_t t44 = 3854379;

	t44 = (x201%((x202&x203)+x204));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x207 = 186;
	uint32_t x208 = 20695U;
	uint64_t t45 = 510441350164765LLU;

	t45 = (x205%((x206&x207)+x208));

	if (t45 != 14714LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x209 = 2760254;
	uint8_t x212 = 6U;
	int64_t t46 = -2429LL;

	t46 = (x209%((x210&x211)+x212));

	if (t46 != 8246LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x213 = UINT32_MAX;
	int8_t x214 = 0;
	static uint8_t x216 = 62U;

	t47 = (x213%((x214&x215)+x216));

	if (t47 != 3U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = INT16_MIN;
	uint16_t x218 = UINT16_MAX;
	uint8_t x219 = UINT8_MAX;
	int32_t x220 = -1;

	t48 = (x217%((x218&x219)+x220));

	if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x221 = INT32_MAX;
	uint64_t x223 = 49LLU;
	int16_t x224 = INT16_MIN;
	volatile uint64_t t49 = 87460286586LLU;

	t49 = (x221%((x222&x223)+x224));

	if (t49 != 2147483647LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x225 = INT16_MAX;
	int32_t x226 = 9822;
	uint64_t x227 = 259962602LLU;
	int8_t x228 = -1;
	volatile uint64_t t50 = 753621632LLU;

	t50 = (x225%((x226&x227)+x228));

	if (t50 != 3364LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x233 = 102U;
	uint64_t x234 = 2559377LLU;
	int16_t x235 = -1;
	int64_t x236 = 2868124459LL;
	static volatile uint64_t t51 = 339LLU;

	t51 = (x233%((x234&x235)+x236));

	if (t51 != 102LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x238 = INT16_MIN;
	static int32_t x240 = -1;
	volatile int32_t t52 = -13149298;

	t52 = (x237%((x238&x239)+x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x241 = 17011421U;
	int64_t x243 = 83935563011248LL;
	int64_t t53 = -17244255LL;

	t53 = (x241%((x242&x243)+x244));

	if (t53 != 17011421LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x247 = UINT32_MAX;
	uint16_t x248 = UINT16_MAX;
	volatile int64_t t54 = 14211628321477LL;

	t54 = (x245%((x246&x247)+x248));

	if (t54 != 242LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = 2200000;
	int64_t x251 = INT64_MIN;
	static volatile uint32_t x252 = 4575U;
	volatile int64_t t55 = 33870922LL;

	t55 = (x249%((x250&x251)+x252));

	if (t55 != 2200000LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x253 = 0U;
	static uint16_t x254 = 56U;
	int8_t x255 = INT8_MIN;
	int32_t x256 = -26898;

	t56 = (x253%((x254&x255)+x256));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = INT16_MIN;
	volatile uint16_t x258 = 343U;
	int64_t x259 = 186867LL;
	int64_t t57 = -15084599381LL;

	t57 = (x257%((x258&x259)+x260));

	if (t57 != -32768LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x264 = UINT16_MAX;

	t58 = (x261%((x262&x263)+x264));

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x265 = 11U;
	uint64_t x266 = 1683729764735809942LLU;
	uint32_t x267 = UINT32_MAX;
	int64_t x268 = -1LL;

	t59 = (x265%((x266&x267)+x268));

	if (t59 != 11LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x269 = -734377838377481LL;
	int8_t x270 = -1;
	volatile int8_t x271 = INT8_MAX;
	int64_t x272 = INT64_MIN;
	static int64_t t60 = -52862358328LL;

	t60 = (x269%((x270&x271)+x272));

	if (t60 != -734377838377481LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x273 = 180459U;
	uint16_t x274 = 4771U;

	t61 = (x273%((x274&x275)+x276));

	if (t61 != 180459U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x277 = INT16_MIN;
	static int16_t x278 = 1;
	int64_t x279 = -1LL;
	static volatile int64_t t62 = -266498324306860892LL;

	t62 = (x277%((x278&x279)+x280));

	if (t62 != -32768LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x289 = -1;
	int64_t x290 = INT64_MAX;
	static volatile int8_t x291 = INT8_MIN;
	int8_t x292 = INT8_MIN;
	int64_t t63 = 222195781895575911LL;

	t63 = (x289%((x290&x291)+x292));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x294 = 335927379112504694LL;
	volatile int8_t x295 = -1;
	volatile int8_t x296 = -1;
	static int64_t t64 = 10445851LL;

	t64 = (x293%((x294&x295)+x296));

	if (t64 != 235LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x297 = 1;
	static uint64_t x298 = 299LLU;
	int32_t x299 = 389;
	static int8_t x300 = INT8_MIN;
	static uint64_t t65 = 7LLU;

	t65 = (x297%((x298&x299)+x300));

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x301 = -3;
	volatile int64_t x302 = -43LL;
	uint16_t x303 = 916U;
	int16_t x304 = INT16_MIN;
	int64_t t66 = 260014107LL;

	t66 = (x301%((x302&x303)+x304));

	if (t66 != -3LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x305 = -1;
	int16_t x306 = -1;
	uint8_t x308 = UINT8_MAX;
	volatile uint64_t t67 = 1628527608313LLU;

	t67 = (x305%((x306&x307)+x308));

	if (t67 != 4733395849665LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x309 = INT16_MIN;
	static int16_t x310 = INT16_MIN;
	uint32_t x311 = 15595319U;
	volatile int16_t x312 = 1;

	t68 = (x309%((x310&x311)+x312));

	if (t68 != 14614253U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x313 = INT64_MAX;
	uint8_t x315 = UINT8_MAX;
	int8_t x316 = -1;
	volatile int64_t t69 = -938978LL;

	t69 = (x313%((x314&x315)+x316));

	if (t69 != 127LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x317 = 1279U;
	volatile uint64_t x318 = 337835426024949740LLU;
	static int64_t x319 = 2788146703546LL;
	uint64_t x320 = 0LLU;
	volatile uint64_t t70 = 36944855784LLU;

	t70 = (x317%((x318&x319)+x320));

	if (t70 != 1279LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x323 = -757120845172389LL;
	static volatile int16_t x324 = -2;
	int64_t t71 = -5031473248224634LL;

	t71 = (x321%((x322&x323)+x324));

	if (t71 != -435LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x330 = -1LL;
	uint64_t x331 = 41019183713LLU;
	uint16_t x332 = UINT16_MAX;
	volatile uint64_t t72 = 36751264585707289LLU;

	t72 = (x329%((x330&x331)+x332));

	if (t72 != 13959308767LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x334 = UINT16_MAX;
	static uint8_t x335 = UINT8_MAX;
	int32_t x336 = INT32_MIN;
	uint32_t t73 = 611591364U;

	t73 = (x333%((x334&x335)+x336));

	if (t73 != 2147483392U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x337 = INT64_MIN;
	uint16_t x338 = 0U;
	uint8_t x339 = 1U;
	int64_t t74 = 1815782452726LL;

	t74 = (x337%((x338&x339)+x340));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x342 = UINT8_MAX;
	int16_t x343 = INT16_MIN;
	volatile int16_t x344 = -1;
	int32_t t75 = -61;

	t75 = (x341%((x342&x343)+x344));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x345 = 445221U;
	uint32_t x346 = 32U;
	static uint8_t x347 = 90U;
	uint32_t t76 = 2271732U;

	t76 = (x345%((x346&x347)+x348));

	if (t76 != 445221U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x349 = 0U;
	static int16_t x350 = -1;
	uint32_t x351 = 14U;
	static volatile int32_t x352 = 248117932;
	volatile uint32_t t77 = 17919185U;

	t77 = (x349%((x350&x351)+x352));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x353 = INT8_MIN;
	int16_t x354 = INT16_MAX;
	int32_t x355 = INT32_MAX;

	t78 = (x353%((x354&x355)+x356));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x357 = 104U;
	volatile int64_t x358 = INT64_MIN;
	volatile int32_t x359 = INT32_MAX;
	uint32_t x360 = UINT32_MAX;

	t79 = (x357%((x358&x359)+x360));

	if (t79 != 104LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x362 = INT64_MIN;
	static uint16_t x363 = UINT16_MAX;
	volatile uint32_t x364 = 463233088U;
	int64_t t80 = 521549LL;

	t80 = (x361%((x362&x363)+x364));

	if (t80 != -32768LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x366 = UINT8_MAX;
	int64_t t81 = 8486838111103153LL;

	t81 = (x365%((x366&x367)+x368));

	if (t81 != 127LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x369 = INT32_MIN;
	int16_t x370 = INT16_MIN;
	volatile uint8_t x371 = UINT8_MAX;
	volatile int16_t x372 = -1;
	volatile int32_t t82 = 156;

	t82 = (x369%((x370&x371)+x372));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x373 = 116612176925032325LLU;
	uint32_t x374 = 67303784U;
	volatile uint8_t x375 = 46U;
	uint16_t x376 = 28U;
	static uint64_t t83 = 26843732689LLU;

	t83 = (x373%((x374&x375)+x376));

	if (t83 != 9LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x385 = 61U;
	int16_t x386 = INT16_MIN;
	static uint64_t x387 = 28913971008677840LLU;
	static volatile int8_t x388 = INT8_MAX;
	volatile uint64_t t84 = 324LLU;

	t84 = (x385%((x386&x387)+x388));

	if (t84 != 61LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x389 = UINT16_MAX;
	uint32_t x390 = UINT32_MAX;
	static int16_t x392 = INT16_MIN;

	t85 = (x389%((x390&x391)+x392));

	if (t85 != 65535LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x393 = 1U;
	uint16_t x394 = 8433U;
	static int32_t x395 = 1;
	int32_t x396 = 600674897;
	volatile int32_t t86 = 1;

	t86 = (x393%((x394&x395)+x396));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x397 = INT8_MAX;
	static int8_t x398 = -1;
	volatile int64_t x399 = 101101545758590LL;
	static int16_t x400 = INT16_MIN;

	t87 = (x397%((x398&x399)+x400));

	if (t87 != 127LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x402 = -44;
	uint8_t x403 = 10U;
	static int64_t x404 = -1LL;
	int64_t t88 = -6819851265LL;

	t88 = (x401%((x402&x403)+x404));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x405 = -1LL;
	uint16_t x406 = UINT16_MAX;
	int32_t x407 = -1;
	uint32_t x408 = 179370U;
	volatile int64_t t89 = -116058LL;

	t89 = (x405%((x406&x407)+x408));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x409 = INT8_MAX;
	int64_t x411 = INT64_MIN;
	uint16_t x412 = UINT16_MAX;
	volatile int64_t t90 = 14815816409570850LL;

	t90 = (x409%((x410&x411)+x412));

	if (t90 != 127LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x413 = UINT64_MAX;
	uint32_t x414 = UINT32_MAX;
	int16_t x415 = 49;
	static int32_t x416 = INT32_MIN;
	uint64_t t91 = 1171062365902702344LLU;

	t91 = (x413%((x414&x415)+x416));

	if (t91 != 9603LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x421 = INT32_MAX;
	int8_t x422 = 0;
	uint16_t x423 = UINT16_MAX;
	int8_t x424 = -25;
	int32_t t92 = 2082;

	t92 = (x421%((x422&x423)+x424));

	if (t92 != 22) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x425 = -1;
	uint64_t x426 = 3010LLU;
	volatile uint64_t t93 = 21170785LLU;

	t93 = (x425%((x426&x427)+x428));

	if (t93 != 127LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x429 = INT64_MIN;
	int64_t x430 = -1LL;
	uint64_t x431 = 30LLU;
	int64_t x432 = INT64_MIN;

	t94 = (x429%((x430&x431)+x432));

	if (t94 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x437 = INT16_MAX;
	int8_t x439 = -15;
	int64_t x440 = 1584769733298LL;
	int64_t t95 = -3015444443332425LL;

	t95 = (x437%((x438&x439)+x440));

	if (t95 != 32767LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x441 = INT8_MAX;
	volatile int64_t x444 = INT64_MIN;
	int64_t t96 = 13150744375941554LL;

	t96 = (x441%((x442&x443)+x444));

	if (t96 != 127LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x446 = UINT64_MAX;
	static int32_t x447 = 0;
	int64_t x448 = 1008120157826LL;

	t97 = (x445%((x446&x447)+x448));

	if (t97 != 126584151455LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x449 = -1;
	static int64_t x450 = -1LL;
	uint16_t x451 = UINT16_MAX;

	t98 = (x449%((x450&x451)+x452));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x453 = INT64_MIN;
	volatile int8_t x454 = INT8_MIN;
	volatile int8_t x455 = -5;
	int32_t x456 = -1;
	volatile int64_t t99 = 4535551138484095LL;

	t99 = (x453%((x454&x455)+x456));

	if (t99 != -128LL) { NG(); } else { ; }
	
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


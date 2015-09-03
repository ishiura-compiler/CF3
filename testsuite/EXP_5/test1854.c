#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 10U;
uint16_t x8 = 9U;
static int32_t t1 = 106;
int8_t x12 = INT8_MIN;
int64_t x14 = -341842LL;
volatile int64_t x17 = -1LL;
static uint32_t x20 = UINT32_MAX;
uint32_t x30 = UINT32_MAX;
int8_t x32 = INT8_MIN;
uint32_t x33 = 12067U;
int8_t x38 = INT8_MIN;
volatile uint8_t x39 = 2U;
int16_t x49 = 127;
int8_t x57 = INT8_MIN;
volatile int8_t x58 = INT8_MIN;
uint8_t x60 = 6U;
int32_t x63 = -6781308;
int32_t t15 = -319644;
uint64_t x73 = 632LLU;
uint32_t x75 = 38862996U;
int32_t t18 = 359148;
int64_t x77 = INT64_MIN;
volatile int8_t x83 = INT8_MAX;
static int8_t x85 = -1;
int8_t x88 = -1;
int64_t x91 = INT64_MIN;
static int16_t x93 = INT16_MIN;
volatile int64_t x99 = INT64_MAX;
int16_t x102 = INT16_MAX;
static int32_t x104 = INT32_MAX;
volatile int32_t t25 = 8140221;
int32_t x107 = INT32_MIN;
uint8_t x110 = UINT8_MAX;
uint8_t x111 = 32U;
volatile int32_t t27 = 0;
int16_t x115 = -1;
uint64_t x116 = 2462LLU;
static uint16_t x121 = UINT16_MAX;
volatile uint64_t x122 = 21LLU;
int32_t x126 = INT32_MIN;
volatile int16_t x134 = 9998;
int32_t t33 = 686068382;
int64_t x139 = -10830LL;
int16_t x148 = INT16_MAX;
static uint16_t x150 = 8248U;
int32_t x152 = -1;
int32_t t38 = -2;
volatile int64_t x157 = INT64_MIN;
volatile int16_t x159 = INT16_MIN;
volatile uint16_t x161 = 1U;
uint16_t x167 = 176U;
static int16_t x168 = INT16_MIN;
volatile uint8_t x192 = 0U;
uint64_t x205 = UINT64_MAX;
static int32_t x207 = INT32_MAX;
volatile int32_t t53 = -163668867;
uint8_t x226 = 3U;
static uint32_t x230 = UINT32_MAX;
uint32_t x241 = 40U;
int32_t t61 = -1711642;
int8_t x272 = INT8_MIN;
int32_t t67 = 1;
int64_t x275 = -3088LL;
int32_t t68 = 41;
uint16_t x283 = 1U;
volatile int8_t x288 = 46;
int64_t x289 = INT64_MAX;
int16_t x293 = INT16_MAX;
static volatile int16_t x303 = 723;
uint32_t x304 = 15222U;
static volatile uint8_t x307 = UINT8_MAX;
static int64_t x311 = -1LL;
volatile int64_t x312 = -1LL;
volatile int32_t x314 = -16285924;
static int32_t x315 = -1936;
volatile int16_t x316 = -1;
int8_t x320 = -1;
uint32_t x326 = 22779588U;
int32_t x335 = INT32_MAX;
static uint64_t x337 = UINT64_MAX;
uint8_t x353 = 120U;
uint8_t x363 = 7U;
int32_t t91 = 848;
int16_t x370 = -834;
uint16_t x371 = UINT16_MAX;
uint32_t x377 = 60U;
volatile uint64_t x380 = 7242LLU;
int16_t x383 = -996;
int32_t t95 = 2038556;
int8_t x394 = -1;


void f0(void) {
	int64_t x2 = INT64_MIN;
	static int8_t x3 = -1;
	int64_t x4 = INT64_MIN;
	int32_t t0 = -1;

	t0 = (x1==((x2&x3)^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	uint8_t x6 = UINT8_MAX;
	int16_t x7 = INT16_MAX;

	t1 = (x5==((x6&x7)^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	volatile int64_t x10 = INT64_MIN;
	int16_t x11 = 373;
	volatile int32_t t2 = -392473626;

	t2 = (x9==((x10&x11)^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	static uint16_t x15 = 1U;
	int32_t x16 = INT32_MIN;
	int32_t t3 = -27467;

	t3 = (x13==((x14&x15)^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x18 = 1983827619U;
	int32_t x19 = INT32_MIN;
	volatile int32_t t4 = -63382270;

	t4 = (x17==((x18&x19)^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -6;
	uint64_t x22 = 46LLU;
	volatile int64_t x23 = -1LL;
	static uint32_t x24 = 4934U;
	volatile int32_t t5 = 16082;

	t5 = (x21==((x22&x23)^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 23;
	uint64_t x26 = 16345158LLU;
	int16_t x27 = INT16_MIN;
	volatile int8_t x28 = 0;
	volatile int32_t t6 = 61;

	t6 = (x25==((x26&x27)^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = UINT16_MAX;
	static volatile int32_t x31 = 6812;
	volatile int32_t t7 = 174063978;

	t7 = (x29==((x30&x31)^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x34 = 4535321349110023834LLU;
	static int16_t x35 = 0;
	uint16_t x36 = 58U;
	volatile int32_t t8 = 1850148;

	t8 = (x33==((x34&x35)^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	uint8_t x40 = 1U;
	int32_t t9 = 823343061;

	t9 = (x37==((x38&x39)^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x41 = 14708269U;
	int16_t x42 = INT16_MIN;
	volatile int16_t x43 = -8835;
	uint64_t x44 = 40719828709941366LLU;
	volatile int32_t t10 = 492;

	t10 = (x41==((x42&x43)^x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = INT8_MIN;
	static uint8_t x46 = 56U;
	static uint8_t x47 = 59U;
	static volatile int32_t x48 = -52021305;
	int32_t t11 = -4;

	t11 = (x45==((x46&x47)^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = INT8_MIN;
	static volatile uint8_t x51 = 1U;
	volatile uint16_t x52 = 3U;
	static int32_t t12 = 225;

	t12 = (x49==((x50&x51)^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x53 = 1U;
	int32_t x54 = -15952014;
	volatile uint32_t x55 = 1001347434U;
	static uint8_t x56 = UINT8_MAX;
	int32_t t13 = 658;

	t13 = (x53==((x54&x55)^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x59 = 246;
	int32_t t14 = -1;

	t14 = (x57==((x58&x59)^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	int8_t x62 = INT8_MIN;
	int8_t x64 = INT8_MAX;

	t15 = (x61==((x62&x63)^x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	volatile int8_t x66 = 12;
	int32_t x67 = 239704;
	uint32_t x68 = 28U;
	volatile int32_t t16 = -64091;

	t16 = (x65==((x66&x67)^x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = 0;
	int32_t x70 = INT32_MIN;
	static uint64_t x71 = 14027286397LLU;
	volatile int8_t x72 = -1;
	volatile int32_t t17 = -13551001;

	t17 = (x69==((x70&x71)^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = INT8_MAX;
	static volatile int64_t x76 = 591LL;

	t18 = (x73==((x74&x75)^x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x78 = INT8_MIN;
	int8_t x79 = -1;
	static int8_t x80 = INT8_MIN;
	int32_t t19 = 73520;

	t19 = (x77==((x78&x79)^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = 126725742949073411LL;
	int8_t x82 = 1;
	uint64_t x84 = 7285LLU;
	volatile int32_t t20 = -209;

	t20 = (x81==((x82&x83)^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = 9605397;
	uint64_t x87 = 53037687LLU;
	volatile int32_t t21 = -1257;

	t21 = (x85==((x86&x87)^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 1U;
	static volatile uint64_t x90 = UINT64_MAX;
	int8_t x92 = 40;
	int32_t t22 = -62;

	t22 = (x89==((x90&x91)^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x94 = 3996LLU;
	int32_t x95 = 860779;
	int64_t x96 = -1LL;
	volatile int32_t t23 = -7019563;

	t23 = (x93==((x94&x95)^x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 7220U;
	uint32_t x98 = 950561872U;
	uint8_t x100 = 1U;
	int32_t t24 = 1652;

	t24 = (x97==((x98&x99)^x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = INT16_MAX;
	volatile int8_t x103 = -1;

	t25 = (x101==((x102&x103)^x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	int32_t x106 = INT32_MIN;
	int64_t x108 = INT64_MIN;
	volatile int32_t t26 = -5;

	t26 = (x105==((x106&x107)^x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = UINT32_MAX;
	volatile int64_t x112 = -65714370LL;

	t27 = (x109==((x110&x111)^x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = 12;
	static int64_t x114 = -1LL;
	volatile int32_t t28 = 553533;

	t28 = (x113==((x114&x115)^x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = -12209;
	int16_t x118 = INT16_MIN;
	int32_t x119 = -720591466;
	static int64_t x120 = INT64_MIN;
	static volatile int32_t t29 = -119;

	t29 = (x117==((x118&x119)^x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x123 = -1;
	int64_t x124 = -137152977256502048LL;
	volatile int32_t t30 = -1;

	t30 = (x121==((x122&x123)^x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 8U;
	volatile uint64_t x127 = 1586028215263720LLU;
	int16_t x128 = INT16_MIN;
	int32_t t31 = -466075265;

	t31 = (x125==((x126&x127)^x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x129 = 1U;
	volatile int16_t x130 = -15;
	int8_t x131 = -1;
	static volatile int16_t x132 = 3699;
	int32_t t32 = 1139;

	t32 = (x129==((x130&x131)^x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -1LL;
	int64_t x135 = INT64_MAX;
	int32_t x136 = INT32_MAX;

	t33 = (x133==((x134&x135)^x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 3U;
	int32_t x138 = INT32_MIN;
	uint8_t x140 = UINT8_MAX;
	volatile int32_t t34 = 15367348;

	t34 = (x137==((x138&x139)^x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -36;
	static uint16_t x142 = 7U;
	int32_t x143 = 106132;
	int64_t x144 = INT64_MAX;
	int32_t t35 = 16231;

	t35 = (x141==((x142&x143)^x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x145 = UINT16_MAX;
	int16_t x146 = -1;
	uint64_t x147 = 185660478LLU;
	int32_t t36 = -36102;

	t36 = (x145==((x146&x147)^x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = INT64_MAX;
	uint16_t x151 = 21U;
	volatile int32_t t37 = -3192;

	t37 = (x149==((x150&x151)^x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = UINT32_MAX;
	int16_t x154 = -1;
	uint8_t x155 = 3U;
	volatile uint16_t x156 = 2560U;

	t38 = (x153==((x154&x155)^x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = -1LL;
	static int8_t x160 = INT8_MIN;
	static volatile int32_t t39 = -13281;

	t39 = (x157==((x158&x159)^x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x162 = 3954U;
	int64_t x163 = INT64_MIN;
	int16_t x164 = INT16_MIN;
	volatile int32_t t40 = -1206808;

	t40 = (x161==((x162&x163)^x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = INT8_MAX;
	int32_t x166 = -1;
	volatile int32_t t41 = 5248;

	t41 = (x165==((x166&x167)^x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 223583LLU;
	volatile int32_t x170 = -1;
	int64_t x171 = INT64_MIN;
	uint64_t x172 = UINT64_MAX;
	volatile int32_t t42 = -35780;

	t42 = (x169==((x170&x171)^x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -1;
	int8_t x174 = 0;
	volatile uint64_t x175 = UINT64_MAX;
	int64_t x176 = INT64_MAX;
	int32_t t43 = -938079312;

	t43 = (x173==((x174&x175)^x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 60U;
	volatile uint16_t x178 = UINT16_MAX;
	int8_t x179 = -1;
	volatile int32_t x180 = INT32_MIN;
	int32_t t44 = -61;

	t44 = (x177==((x178&x179)^x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 125288454U;
	int64_t x182 = INT64_MIN;
	static int32_t x183 = -1;
	uint32_t x184 = 185276049U;
	static volatile int32_t t45 = -35;

	t45 = (x181==((x182&x183)^x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	int64_t x186 = INT64_MIN;
	volatile int64_t x187 = 11641342859500LL;
	int8_t x188 = 3;
	int32_t t46 = -53128;

	t46 = (x185==((x186&x187)^x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = UINT8_MAX;
	volatile uint16_t x190 = UINT16_MAX;
	uint16_t x191 = 254U;
	volatile int32_t t47 = 11;

	t47 = (x189==((x190&x191)^x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	int64_t x194 = INT64_MIN;
	int8_t x195 = INT8_MAX;
	uint16_t x196 = 899U;
	volatile int32_t t48 = -98232217;

	t48 = (x193==((x194&x195)^x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	volatile uint16_t x198 = 125U;
	int64_t x199 = 2LL;
	static volatile int64_t x200 = INT64_MIN;
	int32_t t49 = 9922144;

	t49 = (x197==((x198&x199)^x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x201 = 14124141U;
	int32_t x202 = -1;
	static int32_t x203 = INT32_MIN;
	int8_t x204 = INT8_MIN;
	int32_t t50 = -7;

	t50 = (x201==((x202&x203)^x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x206 = UINT8_MAX;
	uint16_t x208 = 3545U;
	volatile int32_t t51 = 1646;

	t51 = (x205==((x206&x207)^x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x209 = 1U;
	uint32_t x210 = 4138725U;
	static uint32_t x211 = 1572U;
	volatile int16_t x212 = INT16_MIN;
	int32_t t52 = -35966;

	t52 = (x209==((x210&x211)^x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x213 = -1LL;
	int8_t x214 = INT8_MAX;
	volatile int64_t x215 = 32LL;
	int16_t x216 = 0;

	t53 = (x213==((x214&x215)^x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	int16_t x218 = INT16_MIN;
	static uint32_t x219 = UINT32_MAX;
	uint16_t x220 = 1U;
	int32_t t54 = -8;

	t54 = (x217==((x218&x219)^x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	uint64_t x222 = UINT64_MAX;
	static uint8_t x223 = 2U;
	static int8_t x224 = INT8_MIN;
	int32_t t55 = 3;

	t55 = (x221==((x222&x223)^x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 1654532364LLU;
	uint8_t x227 = 3U;
	int16_t x228 = INT16_MIN;
	volatile int32_t t56 = 0;

	t56 = (x225==((x226&x227)^x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 29U;
	static volatile uint16_t x231 = UINT16_MAX;
	int16_t x232 = INT16_MAX;
	static int32_t t57 = 46;

	t57 = (x229==((x230&x231)^x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x233 = UINT16_MAX;
	static int32_t x234 = -1;
	int64_t x235 = INT64_MAX;
	volatile uint64_t x236 = 1010437667329LLU;
	static int32_t t58 = 445005479;

	t58 = (x233==((x234&x235)^x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MAX;
	volatile int64_t x238 = INT64_MAX;
	int32_t x239 = -3;
	static uint16_t x240 = 2098U;
	int32_t t59 = 100;

	t59 = (x237==((x238&x239)^x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x242 = 16359;
	int8_t x243 = INT8_MAX;
	static int64_t x244 = -797440302564250LL;
	volatile int32_t t60 = -8883;

	t60 = (x241==((x242&x243)^x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint64_t x245 = 3816211LLU;
	static int16_t x246 = 34;
	int32_t x247 = INT32_MAX;
	uint32_t x248 = 1042772527U;

	t61 = (x245==((x246&x247)^x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = 44032262581LL;
	volatile int16_t x250 = INT16_MAX;
	uint16_t x251 = 53U;
	int32_t x252 = INT32_MIN;
	volatile int32_t t62 = -180780;

	t62 = (x249==((x250&x251)^x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -1;
	volatile int8_t x254 = 0;
	static int8_t x255 = INT8_MAX;
	uint64_t x256 = UINT64_MAX;
	static volatile int32_t t63 = 9;

	t63 = (x253==((x254&x255)^x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 1;
	uint64_t x258 = 798730844742LLU;
	int64_t x259 = 499LL;
	volatile uint64_t x260 = UINT64_MAX;
	volatile int32_t t64 = 840;

	t64 = (x257==((x258&x259)^x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	volatile int16_t x262 = 1;
	static uint32_t x263 = UINT32_MAX;
	volatile int64_t x264 = -1281982LL;
	volatile int32_t t65 = 612;

	t65 = (x261==((x262&x263)^x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	int16_t x266 = INT16_MIN;
	volatile int8_t x267 = 0;
	volatile uint8_t x268 = 11U;
	volatile int32_t t66 = 11;

	t66 = (x265==((x266&x267)^x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = UINT16_MAX;
	int32_t x270 = -1;
	int64_t x271 = -1LL;

	t67 = (x269==((x270&x271)^x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MAX;
	volatile int32_t x274 = -967224;
	volatile int64_t x276 = -1LL;

	t68 = (x273==((x274&x275)^x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	int32_t x278 = -1;
	static uint16_t x279 = 19U;
	int32_t x280 = INT32_MIN;
	volatile int32_t t69 = 0;

	t69 = (x277==((x278&x279)^x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -1;
	int16_t x282 = INT16_MIN;
	volatile uint32_t x284 = 15208846U;
	static int32_t t70 = -1174696;

	t70 = (x281==((x282&x283)^x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x285 = -1LL;
	int32_t x286 = 1016163108;
	volatile int64_t x287 = INT64_MIN;
	int32_t t71 = 20;

	t71 = (x285==((x286&x287)^x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x290 = INT32_MIN;
	uint8_t x291 = 47U;
	uint32_t x292 = 0U;
	int32_t t72 = 2509;

	t72 = (x289==((x290&x291)^x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x294 = -1;
	static uint64_t x295 = UINT64_MAX;
	volatile int64_t x296 = 102998188LL;
	static int32_t t73 = 397;

	t73 = (x293==((x294&x295)^x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	int32_t x298 = INT32_MIN;
	volatile int32_t x299 = -1;
	int16_t x300 = INT16_MAX;
	volatile int32_t t74 = 5;

	t74 = (x297==((x298&x299)^x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -1;
	int8_t x302 = -1;
	volatile int32_t t75 = 402756;

	t75 = (x301==((x302&x303)^x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	int8_t x306 = -1;
	volatile int8_t x308 = 30;
	volatile int32_t t76 = 607574;

	t76 = (x305==((x306&x307)^x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 4U;
	int64_t x310 = INT64_MIN;
	int32_t t77 = 397336070;

	t77 = (x309==((x310&x311)^x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = 39080805;
	int32_t t78 = -3887435;

	t78 = (x313==((x314&x315)^x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -11;
	int64_t x318 = INT64_MIN;
	static volatile int64_t x319 = INT64_MIN;
	int32_t t79 = -411924293;

	t79 = (x317==((x318&x319)^x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = 3;
	static uint8_t x322 = UINT8_MAX;
	int16_t x323 = -1;
	int16_t x324 = INT16_MIN;
	volatile int32_t t80 = 129181;

	t80 = (x321==((x322&x323)^x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 4482U;
	volatile uint8_t x327 = 1U;
	static int8_t x328 = INT8_MIN;
	volatile int32_t t81 = 857536;

	t81 = (x325==((x326&x327)^x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	static int32_t x330 = INT32_MIN;
	volatile uint32_t x331 = 1179755U;
	int32_t x332 = INT32_MIN;
	int32_t t82 = 0;

	t82 = (x329==((x330&x331)^x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 8827U;
	uint64_t x334 = UINT64_MAX;
	int64_t x336 = INT64_MIN;
	volatile int32_t t83 = -30514636;

	t83 = (x333==((x334&x335)^x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x338 = -46;
	int8_t x339 = INT8_MIN;
	static uint16_t x340 = 4U;
	static volatile int32_t t84 = -53077020;

	t84 = (x337==((x338&x339)^x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 94U;
	volatile uint8_t x342 = 4U;
	uint64_t x343 = UINT64_MAX;
	uint16_t x344 = UINT16_MAX;
	volatile int32_t t85 = 900347;

	t85 = (x341==((x342&x343)^x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = 3012230;
	int8_t x346 = INT8_MIN;
	uint16_t x347 = UINT16_MAX;
	int16_t x348 = 90;
	int32_t t86 = 3874371;

	t86 = (x345==((x346&x347)^x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = 261457;
	static int8_t x350 = INT8_MIN;
	int64_t x351 = -1LL;
	int8_t x352 = -16;
	volatile int32_t t87 = -10;

	t87 = (x349==((x350&x351)^x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x354 = 2432594LL;
	uint32_t x355 = 458700U;
	int16_t x356 = INT16_MIN;
	int32_t t88 = -15;

	t88 = (x353==((x354&x355)^x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x357 = INT8_MIN;
	static uint32_t x358 = UINT32_MAX;
	uint8_t x359 = 3U;
	volatile int64_t x360 = INT64_MAX;
	static int32_t t89 = -7677697;

	t89 = (x357==((x358&x359)^x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	static int32_t x362 = INT32_MIN;
	int32_t x364 = -1;
	volatile int32_t t90 = -16392491;

	t90 = (x361==((x362&x363)^x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = UINT16_MAX;
	uint32_t x366 = UINT32_MAX;
	int32_t x367 = 19;
	uint64_t x368 = 143393325074353776LLU;

	t91 = (x365==((x366&x367)^x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = -1LL;
	volatile int64_t x372 = INT64_MIN;
	static volatile int32_t t92 = -817619;

	t92 = (x369==((x370&x371)^x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 4091638903697506LLU;
	uint8_t x374 = 2U;
	int8_t x375 = -1;
	int8_t x376 = INT8_MIN;
	static volatile int32_t t93 = -31;

	t93 = (x373==((x374&x375)^x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x378 = 557216925872709639LLU;
	int64_t x379 = -1LL;
	int32_t t94 = 1626269;

	t94 = (x377==((x378&x379)^x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x381 = INT64_MIN;
	volatile int8_t x382 = INT8_MIN;
	int32_t x384 = INT32_MIN;

	t95 = (x381==((x382&x383)^x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	volatile int32_t x386 = -1;
	static volatile int16_t x387 = 111;
	static int32_t x388 = -411400;
	volatile int32_t t96 = -41086;

	t96 = (x385==((x386&x387)^x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	int8_t x390 = -1;
	int64_t x391 = INT64_MIN;
	int16_t x392 = INT16_MAX;
	static volatile int32_t t97 = 11039;

	t97 = (x389==((x390&x391)^x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 2928971194829099787LLU;
	uint8_t x395 = 5U;
	static uint32_t x396 = 2236U;
	static volatile int32_t t98 = 61801244;

	t98 = (x393==((x394&x395)^x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 370127U;
	static volatile int32_t x398 = INT32_MAX;
	int16_t x399 = -108;
	uint32_t x400 = UINT32_MAX;
	int32_t t99 = -2545570;

	t99 = (x397==((x398&x399)^x400));

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


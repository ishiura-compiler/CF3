#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = UINT8_MAX;
static int16_t x11 = -1;
int32_t x15 = INT32_MIN;
int8_t x20 = -1;
volatile int64_t x25 = INT64_MIN;
volatile int32_t x27 = INT32_MAX;
uint32_t x31 = 1510689265U;
int32_t t8 = -3890;
volatile uint16_t x39 = 4501U;
volatile int32_t x51 = -1245;
static int64_t x54 = INT64_MIN;
int32_t x55 = 1;
int8_t x57 = INT8_MIN;
volatile int16_t x58 = INT16_MAX;
uint16_t x65 = UINT16_MAX;
int32_t t16 = -120991771;
static int32_t x74 = INT32_MIN;
uint16_t x76 = 3507U;
volatile uint16_t x79 = UINT16_MAX;
int64_t x80 = INT64_MIN;
volatile int32_t t19 = -91;
static int16_t x81 = INT16_MIN;
uint16_t x85 = UINT16_MAX;
uint16_t x88 = UINT16_MAX;
uint16_t x90 = 447U;
static int32_t x101 = -628691082;
int64_t x103 = -2124852260029598LL;
int32_t x104 = INT32_MIN;
uint8_t x111 = 90U;
volatile int32_t t26 = 97016;
int32_t x114 = INT32_MIN;
int32_t t28 = -1353632;
static int8_t x128 = -1;
uint32_t x139 = 206U;
volatile int32_t t36 = -712;
volatile int32_t t37 = -434;
int8_t x157 = INT8_MAX;
static uint16_t x160 = 1769U;
int64_t x167 = INT64_MIN;
int8_t x168 = INT8_MIN;
volatile int32_t t41 = -420;
uint32_t x175 = 713U;
int64_t x178 = INT64_MIN;
static volatile int64_t x181 = -1LL;
uint32_t x190 = UINT32_MAX;
uint64_t x204 = 291226204LLU;
static volatile int8_t x205 = -7;
volatile int8_t x206 = INT8_MIN;
int16_t x235 = INT16_MIN;
uint8_t x236 = UINT8_MAX;
int8_t x241 = INT8_MIN;
int64_t x244 = INT64_MAX;
int16_t x250 = INT16_MIN;
uint16_t x251 = 4U;
int64_t x262 = INT64_MIN;
int8_t x264 = INT8_MIN;
uint16_t x269 = 1438U;
int16_t x272 = INT16_MIN;
static volatile int32_t t66 = -7256557;
int8_t x277 = 2;
int32_t x283 = -1;
int32_t t68 = -1;
int64_t x290 = INT64_MAX;
volatile int32_t t71 = -23632;
int32_t t72 = -11933;
int32_t x301 = 27585;
int32_t x313 = -115;
volatile int32_t t79 = -472;
volatile int32_t x330 = -1;
static volatile uint64_t x333 = 6086941LLU;
static int8_t x335 = -36;
static int8_t x336 = INT8_MIN;
int32_t t81 = 137003339;
int8_t x338 = INT8_MAX;
static volatile uint64_t x344 = 63LLU;
volatile int32_t t83 = -15086;
volatile uint64_t x347 = 427451855519343LLU;
int32_t t85 = -23748451;
int64_t x359 = -1LL;
int32_t t87 = -65;
volatile int16_t x363 = -1;
int16_t x364 = 27;
static volatile int32_t t89 = -1031190;
uint32_t x383 = 570U;
uint16_t x387 = UINT16_MAX;
static volatile int32_t t94 = 15;
int32_t x389 = INT32_MIN;
int8_t x391 = -2;
int64_t x394 = -1832315LL;
uint32_t x402 = UINT32_MAX;
int16_t x407 = INT16_MIN;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	uint16_t x2 = 22U;
	uint16_t x3 = 26U;
	volatile int16_t x4 = INT16_MIN;
	volatile int32_t t0 = -7258011;

	t0 = (x1==((x2%x3)<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = -1;
	volatile int64_t x7 = INT64_MAX;
	int64_t x8 = INT64_MIN;
	static int32_t t1 = 14;

	t1 = (x5==((x6%x7)<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static int8_t x10 = INT8_MAX;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 49744;

	t2 = (x9==((x10%x11)<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = -29;
	int32_t x14 = INT32_MAX;
	int16_t x16 = INT16_MAX;
	volatile int32_t t3 = 25660868;

	t3 = (x13==((x14%x15)<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	volatile int64_t x18 = -1LL;
	volatile int32_t x19 = INT32_MIN;
	int32_t t4 = 9;

	t4 = (x17==((x18%x19)<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = 7484;
	int16_t x22 = INT16_MIN;
	volatile int8_t x23 = -7;
	int16_t x24 = INT16_MIN;
	static volatile int32_t t5 = -15520;

	t5 = (x21==((x22%x23)<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = -1;
	int16_t x28 = INT16_MIN;
	static int32_t t6 = -687899;

	t6 = (x25==((x26%x27)<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = -6512LL;
	int16_t x30 = INT16_MIN;
	static int16_t x32 = INT16_MAX;
	static volatile int32_t t7 = 1020740585;

	t7 = (x29==((x30%x31)<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	static int32_t x34 = INT32_MIN;
	uint32_t x35 = 1529491008U;
	int64_t x36 = -13LL;

	t8 = (x33==((x34%x35)<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	uint64_t x38 = 78LLU;
	static uint32_t x40 = 5509U;
	int32_t t9 = 142;

	t9 = (x37==((x38%x39)<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = 13769;
	volatile uint32_t x42 = 68109802U;
	int32_t x43 = -5303090;
	static int32_t x44 = INT32_MIN;
	int32_t t10 = -20;

	t10 = (x41==((x42%x43)<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	uint8_t x46 = 19U;
	static uint8_t x47 = 18U;
	static int64_t x48 = 801679771458LL;
	volatile int32_t t11 = -194;

	t11 = (x45==((x46%x47)<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	int32_t x50 = INT32_MIN;
	volatile int64_t x52 = -1LL;
	static int32_t t12 = 33;

	t12 = (x49==((x50%x51)<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 0U;
	static uint64_t x56 = 950476119587LLU;
	static volatile int32_t t13 = 3242355;

	t13 = (x53==((x54%x55)<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x59 = INT8_MIN;
	uint16_t x60 = 19165U;
	int32_t t14 = -459200;

	t14 = (x57==((x58%x59)<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	int64_t x62 = -1LL;
	int32_t x63 = INT32_MAX;
	int64_t x64 = -1LL;
	volatile int32_t t15 = 9;

	t15 = (x61==((x62%x63)<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = INT16_MIN;
	int64_t x67 = 239LL;
	int16_t x68 = 7;

	t16 = (x65==((x66%x67)<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x69 = -1LL;
	int8_t x70 = 20;
	static int16_t x71 = -1;
	static int32_t x72 = -1;
	int32_t t17 = -99510;

	t17 = (x69==((x70%x71)<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x73 = -1;
	int8_t x75 = -1;
	int32_t t18 = -4215;

	t18 = (x73==((x74%x75)<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	int8_t x78 = INT8_MIN;

	t19 = (x77==((x78%x79)<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 11395U;
	int8_t x83 = 1;
	volatile int64_t x84 = -1LL;
	static int32_t t20 = -40844931;

	t20 = (x81==((x82%x83)<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = 0;
	volatile int32_t x87 = -63199;
	int32_t t21 = 15;

	t21 = (x85==((x86%x87)<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -11;
	volatile int8_t x91 = INT8_MAX;
	static int32_t x92 = INT32_MAX;
	volatile int32_t t22 = 3100;

	t22 = (x89==((x90%x91)<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -3484;
	int32_t x94 = 285480;
	int64_t x95 = -816062772LL;
	uint16_t x96 = 1625U;
	volatile int32_t t23 = -18;

	t23 = (x93==((x94%x95)<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	volatile int64_t x98 = 43799103689419LL;
	uint32_t x99 = 1081U;
	int32_t x100 = INT32_MIN;
	static volatile int32_t t24 = 116279;

	t24 = (x97==((x98%x99)<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x102 = INT64_MIN;
	int32_t t25 = -60787;

	t25 = (x101==((x102%x103)<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = INT64_MIN;
	int8_t x110 = -54;
	uint16_t x112 = 8U;

	t26 = (x109==((x110%x111)<=x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = UINT8_MAX;
	volatile int8_t x115 = INT8_MIN;
	uint8_t x116 = 91U;
	volatile int32_t t27 = 807993838;

	t27 = (x113==((x114%x115)<=x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = 216890U;
	int16_t x118 = 2294;
	uint16_t x119 = 26U;
	int64_t x120 = 0LL;

	t28 = (x117==((x118%x119)<=x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x121 = 76U;
	int16_t x122 = INT16_MIN;
	volatile uint64_t x123 = UINT64_MAX;
	int32_t x124 = -6770;
	volatile int32_t t29 = 0;

	t29 = (x121==((x122%x123)<=x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MIN;
	static int32_t x126 = -1;
	int32_t x127 = -1;
	int32_t t30 = -362;

	t30 = (x125==((x126%x127)<=x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MAX;
	static int8_t x130 = -3;
	volatile uint8_t x131 = UINT8_MAX;
	int16_t x132 = INT16_MIN;
	volatile int32_t t31 = 47;

	t31 = (x129==((x130%x131)<=x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x133 = 128619U;
	static int8_t x134 = 33;
	int16_t x135 = -14;
	volatile uint8_t x136 = 50U;
	int32_t t32 = -161;

	t32 = (x133==((x134%x135)<=x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x137 = INT64_MIN;
	uint8_t x138 = 11U;
	int32_t x140 = 0;
	volatile int32_t t33 = -67960;

	t33 = (x137==((x138%x139)<=x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x141 = 11U;
	int8_t x142 = -16;
	volatile int64_t x143 = INT64_MIN;
	volatile int32_t x144 = 0;
	int32_t t34 = 15;

	t34 = (x141==((x142%x143)<=x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = INT64_MIN;
	volatile int64_t x146 = INT64_MIN;
	volatile uint32_t x147 = 12U;
	volatile uint16_t x148 = UINT16_MAX;
	int32_t t35 = 29;

	t35 = (x145==((x146%x147)<=x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MIN;
	volatile int64_t x150 = -1LL;
	int16_t x151 = INT16_MIN;
	static volatile uint8_t x152 = 1U;

	t36 = (x149==((x150%x151)<=x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x153 = INT16_MIN;
	volatile int8_t x154 = INT8_MIN;
	uint64_t x155 = 64756107LLU;
	volatile uint8_t x156 = UINT8_MAX;

	t37 = (x153==((x154%x155)<=x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x158 = -3990636LL;
	static uint64_t x159 = 16362LLU;
	volatile int32_t t38 = -3819;

	t38 = (x157==((x158%x159)<=x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = INT64_MAX;
	int64_t x162 = INT64_MAX;
	uint32_t x163 = 852U;
	volatile int64_t x164 = INT64_MAX;
	volatile int32_t t39 = -1642;

	t39 = (x161==((x162%x163)<=x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x165 = 2064532297620562LLU;
	uint64_t x166 = 10558445547628265LLU;
	static int32_t t40 = -65;

	t40 = (x165==((x166%x167)<=x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MIN;
	int32_t x170 = -1;
	int32_t x171 = INT32_MIN;
	uint16_t x172 = 1U;

	t41 = (x169==((x170%x171)<=x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x173 = UINT16_MAX;
	static int32_t x174 = INT32_MIN;
	int16_t x176 = INT16_MIN;
	int32_t t42 = 10460002;

	t42 = (x173==((x174%x175)<=x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x177 = INT64_MIN;
	volatile int8_t x179 = INT8_MAX;
	volatile int32_t x180 = INT32_MAX;
	static int32_t t43 = -30;

	t43 = (x177==((x178%x179)<=x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x182 = INT8_MIN;
	static int64_t x183 = INT64_MAX;
	int32_t x184 = 79;
	int32_t t44 = 65142319;

	t44 = (x181==((x182%x183)<=x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = INT64_MAX;
	int8_t x186 = INT8_MIN;
	int32_t x187 = -10172212;
	uint32_t x188 = UINT32_MAX;
	int32_t t45 = 32;

	t45 = (x185==((x186%x187)<=x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x189 = -11858;
	int32_t x191 = INT32_MIN;
	int64_t x192 = INT64_MIN;
	volatile int32_t t46 = 2205;

	t46 = (x189==((x190%x191)<=x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x193 = INT32_MIN;
	uint64_t x194 = 111LLU;
	volatile int16_t x195 = -1;
	int64_t x196 = -1LL;
	int32_t t47 = -274003;

	t47 = (x193==((x194%x195)<=x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x197 = INT8_MIN;
	static uint8_t x198 = 1U;
	int64_t x199 = -14065613315195LL;
	static volatile int16_t x200 = INT16_MIN;
	static volatile int32_t t48 = -32902;

	t48 = (x197==((x198%x199)<=x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x201 = INT16_MIN;
	uint64_t x202 = 65LLU;
	volatile int64_t x203 = -1LL;
	int32_t t49 = -2002550;

	t49 = (x201==((x202%x203)<=x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x207 = INT64_MIN;
	uint32_t x208 = 128317U;
	int32_t t50 = -24443731;

	t50 = (x205==((x206%x207)<=x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = -1;
	uint32_t x210 = 209U;
	int32_t x211 = INT32_MIN;
	uint8_t x212 = 31U;
	static int32_t t51 = 17687;

	t51 = (x209==((x210%x211)<=x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = INT32_MAX;
	int8_t x214 = INT8_MAX;
	volatile uint32_t x215 = 107U;
	int64_t x216 = INT64_MAX;
	int32_t t52 = -46493901;

	t52 = (x213==((x214%x215)<=x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x221 = INT8_MIN;
	static uint16_t x222 = 553U;
	volatile int16_t x223 = -1;
	volatile int8_t x224 = 2;
	volatile int32_t t53 = -57721;

	t53 = (x221==((x222%x223)<=x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = INT32_MAX;
	static int16_t x226 = 2;
	int32_t x227 = -1;
	volatile int32_t x228 = -754318;
	int32_t t54 = 58;

	t54 = (x225==((x226%x227)<=x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x229 = UINT16_MAX;
	uint32_t x230 = 443U;
	int32_t x231 = INT32_MIN;
	uint32_t x232 = 80078U;
	int32_t t55 = 1;

	t55 = (x229==((x230%x231)<=x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x233 = UINT32_MAX;
	int32_t x234 = INT32_MIN;
	volatile int32_t t56 = -3;

	t56 = (x233==((x234%x235)<=x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = INT8_MIN;
	uint8_t x238 = 6U;
	int32_t x239 = INT32_MIN;
	int8_t x240 = 22;
	int32_t t57 = -323432427;

	t57 = (x237==((x238%x239)<=x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x242 = 1;
	volatile uint16_t x243 = 180U;
	volatile int32_t t58 = -397810;

	t58 = (x241==((x242%x243)<=x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x245 = UINT8_MAX;
	volatile int64_t x246 = INT64_MIN;
	volatile uint32_t x247 = UINT32_MAX;
	volatile uint8_t x248 = 4U;
	volatile int32_t t59 = -193423;

	t59 = (x245==((x246%x247)<=x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x249 = UINT16_MAX;
	uint8_t x252 = UINT8_MAX;
	int32_t t60 = 108371526;

	t60 = (x249==((x250%x251)<=x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x253 = 1U;
	static int16_t x254 = INT16_MIN;
	int64_t x255 = 56749695028439192LL;
	static volatile int64_t x256 = INT64_MIN;
	int32_t t61 = 3592;

	t61 = (x253==((x254%x255)<=x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x257 = INT64_MIN;
	volatile int64_t x258 = INT64_MIN;
	int8_t x259 = INT8_MAX;
	static uint8_t x260 = 12U;
	int32_t t62 = 129634;

	t62 = (x257==((x258%x259)<=x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x261 = 5U;
	static int32_t x263 = -1;
	volatile int32_t t63 = -22;

	t63 = (x261==((x262%x263)<=x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = INT8_MAX;
	uint8_t x266 = 3U;
	int16_t x267 = INT16_MIN;
	static int16_t x268 = INT16_MIN;
	volatile int32_t t64 = -194525;

	t64 = (x265==((x266%x267)<=x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x270 = INT16_MAX;
	static uint32_t x271 = 20102862U;
	volatile int32_t t65 = -321023045;

	t65 = (x269==((x270%x271)<=x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = INT8_MIN;
	volatile uint64_t x274 = 475690LLU;
	static volatile int64_t x275 = 13853259634184016LL;
	uint8_t x276 = 3U;

	t66 = (x273==((x274%x275)<=x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x278 = INT16_MIN;
	uint64_t x279 = 1488739LLU;
	static int32_t x280 = -854399717;
	volatile int32_t t67 = -3672;

	t67 = (x277==((x278%x279)<=x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x281 = UINT32_MAX;
	volatile int64_t x282 = INT64_MAX;
	int64_t x284 = 8373059693LL;

	t68 = (x281==((x282%x283)<=x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x285 = UINT64_MAX;
	int16_t x286 = -1;
	volatile int16_t x287 = -506;
	uint8_t x288 = UINT8_MAX;
	static int32_t t69 = 2011872;

	t69 = (x285==((x286%x287)<=x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x289 = INT8_MIN;
	int8_t x291 = INT8_MIN;
	int16_t x292 = INT16_MIN;
	static int32_t t70 = 66007453;

	t70 = (x289==((x290%x291)<=x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x293 = 16;
	int32_t x294 = 49;
	static uint32_t x295 = 4961U;
	uint16_t x296 = 9U;

	t71 = (x293==((x294%x295)<=x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = INT32_MAX;
	uint16_t x298 = 263U;
	volatile uint64_t x299 = UINT64_MAX;
	static volatile int64_t x300 = INT64_MAX;

	t72 = (x297==((x298%x299)<=x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x302 = 981U;
	static uint8_t x303 = 4U;
	static uint32_t x304 = 60733155U;
	volatile int32_t t73 = 0;

	t73 = (x301==((x302%x303)<=x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = 20;
	volatile int16_t x306 = -1;
	uint32_t x307 = 107312364U;
	int64_t x308 = INT64_MIN;
	static volatile int32_t t74 = 13332036;

	t74 = (x305==((x306%x307)<=x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x309 = INT32_MIN;
	uint64_t x310 = 742LLU;
	static int32_t x311 = INT32_MIN;
	static int8_t x312 = INT8_MIN;
	volatile int32_t t75 = 15242;

	t75 = (x309==((x310%x311)<=x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x314 = -1;
	uint16_t x315 = UINT16_MAX;
	static volatile int64_t x316 = 142LL;
	volatile int32_t t76 = -957053717;

	t76 = (x313==((x314%x315)<=x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = INT64_MAX;
	int8_t x318 = INT8_MIN;
	int8_t x319 = INT8_MAX;
	int64_t x320 = INT64_MIN;
	int32_t t77 = 35;

	t77 = (x317==((x318%x319)<=x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x321 = -1LL;
	uint32_t x322 = UINT32_MAX;
	volatile int32_t x323 = INT32_MAX;
	int32_t x324 = -68252096;
	static volatile int32_t t78 = 5052732;

	t78 = (x321==((x322%x323)<=x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x325 = UINT64_MAX;
	volatile int16_t x326 = -2670;
	int16_t x327 = INT16_MIN;
	uint64_t x328 = 107831696882796LLU;

	t79 = (x325==((x326%x327)<=x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = -28;
	int8_t x331 = INT8_MIN;
	volatile int64_t x332 = 24331LL;
	static int32_t t80 = 1;

	t80 = (x329==((x330%x331)<=x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x334 = INT32_MAX;

	t81 = (x333==((x334%x335)<=x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x337 = -1;
	uint8_t x339 = UINT8_MAX;
	int32_t x340 = -1;
	int32_t t82 = -1;

	t82 = (x337==((x338%x339)<=x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x341 = 0LLU;
	int16_t x342 = INT16_MIN;
	int16_t x343 = 9674;

	t83 = (x341==((x342%x343)<=x344));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x345 = 117U;
	int32_t x346 = INT32_MIN;
	volatile uint8_t x348 = 2U;
	int32_t t84 = 1706569;

	t84 = (x345==((x346%x347)<=x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x349 = 5U;
	int8_t x350 = INT8_MIN;
	uint64_t x351 = 100648699027743201LLU;
	int32_t x352 = -1;

	t85 = (x349==((x350%x351)<=x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x353 = UINT8_MAX;
	uint64_t x354 = 6765LLU;
	volatile uint16_t x355 = 3427U;
	int16_t x356 = -1;
	int32_t t86 = 22;

	t86 = (x353==((x354%x355)<=x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x357 = -14029;
	int8_t x358 = INT8_MIN;
	int8_t x360 = -1;

	t87 = (x357==((x358%x359)<=x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x361 = INT32_MAX;
	static uint8_t x362 = 29U;
	int32_t t88 = 31418490;

	t88 = (x361==((x362%x363)<=x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x365 = UINT64_MAX;
	static int64_t x366 = -1LL;
	uint8_t x367 = UINT8_MAX;
	volatile int32_t x368 = INT32_MAX;

	t89 = (x365==((x366%x367)<=x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x369 = INT8_MIN;
	int16_t x370 = -37;
	int32_t x371 = INT32_MAX;
	int64_t x372 = INT64_MAX;
	volatile int32_t t90 = -674;

	t90 = (x369==((x370%x371)<=x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x373 = -1;
	static int8_t x374 = INT8_MIN;
	int64_t x375 = INT64_MIN;
	int32_t x376 = -10038018;
	int32_t t91 = 10079720;

	t91 = (x373==((x374%x375)<=x376));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x377 = INT32_MAX;
	int16_t x378 = INT16_MAX;
	uint8_t x379 = UINT8_MAX;
	int32_t x380 = -7;
	static volatile int32_t t92 = -7;

	t92 = (x377==((x378%x379)<=x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x381 = 47U;
	int64_t x382 = INT64_MIN;
	uint64_t x384 = 14061LLU;
	int32_t t93 = 261;

	t93 = (x381==((x382%x383)<=x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x385 = -6;
	int16_t x386 = INT16_MIN;
	int32_t x388 = 36;

	t94 = (x385==((x386%x387)<=x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x390 = 46;
	static int8_t x392 = INT8_MIN;
	int32_t t95 = 1452629;

	t95 = (x389==((x390%x391)<=x392));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x393 = -6;
	int8_t x395 = INT8_MIN;
	volatile uint8_t x396 = 1U;
	int32_t t96 = 103395042;

	t96 = (x393==((x394%x395)<=x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x397 = 1;
	uint16_t x398 = 0U;
	static int32_t x399 = -47;
	int16_t x400 = INT16_MAX;
	volatile int32_t t97 = 480648;

	t97 = (x397==((x398%x399)<=x400));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x401 = 10561;
	static volatile int8_t x403 = INT8_MIN;
	static int8_t x404 = -1;
	volatile int32_t t98 = -263878;

	t98 = (x401==((x402%x403)<=x404));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x405 = UINT64_MAX;
	int64_t x406 = INT64_MIN;
	int32_t x408 = INT32_MAX;
	volatile int32_t t99 = 0;

	t99 = (x405==((x406%x407)<=x408));

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


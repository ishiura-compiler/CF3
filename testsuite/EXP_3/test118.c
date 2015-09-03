#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = 1;
volatile int8_t x3 = INT8_MIN;
volatile uint8_t x4 = 92U;
int64_t x6 = INT64_MAX;
static uint16_t x18 = UINT16_MAX;
int32_t x22 = INT32_MIN;
int32_t x25 = INT32_MAX;
volatile int16_t x26 = -16;
volatile int32_t t4 = -40879;
static volatile uint64_t x30 = UINT64_MAX;
static uint16_t x31 = UINT16_MAX;
uint8_t x35 = UINT8_MAX;
uint16_t x38 = 30635U;
int16_t x43 = INT16_MAX;
volatile int32_t x44 = INT32_MIN;
volatile int64_t x46 = INT64_MIN;
int32_t t9 = 784057;
volatile int32_t x52 = 133;
static int32_t t12 = -7027;
uint32_t x68 = 56703U;
int8_t x69 = INT8_MIN;
int16_t x70 = INT16_MIN;
volatile uint16_t x75 = 13U;
int8_t x86 = -3;
int32_t x89 = INT32_MIN;
int8_t x90 = INT8_MIN;
uint8_t x91 = 3U;
uint16_t x98 = UINT16_MAX;
static int16_t x109 = 0;
int8_t x110 = -16;
uint64_t x112 = 448259746LLU;
static volatile uint64_t t23 = 38858LLU;
int16_t x116 = INT16_MIN;
int16_t x130 = INT16_MIN;
int64_t t26 = 0LL;
int32_t x134 = INT32_MIN;
volatile uint32_t t27 = 173U;
int16_t x138 = INT16_MIN;
static uint32_t x142 = 39U;
int32_t x144 = INT32_MIN;
int64_t t30 = -716051LL;
uint8_t x159 = 41U;
int64_t t32 = 523525440027743895LL;
volatile int16_t x165 = INT16_MAX;
int16_t x171 = INT16_MIN;
int8_t x174 = INT8_MAX;
int16_t x176 = INT16_MIN;
static volatile uint16_t x178 = 10700U;
uint32_t x180 = 9576688U;
uint32_t x185 = 201U;
int32_t x187 = 40466;
int64_t x193 = -1LL;
volatile int16_t x194 = 41;
int16_t x196 = -75;
int16_t x199 = 1;
volatile int32_t t40 = 835869361;
volatile int64_t x202 = INT64_MIN;
static int64_t x207 = -2730820040829513116LL;
int8_t x213 = INT8_MIN;
static uint32_t x215 = 3719858U;
uint8_t x219 = 59U;
int64_t t45 = -1LL;
uint32_t x227 = 3108U;
uint64_t x228 = UINT64_MAX;
volatile uint16_t x229 = UINT16_MAX;
int16_t x249 = INT16_MIN;
int32_t t52 = 1;
uint64_t x256 = UINT64_MAX;
uint8_t x258 = UINT8_MAX;
volatile int16_t x260 = INT16_MIN;
int16_t x267 = INT16_MIN;
volatile int32_t x268 = 249;
int32_t t56 = -15641;
volatile int64_t x274 = -1LL;
uint32_t t57 = 89492022U;
int64_t t58 = -184LL;
int32_t x283 = INT32_MIN;
int64_t x289 = -1LL;
int32_t x291 = -1;
int64_t x295 = INT64_MIN;
static int8_t x299 = INT8_MIN;
uint64_t x306 = 195894662278LLU;
static uint32_t t67 = 32U;
uint8_t x324 = 15U;
uint16_t x329 = 94U;
volatile uint16_t x336 = 6803U;
volatile int32_t t72 = -36432;
volatile uint8_t x339 = 7U;
uint32_t x349 = 40U;
int16_t x355 = -1;
static uint16_t x358 = UINT16_MAX;
static uint8_t x359 = UINT8_MAX;
uint32_t x360 = UINT32_MAX;
static int32_t x366 = INT32_MAX;
int32_t t80 = -1334780;
uint32_t x372 = 119U;
volatile uint32_t x373 = 200U;
int16_t x376 = -1;
int16_t x377 = INT16_MIN;
volatile uint32_t x380 = UINT32_MAX;
uint64_t x381 = 859045300184064505LLU;
static int32_t x383 = -1;
uint32_t x385 = UINT32_MAX;
uint8_t x386 = 61U;
int8_t x388 = INT8_MAX;
volatile int64_t x394 = INT64_MIN;
volatile int16_t x395 = INT16_MIN;
static volatile uint16_t x403 = 66U;
int8_t x406 = -1;
static int32_t x410 = 50754898;
int8_t x411 = INT8_MAX;
int16_t x412 = INT16_MIN;
static int32_t t91 = 23478;
uint32_t x428 = 5930U;
int16_t x440 = -35;


void f0(void) {
	uint64_t x2 = 295053126LLU;
	volatile int32_t t0 = -20;

	t0 = ((x1<=x2)+(x3+x4));

	if (t0 != -35) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MIN;
	int16_t x7 = -1;
	static int8_t x8 = -1;
	int32_t t1 = 1909962;

	t1 = ((x5<=x6)+(x7+x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = INT8_MAX;
	uint16_t x19 = UINT16_MAX;
	uint64_t x20 = 9451LLU;
	uint64_t t2 = 10930061317533LLU;

	t2 = ((x17<=x18)+(x19+x20));

	if (t2 != 74987LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x21 = 366678LLU;
	static int16_t x23 = INT16_MIN;
	int64_t x24 = INT64_MAX;
	volatile int64_t t3 = 55862962897258956LL;

	t3 = ((x21<=x22)+(x23+x24));

	if (t3 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint16_t x27 = 0U;
	static int16_t x28 = INT16_MAX;

	t4 = ((x25<=x26)+(x27+x28));

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = -1;
	uint64_t x32 = UINT64_MAX;
	volatile uint64_t t5 = 41444469835061842LLU;

	t5 = ((x29<=x30)+(x31+x32));

	if (t5 != 65535LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x33 = UINT16_MAX;
	volatile uint32_t x34 = 1614602373U;
	static uint32_t x36 = 84447U;
	uint32_t t6 = 1214150136U;

	t6 = ((x33<=x34)+(x35+x36));

	if (t6 != 84703U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = -1;
	int8_t x39 = -1;
	volatile int64_t x40 = -10372LL;
	int64_t t7 = -115678LL;

	t7 = ((x37<=x38)+(x39+x40));

	if (t7 != -10372LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x41 = 12976705LL;
	static int32_t x42 = INT32_MIN;
	static int32_t t8 = 16390;

	t8 = ((x41<=x42)+(x43+x44));

	if (t8 != -2147450881) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = 61957767U;
	volatile int16_t x47 = -1;
	volatile uint8_t x48 = 63U;

	t9 = ((x45<=x46)+(x47+x48));

	if (t9 != 62) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -1;
	volatile int32_t x50 = -1374;
	static volatile int64_t x51 = -543909700661606LL;
	int64_t t10 = -7274955452932928LL;

	t10 = ((x49<=x50)+(x51+x52));

	if (t10 != -543909700661473LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x53 = 10U;
	int8_t x54 = -1;
	static uint64_t x55 = 35624LLU;
	int64_t x56 = 3LL;
	volatile uint64_t t11 = 424LLU;

	t11 = ((x53<=x54)+(x55+x56));

	if (t11 != 35627LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = 1;
	int64_t x58 = INT64_MAX;
	static int32_t x59 = INT32_MIN;
	int32_t x60 = INT32_MAX;

	t12 = ((x57<=x58)+(x59+x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = INT32_MAX;
	int16_t x66 = -11;
	int64_t x67 = INT64_MIN;
	int64_t t13 = -161477695271LL;

	t13 = ((x65<=x66)+(x67+x68));

	if (t13 != -9223372036854719105LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x71 = -14834;
	uint8_t x72 = UINT8_MAX;
	int32_t t14 = 352;

	t14 = ((x69<=x70)+(x71+x72));

	if (t14 != -14579) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = -2;
	uint32_t x74 = UINT32_MAX;
	int16_t x76 = INT16_MAX;
	static volatile int32_t t15 = 29989;

	t15 = ((x73<=x74)+(x75+x76));

	if (t15 != 32781) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = -13;
	int32_t x78 = INT32_MIN;
	volatile int16_t x79 = -155;
	int16_t x80 = INT16_MIN;
	volatile int32_t t16 = 430;

	t16 = ((x77<=x78)+(x79+x80));

	if (t16 != -32923) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x85 = UINT8_MAX;
	volatile uint8_t x87 = 62U;
	int8_t x88 = INT8_MIN;
	int32_t t17 = 6050018;

	t17 = ((x85<=x86)+(x87+x88));

	if (t17 != -66) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x92 = -1;
	int32_t t18 = 92;

	t18 = ((x89<=x90)+(x91+x92));

	if (t18 != 3) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = INT8_MAX;
	int16_t x94 = INT16_MIN;
	int64_t x95 = 268862706736604301LL;
	static int64_t x96 = INT64_MIN;
	volatile int64_t t19 = -1281497936911701LL;

	t19 = ((x93<=x94)+(x95+x96));

	if (t19 != -8954509330118171507LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x97 = INT32_MIN;
	int32_t x99 = 211;
	uint32_t x100 = UINT32_MAX;
	volatile uint32_t t20 = 3625848U;

	t20 = ((x97<=x98)+(x99+x100));

	if (t20 != 211U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = -1801268495LL;
	uint16_t x102 = 6U;
	uint8_t x103 = UINT8_MAX;
	int8_t x104 = INT8_MIN;
	static volatile int32_t t21 = -564540888;

	t21 = ((x101<=x102)+(x103+x104));

	if (t21 != 128) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x105 = INT32_MIN;
	static volatile int16_t x106 = INT16_MIN;
	int64_t x107 = 16051149203695LL;
	volatile uint32_t x108 = 21U;
	int64_t t22 = -397048582LL;

	t22 = ((x105<=x106)+(x107+x108));

	if (t22 != 16051149203717LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x111 = INT32_MIN;

	t23 = ((x109<=x110)+(x111+x112));

	if (t23 != 18446744072010327714LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = 428084098;
	int32_t x114 = 1680;
	volatile uint64_t x115 = 42193996877611200LLU;
	uint64_t t24 = 482890910LLU;

	t24 = ((x113<=x114)+(x115+x116));

	if (t24 != 42193996877578432LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x121 = INT16_MIN;
	int32_t x122 = -17459;
	static int8_t x123 = -1;
	int64_t x124 = -1LL;
	int64_t t25 = 68592LL;

	t25 = ((x121<=x122)+(x123+x124));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x129 = 2657716810106LL;
	int16_t x131 = INT16_MAX;
	volatile int64_t x132 = 10125311LL;

	t26 = ((x129<=x130)+(x131+x132));

	if (t26 != 10158078LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x133 = 12U;
	uint8_t x135 = UINT8_MAX;
	uint32_t x136 = UINT32_MAX;

	t27 = ((x133<=x134)+(x135+x136));

	if (t27 != 254U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x137 = 184699622436LLU;
	uint64_t x139 = 5152LLU;
	volatile uint64_t x140 = 20733130122359LLU;
	uint64_t t28 = 856275448031LLU;

	t28 = ((x137<=x138)+(x139+x140));

	if (t28 != 20733130127512LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x141 = INT64_MAX;
	volatile uint16_t x143 = 210U;
	volatile int32_t t29 = -65397;

	t29 = ((x141<=x142)+(x143+x144));

	if (t29 != -2147483438) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x153 = UINT32_MAX;
	volatile int64_t x154 = -1LL;
	int64_t x155 = INT64_MIN;
	volatile int16_t x156 = 27;

	t30 = ((x153<=x154)+(x155+x156));

	if (t30 != -9223372036854775781LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x157 = INT64_MIN;
	int32_t x158 = INT32_MAX;
	volatile int16_t x160 = -12;
	int32_t t31 = 6;

	t31 = ((x157<=x158)+(x159+x160));

	if (t31 != 30) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x161 = 220U;
	static int64_t x162 = -1266498496LL;
	volatile int64_t x163 = 15506390LL;
	volatile uint32_t x164 = 141779756U;

	t32 = ((x161<=x162)+(x163+x164));

	if (t32 != 157286146LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x166 = INT64_MAX;
	volatile int16_t x167 = -1;
	static int64_t x168 = -4911929612LL;
	int64_t t33 = -10543548362193092LL;

	t33 = ((x165<=x166)+(x167+x168));

	if (t33 != -4911929612LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x169 = UINT32_MAX;
	int32_t x170 = 749098;
	int16_t x172 = 49;
	volatile int32_t t34 = 535537;

	t34 = ((x169<=x170)+(x171+x172));

	if (t34 != -32719) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x173 = -1;
	int32_t x175 = 62619;
	volatile int32_t t35 = -126347;

	t35 = ((x173<=x174)+(x175+x176));

	if (t35 != 29852) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x177 = 5684;
	int64_t x179 = 1412054480060306829LL;
	static volatile int64_t t36 = 619LL;

	t36 = ((x177<=x178)+(x179+x180));

	if (t36 != 1412054480069883518LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x181 = INT16_MIN;
	int64_t x182 = INT64_MIN;
	int32_t x183 = INT32_MAX;
	static uint64_t x184 = UINT64_MAX;
	uint64_t t37 = 3642LLU;

	t37 = ((x181<=x182)+(x183+x184));

	if (t37 != 2147483646LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x186 = 1LLU;
	uint32_t x188 = UINT32_MAX;
	uint32_t t38 = 7180111U;

	t38 = ((x185<=x186)+(x187+x188));

	if (t38 != 40465U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x195 = 60;
	volatile int32_t t39 = -17863;

	t39 = ((x193<=x194)+(x195+x196));

	if (t39 != -14) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x197 = 2980U;
	int32_t x198 = INT32_MAX;
	uint8_t x200 = 58U;

	t40 = ((x197<=x198)+(x199+x200));

	if (t40 != 60) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x201 = 7739U;
	int8_t x203 = -26;
	int8_t x204 = INT8_MIN;
	int32_t t41 = -4008592;

	t41 = ((x201<=x202)+(x203+x204));

	if (t41 != -154) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x205 = -1;
	uint64_t x206 = 29224032643088LLU;
	uint32_t x208 = UINT32_MAX;
	int64_t t42 = 5682LL;

	t42 = ((x205<=x206)+(x207+x208));

	if (t42 != -2730820036534545821LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x209 = -1LL;
	static int8_t x210 = 21;
	int32_t x211 = 69844;
	int16_t x212 = -1;
	static volatile int32_t t43 = 232267;

	t43 = ((x209<=x210)+(x211+x212));

	if (t43 != 69844) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x214 = INT32_MIN;
	static int8_t x216 = INT8_MIN;
	static volatile uint32_t t44 = 531453U;

	t44 = ((x213<=x214)+(x215+x216));

	if (t44 != 3719730U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x217 = INT64_MIN;
	static int32_t x218 = -1;
	int64_t x220 = -1LL;

	t45 = ((x217<=x218)+(x219+x220));

	if (t45 != 59LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x225 = 11;
	int32_t x226 = INT32_MIN;
	volatile uint64_t t46 = 193461LLU;

	t46 = ((x225<=x226)+(x227+x228));

	if (t46 != 3107LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x230 = 21011U;
	static int16_t x231 = INT16_MIN;
	static volatile uint64_t x232 = UINT64_MAX;
	volatile uint64_t t47 = 148358LLU;

	t47 = ((x229<=x230)+(x231+x232));

	if (t47 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x233 = -1LL;
	int32_t x234 = 69;
	int8_t x235 = INT8_MIN;
	int64_t x236 = -1LL;
	int64_t t48 = 5842941327222LL;

	t48 = ((x233<=x234)+(x235+x236));

	if (t48 != -128LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x237 = -1;
	volatile int16_t x238 = 180;
	volatile int16_t x239 = INT16_MAX;
	int64_t x240 = 4067LL;
	int64_t t49 = 112789LL;

	t49 = ((x237<=x238)+(x239+x240));

	if (t49 != 36835LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x241 = UINT16_MAX;
	int16_t x242 = INT16_MIN;
	int8_t x243 = 0;
	static uint64_t x244 = UINT64_MAX;
	uint64_t t50 = UINT64_MAX;

	t50 = ((x241<=x242)+(x243+x244));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x245 = INT64_MIN;
	int64_t x246 = INT64_MIN;
	int64_t x247 = 412671110839LL;
	uint16_t x248 = UINT16_MAX;
	static volatile int64_t t51 = 2025519LL;

	t51 = ((x245<=x246)+(x247+x248));

	if (t51 != 412671176375LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x250 = 23;
	int8_t x251 = -7;
	static volatile int8_t x252 = -45;

	t52 = ((x249<=x250)+(x251+x252));

	if (t52 != -51) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x253 = 1U;
	volatile int64_t x254 = INT64_MIN;
	static int8_t x255 = -29;
	uint64_t t53 = 8380780002415LLU;

	t53 = ((x253<=x254)+(x255+x256));

	if (t53 != 18446744073709551586LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x257 = 13264276LLU;
	uint32_t x259 = 639U;
	uint32_t t54 = 47969386U;

	t54 = ((x257<=x258)+(x259+x260));

	if (t54 != 4294935167U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x261 = 465;
	volatile int8_t x262 = 29;
	uint16_t x263 = 513U;
	static volatile uint16_t x264 = 21U;
	static volatile int32_t t55 = 1798;

	t55 = ((x261<=x262)+(x263+x264));

	if (t55 != 534) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x265 = UINT32_MAX;
	uint16_t x266 = 12U;

	t56 = ((x265<=x266)+(x267+x268));

	if (t56 != -32519) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x273 = 1597;
	int8_t x275 = INT8_MIN;
	uint32_t x276 = 795U;

	t57 = ((x273<=x274)+(x275+x276));

	if (t57 != 667U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x277 = 260LLU;
	int8_t x278 = INT8_MIN;
	int64_t x279 = INT64_MAX;
	int64_t x280 = INT64_MIN;

	t58 = ((x277<=x278)+(x279+x280));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x281 = -1;
	int64_t x282 = INT64_MIN;
	uint32_t x284 = UINT32_MAX;
	volatile uint32_t t59 = 258277U;

	t59 = ((x281<=x282)+(x283+x284));

	if (t59 != 2147483647U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x285 = 261381190U;
	int16_t x286 = -1;
	int64_t x287 = -1LL;
	int32_t x288 = -1;
	int64_t t60 = 9LL;

	t60 = ((x285<=x286)+(x287+x288));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x290 = INT32_MAX;
	int16_t x292 = 349;
	int32_t t61 = 2300;

	t61 = ((x289<=x290)+(x291+x292));

	if (t61 != 349) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x293 = 83407684LLU;
	static uint16_t x294 = 185U;
	volatile int64_t x296 = 3748707861LL;
	volatile int64_t t62 = 994159412064190LL;

	t62 = ((x293<=x294)+(x295+x296));

	if (t62 != -9223372033106067947LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x297 = INT16_MIN;
	int8_t x298 = -1;
	volatile int8_t x300 = INT8_MAX;
	volatile int32_t t63 = -3;

	t63 = ((x297<=x298)+(x299+x300));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x301 = -144LL;
	static int32_t x302 = INT32_MIN;
	volatile int16_t x303 = INT16_MAX;
	uint16_t x304 = 9U;
	int32_t t64 = -6;

	t64 = ((x301<=x302)+(x303+x304));

	if (t64 != 32776) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x305 = INT32_MIN;
	static volatile int64_t x307 = -1LL;
	volatile int64_t x308 = -71304723248268252LL;
	int64_t t65 = 3004141879102LL;

	t65 = ((x305<=x306)+(x307+x308));

	if (t65 != -71304723248268253LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x309 = -1LL;
	volatile int16_t x310 = INT16_MIN;
	uint8_t x311 = 5U;
	uint64_t x312 = 12LLU;
	volatile uint64_t t66 = 1176LLU;

	t66 = ((x309<=x310)+(x311+x312));

	if (t66 != 17LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x313 = INT32_MIN;
	int8_t x314 = INT8_MIN;
	static int16_t x315 = INT16_MIN;
	uint32_t x316 = 7243U;

	t67 = ((x313<=x314)+(x315+x316));

	if (t67 != 4294941772U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x317 = 12U;
	uint64_t x318 = 61LLU;
	uint32_t x319 = 74U;
	int32_t x320 = INT32_MAX;
	uint32_t t68 = 752U;

	t68 = ((x317<=x318)+(x319+x320));

	if (t68 != 2147483722U) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x321 = -1802;
	uint16_t x322 = UINT16_MAX;
	uint64_t x323 = UINT64_MAX;
	volatile uint64_t t69 = 4147LLU;

	t69 = ((x321<=x322)+(x323+x324));

	if (t69 != 15LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x325 = INT32_MIN;
	uint32_t x326 = 532063U;
	uint64_t x327 = 8060485LLU;
	int8_t x328 = 16;
	volatile uint64_t t70 = 1233003828LLU;

	t70 = ((x325<=x326)+(x327+x328));

	if (t70 != 8060501LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x330 = 6069U;
	volatile int64_t x331 = 26768381288926553LL;
	static int8_t x332 = -1;
	int64_t t71 = -31760392860159846LL;

	t71 = ((x329<=x330)+(x331+x332));

	if (t71 != 26768381288926553LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x333 = INT8_MIN;
	int64_t x334 = 3972484230017284635LL;
	int32_t x335 = 179;

	t72 = ((x333<=x334)+(x335+x336));

	if (t72 != 6983) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x337 = INT8_MAX;
	int64_t x338 = INT64_MIN;
	volatile int8_t x340 = INT8_MAX;
	volatile int32_t t73 = 88277778;

	t73 = ((x337<=x338)+(x339+x340));

	if (t73 != 134) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x341 = 536LL;
	int64_t x342 = -1LL;
	static volatile uint32_t x343 = UINT32_MAX;
	int64_t x344 = -368654LL;
	volatile int64_t t74 = 120339LL;

	t74 = ((x341<=x342)+(x343+x344));

	if (t74 != 4294598641LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x345 = -1;
	int32_t x346 = -5185;
	uint64_t x347 = 4160994LLU;
	volatile int64_t x348 = -4195380172464LL;
	static uint64_t t75 = 16279LLU;

	t75 = ((x345<=x346)+(x347+x348));

	if (t75 != 18446739878333540146LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x350 = INT64_MIN;
	int8_t x351 = -21;
	int32_t x352 = 475;
	volatile int32_t t76 = -1;

	t76 = ((x349<=x350)+(x351+x352));

	if (t76 != 454) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x353 = 7;
	int32_t x354 = INT32_MIN;
	static int8_t x356 = 22;
	static volatile int32_t t77 = -379251;

	t77 = ((x353<=x354)+(x355+x356));

	if (t77 != 21) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x357 = -1;
	uint32_t t78 = 95U;

	t78 = ((x357<=x358)+(x359+x360));

	if (t78 != 255U) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x361 = INT8_MAX;
	static int8_t x362 = -1;
	static volatile int16_t x363 = -1;
	volatile uint32_t x364 = UINT32_MAX;
	uint32_t t79 = 4085U;

	t79 = ((x361<=x362)+(x363+x364));

	if (t79 != 4294967294U) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint16_t x365 = 522U;
	static volatile int16_t x367 = INT16_MIN;
	uint16_t x368 = 3158U;

	t80 = ((x365<=x366)+(x367+x368));

	if (t80 != -29609) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x369 = INT32_MIN;
	static uint16_t x370 = UINT16_MAX;
	volatile int16_t x371 = INT16_MIN;
	static volatile uint32_t t81 = 13856U;

	t81 = ((x369<=x370)+(x371+x372));

	if (t81 != 4294934648U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x374 = 97070856350752LL;
	volatile int8_t x375 = INT8_MIN;
	volatile int32_t t82 = 12;

	t82 = ((x373<=x374)+(x375+x376));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x378 = INT16_MIN;
	static int8_t x379 = -1;
	uint32_t t83 = UINT32_MAX;

	t83 = ((x377<=x378)+(x379+x380));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x382 = -430;
	uint8_t x384 = UINT8_MAX;
	volatile int32_t t84 = 480933586;

	t84 = ((x381<=x382)+(x383+x384));

	if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x387 = -7;
	static volatile int32_t t85 = -93;

	t85 = ((x385<=x386)+(x387+x388));

	if (t85 != 120) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x389 = INT8_MAX;
	uint8_t x390 = 78U;
	static uint8_t x391 = UINT8_MAX;
	int64_t x392 = INT64_MIN;
	static int64_t t86 = -2LL;

	t86 = ((x389<=x390)+(x391+x392));

	if (t86 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x393 = 12U;
	volatile int32_t x396 = -152801;
	int32_t t87 = -496640;

	t87 = ((x393<=x394)+(x395+x396));

	if (t87 != -185569) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x397 = INT8_MAX;
	int32_t x398 = 11223964;
	int64_t x399 = INT64_MIN;
	int8_t x400 = 21;
	volatile int64_t t88 = 69077270288017418LL;

	t88 = ((x397<=x398)+(x399+x400));

	if (t88 != -9223372036854775786LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x401 = INT64_MIN;
	uint16_t x402 = 14916U;
	int16_t x404 = INT16_MIN;
	volatile int32_t t89 = 2687584;

	t89 = ((x401<=x402)+(x403+x404));

	if (t89 != -32701) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x405 = INT32_MAX;
	int64_t x407 = INT64_MIN;
	uint8_t x408 = UINT8_MAX;
	volatile int64_t t90 = -71LL;

	t90 = ((x405<=x406)+(x407+x408));

	if (t90 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x409 = 34U;

	t91 = ((x409<=x410)+(x411+x412));

	if (t91 != -32640) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x413 = 1290629409U;
	int32_t x414 = -1;
	int16_t x415 = 5838;
	uint64_t x416 = 0LLU;
	uint64_t t92 = 1LLU;

	t92 = ((x413<=x414)+(x415+x416));

	if (t92 != 5839LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x417 = UINT8_MAX;
	int64_t x418 = INT64_MAX;
	static int64_t x419 = INT64_MIN;
	uint32_t x420 = UINT32_MAX;
	volatile int64_t t93 = -6415496534945120LL;

	t93 = ((x417<=x418)+(x419+x420));

	if (t93 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x421 = INT8_MIN;
	volatile int64_t x422 = -1LL;
	uint64_t x423 = 1758038945104LLU;
	int64_t x424 = INT64_MIN;
	volatile uint64_t t94 = 86721255LLU;

	t94 = ((x421<=x422)+(x423+x424));

	if (t94 != 9223373794893720913LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x425 = INT8_MIN;
	volatile int32_t x426 = INT32_MIN;
	int8_t x427 = INT8_MIN;
	volatile uint32_t t95 = 0U;

	t95 = ((x425<=x426)+(x427+x428));

	if (t95 != 5802U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x429 = INT32_MIN;
	uint64_t x430 = 2221652035167LLU;
	int16_t x431 = INT16_MIN;
	uint32_t x432 = UINT32_MAX;
	volatile uint32_t t96 = 0U;

	t96 = ((x429<=x430)+(x431+x432));

	if (t96 != 4294934527U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x433 = INT64_MIN;
	int32_t x434 = INT32_MAX;
	uint16_t x435 = 6957U;
	int32_t x436 = -169;
	int32_t t97 = 1671627;

	t97 = ((x433<=x434)+(x435+x436));

	if (t97 != 6789) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x437 = 16361;
	uint8_t x438 = UINT8_MAX;
	int16_t x439 = INT16_MAX;
	int32_t t98 = 185;

	t98 = ((x437<=x438)+(x439+x440));

	if (t98 != 32732) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x445 = INT64_MIN;
	static int64_t x446 = -1LL;
	uint16_t x447 = 4U;
	int16_t x448 = 0;
	int32_t t99 = -2542;

	t99 = ((x445<=x446)+(x447+x448));

	if (t99 != 5) { NG(); } else { ; }
	
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


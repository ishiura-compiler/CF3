#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x7 = INT8_MAX;
volatile uint16_t x8 = 509U;
int16_t x9 = -1;
volatile uint16_t x10 = 166U;
static int8_t x16 = -1;
int8_t x17 = INT8_MAX;
static int16_t x20 = -1758;
int64_t x24 = INT64_MAX;
int32_t t5 = -456583;
int8_t x25 = INT8_MAX;
uint8_t x27 = 0U;
int32_t t7 = -41631423;
int16_t x33 = -1;
volatile int32_t t8 = 866998221;
uint16_t x44 = 18U;
int32_t x47 = -120;
uint8_t x50 = 2U;
int32_t x59 = INT32_MIN;
static int8_t x62 = INT8_MIN;
volatile int32_t x70 = INT32_MIN;
static volatile int64_t x76 = -1LL;
static volatile int32_t t17 = -762002954;
static int64_t x77 = 3237757914731LL;
static int32_t x78 = INT32_MIN;
static int16_t x79 = INT16_MIN;
static int16_t x80 = 2;
volatile int32_t t18 = -15713628;
int32_t x84 = -1;
volatile int32_t t20 = -1;
uint16_t x89 = 186U;
uint32_t x90 = 2U;
int8_t x98 = INT8_MAX;
int8_t x111 = INT8_MIN;
int16_t x114 = -1;
int32_t t26 = 1;
int8_t x118 = INT8_MIN;
uint64_t x119 = UINT64_MAX;
static volatile int8_t x125 = -1;
volatile uint16_t x129 = 6451U;
int16_t x131 = 13197;
int8_t x133 = -1;
uint32_t x141 = UINT32_MAX;
uint8_t x143 = UINT8_MAX;
int32_t t32 = -92742;
static int64_t x158 = INT64_MAX;
uint32_t x159 = UINT32_MAX;
uint8_t x160 = 5U;
volatile int32_t t35 = -144612;
uint16_t x162 = UINT16_MAX;
uint64_t x167 = UINT64_MAX;
uint64_t x173 = 2204174796022870257LLU;
volatile int32_t t38 = 263667;
int8_t x189 = INT8_MAX;
volatile int16_t x190 = -74;
volatile uint16_t x200 = 1U;
int64_t x201 = -1LL;
int32_t t44 = -28593134;
volatile int32_t x207 = 219208131;
int16_t x223 = -1;
uint64_t x229 = 919009493LLU;
volatile int32_t t48 = -54;
volatile int16_t x233 = INT16_MAX;
uint64_t x235 = UINT64_MAX;
static volatile int8_t x236 = INT8_MAX;
uint32_t x241 = 1868573U;
static int8_t x242 = -48;
volatile int16_t x258 = INT16_MIN;
int8_t x260 = 1;
static uint8_t x263 = UINT8_MAX;
int64_t x267 = INT64_MIN;
uint8_t x272 = UINT8_MAX;
volatile int32_t t57 = -65;
int64_t x279 = -1LL;
int32_t x280 = 14521902;
volatile int32_t t58 = -132;
int8_t x283 = -1;
int32_t t59 = 47081;
static int64_t x287 = INT64_MAX;
volatile uint64_t x291 = 59392531034LLU;
static volatile int32_t t63 = 195989974;
int64_t x308 = INT64_MAX;
volatile int32_t x310 = -3539117;
static int8_t x313 = INT8_MIN;
int32_t x329 = INT32_MAX;
uint64_t x331 = 14LLU;
int32_t x332 = INT32_MAX;
int32_t t69 = 881121347;
int16_t x341 = INT16_MAX;
uint64_t x345 = 51343LLU;
volatile int32_t t72 = -6;
volatile uint8_t x350 = UINT8_MAX;
volatile int64_t x353 = 108LL;
volatile uint16_t x354 = 14504U;
volatile int32_t t74 = -3911556;
int32_t x364 = -511;
int64_t x374 = INT64_MIN;
static int32_t x387 = INT32_MIN;
int64_t x390 = 3627061578LL;
int16_t x401 = 5;
int32_t x403 = -1;
volatile int32_t t85 = -3252;
int16_t x419 = INT16_MAX;
int16_t x420 = INT16_MAX;
int16_t x421 = INT16_MAX;
static uint16_t x427 = UINT16_MAX;
uint16_t x428 = 40U;
uint8_t x438 = 0U;
int32_t x443 = -119;
int16_t x453 = -1;
int64_t x454 = -1883264148294LL;
int16_t x457 = INT16_MAX;
int64_t x463 = -175569065LL;
int64_t x464 = -1LL;
volatile int32_t t98 = -2;
static volatile int16_t x467 = INT16_MIN;


void f0(void) {
	int16_t x1 = 37;
	int16_t x2 = -129;
	uint16_t x3 = 121U;
	uint32_t x4 = 10775U;
	int32_t t0 = 7426176;

	t0 = (x1==((x2<=x3)-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 150U;
	int32_t x6 = INT32_MIN;
	int32_t t1 = 355814;

	t1 = (x5==((x6<=x7)-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x11 = INT8_MIN;
	int16_t x12 = 3;
	int32_t t2 = 29661;

	t2 = (x9==((x10<=x11)-x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 8;
	uint8_t x14 = 0U;
	uint32_t x15 = 20583U;
	volatile int32_t t3 = -45484;

	t3 = (x13==((x14<=x15)-x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x18 = 113576680LLU;
	int64_t x19 = -1LL;
	volatile int32_t t4 = -2;

	t4 = (x17==((x18<=x19)-x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -6;
	uint64_t x22 = 103442350612368LLU;
	uint64_t x23 = 2064146LLU;

	t5 = (x21==((x22<=x23)-x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = UINT64_MAX;
	volatile int16_t x28 = INT16_MAX;
	volatile int32_t t6 = -113740213;

	t6 = (x25==((x26<=x27)-x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	uint8_t x30 = 0U;
	static int8_t x31 = INT8_MIN;
	int8_t x32 = 1;

	t7 = (x29==((x30<=x31)-x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x34 = 10427;
	static int8_t x35 = 38;
	static int32_t x36 = -15847;

	t8 = (x33==((x34<=x35)-x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x41 = -1;
	int32_t x42 = INT32_MIN;
	uint32_t x43 = 415307U;
	int32_t t9 = 92;

	t9 = (x41==((x42<=x43)-x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -1;
	int8_t x46 = INT8_MAX;
	int8_t x48 = INT8_MAX;
	volatile int32_t t10 = -48535180;

	t10 = (x45==((x46<=x47)-x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = 41288;
	uint8_t x51 = UINT8_MAX;
	int8_t x52 = INT8_MIN;
	volatile int32_t t11 = 4991973;

	t11 = (x49==((x50<=x51)-x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x53 = -1;
	int64_t x54 = -1LL;
	int32_t x55 = -1;
	uint8_t x56 = UINT8_MAX;
	volatile int32_t t12 = -25590987;

	t12 = (x53==((x54<=x55)-x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x57 = INT64_MAX;
	volatile uint16_t x58 = UINT16_MAX;
	int64_t x60 = -190LL;
	int32_t t13 = -3329;

	t13 = (x57==((x58<=x59)-x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = 16048;
	int16_t x63 = -21;
	uint16_t x64 = 620U;
	volatile int32_t t14 = -65;

	t14 = (x61==((x62<=x63)-x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = -2104;
	int16_t x66 = INT16_MIN;
	static uint32_t x67 = 26370895U;
	int16_t x68 = INT16_MIN;
	int32_t t15 = 3;

	t15 = (x65==((x66<=x67)-x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MAX;
	static int8_t x71 = INT8_MAX;
	static int64_t x72 = INT64_MAX;
	volatile int32_t t16 = 368;

	t16 = (x69==((x70<=x71)-x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x73 = -1;
	uint64_t x74 = 2836498LLU;
	int16_t x75 = INT16_MAX;

	t17 = (x73==((x74<=x75)-x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {


	t18 = (x77==((x78<=x79)-x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x81 = 3652364911172384LLU;
	volatile int16_t x82 = -1;
	static int32_t x83 = INT32_MIN;
	int32_t t19 = -3;

	t19 = (x81==((x82<=x83)-x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x85 = 0;
	int8_t x86 = INT8_MIN;
	int8_t x87 = INT8_MAX;
	uint16_t x88 = 261U;

	t20 = (x85==((x86<=x87)-x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x91 = -1;
	uint16_t x92 = 21U;
	static int32_t t21 = -830;

	t21 = (x89==((x90<=x91)-x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = -24954315654278068LL;
	int8_t x99 = INT8_MIN;
	uint64_t x100 = UINT64_MAX;
	int32_t t22 = 1;

	t22 = (x97==((x98<=x99)-x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = INT8_MIN;
	volatile uint64_t x102 = 0LLU;
	int64_t x103 = INT64_MIN;
	static uint64_t x104 = 538LLU;
	int32_t t23 = -30285;

	t23 = (x101==((x102<=x103)-x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x105 = 23U;
	volatile int64_t x106 = INT64_MIN;
	static int16_t x107 = INT16_MIN;
	volatile uint64_t x108 = UINT64_MAX;
	volatile int32_t t24 = 22;

	t24 = (x105==((x106<=x107)-x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = UINT8_MAX;
	static int8_t x110 = -1;
	int8_t x112 = INT8_MIN;
	volatile int32_t t25 = -42170;

	t25 = (x109==((x110<=x111)-x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = INT32_MIN;
	int8_t x115 = 19;
	uint64_t x116 = UINT64_MAX;

	t26 = (x113==((x114<=x115)-x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = -11006412299LL;
	volatile int8_t x120 = -1;
	int32_t t27 = 14035;

	t27 = (x117==((x118<=x119)-x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = -1LL;
	static int8_t x122 = INT8_MIN;
	int16_t x123 = -1;
	uint32_t x124 = UINT32_MAX;
	int32_t t28 = 1049955512;

	t28 = (x121==((x122<=x123)-x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x126 = 9U;
	int16_t x127 = -1021;
	uint8_t x128 = 17U;
	int32_t t29 = 61701;

	t29 = (x125==((x126<=x127)-x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x130 = INT32_MIN;
	static uint8_t x132 = UINT8_MAX;
	int32_t t30 = -1;

	t30 = (x129==((x130<=x131)-x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x134 = UINT16_MAX;
	uint64_t x135 = UINT64_MAX;
	uint64_t x136 = 2183843780054374872LLU;
	volatile int32_t t31 = 0;

	t31 = (x133==((x134<=x135)-x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x142 = 44195U;
	uint64_t x144 = UINT64_MAX;

	t32 = (x141==((x142<=x143)-x144));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x145 = INT8_MIN;
	int8_t x146 = INT8_MAX;
	uint32_t x147 = 113U;
	uint16_t x148 = 7U;
	volatile int32_t t33 = 6105;

	t33 = (x145==((x146<=x147)-x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = INT64_MIN;
	int32_t x154 = INT32_MAX;
	int16_t x155 = INT16_MAX;
	uint16_t x156 = 67U;
	static volatile int32_t t34 = -428435070;

	t34 = (x153==((x154<=x155)-x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = INT32_MIN;

	t35 = (x157==((x158<=x159)-x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x161 = 245U;
	static int64_t x163 = INT64_MIN;
	int16_t x164 = INT16_MIN;
	int32_t t36 = -322220;

	t36 = (x161==((x162<=x163)-x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x165 = 59;
	static int32_t x166 = 647822;
	static uint16_t x168 = 194U;
	int32_t t37 = 64399;

	t37 = (x165==((x166<=x167)-x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x174 = INT16_MIN;
	int32_t x175 = -1;
	static int8_t x176 = 42;

	t38 = (x173==((x174<=x175)-x176));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x177 = 16113U;
	uint16_t x178 = 413U;
	static int16_t x179 = -1;
	static uint32_t x180 = 335555U;
	int32_t t39 = 25332;

	t39 = (x177==((x178<=x179)-x180));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x185 = UINT64_MAX;
	uint8_t x186 = 28U;
	int8_t x187 = INT8_MIN;
	uint8_t x188 = 1U;
	volatile int32_t t40 = -485740959;

	t40 = (x185==((x186<=x187)-x188));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x191 = INT8_MAX;
	volatile int32_t x192 = 1373618;
	volatile int32_t t41 = -370815;

	t41 = (x189==((x190<=x191)-x192));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = INT8_MIN;
	int32_t x194 = INT32_MAX;
	volatile int32_t x195 = -10;
	int64_t x196 = -1LL;
	volatile int32_t t42 = 36489;

	t42 = (x193==((x194<=x195)-x196));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x197 = 1U;
	volatile int32_t x198 = INT32_MIN;
	uint64_t x199 = 339219667329251197LLU;
	static volatile int32_t t43 = -3873503;

	t43 = (x197==((x198<=x199)-x200));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x202 = 4514U;
	static volatile int8_t x203 = INT8_MIN;
	int64_t x204 = -113473333014LL;

	t44 = (x201==((x202<=x203)-x204));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x205 = INT32_MIN;
	uint64_t x206 = 11472272LLU;
	int16_t x208 = 0;
	int32_t t45 = 57;

	t45 = (x205==((x206<=x207)-x208));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = INT32_MAX;
	int8_t x210 = 0;
	volatile uint32_t x211 = 127U;
	int64_t x212 = 38LL;
	volatile int32_t t46 = 682551099;

	t46 = (x209==((x210<=x211)-x212));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x221 = INT16_MIN;
	int32_t x222 = INT32_MIN;
	uint8_t x224 = UINT8_MAX;
	static int32_t t47 = -121917843;

	t47 = (x221==((x222<=x223)-x224));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x230 = 26;
	uint64_t x231 = UINT64_MAX;
	int16_t x232 = INT16_MIN;

	t48 = (x229==((x230<=x231)-x232));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x234 = -1;
	volatile int32_t t49 = -668145207;

	t49 = (x233==((x234<=x235)-x236));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x237 = INT16_MIN;
	int32_t x238 = -1;
	int8_t x239 = 58;
	static uint8_t x240 = UINT8_MAX;
	volatile int32_t t50 = 51955;

	t50 = (x237==((x238<=x239)-x240));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x243 = 1;
	int16_t x244 = -1;
	volatile int32_t t51 = -49;

	t51 = (x241==((x242<=x243)-x244));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x245 = 25123U;
	int64_t x246 = INT64_MIN;
	int8_t x247 = -1;
	uint64_t x248 = UINT64_MAX;
	volatile int32_t t52 = -1;

	t52 = (x245==((x246<=x247)-x248));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x257 = -1;
	int16_t x259 = INT16_MAX;
	int32_t t53 = 380817302;

	t53 = (x257==((x258<=x259)-x260));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x261 = -1;
	volatile int8_t x262 = -32;
	static volatile int16_t x264 = INT16_MIN;
	volatile int32_t t54 = -11;

	t54 = (x261==((x262<=x263)-x264));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x265 = INT32_MIN;
	volatile int64_t x266 = -394624128LL;
	static int64_t x268 = -2136534937353LL;
	volatile int32_t t55 = 59;

	t55 = (x265==((x266<=x267)-x268));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x269 = INT64_MAX;
	int32_t x270 = INT32_MIN;
	int16_t x271 = INT16_MAX;
	static int32_t t56 = 3455;

	t56 = (x269==((x270<=x271)-x272));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x273 = INT32_MIN;
	static int32_t x274 = INT32_MAX;
	volatile int8_t x275 = INT8_MIN;
	static volatile uint8_t x276 = UINT8_MAX;

	t57 = (x273==((x274<=x275)-x276));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x277 = -1;
	int16_t x278 = INT16_MIN;

	t58 = (x277==((x278<=x279)-x280));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x281 = -1;
	int64_t x282 = INT64_MIN;
	int16_t x284 = INT16_MAX;

	t59 = (x281==((x282<=x283)-x284));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x285 = INT16_MAX;
	uint64_t x286 = 4048554LLU;
	static uint32_t x288 = 2U;
	static volatile int32_t t60 = -600;

	t60 = (x285==((x286<=x287)-x288));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x289 = INT16_MIN;
	uint16_t x290 = 31146U;
	static int32_t x292 = -253;
	int32_t t61 = 19;

	t61 = (x289==((x290<=x291)-x292));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x293 = 73091169933LLU;
	volatile int64_t x294 = INT64_MIN;
	static volatile int8_t x295 = -1;
	uint16_t x296 = UINT16_MAX;
	int32_t t62 = 1;

	t62 = (x293==((x294<=x295)-x296));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x297 = -1;
	int64_t x298 = -1LL;
	uint64_t x299 = 301283438761LLU;
	int8_t x300 = INT8_MIN;

	t63 = (x297==((x298<=x299)-x300));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x305 = -1;
	int8_t x306 = 3;
	volatile uint32_t x307 = 20505U;
	static int32_t t64 = 112574;

	t64 = (x305==((x306<=x307)-x308));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x309 = 30U;
	static int8_t x311 = INT8_MAX;
	static int16_t x312 = -67;
	int32_t t65 = -765723579;

	t65 = (x309==((x310<=x311)-x312));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x314 = -91;
	int64_t x315 = INT64_MAX;
	volatile uint16_t x316 = 923U;
	volatile int32_t t66 = -23056475;

	t66 = (x313==((x314<=x315)-x316));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x317 = 1U;
	int32_t x318 = -49065716;
	volatile int32_t x319 = -1;
	volatile int64_t x320 = -378836560479LL;
	int32_t t67 = -116469908;

	t67 = (x317==((x318<=x319)-x320));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x330 = UINT32_MAX;
	volatile int32_t t68 = -31;

	t68 = (x329==((x330<=x331)-x332));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x333 = INT64_MIN;
	uint64_t x334 = 694LLU;
	int8_t x335 = 37;
	volatile int8_t x336 = 4;

	t69 = (x333==((x334<=x335)-x336));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x337 = INT64_MIN;
	int32_t x338 = INT32_MAX;
	int32_t x339 = -1860709;
	int16_t x340 = INT16_MIN;
	volatile int32_t t70 = 2;

	t70 = (x337==((x338<=x339)-x340));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x342 = 1U;
	int8_t x343 = INT8_MIN;
	static volatile int8_t x344 = -1;
	volatile int32_t t71 = -264730;

	t71 = (x341==((x342<=x343)-x344));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x346 = -1;
	volatile int16_t x347 = -2;
	int16_t x348 = 614;

	t72 = (x345==((x346<=x347)-x348));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x349 = INT8_MIN;
	int16_t x351 = INT16_MAX;
	int8_t x352 = -1;
	volatile int32_t t73 = 0;

	t73 = (x349==((x350<=x351)-x352));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x355 = 0;
	uint32_t x356 = 6U;

	t74 = (x353==((x354<=x355)-x356));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x357 = INT16_MAX;
	int8_t x358 = -1;
	static uint8_t x359 = UINT8_MAX;
	uint64_t x360 = 10195046LLU;
	int32_t t75 = -2167581;

	t75 = (x357==((x358<=x359)-x360));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x361 = 2080504U;
	uint64_t x362 = 114890708LLU;
	int32_t x363 = 1;
	int32_t t76 = 0;

	t76 = (x361==((x362<=x363)-x364));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x369 = -1LL;
	int32_t x370 = INT32_MAX;
	volatile uint16_t x371 = UINT16_MAX;
	static volatile uint64_t x372 = 372LLU;
	int32_t t77 = -362824511;

	t77 = (x369==((x370<=x371)-x372));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x373 = INT64_MAX;
	volatile int32_t x375 = INT32_MIN;
	volatile uint64_t x376 = 5448055428LLU;
	volatile int32_t t78 = -1;

	t78 = (x373==((x374<=x375)-x376));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x385 = INT64_MIN;
	uint16_t x386 = UINT16_MAX;
	int32_t x388 = 1;
	volatile int32_t t79 = 376671;

	t79 = (x385==((x386<=x387)-x388));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x389 = INT32_MAX;
	volatile int64_t x391 = -499435924LL;
	int8_t x392 = INT8_MAX;
	int32_t t80 = -40889266;

	t80 = (x389==((x390<=x391)-x392));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x393 = INT16_MIN;
	static uint32_t x394 = 401U;
	int8_t x395 = -1;
	int32_t x396 = -1;
	volatile int32_t t81 = -1137;

	t81 = (x393==((x394<=x395)-x396));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x397 = 209505284LLU;
	uint8_t x398 = 83U;
	static volatile int16_t x399 = -1;
	int8_t x400 = -1;
	int32_t t82 = -71266;

	t82 = (x397==((x398<=x399)-x400));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x402 = 551347U;
	uint64_t x404 = UINT64_MAX;
	int32_t t83 = -198716;

	t83 = (x401==((x402<=x403)-x404));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x405 = INT8_MIN;
	uint8_t x406 = 7U;
	int64_t x407 = 2399372LL;
	volatile uint32_t x408 = 7U;
	volatile int32_t t84 = 22018235;

	t84 = (x405==((x406<=x407)-x408));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x409 = 440U;
	volatile uint8_t x410 = 125U;
	volatile int32_t x411 = -18606;
	int64_t x412 = INT64_MAX;

	t85 = (x409==((x410<=x411)-x412));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x413 = -1;
	static uint32_t x414 = 1764811282U;
	uint64_t x415 = UINT64_MAX;
	int64_t x416 = 1481692LL;
	volatile int32_t t86 = -2;

	t86 = (x413==((x414<=x415)-x416));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x417 = -1;
	uint32_t x418 = 115U;
	int32_t t87 = 1;

	t87 = (x417==((x418<=x419)-x420));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x422 = 26;
	uint8_t x423 = 2U;
	static int8_t x424 = INT8_MIN;
	int32_t t88 = 353099796;

	t88 = (x421==((x422<=x423)-x424));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x425 = INT8_MIN;
	uint32_t x426 = 28122572U;
	int32_t t89 = -3891;

	t89 = (x425==((x426<=x427)-x428));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x429 = -1;
	uint32_t x430 = UINT32_MAX;
	static int16_t x431 = 44;
	int64_t x432 = INT64_MAX;
	volatile int32_t t90 = 3;

	t90 = (x429==((x430<=x431)-x432));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x433 = INT8_MIN;
	uint32_t x434 = UINT32_MAX;
	int32_t x435 = -14580;
	int32_t x436 = INT32_MAX;
	static int32_t t91 = 2776869;

	t91 = (x433==((x434<=x435)-x436));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x437 = 1;
	volatile uint64_t x439 = 15LLU;
	uint8_t x440 = 3U;
	int32_t t92 = -80756;

	t92 = (x437==((x438<=x439)-x440));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x441 = INT64_MIN;
	uint32_t x442 = 1U;
	static int8_t x444 = -1;
	int32_t t93 = 3;

	t93 = (x441==((x442<=x443)-x444));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x445 = -1;
	int32_t x446 = 203956008;
	static int32_t x447 = INT32_MIN;
	int64_t x448 = INT64_MAX;
	volatile int32_t t94 = -118;

	t94 = (x445==((x446<=x447)-x448));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x449 = UINT16_MAX;
	static int8_t x450 = INT8_MIN;
	int64_t x451 = 7LL;
	volatile uint8_t x452 = UINT8_MAX;
	volatile int32_t t95 = -2415;

	t95 = (x449==((x450<=x451)-x452));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x455 = UINT32_MAX;
	static int16_t x456 = -1;
	static int32_t t96 = 107;

	t96 = (x453==((x454<=x455)-x456));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x458 = -10;
	uint16_t x459 = 483U;
	uint64_t x460 = UINT64_MAX;
	static int32_t t97 = 644041;

	t97 = (x457==((x458<=x459)-x460));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint16_t x461 = 666U;
	int8_t x462 = INT8_MIN;

	t98 = (x461==((x462<=x463)-x464));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x465 = 789U;
	volatile int8_t x466 = 1;
	uint32_t x468 = 70U;
	static volatile int32_t t99 = -42;

	t99 = (x465==((x466<=x467)-x468));

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


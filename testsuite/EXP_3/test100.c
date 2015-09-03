#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = -42;
int32_t x7 = INT32_MAX;
static uint16_t x12 = UINT16_MAX;
volatile int32_t t2 = -1;
static int8_t x15 = -1;
uint64_t x25 = 264LLU;
int8_t x40 = INT8_MIN;
uint8_t x41 = 0U;
int64_t x42 = INT64_MAX;
int8_t x44 = INT8_MIN;
static volatile int32_t t10 = -219391187;
int32_t t14 = 24770;
int8_t x71 = INT8_MIN;
int32_t t16 = -290;
int16_t x79 = -1;
volatile int32_t t17 = 65449;
volatile int32_t t18 = -485183;
int16_t x91 = INT16_MAX;
int16_t x92 = -1;
volatile int32_t t19 = -786033430;
int32_t t20 = 40281;
static int16_t x105 = 6;
uint8_t x106 = 105U;
int64_t x115 = -1LL;
static uint64_t x129 = 2377LLU;
volatile int32_t x130 = 501;
volatile uint32_t x131 = 27096117U;
int64_t x134 = -1LL;
int32_t x153 = INT32_MIN;
int32_t x156 = INT32_MIN;
int16_t x165 = INT16_MIN;
static volatile int16_t x169 = INT16_MIN;
uint8_t x175 = 1U;
static int16_t x193 = -1;
volatile int8_t x195 = -1;
int32_t x209 = -1;
volatile int8_t x210 = -1;
int16_t x217 = INT16_MAX;
int8_t x219 = INT8_MIN;
int32_t t45 = 0;
static uint16_t x226 = 16260U;
volatile int32_t t46 = 1;
uint64_t x232 = 226702566906317117LLU;
int32_t t48 = 25018430;
int64_t x239 = -217642323034395LL;
int32_t t49 = 1484855;
static uint64_t x245 = 1858062181573LLU;
int64_t x248 = -1LL;
uint16_t x249 = UINT16_MAX;
static int16_t x250 = INT16_MIN;
int64_t x251 = -3789LL;
int32_t x256 = -120;
volatile int32_t t53 = 1;
int16_t x261 = -1;
volatile uint64_t x262 = UINT64_MAX;
volatile int8_t x266 = -1;
uint16_t x282 = 2070U;
uint16_t x287 = 263U;
int32_t x289 = 26967;
uint32_t x293 = 138118065U;
int8_t x295 = 0;
volatile int32_t x310 = INT32_MIN;
volatile int16_t x312 = 0;
int32_t x316 = 160390706;
volatile uint64_t x318 = UINT64_MAX;
int32_t x320 = -1;
int32_t x325 = -1;
static int8_t x327 = -1;
int64_t x328 = INT64_MAX;
int32_t x329 = 3586;
static int64_t x347 = -740339647716472769LL;
int16_t x351 = INT16_MIN;
static volatile int16_t x352 = 0;
int8_t x362 = -8;
volatile int16_t x386 = -31;
int8_t x391 = -53;
int32_t x399 = INT32_MIN;
volatile int32_t x408 = INT32_MIN;
volatile int32_t t86 = 566057187;
int64_t x412 = -1073285913LL;
volatile int32_t t87 = -4;
volatile int64_t x437 = INT64_MIN;
uint32_t x440 = UINT32_MAX;
volatile int32_t x447 = INT32_MAX;
uint32_t x448 = UINT32_MAX;
volatile int32_t x450 = INT32_MIN;
volatile int32_t t99 = 424876;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	uint32_t x2 = UINT32_MAX;
	volatile int8_t x3 = -1;
	int32_t x4 = 83501360;
	volatile int32_t t0 = -8334977;

	t0 = ((x1==x2)<(x3+x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	volatile int16_t x8 = -1;
	int32_t t1 = 0;

	t1 = ((x5==x6)<(x7+x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = UINT8_MAX;
	volatile int64_t x10 = -1LL;
	static volatile uint64_t x11 = 13612179829652441LLU;

	t2 = ((x9==x10)<(x11+x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 1;
	int32_t x14 = INT32_MIN;
	uint32_t x16 = 15U;
	volatile int32_t t3 = -2952;

	t3 = ((x13==x14)<(x15+x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = 55;
	uint8_t x18 = UINT8_MAX;
	int32_t x19 = -63235162;
	static uint64_t x20 = 1995344LLU;
	static volatile int32_t t4 = 78;

	t4 = ((x17==x18)<(x19+x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x26 = -1;
	uint32_t x27 = UINT32_MAX;
	int8_t x28 = INT8_MIN;
	int32_t t5 = 1;

	t5 = ((x25==x26)<(x27+x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x29 = -124;
	int64_t x30 = 1516338081352271LL;
	static int8_t x31 = INT8_MIN;
	static uint64_t x32 = UINT64_MAX;
	int32_t t6 = -209881;

	t6 = ((x29==x30)<(x31+x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MAX;
	int32_t x34 = 34;
	uint8_t x35 = UINT8_MAX;
	int8_t x36 = 2;
	volatile int32_t t7 = -5857;

	t7 = ((x33==x34)<(x35+x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MIN;
	uint64_t x38 = 9005559270281481LLU;
	static uint32_t x39 = 8060U;
	volatile int32_t t8 = 2266342;

	t8 = ((x37==x38)<(x39+x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x43 = INT16_MIN;
	static volatile int32_t t9 = -31337;

	t9 = ((x41==x42)<(x43+x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x45 = -109046;
	static volatile int16_t x46 = 426;
	int16_t x47 = -1;
	volatile uint32_t x48 = UINT32_MAX;

	t10 = ((x45==x46)<(x47+x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = INT8_MAX;
	static int16_t x50 = -1;
	int32_t x51 = INT32_MIN;
	volatile uint16_t x52 = UINT16_MAX;
	int32_t t11 = 5555975;

	t11 = ((x49==x50)<(x51+x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = -15106;
	uint16_t x58 = UINT16_MAX;
	static int32_t x59 = INT32_MIN;
	volatile uint32_t x60 = UINT32_MAX;
	volatile int32_t t12 = 104783447;

	t12 = ((x57==x58)<(x59+x60));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MAX;
	uint8_t x62 = 38U;
	int16_t x63 = INT16_MIN;
	int8_t x64 = INT8_MIN;
	int32_t t13 = -1;

	t13 = ((x61==x62)<(x63+x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = -2924;
	uint16_t x66 = 1019U;
	int32_t x67 = -11267;
	static int32_t x68 = 151730653;

	t14 = ((x65==x66)<(x67+x68));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = 1U;
	volatile int64_t x70 = 36LL;
	static uint32_t x72 = UINT32_MAX;
	int32_t t15 = -319071;

	t15 = ((x69==x70)<(x71+x72));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = -1;
	uint16_t x74 = 2007U;
	int32_t x75 = INT32_MAX;
	int8_t x76 = INT8_MIN;

	t16 = ((x73==x74)<(x75+x76));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = 7U;
	int32_t x78 = -1;
	static uint16_t x80 = 1807U;

	t17 = ((x77==x78)<(x79+x80));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x85 = 16;
	static int16_t x86 = INT16_MIN;
	volatile int64_t x87 = INT64_MIN;
	int32_t x88 = INT32_MAX;

	t18 = ((x85==x86)<(x87+x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = INT16_MIN;
	int32_t x90 = INT32_MIN;

	t19 = ((x89==x90)<(x91+x92));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x97 = 35U;
	int8_t x98 = -1;
	static int32_t x99 = 4363;
	static int8_t x100 = INT8_MIN;

	t20 = ((x97==x98)<(x99+x100));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x107 = INT64_MIN;
	static int32_t x108 = INT32_MAX;
	int32_t t21 = 0;

	t21 = ((x105==x106)<(x107+x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x113 = -1LL;
	uint64_t x114 = UINT64_MAX;
	static volatile uint64_t x116 = UINT64_MAX;
	int32_t t22 = 102690;

	t22 = ((x113==x114)<(x115+x116));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x117 = UINT8_MAX;
	int16_t x118 = -6;
	int8_t x119 = -9;
	int16_t x120 = 2;
	static volatile int32_t t23 = 7;

	t23 = ((x117==x118)<(x119+x120));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x125 = INT32_MIN;
	int16_t x126 = INT16_MIN;
	static int16_t x127 = INT16_MAX;
	volatile int64_t x128 = -1LL;
	int32_t t24 = -46910621;

	t24 = ((x125==x126)<(x127+x128));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x132 = -107LL;
	volatile int32_t t25 = -169799163;

	t25 = ((x129==x130)<(x131+x132));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x133 = 59066U;
	int64_t x135 = 117LL;
	int8_t x136 = -1;
	static volatile int32_t t26 = 117174;

	t26 = ((x133==x134)<(x135+x136));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x137 = UINT16_MAX;
	int32_t x138 = INT32_MIN;
	uint8_t x139 = UINT8_MAX;
	int8_t x140 = INT8_MAX;
	int32_t t27 = -27181;

	t27 = ((x137==x138)<(x139+x140));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x141 = INT32_MIN;
	int32_t x142 = INT32_MIN;
	int8_t x143 = INT8_MIN;
	volatile int16_t x144 = -1;
	static int32_t t28 = -690295;

	t28 = ((x141==x142)<(x143+x144));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x145 = -1;
	int32_t x146 = 5706984;
	int64_t x147 = INT64_MAX;
	int64_t x148 = -58250069563LL;
	volatile int32_t t29 = -59419;

	t29 = ((x145==x146)<(x147+x148));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x154 = -1;
	uint16_t x155 = UINT16_MAX;
	volatile int32_t t30 = 0;

	t30 = ((x153==x154)<(x155+x156));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x161 = -1;
	uint8_t x162 = 7U;
	int64_t x163 = INT64_MIN;
	uint8_t x164 = UINT8_MAX;
	int32_t t31 = -303;

	t31 = ((x161==x162)<(x163+x164));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x166 = 3U;
	volatile int16_t x167 = INT16_MIN;
	uint16_t x168 = 1180U;
	int32_t t32 = 2079;

	t32 = ((x165==x166)<(x167+x168));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x170 = INT64_MIN;
	int32_t x171 = INT32_MIN;
	int64_t x172 = 312683963463LL;
	volatile int32_t t33 = 211868956;

	t33 = ((x169==x170)<(x171+x172));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x173 = -15;
	int32_t x174 = INT32_MIN;
	static int8_t x176 = -1;
	static volatile int32_t t34 = -1;

	t34 = ((x173==x174)<(x175+x176));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x177 = 256029541;
	uint8_t x178 = 0U;
	volatile int16_t x179 = -1;
	int16_t x180 = -1;
	static volatile int32_t t35 = 1338757;

	t35 = ((x177==x178)<(x179+x180));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x181 = INT16_MIN;
	static int32_t x182 = -1;
	static uint16_t x183 = UINT16_MAX;
	static volatile uint16_t x184 = 171U;
	static int32_t t36 = -232;

	t36 = ((x181==x182)<(x183+x184));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x185 = INT16_MIN;
	static uint32_t x186 = 2954350U;
	volatile int8_t x187 = INT8_MAX;
	static uint64_t x188 = UINT64_MAX;
	volatile int32_t t37 = 0;

	t37 = ((x185==x186)<(x187+x188));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x189 = 657U;
	int8_t x190 = 9;
	int8_t x191 = 1;
	int16_t x192 = INT16_MIN;
	volatile int32_t t38 = 9192116;

	t38 = ((x189==x190)<(x191+x192));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x194 = INT16_MIN;
	static int64_t x196 = -6862993LL;
	volatile int32_t t39 = -621;

	t39 = ((x193==x194)<(x195+x196));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x197 = INT8_MIN;
	uint64_t x198 = UINT64_MAX;
	static int8_t x199 = -1;
	volatile uint32_t x200 = 1582023920U;
	volatile int32_t t40 = -3066758;

	t40 = ((x197==x198)<(x199+x200));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x205 = INT16_MAX;
	int8_t x206 = INT8_MAX;
	static int16_t x207 = INT16_MIN;
	volatile uint16_t x208 = 52U;
	volatile int32_t t41 = 1;

	t41 = ((x205==x206)<(x207+x208));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x211 = UINT32_MAX;
	int8_t x212 = -1;
	static int32_t t42 = -372066;

	t42 = ((x209==x210)<(x211+x212));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x213 = INT16_MIN;
	static int64_t x214 = -1LL;
	int32_t x215 = 6716;
	int64_t x216 = INT64_MIN;
	volatile int32_t t43 = -18;

	t43 = ((x213==x214)<(x215+x216));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x218 = INT16_MAX;
	static int16_t x220 = 1287;
	volatile int32_t t44 = -7105;

	t44 = ((x217==x218)<(x219+x220));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x221 = -1313820;
	int16_t x222 = -1;
	int16_t x223 = INT16_MIN;
	volatile int8_t x224 = -1;

	t45 = ((x221==x222)<(x223+x224));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x225 = 4586U;
	int8_t x227 = 2;
	static uint64_t x228 = 151LLU;

	t46 = ((x225==x226)<(x227+x228));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x229 = INT8_MIN;
	int32_t x230 = INT32_MIN;
	uint64_t x231 = 1334518973746265LLU;
	int32_t t47 = 2;

	t47 = ((x229==x230)<(x231+x232));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x233 = 82LLU;
	int16_t x234 = INT16_MIN;
	static int16_t x235 = INT16_MAX;
	int8_t x236 = INT8_MAX;

	t48 = ((x233==x234)<(x235+x236));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x237 = -1;
	uint64_t x238 = UINT64_MAX;
	static int8_t x240 = -1;

	t49 = ((x237==x238)<(x239+x240));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x241 = -12517994598338LL;
	int16_t x242 = 14362;
	volatile int16_t x243 = 1;
	int8_t x244 = INT8_MIN;
	static volatile int32_t t50 = 5438;

	t50 = ((x241==x242)<(x243+x244));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x246 = 0;
	static int8_t x247 = 0;
	static volatile int32_t t51 = -24290844;

	t51 = ((x245==x246)<(x247+x248));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x252 = UINT8_MAX;
	volatile int32_t t52 = -113269523;

	t52 = ((x249==x250)<(x251+x252));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x253 = -1LL;
	volatile uint32_t x254 = UINT32_MAX;
	int8_t x255 = -1;

	t53 = ((x253==x254)<(x255+x256));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x263 = INT32_MAX;
	static int32_t x264 = -1;
	int32_t t54 = -1;

	t54 = ((x261==x262)<(x263+x264));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x265 = -3315;
	int64_t x267 = INT64_MAX;
	int8_t x268 = -1;
	volatile int32_t t55 = -7458;

	t55 = ((x265==x266)<(x267+x268));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x269 = INT64_MIN;
	static uint8_t x270 = 0U;
	static volatile int16_t x271 = -16;
	static int64_t x272 = INT64_MAX;
	int32_t t56 = -450406030;

	t56 = ((x269==x270)<(x271+x272));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x273 = 10;
	uint64_t x274 = UINT64_MAX;
	static int64_t x275 = -1LL;
	int8_t x276 = INT8_MIN;
	static int32_t t57 = -703;

	t57 = ((x273==x274)<(x275+x276));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x277 = 1;
	volatile int8_t x278 = 3;
	uint8_t x279 = 114U;
	int16_t x280 = INT16_MAX;
	int32_t t58 = 323634072;

	t58 = ((x277==x278)<(x279+x280));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x281 = INT64_MIN;
	volatile int64_t x283 = -1LL;
	uint16_t x284 = 21U;
	static volatile int32_t t59 = -3;

	t59 = ((x281==x282)<(x283+x284));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x285 = 97362950742186125LL;
	int8_t x286 = INT8_MIN;
	int16_t x288 = INT16_MAX;
	volatile int32_t t60 = -24919180;

	t60 = ((x285==x286)<(x287+x288));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x290 = INT32_MIN;
	volatile int32_t x291 = 61300;
	volatile int16_t x292 = -1;
	volatile int32_t t61 = -42171474;

	t61 = ((x289==x290)<(x291+x292));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x294 = 429LLU;
	static uint64_t x296 = UINT64_MAX;
	int32_t t62 = 86;

	t62 = ((x293==x294)<(x295+x296));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x297 = -3276954;
	int16_t x298 = -1;
	int32_t x299 = 4037687;
	static int32_t x300 = INT32_MIN;
	volatile int32_t t63 = -5;

	t63 = ((x297==x298)<(x299+x300));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x301 = -7166115;
	static int32_t x302 = -1;
	volatile uint8_t x303 = UINT8_MAX;
	volatile int16_t x304 = 0;
	int32_t t64 = -24950;

	t64 = ((x301==x302)<(x303+x304));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x305 = INT8_MIN;
	int8_t x306 = INT8_MAX;
	int64_t x307 = -842486579379LL;
	static int16_t x308 = -1338;
	volatile int32_t t65 = 112761;

	t65 = ((x305==x306)<(x307+x308));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x309 = INT32_MIN;
	int64_t x311 = INT64_MAX;
	volatile int32_t t66 = 1;

	t66 = ((x309==x310)<(x311+x312));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x313 = -10082484;
	int32_t x314 = -1;
	uint32_t x315 = UINT32_MAX;
	int32_t t67 = 1;

	t67 = ((x313==x314)<(x315+x316));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x317 = -30462437747902598LL;
	uint8_t x319 = 95U;
	volatile int32_t t68 = -43449;

	t68 = ((x317==x318)<(x319+x320));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x321 = 7U;
	uint32_t x322 = UINT32_MAX;
	int32_t x323 = -1922;
	static int32_t x324 = -1308999;
	volatile int32_t t69 = -7;

	t69 = ((x321==x322)<(x323+x324));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x326 = -1;
	static volatile int32_t t70 = -412;

	t70 = ((x325==x326)<(x327+x328));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x330 = -1;
	volatile int32_t x331 = -34076;
	static int32_t x332 = INT32_MAX;
	int32_t t71 = 127;

	t71 = ((x329==x330)<(x331+x332));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x333 = UINT32_MAX;
	int32_t x334 = 0;
	int64_t x335 = INT64_MIN;
	uint64_t x336 = 5643640603059LLU;
	int32_t t72 = 1931;

	t72 = ((x333==x334)<(x335+x336));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x341 = -1LL;
	static uint64_t x342 = UINT64_MAX;
	int32_t x343 = INT32_MAX;
	uint64_t x344 = 1320434352821226LLU;
	volatile int32_t t73 = 475875;

	t73 = ((x341==x342)<(x343+x344));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x345 = UINT16_MAX;
	int16_t x346 = INT16_MIN;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t74 = 44454368;

	t74 = ((x345==x346)<(x347+x348));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x349 = 243202363;
	static int64_t x350 = INT64_MAX;
	static int32_t t75 = -49;

	t75 = ((x349==x350)<(x351+x352));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x353 = INT32_MIN;
	int16_t x354 = INT16_MIN;
	uint16_t x355 = 7U;
	uint32_t x356 = 11U;
	volatile int32_t t76 = 7;

	t76 = ((x353==x354)<(x355+x356));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x357 = 45257159627LLU;
	uint8_t x358 = 4U;
	volatile int8_t x359 = -1;
	int16_t x360 = -1;
	volatile int32_t t77 = 108;

	t77 = ((x357==x358)<(x359+x360));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x361 = 121U;
	static uint8_t x363 = 3U;
	int8_t x364 = INT8_MAX;
	volatile int32_t t78 = 4956;

	t78 = ((x361==x362)<(x363+x364));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x365 = -1LL;
	int64_t x366 = -92514534906152LL;
	int16_t x367 = 1090;
	int16_t x368 = -1651;
	int32_t t79 = 1438880;

	t79 = ((x365==x366)<(x367+x368));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x377 = 0;
	int16_t x378 = -5;
	int16_t x379 = -1;
	volatile uint32_t x380 = UINT32_MAX;
	static volatile int32_t t80 = 17;

	t80 = ((x377==x378)<(x379+x380));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x381 = 60;
	uint16_t x382 = 1972U;
	static int64_t x383 = -180206LL;
	int8_t x384 = -1;
	volatile int32_t t81 = -7;

	t81 = ((x381==x382)<(x383+x384));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x385 = INT8_MAX;
	volatile int8_t x387 = INT8_MIN;
	int16_t x388 = -1091;
	volatile int32_t t82 = -849;

	t82 = ((x385==x386)<(x387+x388));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint16_t x389 = 192U;
	volatile uint8_t x390 = 0U;
	static int64_t x392 = -1LL;
	int32_t t83 = -10710670;

	t83 = ((x389==x390)<(x391+x392));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x397 = 32;
	int8_t x398 = INT8_MIN;
	static uint8_t x400 = 2U;
	volatile int32_t t84 = 38;

	t84 = ((x397==x398)<(x399+x400));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x401 = -7;
	static uint8_t x402 = UINT8_MAX;
	uint16_t x403 = 85U;
	static volatile int32_t x404 = INT32_MIN;
	static int32_t t85 = -416158033;

	t85 = ((x401==x402)<(x403+x404));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x405 = -1;
	int32_t x406 = INT32_MIN;
	static int16_t x407 = INT16_MAX;

	t86 = ((x405==x406)<(x407+x408));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x409 = UINT64_MAX;
	uint32_t x410 = 0U;
	volatile int8_t x411 = -15;

	t87 = ((x409==x410)<(x411+x412));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x413 = INT16_MIN;
	int16_t x414 = INT16_MAX;
	uint8_t x415 = 14U;
	uint16_t x416 = 332U;
	int32_t t88 = -8023;

	t88 = ((x413==x414)<(x415+x416));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x417 = 5;
	int32_t x418 = 96961643;
	int8_t x419 = INT8_MIN;
	int32_t x420 = -6886239;
	int32_t t89 = 428771315;

	t89 = ((x417==x418)<(x419+x420));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x421 = INT32_MIN;
	int64_t x422 = INT64_MIN;
	uint16_t x423 = UINT16_MAX;
	uint64_t x424 = 308926301374LLU;
	int32_t t90 = -19979147;

	t90 = ((x421==x422)<(x423+x424));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x425 = INT32_MAX;
	int8_t x426 = INT8_MAX;
	int16_t x427 = INT16_MAX;
	int8_t x428 = -1;
	int32_t t91 = 14191118;

	t91 = ((x425==x426)<(x427+x428));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x438 = -1;
	static int8_t x439 = -1;
	int32_t t92 = 4690306;

	t92 = ((x437==x438)<(x439+x440));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x441 = INT16_MAX;
	volatile int64_t x442 = INT64_MIN;
	int64_t x443 = 200278173746112387LL;
	static int32_t x444 = -1;
	volatile int32_t t93 = -36550;

	t93 = ((x441==x442)<(x443+x444));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x445 = 803109148;
	int8_t x446 = INT8_MIN;
	static volatile int32_t t94 = -151092;

	t94 = ((x445==x446)<(x447+x448));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x449 = -1LL;
	int32_t x451 = -26204590;
	uint32_t x452 = 300431743U;
	volatile int32_t t95 = -7;

	t95 = ((x449==x450)<(x451+x452));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x453 = INT8_MIN;
	int32_t x454 = INT32_MIN;
	volatile uint8_t x455 = 2U;
	volatile int32_t x456 = INT32_MIN;
	volatile int32_t t96 = 0;

	t96 = ((x453==x454)<(x455+x456));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x457 = -4972;
	int8_t x458 = -10;
	int16_t x459 = -1;
	static volatile int16_t x460 = INT16_MAX;
	volatile int32_t t97 = -2;

	t97 = ((x457==x458)<(x459+x460));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x465 = 16729072147035LL;
	uint32_t x466 = UINT32_MAX;
	int16_t x467 = INT16_MAX;
	int8_t x468 = 9;
	int32_t t98 = 6;

	t98 = ((x465==x466)<(x467+x468));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x469 = 246470583876951LLU;
	int32_t x470 = 186709242;
	uint64_t x471 = UINT64_MAX;
	static volatile int8_t x472 = INT8_MIN;

	t99 = ((x469==x470)<(x471+x472));

	if (t99 != 1) { NG(); } else { ; }
	
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


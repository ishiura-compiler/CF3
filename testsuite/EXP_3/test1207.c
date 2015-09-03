#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MAX;
volatile int64_t t3 = -1054LL;
uint32_t x17 = UINT32_MAX;
static int8_t x18 = -1;
static int32_t x32 = 2937584;
volatile int64_t t7 = 1711LL;
volatile uint64_t t8 = 121030143LLU;
int16_t x47 = 1928;
static volatile int16_t x57 = -1;
static volatile uint32_t x58 = UINT32_MAX;
static uint32_t t13 = 0U;
volatile int64_t t14 = 63928134LL;
static int8_t x65 = INT8_MIN;
static int32_t x66 = 720;
volatile uint8_t x75 = 14U;
static int32_t x76 = INT32_MIN;
volatile uint64_t t17 = 204LLU;
volatile int16_t x95 = INT16_MIN;
int32_t x96 = -314;
uint64_t x97 = 58345LLU;
int32_t x98 = -1367;
int32_t x100 = INT32_MIN;
uint64_t x101 = UINT64_MAX;
uint32_t x104 = UINT32_MAX;
int16_t x105 = -1;
volatile int16_t x109 = 1827;
int32_t t25 = -22;
static int16_t x115 = -1;
static volatile uint32_t x116 = 5878455U;
uint16_t x117 = 6U;
volatile int32_t t27 = -8103;
uint64_t x121 = 14572686LLU;
int32_t x124 = -219883;
volatile int32_t t30 = 0;
int64_t x133 = 1816LL;
static volatile int8_t x139 = -3;
volatile uint64_t t32 = 1124927382563201LLU;
int64_t x143 = 1975LL;
volatile int32_t x163 = -1;
uint32_t x167 = 3U;
volatile int64_t t38 = -27LL;
int32_t x170 = INT32_MAX;
int32_t x176 = INT32_MAX;
volatile int64_t x179 = -543256LL;
int32_t t41 = 987151;
static uint32_t x186 = 173U;
int32_t t44 = 48062;
int8_t x193 = -1;
int8_t x198 = -13;
int16_t x199 = INT16_MAX;
int32_t x200 = 2131611;
volatile uint32_t t48 = 644U;
int32_t t49 = 11699327;
int16_t x216 = INT16_MAX;
static volatile int64_t t50 = -16663995LL;
static uint64_t x223 = 54020LLU;
int64_t t53 = 9LL;
int8_t x234 = -1;
int64_t x239 = INT64_MIN;
int16_t x248 = INT16_MAX;
int8_t x250 = 4;
int16_t x265 = -1;
static uint8_t x268 = 31U;
int16_t x269 = 10;
int8_t x271 = INT8_MIN;
uint64_t t65 = 288LLU;
uint16_t x283 = 2U;
uint32_t x285 = 10933751U;
static int8_t x286 = 0;
uint32_t t68 = 677846621U;
int32_t x289 = -14155;
uint64_t x294 = 417LLU;
static uint32_t x299 = 430212424U;
uint8_t x307 = 0U;
static int16_t x312 = -60;
uint32_t x314 = 2U;
int32_t x316 = INT32_MIN;
int8_t x321 = INT8_MIN;
volatile int64_t x327 = -1LL;
uint16_t x329 = 913U;
static uint64_t x331 = 96774LLU;
int8_t x345 = 1;
volatile int32_t x347 = -2933;
uint64_t x349 = 659380252LLU;
static volatile uint16_t x359 = UINT16_MAX;
static int8_t x360 = INT8_MAX;
static volatile int32_t t85 = -4355;
static int16_t x362 = -1;
static int64_t t86 = -44251064015LL;
uint8_t x369 = 9U;
uint16_t x372 = 2540U;
uint16_t x374 = 2583U;
int64_t x383 = 8LL;
int64_t x386 = -126526LL;
uint64_t x393 = 816754942672396LLU;
int16_t x395 = -1;
int16_t x407 = INT16_MIN;
uint64_t t95 = 527120792256005LLU;
int64_t x412 = INT64_MIN;
static uint64_t x422 = 878378LLU;


void f0(void) {
	int8_t x1 = -35;
	static volatile int16_t x2 = -1;
	uint16_t x4 = UINT16_MAX;
	int32_t t0 = -2;

	t0 = ((x1-x2)&(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 722360385LLU;
	int32_t x6 = -100;
	int64_t x7 = INT64_MIN;
	uint16_t x8 = 19U;
	volatile uint64_t t1 = 173585505853LLU;

	t1 = ((x5-x6)&(x7==x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x9 = -1;
	uint8_t x10 = 2U;
	static int64_t x11 = -1LL;
	volatile uint16_t x12 = 27U;
	volatile int32_t t2 = -8024396;

	t2 = ((x9-x10)&(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 57392913LL;
	uint8_t x14 = 3U;
	static int16_t x15 = -1;
	int64_t x16 = 12922919840LL;

	t3 = ((x13-x14)&(x15==x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x19 = INT32_MIN;
	uint16_t x20 = UINT16_MAX;
	uint32_t t4 = 3380485U;

	t4 = ((x17-x18)&(x19==x20));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = -291310;
	int64_t x22 = -1LL;
	int64_t x23 = INT64_MIN;
	volatile uint32_t x24 = 19014112U;
	static int64_t t5 = -8073959976554LL;

	t5 = ((x21-x22)&(x23==x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1;
	static int8_t x30 = 27;
	int16_t x31 = INT16_MAX;
	volatile int32_t t6 = 1;

	t6 = ((x29-x30)&(x31==x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 94458U;
	volatile int64_t x34 = -1LL;
	int8_t x35 = 2;
	volatile int32_t x36 = INT32_MAX;

	t7 = ((x33-x34)&(x35==x36));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = UINT16_MAX;
	volatile uint64_t x38 = 2793106525639258944LLU;
	int16_t x39 = INT16_MAX;
	volatile int64_t x40 = -1LL;

	t8 = ((x37-x38)&(x39==x40));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x41 = 5250343036LL;
	volatile int16_t x42 = INT16_MIN;
	volatile int8_t x43 = INT8_MIN;
	int16_t x44 = INT16_MIN;
	volatile int64_t t9 = 148946LL;

	t9 = ((x41-x42)&(x43==x44));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x45 = INT8_MIN;
	int8_t x46 = -1;
	uint8_t x48 = 31U;
	int32_t t10 = 9269;

	t10 = ((x45-x46)&(x47==x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x49 = 6;
	uint64_t x50 = 301087605077948LLU;
	volatile uint32_t x51 = 45U;
	static volatile int64_t x52 = -2780336114196527473LL;
	static uint64_t t11 = 27936963LLU;

	t11 = ((x49-x50)&(x51==x52));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x53 = 30886433;
	static uint64_t x54 = 138296192394747506LLU;
	volatile int64_t x55 = -1LL;
	int8_t x56 = 40;
	volatile uint64_t t12 = 10570228682075806LLU;

	t12 = ((x53-x54)&(x55==x56));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x59 = UINT64_MAX;
	int8_t x60 = INT8_MIN;

	t13 = ((x57-x58)&(x59==x60));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x61 = INT64_MIN;
	static int64_t x62 = INT64_MIN;
	static volatile int32_t x63 = INT32_MAX;
	static int8_t x64 = -6;

	t14 = ((x61-x62)&(x63==x64));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x67 = INT16_MIN;
	int32_t x68 = -4;
	int32_t t15 = -7231211;

	t15 = ((x65-x66)&(x67==x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -11;
	uint16_t x70 = UINT16_MAX;
	volatile uint16_t x71 = 3U;
	int64_t x72 = -1LL;
	int32_t t16 = -1;

	t16 = ((x69-x70)&(x71==x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x73 = INT16_MIN;
	uint64_t x74 = UINT64_MAX;

	t17 = ((x73-x74)&(x75==x76));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = 5500U;
	static int64_t x78 = -2543599LL;
	int8_t x79 = 3;
	uint32_t x80 = 8U;
	int64_t t18 = 520379626417LL;

	t18 = ((x77-x78)&(x79==x80));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = -25;
	int64_t x82 = INT64_MIN;
	int64_t x83 = INT64_MIN;
	static volatile int16_t x84 = INT16_MAX;
	volatile int64_t t19 = 6LL;

	t19 = ((x81-x82)&(x83==x84));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x89 = -34431176;
	int8_t x90 = -5;
	static int32_t x91 = 12;
	static int8_t x92 = 0;
	volatile int32_t t20 = 1;

	t20 = ((x89-x90)&(x91==x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = -1;
	volatile uint8_t x94 = 2U;
	int32_t t21 = -62834702;

	t21 = ((x93-x94)&(x95==x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x99 = -1LL;
	volatile uint64_t t22 = 517376LLU;

	t22 = ((x97-x98)&(x99==x100));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x102 = 8582667664720977LLU;
	int32_t x103 = INT32_MIN;
	volatile uint64_t t23 = 113201270LLU;

	t23 = ((x101-x102)&(x103==x104));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x106 = -1;
	uint16_t x107 = 1003U;
	volatile int8_t x108 = INT8_MIN;
	int32_t t24 = -502;

	t24 = ((x105-x106)&(x107==x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x110 = 0U;
	int64_t x111 = 84496LL;
	static uint16_t x112 = 5U;

	t25 = ((x109-x110)&(x111==x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x113 = 12946U;
	static uint16_t x114 = 12279U;
	static uint32_t t26 = 24576U;

	t26 = ((x113-x114)&(x115==x116));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x118 = 60516;
	int8_t x119 = INT8_MIN;
	static int64_t x120 = -1LL;

	t27 = ((x117-x118)&(x119==x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x122 = INT8_MIN;
	volatile int16_t x123 = -1;
	uint64_t t28 = 2963LLU;

	t28 = ((x121-x122)&(x123==x124));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x125 = UINT32_MAX;
	int8_t x126 = INT8_MAX;
	uint64_t x127 = 62415174241874786LLU;
	volatile int16_t x128 = -1;
	uint32_t t29 = 20996633U;

	t29 = ((x125-x126)&(x127==x128));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = -1;
	volatile int16_t x130 = -1;
	static int8_t x131 = INT8_MIN;
	int16_t x132 = -1;

	t30 = ((x129-x130)&(x131==x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x134 = INT8_MIN;
	int8_t x135 = -28;
	int32_t x136 = INT32_MIN;
	volatile int64_t t31 = 28048381LL;

	t31 = ((x133-x134)&(x135==x136));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x137 = 1500LLU;
	int64_t x138 = 575142989298631032LL;
	int16_t x140 = INT16_MIN;

	t32 = ((x137-x138)&(x139==x140));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = -1;
	uint16_t x142 = 894U;
	uint16_t x144 = 0U;
	volatile int32_t t33 = -4774568;

	t33 = ((x141-x142)&(x143==x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x149 = 645889U;
	static int64_t x150 = 2468219LL;
	volatile uint16_t x151 = 1U;
	int8_t x152 = INT8_MIN;
	int64_t t34 = 61301LL;

	t34 = ((x149-x150)&(x151==x152));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x153 = 26U;
	static int8_t x154 = INT8_MIN;
	int64_t x155 = INT64_MAX;
	static int8_t x156 = -3;
	volatile int32_t t35 = 18086127;

	t35 = ((x153-x154)&(x155==x156));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x157 = INT64_MAX;
	static int32_t x158 = 961747;
	static int32_t x159 = -1;
	volatile uint32_t x160 = UINT32_MAX;
	int64_t t36 = -3188464815392042LL;

	t36 = ((x157-x158)&(x159==x160));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x161 = -256LL;
	uint16_t x162 = UINT16_MAX;
	int32_t x164 = INT32_MIN;
	int64_t t37 = 1637639361332622257LL;

	t37 = ((x161-x162)&(x163==x164));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x165 = 7U;
	static int64_t x166 = 0LL;
	volatile int32_t x168 = -1;

	t38 = ((x165-x166)&(x167==x168));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = -1LL;
	volatile int64_t x171 = -4739119LL;
	int8_t x172 = -1;
	int64_t t39 = -10LL;

	t39 = ((x169-x170)&(x171==x172));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = -1;
	volatile uint32_t x174 = UINT32_MAX;
	static volatile int64_t x175 = -10165388229379694LL;
	uint32_t t40 = 35509732U;

	t40 = ((x173-x174)&(x175==x176));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = -1;
	uint8_t x178 = 12U;
	int16_t x180 = -1;

	t41 = ((x177-x178)&(x179==x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x181 = UINT32_MAX;
	int64_t x182 = -130207249587LL;
	uint8_t x183 = UINT8_MAX;
	volatile int8_t x184 = 0;
	volatile int64_t t42 = -209332038475754LL;

	t42 = ((x181-x182)&(x183==x184));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x185 = 17586778491756566LL;
	static uint8_t x187 = 5U;
	volatile int16_t x188 = INT16_MIN;
	volatile int64_t t43 = 54782152418452LL;

	t43 = ((x185-x186)&(x187==x188));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = INT32_MIN;
	static int8_t x190 = INT8_MIN;
	int32_t x191 = -467;
	int8_t x192 = 21;

	t44 = ((x189-x190)&(x191==x192));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x194 = INT32_MAX;
	static int16_t x195 = 21;
	uint16_t x196 = 2563U;
	int32_t t45 = 168541;

	t45 = ((x193-x194)&(x195==x196));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x197 = 46LLU;
	static uint64_t t46 = 1061021779LLU;

	t46 = ((x197-x198)&(x199==x200));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x201 = -1LL;
	static volatile uint32_t x202 = 14224U;
	int32_t x203 = INT32_MIN;
	uint64_t x204 = UINT64_MAX;
	static int64_t t47 = 2532376931489351941LL;

	t47 = ((x201-x202)&(x203==x204));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x205 = 32U;
	uint32_t x206 = 955741560U;
	volatile uint16_t x207 = 760U;
	int8_t x208 = 1;

	t48 = ((x205-x206)&(x207==x208));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x209 = 0U;
	int16_t x210 = INT16_MIN;
	volatile uint64_t x211 = 612681244LLU;
	int8_t x212 = 20;

	t49 = ((x209-x210)&(x211==x212));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = INT8_MIN;
	int64_t x214 = INT64_MIN;
	int32_t x215 = INT32_MIN;

	t50 = ((x213-x214)&(x215==x216));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x217 = UINT32_MAX;
	uint32_t x218 = UINT32_MAX;
	int8_t x219 = INT8_MIN;
	volatile int32_t x220 = INT32_MAX;
	static uint32_t t51 = 1398309060U;

	t51 = ((x217-x218)&(x219==x220));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x221 = INT64_MAX;
	int64_t x222 = INT64_MAX;
	int64_t x224 = -58336968668LL;
	int64_t t52 = -3281934643287885LL;

	t52 = ((x221-x222)&(x223==x224));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x225 = -1LL;
	volatile int16_t x226 = INT16_MAX;
	volatile int64_t x227 = INT64_MAX;
	uint16_t x228 = UINT16_MAX;

	t53 = ((x225-x226)&(x227==x228));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x229 = INT16_MAX;
	int64_t x230 = INT64_MAX;
	int64_t x231 = INT64_MAX;
	uint64_t x232 = 137763LLU;
	static volatile int64_t t54 = -383LL;

	t54 = ((x229-x230)&(x231==x232));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = INT32_MIN;
	int8_t x235 = INT8_MIN;
	volatile uint32_t x236 = UINT32_MAX;
	volatile int32_t t55 = 1;

	t55 = ((x233-x234)&(x235==x236));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = INT8_MIN;
	uint8_t x238 = 0U;
	int8_t x240 = INT8_MIN;
	int32_t t56 = 9945856;

	t56 = ((x237-x238)&(x239==x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = 244;
	int16_t x242 = -1;
	volatile int16_t x243 = INT16_MIN;
	int8_t x244 = INT8_MAX;
	static int32_t t57 = 1076;

	t57 = ((x241-x242)&(x243==x244));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x245 = 7216716U;
	int32_t x246 = INT32_MIN;
	int8_t x247 = INT8_MIN;
	uint32_t t58 = 26256U;

	t58 = ((x245-x246)&(x247==x248));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x249 = INT16_MAX;
	int16_t x251 = INT16_MIN;
	int32_t x252 = 11394;
	int32_t t59 = -291;

	t59 = ((x249-x250)&(x251==x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x253 = UINT64_MAX;
	uint64_t x254 = UINT64_MAX;
	static uint8_t x255 = 0U;
	int64_t x256 = INT64_MIN;
	uint64_t t60 = 9300LLU;

	t60 = ((x253-x254)&(x255==x256));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x257 = INT64_MIN;
	int64_t x258 = -1LL;
	int64_t x259 = INT64_MIN;
	int16_t x260 = INT16_MAX;
	int64_t t61 = 141765LL;

	t61 = ((x257-x258)&(x259==x260));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x261 = INT8_MIN;
	int8_t x262 = -3;
	int32_t x263 = -41086624;
	volatile uint8_t x264 = 28U;
	int32_t t62 = 8;

	t62 = ((x261-x262)&(x263==x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x266 = 2;
	int16_t x267 = INT16_MIN;
	volatile int32_t t63 = -63035;

	t63 = ((x265-x266)&(x267==x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x270 = 1;
	int32_t x272 = INT32_MAX;
	volatile int32_t t64 = -3;

	t64 = ((x269-x270)&(x271==x272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x273 = 66370628484271556LLU;
	volatile int64_t x274 = 0LL;
	uint16_t x275 = 2U;
	volatile int64_t x276 = INT64_MIN;

	t65 = ((x273-x274)&(x275==x276));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = 1;
	int16_t x278 = INT16_MIN;
	static int8_t x279 = INT8_MIN;
	uint16_t x280 = 6253U;
	int32_t t66 = -2246;

	t66 = ((x277-x278)&(x279==x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x281 = INT16_MIN;
	int64_t x282 = INT64_MIN;
	static int32_t x284 = -37;
	int64_t t67 = -1LL;

	t67 = ((x281-x282)&(x283==x284));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x287 = -1LL;
	int64_t x288 = INT64_MIN;

	t68 = ((x285-x286)&(x287==x288));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x290 = 2U;
	static int16_t x291 = INT16_MAX;
	int32_t x292 = INT32_MIN;
	static volatile uint32_t t69 = 535909515U;

	t69 = ((x289-x290)&(x291==x292));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x293 = UINT16_MAX;
	int8_t x295 = INT8_MIN;
	int64_t x296 = INT64_MIN;
	uint64_t t70 = 1083657360506375066LLU;

	t70 = ((x293-x294)&(x295==x296));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x297 = UINT8_MAX;
	volatile uint64_t x298 = UINT64_MAX;
	static uint32_t x300 = 1163U;
	uint64_t t71 = 12LLU;

	t71 = ((x297-x298)&(x299==x300));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x301 = UINT8_MAX;
	volatile int8_t x302 = INT8_MAX;
	uint8_t x303 = 11U;
	static int32_t x304 = -429880266;
	static int32_t t72 = 15352271;

	t72 = ((x301-x302)&(x303==x304));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x305 = UINT16_MAX;
	int32_t x306 = 5940;
	int64_t x308 = -1LL;
	volatile int32_t t73 = -3;

	t73 = ((x305-x306)&(x307==x308));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x309 = 31U;
	static int64_t x310 = -7LL;
	int64_t x311 = INT64_MIN;
	volatile int64_t t74 = 1066329749172363LL;

	t74 = ((x309-x310)&(x311==x312));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = 3;
	int32_t x315 = 85;
	uint32_t t75 = 5447638U;

	t75 = ((x313-x314)&(x315==x316));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x317 = -1;
	static int16_t x318 = 1;
	uint8_t x319 = UINT8_MAX;
	uint8_t x320 = 5U;
	int32_t t76 = 48;

	t76 = ((x317-x318)&(x319==x320));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x322 = INT32_MIN;
	static uint16_t x323 = UINT16_MAX;
	volatile int32_t x324 = INT32_MIN;
	volatile int32_t t77 = 3587126;

	t77 = ((x321-x322)&(x323==x324));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x325 = INT32_MAX;
	int16_t x326 = INT16_MAX;
	int8_t x328 = INT8_MIN;
	static volatile int32_t t78 = -2191804;

	t78 = ((x325-x326)&(x327==x328));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x330 = INT16_MIN;
	uint8_t x332 = UINT8_MAX;
	volatile int32_t t79 = -11;

	t79 = ((x329-x330)&(x331==x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x337 = 2943U;
	volatile uint32_t x338 = 55966892U;
	uint8_t x339 = 37U;
	static int64_t x340 = INT64_MAX;
	volatile uint32_t t80 = 195U;

	t80 = ((x337-x338)&(x339==x340));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = 774908;
	int32_t x342 = 677;
	uint8_t x343 = UINT8_MAX;
	int8_t x344 = 58;
	volatile int32_t t81 = -10;

	t81 = ((x341-x342)&(x343==x344));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x346 = 146LL;
	volatile int64_t x348 = 60181LL;
	int64_t t82 = 724111386LL;

	t82 = ((x345-x346)&(x347==x348));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x350 = -1LL;
	static uint32_t x351 = 0U;
	int64_t x352 = INT64_MAX;
	volatile uint64_t t83 = 754435LLU;

	t83 = ((x349-x350)&(x351==x352));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x353 = -1LL;
	uint32_t x354 = 27145993U;
	int64_t x355 = -1LL;
	int32_t x356 = INT32_MAX;
	static int64_t t84 = -2433807644839332LL;

	t84 = ((x353-x354)&(x355==x356));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x357 = 1840;
	uint16_t x358 = 136U;

	t85 = ((x357-x358)&(x359==x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x361 = -425731LL;
	volatile int16_t x363 = -42;
	uint32_t x364 = 0U;

	t86 = ((x361-x362)&(x363==x364));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x365 = UINT16_MAX;
	uint16_t x366 = 384U;
	static int8_t x367 = -1;
	volatile int64_t x368 = INT64_MIN;
	int32_t t87 = -243336326;

	t87 = ((x365-x366)&(x367==x368));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x370 = 1U;
	int8_t x371 = INT8_MAX;
	static int32_t t88 = 66;

	t88 = ((x369-x370)&(x371==x372));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x373 = 207892U;
	int64_t x375 = -1LL;
	int64_t x376 = -1LL;
	volatile uint32_t t89 = 1856U;

	t89 = ((x373-x374)&(x375==x376));

	if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x377 = 1U;
	int8_t x378 = -1;
	int32_t x379 = -1;
	int16_t x380 = INT16_MAX;
	volatile int32_t t90 = -997490725;

	t90 = ((x377-x378)&(x379==x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x381 = 23LL;
	static volatile int8_t x382 = -1;
	int16_t x384 = 0;
	int64_t t91 = -164122741465696686LL;

	t91 = ((x381-x382)&(x383==x384));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x385 = 0LL;
	int8_t x387 = -1;
	int64_t x388 = INT64_MAX;
	static volatile int64_t t92 = 158165LL;

	t92 = ((x385-x386)&(x387==x388));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x394 = -1;
	int32_t x396 = INT32_MIN;
	static volatile uint64_t t93 = 27292501LLU;

	t93 = ((x393-x394)&(x395==x396));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x401 = 25258578085527LLU;
	int16_t x402 = -1;
	int16_t x403 = INT16_MIN;
	volatile int16_t x404 = INT16_MIN;
	volatile uint64_t t94 = 399384LLU;

	t94 = ((x401-x402)&(x403==x404));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x405 = 57912822575435LLU;
	int64_t x406 = INT64_MIN;
	volatile int16_t x408 = INT16_MIN;

	t95 = ((x405-x406)&(x407==x408));

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x409 = -1LL;
	int8_t x410 = INT8_MAX;
	volatile int64_t x411 = INT64_MAX;
	volatile int64_t t96 = 1766891133218618LL;

	t96 = ((x409-x410)&(x411==x412));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x413 = -1LL;
	int8_t x414 = -18;
	uint64_t x415 = UINT64_MAX;
	uint64_t x416 = 71564499LLU;
	int64_t t97 = 194085882LL;

	t97 = ((x413-x414)&(x415==x416));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x417 = 4494057901474LLU;
	static int8_t x418 = -1;
	static int32_t x419 = 31;
	static uint64_t x420 = UINT64_MAX;
	static uint64_t t98 = 46621039LLU;

	t98 = ((x417-x418)&(x419==x420));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x421 = INT64_MIN;
	int16_t x423 = INT16_MIN;
	uint32_t x424 = 113441386U;
	uint64_t t99 = 933088LLU;

	t99 = ((x421-x422)&(x423==x424));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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


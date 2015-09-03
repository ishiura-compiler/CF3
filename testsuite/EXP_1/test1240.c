#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MIN;
static volatile uint64_t t1 = 24537579135035LLU;
int64_t x11 = INT64_MAX;
int64_t x17 = -1LL;
int64_t x18 = INT64_MIN;
volatile int8_t x23 = INT8_MIN;
volatile int32_t x28 = 11231;
volatile uint64_t t6 = 295LLU;
static int16_t x31 = INT16_MIN;
int16_t x36 = INT16_MIN;
static int8_t x37 = -1;
int64_t t11 = 2968870275420LL;
int32_t x52 = INT32_MIN;
int32_t x55 = -535055299;
int32_t x56 = INT32_MIN;
int32_t x62 = -1;
volatile int16_t x64 = INT16_MIN;
static uint64_t x65 = UINT64_MAX;
int32_t x66 = INT32_MIN;
volatile int16_t x68 = INT16_MAX;
volatile uint32_t t16 = 327433U;
volatile int8_t x72 = INT8_MIN;
int32_t x73 = INT32_MIN;
volatile int16_t x88 = INT16_MAX;
static volatile uint32_t t21 = 2782U;
static int64_t x96 = -1LL;
int16_t x98 = -1;
uint32_t x99 = 319U;
uint32_t x100 = 30321686U;
int16_t x119 = -1;
int64_t t27 = 47LL;
int8_t x121 = -1;
int16_t x122 = -1;
uint64_t t30 = 22369261LLU;
int8_t x136 = INT8_MIN;
volatile int64_t x140 = 59124975LL;
int16_t x149 = 15924;
int32_t t36 = -8826043;
static int16_t x157 = INT16_MIN;
int64_t x163 = INT64_MIN;
volatile int64_t t38 = 5626333LL;
uint8_t x172 = UINT8_MAX;
static volatile int32_t x173 = 220130;
static int32_t x174 = INT32_MIN;
int32_t x192 = -51;
int8_t x200 = -1;
int8_t x202 = INT8_MIN;
int16_t x203 = INT16_MIN;
static int64_t x204 = INT64_MAX;
volatile int32_t x208 = INT32_MIN;
static int8_t x211 = INT8_MIN;
uint16_t x216 = 8605U;
volatile int16_t x217 = INT16_MAX;
int8_t x218 = 1;
static volatile int64_t t52 = -1266786816146LL;
uint64_t x221 = 580LLU;
int64_t x224 = 2656523856LL;
static int32_t x231 = INT32_MIN;
uint64_t x244 = 61624023962LLU;
int8_t x245 = -1;
int64_t x252 = 25LL;
uint32_t x256 = UINT32_MAX;
int64_t x259 = -1LL;
int64_t x261 = -62535320420LL;
int16_t x269 = 850;
uint64_t t64 = 1005LLU;
int32_t t65 = 1645646;
static volatile int64_t x288 = -1LL;
volatile int32_t x289 = -448;
static int32_t x294 = INT32_MIN;
uint64_t t70 = 27207461421299418LLU;
int8_t x305 = INT8_MIN;
int16_t x306 = -1;
volatile uint32_t t72 = 1924727U;
int8_t x321 = INT8_MIN;
volatile uint64_t t75 = 678521006424049LLU;
volatile int8_t x332 = -14;
uint64_t x337 = 80150918LLU;
static uint64_t x340 = UINT64_MAX;
int32_t t79 = -4154284;
static volatile uint64_t x349 = UINT64_MAX;
static int64_t x353 = -22482265920737LL;
static int64_t x354 = -1LL;
uint16_t x356 = 405U;
uint8_t x357 = UINT8_MAX;
uint32_t x360 = 4103U;
int64_t x366 = -253984830946210777LL;
volatile int8_t x367 = 17;
int32_t x371 = INT32_MIN;
int32_t t85 = 114435;
int8_t x374 = INT8_MIN;
static volatile int16_t x376 = INT16_MIN;
volatile int64_t t86 = 74185002624362866LL;
uint64_t x378 = UINT64_MAX;
static volatile int32_t x384 = INT32_MIN;
int32_t x389 = 351;
volatile int16_t x392 = INT16_MIN;
int8_t x394 = -3;
int32_t x395 = INT32_MIN;
volatile int32_t t91 = -883;
static int64_t x397 = 121041LL;
volatile int8_t x398 = INT8_MAX;
volatile int8_t x400 = 22;
int64_t t93 = 15668980088851LL;
uint8_t x405 = 3U;
volatile uint32_t x407 = 45140U;
int64_t x408 = INT64_MIN;
int32_t t95 = 598499;
int16_t x413 = INT16_MIN;
int64_t t97 = -7380125612638LL;
volatile int32_t x421 = 5002;
volatile int16_t x424 = 4;
static volatile uint8_t x427 = 52U;


void f0(void) {
	uint16_t x1 = 422U;
	uint64_t x3 = 559273988658631197LLU;
	int32_t x4 = INT32_MIN;
	uint64_t t0 = 2195497671039992407LLU;

	t0 = (((x1==x2)%x3)%x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MAX;
	int16_t x6 = INT16_MAX;
	uint8_t x7 = 3U;
	volatile uint64_t x8 = 758660535826025129LLU;

	t1 = (((x5==x6)%x7)%x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 177170205U;
	int8_t x10 = INT8_MIN;
	uint64_t x12 = UINT64_MAX;
	uint64_t t2 = 43571527890LLU;

	t2 = (((x9==x10)%x11)%x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 25107U;
	uint8_t x14 = UINT8_MAX;
	uint64_t x15 = UINT64_MAX;
	volatile int16_t x16 = INT16_MIN;
	volatile uint64_t t3 = 1005454412LLU;

	t3 = (((x13==x14)%x15)%x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x19 = INT32_MIN;
	int64_t x20 = INT64_MAX;
	int64_t t4 = -6922525LL;

	t4 = (((x17==x18)%x19)%x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	uint64_t x22 = UINT64_MAX;
	uint8_t x24 = UINT8_MAX;
	static int32_t t5 = -875561758;

	t5 = (((x21==x22)%x23)%x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MAX;
	uint64_t x26 = 2799LLU;
	uint64_t x27 = UINT64_MAX;

	t6 = (((x25==x26)%x27)%x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 9771;
	int16_t x30 = -105;
	static int16_t x32 = INT16_MIN;
	static int32_t t7 = 252550;

	t7 = (((x29==x30)%x31)%x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -4933;
	static int16_t x34 = 1;
	volatile int8_t x35 = INT8_MIN;
	int32_t t8 = 418476;

	t8 = (((x33==x34)%x35)%x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x38 = 9U;
	volatile int8_t x39 = INT8_MAX;
	uint32_t x40 = UINT32_MAX;
	uint32_t t9 = 1712U;

	t9 = (((x37==x38)%x39)%x40);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = UINT16_MAX;
	int16_t x42 = 7;
	int32_t x43 = 1;
	uint32_t x44 = 7U;
	volatile uint32_t t10 = 169757565U;

	t10 = (((x41==x42)%x43)%x44);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	int64_t x46 = INT64_MIN;
	int64_t x47 = -198LL;
	int64_t x48 = -1LL;

	t11 = (((x45==x46)%x47)%x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	int32_t x50 = -7599;
	int16_t x51 = INT16_MIN;
	volatile int32_t t12 = 101;

	t12 = (((x49==x50)%x51)%x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	uint16_t x54 = 7862U;
	int32_t t13 = 57042;

	t13 = (((x53==x54)%x55)%x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = -2;
	int32_t x58 = -1191353;
	static int64_t x59 = INT64_MAX;
	volatile uint32_t x60 = 616215U;
	int64_t t14 = -133541571942970LL;

	t14 = (((x57==x58)%x59)%x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	int16_t x63 = INT16_MAX;
	int32_t t15 = -8643698;

	t15 = (((x61==x62)%x63)%x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x67 = 126162849U;

	t16 = (((x65==x66)%x67)%x68);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	int32_t x70 = INT32_MIN;
	int64_t x71 = 65698384052LL;
	static int64_t t17 = 6347673453523LL;

	t17 = (((x69==x70)%x71)%x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x74 = UINT32_MAX;
	volatile int64_t x75 = -29LL;
	static uint32_t x76 = 1098971732U;
	int64_t t18 = -2319385LL;

	t18 = (((x73==x74)%x75)%x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	static int64_t x78 = -525401210697980116LL;
	static uint32_t x79 = 7U;
	uint16_t x80 = 408U;
	uint32_t t19 = 3719525U;

	t19 = (((x77==x78)%x79)%x80);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x81 = INT32_MAX;
	int8_t x82 = INT8_MIN;
	uint32_t x83 = 200863569U;
	static int16_t x84 = 11300;
	volatile uint32_t t20 = 2715U;

	t20 = (((x81==x82)%x83)%x84);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = INT16_MAX;
	uint16_t x86 = UINT16_MAX;
	uint32_t x87 = 243613766U;

	t21 = (((x85==x86)%x87)%x88);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	int16_t x90 = INT16_MAX;
	int16_t x91 = -39;
	int32_t x92 = INT32_MIN;
	volatile int32_t t22 = -74792;

	t22 = (((x89==x90)%x91)%x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x93 = 10937916075979266LLU;
	int64_t x94 = INT64_MAX;
	volatile int8_t x95 = INT8_MIN;
	int64_t t23 = 1025774787403851187LL;

	t23 = (((x93==x94)%x95)%x96);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	static uint32_t t24 = 83602U;

	t24 = (((x97==x98)%x99)%x100);

	if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x101 = 2762LLU;
	static int8_t x102 = 1;
	int8_t x103 = INT8_MIN;
	uint8_t x104 = 19U;
	int32_t t25 = -35491;

	t25 = (((x101==x102)%x103)%x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = INT8_MIN;
	int16_t x110 = -1;
	int32_t x111 = INT32_MIN;
	int8_t x112 = INT8_MIN;
	volatile int32_t t26 = -6012;

	t26 = (((x109==x110)%x111)%x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x117 = INT16_MAX;
	int64_t x118 = -1LL;
	int64_t x120 = -3766842865207641690LL;

	t27 = (((x117==x118)%x119)%x120);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x123 = UINT16_MAX;
	static uint8_t x124 = UINT8_MAX;
	int32_t t28 = -795664;

	t28 = (((x121==x122)%x123)%x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x125 = INT8_MAX;
	int64_t x126 = INT64_MIN;
	volatile uint32_t x127 = UINT32_MAX;
	static uint64_t x128 = UINT64_MAX;
	static uint64_t t29 = 129418090204518043LLU;

	t29 = (((x125==x126)%x127)%x128);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x129 = -19;
	static int16_t x130 = 3;
	uint8_t x131 = 1U;
	uint64_t x132 = 339044029978255LLU;

	t30 = (((x129==x130)%x131)%x132);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MIN;
	int64_t x134 = INT64_MAX;
	int64_t x135 = 2894889657362708871LL;
	volatile int64_t t31 = 396512016088641LL;

	t31 = (((x133==x134)%x135)%x136);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x137 = 72U;
	volatile int32_t x138 = 19871030;
	volatile int64_t x139 = INT64_MIN;
	volatile int64_t t32 = 952452LL;

	t32 = (((x137==x138)%x139)%x140);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = INT8_MIN;
	int32_t x142 = -229;
	int32_t x143 = INT32_MAX;
	int64_t x144 = INT64_MIN;
	int64_t t33 = 1771943LL;

	t33 = (((x141==x142)%x143)%x144);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x145 = 26306106;
	volatile int32_t x146 = 0;
	int32_t x147 = INT32_MIN;
	uint8_t x148 = 78U;
	int32_t t34 = 902354;

	t34 = (((x145==x146)%x147)%x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x150 = 78U;
	volatile int64_t x151 = INT64_MIN;
	int64_t x152 = INT64_MIN;
	volatile int64_t t35 = -434240LL;

	t35 = (((x149==x150)%x151)%x152);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x153 = 16U;
	volatile int64_t x154 = -14478578307951673LL;
	int16_t x155 = -1;
	static int32_t x156 = -1;

	t36 = (((x153==x154)%x155)%x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x158 = INT8_MIN;
	static int16_t x159 = INT16_MIN;
	int16_t x160 = INT16_MIN;
	volatile int32_t t37 = 89943311;

	t37 = (((x157==x158)%x159)%x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = 12434174290LL;
	int16_t x162 = INT16_MAX;
	uint32_t x164 = 6857081U;

	t38 = (((x161==x162)%x163)%x164);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = -2;
	uint64_t x166 = 175962157692322405LLU;
	static uint16_t x167 = UINT16_MAX;
	int8_t x168 = INT8_MIN;
	int32_t t39 = -3250256;

	t39 = (((x165==x166)%x167)%x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = -1;
	int32_t x170 = 290934683;
	int64_t x171 = INT64_MAX;
	volatile int64_t t40 = -451LL;

	t40 = (((x169==x170)%x171)%x172);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x175 = INT64_MIN;
	volatile int32_t x176 = INT32_MAX;
	volatile int64_t t41 = 1556129411LL;

	t41 = (((x173==x174)%x175)%x176);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = INT8_MIN;
	volatile int32_t x178 = INT32_MAX;
	int16_t x179 = 290;
	int8_t x180 = -1;
	volatile int32_t t42 = -156447;

	t42 = (((x177==x178)%x179)%x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = -1;
	int8_t x182 = 6;
	int8_t x183 = 1;
	volatile uint32_t x184 = UINT32_MAX;
	volatile uint32_t t43 = 8U;

	t43 = (((x181==x182)%x183)%x184);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x185 = 5606717LLU;
	uint8_t x186 = UINT8_MAX;
	int32_t x187 = INT32_MIN;
	static volatile int16_t x188 = 8061;
	int32_t t44 = 0;

	t44 = (((x185==x186)%x187)%x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x189 = INT16_MIN;
	uint64_t x190 = 14353624525644496LLU;
	static int32_t x191 = -1;
	int32_t t45 = -11351;

	t45 = (((x189==x190)%x191)%x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = INT16_MIN;
	int64_t x194 = INT64_MAX;
	uint32_t x195 = UINT32_MAX;
	uint64_t x196 = 512947466064736LLU;
	static uint64_t t46 = 577105LLU;

	t46 = (((x193==x194)%x195)%x196);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x197 = UINT16_MAX;
	int16_t x198 = INT16_MIN;
	int8_t x199 = -1;
	int32_t t47 = -56;

	t47 = (((x197==x198)%x199)%x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = INT8_MAX;
	volatile int64_t t48 = 234787LL;

	t48 = (((x201==x202)%x203)%x204);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = INT32_MAX;
	int64_t x206 = INT64_MIN;
	uint64_t x207 = 2516424LLU;
	volatile uint64_t t49 = 130143059397976626LLU;

	t49 = (((x205==x206)%x207)%x208);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x209 = 6074483U;
	int16_t x210 = INT16_MAX;
	int32_t x212 = INT32_MIN;
	int32_t t50 = -9881041;

	t50 = (((x209==x210)%x211)%x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x213 = 152443LLU;
	volatile uint32_t x214 = UINT32_MAX;
	int64_t x215 = INT64_MAX;
	int64_t t51 = -101334530LL;

	t51 = (((x213==x214)%x215)%x216);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x219 = INT32_MAX;
	int64_t x220 = -45565413796558LL;

	t52 = (((x217==x218)%x219)%x220);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x222 = 3;
	uint32_t x223 = UINT32_MAX;
	static int64_t t53 = 2124720260983872375LL;

	t53 = (((x221==x222)%x223)%x224);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x225 = UINT32_MAX;
	int64_t x226 = 1329140LL;
	static int32_t x227 = INT32_MAX;
	uint32_t x228 = 21616190U;
	uint32_t t54 = 322U;

	t54 = (((x225==x226)%x227)%x228);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = INT8_MIN;
	static uint64_t x230 = 120584LLU;
	uint32_t x232 = UINT32_MAX;
	uint32_t t55 = 1U;

	t55 = (((x229==x230)%x231)%x232);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x237 = UINT32_MAX;
	int8_t x238 = INT8_MIN;
	uint16_t x239 = 7U;
	static uint8_t x240 = 124U;
	static volatile int32_t t56 = 5469;

	t56 = (((x237==x238)%x239)%x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x241 = 2269U;
	static int32_t x242 = INT32_MAX;
	int16_t x243 = INT16_MIN;
	volatile uint64_t t57 = 123817469159703LLU;

	t57 = (((x241==x242)%x243)%x244);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x246 = INT16_MIN;
	int8_t x247 = -19;
	static int8_t x248 = -52;
	int32_t t58 = -2285107;

	t58 = (((x245==x246)%x247)%x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x249 = -1;
	uint16_t x250 = 6423U;
	uint64_t x251 = UINT64_MAX;
	volatile uint64_t t59 = 2647365630LLU;

	t59 = (((x249==x250)%x251)%x252);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x253 = -1;
	static int32_t x254 = 5;
	static int64_t x255 = INT64_MIN;
	volatile int64_t t60 = 607962367183392137LL;

	t60 = (((x253==x254)%x255)%x256);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = INT32_MIN;
	uint32_t x258 = UINT32_MAX;
	int16_t x260 = 2;
	int64_t t61 = 133546716006767LL;

	t61 = (((x257==x258)%x259)%x260);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x262 = UINT64_MAX;
	int16_t x263 = -1136;
	static int32_t x264 = INT32_MIN;
	static volatile int32_t t62 = -1;

	t62 = (((x261==x262)%x263)%x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x265 = 66U;
	int64_t x266 = -1LL;
	volatile uint8_t x267 = 4U;
	uint8_t x268 = 4U;
	int32_t t63 = 85;

	t63 = (((x265==x266)%x267)%x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x270 = 16659968LL;
	int8_t x271 = INT8_MIN;
	uint64_t x272 = 3872303403655605LLU;

	t64 = (((x269==x270)%x271)%x272);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x273 = INT32_MIN;
	uint8_t x274 = 42U;
	int32_t x275 = -1;
	uint8_t x276 = 1U;

	t65 = (((x273==x274)%x275)%x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x281 = 598994U;
	volatile int32_t x282 = INT32_MAX;
	uint32_t x283 = UINT32_MAX;
	int64_t x284 = -1569276479842LL;
	int64_t t66 = -85082757LL;

	t66 = (((x281==x282)%x283)%x284);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x285 = 15U;
	int32_t x286 = INT32_MIN;
	uint32_t x287 = UINT32_MAX;
	int64_t t67 = -8558230770LL;

	t67 = (((x285==x286)%x287)%x288);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x290 = 0;
	int64_t x291 = INT64_MIN;
	int64_t x292 = -8037207767470655LL;
	volatile int64_t t68 = -3715561LL;

	t68 = (((x289==x290)%x291)%x292);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = 2;
	uint32_t x295 = 8574829U;
	int16_t x296 = INT16_MIN;
	volatile uint32_t t69 = 4303U;

	t69 = (((x293==x294)%x295)%x296);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x297 = -1;
	static uint32_t x298 = 4956393U;
	static int32_t x299 = INT32_MAX;
	uint64_t x300 = UINT64_MAX;

	t70 = (((x297==x298)%x299)%x300);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x307 = INT32_MIN;
	uint16_t x308 = 21758U;
	volatile int32_t t71 = 2;

	t71 = (((x305==x306)%x307)%x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x309 = INT32_MIN;
	int64_t x310 = 365LL;
	int32_t x311 = INT32_MAX;
	uint32_t x312 = UINT32_MAX;

	t72 = (((x309==x310)%x311)%x312);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x313 = -1LL;
	int64_t x314 = 57954143LL;
	int32_t x315 = INT32_MIN;
	int8_t x316 = INT8_MIN;
	static int32_t t73 = -1;

	t73 = (((x313==x314)%x315)%x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x317 = -1;
	volatile uint64_t x318 = 4642544LLU;
	volatile int8_t x319 = INT8_MAX;
	int8_t x320 = INT8_MIN;
	volatile int32_t t74 = 1;

	t74 = (((x317==x318)%x319)%x320);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x322 = -1;
	int16_t x323 = -1;
	static uint64_t x324 = UINT64_MAX;

	t75 = (((x321==x322)%x323)%x324);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x329 = 2U;
	volatile int16_t x330 = 0;
	static int8_t x331 = -1;
	int32_t t76 = 20628;

	t76 = (((x329==x330)%x331)%x332);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x333 = 2397067060636LLU;
	volatile int32_t x334 = -1;
	int64_t x335 = -81268737160691404LL;
	uint16_t x336 = 75U;
	int64_t t77 = 7586LL;

	t77 = (((x333==x334)%x335)%x336);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x338 = INT8_MIN;
	volatile int64_t x339 = -4080649709927LL;
	volatile uint64_t t78 = 165724722842128LLU;

	t78 = (((x337==x338)%x339)%x340);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x345 = -1;
	int16_t x346 = INT16_MAX;
	int8_t x347 = INT8_MAX;
	static int16_t x348 = 732;

	t79 = (((x345==x346)%x347)%x348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x350 = INT8_MIN;
	int8_t x351 = INT8_MIN;
	int64_t x352 = INT64_MAX;
	int64_t t80 = -85637LL;

	t80 = (((x349==x350)%x351)%x352);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x355 = INT16_MIN;
	volatile int32_t t81 = -778563959;

	t81 = (((x353==x354)%x355)%x356);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x358 = INT8_MIN;
	uint64_t x359 = 308325LLU;
	static volatile uint64_t t82 = 47932128219LLU;

	t82 = (((x357==x358)%x359)%x360);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x361 = -1LL;
	volatile int64_t x362 = 28937660240LL;
	int32_t x363 = INT32_MAX;
	int8_t x364 = -1;
	volatile int32_t t83 = 26373800;

	t83 = (((x361==x362)%x363)%x364);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x365 = 5LL;
	volatile int16_t x368 = INT16_MAX;
	volatile int32_t t84 = 5875447;

	t84 = (((x365==x366)%x367)%x368);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x369 = INT32_MIN;
	volatile int64_t x370 = -2079451387252LL;
	int16_t x372 = 1;

	t85 = (((x369==x370)%x371)%x372);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x373 = -1;
	int64_t x375 = 874290930052LL;

	t86 = (((x373==x374)%x375)%x376);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x377 = INT8_MIN;
	int8_t x379 = -1;
	volatile int32_t x380 = 101826;
	static int32_t t87 = -39;

	t87 = (((x377==x378)%x379)%x380);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x381 = INT64_MIN;
	volatile uint8_t x382 = 1U;
	static int8_t x383 = 1;
	int32_t t88 = -9;

	t88 = (((x381==x382)%x383)%x384);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x385 = 21679613457480LLU;
	int8_t x386 = 3;
	int16_t x387 = 1;
	uint16_t x388 = 889U;
	int32_t t89 = 47;

	t89 = (((x385==x386)%x387)%x388);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x390 = INT16_MAX;
	volatile int32_t x391 = INT32_MIN;
	int32_t t90 = -23;

	t90 = (((x389==x390)%x391)%x392);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x393 = INT32_MIN;
	int16_t x396 = 417;

	t91 = (((x393==x394)%x395)%x396);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x399 = -1LL;
	int64_t t92 = -811549154LL;

	t92 = (((x397==x398)%x399)%x400);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x401 = INT8_MAX;
	uint64_t x402 = 1330LLU;
	int64_t x403 = -209460990112731LL;
	static int16_t x404 = INT16_MIN;

	t93 = (((x401==x402)%x403)%x404);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x406 = INT64_MIN;
	static int64_t t94 = -104466228773694LL;

	t94 = (((x405==x406)%x407)%x408);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x409 = 17U;
	uint16_t x410 = 2228U;
	int16_t x411 = INT16_MIN;
	int16_t x412 = -1;

	t95 = (((x409==x410)%x411)%x412);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x414 = 70108;
	uint32_t x415 = 529U;
	volatile uint64_t x416 = UINT64_MAX;
	volatile uint64_t t96 = 7262518457LLU;

	t96 = (((x413==x414)%x415)%x416);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x417 = -3522080;
	static int8_t x418 = 7;
	int8_t x419 = 1;
	int64_t x420 = INT64_MAX;

	t97 = (((x417==x418)%x419)%x420);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x422 = 5U;
	static uint16_t x423 = 66U;
	int32_t t98 = 132663972;

	t98 = (((x421==x422)%x423)%x424);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x425 = INT16_MAX;
	volatile int32_t x426 = 1;
	int32_t x428 = -6410;
	static int32_t t99 = -36167;

	t99 = (((x425==x426)%x427)%x428);

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


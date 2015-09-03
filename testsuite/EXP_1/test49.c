#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x1 = 1791917916326376369LLU;
int16_t x3 = INT16_MAX;
uint8_t x5 = UINT8_MAX;
int64_t x11 = INT64_MAX;
int32_t t2 = 15803;
uint32_t x15 = 10U;
int16_t x37 = INT16_MIN;
uint64_t x40 = UINT64_MAX;
static int16_t x47 = -95;
int16_t x51 = 88;
int64_t x53 = INT64_MAX;
static uint64_t x56 = UINT64_MAX;
volatile int32_t t12 = -358197449;
int64_t x58 = -1LL;
int64_t x62 = 439800898LL;
static int8_t x64 = INT8_MAX;
static int32_t x76 = INT32_MIN;
int32_t t19 = -211934924;
int32_t x86 = -1;
static volatile int32_t x98 = 8;
volatile int32_t t23 = -52223;
int16_t x110 = INT16_MIN;
static uint8_t x117 = UINT8_MAX;
volatile int32_t x120 = INT32_MIN;
volatile uint16_t x122 = 998U;
volatile int32_t t27 = -1;
int8_t x126 = INT8_MIN;
uint16_t x133 = 7413U;
uint64_t x134 = 19508812LLU;
volatile int32_t t30 = -4;
int8_t x141 = INT8_MIN;
int16_t x144 = -197;
int16_t x147 = INT16_MIN;
uint8_t x155 = UINT8_MAX;
volatile int8_t x157 = INT8_MIN;
static volatile int64_t x165 = INT64_MIN;
int8_t x170 = 0;
int8_t x171 = INT8_MIN;
int16_t x173 = INT16_MIN;
volatile int32_t t39 = 1;
int64_t x182 = 33201951228364686LL;
static uint64_t x198 = 72915718LLU;
static int8_t x200 = INT8_MIN;
static int64_t x208 = INT64_MIN;
static int64_t x209 = INT64_MIN;
volatile int32_t x229 = -1160028;
int8_t x236 = -1;
int32_t t52 = 1486;
static uint64_t x238 = 1984068391543LLU;
volatile uint8_t x239 = 40U;
int32_t x249 = -623;
int32_t x255 = INT32_MIN;
int32_t x260 = INT32_MAX;
int16_t x267 = INT16_MIN;
volatile int32_t t58 = -1;
volatile int32_t x275 = INT32_MAX;
volatile int32_t t59 = -238;
static volatile int32_t x278 = 58;
uint64_t x284 = UINT64_MAX;
int32_t x287 = INT32_MIN;
int32_t x288 = 10433900;
int32_t t62 = 1;
static int32_t x289 = 1682;
int32_t x291 = INT32_MIN;
uint16_t x296 = 21626U;
volatile int32_t t64 = -88195;
int16_t x310 = -1;
int8_t x316 = -1;
static int32_t x322 = INT32_MIN;
int16_t x324 = INT16_MIN;
int32_t t71 = 55493866;
int32_t x329 = INT32_MIN;
static int32_t t72 = -12965;
static int16_t x333 = -56;
static volatile int8_t x336 = -1;
static int32_t t73 = -885923;
uint64_t x344 = UINT64_MAX;
volatile int32_t t75 = -429100;
volatile int16_t x346 = 1;
uint16_t x347 = 763U;
int32_t t76 = 46;
uint64_t x354 = 105506494LLU;
volatile int32_t t78 = 33;
int64_t x360 = INT64_MIN;
static uint64_t x384 = 13232012563LLU;
volatile int8_t x401 = -3;
uint64_t x402 = 237LLU;
int8_t x404 = -1;
static volatile int64_t x413 = -12244724618217821LL;
int32_t x415 = 36481;
int16_t x420 = 9180;
static volatile int32_t t94 = -499376;
int8_t x441 = INT8_MIN;
int8_t x443 = INT8_MIN;
uint16_t x450 = 2U;


void f0(void) {
	volatile int8_t x2 = INT8_MAX;
	static int32_t x4 = -1;
	int32_t t0 = -19007;

	t0 = (((x1+x2)/x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x6 = 101U;
	int64_t x7 = -50543223448LL;
	uint32_t x8 = 13U;
	int32_t t1 = -70980949;

	t1 = (((x5+x6)/x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	static int8_t x10 = -1;
	volatile int32_t x12 = -52618;

	t2 = (((x9+x10)/x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 123U;
	int32_t x14 = -1;
	static uint8_t x16 = 7U;
	volatile int32_t t3 = 1;

	t3 = (((x13+x14)/x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = UINT64_MAX;
	uint64_t x18 = UINT64_MAX;
	static int32_t x19 = INT32_MIN;
	volatile int64_t x20 = INT64_MIN;
	volatile int32_t t4 = -298946138;

	t4 = (((x17+x18)/x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	int16_t x22 = INT16_MIN;
	uint64_t x23 = UINT64_MAX;
	int64_t x24 = -1LL;
	int32_t t5 = 15633709;

	t5 = (((x21+x22)/x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	uint16_t x26 = UINT16_MAX;
	int8_t x27 = INT8_MIN;
	volatile int8_t x28 = INT8_MAX;
	int32_t t6 = 33580267;

	t6 = (((x25+x26)/x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = 55554746U;
	static uint64_t x30 = 7558555811095063168LLU;
	uint8_t x31 = 49U;
	volatile int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -3999;

	t7 = (((x29+x30)/x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x38 = 1648698001830LLU;
	volatile int8_t x39 = -44;
	int32_t t8 = -3;

	t8 = (((x37+x38)/x39)<=x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 812670U;
	uint32_t x42 = UINT32_MAX;
	int32_t x43 = -564;
	uint16_t x44 = 7U;
	static int32_t t9 = -238914;

	t9 = (((x41+x42)/x43)<=x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	int8_t x46 = -1;
	int16_t x48 = -1;
	static int32_t t10 = -744098541;

	t10 = (((x45+x46)/x47)<=x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -1;
	volatile uint64_t x50 = 41650224697172911LLU;
	int32_t x52 = INT32_MAX;
	static volatile int32_t t11 = -330782410;

	t11 = (((x49+x50)/x51)<=x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x54 = -1LL;
	volatile int8_t x55 = -1;

	t12 = (((x53+x54)/x55)<=x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x57 = UINT64_MAX;
	int32_t x59 = -1;
	static uint16_t x60 = UINT16_MAX;
	int32_t t13 = -517876;

	t13 = (((x57+x58)/x59)<=x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = 40U;
	int8_t x63 = INT8_MIN;
	volatile int32_t t14 = -904;

	t14 = (((x61+x62)/x63)<=x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = -1;
	int8_t x66 = INT8_MIN;
	int16_t x67 = -1;
	int16_t x68 = INT16_MAX;
	int32_t t15 = -405;

	t15 = (((x65+x66)/x67)<=x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MAX;
	static uint16_t x70 = 133U;
	static int64_t x71 = -1033254076451225386LL;
	uint16_t x72 = UINT16_MAX;
	int32_t t16 = -1;

	t16 = (((x69+x70)/x71)<=x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = 26753299062LL;
	int64_t x74 = INT64_MIN;
	int64_t x75 = 12204341053LL;
	volatile int32_t t17 = 7;

	t17 = (((x73+x74)/x75)<=x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = 7;
	volatile uint64_t x78 = UINT64_MAX;
	int32_t x79 = -1;
	static int32_t x80 = -1;
	volatile int32_t t18 = 1815793;

	t18 = (((x77+x78)/x79)<=x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x81 = 33595772709LLU;
	int32_t x82 = -8182638;
	static int64_t x83 = INT64_MIN;
	static volatile int16_t x84 = INT16_MAX;

	t19 = (((x81+x82)/x83)<=x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x85 = INT64_MAX;
	int16_t x87 = 1;
	int32_t x88 = 1059238431;
	int32_t t20 = 166563;

	t20 = (((x85+x86)/x87)<=x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = -1LL;
	int32_t x94 = INT32_MIN;
	static int16_t x95 = INT16_MIN;
	int32_t x96 = 406;
	volatile int32_t t21 = 1093;

	t21 = (((x93+x94)/x95)<=x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x97 = 1U;
	static int32_t x99 = INT32_MAX;
	uint16_t x100 = UINT16_MAX;
	static int32_t t22 = 1208;

	t22 = (((x97+x98)/x99)<=x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x101 = 459234833U;
	static volatile int16_t x102 = -1;
	uint16_t x103 = 4U;
	static uint16_t x104 = 218U;

	t23 = (((x101+x102)/x103)<=x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x105 = INT8_MIN;
	volatile int32_t x106 = -1;
	static int16_t x107 = INT16_MIN;
	int32_t x108 = INT32_MIN;
	static int32_t t24 = 99885;

	t24 = (((x105+x106)/x107)<=x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = INT16_MIN;
	uint8_t x111 = 2U;
	static int32_t x112 = -1;
	int32_t t25 = -8067645;

	t25 = (((x109+x110)/x111)<=x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x118 = 39;
	uint64_t x119 = UINT64_MAX;
	volatile int32_t t26 = -19007;

	t26 = (((x117+x118)/x119)<=x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x121 = -1LL;
	static int16_t x123 = INT16_MIN;
	uint16_t x124 = UINT16_MAX;

	t27 = (((x121+x122)/x123)<=x124);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x125 = 12256696U;
	int32_t x127 = INT32_MAX;
	int16_t x128 = INT16_MIN;
	int32_t t28 = 3168250;

	t28 = (((x125+x126)/x127)<=x128);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x135 = INT8_MAX;
	uint32_t x136 = 23294U;
	int32_t t29 = 251;

	t29 = (((x133+x134)/x135)<=x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x137 = 1U;
	int64_t x138 = -1LL;
	int32_t x139 = 3;
	static int32_t x140 = INT32_MAX;

	t30 = (((x137+x138)/x139)<=x140);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x142 = UINT16_MAX;
	int32_t x143 = INT32_MAX;
	static volatile int32_t t31 = 26977895;

	t31 = (((x141+x142)/x143)<=x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x145 = 0U;
	int32_t x146 = -10;
	uint64_t x148 = 1277801622094559037LLU;
	int32_t t32 = 0;

	t32 = (((x145+x146)/x147)<=x148);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = INT8_MAX;
	volatile uint64_t x150 = 497671749786LLU;
	volatile int32_t x151 = INT32_MIN;
	uint64_t x152 = 58LLU;
	volatile int32_t t33 = 472845630;

	t33 = (((x149+x150)/x151)<=x152);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = INT64_MIN;
	uint32_t x154 = UINT32_MAX;
	static uint32_t x156 = 207760715U;
	static volatile int32_t t34 = 261447;

	t34 = (((x153+x154)/x155)<=x156);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x158 = INT16_MIN;
	uint64_t x159 = UINT64_MAX;
	static uint8_t x160 = UINT8_MAX;
	volatile int32_t t35 = 7293;

	t35 = (((x157+x158)/x159)<=x160);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x161 = UINT16_MAX;
	int32_t x162 = -1;
	volatile int16_t x163 = INT16_MAX;
	int32_t x164 = 4347;
	volatile int32_t t36 = 24004637;

	t36 = (((x161+x162)/x163)<=x164);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x166 = UINT16_MAX;
	int32_t x167 = INT32_MAX;
	int16_t x168 = -1;
	static volatile int32_t t37 = 30;

	t37 = (((x165+x166)/x167)<=x168);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = INT64_MAX;
	int32_t x172 = 240;
	int32_t t38 = -466726;

	t38 = (((x169+x170)/x171)<=x172);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x174 = UINT32_MAX;
	int32_t x175 = INT32_MIN;
	volatile uint16_t x176 = 241U;

	t39 = (((x173+x174)/x175)<=x176);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x181 = -1;
	int64_t x183 = -14LL;
	int32_t x184 = -1;
	int32_t t40 = 481;

	t40 = (((x181+x182)/x183)<=x184);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x185 = 0U;
	int32_t x186 = INT32_MAX;
	uint32_t x187 = 910052650U;
	int16_t x188 = INT16_MIN;
	static volatile int32_t t41 = -3751503;

	t41 = (((x185+x186)/x187)<=x188);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x193 = UINT64_MAX;
	static uint8_t x194 = 2U;
	uint16_t x195 = UINT16_MAX;
	static uint16_t x196 = 25U;
	static int32_t t42 = 1058548806;

	t42 = (((x193+x194)/x195)<=x196);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x197 = UINT64_MAX;
	int64_t x199 = -2847LL;
	int32_t t43 = -8739979;

	t43 = (((x197+x198)/x199)<=x200);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x201 = 0;
	int8_t x202 = INT8_MIN;
	volatile int32_t x203 = INT32_MAX;
	static uint32_t x204 = UINT32_MAX;
	int32_t t44 = 156701320;

	t44 = (((x201+x202)/x203)<=x204);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x205 = INT16_MIN;
	uint64_t x206 = 1790055LLU;
	volatile uint16_t x207 = 3779U;
	int32_t t45 = 217068;

	t45 = (((x205+x206)/x207)<=x208);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x210 = INT64_MAX;
	uint32_t x211 = 41U;
	uint64_t x212 = 668LLU;
	volatile int32_t t46 = -11531226;

	t46 = (((x209+x210)/x211)<=x212);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x213 = -1;
	int16_t x214 = INT16_MAX;
	int32_t x215 = 14624764;
	int8_t x216 = INT8_MIN;
	volatile int32_t t47 = 1699294;

	t47 = (((x213+x214)/x215)<=x216);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x217 = INT8_MIN;
	int8_t x218 = INT8_MIN;
	uint8_t x219 = 28U;
	static volatile int32_t x220 = INT32_MIN;
	static volatile int32_t t48 = 1358;

	t48 = (((x217+x218)/x219)<=x220);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x221 = -182137LL;
	int64_t x222 = -1LL;
	int64_t x223 = -38741946LL;
	uint64_t x224 = UINT64_MAX;
	volatile int32_t t49 = -27791;

	t49 = (((x221+x222)/x223)<=x224);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x225 = 2030002371350LLU;
	int16_t x226 = INT16_MAX;
	static int16_t x227 = 597;
	static uint8_t x228 = UINT8_MAX;
	int32_t t50 = 378;

	t50 = (((x225+x226)/x227)<=x228);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x230 = -1;
	uint8_t x231 = UINT8_MAX;
	volatile int64_t x232 = -497LL;
	static int32_t t51 = -1;

	t51 = (((x229+x230)/x231)<=x232);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x233 = INT8_MIN;
	static int16_t x234 = -3;
	uint16_t x235 = UINT16_MAX;

	t52 = (((x233+x234)/x235)<=x236);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x237 = UINT32_MAX;
	volatile int16_t x240 = 685;
	volatile int32_t t53 = 6859962;

	t53 = (((x237+x238)/x239)<=x240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x241 = INT32_MIN;
	static uint16_t x242 = 612U;
	int64_t x243 = INT64_MIN;
	static int8_t x244 = -2;
	static volatile int32_t t54 = 3332;

	t54 = (((x241+x242)/x243)<=x244);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x250 = 371119880LLU;
	uint8_t x251 = 124U;
	static int8_t x252 = 0;
	int32_t t55 = 85866591;

	t55 = (((x249+x250)/x251)<=x252);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x253 = INT64_MIN;
	static uint8_t x254 = 2U;
	int32_t x256 = -2;
	int32_t t56 = -7;

	t56 = (((x253+x254)/x255)<=x256);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x257 = -13747716837139LL;
	uint8_t x258 = 12U;
	uint64_t x259 = 5609300LLU;
	volatile int32_t t57 = -1070285;

	t57 = (((x257+x258)/x259)<=x260);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x265 = INT16_MIN;
	volatile int32_t x266 = 275917;
	uint64_t x268 = 63338639748282LLU;

	t58 = (((x265+x266)/x267)<=x268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x273 = 9168933;
	uint32_t x274 = 44298U;
	uint16_t x276 = UINT16_MAX;

	t59 = (((x273+x274)/x275)<=x276);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x277 = 23303LLU;
	volatile int8_t x279 = -1;
	uint64_t x280 = 4169060LLU;
	volatile int32_t t60 = 1;

	t60 = (((x277+x278)/x279)<=x280);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x281 = 54U;
	volatile int8_t x282 = -1;
	int8_t x283 = 17;
	static volatile int32_t t61 = -92746;

	t61 = (((x281+x282)/x283)<=x284);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x285 = 20U;
	static int64_t x286 = 19238LL;

	t62 = (((x285+x286)/x287)<=x288);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x290 = INT8_MIN;
	int8_t x292 = INT8_MIN;
	volatile int32_t t63 = 279;

	t63 = (((x289+x290)/x291)<=x292);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x293 = INT16_MAX;
	volatile int8_t x294 = -23;
	static int8_t x295 = INT8_MIN;

	t64 = (((x293+x294)/x295)<=x296);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x301 = INT8_MIN;
	static int16_t x302 = INT16_MIN;
	int16_t x303 = INT16_MIN;
	int16_t x304 = -63;
	int32_t t65 = -142376266;

	t65 = (((x301+x302)/x303)<=x304);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x305 = INT8_MAX;
	int16_t x306 = -3;
	volatile int8_t x307 = -1;
	int32_t x308 = INT32_MIN;
	static volatile int32_t t66 = -741;

	t66 = (((x305+x306)/x307)<=x308);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x309 = -3495;
	volatile uint16_t x311 = UINT16_MAX;
	static int64_t x312 = INT64_MAX;
	int32_t t67 = -3;

	t67 = (((x309+x310)/x311)<=x312);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x313 = INT16_MAX;
	volatile uint64_t x314 = 18657580249052179LLU;
	uint8_t x315 = 1U;
	static volatile int32_t t68 = -3744361;

	t68 = (((x313+x314)/x315)<=x316);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x317 = 4305133U;
	int32_t x318 = 6;
	int8_t x319 = INT8_MIN;
	int16_t x320 = INT16_MIN;
	volatile int32_t t69 = 33;

	t69 = (((x317+x318)/x319)<=x320);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x321 = 3437U;
	static int32_t x323 = INT32_MIN;
	static volatile int32_t t70 = 3760003;

	t70 = (((x321+x322)/x323)<=x324);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x325 = INT8_MIN;
	int64_t x326 = 3LL;
	static volatile int64_t x327 = INT64_MAX;
	uint16_t x328 = 57U;

	t71 = (((x325+x326)/x327)<=x328);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x330 = 10;
	static int32_t x331 = INT32_MIN;
	int32_t x332 = -1;

	t72 = (((x329+x330)/x331)<=x332);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x334 = INT16_MIN;
	uint64_t x335 = 36334513LLU;

	t73 = (((x333+x334)/x335)<=x336);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x337 = -1;
	int32_t x338 = -405569540;
	volatile int64_t x339 = -1LL;
	volatile int16_t x340 = INT16_MIN;
	static volatile int32_t t74 = -240753;

	t74 = (((x337+x338)/x339)<=x340);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x341 = UINT8_MAX;
	uint64_t x342 = UINT64_MAX;
	uint32_t x343 = 71U;

	t75 = (((x341+x342)/x343)<=x344);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x345 = -1LL;
	volatile int32_t x348 = INT32_MIN;

	t76 = (((x345+x346)/x347)<=x348);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x349 = -1;
	uint64_t x350 = 55LLU;
	int32_t x351 = INT32_MIN;
	int64_t x352 = INT64_MIN;
	volatile int32_t t77 = -245114137;

	t77 = (((x349+x350)/x351)<=x352);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x353 = INT8_MIN;
	int16_t x355 = 1;
	int16_t x356 = INT16_MAX;

	t78 = (((x353+x354)/x355)<=x356);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x357 = INT8_MIN;
	volatile int16_t x358 = INT16_MIN;
	int64_t x359 = INT64_MIN;
	int32_t t79 = -772;

	t79 = (((x357+x358)/x359)<=x360);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x361 = INT8_MAX;
	static int64_t x362 = INT64_MIN;
	volatile int8_t x363 = -52;
	int16_t x364 = INT16_MIN;
	int32_t t80 = 616;

	t80 = (((x361+x362)/x363)<=x364);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x369 = 7329078LLU;
	int16_t x370 = 0;
	uint8_t x371 = 32U;
	int16_t x372 = -1;
	int32_t t81 = 285599;

	t81 = (((x369+x370)/x371)<=x372);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x373 = UINT16_MAX;
	uint64_t x374 = 922695497406827LLU;
	int16_t x375 = -1;
	volatile uint64_t x376 = UINT64_MAX;
	static volatile int32_t t82 = 2009098;

	t82 = (((x373+x374)/x375)<=x376);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x381 = 52148605379630LLU;
	static int8_t x382 = INT8_MIN;
	static int64_t x383 = -82006LL;
	int32_t t83 = 89918586;

	t83 = (((x381+x382)/x383)<=x384);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x385 = INT16_MIN;
	int32_t x386 = -1;
	uint16_t x387 = UINT16_MAX;
	int32_t x388 = INT32_MIN;
	int32_t t84 = -3905;

	t84 = (((x385+x386)/x387)<=x388);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x389 = 231U;
	int64_t x390 = INT64_MIN;
	static int32_t x391 = INT32_MAX;
	int32_t x392 = 0;
	volatile int32_t t85 = 28411;

	t85 = (((x389+x390)/x391)<=x392);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x393 = -1;
	int64_t x394 = 72014577532720048LL;
	volatile uint16_t x395 = 19307U;
	int8_t x396 = INT8_MIN;
	volatile int32_t t86 = -426446793;

	t86 = (((x393+x394)/x395)<=x396);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x397 = UINT32_MAX;
	int16_t x398 = -6024;
	static int8_t x399 = -1;
	int64_t x400 = -3861003LL;
	static volatile int32_t t87 = -91199552;

	t87 = (((x397+x398)/x399)<=x400);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x403 = -1;
	volatile int32_t t88 = -24;

	t88 = (((x401+x402)/x403)<=x404);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x409 = UINT16_MAX;
	int16_t x410 = INT16_MAX;
	int32_t x411 = -32615622;
	int16_t x412 = -1;
	volatile int32_t t89 = 5122183;

	t89 = (((x409+x410)/x411)<=x412);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x414 = INT8_MIN;
	static int16_t x416 = INT16_MIN;
	int32_t t90 = -26;

	t90 = (((x413+x414)/x415)<=x416);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x417 = INT8_MIN;
	int64_t x418 = INT64_MAX;
	int16_t x419 = 862;
	volatile int32_t t91 = 76318;

	t91 = (((x417+x418)/x419)<=x420);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x421 = INT8_MAX;
	uint32_t x422 = 44823954U;
	uint32_t x423 = UINT32_MAX;
	static int64_t x424 = -1LL;
	int32_t t92 = 840475735;

	t92 = (((x421+x422)/x423)<=x424);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x425 = INT16_MAX;
	int64_t x426 = INT64_MIN;
	int16_t x427 = -1;
	uint32_t x428 = 527U;
	int32_t t93 = 65763;

	t93 = (((x425+x426)/x427)<=x428);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x437 = INT8_MIN;
	volatile int16_t x438 = -1;
	int64_t x439 = INT64_MAX;
	int64_t x440 = INT64_MIN;

	t94 = (((x437+x438)/x439)<=x440);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x442 = -1LL;
	int16_t x444 = INT16_MIN;
	volatile int32_t t95 = 77411594;

	t95 = (((x441+x442)/x443)<=x444);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x445 = -39877967224472LL;
	uint64_t x446 = UINT64_MAX;
	volatile int16_t x447 = INT16_MIN;
	int32_t x448 = -1;
	volatile int32_t t96 = -92;

	t96 = (((x445+x446)/x447)<=x448);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x449 = 10263;
	uint64_t x451 = 63279029414LLU;
	int64_t x452 = -3140650341LL;
	volatile int32_t t97 = 256;

	t97 = (((x449+x450)/x451)<=x452);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x461 = 3;
	int16_t x462 = INT16_MAX;
	static int64_t x463 = -125LL;
	int32_t x464 = INT32_MAX;
	volatile int32_t t98 = -1098;

	t98 = (((x461+x462)/x463)<=x464);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x465 = 416;
	uint64_t x466 = 166087122324LLU;
	static int8_t x467 = INT8_MIN;
	int32_t x468 = -1;
	int32_t t99 = 0;

	t99 = (((x465+x466)/x467)<=x468);

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


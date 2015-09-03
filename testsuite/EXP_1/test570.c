#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x14 = INT32_MAX;
static uint8_t x18 = UINT8_MAX;
int16_t x21 = -1;
int8_t x22 = 1;
static int32_t x24 = -6;
volatile uint64_t x30 = 30448593766915623LLU;
int64_t x32 = INT64_MIN;
int16_t x44 = 103;
static uint32_t x48 = UINT32_MAX;
volatile int8_t x50 = INT8_MAX;
uint8_t x56 = 30U;
static volatile int64_t t13 = -4LL;
int32_t x63 = 351625620;
uint32_t x64 = 123230U;
static uint8_t x68 = 1U;
volatile uint16_t x69 = 57U;
int16_t x74 = INT16_MIN;
int32_t x80 = 261936855;
static int64_t t19 = 236042107LL;
uint16_t x90 = UINT16_MAX;
static uint64_t t21 = 673176LLU;
int16_t x94 = -747;
int64_t x97 = INT64_MAX;
volatile int16_t x98 = 4;
volatile int8_t x106 = -1;
int32_t x108 = 7;
volatile int8_t x109 = INT8_MAX;
static int64_t x113 = INT64_MIN;
static volatile int64_t x116 = 198845525091926570LL;
uint32_t x119 = 484U;
uint32_t t28 = 10716626U;
uint64_t x126 = 7128413462LLU;
volatile int64_t x128 = INT64_MAX;
int32_t x129 = -1;
static volatile int32_t t31 = 154477807;
int16_t x137 = -1;
static volatile int32_t t34 = -1;
int16_t x145 = INT16_MIN;
volatile uint8_t x160 = UINT8_MAX;
int64_t x167 = INT64_MIN;
int64_t x170 = 2129763997310028LL;
uint64_t x177 = 447LLU;
int64_t x180 = -3LL;
uint64_t t41 = 18305LLU;
uint8_t x181 = UINT8_MAX;
int64_t x183 = 449LL;
int64_t x184 = INT64_MAX;
int64_t t42 = 21147351461734336LL;
int32_t x186 = INT32_MAX;
volatile int64_t t43 = -3453LL;
uint64_t t46 = 428268736LLU;
int8_t x205 = INT8_MAX;
static volatile uint64_t t48 = 261991LLU;
uint64_t x227 = 3535424030681679LLU;
volatile uint64_t t51 = 3879808495024182LLU;
volatile int16_t x249 = 122;
int16_t x258 = -1;
int16_t x259 = INT16_MIN;
int8_t x271 = INT8_MIN;
uint64_t t61 = 5623125381LLU;
int64_t x277 = INT64_MAX;
static uint64_t x279 = 127075LLU;
uint64_t t63 = 773849722753620942LLU;
uint32_t x281 = 2034U;
static int16_t x289 = -8;
int32_t x297 = INT32_MIN;
uint64_t t68 = 26275591346875LLU;
static int32_t x302 = 5193888;
uint32_t x306 = 1636233U;
static volatile uint64_t t72 = 556049221078892LLU;
static volatile int32_t x318 = INT32_MIN;
int16_t x332 = -1;
uint32_t x337 = 218329959U;
uint8_t x339 = 1U;
static volatile uint32_t t76 = 6U;
int32_t x343 = 505587;
int8_t x373 = 0;
int64_t t83 = 5LL;
volatile int64_t x377 = -1LL;
volatile uint64_t x378 = 376382159067336983LLU;
int64_t x381 = 0LL;
volatile int64_t t85 = 0LL;
volatile uint8_t x396 = 6U;
int32_t x399 = -393386899;
volatile uint32_t t88 = 3279922U;
int64_t t89 = 1028503LL;
uint8_t x407 = 1U;
uint64_t x409 = 179206429LLU;
uint32_t x412 = 2816U;
uint16_t x426 = UINT16_MAX;
int64_t t96 = 2531020423320LL;
int8_t x450 = -15;


void f0(void) {
	static int64_t x1 = -2649120570121134LL;
	uint16_t x2 = 304U;
	volatile int8_t x3 = -5;
	volatile int8_t x4 = 8;
	static int64_t t0 = 792370897467225552LL;

	t0 = (((x1/x2)%x3)&x4);

	if (t0 != 8LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MIN;
	static int8_t x10 = -1;
	int16_t x11 = INT16_MIN;
	int64_t x12 = INT64_MIN;
	static int64_t t1 = 148674422132602887LL;

	t1 = (((x9/x10)%x11)&x12);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x13 = 409738187;
	uint64_t x15 = 43926310052LLU;
	int32_t x16 = INT32_MIN;
	static volatile uint64_t t2 = 130907173971371LLU;

	t2 = (((x13/x14)%x15)&x16);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = UINT32_MAX;
	int16_t x19 = INT16_MIN;
	static int32_t x20 = -1;
	static volatile uint32_t t3 = 5417391U;

	t3 = (((x17/x18)%x19)&x20);

	if (t3 != 16843009U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x23 = -1;
	volatile int32_t t4 = -3368991;

	t4 = (((x21/x22)%x23)&x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = -59LL;
	int8_t x26 = INT8_MIN;
	uint8_t x27 = 6U;
	uint16_t x28 = 3U;
	int64_t t5 = 1LL;

	t5 = (((x25/x26)%x27)&x28);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x29 = 2621561U;
	int8_t x31 = -1;
	uint64_t t6 = 8635759488LLU;

	t6 = (((x29/x30)%x31)&x32);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = -1;
	volatile int64_t x34 = -1LL;
	int64_t x35 = INT64_MIN;
	uint16_t x36 = UINT16_MAX;
	volatile int64_t t7 = -88974666089294782LL;

	t7 = (((x33/x34)%x35)&x36);

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x37 = -1;
	int64_t x38 = INT64_MIN;
	int32_t x39 = INT32_MIN;
	int8_t x40 = 3;
	int64_t t8 = -35088099499978433LL;

	t8 = (((x37/x38)%x39)&x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = 44;
	static int64_t x42 = 1011884053611520958LL;
	int64_t x43 = 26293657084LL;
	volatile int64_t t9 = -2241157835084217206LL;

	t9 = (((x41/x42)%x43)&x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MIN;
	volatile int64_t x46 = 1586843433015780LL;
	int8_t x47 = INT8_MIN;
	volatile int64_t t10 = -1900393889730860LL;

	t10 = (((x45/x46)%x47)&x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -1;
	uint64_t x51 = 9005340396319898LLU;
	int64_t x52 = 262533131LL;
	volatile uint64_t t11 = 13314LLU;

	t11 = (((x49/x50)%x51)&x52);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x53 = INT8_MAX;
	uint32_t x54 = 2831097U;
	uint16_t x55 = UINT16_MAX;
	volatile uint32_t t12 = 985941019U;

	t12 = (((x53/x54)%x55)&x56);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = -1;
	static int64_t x58 = -5573LL;
	int16_t x59 = INT16_MAX;
	static uint32_t x60 = 23U;

	t13 = (((x57/x58)%x59)&x60);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	int64_t x62 = INT64_MAX;
	static volatile int64_t t14 = -7LL;

	t14 = (((x61/x62)%x63)&x64);

	if (t14 != 123230LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MIN;
	uint64_t x66 = 103101247657LLU;
	static uint16_t x67 = 72U;
	static uint64_t t15 = 1945114LLU;

	t15 = (((x65/x66)%x67)&x68);

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x70 = INT32_MAX;
	uint8_t x71 = UINT8_MAX;
	volatile int32_t x72 = INT32_MIN;
	volatile int32_t t16 = -62111299;

	t16 = (((x69/x70)%x71)&x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MIN;
	uint64_t x75 = UINT64_MAX;
	int8_t x76 = INT8_MIN;
	uint64_t t17 = 113404199LLU;

	t17 = (((x73/x74)%x75)&x76);

	if (t17 != 281474976710656LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MAX;
	int64_t x78 = 52153424LL;
	static int8_t x79 = INT8_MIN;
	int64_t t18 = -1LL;

	t18 = (((x77/x78)%x79)&x80);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x81 = 1064LL;
	uint16_t x82 = 204U;
	int64_t x83 = 3253874781LL;
	int16_t x84 = INT16_MAX;

	t19 = (((x81/x82)%x83)&x84);

	if (t19 != 5LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x85 = UINT64_MAX;
	volatile int16_t x86 = 2;
	int32_t x87 = INT32_MIN;
	int16_t x88 = 0;
	static volatile uint64_t t20 = 8243LLU;

	t20 = (((x85/x86)%x87)&x88);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x89 = -1;
	static int32_t x91 = INT32_MAX;
	uint64_t x92 = 59954585LLU;

	t21 = (((x89/x90)%x91)&x92);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = -4035;
	uint16_t x95 = 5U;
	volatile int8_t x96 = INT8_MIN;
	volatile int32_t t22 = 31;

	t22 = (((x93/x94)%x95)&x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x99 = 1;
	static uint32_t x100 = 8137159U;
	static volatile int64_t t23 = 10634LL;

	t23 = (((x97/x98)%x99)&x100);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MAX;
	static uint8_t x102 = 57U;
	uint16_t x103 = 25U;
	uint32_t x104 = 2382318U;
	uint32_t t24 = 45U;

	t24 = (((x101/x102)%x103)&x104);

	if (t24 != 2U) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x105 = -410;
	uint16_t x107 = 223U;
	int32_t t25 = 1;

	t25 = (((x105/x106)%x107)&x108);

	if (t25 != 3) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x110 = INT16_MIN;
	int8_t x111 = -1;
	static int32_t x112 = -494;
	volatile int32_t t26 = -911036;

	t26 = (((x109/x110)%x111)&x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x114 = 874153U;
	uint64_t x115 = 52029804993558437LLU;
	uint64_t t27 = 268217318964210994LLU;

	t27 = (((x113/x114)%x115)&x116);

	if (t27 != 18032961760870434LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = UINT32_MAX;
	static int8_t x118 = INT8_MIN;
	int16_t x120 = -1;

	t28 = (((x117/x118)%x119)&x120);

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MIN;
	int16_t x122 = -5482;
	int64_t x123 = 27708194780731407LL;
	static volatile int64_t x124 = INT64_MIN;
	volatile int64_t t29 = 966LL;

	t29 = (((x121/x122)%x123)&x124);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x125 = INT32_MAX;
	volatile int16_t x127 = INT16_MIN;
	uint64_t t30 = 3605726302528LLU;

	t30 = (((x125/x126)%x127)&x128);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x130 = INT8_MIN;
	int32_t x131 = -295;
	static uint16_t x132 = UINT16_MAX;

	t31 = (((x129/x130)%x131)&x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x133 = -259781;
	volatile int64_t x134 = INT64_MAX;
	int16_t x135 = INT16_MAX;
	volatile int64_t x136 = INT64_MIN;
	static volatile int64_t t32 = 13LL;

	t32 = (((x133/x134)%x135)&x136);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x138 = -135;
	int8_t x139 = 1;
	int8_t x140 = -12;
	static int32_t t33 = 401;

	t33 = (((x137/x138)%x139)&x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = -1;
	static int8_t x142 = INT8_MIN;
	int16_t x143 = 1951;
	volatile int32_t x144 = 8588091;

	t34 = (((x141/x142)%x143)&x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x146 = INT8_MAX;
	int32_t x147 = 17249190;
	int32_t x148 = INT32_MIN;
	volatile int32_t t35 = INT32_MIN;

	t35 = (((x145/x146)%x147)&x148);

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = -53;
	int8_t x150 = INT8_MIN;
	int64_t x151 = INT64_MIN;
	int8_t x152 = INT8_MIN;
	volatile int64_t t36 = 208LL;

	t36 = (((x149/x150)%x151)&x152);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = 894;
	volatile int64_t x154 = -654300920LL;
	volatile int16_t x155 = INT16_MIN;
	int32_t x156 = -87083526;
	volatile int64_t t37 = -61515LL;

	t37 = (((x153/x154)%x155)&x156);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = -1;
	int32_t x158 = -1;
	int8_t x159 = -1;
	static int32_t t38 = 418;

	t38 = (((x157/x158)%x159)&x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x165 = 656162253U;
	int32_t x166 = -103444;
	volatile int64_t x168 = INT64_MAX;
	volatile int64_t t39 = 2232216044802459LL;

	t39 = (((x165/x166)%x167)&x168);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = INT64_MIN;
	uint32_t x171 = 85U;
	volatile int32_t x172 = INT32_MIN;
	int64_t t40 = -159891621888672LL;

	t40 = (((x169/x170)%x171)&x172);

	if (t40 != -2147483648LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x178 = 55382281U;
	uint8_t x179 = 125U;

	t41 = (((x177/x178)%x179)&x180);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x182 = -1;

	t42 = (((x181/x182)%x183)&x184);

	if (t42 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = INT16_MAX;
	uint16_t x187 = 28988U;
	int64_t x188 = INT64_MIN;

	t43 = (((x185/x186)%x187)&x188);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = INT16_MIN;
	int8_t x190 = INT8_MIN;
	int32_t x191 = -1;
	static int16_t x192 = -1772;
	static int32_t t44 = -726;

	t44 = (((x189/x190)%x191)&x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x197 = 0;
	int32_t x198 = 241;
	int32_t x199 = INT32_MAX;
	volatile uint64_t x200 = UINT64_MAX;
	volatile uint64_t t45 = 483512448703213029LLU;

	t45 = (((x197/x198)%x199)&x200);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x201 = 14067725328599638LL;
	int8_t x202 = INT8_MAX;
	volatile uint64_t x203 = 265741019LLU;
	volatile int8_t x204 = -19;

	t46 = (((x201/x202)%x203)&x204);

	if (t46 != 130344549LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x206 = 2;
	int64_t x207 = -1489683752283612726LL;
	static int32_t x208 = INT32_MIN;
	int64_t t47 = -1613259039LL;

	t47 = (((x205/x206)%x207)&x208);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x209 = 108319920086924581LL;
	volatile uint64_t x210 = UINT64_MAX;
	int8_t x211 = INT8_MAX;
	volatile uint16_t x212 = UINT16_MAX;

	t48 = (((x209/x210)%x211)&x212);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = INT8_MIN;
	static int16_t x218 = INT16_MIN;
	int16_t x219 = -31;
	uint32_t x220 = UINT32_MAX;
	uint32_t t49 = 366066267U;

	t49 = (((x217/x218)%x219)&x220);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x221 = 423385885U;
	static int32_t x222 = -1;
	volatile int32_t x223 = -1;
	int32_t x224 = -1;
	volatile uint32_t t50 = 1238099534U;

	t50 = (((x221/x222)%x223)&x224);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = INT16_MIN;
	uint32_t x226 = UINT32_MAX;
	uint16_t x228 = UINT16_MAX;

	t51 = (((x225/x226)%x227)&x228);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x229 = 25U;
	uint64_t x230 = UINT64_MAX;
	int16_t x231 = -1;
	volatile int64_t x232 = -1LL;
	uint64_t t52 = 9LLU;

	t52 = (((x229/x230)%x231)&x232);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = -1;
	static int16_t x238 = INT16_MIN;
	int16_t x239 = 1;
	int16_t x240 = INT16_MIN;
	static int32_t t53 = -241966;

	t53 = (((x237/x238)%x239)&x240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x241 = 0U;
	int32_t x242 = INT32_MAX;
	int16_t x243 = -1;
	volatile int64_t x244 = INT64_MAX;
	volatile int64_t t54 = -2630541194LL;

	t54 = (((x241/x242)%x243)&x244);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x245 = -105487774LL;
	static int64_t x246 = -1545291LL;
	int64_t x247 = -1LL;
	uint64_t x248 = 13045LLU;
	volatile uint64_t t55 = 130419093205740773LLU;

	t55 = (((x245/x246)%x247)&x248);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x250 = 265151230832144319LLU;
	int8_t x251 = -1;
	int8_t x252 = -1;
	volatile uint64_t t56 = 4428316028875782LLU;

	t56 = (((x249/x250)%x251)&x252);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x253 = INT64_MIN;
	int16_t x254 = INT16_MIN;
	volatile int32_t x255 = INT32_MIN;
	volatile int64_t x256 = INT64_MAX;
	int64_t t57 = 2970LL;

	t57 = (((x253/x254)%x255)&x256);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x257 = 70U;
	uint16_t x260 = 11U;
	int32_t t58 = 77894260;

	t58 = (((x257/x258)%x259)&x260);

	if (t58 != 10) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x261 = 12716842759LLU;
	int8_t x262 = -1;
	uint64_t x263 = UINT64_MAX;
	volatile int32_t x264 = INT32_MIN;
	volatile uint64_t t59 = 1354928076233697LLU;

	t59 = (((x261/x262)%x263)&x264);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x265 = 30160U;
	int32_t x266 = 23304452;
	int16_t x267 = -1;
	int64_t x268 = INT64_MAX;
	volatile int64_t t60 = -470569975861774128LL;

	t60 = (((x265/x266)%x267)&x268);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x269 = 202254105645150LLU;
	static int32_t x270 = 661525;
	static int32_t x272 = INT32_MIN;

	t61 = (((x269/x270)%x271)&x272);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x273 = 1009734256204LLU;
	int16_t x274 = -13746;
	volatile int8_t x275 = INT8_MAX;
	int16_t x276 = -1;
	uint64_t t62 = 6426379080620454146LLU;

	t62 = (((x273/x274)%x275)&x276);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x278 = 10U;
	int64_t x280 = INT64_MIN;

	t63 = (((x277/x278)%x279)&x280);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x282 = -1;
	int8_t x283 = 30;
	uint8_t x284 = UINT8_MAX;
	uint32_t t64 = 24218645U;

	t64 = (((x281/x282)%x283)&x284);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x285 = INT16_MIN;
	int8_t x286 = INT8_MAX;
	static int16_t x287 = INT16_MAX;
	int8_t x288 = INT8_MAX;
	int32_t t65 = -23459637;

	t65 = (((x285/x286)%x287)&x288);

	if (t65 != 126) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x290 = INT8_MIN;
	int8_t x291 = INT8_MAX;
	int8_t x292 = -1;
	int32_t t66 = 513;

	t66 = (((x289/x290)%x291)&x292);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x293 = 352530;
	int16_t x294 = -3;
	static uint8_t x295 = 10U;
	int64_t x296 = INT64_MIN;
	volatile int64_t t67 = 205168109LL;

	t67 = (((x293/x294)%x295)&x296);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x298 = UINT64_MAX;
	int8_t x299 = INT8_MIN;
	int64_t x300 = INT64_MIN;

	t68 = (((x297/x298)%x299)&x300);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x301 = 0;
	uint32_t x303 = 2071689423U;
	int16_t x304 = 1247;
	static uint32_t t69 = 2070746U;

	t69 = (((x301/x302)%x303)&x304);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x305 = 100U;
	uint16_t x307 = UINT16_MAX;
	int32_t x308 = -1;
	uint32_t t70 = 1929036194U;

	t70 = (((x305/x306)%x307)&x308);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x309 = INT64_MAX;
	uint16_t x310 = UINT16_MAX;
	volatile int8_t x311 = -1;
	uint8_t x312 = 7U;
	int64_t t71 = -1710635283496669LL;

	t71 = (((x309/x310)%x311)&x312);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x313 = UINT64_MAX;
	uint64_t x314 = 1990455153768LLU;
	static volatile uint32_t x315 = 469U;
	volatile int64_t x316 = 52304356348LL;

	t72 = (((x313/x314)%x315)&x316);

	if (t72 != 160LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x317 = 3320537U;
	static int8_t x319 = INT8_MIN;
	static volatile uint16_t x320 = UINT16_MAX;
	static uint32_t t73 = 556352U;

	t73 = (((x317/x318)%x319)&x320);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x325 = INT64_MAX;
	int16_t x326 = INT16_MAX;
	int8_t x327 = INT8_MIN;
	int32_t x328 = INT32_MAX;
	volatile int64_t t74 = 175391LL;

	t74 = (((x325/x326)%x327)&x328);

	if (t74 != 8LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x329 = INT16_MIN;
	static volatile int32_t x330 = INT32_MAX;
	int16_t x331 = INT16_MIN;
	static int32_t t75 = -2781;

	t75 = (((x329/x330)%x331)&x332);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x338 = UINT32_MAX;
	uint32_t x340 = UINT32_MAX;

	t76 = (((x337/x338)%x339)&x340);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x341 = INT32_MAX;
	int32_t x342 = 229537207;
	int8_t x344 = INT8_MIN;
	volatile int32_t t77 = -58522;

	t77 = (((x341/x342)%x343)&x344);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x345 = UINT64_MAX;
	int8_t x346 = INT8_MAX;
	static int8_t x347 = INT8_MAX;
	uint8_t x348 = UINT8_MAX;
	uint64_t t78 = 836748LLU;

	t78 = (((x345/x346)%x347)&x348);

	if (t78 != 18LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x349 = INT8_MIN;
	volatile int64_t x350 = INT64_MAX;
	uint8_t x351 = 2U;
	int8_t x352 = -1;
	int64_t t79 = -102907494643882LL;

	t79 = (((x349/x350)%x351)&x352);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x353 = 255195812LLU;
	static int8_t x354 = INT8_MIN;
	int64_t x355 = INT64_MAX;
	volatile int8_t x356 = INT8_MAX;
	uint64_t t80 = 8271743495063262707LLU;

	t80 = (((x353/x354)%x355)&x356);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x357 = 831;
	static uint16_t x358 = 119U;
	int64_t x359 = -22158444091LL;
	int16_t x360 = 4047;
	volatile int64_t t81 = -24834885635LL;

	t81 = (((x357/x358)%x359)&x360);

	if (t81 != 6LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x361 = -517105;
	int16_t x362 = INT16_MIN;
	static int64_t x363 = 480317947902360202LL;
	static int32_t x364 = -1;
	int64_t t82 = 106171248815170LL;

	t82 = (((x361/x362)%x363)&x364);

	if (t82 != 15LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x374 = -47607LL;
	volatile uint32_t x375 = 12031494U;
	int8_t x376 = -1;

	t83 = (((x373/x374)%x375)&x376);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x379 = UINT8_MAX;
	volatile int32_t x380 = -9;
	uint64_t t84 = 34658199056603LLU;

	t84 = (((x377/x378)%x379)&x380);

	if (t84 != 49LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x382 = UINT32_MAX;
	static int64_t x383 = INT64_MIN;
	int32_t x384 = -1;

	t85 = (((x381/x382)%x383)&x384);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x389 = -1;
	uint16_t x390 = UINT16_MAX;
	volatile int32_t x391 = INT32_MIN;
	int32_t x392 = -775373;
	int32_t t86 = 76;

	t86 = (((x389/x390)%x391)&x392);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x393 = -1;
	uint16_t x394 = 120U;
	int8_t x395 = -1;
	volatile int32_t t87 = -2694970;

	t87 = (((x393/x394)%x395)&x396);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x397 = 137U;
	int8_t x398 = INT8_MIN;
	uint32_t x400 = 10U;

	t88 = (((x397/x398)%x399)&x400);

	if (t88 != 10U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x401 = 25U;
	int32_t x402 = INT32_MIN;
	volatile int64_t x403 = INT64_MIN;
	int64_t x404 = INT64_MIN;

	t89 = (((x401/x402)%x403)&x404);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x405 = -1LL;
	int8_t x406 = INT8_MIN;
	int64_t x408 = INT64_MIN;
	int64_t t90 = 2LL;

	t90 = (((x405/x406)%x407)&x408);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x410 = INT32_MIN;
	uint64_t x411 = UINT64_MAX;
	volatile uint64_t t91 = 8008804317070951LLU;

	t91 = (((x409/x410)%x411)&x412);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x413 = 64715587;
	volatile int8_t x414 = INT8_MAX;
	static int8_t x415 = -2;
	int16_t x416 = INT16_MIN;
	static int32_t t92 = 53831;

	t92 = (((x413/x414)%x415)&x416);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x417 = -1;
	volatile uint16_t x418 = UINT16_MAX;
	static volatile uint64_t x419 = 54796069652545898LLU;
	int32_t x420 = INT32_MIN;
	static volatile uint64_t t93 = 16319229210517LLU;

	t93 = (((x417/x418)%x419)&x420);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x421 = 602569178U;
	uint16_t x422 = 223U;
	int32_t x423 = INT32_MIN;
	uint16_t x424 = 15050U;
	volatile uint32_t t94 = 3812553U;

	t94 = (((x421/x422)%x423)&x424);

	if (t94 != 14850U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x425 = UINT64_MAX;
	int16_t x427 = -1;
	uint8_t x428 = 1U;
	static uint64_t t95 = 50767235601LLU;

	t95 = (((x425/x426)%x427)&x428);

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x429 = 821269278326410LL;
	int8_t x430 = 5;
	uint32_t x431 = 2721409U;
	uint16_t x432 = 4U;

	t96 = (((x429/x430)%x431)&x432);

	if (t96 != 4LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x433 = 3U;
	int32_t x434 = -232;
	int16_t x435 = -1;
	int8_t x436 = INT8_MIN;
	volatile int32_t t97 = -24;

	t97 = (((x433/x434)%x435)&x436);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x441 = 632U;
	int8_t x442 = INT8_MIN;
	int64_t x443 = -1LL;
	int64_t x444 = 0LL;
	int64_t t98 = 14527103266LL;

	t98 = (((x441/x442)%x443)&x444);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x449 = 40U;
	static int64_t x451 = -1LL;
	int32_t x452 = INT32_MAX;
	int64_t t99 = 846LL;

	t99 = (((x449/x450)%x451)&x452);

	if (t99 != 0LL) { NG(); } else { ; }
	
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


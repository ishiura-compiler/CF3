#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = 0;
volatile int32_t x3 = -3448013;
uint64_t x14 = UINT64_MAX;
uint64_t t3 = 404624515LLU;
static int8_t x17 = INT8_MAX;
volatile int8_t x18 = INT8_MAX;
volatile int64_t x29 = INT64_MAX;
volatile uint16_t x31 = UINT16_MAX;
volatile int16_t x34 = -1;
int32_t x37 = INT32_MIN;
static volatile int8_t x43 = -1;
int32_t x44 = INT32_MIN;
volatile int64_t t10 = 0LL;
uint64_t x50 = 1177934017238394775LLU;
uint32_t x51 = 1738630U;
int8_t x52 = INT8_MIN;
uint64_t t12 = 2340945714173959408LLU;
uint64_t t13 = 5133862472LLU;
volatile int8_t x65 = 0;
static int32_t x76 = INT32_MIN;
int16_t x88 = -1;
volatile int32_t x95 = INT32_MIN;
int32_t x97 = -1;
static int16_t x100 = INT16_MAX;
uint8_t x105 = 0U;
static uint16_t x112 = UINT16_MAX;
int8_t x113 = INT8_MAX;
int32_t x117 = -1;
int32_t x118 = INT32_MIN;
int8_t x127 = INT8_MAX;
static int16_t x129 = -3687;
uint16_t x134 = UINT16_MAX;
int8_t x136 = -1;
int32_t x140 = 19;
int16_t x142 = INT16_MIN;
volatile int8_t x149 = -11;
int16_t x156 = -399;
volatile int16_t x157 = -2;
int64_t x158 = INT64_MIN;
static int16_t x159 = INT16_MIN;
volatile uint16_t x160 = UINT16_MAX;
static volatile uint32_t x162 = 987U;
static uint32_t t35 = 12866U;
int32_t x165 = 16367972;
int8_t x170 = INT8_MAX;
static int64_t x172 = 389LL;
static volatile uint64_t t37 = 119LLU;
static uint8_t x179 = 6U;
volatile int32_t x187 = INT32_MIN;
uint32_t x190 = UINT32_MAX;
static int64_t x201 = 43922267458LL;
volatile uint64_t x214 = UINT64_MAX;
static volatile uint64_t x215 = 15544145947LLU;
uint16_t x216 = 1530U;
static volatile int64_t t48 = -2548177364952LL;
int64_t x222 = -356915001LL;
static volatile uint8_t x231 = UINT8_MAX;
int16_t x244 = 1;
int64_t t55 = 409824477216702402LL;
int8_t x258 = INT8_MIN;
uint8_t x261 = UINT8_MAX;
uint32_t x264 = 1746367U;
int32_t x267 = INT32_MIN;
int8_t x272 = 1;
static int64_t x273 = -334251464916748LL;
volatile int8_t x283 = INT8_MIN;
int32_t x287 = 1;
int32_t t66 = -50640910;
int32_t t70 = -17694824;
volatile uint64_t t71 = 1385749436358853LLU;
static int32_t x322 = 657420;
volatile uint32_t t73 = 1202759546U;
volatile int32_t t76 = -53623489;
int32_t x341 = INT32_MAX;
static int64_t x347 = -1LL;
uint32_t x348 = UINT32_MAX;
volatile uint8_t x360 = 13U;
volatile int64_t t80 = -4888141517429LL;
uint64_t t81 = 31471355117LLU;
uint64_t x368 = 1100348505094LLU;
volatile int64_t t83 = 3922411704211975LL;
uint8_t x374 = UINT8_MAX;
int64_t x381 = -1LL;
uint32_t x383 = 1643731254U;
int32_t x384 = -1;
static int64_t x385 = -118LL;
int64_t x396 = INT64_MIN;
static volatile uint8_t x400 = 1U;
int16_t x402 = INT16_MAX;
int64_t t91 = -15387994LL;
int32_t x406 = -30082204;
uint8_t x407 = UINT8_MAX;
uint64_t t93 = 158LLU;
uint64_t x423 = 919914849466017893LLU;
static uint64_t x424 = UINT64_MAX;
uint8_t x426 = 20U;
static uint8_t x428 = 5U;
volatile uint64_t x436 = 2970218172228575864LLU;
static volatile uint64_t t98 = 13648LLU;
int64_t x438 = INT64_MAX;
uint32_t x440 = UINT32_MAX;


void f0(void) {
	int8_t x2 = INT8_MIN;
	int8_t x4 = -1;
	static int32_t t0 = 18;

	t0 = (((x1/x2)-x3)%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = UINT32_MAX;
	uint16_t x6 = UINT16_MAX;
	uint16_t x7 = 0U;
	static int32_t x8 = -1;
	uint32_t t1 = 89U;

	t1 = (((x5/x6)-x7)%x8);

	if (t1 != 65537U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 82349111;
	static int8_t x10 = INT8_MIN;
	uint8_t x11 = 31U;
	uint32_t x12 = UINT32_MAX;
	volatile uint32_t t2 = 2U;

	t2 = (((x9/x10)-x11)%x12);

	if (t2 != 4294323913U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int32_t x15 = 56;
	int32_t x16 = 163855;

	t3 = (((x13/x14)-x15)%x16);

	if (t3 != 1240LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x19 = UINT16_MAX;
	uint32_t x20 = 473168U;
	uint32_t t4 = 498U;

	t4 = (((x17/x18)-x19)%x20);

	if (t4 != 428994U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 917LL;
	static volatile int32_t x22 = 89;
	int16_t x23 = -1967;
	volatile int8_t x24 = -48;
	int64_t t5 = -6LL;

	t5 = (((x21/x22)-x23)%x24);

	if (t5 != 9LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x30 = 3621U;
	int32_t x32 = -1;
	static volatile int64_t t6 = -353342110549780046LL;

	t6 = (((x29/x30)-x31)%x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MAX;
	static uint64_t x35 = 8449712952LLU;
	int32_t x36 = INT32_MIN;
	volatile uint64_t t7 = 1649LLU;

	t7 = (((x33/x34)-x35)%x36);

	if (t7 != 18446744065259805897LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x38 = INT32_MAX;
	static volatile int64_t x39 = 36377255501LL;
	static uint64_t x40 = UINT64_MAX;
	volatile uint64_t t8 = 280575178LLU;

	t8 = (((x37/x38)-x39)%x40);

	if (t8 != 18446744037332296114LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MIN;
	int32_t x42 = INT32_MIN;
	int32_t t9 = 1;

	t9 = (((x41/x42)-x43)%x44);

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -254;
	static int64_t x46 = INT64_MIN;
	static int8_t x47 = INT8_MIN;
	int64_t x48 = INT64_MIN;

	t10 = (((x45/x46)-x47)%x48);

	if (t10 != 128LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MIN;
	uint64_t t11 = 3985491LLU;

	t11 = (((x49/x50)-x51)%x52);

	if (t11 != 18446744073707813001LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x53 = 236511464LLU;
	int8_t x54 = INT8_MIN;
	static int8_t x55 = -1;
	int16_t x56 = INT16_MIN;

	t12 = (((x53/x54)-x55)%x56);

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = UINT32_MAX;
	uint64_t x58 = 2917236230589187012LLU;
	uint8_t x59 = 92U;
	static volatile int16_t x60 = INT16_MAX;

	t13 = (((x57/x58)-x59)%x60);

	if (t13 != 32691LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x66 = INT64_MIN;
	int64_t x67 = INT64_MAX;
	static int64_t x68 = -2125525144LL;
	volatile int64_t t14 = -1335216647110018941LL;

	t14 = (((x65/x66)-x67)%x68);

	if (t14 != -1038003231LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = 1097U;
	int8_t x70 = -20;
	int64_t x71 = 6355391036021801LL;
	int16_t x72 = 3802;
	volatile int64_t t15 = -702934661299LL;

	t15 = (((x69/x70)-x71)%x72);

	if (t15 != -2707LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x73 = UINT8_MAX;
	uint64_t x74 = 905200327089LLU;
	int64_t x75 = 117LL;
	static uint64_t t16 = 16411858672LLU;

	t16 = (((x73/x74)-x75)%x76);

	if (t16 != 2147483531LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = INT32_MAX;
	static uint32_t x78 = 29U;
	uint8_t x79 = 34U;
	static volatile int64_t x80 = -1LL;
	volatile int64_t t17 = -762628856LL;

	t17 = (((x77/x78)-x79)%x80);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = -1LL;
	volatile int16_t x82 = -1;
	uint32_t x83 = UINT32_MAX;
	int16_t x84 = -1;
	volatile int64_t t18 = -2103277863979295LL;

	t18 = (((x81/x82)-x83)%x84);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x85 = UINT32_MAX;
	int16_t x86 = INT16_MIN;
	static volatile int64_t x87 = 622109359116826644LL;
	volatile int64_t t19 = -8403191226262202LL;

	t19 = (((x85/x86)-x87)%x88);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = 0LL;
	volatile int32_t x90 = INT32_MIN;
	static int32_t x91 = -1;
	uint8_t x92 = 1U;
	volatile int64_t t20 = 163LL;

	t20 = (((x89/x90)-x91)%x92);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x93 = 677390;
	static uint64_t x94 = UINT64_MAX;
	int16_t x96 = -1;
	uint64_t t21 = 59714386205881LLU;

	t21 = (((x93/x94)-x95)%x96);

	if (t21 != 2147483648LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x98 = -186823150LL;
	uint64_t x99 = 224LLU;
	uint64_t t22 = 9568561264829369LLU;

	t22 = (((x97/x98)-x99)%x100);

	if (t22 != 32559LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint8_t x106 = 61U;
	volatile int8_t x107 = INT8_MIN;
	int8_t x108 = -1;
	int32_t t23 = -40828922;

	t23 = (((x105/x106)-x107)%x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = INT16_MIN;
	int8_t x110 = 1;
	uint16_t x111 = UINT16_MAX;
	volatile int32_t t24 = 208851078;

	t24 = (((x109/x110)-x111)%x112);

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x114 = INT64_MIN;
	uint8_t x115 = 2U;
	int16_t x116 = INT16_MAX;
	static volatile int64_t t25 = -365LL;

	t25 = (((x113/x114)-x115)%x116);

	if (t25 != -2LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x119 = 38;
	int16_t x120 = -370;
	volatile int32_t t26 = -3658;

	t26 = (((x117/x118)-x119)%x120);

	if (t26 != -38) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = -16066;
	static int8_t x126 = -11;
	volatile int64_t x128 = 41499LL;
	volatile int64_t t27 = -34486747356359LL;

	t27 = (((x125/x126)-x127)%x128);

	if (t27 != 1333LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x130 = INT8_MIN;
	int8_t x131 = 21;
	int32_t x132 = INT32_MIN;
	volatile int32_t t28 = 232676093;

	t28 = (((x129/x130)-x131)%x132);

	if (t28 != 7) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = 1;
	uint8_t x135 = UINT8_MAX;
	volatile int32_t t29 = 1;

	t29 = (((x133/x134)-x135)%x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x137 = -346;
	int16_t x138 = -26;
	int64_t x139 = -1LL;
	int64_t t30 = -378031LL;

	t30 = (((x137/x138)-x139)%x140);

	if (t30 != 14LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = -1;
	static int8_t x143 = 0;
	int32_t x144 = 4;
	volatile int32_t t31 = -947307;

	t31 = (((x141/x142)-x143)%x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x150 = INT8_MIN;
	uint64_t x151 = UINT64_MAX;
	uint32_t x152 = UINT32_MAX;
	uint64_t t32 = 2132407982710972LLU;

	t32 = (((x149/x150)-x151)%x152);

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = -4678320;
	int64_t x154 = -29600678370LL;
	static uint16_t x155 = 3U;
	volatile int64_t t33 = -16627839LL;

	t33 = (((x153/x154)-x155)%x156);

	if (t33 != -3LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t t34 = 16364495377404641LL;

	t34 = (((x157/x158)-x159)%x160);

	if (t34 != 32768LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x161 = -1;
	static uint16_t x163 = 244U;
	int32_t x164 = INT32_MIN;

	t35 = (((x161/x162)-x163)%x164);

	if (t35 != 4351293U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x166 = INT8_MIN;
	int16_t x167 = 6265;
	static volatile int16_t x168 = 335;
	int32_t t36 = -112391782;

	t36 = (((x165/x166)-x167)%x168);

	if (t36 != -139) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x169 = -182425749;
	uint64_t x171 = 44LLU;

	t37 = (((x169/x170)-x171)%x172);

	if (t37 != 279LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x173 = 898163615;
	int32_t x174 = INT32_MIN;
	volatile int16_t x175 = 15;
	static uint64_t x176 = 256LLU;
	uint64_t t38 = 18LLU;

	t38 = (((x173/x174)-x175)%x176);

	if (t38 != 241LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = INT64_MAX;
	volatile uint32_t x178 = 182653326U;
	int32_t x180 = INT32_MIN;
	static int64_t t39 = -32825603350944LL;

	t39 = (((x177/x178)-x179)%x180);

	if (t39 != 1104476611LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x181 = 8LLU;
	int16_t x182 = 1;
	static int64_t x183 = INT64_MIN;
	uint32_t x184 = UINT32_MAX;
	uint64_t t40 = 124691LLU;

	t40 = (((x181/x182)-x183)%x184);

	if (t40 != 2147483656LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x185 = INT32_MIN;
	int16_t x186 = 8;
	int32_t x188 = INT32_MIN;
	static volatile int32_t t41 = 115654637;

	t41 = (((x185/x186)-x187)%x188);

	if (t41 != 1879048192) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x189 = INT64_MIN;
	static int8_t x191 = -1;
	uint16_t x192 = 8U;
	volatile int64_t t42 = 314377007535218LL;

	t42 = (((x189/x190)-x191)%x192);

	if (t42 != -7LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x193 = 3185576934979425390LLU;
	volatile uint16_t x194 = UINT16_MAX;
	int32_t x195 = -1;
	static volatile uint16_t x196 = UINT16_MAX;
	uint64_t t43 = 29818335LLU;

	t43 = (((x193/x194)-x195)%x196);

	if (t43 != 38258LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x197 = UINT64_MAX;
	static int32_t x198 = -1;
	uint8_t x199 = UINT8_MAX;
	int64_t x200 = 1954128LL;
	volatile uint64_t t44 = 823025LLU;

	t44 = (((x197/x198)-x199)%x200);

	if (t44 != 393122LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x202 = 463137152765LLU;
	int16_t x203 = 67;
	int8_t x204 = -30;
	volatile uint64_t t45 = 4238766741LLU;

	t45 = (((x201/x202)-x203)%x204);

	if (t45 != 18446744073709551549LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x205 = INT8_MIN;
	static int16_t x206 = -8078;
	uint8_t x207 = 0U;
	uint64_t x208 = UINT64_MAX;
	volatile uint64_t t46 = 167966LLU;

	t46 = (((x205/x206)-x207)%x208);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x213 = INT64_MIN;
	uint64_t t47 = 209512354LLU;

	t47 = (((x213/x214)-x215)%x216);

	if (t47 != 489LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x217 = 1485002;
	int8_t x218 = INT8_MIN;
	uint16_t x219 = 129U;
	int64_t x220 = INT64_MIN;

	t48 = (((x217/x218)-x219)%x220);

	if (t48 != -11730LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x221 = UINT16_MAX;
	static uint64_t x223 = UINT64_MAX;
	volatile uint64_t x224 = 1363LLU;
	static volatile uint64_t t49 = 1020359281509445LLU;

	t49 = (((x221/x222)-x223)%x224);

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x225 = 1;
	static uint64_t x226 = 13984312066381412LLU;
	static int64_t x227 = INT64_MIN;
	int16_t x228 = -2;
	volatile uint64_t t50 = 2LLU;

	t50 = (((x225/x226)-x227)%x228);

	if (t50 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x229 = 1998U;
	int16_t x230 = INT16_MAX;
	volatile uint16_t x232 = 2U;
	volatile int32_t t51 = -951537942;

	t51 = (((x229/x230)-x231)%x232);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x233 = INT8_MIN;
	volatile int8_t x234 = INT8_MAX;
	volatile int32_t x235 = INT32_MIN;
	uint64_t x236 = UINT64_MAX;
	volatile uint64_t t52 = 2943780822913LLU;

	t52 = (((x233/x234)-x235)%x236);

	if (t52 != 2147483647LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x237 = 1U;
	int8_t x238 = -1;
	static int16_t x239 = INT16_MIN;
	static uint32_t x240 = UINT32_MAX;
	uint32_t t53 = 29541521U;

	t53 = (((x237/x238)-x239)%x240);

	if (t53 != 32767U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x241 = -1LL;
	int16_t x242 = INT16_MAX;
	int32_t x243 = 3;
	int64_t t54 = 3378771903819542420LL;

	t54 = (((x241/x242)-x243)%x244);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x245 = INT16_MIN;
	int16_t x246 = 205;
	int16_t x247 = INT16_MIN;
	int64_t x248 = INT64_MAX;

	t55 = (((x245/x246)-x247)%x248);

	if (t55 != 32609LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x249 = 6U;
	volatile uint32_t x250 = UINT32_MAX;
	int32_t x251 = INT32_MAX;
	int64_t x252 = INT64_MIN;
	int64_t t56 = -3304LL;

	t56 = (((x249/x250)-x251)%x252);

	if (t56 != 2147483649LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x257 = INT32_MIN;
	static int32_t x259 = INT32_MAX;
	int64_t x260 = INT64_MIN;
	int64_t t57 = 54637686032LL;

	t57 = (((x257/x258)-x259)%x260);

	if (t57 != -2130706431LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x262 = INT16_MIN;
	int16_t x263 = INT16_MIN;
	volatile uint32_t t58 = 125135407U;

	t58 = (((x261/x262)-x263)%x264);

	if (t58 != 32768U) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x265 = -1LL;
	uint16_t x266 = UINT16_MAX;
	int32_t x268 = INT32_MIN;
	volatile int64_t t59 = 40272LL;

	t59 = (((x265/x266)-x267)%x268);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x269 = 603U;
	volatile int16_t x270 = -1374;
	int8_t x271 = -7;
	volatile int32_t t60 = 0;

	t60 = (((x269/x270)-x271)%x272);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x274 = -1;
	uint32_t x275 = UINT32_MAX;
	static int16_t x276 = INT16_MAX;
	volatile int64_t t61 = 837LL;

	t61 = (((x273/x274)-x275)%x276);

	if (t61 != 14012LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x277 = 7088LL;
	int8_t x278 = -1;
	volatile int8_t x279 = 0;
	int64_t x280 = INT64_MAX;
	volatile int64_t t62 = 227445104285544903LL;

	t62 = (((x277/x278)-x279)%x280);

	if (t62 != -7088LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x281 = INT16_MIN;
	uint16_t x282 = 1U;
	static volatile uint32_t x284 = 4U;
	volatile uint32_t t63 = 1991U;

	t63 = (((x281/x282)-x283)%x284);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x285 = 124616U;
	int16_t x286 = -1;
	uint64_t x288 = 124LLU;
	volatile uint64_t t64 = 296819482LLU;

	t64 = (((x285/x286)-x287)%x288);

	if (t64 != 3LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x289 = INT8_MIN;
	volatile int32_t x290 = INT32_MIN;
	int64_t x291 = INT64_MAX;
	static uint16_t x292 = 16U;
	int64_t t65 = -38495522925344LL;

	t65 = (((x289/x290)-x291)%x292);

	if (t65 != -15LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x293 = 23U;
	volatile int32_t x294 = INT32_MAX;
	uint8_t x295 = 9U;
	int8_t x296 = -1;

	t66 = (((x293/x294)-x295)%x296);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x297 = -21605966;
	static volatile int64_t x298 = INT64_MIN;
	uint16_t x299 = UINT16_MAX;
	int64_t x300 = -1LL;
	int64_t t67 = 246328092LL;

	t67 = (((x297/x298)-x299)%x300);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x301 = 221778;
	int64_t x302 = INT64_MIN;
	volatile uint32_t x303 = 1679759U;
	static uint32_t x304 = 111021U;
	int64_t t68 = -408547162LL;

	t68 = (((x301/x302)-x303)%x304);

	if (t68 != -14444LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x305 = INT16_MIN;
	volatile uint32_t x306 = UINT32_MAX;
	int32_t x307 = -1;
	int16_t x308 = 985;
	volatile uint32_t t69 = 122U;

	t69 = (((x305/x306)-x307)%x308);

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x309 = INT16_MAX;
	static int32_t x310 = INT32_MIN;
	volatile int32_t x311 = INT32_MAX;
	static volatile uint16_t x312 = UINT16_MAX;

	t70 = (((x309/x310)-x311)%x312);

	if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x317 = -50669788633135LL;
	int8_t x318 = INT8_MIN;
	uint64_t x319 = 1978LLU;
	int8_t x320 = 8;

	t71 = (((x317/x318)-x319)%x320);

	if (t71 != 6LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x321 = 0LLU;
	static int32_t x323 = -1;
	uint32_t x324 = 2U;
	static uint64_t t72 = 185900015LLU;

	t72 = (((x321/x322)-x323)%x324);

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x325 = 8;
	uint32_t x326 = 1234U;
	uint32_t x327 = 56U;
	int8_t x328 = INT8_MIN;

	t73 = (((x325/x326)-x327)%x328);

	if (t73 != 72U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x329 = 32U;
	uint16_t x330 = 3U;
	uint16_t x331 = 23200U;
	int32_t x332 = INT32_MAX;
	int32_t t74 = 127;

	t74 = (((x329/x330)-x331)%x332);

	if (t74 != -23190) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x333 = 46LLU;
	volatile uint64_t x334 = 13LLU;
	int64_t x335 = -251794955LL;
	int8_t x336 = -1;
	uint64_t t75 = 33878099252902LLU;

	t75 = (((x333/x334)-x335)%x336);

	if (t75 != 251794958LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x337 = 501;
	uint8_t x338 = 76U;
	uint8_t x339 = UINT8_MAX;
	int16_t x340 = -1;

	t76 = (((x337/x338)-x339)%x340);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x342 = INT16_MIN;
	uint8_t x343 = 6U;
	int64_t x344 = -1LL;
	int64_t t77 = -7LL;

	t77 = (((x341/x342)-x343)%x344);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x345 = 1U;
	volatile uint16_t x346 = 441U;
	static int64_t t78 = -1LL;

	t78 = (((x345/x346)-x347)%x348);

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x353 = 16U;
	int32_t x354 = INT32_MIN;
	volatile uint16_t x355 = UINT16_MAX;
	int32_t x356 = -171211;
	int32_t t79 = 46158;

	t79 = (((x353/x354)-x355)%x356);

	if (t79 != -65535) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x357 = INT64_MIN;
	int32_t x358 = 1;
	static int16_t x359 = INT16_MIN;

	t80 = (((x357/x358)-x359)%x360);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x361 = -1LL;
	uint64_t x362 = 33LLU;
	int8_t x363 = -3;
	int16_t x364 = -1;

	t81 = (((x361/x362)-x363)%x364);

	if (t81 != 558992244657865203LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x365 = 819U;
	int16_t x366 = INT16_MAX;
	uint8_t x367 = UINT8_MAX;
	uint64_t t82 = 4795825901LLU;

	t82 = (((x365/x366)-x367)%x368);

	if (t82 != 1075743917591LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x369 = 2;
	static int32_t x370 = INT32_MIN;
	int64_t x371 = -141188090497LL;
	uint32_t x372 = 1652519U;

	t83 = (((x369/x370)-x371)%x372);

	if (t83 != 172175LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x373 = INT8_MAX;
	int8_t x375 = INT8_MAX;
	uint8_t x376 = 31U;
	volatile int32_t t84 = -51;

	t84 = (((x373/x374)-x375)%x376);

	if (t84 != -3) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x377 = -1218;
	int64_t x378 = -1LL;
	int8_t x379 = INT8_MIN;
	static volatile uint8_t x380 = 1U;
	volatile int64_t t85 = 200000LL;

	t85 = (((x377/x378)-x379)%x380);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x382 = INT16_MAX;
	volatile int64_t t86 = 21443975702312LL;

	t86 = (((x381/x382)-x383)%x384);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x386 = INT32_MAX;
	uint16_t x387 = 11U;
	int8_t x388 = INT8_MAX;
	volatile int64_t t87 = -46866169556152216LL;

	t87 = (((x385/x386)-x387)%x388);

	if (t87 != -11LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x389 = INT8_MIN;
	int16_t x390 = INT16_MAX;
	int32_t x391 = INT32_MAX;
	volatile uint32_t x392 = UINT32_MAX;
	volatile uint32_t t88 = 12637501U;

	t88 = (((x389/x390)-x391)%x392);

	if (t88 != 2147483649U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x393 = 4;
	int64_t x394 = 189607036016402505LL;
	int32_t x395 = INT32_MIN;
	volatile int64_t t89 = -14959LL;

	t89 = (((x393/x394)-x395)%x396);

	if (t89 != 2147483648LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x397 = INT64_MAX;
	int64_t x398 = INT64_MIN;
	uint16_t x399 = 848U;
	int64_t t90 = 746318765LL;

	t90 = (((x397/x398)-x399)%x400);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x401 = -1;
	int32_t x403 = INT32_MAX;
	volatile int64_t x404 = -11075LL;

	t91 = (((x401/x402)-x403)%x404);

	if (t91 != -7922LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x405 = UINT32_MAX;
	static uint32_t x408 = 4U;
	volatile uint32_t t92 = 5U;

	t92 = (((x405/x406)-x407)%x408);

	if (t92 != 2U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x409 = 463469091289LLU;
	static int16_t x410 = INT16_MIN;
	int16_t x411 = -910;
	uint8_t x412 = UINT8_MAX;

	t93 = (((x409/x410)-x411)%x412);

	if (t93 != 145LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x413 = 7984U;
	static int64_t x414 = 370560673LL;
	int16_t x415 = -3205;
	int16_t x416 = INT16_MIN;
	static int64_t t94 = 26956LL;

	t94 = (((x413/x414)-x415)%x416);

	if (t94 != 3205LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x417 = 1682711U;
	int16_t x418 = INT16_MIN;
	int32_t x419 = -79000457;
	uint32_t x420 = UINT32_MAX;
	volatile uint32_t t95 = 0U;

	t95 = (((x417/x418)-x419)%x420);

	if (t95 != 79000457U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x421 = UINT16_MAX;
	int8_t x422 = -1;
	volatile uint64_t t96 = 28794338672LLU;

	t96 = (((x421/x422)-x423)%x424);

	if (t96 != 17526829224243468188LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x425 = INT32_MIN;
	int8_t x427 = -41;
	static int32_t t97 = 23101622;

	t97 = (((x425/x426)-x427)%x428);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x433 = -1;
	int32_t x434 = INT32_MAX;
	int64_t x435 = INT64_MAX;

	t98 = (((x433/x434)-x435)%x436);

	if (t98 != 312717520169048217LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x437 = 104356LLU;
	static volatile int8_t x439 = INT8_MIN;
	static uint64_t t99 = 2250660949369775LLU;

	t99 = (((x437/x438)-x439)%x440);

	if (t99 != 128LLU) { NG(); } else { ; }
	
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


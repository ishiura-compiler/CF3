#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = 3;
volatile uint8_t x6 = 2U;
int64_t t2 = 54111834531917786LL;
int64_t x21 = -90018724005711295LL;
static volatile int8_t x26 = INT8_MIN;
static int64_t x44 = INT64_MAX;
static int32_t x55 = -2;
int64_t x58 = -1LL;
uint16_t x61 = 55U;
int32_t x72 = -3974990;
static int64_t t13 = -132808615616565LL;
int64_t x76 = 107LL;
volatile int64_t t15 = -25015217652499786LL;
static int64_t x91 = INT64_MAX;
int8_t x93 = -1;
uint32_t x101 = UINT32_MAX;
int32_t x103 = -10987710;
volatile int32_t x104 = INT32_MIN;
static volatile int32_t x108 = INT32_MAX;
uint32_t x109 = 170U;
int8_t x111 = INT8_MAX;
int64_t t22 = -95778970895953689LL;
volatile uint64_t t24 = 198619398839LLU;
volatile int16_t x121 = INT16_MAX;
uint16_t x124 = 122U;
volatile uint32_t t25 = 26377U;
volatile int32_t t28 = -79;
int8_t x139 = INT8_MIN;
int8_t x142 = -22;
static volatile uint8_t x152 = 6U;
int64_t x154 = INT64_MIN;
int16_t x159 = INT16_MIN;
int8_t x160 = 28;
uint16_t x167 = 0U;
uint16_t x170 = UINT16_MAX;
static int8_t x171 = INT8_MIN;
volatile uint8_t x175 = UINT8_MAX;
uint16_t x178 = 3795U;
int32_t x182 = 247;
volatile int32_t x199 = INT32_MAX;
static int32_t x204 = -1;
static uint32_t x206 = 8U;
static uint32_t t45 = 104100178U;
static int32_t x212 = 535528;
int32_t x213 = INT32_MIN;
int64_t x217 = INT64_MIN;
int64_t x220 = -1LL;
int16_t x222 = -1;
volatile int64_t x230 = INT64_MIN;
uint64_t x238 = UINT64_MAX;
static volatile int16_t x244 = -1;
int32_t x249 = INT32_MIN;
volatile int64_t x253 = -1LL;
volatile int32_t t56 = 4007875;
int8_t x264 = -1;
int32_t x268 = INT32_MAX;
uint64_t t58 = 2449756LLU;
int32_t x279 = 57419238;
volatile int64_t t61 = 9052290LL;
uint64_t t63 = 1858257992647223LLU;
int8_t x290 = -1;
int32_t x291 = INT32_MAX;
uint64_t x302 = UINT64_MAX;
volatile uint64_t t67 = 283089098LLU;
uint32_t x312 = UINT32_MAX;
volatile int64_t x313 = 1998450881606454532LL;
int32_t x315 = 0;
int8_t x316 = 0;
int64_t x317 = 300190LL;
int32_t x318 = INT32_MIN;
uint8_t x319 = 32U;
int64_t t71 = -5302728LL;
int8_t x321 = 0;
volatile uint64_t x325 = 495792948921849571LLU;
volatile uint16_t x328 = 52U;
volatile int8_t x329 = -1;
uint16_t x330 = UINT16_MAX;
uint64_t x342 = UINT64_MAX;
int8_t x343 = 0;
int64_t x344 = INT64_MIN;
volatile uint64_t t75 = 2LLU;
uint16_t x346 = 5U;
volatile uint64_t t76 = 56LLU;
volatile int32_t x353 = INT32_MIN;
volatile int8_t x365 = INT8_MIN;
uint32_t x367 = 502448U;
static uint64_t x368 = UINT64_MAX;
uint64_t t79 = 3844164134220LLU;
int64_t x370 = INT64_MAX;
uint64_t x378 = 2957960LLU;
int64_t x390 = INT64_MIN;
static uint8_t x398 = 0U;
int16_t x400 = INT16_MIN;
uint64_t x404 = 89075042LLU;
uint64_t t88 = 1320194171389331LLU;
int64_t x406 = -1LL;
static uint16_t x407 = 406U;
static int32_t t90 = 302851116;
int64_t x418 = -1LL;
static int8_t x421 = INT8_MIN;
int16_t x424 = INT16_MIN;
int8_t x427 = INT8_MIN;
int32_t x430 = -1;
volatile uint64_t x435 = UINT64_MAX;
volatile uint64_t t97 = 871919049012837421LLU;
uint8_t x442 = 0U;
int16_t x443 = -60;
volatile uint16_t x449 = 25U;
uint64_t x451 = 2137966512168939LLU;
int64_t x452 = 3660847470136351522LL;


void f0(void) {
	int16_t x1 = 1702;
	int8_t x2 = 56;
	int32_t x3 = INT32_MIN;
	volatile uint32_t x4 = 13U;
	volatile uint32_t t0 = 0U;

	t0 = (((x1-x2)&x3)^x4);

	if (t0 != 13U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x7 = UINT16_MAX;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = -1;

	t1 = (((x5-x6)&x7)^x8);

	if (t1 != -2147483647) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x17 = 1U;
	static uint32_t x18 = UINT32_MAX;
	uint32_t x19 = 26366U;
	int64_t x20 = -7667LL;

	t2 = (((x17-x18)&x19)^x20);

	if (t2 != -7665LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x22 = 0U;
	static int8_t x23 = 0;
	uint16_t x24 = 59U;
	static int64_t t3 = 31985269LL;

	t3 = (((x21-x22)&x23)^x24);

	if (t3 != 59LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = INT8_MIN;
	uint64_t x27 = 15403293LLU;
	volatile int64_t x28 = 4493056015106630764LL;
	volatile uint64_t t4 = 1997350188168065LLU;

	t4 = (((x25-x26)&x27)^x28);

	if (t4 != 4493056015106630764LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = -5742LL;
	int8_t x30 = 12;
	int16_t x31 = INT16_MIN;
	int32_t x32 = -1;
	volatile int64_t t5 = 27LL;

	t5 = (((x29-x30)&x31)^x32);

	if (t5 != 32767LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x33 = INT32_MIN;
	static int8_t x34 = INT8_MIN;
	static int32_t x35 = INT32_MIN;
	static uint16_t x36 = 15U;
	volatile int32_t t6 = -16581;

	t6 = (((x33-x34)&x35)^x36);

	if (t6 != -2147483633) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x41 = INT64_MIN;
	static int8_t x42 = -1;
	volatile int16_t x43 = INT16_MIN;
	int64_t t7 = -35738LL;

	t7 = (((x41-x42)&x43)^x44);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x49 = 52;
	static volatile int32_t x50 = -174;
	int16_t x51 = 676;
	int16_t x52 = -112;
	static volatile int32_t t8 = 39558614;

	t8 = (((x49-x50)&x51)^x52);

	if (t8 != -208) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = INT32_MIN;
	int8_t x54 = -4;
	int8_t x56 = -13;
	volatile int32_t t9 = -38576249;

	t9 = (((x53-x54)&x55)^x56);

	if (t9 != 2147483639) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x57 = -1LL;
	static int32_t x59 = INT32_MIN;
	volatile int32_t x60 = INT32_MIN;
	volatile int64_t t10 = 87922526735LL;

	t10 = (((x57-x58)&x59)^x60);

	if (t10 != -2147483648LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x62 = 16088LL;
	static int64_t x63 = INT64_MIN;
	static int32_t x64 = 24;
	volatile int64_t t11 = 545147040LL;

	t11 = (((x61-x62)&x63)^x64);

	if (t11 != -9223372036854775784LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x65 = 780994407538954250LLU;
	int64_t x66 = 13702022763LL;
	uint64_t x67 = UINT64_MAX;
	uint16_t x68 = UINT16_MAX;
	volatile uint64_t t12 = 2114689054529LLU;

	t12 = (((x65-x66)&x67)^x68);

	if (t12 != 780994393836893792LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x69 = -1LL;
	int64_t x70 = -17264566LL;
	volatile int16_t x71 = INT16_MAX;

	t13 = (((x69-x70)&x71)^x72);

	if (t13 != -3983609LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x73 = INT16_MAX;
	uint64_t x74 = UINT64_MAX;
	int16_t x75 = -1;
	volatile uint64_t t14 = 268647458099LLU;

	t14 = (((x73-x74)&x75)^x76);

	if (t14 != 32875LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = 1;
	static uint16_t x78 = 6435U;
	volatile int8_t x79 = INT8_MIN;
	int64_t x80 = INT64_MIN;

	t15 = (((x77-x78)&x79)^x80);

	if (t15 != 9223372036854769280LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x85 = -16;
	int8_t x86 = INT8_MAX;
	uint64_t x87 = 241189525759LLU;
	volatile uint32_t x88 = UINT32_MAX;
	uint64_t t16 = 11094226136783LLU;

	t16 = (((x85-x86)&x87)^x88);

	if (t16 != 244141778830LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x89 = UINT8_MAX;
	uint16_t x90 = 415U;
	int8_t x92 = -3;
	static int64_t t17 = 13334627081095LL;

	t17 = (((x89-x90)&x91)^x92);

	if (t17 != -9223372036854775651LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x94 = -1;
	volatile int8_t x95 = 18;
	int32_t x96 = INT32_MIN;
	static int32_t t18 = INT32_MIN;

	t18 = (((x93-x94)&x95)^x96);

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x97 = 14303U;
	static uint32_t x98 = 1818820U;
	uint64_t x99 = 69200LLU;
	static int32_t x100 = INT32_MAX;
	volatile uint64_t t19 = 286LLU;

	t19 = (((x97-x98)&x99)^x100);

	if (t19 != 2147482095LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x102 = 222403U;
	uint32_t t20 = 97980429U;

	t20 = (((x101-x102)&x103)^x104);

	if (t20 != 2136478464U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x105 = 1;
	static uint16_t x106 = 25U;
	uint64_t x107 = UINT64_MAX;
	volatile uint64_t t21 = 37528328LLU;

	t21 = (((x105-x106)&x107)^x108);

	if (t21 != 18446744071562067991LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x110 = 385;
	volatile int64_t x112 = INT64_MIN;

	t22 = (((x109-x110)&x111)^x112);

	if (t22 != -9223372036854775767LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x113 = UINT32_MAX;
	int32_t x114 = INT32_MIN;
	volatile int32_t x115 = INT32_MIN;
	int64_t x116 = INT64_MAX;
	int64_t t23 = INT64_MAX;

	t23 = (((x113-x114)&x115)^x116);

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x117 = INT64_MIN;
	uint64_t x118 = 149LLU;
	uint64_t x119 = UINT64_MAX;
	static uint8_t x120 = 86U;

	t24 = (((x117-x118)&x119)^x120);

	if (t24 != 9223372036854775613LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x122 = 19U;
	int8_t x123 = -3;

	t25 = (((x121-x122)&x123)^x124);

	if (t25 != 32662U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x125 = INT64_MIN;
	int64_t x126 = INT64_MIN;
	int32_t x127 = INT32_MAX;
	static uint8_t x128 = 1U;
	volatile int64_t t26 = -28LL;

	t26 = (((x125-x126)&x127)^x128);

	if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint64_t x129 = 5076414539LLU;
	static int32_t x130 = INT32_MAX;
	uint16_t x131 = 33U;
	int64_t x132 = -209LL;
	uint64_t t27 = 2406699316590LLU;

	t27 = (((x129-x130)&x131)^x132);

	if (t27 != 18446744073709551407LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x133 = INT8_MIN;
	volatile int16_t x134 = INT16_MIN;
	static uint16_t x135 = UINT16_MAX;
	volatile uint16_t x136 = UINT16_MAX;

	t28 = (((x133-x134)&x135)^x136);

	if (t28 != 32895) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x137 = -2;
	static uint64_t x138 = 62LLU;
	int64_t x140 = INT64_MIN;
	uint64_t t29 = 0LLU;

	t29 = (((x137-x138)&x139)^x140);

	if (t29 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x141 = INT8_MIN;
	static uint32_t x143 = 20207928U;
	int32_t x144 = INT32_MAX;
	volatile uint32_t t30 = 27785406U;

	t30 = (((x141-x142)&x143)^x144);

	if (t30 != 2127275759U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = -1;
	volatile uint64_t x150 = UINT64_MAX;
	int8_t x151 = 8;
	volatile uint64_t t31 = 66598285694LLU;

	t31 = (((x149-x150)&x151)^x152);

	if (t31 != 6LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x153 = -7;
	uint16_t x155 = UINT16_MAX;
	int64_t x156 = INT64_MAX;
	volatile int64_t t32 = -8355551LL;

	t32 = (((x153-x154)&x155)^x156);

	if (t32 != 9223372036854710278LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x157 = 0U;
	int16_t x158 = INT16_MIN;
	volatile int32_t t33 = -204340;

	t33 = (((x157-x158)&x159)^x160);

	if (t33 != 32796) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x161 = -2;
	volatile uint8_t x162 = 47U;
	uint32_t x163 = 91515292U;
	static uint64_t x164 = 37LLU;
	static volatile uint64_t t34 = 48LLU;

	t34 = (((x161-x162)&x163)^x164);

	if (t34 != 91515305LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x165 = 0;
	volatile int16_t x166 = INT16_MAX;
	int16_t x168 = INT16_MIN;
	volatile int32_t t35 = 337;

	t35 = (((x165-x166)&x167)^x168);

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x169 = UINT8_MAX;
	int8_t x172 = INT8_MIN;
	int32_t t36 = 415526587;

	t36 = (((x169-x170)&x171)^x172);

	if (t36 != 65152) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x173 = INT8_MAX;
	volatile int32_t x174 = -12933;
	int8_t x176 = -1;
	volatile int32_t t37 = 1;

	t37 = (((x173-x174)&x175)^x176);

	if (t37 != -5) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x177 = 14834246U;
	int16_t x179 = INT16_MAX;
	static int64_t x180 = 54232199LL;
	int64_t t38 = -7717988LL;

	t38 = (((x177-x178)&x179)^x180);

	if (t38 != 54251508LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x181 = INT16_MIN;
	int16_t x183 = INT16_MIN;
	uint8_t x184 = UINT8_MAX;
	int32_t t39 = 33980631;

	t39 = (((x181-x182)&x183)^x184);

	if (t39 != -65281) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x185 = INT8_MIN;
	int64_t x186 = INT64_MIN;
	int16_t x187 = INT16_MAX;
	uint32_t x188 = UINT32_MAX;
	int64_t t40 = -16765228704009619LL;

	t40 = (((x185-x186)&x187)^x188);

	if (t40 != 4294934655LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x189 = -11;
	int32_t x190 = -5595;
	int32_t x191 = INT32_MAX;
	static int16_t x192 = -129;
	int32_t t41 = -3;

	t41 = (((x189-x190)&x191)^x192);

	if (t41 != -5457) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x193 = INT16_MIN;
	uint16_t x194 = UINT16_MAX;
	int8_t x195 = -1;
	static int8_t x196 = INT8_MIN;
	volatile int32_t t42 = 36;

	t42 = (((x193-x194)&x195)^x196);

	if (t42 != 98177) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x197 = 123U;
	uint32_t x198 = 308U;
	volatile int64_t x200 = -1LL;
	int64_t t43 = -1443490204LL;

	t43 = (((x197-x198)&x199)^x200);

	if (t43 != -2147483464LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x201 = 1;
	volatile int64_t x202 = -2199893885359588043LL;
	int8_t x203 = 8;
	int64_t t44 = 77126357LL;

	t44 = (((x201-x202)&x203)^x204);

	if (t44 != -9LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x205 = INT32_MAX;
	int32_t x207 = -1;
	int8_t x208 = -7;

	t45 = (((x205-x206)&x207)^x208);

	if (t45 != 2147483662U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x209 = 14U;
	static int16_t x210 = INT16_MIN;
	int64_t x211 = INT64_MIN;
	static int64_t t46 = -110793151094LL;

	t46 = (((x209-x210)&x211)^x212);

	if (t46 != 535528LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x214 = 259210U;
	uint64_t x215 = 16605294587LLU;
	int32_t x216 = INT32_MIN;
	volatile uint64_t t47 = 400196292LLU;

	t47 = (((x213-x214)&x215)^x216);

	if (t47 != 18446744073134934898LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x218 = INT32_MIN;
	uint8_t x219 = 3U;
	volatile int64_t t48 = -33LL;

	t48 = (((x217-x218)&x219)^x220);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x221 = 6387262;
	int32_t x223 = 21709;
	int64_t x224 = -327LL;
	volatile int64_t t49 = 2015119LL;

	t49 = (((x221-x222)&x223)^x224);

	if (t49 != -21836LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x229 = INT64_MIN;
	volatile int32_t x231 = 363781569;
	static int64_t x232 = INT64_MIN;
	volatile int64_t t50 = INT64_MIN;

	t50 = (((x229-x230)&x231)^x232);

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x237 = INT16_MAX;
	int8_t x239 = -1;
	static int16_t x240 = 10;
	uint64_t t51 = 4581389023234LLU;

	t51 = (((x237-x238)&x239)^x240);

	if (t51 != 32778LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x241 = INT32_MIN;
	uint64_t x242 = UINT64_MAX;
	int32_t x243 = -1;
	uint64_t t52 = 24604911592237LLU;

	t52 = (((x241-x242)&x243)^x244);

	if (t52 != 2147483646LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x245 = INT8_MIN;
	int8_t x246 = INT8_MIN;
	int64_t x247 = INT64_MAX;
	int32_t x248 = INT32_MIN;
	int64_t t53 = -1520065LL;

	t53 = (((x245-x246)&x247)^x248);

	if (t53 != -2147483648LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x250 = -1;
	static uint8_t x251 = 6U;
	volatile uint64_t x252 = UINT64_MAX;
	static uint64_t t54 = UINT64_MAX;

	t54 = (((x249-x250)&x251)^x252);

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x254 = INT8_MIN;
	volatile int16_t x255 = -11;
	int8_t x256 = -1;
	static volatile int64_t t55 = 646362530406624586LL;

	t55 = (((x253-x254)&x255)^x256);

	if (t55 != -118LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x257 = 932U;
	volatile int8_t x258 = INT8_MIN;
	int8_t x259 = INT8_MIN;
	static int8_t x260 = 0;

	t56 = (((x257-x258)&x259)^x260);

	if (t56 != 1024) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x261 = -48;
	uint16_t x262 = 31345U;
	uint8_t x263 = UINT8_MAX;
	static volatile int32_t t57 = 410032874;

	t57 = (((x261-x262)&x263)^x264);

	if (t57 != -96) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x265 = 1185767635511LL;
	uint64_t x266 = 3773384656008493897LLU;
	int64_t x267 = -1LL;

	t58 = (((x265-x266)&x267)^x268);

	if (t58 != 14673360602429751569LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x269 = -1;
	static uint8_t x270 = 2U;
	int16_t x271 = INT16_MIN;
	int8_t x272 = INT8_MIN;
	int32_t t59 = 61712707;

	t59 = (((x269-x270)&x271)^x272);

	if (t59 != 32640) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x273 = INT16_MIN;
	static int16_t x274 = -1;
	static int16_t x275 = -5094;
	static uint32_t x276 = 39U;
	uint32_t t60 = 167419993U;

	t60 = (((x273-x274)&x275)^x276);

	if (t60 != 4294934567U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x277 = -25363LL;
	uint8_t x278 = UINT8_MAX;
	int16_t x280 = 3999;

	t61 = (((x277-x278)&x279)^x280);

	if (t61 != 57413241LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x281 = -296771861LL;
	static volatile int64_t x282 = 25LL;
	int8_t x283 = 4;
	uint32_t x284 = 14019U;
	int64_t t62 = 68LL;

	t62 = (((x281-x282)&x283)^x284);

	if (t62 != 14019LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x285 = 0LLU;
	volatile int32_t x286 = -1;
	uint64_t x287 = 145137942766457994LLU;
	volatile uint8_t x288 = 2U;

	t63 = (((x285-x286)&x287)^x288);

	if (t63 != 2LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x289 = INT32_MIN;
	static int8_t x292 = -1;
	volatile int32_t t64 = 1357066;

	t64 = (((x289-x290)&x291)^x292);

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x293 = -48569461;
	uint64_t x294 = UINT64_MAX;
	int8_t x295 = -1;
	volatile int8_t x296 = -1;
	volatile uint64_t t65 = 29235LLU;

	t65 = (((x293-x294)&x295)^x296);

	if (t65 != 48569459LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x297 = -1;
	uint64_t x298 = 24381993670883LLU;
	int16_t x299 = INT16_MIN;
	int64_t x300 = INT64_MIN;
	static uint64_t t66 = 788279728LLU;

	t66 = (((x297-x298)&x299)^x300);

	if (t66 != 9223347654861094912LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x301 = 7;
	int8_t x303 = INT8_MIN;
	volatile int32_t x304 = INT32_MIN;

	t67 = (((x301-x302)&x303)^x304);

	if (t67 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x305 = 6122622LL;
	int32_t x306 = INT32_MIN;
	int16_t x307 = INT16_MIN;
	int8_t x308 = 0;
	static int64_t t68 = 311628227942LL;

	t68 = (((x305-x306)&x307)^x308);

	if (t68 != 2153578496LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x309 = UINT16_MAX;
	int16_t x310 = INT16_MIN;
	volatile int16_t x311 = INT16_MIN;
	uint32_t t69 = 866991U;

	t69 = (((x309-x310)&x311)^x312);

	if (t69 != 4294901759U) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x314 = 1;
	int64_t t70 = -35LL;

	t70 = (((x313-x314)&x315)^x316);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x320 = 743;

	t71 = (((x317-x318)&x319)^x320);

	if (t71 != 743LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x322 = 1552;
	uint32_t x323 = 585U;
	static int32_t x324 = INT32_MAX;
	uint32_t t72 = 10623U;

	t72 = (((x321-x322)&x323)^x324);

	if (t72 != 2147483583U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x326 = INT32_MIN;
	static int64_t x327 = -1LL;
	volatile uint64_t t73 = 3535LLU;

	t73 = (((x325-x326)&x327)^x328);

	if (t73 != 495792951069333207LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x331 = UINT32_MAX;
	int16_t x332 = INT16_MAX;
	static uint32_t t74 = 94259362U;

	t74 = (((x329-x330)&x331)^x332);

	if (t74 != 4294934527U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x341 = UINT8_MAX;

	t75 = (((x341-x342)&x343)^x344);

	if (t75 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x345 = 1U;
	volatile int16_t x347 = INT16_MIN;
	static uint64_t x348 = 3182LLU;

	t76 = (((x345-x346)&x347)^x348);

	if (t76 != 18446744073709522030LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x354 = 217402703LL;
	uint8_t x355 = 3U;
	int32_t x356 = INT32_MAX;
	static volatile int64_t t77 = -2LL;

	t77 = (((x353-x354)&x355)^x356);

	if (t77 != 2147483646LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x361 = 63U;
	volatile int8_t x362 = 4;
	uint8_t x363 = UINT8_MAX;
	int32_t x364 = -1;
	static int32_t t78 = 543923;

	t78 = (((x361-x362)&x363)^x364);

	if (t78 != -60) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x366 = 448U;

	t79 = (((x365-x366)&x367)^x368);

	if (t79 != 18446744073709049727LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x369 = -1LL;
	uint32_t x371 = UINT32_MAX;
	int8_t x372 = INT8_MIN;
	volatile int64_t t80 = 1928690097983LL;

	t80 = (((x369-x370)&x371)^x372);

	if (t80 != -128LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x373 = 203;
	static volatile int16_t x374 = -1;
	int8_t x375 = 17;
	int64_t x376 = 1889269LL;
	volatile int64_t t81 = -31283864271337LL;

	t81 = (((x373-x374)&x375)^x376);

	if (t81 != 1889269LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x377 = 0U;
	int64_t x379 = 7628589271730243LL;
	int32_t x380 = INT32_MAX;
	volatile uint64_t t82 = 55786902338431LLU;

	t82 = (((x377-x378)&x379)^x380);

	if (t82 != 7628588413040575LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x381 = -1LL;
	int64_t x382 = INT64_MIN;
	int16_t x383 = 11349;
	uint8_t x384 = UINT8_MAX;
	static volatile int64_t t83 = -59877851407923LL;

	t83 = (((x381-x382)&x383)^x384);

	if (t83 != 11434LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x385 = 1U;
	int64_t x386 = INT64_MAX;
	volatile int8_t x387 = 44;
	volatile uint8_t x388 = 0U;
	volatile int64_t t84 = 967679855277LL;

	t84 = (((x385-x386)&x387)^x388);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x389 = -28;
	volatile uint16_t x391 = 2U;
	static volatile int64_t x392 = INT64_MIN;
	int64_t t85 = INT64_MIN;

	t85 = (((x389-x390)&x391)^x392);

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x393 = INT64_MIN;
	int64_t x394 = INT64_MIN;
	static uint16_t x395 = 10U;
	uint64_t x396 = 421518779664516001LLU;
	uint64_t t86 = 3299197652995149LLU;

	t86 = (((x393-x394)&x395)^x396);

	if (t86 != 421518779664516001LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x397 = -1;
	uint32_t x399 = UINT32_MAX;
	uint32_t t87 = 210504759U;

	t87 = (((x397-x398)&x399)^x400);

	if (t87 != 32767U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x401 = UINT64_MAX;
	int32_t x402 = INT32_MIN;
	uint32_t x403 = 2U;

	t88 = (((x401-x402)&x403)^x404);

	if (t88 != 89075040LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x405 = INT32_MIN;
	volatile uint16_t x408 = 28040U;
	static volatile int64_t t89 = 10337143945745784LL;

	t89 = (((x405-x406)&x407)^x408);

	if (t89 != 28040LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x409 = INT16_MAX;
	volatile int16_t x410 = INT16_MIN;
	int8_t x411 = 2;
	volatile int8_t x412 = 9;

	t90 = (((x409-x410)&x411)^x412);

	if (t90 != 11) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x413 = UINT16_MAX;
	uint32_t x414 = 3U;
	uint16_t x415 = 3U;
	uint64_t x416 = UINT64_MAX;
	volatile uint64_t t91 = UINT64_MAX;

	t91 = (((x413-x414)&x415)^x416);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x417 = -1;
	int32_t x419 = -10;
	int32_t x420 = 1;
	volatile int64_t t92 = 324LL;

	t92 = (((x417-x418)&x419)^x420);

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x422 = UINT32_MAX;
	volatile int32_t x423 = INT32_MAX;
	static uint32_t t93 = 431U;

	t93 = (((x421-x422)&x423)^x424);

	if (t93 != 2147516289U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x425 = 53581901135887LL;
	volatile uint32_t x426 = 1U;
	uint32_t x428 = 1460523424U;
	int64_t t94 = 0LL;

	t94 = (((x425-x426)&x427)^x428);

	if (t94 != 53583292846496LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x429 = -1;
	int16_t x431 = INT16_MIN;
	int16_t x432 = 8;
	int32_t t95 = 16936;

	t95 = (((x429-x430)&x431)^x432);

	if (t95 != 8) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x433 = 22LLU;
	static int64_t x434 = -1LL;
	uint32_t x436 = 2082249344U;
	uint64_t t96 = 77507492445LLU;

	t96 = (((x433-x434)&x435)^x436);

	if (t96 != 2082249367LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x437 = UINT16_MAX;
	uint8_t x438 = 1U;
	uint64_t x439 = 1447362744974843LLU;
	static uint64_t x440 = UINT64_MAX;

	t97 = (((x437-x438)&x439)^x440);

	if (t97 != 18446744073709519365LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x441 = UINT16_MAX;
	int64_t x444 = INT64_MAX;
	static volatile int64_t t98 = -946428195LL;

	t98 = (((x441-x442)&x443)^x444);

	if (t98 != 9223372036854710331LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x450 = 1295676750U;
	static volatile uint64_t t99 = 115713589907900469LLU;

	t99 = (((x449-x450)&x451)^x452);

	if (t99 != 3660847470366740969LLU) { NG(); } else { ; }
	
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

